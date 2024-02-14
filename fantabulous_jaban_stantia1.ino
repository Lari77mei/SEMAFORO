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
}

void loop()
{
    

  digitalWrite(10, HIGH);//VERM1
  digitalWrite(9, LOW);  
  digitalWrite(8, LOW);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);  
  digitalWrite(11, HIGH);//VERD2
  
  delay(3000); 
  
  digitalWrite(10, HIGH);//VERM1
  digitalWrite(9, LOW);  
  digitalWrite(8, LOW);
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH); //AMAR2 
  digitalWrite(11, LOW);
  delay(3000); 
  
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);  
  digitalWrite(8, HIGH);//VERD1
  digitalWrite(13, HIGH);//VERM2
  digitalWrite(12, LOW);  
  digitalWrite(11, LOW);
  delay(3000); 
  
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH); //AMAR1
  digitalWrite(8, LOW);
  digitalWrite(13, HIGH);//VERM2
  digitalWrite(12, LOW);  
  digitalWrite(11, LOW);
  delay(3000); 
}