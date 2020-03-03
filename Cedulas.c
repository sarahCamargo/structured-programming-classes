 #include <stdio.h>

 int main() {

   int n, num, cem = 0, cinq = 0, vin = 0, dez = 0, cinc = 0, dois = 0, um = 0;
   scanf("%d", & n);
   num = n;
   if (num >= 100) {
     cem = num / 100;
     num = num % 100;
   }
   if (num >= 50) {
     cinq = num / 50;
     num = num % 50;
   }
   if (num >= 20) {
     vin = num / 20;
     num = num % 20;
   }
   if (num >= 10) {
     dez = num / 10;
     num = num % 10;
   }
   if (num >= 5) {
     cinc = num / 5;
     num = num % 5;
   }
   if (num >= 2) {
     dois = num / 2;
     num = num % 2;
   }
   if (num >= 1) {
     um = num / 1;
     num = num % 1;
   }

   printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", n, cem, cinq, vin, dez, cinc, dois, um);

 }