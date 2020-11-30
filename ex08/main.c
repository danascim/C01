#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(void){
    int str[5]={516,557,123,489,51};
    int i;
    
    i=0;
    while (i<5){
        printf ("%d", str[i]);
        i++;
    }
    ft_sort_int_tab(str, 5);
    i=0;
    printf ("\n");
    while (i<5){
        printf ("%d", str[i]);
        i++;
    }
    printf ("\n");
    return(0);
}