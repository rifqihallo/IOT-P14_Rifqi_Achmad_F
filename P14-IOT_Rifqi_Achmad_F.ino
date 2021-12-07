#include <LiquidCrystal.h> 
int led=7; 
LiquidCrystal lcd (13,12,11,10,9,8); 

void setup(){
  lcd.begin (16, 2); // Memulai LCD
  pinMode(led,OUTPUT); //Set led sebagai output
}

void loop(){
  int pirState=digitalRead(1); //variable untuk menyimpan nilai dari sensor
  lcd.setCursor(0,0); 
  lcd.print("Selamat Datang"); //print karakter "Selamat Datang"
  if(pirState == LOW){ //Mendeteksi Jika tidak ada sinyal
    lcd.setCursor(0,1); 
    lcd.print("Hallo"); 
    digitalWrite(led,LOW); //Mematikan lampu LED 
    delay(500); //Jeda waktu menampilkan karakter
    lcd.clear(); //Melakukan pembersihan layar
  }
  else if(pirState == HIGH); //Jika ada objek terdeteksi
    lcd.setCursor(0,1); 
    lcd.print("RIFQI A F"); 
    digitalWrite(led,HIGH); //menyalakan LED
    delay(500);//Jeda waktu menampilkan karakter
    lcd.clear(); //bersihkan layar  
}
