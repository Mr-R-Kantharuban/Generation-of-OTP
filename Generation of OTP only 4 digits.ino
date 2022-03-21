long randNumber;
int count=0;

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
  
}

void loop() {
  // print a random number from 0 to 9999
  if (Serial.available() >0)
  {
    char b = Serial.read();
    if ( b == '1')
    {
      
      randNumber = random(999,9999);
        if (randNumber>999){
          Serial.print("Generated OTP: ");
          Serial.println(randNumber);}
    }
    
  }
  else
  {
    Serial.println("Waiting for the command:");
  }
    

  delay(1000);
}
