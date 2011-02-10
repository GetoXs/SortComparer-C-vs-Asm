#include "DLL.h"

void __stdcall sortSelect(int *tab, unsigned int length)
{
    int max, temp;
		unsigned int i;
    while(length > 0)
    {
        max = 0;
        for(i = 1; i < length; i++)
            if(tab[i] > tab[max])
                max = i;
        temp = tab[length-1];
        tab[length-1] = tab[max];
        tab[max] = temp;
        length--;
    }
}
void __stdcall sortInsert(int* tab, unsigned int length)
{
    int value;
    unsigned int i;
    unsigned int j;
		length--;
    for (i = 1; i < length; ++i) {
        value = tab[i];
        for (j = i - 1; j >= 0 && tab[j] > value; --j) {
            tab[j + 1] = tab[j];
        }
        tab[j + 1] = value;
    }
}
void __stdcall sortBubble( int* tab, unsigned int lenght ) 
{
  unsigned int i,j;
  int tmp;
  int change;
  for (i=0; i<lenght-1; ++i) 
  {
       change=0;
       for (j=0; j<lenght-1-i; j++)
       { 
          if (tab[j+1] < tab[j])   //porównanie s¹si¹dów
          {  
              tmp = tab[j];      
              tab[j] = tab[j+1];
              tab[j+1] = tmp;    //wypchanie b¹belka     
              change=1;
          }
       }
       if(!change) break;      // nie dokonano zmian - koniec!
  }
}

void __stdcall sortQuick(int *tab, int low, int high)
{
   int i,j;
   int x;
	 int tmp;
   x = tab[low];
   i = low;
   j = high;
   do
   {
      while (tab[i] < x) ++i;
      while (tab[j] > x) --j;
      if (i<=j)
      {
         tmp = tab[i];
         tab[i] = tab[j];
         tab[j] = tmp;
         ++i; --j;
      }
   } while(i < j);
   if (low < j) sortQuick(tab, low, j);
   if (high > i) sortQuick(tab, i, high);
}