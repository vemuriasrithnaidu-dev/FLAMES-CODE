#include <stdio.h>
#include <string.h>

int main() {
    int i, j, k, c = 0;
    char name1[100];
    char name2[100];
    printf("ENTER YOUR NAME:");
    scanf("%s", name1);
    printf("ENTER YOUR LOVER NAME:");
    scanf("%s", name2);
    for(i=0;name1[i]!='\0';i++){
        for(j=0;name2[j]!='\0';j++){
            if(name1[i]==name2[j]){
                c++;
                for(k=i; name1[k]!='\0'; k++)
                    name1[k]=name1[k+1];
                for(k=j; name2[k]!='\0'; k++)
                    name2[k]=name2[k+1];
                i--;
                break;
            }
        }
    }
    int r = strlen(name1)+strlen(name2);
     char flames[] = "FLAMES";
    int len = 6;
    int index = 0;
    while(len > 1){
        index=(index + r-1)%len;
        for(i=index;i<len-1;i++)
            flames[i] = flames[i+1];
        len--;
        if(index == len)
            index = 0;
    }
    printf("\nRESULT : ");
    switch(flames[0]){
        case 'F': printf("BOTH ARE FRIENDS"); break;
        case 'L': printf("BOTH ARE LOVERS"); break;
        case 'A': printf("BOTH ARE ATTRACTION"); break;
        case 'M': printf("BOTH ARE MARRIAGE"); break;
        case 'E': printf("BOTH ARE ENEMIES"); break;
        case 'S': printf("BOTH ARE SISTERS"); break;
    }

    return 0;
}
