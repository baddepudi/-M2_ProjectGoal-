#include <REGX51.H>
#define Street_lights P2
sbit light_sensor = P1^0;

void main(void)
{
  //light_sensor =0;
while(1)
{
if(light_sensor == 0) // night time
{
Street_lights = 0XFF; //light on   //1111 1111
}
else
{
Street_lights = 0x00; // light off
}
}