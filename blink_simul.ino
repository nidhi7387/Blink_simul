# define my_led1 2//global declaration
# define my_led2 4
# define my_led3 7
void setup() {
       pinMode (my_led1,OUTPUT);
       Serial.begin(1000);
       pinMode (my_led2, OUTPUT);
       Serial.begin(1000);
       pinMode (my_led3,OUTPUT);
       Serial.begin(1000);//to begin

}
 void loop() {
     digitalWrite(my_led1, HIGH);
     digitalWrite(my_led2, HIGH);
     digitalWrite(my_led3, HIGH);
     delay(1000);
   
   
     digitalWrite(my_led1, LOW);
     digitalWrite(my_led2, LOW);
     digitalWrite(my_led3, LOW);
     delay(1000);
    
 }
