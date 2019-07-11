char c = ' '; 
void setup() { 
Serial.begin(9600); // Default communication rate of the Bluetooth module 
Serial1.begin(9600); 
} 

void loop() { 
if (Serial1.available()) 
{ 
c = Serial1.read(); 
Serial.write(c); 

} 
}