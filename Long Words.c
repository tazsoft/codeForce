#include <stdio.h>
#include<string.h>

int main() {
  int n, lenght;
  char word[99];
  scanf("%d", &n);

  for (int i = 0; i <= n; i++) {
    gets(word);
    lenght = strlen(word);
    if (lenght > 10) {
      printf("%c%d%c\n", word[0],lenght - 2,word[lenght - 1]);
    } else {
      printf("%s\n", word);
    }
  }
  return 0;
}
