// C++ code
//
void setup()
{
  pinMode(10, OUTPUT);//VERM1
  pinMode(9, OUTPUT);//AMAR1
  pinMode(8, OUTPUT);//VERD1
  pinMode(13, OUTPUT);//VERM2
  pinMode(12, OUTPUT);//AMAR2
  pinMode(11, OUTPUT);//VERD2
  
  pinMode(6, OUTPUT);//VERD1-3
  pinMode(7, OUTPUT);//VERM1-3
  pinMode(4, OUTPUT);//VERD2-3
  pinMode(5, OUTPUT);//VERM2-3
}

void loop()
{
    

  digitalWrite(10, HIGH);//VERM1
  digitalWrite(9, LOW);  
  digitalWrite(8, LOW);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);  
  digitalWrite(11, HIGH);//VERD2
  
  digitalWrite(6, HIGH);//VERD1-3
  digitalWrite(7, LOW);
  digitalWrite(4, LOW);  
  digitalWrite(5, HIGH);//VERM2-3
 
  
  delay(5000); 
  
  digitalWrite(10,HIGH);//VERM1
  digitalWrite(9, LOW);  
  digitalWrite(8, LOW);
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH); //AMAR2 
  digitalWrite(11, LOW);
  
  digitalWrite(6, HIGH);//VERD1-3  
  digitalWrite(7, LOW);
  digitalWrite(4, LOW);  
  digitalWrite(5, HIGH);//VERM2-3
  
  delay(5000); 
  
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);  
  digitalWrite(8, HIGH);//VERD1
  digitalWrite(13, HIGH);//VERM2
  digitalWrite(12, LOW);  
  digitalWrite(11, LOW);
  
  digitalWrite(6, LOW);  
  digitalWrite(7, HIGH);//VERM1-3
  digitalWrite(4, HIGH);//VERD2-3  
  digitalWrite(5, LOW);
  
  delay(5000); 
  
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);//AMAR1
  digitalWrite(8, LOW);
  digitalWrite(13, HIGH);//VERM2
  digitalWrite(12, LOW);  
  digitalWrite(11, LOW);
  
  digitalWrite(6, LOW);  
  digitalWrite(7, HIGH);//VERM1-3
  digitalWrite(4, HIGH);//VERD2-3
  digitalWrite(5, LOW);
  
  delay(5000); 
}