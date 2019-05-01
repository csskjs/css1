#include<stdio.h>
#include<math.h>

int gcd(int a, int h)
{
int temp;
while (1)
{
temp = a%h;
if (temp == 0)
return h;
a = h;
h = temp;
}
}
unsigned long long int power(int x, int y, int n)
{
unsigned long long int temp;
if( y == 0)
return 1;
temp = power(x, y/2,n)%n;
if (y & 1)
return x*temp*temp;
else
return temp*temp;
}
int main()
{
double p = 7;
double q = 11;
int n = (int)p*q;
double e = 13;
double phi = (p-1)*(q-1);
while (e < phi)
{
if (gcd(e, phi)==1)
break;
else
e++;
}

int k = 8;

double d = (1 + (k*phi))/e;
double msg = 6;
printf("Message data = %lf", msg);
double c = pow(msg, e);
c = fmod(c, n);
printf("\nEncrypted data = %lf", c);
int m = power(c, d, n)%n;
printf("\nOriginal Message Sent = %d", m);
return 0;
}
