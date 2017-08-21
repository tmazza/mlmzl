typedef struct char_view {
    int nLines;
    int nColumns;
    char data[7][7];
} CHAR_VIEW;


const CHAR_VIEW c_OPEN = { 7, 7, 
    '0','1','1','0','1','1','0',
    '1','0','0','1','0','0','1',
    '1','0','0','0','0','0','1',
    '1','0','0','0','0','0','1',
    '0','1','0','0','0','1','0',
    '0','0','1','0','1','0','0',
    '0','0','0','1','0','0','0'
};
const CHAR_VIEW c_CLOSE = { 7, 7, 
    '0','1','1','0','1','1','0',
    '1','1','1','1','1','1','1',
    '1','1','1','1','1','1','1',
    '1','1','1','1','1','1','1',
    '0','1','1','1','1','1','0',
    '0','0','1','1','1','0','0',
    '0','0','0','1','0','0','0'
};