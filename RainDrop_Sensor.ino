// Welcome to Aviyan's Thoughts

int led = D4;
void setup() {  
Serial.begin(9600);
pinMode(led,OUTPUT);
}
 
void loop() {
  // read the input on analog pin 0:
int sensorValue = analogRead(A0);
Serial.println(sensorValue);
   if (sensorValue < 900)
  {
      Serial.println("it is raining");
      digitalWrite(led, HIGH);
    }
   else
   {
       Serial.println("Not raining");
       digitalWrite(led, LOW);
   }

delay(100); 
}