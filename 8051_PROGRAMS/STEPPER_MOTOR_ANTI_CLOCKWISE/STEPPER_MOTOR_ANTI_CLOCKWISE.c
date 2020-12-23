#include&lt;stdio.h&gt;
#include&lt;reg51.h&gt;
char xdata port _at_ 0xe803;
char xdata porta _at_ 0xe800;
charidataacc _at_ 0x30;
delay() //DELAY BETWEEN THE ROTATION OF THE STEPPER MOTOR
{
int j;
for(j = 0;j &lt; 800; j++)
{}
}
void main()
{
port = 0x80; //CONFIGURE ALL THE PORTS OF 8255 AS OUTPUT PORT
while(1)
{
acc = 0x11;
porta = acc;
delay();
acc = 0x22;
porta = acc;
delay();
acc = 0x44;
porta = acc;
delay();
acc = 0x88
porta = acc;
delay();
}
}