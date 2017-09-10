  /*
  # Editor     : Jerome
  # Date       : 8.5.2017
  # Version    : 1.0
  # the sensor value description
  # 0  ~300     dry soil
  # 300~700     humid soil
  # 700~950     in water
  */

  
void setup() {
  Serial.begin(9600); // open serial port, set the baud rate as 9600 bps
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() 
{
  int val;
  val = analogRead(0); //connect sensor to Analog 0
  Serial.println(val); //print the value to serial port
 
  
 if (val <= 300)
 {
    digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
 }
 else
 {
    digitalWrite(LED_BUILTIN, LOW);
 }

 }
}
