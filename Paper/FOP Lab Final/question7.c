#include <stdio.h>

int main() {
   char name1[10] = "Filip";
   char name2[10] = "George";
   char ch;

   int index = 0;

   printf("Before Swapping char - \n");
   printf("Value of name1 - %s \n", name1);
   printf("Value of name2 - %s \n", name2);

   while(name1[index] != '\0') {
      ch = name1[index];
      name1[index] = name2[index];
      name2[index] = ch;
      index++;
   }

   printf("After Swapping the char - \n");
   printf("Value of name1 - %s \n", name1);
   printf("Value of name2 - %s \n", name2);

   return 0;
}
