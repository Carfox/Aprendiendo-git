#include<stdio.h>
 int main (){
 int num, lsal, lent, tse, sal10;
  printf("Ingrese el numero de telefono de su contacto: ");
  scanf("%d", &num);
  printf("Ingrese las llamadas salientes: ");
  scanf("%d", &lsal);
  printf("Ingrese las llamadas entrantes: ");
  scanf("%d", &lent);
  tse=lsal-lent;
  sal10=lsal*10;
    if(tse<2 && lsal<5){
     printf("\nEste numero se clasifica en el grupo de camaradas");
      }else{
        if(lent>sal10){
          printf("\nEste numero se clasifica en el grupo de familiares");
      }else{
        if(tse<2 || lsal>50){
          printf("\nEste numero se clasifica en el grupo de amigos");
        }else{
          printf("\neste numero se clasifica en negocios y otros");
        }
      }
   }
  return 0;
 }
