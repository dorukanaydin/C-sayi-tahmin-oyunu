#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

//Bilgisayarın belirlediği random sayıyı 10 veya daha az deneme ile tahmin etme oyunu.

int main()
{
    int sayi;
    int rsayi=0;
    char secim,e,h;
    int sayac=1;

    srand(time(NULL));
    rsayi = rand() % 1000 + 1;
    
    
    while (1)
    {
       
       printf("%d.hak : 1-1000 arasi bir sayi giriniz: ",sayac);
       scanf("%d",&sayi);
       
       
       if (sayi == rsayi && sayac <= 10 )
       {
           printf("Tebrikler sayiyi 10 tahminden daha erken bildiniz.\n");
           printf("Yeniden oynamak ister misiniz? (e:evet h:hayir) : ");
           scanf("%c",&secim);
           secim = getchar();

           if (secim == 'e')
           {
               return main();
           }
           else
           {
               exit(0);
           }
            
       }

       if (sayi < rsayi && sayac <= 10)
       {
           printf("Girdiginiz sayi asil sayidan kucuktur.\n");
       }
       
       if (sayi > rsayi && sayac <= 10)
       {
           printf("Girdiginiz sayi asil sayidan buyuktur.\n");
       }
       sayac++;
       if (sayac > 10)
       {
           printf("10 tahmin hakkiniz doldu.Tekrar deneyiniz.\n");
           printf("Yeniden oynamak ister misiniz? e:evet h:hayir ");
           scanf("%c",&secim);
           secim = getchar();

           if (secim == 'e')
           {
               return main();
           }
           else
           {
               exit(0);
           }
       }
       
    }
    
    

}