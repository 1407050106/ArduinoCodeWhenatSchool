
int IN1 = 2;  

int IN2 = 3;   

//int ENB = 4;  


void setup(){


    pinMode(IN1, OUTPUT);

    pinMode(IN2, OUTPUT);

    //pinMode(ENB, OUTPUT);
   
}

 

void loop(){

    digitalWrite(IN1, HIGH);

    digitalWrite(IN2, LOW);

    delay(4000);

    digitalWrite(IN1, LOW);

    digitalWrite(IN2, LOW);

    delay(4000);

/*
    delay(4000);
    
    digitalWrite(IN3, HIGH);

    digitalWrite(IN4, HIGH);  
    
    delay(4000);
*/   
}


