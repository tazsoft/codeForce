#include<stdio.h>
int main() {
int x,y;
scanf("%d%d",&x,&y);
char str[x],tmp;
scanf(" %s",str);
int len = strlen(str);
while(y--) {
   for(int i = 0; i<len-1;) {
      if(str[i]=='B' && str[i+1]=='G') {
         tmp = str[i];
         str[i] = str[i+1];
         str[i+1] = tmp;
         i+=2;
      }else{
         i++;
          }
       }
    }
printf("%s\n",str);
return 0;
}