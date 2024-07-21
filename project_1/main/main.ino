#define P1 15
#define P2 16
#define P3 17
#define P4 18
#define P5 19
#define DTIME 100

void setup() {
pinMode(P1, OUTPUT);
pinMode(P2, OUTPUT);
pinMode(P3, OUTPUT);
pinMode(P4, OUTPUT);
pinMode(P5, OUTPUT);
//тут я настроил все пины на выход
}

void loop() {
digitalWrite(P1, HIGH);
delay(DTIME);
digitalWrite(P1, LOW);
digitalWrite(P2, HIGH);
delay(DTIME);
digitalWrite(P2, LOW);
digitalWrite(P3, HIGH);
delay(DTIME);
digitalWrite(P3, LOW);
digitalWrite(P4, HIGH);
delay(DTIME);
digitalWrite(P4, LOW);
digitalWrite(P5, HIGH);
delay(DTIME);
digitalWrite(P5, LOW);
digitalWrite(P4, HIGH);
delay(DTIME);
digitalWrite(P4, LOW);
digitalWrite(P3, HIGH);
delay(DTIME);
digitalWrite(P3, LOW);
digitalWrite(P2, HIGH);
delay(DTIME);
digitalWrite(P2, LOW);
digitalWrite(P1, HIGH);
delay(DTIME);
digitalWrite(P1, LOW);
//Здесь я включаю светодиод, жду полсекунды и выключаю, а затем выполняю это снова,но с другим пином.Сначала эта схема идёт повозрастанию, а потом обратно
}
