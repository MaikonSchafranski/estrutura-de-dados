#include<stdio.h>
#include<stdlib.h>

void exibeAltera(int *n1, int *n2, int *n3){//Na função exibeAltera, os parâmetros n1, n2 e n3 são ponteiros para inteiros.
    printf("Valores originais na função - 1o, 2o, 3o %d %d %d \n, *n1, *n2, *n3");//Valores originais na função - 1o, 2o, 3o %d %d %d \n
    *n1 += 100;
    *n2 += 100;
    *n3 += 100;
    printf("Valores finais na função - 1o, 2o, 3o %d %d %d \n, *n1, *n2, *n3");
}

int main(int argc, char const *argv[])
{
    int a = 1 ,b = 2, c = 3;
    exibeAltera(&a, &b, &c);
    printf("Valores finais da função- 1o, 2o, 3o %d %d %d \n, *n1, *n2, *n3");
    return 0;
}
