#define REDLED 7
#define BLUELED 8
#define GREENLED 9
#define START_BTN 5
#define INTERRUPT 0

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("test");
  Serial.println("test2");
}
