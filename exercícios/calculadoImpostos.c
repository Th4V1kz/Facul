#include <stdio.h>
int main(){
    float x, desc, total;
    printf("Digite o salário bruto");
    scanf("%f",&x);
    if(x <= 1045.00) {
        desc = 7.5;
    } else if(x >= 1045.01 && x <= 1903.98){
        desc = 9;
    } else if(x >= 1903.99 && x <=2089.60){
        desc = 16.5;
    } else if(x >= 2089.61 && x <= 3134.40){
        desc = 27; 
    } else if(x >= 3134.41 && x <= 3751.05){
        desc = 29;
    } else if(x >= 3751.06 && x <= 4664.68){
        desc = 36.5;
    } else if(x > 4664.68){
        desc = 41.5;
    }
   total = x - (x * desc / 100); 
   printf("\n O salário líquido é de %.2f", total);
}
