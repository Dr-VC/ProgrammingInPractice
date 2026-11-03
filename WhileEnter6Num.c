#include <stdio.h>
int main() 
{
 int num[6];
 int i=0;
 while (i<6)
 { printf(" Enter number %d\n", i+1);
    scanf("%d", &num[i]);
    i++;
 }

 i=0;
 while ( i<6)
 { printf("%d\n", num[i]);
    i++;
    
 }

 return 0;

}
