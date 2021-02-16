int ORpin1 = 4;
int ORpin2 = 5;
int ORout = 10;
int OrStatus1 = 0;
int OrStatus2 = 0;

int ANDPin1 = 6; 
int ANDPin2 = 7; 
int ANDOut = 11; 
int ANDStatus1 = 0; 
int ANDStatus2 = 0; 

int NOTPin = 8; 
int NOToutput = 12; 
int NOTStatus = 0; 

void setup() {
pinMode(ORout, OUTPUT);
pinMode(ORpin1, INPUT);
pinMode(ORpin2, INPUT);
pinMode(ANDOut, OUTPUT);
pinMode(ANDPin1, INPUT);
pinMode(ANDPin2, INPUT);
pinMode(NOToutput, OUTPUT); 
pinMode(NOTPin, INPUT); 
}

void loop(){
OrStatus1 = digitalRead(ORpin1);
OrStatus2 = digitalRead(ORpin2);

if (OrStatus1 == HIGH || OrStatus2 == HIGH )
{ digitalWrite(ORout, HIGH);
} else { digitalWrite(ORout, LOW); }

ANDStatus1 = digitalRead(ANDPin1);
ANDStatus2 = digitalRead(ANDPin2);
if (ANDStatus1 == HIGH && ANDStatus2 == HIGH ) { 
digitalWrite(ANDOut, HIGH);
}
else { digitalWrite(ANDOut, LOW);
}

NOTStatus = digitalRead(NOTPin); 
if (NOTStatus != HIGH) // if the button is not (!=) HIGH (hence LOW) turn on the LED
{digitalWrite(NOToutput, HIGH);   } 

else { digitalWrite(NOToutput, LOW); } 
}
