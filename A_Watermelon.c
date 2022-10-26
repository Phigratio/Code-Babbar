#include <stdio.h>
 
int main() {
    int even;
    scanf("%d",&even);
    if(even !=2 && even%2 == 0)
    {printf("YES");}
    else printf("NO");
    return 0;
}