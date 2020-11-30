#include <stdio.h>

void aux(int *str, int i){
    int aux;

    aux=str[i];
    str[i]=str[i+1];
    str[i+1]=aux;
}

void ft_sort_int_tab(int *tab, int size)
{
    int count;
    int i;

    i=0;
    count=1;
    while(count!=0)
    {
        count=0;
        while(i<size-1)
        {
            if(tab[i+1]<tab[i])
            {
                aux(tab, i);
                i++;
                count++;
            }
            else
            {
                i++;
            }
        }
        i=0;
    }
}