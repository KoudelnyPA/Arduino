/* Подключение кнопки по схеме с подтягивающим резистором

При нажатой кнопке светодиод тухнет, при отжатой - горит
Дребезг контактов кнопки не фильтруется

Для подключения LED используется резистор номиналом 220 Ом
*/

#define PIN_LED 7
#define PIN_BUTTON 2

void setup() {
  pinMode(PIN_LED, OUTPUT);
  pinMode(PIN_BUTTON, INPUT_PULLUP); // Внутренее сопротивление
}

void loop() {
  digitalWrite(PIN_LED, digitalRead(PIN_BUTTON));
}