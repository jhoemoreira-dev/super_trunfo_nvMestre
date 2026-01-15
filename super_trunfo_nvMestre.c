#include <stdio.h>
int main(){
 char est1[5] = "PE";
 char est2[5] = "SC";
 char cod1 = 'P';
 char cod2 = 'S';
 char cid1[25] = "Recife";
 char cid2[25] = "Joinville";
 int pop1 = 1488000;
 int pop2 = 616000;
 float area1 = 218.0;
 float area2 = 1127.4;
 float pib1 = 663507546;
 float pib2 = 498332543;
 int pttur1 = 15;
 int pttur2 = 25;
 float den1 = pop1/area1;
 float den2 = pop2/area2;
 float pibpc1 = pib1/pop1;
 float pibpc2 = pib2/pop2;
 int resultcomp1 = pop1 > pop2;
 int resultcomp2 = area1 < area2;
 int resultcomp3 = pib1 > pib2;
 int resultcomp4 = pttur1 < pttur2;
 int resultcomp5 = den1 > den2;
 int resultcomp6 = pibpc1 < pibpc2;
 
 printf("Carta 1\n");
 printf("Estado: %s\n", est1);
 printf("Código: %c\n", cod1);
 printf("Nome da Cidade: %s\n", cid1);
 printf("População: %i Habitantes\n", pop1);
 printf("Área: %.2f Km²\n", area1);
 printf("PIB: %.2f Bilhões\n", pib1);
 printf("Números de Pontos Turísticos: %d\n", pttur1);
 printf("Densidade Populacional: %.2f hab/km²\n", pop1/area1);
 printf("PIB Per Capita: %.2f Reais\n", pib1/pop1);

 printf("\nCarta 2\n");
 printf("Estado: %s\n", est2);
 printf("Código: %c\n", cod2);
 printf("Nome da Cidade: %s\n", cid2);
 printf("População: %i Habitantes\n", pop2);
 printf("Área: %.2f Km²\n", area2);
 printf("PIB: %.2f Bilhões\n", pib2);
 printf("Números de Pontos Turísticos: %d\n", pttur2);
 printf("Densidade Populacional: %.2f hab/km²\n", pop2/area2);
 printf("PIB Per Capita: %.2f Reais\n", pib2/pop2);
 
 
 printf("\n----------Comparações dos Atributos das Cartas----------\n");
 printf("\nMaior população: %s Venceu! %d\n",cid1, resultcomp1);
 printf("\nMaior PIB: %s Venceu! %d\n", cid2, resultcomp2);
 printf("\nÁrea mais extensa: %s Venceu! %d\n", cid2, resultcomp3);
 printf("\nMaior quantidade de Pontos Turísticos: %s Venceu! %d\n", cid2, resultcomp4);
 printf("\nMaior densidade populacional: %s Venceu! %d\n", cid1, resultcomp5);
 printf("\nPIB Per Capita mais alto: %s Venceu! %d\n", cid2, resultcomp6);
 
}