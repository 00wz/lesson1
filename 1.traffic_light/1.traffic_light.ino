#define GREEN 2
#define YELLOW 3
#define RED 4
#define DELAY 1000
#define BLINK_DELAY 200

void setup() {
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(RED, OUTPUT);

  digitalWrite(GREEN, LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(GREEN, LOW);
}

void loop() {
  
  glow_amount_time(GREEN, DELAY);
  blink(GREEN, BLINK_DELAY, 3);
  glow_amount_time(YELLOW, DELAY);
  glow_amount_time(RED, DELAY);

}

void glow_amount_time(uint8_t pin, unsigned long time)
{
  digitalWrite(pin, HIGH);
  delay(time);
  digitalWrite(pin, LOW);
}

void blink(uint8_t pin, unsigned long delay_time, int count)
{
  for(int i = 0; i < count; i++)
  {
    digitalWrite(pin, LOW);
    delay(delay_time);
    digitalWrite(pin, HIGH);
    delay(delay_time);
    digitalWrite(pin, LOW);
  }
}
