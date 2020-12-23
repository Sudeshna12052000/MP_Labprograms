#include&lt;stdio.h&gt;
#include&lt;reg51.h&gt;

charxdataCommW _at_ 0xe803;
charxdataportB _at_ 0xe801;
charxdataportC _at_ 0xe802;
char port[20] = {0x8e,0xf9,0xde,0x86,0xff,0xff,0xff,0xff,0x89,0x86,0xc7,0x8c},i;
delay()
{
long u;
for(u=0;u&lt;8000;u++);
}
void main()
{
intd,b,j,m;
unsigned char k;
CommW = 0x80;
do
{
i=0;
for(d=0;d&lt;3;d++)

{
for(b=0;b&lt;4;b++)
{
k = port[i++];
for(j=0;j&lt;8;j++)
{
m=k;
k=k&amp;0x80;
{
if(k==00)
portB=0x00;
else
portB=0x01;
}
portC = 0x01;
portC = 0x00;
k=m;
k&lt;&lt;=1;
}
}
delay();
}
}
while(1);
}