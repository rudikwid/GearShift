/* inspired by 7-segment-display: playground2014.wordpress.com
 * original gear shift indicator design by George MACIU & Nicu FLORICA (niq_ro)
 * http://www.tehnic.go.ro/ & http://www.arduinotehniq.com/
 * http://nicuflorica.blogspot.ro/ & http://arduinotehniq.blogspot.com/
*/

byte digitArray[12][14] =  // {a,b,c,d,e,f,g}  // ASLINYA [12][7] = 
 { 
 { 0,1,1,0,1,1,0,1,1,0,0,0,0,0, }, // = N   P =1,1,0,0,1,1,1 ASLINYA { 1,1,1,1,1,1,0 }, // = 0
 { 0,1,1,0,0,0,0,0,0,1,0,0,0,0, }, // = 1
 { 1,1,0,1,1,0,1,0,0,0,0,0,0,0, }, // = 2   N =0,1,1,0,1,1,1 + nyalain digit k+r pada 16 seg
 { 1,1,1,1,0,0,1,0,0,0,0,0,0,0, }, // = 3
 { 0,1,1,0,0,1,1,0,0,0,0,0,0,0, }, // = 4   P =1,1,0,0,1,1,1 + nyalain digit R pada 16seg
 { 1,0,1,1,0,1,1,0,0,0,0,0,0,0, }, // = 5
 { 1,1,0,0,1,1,1,0,1,0,0,0,0,0, }, // = R   //{ 1,0,1,1,1,1,1 }, // = 6  11011111000001
 { 1,1,1,0,0,0,0,0,0,0,0,0,0,0, }, // = 7
 { 1,1,1,1,1,1,1,0,0,0,0,0,0,0, }, // = 8
 { 1,1,1,0,0,1,1,0,0,0,0,0,0,0, }, // = 9
 { 0,0,0,0,0,0,0,0,0,0,0,0,0,0, }, // = off
 { 1,1,0,0,1,1,1,0,0,0,0,0,0,0, } // = "0"    
 };

int clipire = 0;

 
void setup() {
 pinMode(2, OUTPUT); // kingbrigth - a
 pinMode(3, OUTPUT); // kingbrigth - b
 pinMode(4, OUTPUT); // kingbrigth - c
 pinMode(5, OUTPUT); // kingbrigth - d
 pinMode(6, OUTPUT); // kingbrigth - e
 pinMode(7, OUTPUT); // kingbrigth - f
 pinMode(8, OUTPUT); // kingbrigth - g
 pinMode(9,OUTPUT);  // N Letter adder
 pinMode(10,OUTPUT); // R Letter adder
 pinMode(11,OUTPUT); // 1 number adder
 
 pinMode(A0, INPUT); // Netral, A0, main body letter N
 pinMode(A1, INPUT); // 1st gear, A1
 pinMode(A2, INPUT); // 2nd gear, A2
 pinMode(A3, INPUT); // 3rd gear, A3
 pinMode(A4, INPUT); // 4rd gear, A4
 pinMode(A5, INPUT); // 5rd gear, A5
 pinMode(0, INPUT); // reverse gear, D0, main body letter R
 pinMode(1, INPUT); // BLINKING ZERO, not used anymore 

digitalWrite(A0, HIGH); // pull-up the internal resistor  //TRANSLATE KE COMMON ANODA, ASLINYA HIGH
digitalWrite(A1, HIGH); // pull-up the internal resistor
digitalWrite(A2, HIGH); // pull-up the internal resistor
digitalWrite(A3, HIGH); // pull-up the internal resistor
digitalWrite(A4, HIGH); // pull-up the internal resistor
digitalWrite(A5, HIGH); // pull-up the internal resistor
digitalWrite(0, HIGH); // pull-up the internal resistor
digitalWrite(1, HIGH); // pull-up the internal resistor
}

// we define a function to display one digit
void setDigit(byte digit) {
 byte pin=2;
 for (byte i = 0; i < 14; ++i) {         //aslinya 7
 digitalWrite(pin, digitArray[digit][i]);
 ++pin;
 }
}

void loop() {

if (digitalRead(A0) == LOW) setDigit(0);  //NETRAL
else
if (digitalRead(A1) == LOW) setDigit(1);  // 1st gear
else
if (digitalRead(A2) == LOW) setDigit(2);  // 2nd gear
else
if (digitalRead(A3) == LOW) setDigit(3);  // 3rd gear
else
if (digitalRead(A4) == LOW) setDigit(4);  // 4rd gear
else
if (digitalRead(A5) == LOW) setDigit(5);  // 5rd gear
else
if (digitalRead(0) == LOW) setDigit(6);  // REVERSE
else

if (digitalRead(1) == LOW)
{
if (clipire%2 == 1) setDigit(13);  // on
else setDigit(13);                // off
}
else
setDigit(13);  // display off
delay(50);
clipire = clipire + 1;
}
