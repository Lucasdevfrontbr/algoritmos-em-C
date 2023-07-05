#include <stdio.h>
#include <stdlib.h>
int main()
{
int i=4;
int *memoriaAlocada = malloc(sizeof(int));
if (memoriaAlocada == NULL) {
printf("Erro ao alocar memória\n");
return 1;
}
*memoriaAlocada=i;
printf("%p\n", memoriaAlocada);
printf("%d", *memoriaAlocada);
free(memoriaAlocada);
return 0;
}