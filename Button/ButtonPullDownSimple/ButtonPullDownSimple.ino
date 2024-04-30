/* Подключение кнопки по схеме со стягивающим резистором

При нажатой кнопке светодиод загорается, при отжатой - потухает
Дребезг контактов кнопки не фильтруется

Для подключения LED используется резистор номиналом 220 Ом
Для подключения кнопки - сопротивление 10К
*/

#define PIN_LED 7
#define PIN_BUTTON 2

void setup() {
  pinMode(PIN_LED, OUTPUT);
  pinMode(PIN_BUTTON, INPUT);
}

void loop() {
  digitalWrite(PIN_LED, digitalRead(PIN_BUTTON));
}