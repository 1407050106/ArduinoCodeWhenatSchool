void setup() 
{
  
  Serial.begin(9600);
}
void loop()
{ 
  if ( Serial.available())
    {
      if('R' == Serial.read())         
        Serial.write(97);
        delay(2000);
     }
   
}

