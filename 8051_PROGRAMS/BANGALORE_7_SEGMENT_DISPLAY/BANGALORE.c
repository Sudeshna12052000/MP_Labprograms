#include&lt;stdio.h&gt;
#include&lt;reg51.h&gt;
charxdataCommW _at_ 0xe803;
charxdataportB _at_ 0xe801;
charxdataportC _at_ 0xe802;
char port[20] = { 0xff, 0xff, 0xff, 0xff ,0x83,0x88,0xC8,0x82,
0x88,0xC7,0xC0,0xAF,0x86},i;
delay()
{
long u;
for(u=0;u&lt;4000;u++);
}
void main()
{
intd,b,j,m;
unsigned char k;
CommW = 0x80;
do
{
i=0;
for(d=0;d&lt;1;d++)
{
for(b=13;b&gt;0;b--)
{
delay();
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