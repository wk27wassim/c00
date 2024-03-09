#include <stdio.h>
void ft_swap(int *a, int *b)
{
    int tmp;
    tmp =*a;
    *a = *b;
    *b = tmp;
}
int main()
{
    int a;
    int b;
    a = 15;
    b = 14;
    ft_swap(&a, &b);
    printf("%d\n", a);
    printf("%d\n",b);

    


}