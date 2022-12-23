#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int cocukSayisi,uretilenParcaSayisi;
    float maas,yeniMaas,yeniMaas2;
    for(int i=0;i<5;i++)
    {
       printf("Maasinizi giriniz: \n"); scanf("%f",&maas);
       printf("Kac adet cocugunuz var: \n"); scanf("%d",&cocukSayisi);
       printf("Kac adet parca urettiniz: \n"); scanf("%d",&uretilenParcaSayisi);
       if(cocukSayisi==1)
       {
           yeniMaas=maas+(maas*3/100);
       }
       else if(cocukSayisi==2)
       {
           yeniMaas=maas+(maas*5/100);
       }
       else
       {
           yeniMaas=maas+(maas*1/10);
       }
       printf("Cocuk sayisi primiyle aldiginiz maas: %.1f\n",yeniMaas);
       if(uretilenParcaSayisi>100 && uretilenParcaSayisi<=150)
       {
           yeniMaas2=yeniMaas+(maas*5/100);
       }
       else if(uretilenParcaSayisi>150&& uretilenParcaSayisi<=200)
       {
           yeniMaas2=yeniMaas+(maas*10/100);
       }
       else if(uretilenParcaSayisi>200&& uretilenParcaSayisi<=250)
       {
           yeniMaas2=yeniMaas+(maas*15/100);
       }
       else if(uretilenParcaSayisi>250)
       {
           yeniMaas2=yeniMaas+(maas*20/100);
       }
       printf("%d. calisanin cocuk ve performans primiyle toplam maasi: %.1f\n",i+1,yeniMaas2);
    }

}
