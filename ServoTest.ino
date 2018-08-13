#include <Servo.h>//provides the library for the servo
//int angle = 0;//establishes variable
Servo servo;//builds a servo object and calls it "servo"

void setup() {
  Serial.begin(9600);//only needed for Serial.print
servo.attach(8);//connects servo to the 8th port on the Arduino
servo.write(0);//resets the servo at 0
delay(1000);//delay of 1 second

}

void loop() {
 
//servo.write(360);  //base code to test your device
//delay(1000);
//servo.write(0);
//delay(1000); 

//for(angle = 180; angle <= 160; angle++){//moves servo from 180 to 160 degrees
//servo.write(angle);//writes the angle provided above
//delay(15);
//}
//for(angle = 180; angle > 160; angle--){//moves servo back to 180 from 160
//  servo.write(angle);//^
//  delay(15);
//}
//for(angle = 180; angle <= 140; angle++){//^
//servo.write(angle);
//delay(15);
//}
//for(angle = 180; angle >= 140; angle--){
// servo.write(angle);
// delay(15);
//} 
//for(angle = 180; angle < 120; angle++){
//  
//servo.write(angle);
//delay(15);
//}
//for(angle = 180; angle > 120; angle--){
//  servo.write(angle);
//  delay(15);
//}
//for(angle = 180; angle < 100; angle++){
//  
//servo.write(angle);
//delay(15);
//}
//for(angle = 180; angle > 100; angle--){
//  servo.write(angle);
//  delay(15);
//}
//for(angle = 180; angle < 80; angle++){
//  
//servo.write(angle);
//delay(15);
//}
//for(angle = 180; angle > 80; angle--){
//  servo.write(angle);
//  delay(15);
//}
//for(angle = 180; angle < 60; angle++){
//  
//servo.write(angle);
//delay(15);
//}
//for(angle = 180; angle > 60; angle--){
//  servo.write(angle);
//  delay(15);
//}
//for(angle = 180; angle < 40; angle++){
//  
//servo.write(angle);
//delay(15);
//}
//for(angle = 180; angle > 40; angle--){
//  servo.write(angle);
//  delay(15);
//}
//for(angle = 180; angle < 20; angle++){
//  
//servo.write(angle);
//delay(15);
//}
//for(angle = 180; angle > 20; angle--){
//  servo.write(angle);
//  delay(15);
//}
//for(angle = 180; angle < 40; angle++){
//  
//servo.write(angle);
//delay(15);
//}
//for(angle = 180; angle > 40; angle--){
//  servo.write(angle);
//  delay(15);
//}for(angle = 180; angle < 60; angle++){
//  
//servo.write(angle);
//delay(15);
//}
//for(angle = 180; angle > 60; angle--){
//  servo.write(angle);
//  delay(15);
//}for(angle = 180; angle < 80; angle++){
//  
//servo.write(angle);
//delay(15);
//}
//for(angle = 180; angle > 80; angle--){
//  servo.write(angle);
//  delay(15);
//}for(angle = 180; angle < 100; angle++){
//  
//servo.write(angle);
//delay(15);
//}
//for(angle = 180; angle > 100; angle--){
//  servo.write(angle);
//  delay(15);
//}for(angle = 180; angle < 120; angle++){
//  
//servo.write(angle);
//delay(15);
//}
//for(angle = 180; angle > 120; angle--){
//  servo.write(angle);
//  delay(15);
//}for(angle = 180; angle < 140; angle++){
//  
//servo.write(angle);
//delay(15);
//}
//for(angle = 180; angle > 140; angle--){
//  servo.write(angle);
//  delay(15);
//}for(angle = 180; angle < 160; angle++){
//  
//servo.write(angle);
//delay(15);
//}
//for(angle = 180; angle > 160; angle--){
//  servo.write(angle);
//  delay(15);
//}for(angle = 180; angle < 360; angle++){
//  
//servo.write(angle);
//delay(15);
//}
//for(angle = 180; angle > 360; angle--){
//  servo.write(angle);
//  delay(15);


int forward = 20;//set these numbers to whatever you want
int backward = 1;

for(int p = 180; p >= 0; p-=forward){//this for loop does the same thing as all of the code above
  for(int angle = 180; angle >= p; angle-=backward){
    servo.write(angle);
    delay(10);//adjust speed
//    Serial.print("angle: ");//look in Serial monitor to see the angles 
//    Serial.println(angle);//you can comment this to see the numbers
//    Serial.print("P :");
//    Serial.println(p);
  }
}
}
 



