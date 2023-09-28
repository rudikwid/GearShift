// INDIKATOR GIGI MOBIL 5 KECEPATAN (N-1-2-3-4-5-R)
/* RUDIK WID, NGOPREK DI RUMAH YT */
// Adaptasi dari : https://www.masahen.com/2020/04/cara-mudah-menyalakan-4-led-dengan-4.html 


//Membuat variabel untuk LED sebagai indikator
  int pinLed1 = 7;
  int pinLed2 = 8;
  int pinLed3 = 9;
  int pinLed4 = 10;
  int pinLed5 = 11;
  int pinLed6 = 12;
  int pinLed7 = 13;
  
// Membuat variabel untuk 7 channel input sensor
  int pinBtn1 = A0;
  int pinBtn2 = A1;
  int pinBtn3 = A2;
  int pinBtn4 = A3;
  int pinBtn5 = A4;
  int pinBtn6 = A5;
  int pinBtn7 = 2;
 
void setup() {
 
  // variabel pinLed menjadi output
  pinMode(pinLed1, OUTPUT);
  pinMode(pinLed2, OUTPUT);
  pinMode(pinLed3, OUTPUT);
  pinMode(pinLed4, OUTPUT);
  pinMode(pinLed5, OUTPUT);
  pinMode(pinLed6, OUTPUT);
  pinMode(pinLed7, OUTPUT);
 
 
  // variabel pinBtn menjadi input
  pinMode(pinBtn1, INPUT_PULLUP);
  pinMode(pinBtn2, INPUT_PULLUP);
  pinMode(pinBtn3, INPUT_PULLUP);
  pinMode(pinBtn4, INPUT_PULLUP);
  pinMode(pinBtn5, INPUT_PULLUP);
  pinMode(pinBtn6, INPUT_PULLUP);
  pinMode(pinBtn7, INPUT_PULLUP);
}
 
void loop() {
  // variabel statusBtn menyimpan nilai dari hasil pembacaan pinBtn
  int statusBtn1 = digitalRead(pinBtn1);
  int statusBtn2 = digitalRead(pinBtn2);
  int statusBtn3 = digitalRead(pinBtn3);
  int statusBtn4 = digitalRead(pinBtn4);
  int statusBtn5 = digitalRead(pinBtn5);
  int statusBtn6 = digitalRead(pinBtn6);
  int statusBtn7 = digitalRead(pinBtn7);
 
  // Ketika push button tidak ditekan nilainya HIGH/1
  if(statusBtn1 == HIGH)
    {
      digitalWrite(pinLed1, LOW);
    } else {
      digitalWrite(pinLed1, HIGH);
    }
    if(statusBtn2 == HIGH) {
      digitalWrite(pinLed2, LOW);
    } else{
      digitalWrite(pinLed2, HIGH);
    }
    if(statusBtn3 == HIGH) {
      digitalWrite(pinLed3, LOW);
    } else {
      digitalWrite(pinLed3, HIGH);
    }
    if(statusBtn4 == HIGH) {
      digitalWrite(pinLed4, LOW);
    } else {
      digitalWrite(pinLed4, HIGH);
    }
     if(statusBtn5 == HIGH) {
      digitalWrite(pinLed5, LOW);
    } else {
      digitalWrite(pinLed5, HIGH);
    }
    if(statusBtn6 == HIGH) {
      digitalWrite(pinLed6, LOW);
    } else {
      digitalWrite(pinLed6, HIGH);
    }
        if(statusBtn7 == HIGH) {
      digitalWrite(pinLed7, LOW);
    } else {
      digitalWrite(pinLed7, HIGH);     
    }     
}

// simulasi di ISIS PROTEUS 7 tersedia di github saya:
