

























.build/uno/ArduinoJson/libArduinoJson.a : 
	@echo [92mLinking libArduinoJson.a[0m
	@/usr/share/arduino/hardware/tools/avr/bin/avr-ar rcs $@ $^







.build/uno/Adafruit_NeoPixel/esp8266.o : lib/Adafruit_NeoPixel/esp8266.c
	@echo [93mAdafruit_NeoPixel/esp8266.c[0m
	@mkdir -p .build/uno/Adafruit_NeoPixel
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/ArduinoJson -Ilib/ArduinoJson/src -Ilib/ArduinoJson/src/ArduinoJson -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/Adafruit_NeoPixel -I/usr/share/arduino/libraries/Ethernet -I/usr/share/arduino/libraries/Ethernet/utility -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc   -o $@ -c lib/Adafruit_NeoPixel/esp8266.c
include .build/uno/Adafruit_NeoPixel/esp8266.d






.build/uno/Adafruit_NeoPixel/Adafruit_NeoPixel.o : lib/Adafruit_NeoPixel/Adafruit_NeoPixel.cpp
	@echo [93mAdafruit_NeoPixel/Adafruit_NeoPixel.cpp[0m
	@mkdir -p .build/uno/Adafruit_NeoPixel
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/ArduinoJson -Ilib/ArduinoJson/src -Ilib/ArduinoJson/src/ArduinoJson -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/Adafruit_NeoPixel -I/usr/share/arduino/libraries/Ethernet -I/usr/share/arduino/libraries/Ethernet/utility -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c lib/Adafruit_NeoPixel/Adafruit_NeoPixel.cpp
include .build/uno/Adafruit_NeoPixel/Adafruit_NeoPixel.d



.build/uno/Adafruit_NeoPixel/libAdafruit_NeoPixel.a : .build/uno/Adafruit_NeoPixel/esp8266.o .build/uno/Adafruit_NeoPixel/Adafruit_NeoPixel.o
	@echo [92mLinking libAdafruit_NeoPixel.a[0m
	@/usr/share/arduino/hardware/tools/avr/bin/avr-ar rcs $@ $^












.build/uno/Ethernet/utility/socket.o : /usr/share/arduino/libraries/Ethernet/utility/socket.cpp
	@echo [93mEthernet/utility/socket.cpp[0m
	@mkdir -p .build/uno/Ethernet/utility
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/ArduinoJson -Ilib/ArduinoJson/src -Ilib/ArduinoJson/src/ArduinoJson -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/Adafruit_NeoPixel -I/usr/share/arduino/libraries/Ethernet -I/usr/share/arduino/libraries/Ethernet/utility -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/libraries/Ethernet/utility/socket.cpp
include .build/uno/Ethernet/utility/socket.d

.build/uno/Ethernet/utility/w5100.o : /usr/share/arduino/libraries/Ethernet/utility/w5100.cpp
	@echo [93mEthernet/utility/w5100.cpp[0m
	@mkdir -p .build/uno/Ethernet/utility
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/ArduinoJson -Ilib/ArduinoJson/src -Ilib/ArduinoJson/src/ArduinoJson -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/Adafruit_NeoPixel -I/usr/share/arduino/libraries/Ethernet -I/usr/share/arduino/libraries/Ethernet/utility -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/libraries/Ethernet/utility/w5100.cpp
include .build/uno/Ethernet/utility/w5100.d

.build/uno/Ethernet/EthernetClient.o : /usr/share/arduino/libraries/Ethernet/EthernetClient.cpp
	@echo [93mEthernet/EthernetClient.cpp[0m
	@mkdir -p .build/uno/Ethernet
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/ArduinoJson -Ilib/ArduinoJson/src -Ilib/ArduinoJson/src/ArduinoJson -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/Adafruit_NeoPixel -I/usr/share/arduino/libraries/Ethernet -I/usr/share/arduino/libraries/Ethernet/utility -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/libraries/Ethernet/EthernetClient.cpp
include .build/uno/Ethernet/EthernetClient.d

.build/uno/Ethernet/Dhcp.o : /usr/share/arduino/libraries/Ethernet/Dhcp.cpp
	@echo [93mEthernet/Dhcp.cpp[0m
	@mkdir -p .build/uno/Ethernet
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/ArduinoJson -Ilib/ArduinoJson/src -Ilib/ArduinoJson/src/ArduinoJson -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/Adafruit_NeoPixel -I/usr/share/arduino/libraries/Ethernet -I/usr/share/arduino/libraries/Ethernet/utility -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/libraries/Ethernet/Dhcp.cpp
include .build/uno/Ethernet/Dhcp.d

.build/uno/Ethernet/EthernetUdp.o : /usr/share/arduino/libraries/Ethernet/EthernetUdp.cpp
	@echo [93mEthernet/EthernetUdp.cpp[0m
	@mkdir -p .build/uno/Ethernet
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/ArduinoJson -Ilib/ArduinoJson/src -Ilib/ArduinoJson/src/ArduinoJson -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/Adafruit_NeoPixel -I/usr/share/arduino/libraries/Ethernet -I/usr/share/arduino/libraries/Ethernet/utility -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/libraries/Ethernet/EthernetUdp.cpp
include .build/uno/Ethernet/EthernetUdp.d

.build/uno/Ethernet/Ethernet.o : /usr/share/arduino/libraries/Ethernet/Ethernet.cpp
	@echo [93mEthernet/Ethernet.cpp[0m
	@mkdir -p .build/uno/Ethernet
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/ArduinoJson -Ilib/ArduinoJson/src -Ilib/ArduinoJson/src/ArduinoJson -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/Adafruit_NeoPixel -I/usr/share/arduino/libraries/Ethernet -I/usr/share/arduino/libraries/Ethernet/utility -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/libraries/Ethernet/Ethernet.cpp
include .build/uno/Ethernet/Ethernet.d

.build/uno/Ethernet/Dns.o : /usr/share/arduino/libraries/Ethernet/Dns.cpp
	@echo [93mEthernet/Dns.cpp[0m
	@mkdir -p .build/uno/Ethernet
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/ArduinoJson -Ilib/ArduinoJson/src -Ilib/ArduinoJson/src/ArduinoJson -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/Adafruit_NeoPixel -I/usr/share/arduino/libraries/Ethernet -I/usr/share/arduino/libraries/Ethernet/utility -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/libraries/Ethernet/Dns.cpp
include .build/uno/Ethernet/Dns.d

.build/uno/Ethernet/EthernetServer.o : /usr/share/arduino/libraries/Ethernet/EthernetServer.cpp
	@echo [93mEthernet/EthernetServer.cpp[0m
	@mkdir -p .build/uno/Ethernet
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/ArduinoJson -Ilib/ArduinoJson/src -Ilib/ArduinoJson/src/ArduinoJson -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/Adafruit_NeoPixel -I/usr/share/arduino/libraries/Ethernet -I/usr/share/arduino/libraries/Ethernet/utility -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/libraries/Ethernet/EthernetServer.cpp
include .build/uno/Ethernet/EthernetServer.d



.build/uno/Ethernet/libEthernet.a : .build/uno/Ethernet/utility/socket.o .build/uno/Ethernet/utility/w5100.o .build/uno/Ethernet/EthernetClient.o .build/uno/Ethernet/Dhcp.o .build/uno/Ethernet/EthernetUdp.o .build/uno/Ethernet/Ethernet.o .build/uno/Ethernet/Dns.o .build/uno/Ethernet/EthernetServer.o
	@echo [92mLinking libEthernet.a[0m
	@/usr/share/arduino/hardware/tools/avr/bin/avr-ar rcs $@ $^












.build/uno/SPI/SPI.o : /usr/share/arduino/libraries/SPI/SPI.cpp
	@echo [93mSPI/SPI.cpp[0m
	@mkdir -p .build/uno/SPI
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/ArduinoJson -Ilib/ArduinoJson/src -Ilib/ArduinoJson/src/ArduinoJson -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/Adafruit_NeoPixel -I/usr/share/arduino/libraries/Ethernet -I/usr/share/arduino/libraries/Ethernet/utility -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/libraries/SPI/SPI.cpp
include .build/uno/SPI/SPI.d



.build/uno/SPI/libSPI.a : .build/uno/SPI/SPI.o
	@echo [92mLinking libSPI.a[0m
	@/usr/share/arduino/hardware/tools/avr/bin/avr-ar rcs $@ $^







.build/uno/arduino/wiring.o : /usr/share/arduino/hardware/arduino/cores/arduino/wiring.c
	@echo [93marduino/wiring.c[0m
	@mkdir -p .build/uno/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/ArduinoJson -Ilib/ArduinoJson/src -Ilib/ArduinoJson/src/ArduinoJson -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/Adafruit_NeoPixel -I/usr/share/arduino/libraries/Ethernet -I/usr/share/arduino/libraries/Ethernet/utility -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc   -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/wiring.c
include .build/uno/arduino/wiring.d

.build/uno/arduino/wiring_shift.o : /usr/share/arduino/hardware/arduino/cores/arduino/wiring_shift.c
	@echo [93marduino/wiring_shift.c[0m
	@mkdir -p .build/uno/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/ArduinoJson -Ilib/ArduinoJson/src -Ilib/ArduinoJson/src/ArduinoJson -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/Adafruit_NeoPixel -I/usr/share/arduino/libraries/Ethernet -I/usr/share/arduino/libraries/Ethernet/utility -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc   -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/wiring_shift.c
include .build/uno/arduino/wiring_shift.d

.build/uno/arduino/wiring_digital.o : /usr/share/arduino/hardware/arduino/cores/arduino/wiring_digital.c
	@echo [93marduino/wiring_digital.c[0m
	@mkdir -p .build/uno/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/ArduinoJson -Ilib/ArduinoJson/src -Ilib/ArduinoJson/src/ArduinoJson -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/Adafruit_NeoPixel -I/usr/share/arduino/libraries/Ethernet -I/usr/share/arduino/libraries/Ethernet/utility -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc   -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/wiring_digital.c
include .build/uno/arduino/wiring_digital.d

.build/uno/arduino/wiring_pulse.o : /usr/share/arduino/hardware/arduino/cores/arduino/wiring_pulse.c
	@echo [93marduino/wiring_pulse.c[0m
	@mkdir -p .build/uno/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/ArduinoJson -Ilib/ArduinoJson/src -Ilib/ArduinoJson/src/ArduinoJson -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/Adafruit_NeoPixel -I/usr/share/arduino/libraries/Ethernet -I/usr/share/arduino/libraries/Ethernet/utility -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc   -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/wiring_pulse.c
include .build/uno/arduino/wiring_pulse.d

.build/uno/arduino/avr-libc/realloc.o : /usr/share/arduino/hardware/arduino/cores/arduino/avr-libc/realloc.c
	@echo [93marduino/avr-libc/realloc.c[0m
	@mkdir -p .build/uno/arduino/avr-libc
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/ArduinoJson -Ilib/ArduinoJson/src -Ilib/ArduinoJson/src/ArduinoJson -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/Adafruit_NeoPixel -I/usr/share/arduino/libraries/Ethernet -I/usr/share/arduino/libraries/Ethernet/utility -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc   -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/avr-libc/realloc.c
include .build/uno/arduino/avr-libc/realloc.d

.build/uno/arduino/avr-libc/malloc.o : /usr/share/arduino/hardware/arduino/cores/arduino/avr-libc/malloc.c
	@echo [93marduino/avr-libc/malloc.c[0m
	@mkdir -p .build/uno/arduino/avr-libc
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/ArduinoJson -Ilib/ArduinoJson/src -Ilib/ArduinoJson/src/ArduinoJson -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/Adafruit_NeoPixel -I/usr/share/arduino/libraries/Ethernet -I/usr/share/arduino/libraries/Ethernet/utility -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc   -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/avr-libc/malloc.c
include .build/uno/arduino/avr-libc/malloc.d

.build/uno/arduino/WInterrupts.o : /usr/share/arduino/hardware/arduino/cores/arduino/WInterrupts.c
	@echo [93marduino/WInterrupts.c[0m
	@mkdir -p .build/uno/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/ArduinoJson -Ilib/ArduinoJson/src -Ilib/ArduinoJson/src/ArduinoJson -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/Adafruit_NeoPixel -I/usr/share/arduino/libraries/Ethernet -I/usr/share/arduino/libraries/Ethernet/utility -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc   -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/WInterrupts.c
include .build/uno/arduino/WInterrupts.d

.build/uno/arduino/wiring_analog.o : /usr/share/arduino/hardware/arduino/cores/arduino/wiring_analog.c
	@echo [93marduino/wiring_analog.c[0m
	@mkdir -p .build/uno/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/ArduinoJson -Ilib/ArduinoJson/src -Ilib/ArduinoJson/src/ArduinoJson -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/Adafruit_NeoPixel -I/usr/share/arduino/libraries/Ethernet -I/usr/share/arduino/libraries/Ethernet/utility -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc   -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/wiring_analog.c
include .build/uno/arduino/wiring_analog.d






.build/uno/arduino/Tone.o : /usr/share/arduino/hardware/arduino/cores/arduino/Tone.cpp
	@echo [93marduino/Tone.cpp[0m
	@mkdir -p .build/uno/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/ArduinoJson -Ilib/ArduinoJson/src -Ilib/ArduinoJson/src/ArduinoJson -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/Adafruit_NeoPixel -I/usr/share/arduino/libraries/Ethernet -I/usr/share/arduino/libraries/Ethernet/utility -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/Tone.cpp
include .build/uno/arduino/Tone.d

.build/uno/arduino/CDC.o : /usr/share/arduino/hardware/arduino/cores/arduino/CDC.cpp
	@echo [93marduino/CDC.cpp[0m
	@mkdir -p .build/uno/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/ArduinoJson -Ilib/ArduinoJson/src -Ilib/ArduinoJson/src/ArduinoJson -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/Adafruit_NeoPixel -I/usr/share/arduino/libraries/Ethernet -I/usr/share/arduino/libraries/Ethernet/utility -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/CDC.cpp
include .build/uno/arduino/CDC.d

.build/uno/arduino/main.o : /usr/share/arduino/hardware/arduino/cores/arduino/main.cpp
	@echo [93marduino/main.cpp[0m
	@mkdir -p .build/uno/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/ArduinoJson -Ilib/ArduinoJson/src -Ilib/ArduinoJson/src/ArduinoJson -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/Adafruit_NeoPixel -I/usr/share/arduino/libraries/Ethernet -I/usr/share/arduino/libraries/Ethernet/utility -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/main.cpp
include .build/uno/arduino/main.d

.build/uno/arduino/HID.o : /usr/share/arduino/hardware/arduino/cores/arduino/HID.cpp
	@echo [93marduino/HID.cpp[0m
	@mkdir -p .build/uno/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/ArduinoJson -Ilib/ArduinoJson/src -Ilib/ArduinoJson/src/ArduinoJson -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/Adafruit_NeoPixel -I/usr/share/arduino/libraries/Ethernet -I/usr/share/arduino/libraries/Ethernet/utility -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/HID.cpp
include .build/uno/arduino/HID.d

.build/uno/arduino/USBCore.o : /usr/share/arduino/hardware/arduino/cores/arduino/USBCore.cpp
	@echo [93marduino/USBCore.cpp[0m
	@mkdir -p .build/uno/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/ArduinoJson -Ilib/ArduinoJson/src -Ilib/ArduinoJson/src/ArduinoJson -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/Adafruit_NeoPixel -I/usr/share/arduino/libraries/Ethernet -I/usr/share/arduino/libraries/Ethernet/utility -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/USBCore.cpp
include .build/uno/arduino/USBCore.d

.build/uno/arduino/Print.o : /usr/share/arduino/hardware/arduino/cores/arduino/Print.cpp
	@echo [93marduino/Print.cpp[0m
	@mkdir -p .build/uno/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/ArduinoJson -Ilib/ArduinoJson/src -Ilib/ArduinoJson/src/ArduinoJson -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/Adafruit_NeoPixel -I/usr/share/arduino/libraries/Ethernet -I/usr/share/arduino/libraries/Ethernet/utility -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/Print.cpp
include .build/uno/arduino/Print.d

.build/uno/arduino/new.o : /usr/share/arduino/hardware/arduino/cores/arduino/new.cpp
	@echo [93marduino/new.cpp[0m
	@mkdir -p .build/uno/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/ArduinoJson -Ilib/ArduinoJson/src -Ilib/ArduinoJson/src/ArduinoJson -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/Adafruit_NeoPixel -I/usr/share/arduino/libraries/Ethernet -I/usr/share/arduino/libraries/Ethernet/utility -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/new.cpp
include .build/uno/arduino/new.d

.build/uno/arduino/WString.o : /usr/share/arduino/hardware/arduino/cores/arduino/WString.cpp
	@echo [93marduino/WString.cpp[0m
	@mkdir -p .build/uno/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/ArduinoJson -Ilib/ArduinoJson/src -Ilib/ArduinoJson/src/ArduinoJson -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/Adafruit_NeoPixel -I/usr/share/arduino/libraries/Ethernet -I/usr/share/arduino/libraries/Ethernet/utility -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/WString.cpp
include .build/uno/arduino/WString.d

.build/uno/arduino/IPAddress.o : /usr/share/arduino/hardware/arduino/cores/arduino/IPAddress.cpp
	@echo [93marduino/IPAddress.cpp[0m
	@mkdir -p .build/uno/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/ArduinoJson -Ilib/ArduinoJson/src -Ilib/ArduinoJson/src/ArduinoJson -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/Adafruit_NeoPixel -I/usr/share/arduino/libraries/Ethernet -I/usr/share/arduino/libraries/Ethernet/utility -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/IPAddress.cpp
include .build/uno/arduino/IPAddress.d

.build/uno/arduino/Stream.o : /usr/share/arduino/hardware/arduino/cores/arduino/Stream.cpp
	@echo [93marduino/Stream.cpp[0m
	@mkdir -p .build/uno/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/ArduinoJson -Ilib/ArduinoJson/src -Ilib/ArduinoJson/src/ArduinoJson -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/Adafruit_NeoPixel -I/usr/share/arduino/libraries/Ethernet -I/usr/share/arduino/libraries/Ethernet/utility -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/Stream.cpp
include .build/uno/arduino/Stream.d

.build/uno/arduino/WMath.o : /usr/share/arduino/hardware/arduino/cores/arduino/WMath.cpp
	@echo [93marduino/WMath.cpp[0m
	@mkdir -p .build/uno/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/ArduinoJson -Ilib/ArduinoJson/src -Ilib/ArduinoJson/src/ArduinoJson -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/Adafruit_NeoPixel -I/usr/share/arduino/libraries/Ethernet -I/usr/share/arduino/libraries/Ethernet/utility -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/WMath.cpp
include .build/uno/arduino/WMath.d

.build/uno/arduino/HardwareSerial.o : /usr/share/arduino/hardware/arduino/cores/arduino/HardwareSerial.cpp
	@echo [93marduino/HardwareSerial.cpp[0m
	@mkdir -p .build/uno/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/ArduinoJson -Ilib/ArduinoJson/src -Ilib/ArduinoJson/src/ArduinoJson -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/Adafruit_NeoPixel -I/usr/share/arduino/libraries/Ethernet -I/usr/share/arduino/libraries/Ethernet/utility -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/HardwareSerial.cpp
include .build/uno/arduino/HardwareSerial.d



.build/uno/arduino/libarduino.a : .build/uno/arduino/wiring.o .build/uno/arduino/wiring_shift.o .build/uno/arduino/wiring_digital.o .build/uno/arduino/wiring_pulse.o .build/uno/arduino/avr-libc/realloc.o .build/uno/arduino/avr-libc/malloc.o .build/uno/arduino/WInterrupts.o .build/uno/arduino/wiring_analog.o .build/uno/arduino/Tone.o .build/uno/arduino/CDC.o .build/uno/arduino/main.o .build/uno/arduino/HID.o .build/uno/arduino/USBCore.o .build/uno/arduino/Print.o .build/uno/arduino/new.o .build/uno/arduino/WString.o .build/uno/arduino/IPAddress.o .build/uno/arduino/Stream.o .build/uno/arduino/WMath.o .build/uno/arduino/HardwareSerial.o
	@echo [92mLinking libarduino.a[0m
	@/usr/share/arduino/hardware/tools/avr/bin/avr-ar rcs $@ $^















.build/uno/src/sketch.o : .build/uno/src/sketch.cpp
	@echo [93msrc/sketch.cpp[0m
	@mkdir -p .build/uno/src
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/ArduinoJson -Ilib/ArduinoJson/src -Ilib/ArduinoJson/src/ArduinoJson -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/ArduinoJson/src/ArduinoJson/Data -Ilib/ArduinoJson/src/ArduinoJson/StringTraits -Ilib/ArduinoJson/src/ArduinoJson/Polyfills -Ilib/ArduinoJson/src/ArduinoJson/TypeTraits -Ilib/ArduinoJson/src/ArduinoJson/Deserialization -Ilib/ArduinoJson/src/ArduinoJson/Serialization -Ilib/Adafruit_NeoPixel -I/usr/share/arduino/libraries/Ethernet -I/usr/share/arduino/libraries/Ethernet/utility -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions -iquote src  -o $@ -c .build/uno/src/sketch.cpp
include .build/uno/src/sketch.d







.build/uno/firmware.elf : .build/uno/src/sketch.o .build/uno/ArduinoJson/libArduinoJson.a .build/uno/Adafruit_NeoPixel/libAdafruit_NeoPixel.a .build/uno/Ethernet/libEthernet.a .build/uno/SPI/libSPI.a .build/uno/arduino/libarduino.a
	@echo [92mLinking firmware.elf[0m
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -Wl,-Os -Wl,--gc-sections -o $@ $^ -lm


.build/uno/firmware.hex : .build/uno/firmware.elf
	@echo [92mConverting to firmware.hex[0m
	@/usr/share/arduino/hardware/tools/avr/bin/avr-objcopy -O ihex -R .eeprom $^ $@

include .build/uno/src/dependencies.d .build/uno/arduino/dependencies.d .build/uno/ArduinoJson/dependencies.d .build/uno/Ethernet/dependencies.d .build/uno/Adafruit_NeoPixel/dependencies.d .build/uno/SPI/dependencies.d

all : .build/uno/firmware.hex
	@true

