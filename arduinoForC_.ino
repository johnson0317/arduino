void setup() {
  Serial.begin(115200);
}
  int randNumber;
  int channel = 60;
  int packetnum = 0;
void loop() {
    Serial.print(char(13));
    Serial.print(char(36));
    Serial.print(char(channel));
    Serial.print(char(packetnum));                 //packagenumber    fist digit of datalength
    for(int i=1;i<65;i++)
    {
      randNumber = random(0,255);         //the remaining datalength, 64 digits
      Serial.print(char(randNumber));
    }
    channel++;
    packetnum++;
  if(channel>63)
    {
      channel = 60;
    }
   if(packetnum>255)
    {
      packetnum = 0;
    }
  delay(250);
}
