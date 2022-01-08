/*Naeem Sarder 212902061*/
#include<stdio.h>

void concat(char[], char[]);
int sLength(char[]);
void strReverse(char s[]);
void strLowerUpper(char ch);
int main() {
	char s1[50], s2[30];
	char ch;
	printf("\nEnter String 1 :");
	gets(s1);
	printf("\nEnter String 2 :");
	gets(s2);
	printf("\nEnter an Alphabet :");
	scanf("%c",&ch);
	concat(s1, s2);
	strReverse(s2);
	strLowerUpper(ch);
	printf("\nConcated string is :%s\n ", s1);
	printf("The length is:%d\n",sLength(s1));
	return (0);
}
void concat(char s1[], char s2[]) {
	int i, j;
	i = sLength(s1);
	for (j = 0; s2[j] != '\0'; i++, j++) {
		s1[i] = s2[j];
	}
	s1[i] = '\0';
}
int sLength(char s[] ){
    int length = 0;

   while (s[length] != '\0'){
      length++;
   }
      return length;
}
void strReverse(char s[])
{
     int i = 0;
    int j = sLength(s) - 1;

   while (i < j) {
      char temp = s[i];
      s[i] = s[j];
      s[j] = temp;
      i++;
      j--;
   }

   printf("\nReverse string is : %s\n", s);
}
void strLowerUpper(char ch)
{

   if (ch >= 'A' && ch <= 'Z') {
      printf("Character is uppercase Letters\n");
   } else if (ch >= 'a' && ch <= 'z') {
      printf("Character is  Lowercase Letters\n");
   } else {
      printf("Non alphabet character\n");
   }
}


