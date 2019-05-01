#include <stdio.h>
int main()
{
int n, c, k,cha;
int buff[448],buff2[64],buff3[512],buff1[64];
printf("Enter an Character\n");
scanf("%c", &cha);
n=cha;
for (c = 7; c >= 0; c--)
{
k = n >> c;
if (k & 1){
printf("1");
buff[c]=0; }
else {
printf("0");
buff[c]=1 ;
}}
printf("\nSperate\n");
for (int i=0;i<8;i++){
printf("%d",buff[i]); }
printf("\n");
printf("The Length of Array is 8");
printf("\n The message will be padded to make it 448 mod 512 bits long.");
printf("\n Since your message is 8 ! We will add 440 because:448 MOD 512=448.\nWewill add ONE 1 and 439 ZEROS.\n");
buff[8]=1;
for(int i=9;i<448;i++)
buff[i]=0;
for(int i=0;i<448;i++)
printf("%d",buff[i]);
printf("\n");
printf("\nNow padding rest 64 Bit\n");
k=0;
n=8;
for (int i = 63; i >= 0; i--)
{
k = n >> i;
if (k & 1){
printf("1");
buff2[i]=1; }
else {printf("0");
buff2[i]=0;
;
}}
printf("\nDebug\n");
for(int i=63;i>=0;i--) {
buff1[63-i]=buff2[i];
printf("%d",buff2[i]); }
printf("\n");
printf("The Final OutPut\n");
for (int i=0;i<448;i++)
buff3[i]=buff[i];
for (int i=0;i<64
;i++)
buff3[i+448]=buff1[i];
for (int i =0;i<512;i++)
printf("%d",buff3[i]);
printf("\n");
return 0;
}
