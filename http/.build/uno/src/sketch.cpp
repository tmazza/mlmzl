#include <Arduino.h>
#include <Adafruit_NeoPixel.h>
#include <SPI.h>
#include <Ethernet.h>
#include <ArduinoJson.h>
void setup();
void loop();
void sendResponse(EthernetClient client);
void ligaLED(int g, unsigned long fita);
void apagaLED(int g);
int mountAddress(int x, int y);
unsigned int strToHex(const char * s);
#line 1 "src/sketch.ino"
//#include <Adafruit_NeoPixel.h>
//#include <SPI.h>
//#include <Ethernet.h>
//#include <ArduinoJson.h>

#define LED_PER_COL 7
#define LED_PER_LIN 7
#define Z 0x0000FF //AZUL
#define E 0x008000 //VERDE
#define L 0xFFA500 //LARANJA
#define A 0xFFFF00 //AMARELO
#define R 0x008800 //VERMELHO
#define PIN 4 // Pino de controle
#define LED_COUNT 60 // Quantidade de LED's

Adafruit_NeoPixel leds = Adafruit_NeoPixel(LED_COUNT, PIN, NEO_GRB + NEO_KHZ800);

// Enter a MAC address and IP address for your controller below.
// The IP address will be dependent on your local network:
byte mac[] = {
  0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED
};
IPAddress ip(192, 168, 2, 177);

StaticJsonBuffer<100> jsonBuffer;
EthernetServer server(80);

char message[50];
int messageSize=0;

int cmd;
int mx;
int my;
const char * color;

void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }
  leds.begin(); // Inicia a fita de LED
  leds.show(); // Atualiza o estados dos LEDs 

  // start the Ethernet connection and the server:
  Ethernet.begin(mac, ip);
  server.begin();
  Serial.print("server is at ");
  Serial.println(Ethernet.localIP());
}

void loop() {
  // listen for incoming clients
  EthernetClient client = server.available();
  if (client) {
    Serial.println("new client");
    // an http request ends with a blank line
    boolean currentLineIsBlank = true;
    boolean readData = false;
    while (client.connected()) {
      if (client.available()) {
        char c = client.read();
				
        if(readData) {
		      Serial.print(c);
        	message[messageSize] = c;
        	messageSize++;
        }

        if (c == '\n' && currentLineIsBlank) {
	  			if(readData) {
	  				sendResponse(client);
	  				break;
	  			} else {
	          readData = true;
	  			}
        }
        if (c == '\n') {
          // you're starting a new line
          currentLineIsBlank = true;
        } else if (c != '\r') {
          // you've gotten a character on the current line
          currentLineIsBlank = false;
        }

      }
    }
    // give the web browser time to receive the data
    delay(1);
    // close the connection:
    client.stop();
    Serial.println("client disconnected");

    Serial.println("MESSAGE:");
    Serial.println(message);
		JsonObject& root = jsonBuffer.parseObject(message);
		jsonBuffer.clear();
		cmd = root["cmd"];
		mx = root["x"];
		my = root["y"];
		color = root["color"];

		if(cmd == 1) {
			ligaLED(mountAddress(mx,my), strToHex(color));
		} else {
			apagaLED(mountAddress(mx,my));
		}
		Serial.println(cmd);
		Serial.println(mx);
		Serial.println(my);
		Serial.println(color);

		for(int i=0;i<messageSize;i++) message[i] = '\0';
		messageSize = 0;

  }
}

// send a standard http response header
void sendResponse(EthernetClient client) {
  client.println("HTTP/1.1 200 OK");
  client.println("Content-Type: application/json");
  client.println("Connection: close");  // the connection will be closed after completion of the response
  client.println();
  client.println("{\"move\":{\"direction\":1,\"speed\":2}}");
}


//Função liga led individual
void ligaLED(int g, unsigned long fita)//Recebe a posição e tempo de Delay
{
leds.setPixelColor(g, fita);//Aciona o LED requerido
 leds.show();//Atualiza o LED
}


//Função apaga LED individual
void apagaLED(int g)
{
leds.setPixelColor(g, 0);//Desaciona o LED requerido
 leds.show();//Atualiza o LED
}

/**
 * Converte um endereço x,y para um número sequencial entre 0 e mxn.
 * Em uma matriz 3x3 a seguinte sequência será gerada:
 *   6 7 8
 *   5 4 3
 *   0 1 2
 */
int mountAddress(int x, int y) {
    int line = (LED_PER_LIN-1 - x) * LED_PER_COL;
    if(line % 2 == 0) {
        return line + y + 1;
    } else {
        return line + (LED_PER_COL-1 - y) + 1;
    }
}


unsigned int strToHex(const char * s) {
 unsigned int result = 0;
 int c ;
 if ('0' == *s && 'x' == *(s+1)) { s+=2;
  while (*s) {
   result = result << 4;
   if (c=(*s-'0'),(c>=0 && c <=9)) result|=c;
   else if (c=(*s-'A'),(c>=0 && c <=5)) result|=(c+10);
   else if (c=(*s-'a'),(c>=0 && c <=5)) result|=(c+10);
   else break;
   ++s;
  }
 }
 return result;
}