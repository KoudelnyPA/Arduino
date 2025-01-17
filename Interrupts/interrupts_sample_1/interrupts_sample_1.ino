#define PIN_LED 13
// Потребуется сопротивление номиналом 1 кОм

void setup() {
  pinMode(PIN_LED, OUTPUT);
  // Вызать stuffHapenned() при падении напряжения в LOW на D2
  attachInterrupt(0, stuffHapenned, FALLING); // 0 = D2
}

void loop() {
  // другая работа контроллера
}

void stuffHapenned(){
  digitalWrite(PIN_LED, HIGH);
}