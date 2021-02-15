#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

   char Ad[100],Soyad[100],AylikBrut[10],TC[13],CocukSayisi[2];
   double EsOdenek,CocukOdenek,GelirVergisiKesintisi,EngelliIndirimi,AylikToplamBrutUcret,GelirVergisiOrani,AylikNetUcret;
   double TopNetMaas=0,TopGelirVergisi=0,TopBrutMaas=0,OrtNetMaas,OrtBrutMaas,OrtCocuk;
   char MedeniDurum,Engellilik,EsDurum,EngellilikDerecesi,EklemeDurum;
   int birler,besler,onlar,yirmiler,elliler,yuzler,ikiyuzler,ElliKurus,YirmiBesKurus,OnKurus,BesKurus,BirKurus,TamKisim,VirgulluKisim;
   int birlerSayisi=0,beslerSayisi=0,onlarSayisi=0,yirmilerSayisi=0,ellilerSayisi=0,yuzlerSayisi=0,ikiyuzlerSayisi=0,ElliKurusSayisi=0,YirmiBesKurusSayisi=0,OnKurusSayisi=0,BesKurusSayisi=0,BirKurusSayisi=0;
   int ikibinAltiNetUcretSayisi=0,SifirOnbesSayisi=0,SifirYirmiSayisi=0,SifirYirmiYediSayisi=0,SifirOtuzBesSayisi=0,Evli=0,Bekar=0,EsCalisan=0,TopCocukSayisi=0,CocukOlanSayisi=0,UctenFazlaCocuk=0,EngelliCalisan=0,CalisanSayisi=0;
   double SifirOnbesYuzdesi,SifirYirmiYuzdesi,SifirYirmiYediYuzdesi,SifirOtuzBesYuzdesi,EngelliCalisanYuzdesi,EvliEsCalisanYuzde,EvliYuzde,BekarYuzde;

   char EnBrutAd[100],EnBrutSoyad[100],EnBrutTC[13];
   double EnBrutAylikToplamUcret=0,EnBrutGelirVergisiKesintisi,EnBrutAylikNetUcret,EnNetAylikToplamUcret,EnNetGelirVergisiKesintisi,EnNetAylikNetUcret=0;
   char EnNetAd[100],EnNetSoyad[100],EnNetTC[13];
   int i,j,k;
    do
    {

     CalisanSayisi++;

   do
   {
        printf("Tc kimlik numarasi : ");
        scanf("%s",&TC);

    if(TC[0]>=48&&TC[0]<=57)
   {


   if(atof(TC)<10000000000)
   {
       printf("Tc kimlik no 11 haneli olmalidir.\n");
   }
   else if(atof(TC)>=10000000000&&atof(TC)<100000000000)
   {
       break;
   }
   else if(atof(TC)>100000000000)
   {
       printf("Tc kimlik no 11 haneli olmalidir.\n");
   }

   }
   else
   {
       printf("Hatali Giris.\nLutfen sayisal degerler giriniz.\n");
   }
   }while(atof(TC)<=10000000000||atof(TC)>100000000000);






   printf("Adi ve soyadi : ");
   scanf("%s%s",Ad,Soyad);



   do
   {
   printf("Aylik brut maasi(Asgari ucret:1777.50 TL olmalidir.) : ");
   scanf("%s",&AylikBrut);

   if(atof(AylikBrut)<1777.50)
   {
       printf("Hatali Giris.\nLutfen sayisal degerler giriniz Calisan maasi en az asgari ucret(1777.50 TL) olmalidir.\n");
   }
   else if(atof(AylikBrut)>=1777.50)
   {
       break;
   }
   }
   while(atof(AylikBrut)<1777.50);



    do
   {
    printf("Medeni Durumu(Evli:E,e Bekar:B,b) : ");
    scanf("%s",&MedeniDurum);
    if(MedeniDurum!='E'&&MedeniDurum!='e'&&MedeniDurum!='b'&&MedeniDurum!='B')
    {
        printf("Hatali Giris.\nLutfen dogru karekterler giriniz(E,e,B,b).\n");
    }
    else if(MedeniDurum=='E'||MedeniDurum=='e')
    {
        Evli++;
        do
        {
             printf("Esinin Calisma durumu(Calisiyorsa Evet:E,e Calismiyorsa Hayir:H,h) : ");
             scanf("%s",&EsDurum);
             if(EsDurum!='E'&&EsDurum!='e'&&EsDurum!='H'&&EsDurum!='h')
             {
           printf("Hatali Giris.\nLutfen dogru karekterler giriniz(E,e,H,h).\n");
             }
             else if(EsDurum=='E'||EsDurum=='e')
             {
                 EsCalisan++;
                 EsOdenek=0;
                 break;
             }
             else
             {
                 EsOdenek=220;
                 break;
             }

        }while(EsDurum!='E'&&EsDurum!='e'&&EsDurum!='h'&&EsDurum!='h');
        break;


    }
    else
    {
        Bekar++;
    }

   }while(MedeniDurum!='E'&&MedeniDurum!='e'&&MedeniDurum!='b'&&MedeniDurum!='B');


 do
   {

   printf("Bakmakla yukumlu oldugu cocuk sayisi : ");
   scanf("%s",&CocukSayisi);
    if(CocukSayisi[0]>=48&&CocukSayisi[0]<=57)
    {
         TopCocukSayisi=TopCocukSayisi+atoi(CocukSayisi);

     if(atoi(CocukSayisi)==0)
    {
        CocukOdenek=0;
        break;
    }
    else if(atoi(CocukSayisi)>0&&atoi(CocukSayisi)<=6)
    {
        CocukOdenek=25;
         CocukOlanSayisi++;
           if(atoi(CocukSayisi)>3)
    {
        UctenFazlaCocuk++;

    }
        break;
    }
    else if(atoi(CocukSayisi)>6)
    {
         CocukOdenek=45;
         CocukOlanSayisi++;
        break;
    }




    }
    else
    {
         printf("Lutfen dogru degerler giriniz.\n");

    }
   }
   while(CocukSayisi[0]<48||CocukSayisi[0]>=57);


    do
   {
    printf("Engellilik Durumu(Engelliyse Evet:E,e Degilse Hayir:H,h) : ");
    scanf("%s",&Engellilik);
    if(Engellilik!='E'&&Engellilik!='e'&&Engellilik!='h'&&Engellilik!='H')
    {
        printf("Hatali Giris.\nLutfen dogru karekterler giriniz(E,e,H,h).\n");
    }
    else if(Engellilik=='E'||Engellilik=='e')
    {
        EngelliCalisan++;
          do
        {
             printf("Kacinci dereceden engelli : ");
             scanf("%s",&EngellilikDerecesi);
             if(EngellilikDerecesi>48&&EngellilikDerecesi<=57)
              {

                 if(EngellilikDerecesi==49)
                {
                    EngelliIndirimi=900;
                    break;
                }
                else if(EngellilikDerecesi==50)
                {
                    EngelliIndirimi=470;
                    break;
                }
                else if(EngellilikDerecesi==51)
                {
                   EngelliIndirimi=210;
                   break;
                }
                else
                {
                    EngelliIndirimi=210;
                    break;

                }

              }

            else if(EngellilikDerecesi==48)
             {
                    EngelliIndirimi=0;
                    break;
             }
              else
             {
                printf("Hatali Giris.\nLutfen dogru degerler giriniz.\n");

             }
        }while(EngellilikDerecesi<48||EngellilikDerecesi>=57);
        break;

    }
    else
    {
        EngelliIndirimi=0;
        break;
    }
   }
   while(Engellilik!='E'&&Engellilik!='e'&&Engellilik!='h'&&Engellilik!='H');


    printf("\n*****************Calisan Bilgileri*************************\n\n");

   printf("Tc kimlik no:%s\nAdi:%s\nSoyadi:%s\n",TC,Ad,Soyad);
   printf("Aylik brut ucret:%s TL\n",AylikBrut);
   TopBrutMaas=TopBrutMaas+atof(AylikBrut);
   printf("Es icin aile yardim odenegi:%.2lf TL\n",EsOdenek);
   printf("Cocuk icin aile yardim odenegi:%.2lf TL\n",CocukOdenek);
   AylikToplamBrutUcret=atof(AylikBrut)+EsOdenek+CocukOdenek;
   printf("Aylik toplam brut ucret:%.2lf TL\n",AylikToplamBrutUcret);
   if(AylikToplamBrutUcret<2000)
   {
       GelirVergisiOrani=0.15;
       SifirOnbesSayisi++;
   }
   else if(AylikToplamBrutUcret>=2000&&AylikToplamBrutUcret<5000)
   {
       GelirVergisiOrani=0.20;
       SifirYirmiSayisi++;
   }
   else if(AylikToplamBrutUcret>=5000&&AylikToplamBrutUcret<10000)
   {
       GelirVergisiOrani=0.27;
       SifirYirmiYediSayisi++;
   }
   else
   {
       GelirVergisiOrani=0.35;
       SifirOtuzBesSayisi++;
   }
   GelirVergisiKesintisi=(AylikToplamBrutUcret-EngelliIndirimi)*GelirVergisiOrani;
   TopGelirVergisi=TopGelirVergisi+GelirVergisiKesintisi;
   printf("Gelir vergisi kesintisi:%.2lf\n",GelirVergisiKesintisi);
   if(EngelliIndirimi!=0)
   {
       printf("Engellilik derecesi:%c\n",EngellilikDerecesi);
   }
   else
   {
        printf("Engelli vergi indiriminden yararlanmiyor\n");
   }

   AylikNetUcret=AylikToplamBrutUcret-GelirVergisiKesintisi;
   printf("Aylik net ucret:%.2lf TL\n",AylikNetUcret);
   TopNetMaas=TopNetMaas+AylikNetUcret;
   if(AylikNetUcret<2000)
   {
       ikibinAltiNetUcretSayisi++;
   }

 printf("*****************Verilecek Banknotlar*************************\n");

   ikiyuzler=AylikNetUcret/200;
   if(ikiyuzler>=1)
   {
       printf("%d adet 200 luk banknot\n",ikiyuzler);
       ikiyuzlerSayisi=ikiyuzlerSayisi+ikiyuzler;
   }
   yuzler=(AylikNetUcret-ikiyuzler*200)/100;
   if(yuzler>=1)
   {
       printf("%d adet 100 luk banknot\n",yuzler);
      yuzlerSayisi=yuzlerSayisi+yuzler;
   }
   elliler=(AylikNetUcret-(ikiyuzler*200+yuzler*100))/50;
     if(elliler>=1)
   {
       printf("%d adet 50 lik banknot\n",elliler);
        ellilerSayisi=ellilerSayisi+elliler;
   }
   yirmiler=(AylikNetUcret-(ikiyuzler*200+yuzler*100+elliler*50))/20;
     if(yirmiler>=1)
   {
       printf("%d adet 20 lik banknot\n",yirmiler);
        yirmilerSayisi=yirmilerSayisi+yirmiler;
   }
   onlar=(AylikNetUcret-(ikiyuzler*200+yuzler*100+elliler*50+yirmiler*20))/10;
     if(onlar>=1)
   {
       printf("%d adet 10 luk banknot\n",onlar);
        onlarSayisi=onlarSayisi+onlar;
   }
   besler=(AylikNetUcret-(ikiyuzler*200+yuzler*100+elliler*50+yirmiler*20+onlar*10))/5;
     if(besler>=1)
   {
       printf("%d adet 5 lik banknot\n",besler);
        beslerSayisi=beslerSayisi+besler;
   }
   birler=(AylikNetUcret-(ikiyuzler*200+yuzler*100+elliler*50+yirmiler*20+onlar*10+besler*5));
     if(birler>=1)
   {
       printf("%d adet 1 lik \n",birler);
        birlerSayisi=birlerSayisi+birler;
   }
   TamKisim=ikiyuzler*200+yuzler*100+elliler*50+yirmiler*20+onlar*10+besler*5+birler;
   VirgulluKisim=(AylikNetUcret-TamKisim)*100;

   ElliKurus=VirgulluKisim/50;
     if(ElliKurus>=1)
   {
       printf("%d adet 50 kurus\n",ElliKurus);
        ElliKurusSayisi=ElliKurusSayisi+ElliKurus;
   }
   YirmiBesKurus=(VirgulluKisim-ElliKurus*50)/25;
     if(YirmiBesKurus>=1)
   {
       printf("%d adet 25 kurus\n",YirmiBesKurus);
        YirmiBesKurusSayisi=YirmiBesKurusSayisi+YirmiBesKurus;
   }
   OnKurus=(VirgulluKisim-(ElliKurus*50+YirmiBesKurus*25))/10;
     if(OnKurus>=1)
   {
       printf("%d adet 10 kurus\n",OnKurus);
        OnKurusSayisi=OnKurusSayisi+OnKurus;
   }
   BesKurus=(VirgulluKisim-(ElliKurus*50+YirmiBesKurus*25+OnKurus*10))/5;
     if(BesKurus>=1)
   {
       printf("%d adet 5 kurus\n",BesKurus);
        BesKurusSayisi=BesKurusSayisi+BesKurus;
   }
   BirKurus=(VirgulluKisim-(ElliKurus*50+YirmiBesKurus*25+OnKurus*10+BesKurus*5));
     if(BirKurus>=1)
   {
        printf("%d adet 1 kurus\n",BirKurus+1);
        BirKurusSayisi=BirKurusSayisi+BirKurus+1;
   }

   printf("***************************************************************\n\n");

   if(AylikToplamBrutUcret>EnBrutAylikToplamUcret)
   {
          for(i=0;i<strlen(Ad);i++)
           {
            EnBrutAd[i]=Ad[i];
            if(i==strlen(Ad))
            {
                 EnBrutAd[i]='\0';
            }
           }
           for(j=0;j<strlen(Soyad);j++)
           {
            EnBrutSoyad[j]=Soyad[j];
            if(j==strlen(Soyad))
            {
                 EnBrutSoyad[j]='\0';
            }
           }
            for(k=0;k<strlen(TC);k++)
           {
            EnBrutTC[k]=TC[k];
            if(k==strlen(TC))
            {
                 EnBrutTC[k]='\0';
            }
           }
           EnBrutAylikNetUcret=AylikNetUcret;
           EnBrutAylikToplamUcret=AylikToplamBrutUcret;
           EnBrutGelirVergisiKesintisi=GelirVergisiKesintisi;

   }

      if(AylikNetUcret>EnNetAylikNetUcret)
   {
          for(i=0;i<strlen(Ad);i++)
           {
            EnNetAd[i]=Ad[i];
            if(i==strlen(Ad))
            {
                 EnNetAd[i]='\0';
            }
           }
           for(j=0;j<strlen(Soyad);j++)
           {
            EnNetSoyad[j]=Soyad[j];
            if(j==strlen(Soyad))
            {
                 EnNetSoyad[j]='\0';
            }
           }
            for(k=0;k<strlen(TC);k++)
           {
            EnNetTC[k]=TC[k];
            if(k==strlen(TC))
            {
                 EnNetTC[k]='\0';
            }
           }
           EnNetAylikNetUcret=AylikNetUcret;
           EnNetAylikToplamUcret=AylikToplamBrutUcret;
           EnNetGelirVergisiKesintisi=GelirVergisiKesintisi;
   }

   printf("Baska calisan eklemek istiyor musunuz?(Evet:E,e Hayir:H,h):");
   scanf("%s",&EklemeDurum);
   printf("\n\n");


    }while(EklemeDurum=='E'||EklemeDurum=='e');
        printf("*************************Calisan Istatistikleri**************************************\n\n");
        printf("Odenen aylik toplam net ucret : %.2lf TL\n",TopNetMaas);
        printf("Odenen aylik toplam gelir vergisi: %.2lf TL\n",TopGelirVergisi);
        OrtBrutMaas=(double)TopBrutMaas/CalisanSayisi;
        printf("Odenen aylik brut ucret ortalamasi: %.2lf TL\n",OrtBrutMaas);
        OrtNetMaas=(double)TopNetMaas/CalisanSayisi;
        printf("Odenen aylik net ucret ortalamasi: %.2lf TL\n",OrtNetMaas);
        printf("Aylik net ucreti 2000 TL altinda olan calisanlarin sayisi : %d\n\n",ikibinAltiNetUcretSayisi);
        printf("***************Her ay gereken banknot turleri***********************\n");
           if(ikiyuzlerSayisi>1)
                printf("%d adet 200 luk banknot\n",ikiyuzlerSayisi);

           if(yuzlerSayisi>=1)
           {
                printf("%d adet 100 luk banknot\n",yuzlerSayisi);
           }

          if(ellilerSayisi>=1)
          {

           printf("%d adet 50 lik banknot\n",ellilerSayisi);
          }

           if(yirmilerSayisi>=1)
            {
                printf("%d adet 20 lik banknot\n",yirmilerSayisi);
            }
           if(onlarSayisi>=1)
           {
               printf("%d adet 10 luk banknot\n",onlarSayisi);
           }

           if(beslerSayisi>=1)
           {
               printf("%d adet 5 lik banknot\n",beslerSayisi);
           }

            if(birlerSayisi>=1)
            {
                printf("%d adet 1 lik \n",birlerSayisi);
            }

            if(ElliKurusSayisi>=1)
            {
                printf("%d adet 50 kurus\n",ElliKurusSayisi);
            }

            if(YirmiBesKurusSayisi>=1)
            {
                printf("%d adet 25 kurus\n",YirmiBesKurusSayisi);
            }

             if(OnKurusSayisi>=1)
             {
                 printf("%d adet 10 kurus\n",OnKurusSayisi);
             }

            if(BesKurusSayisi>=1)
            {
                printf("%d adet 5 kurus\n",BesKurusSayisi);
            }

            if(BirKurusSayisi>=1)
            {
                 printf("%d adet 1 kurus\n",BirKurusSayisi);
            }


      printf("***********\Gelir vergisi oranlarina gore calisanlar ve yuzdeleri***********\n\n");




    SifirOnbesYuzdesi=(double)SifirOnbesSayisi*100/CalisanSayisi;
    SifirYirmiYuzdesi=(double)SifirYirmiSayisi*100/CalisanSayisi;
    SifirYirmiYediYuzdesi=(double)SifirYirmiYediSayisi*100/CalisanSayisi;
    SifirOtuzBesYuzdesi=(double)SifirOtuzBesSayisi*100/CalisanSayisi;
    printf("0.15             0.20             0.27             0.35\n");
    printf("----             ----             ----             ---- \n");
    printf("%d               %d               %d               %d      Calisan Sayilari \n",SifirOnbesSayisi,SifirYirmiSayisi,SifirYirmiYediSayisi,SifirOtuzBesSayisi);
    printf("%.2lf          %.2lf            %.2lf            %.2lf   Calisan yuzdeleri \n",SifirOnbesYuzdesi,SifirYirmiYuzdesi,SifirYirmiYediYuzdesi,SifirOtuzBesYuzdesi);

     printf("***************************************************************************\n");

      printf("***********Eylik brut ucreti en yuksek olan calisan****************\n");
      printf("Tc kimlik no:%s\nAdi:%s\nSoyadi:%s\n",EnBrutTC,EnBrutAd,EnBrutSoyad);
      printf("Aylik brut ucret:%.2lf TL\n",EnBrutAylikToplamUcret);
      printf("Gelir vergisi kesintisi:%.2lf TL\n",EnBrutGelirVergisiKesintisi);
      printf("Aylik net ucret:%.2lf TL\n",EnBrutAylikNetUcret);
      printf("***************************************************************************\n");

      printf("***********Eylik net ucreti en yuksek olan calisan****************\n\n");
      printf("Tc kimlik no:%s\nAdi:%s\nSoyadi:%s\n",EnNetTC,EnNetAd,EnNetSoyad);
      printf("Aylik brut ucret:%.2lf TL\n",EnNetAylikToplamUcret);
      printf("Gelir vergisi kesintisi:%.2lf TL\n",EnNetGelirVergisiKesintisi);
      printf("Aylik net ucret:%.2lf TL\n",EnNetAylikNetUcret);
      printf("***************************************************************************\n\n");


    EvliYuzde=(double)Evli*100/CalisanSayisi;
    BekarYuzde=(double)Bekar*100/CalisanSayisi;
    printf("Evli yuzdesi : %.2lf\n",EvliYuzde);
    printf("Bekar yuzdesi : %.2lf\n",BekarYuzde);
    EvliEsCalisanYuzde=(double)EsCalisan*100/Evli;
    printf("Evli olup esi calisan calisanlarin yuzdesi : %.2lf\n",EvliEsCalisanYuzde);
    OrtCocuk=(double)TopCocukSayisi/CocukOlanSayisi;
    printf("Bakmakla yukumlu cocuk ortalamasi : %.2lf\n",OrtCocuk);
    printf("Bakmakla yukumlu cocuk sayisi ucten fazla olanlarin sayisi : %d\n",UctenFazlaCocuk);
    EngelliCalisanYuzdesi=(double)EngelliCalisan*100/CalisanSayisi;
    printf("Engelli calisan sayisi : %d\n",EngelliCalisan);
    printf("Engelli calisan yuzdesi : %.2lf\n",EngelliCalisanYuzdesi);





    return 0;
}
