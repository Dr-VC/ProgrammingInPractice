#include <stdio.h>
int main() {

 int num[6];
 for (int i=0; i<6; i++)
 { printf(" Enter number %d\n", i+1);
    scanf("%d", &num[i]);
 }

 for (int i=0; i<6; i++)
 { printf("%d\n", num[i]);
    
 }


 return 0;

}
