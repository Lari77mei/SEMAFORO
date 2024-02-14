# SEMAFORO
https://www.tinkercad.com/

void setup()<br>
{<br>
  pinMode(10, OUTPUT);//VERM1<br>
  pinMode(9, OUTPUT);//AMAR1<br>
  pinMode(8, OUTPUT);//VERD1<br>
  pinMode(13, OUTPUT);//VERM2<br>
  pinMode(12, OUTPUT);//AMAR2<br>
  pinMode(11, OUTPUT);//VERD2<br>
}

void loop()
{<br>
    

  digitalWrite(10, HIGH);//VERM1<br>
  digitalWrite(9, LOW);<br>
  digitalWrite(8, LOW);<br>
  digitalWrite(13, LOW);<br>
  digitalWrite(12, LOW); <br> 
  digitalWrite(11, HIGH);//VERD2<br>
  
  delay(3000); <br>
  
  digitalWrite(10, HIGH);//VERM1<br>
  digitalWrite(9, LOW);<br>
  digitalWrite(8, LOW);<br>
  digitalWrite(13, LOW);<br>
  digitalWrite(12, HIGH); //AMAR2 <br>
  digitalWrite(11, LOW);<br>
  delay(3000); <br>
  
  digitalWrite(10, LOW);<br>
  digitalWrite(9, LOW);<br>
  digitalWrite(8, HIGH);//VERD1<br>
  digitalWrite(13, HIGH);//VERM2<br>
  digitalWrite(12, LOW);<br>
  digitalWrite(11, LOW);<br>
  delay(3000); <br>
  
  digitalWrite(10, LOW);<br>
  digitalWrite(9, HIGH); //AMAR1<br>
  digitalWrite(8, LOW);<br>
  digitalWrite(13, HIGH);//VERM2<br>
  digitalWrite(12, LOW);<br>
  digitalWrite(11, LOW);<br>
  delay(3000);<br>
  
