#include <Morse.h>
Morse m(13);
int i,k,n,temp = 0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  String st="";
  while(Serial.available()>0){
    st[n]=char(Serial.read());
    delay(2);
    n++;
  }
  for(i=0;i<n;i++)
  {
    m.trans(st[i],m);
  }
}
