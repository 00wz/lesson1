#define GREEN 3

void setup() {
  Serial.begin(9600);

  pinMode(GREEN, OUTPUT);
  digitalWrite(GREEN, LOW); 
}

void loop() {
  if(Serial.available() > 0)
  {
    short inp = Serial.read();
    
    if(inp == '\n')
    {
      return;
    }

    if(inp == '0')
    {
      digitalWrite(GREEN, LOW);  
    }
    else
    {
      digitalWrite(GREEN, HIGH);
    }
  }
}
