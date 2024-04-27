/* Плавно изменяем яркость подсветки светодиода на D10 через ШИМ

Схема подключения: LED к D10 последовательно с резистором номиналом 220 Ом
Для подключения фоторезистора - сопротивление 1-10К
*/

#define PIN_LED 10

void setup() {
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  for (int i = 0; i < 256; i++) {
    analogWrite(PIN_LED, i);  
    delay(10);
  }

  for (int i = 255; i >=0 ; i--) {
    analogWrite(PIN_LED, i);  
    delay(10);
  }
}