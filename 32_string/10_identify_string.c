#include <stdio.h>


int main(){

char c,str[100];
int vowel,consonant,word,digits,others,i=0;
vowel=consonant=word=digits=others=0;
printf("Enter a string : ");
gets(str);


while( (c = str[i]) != '\0'){

if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U' )
{
    vowel++;
}

else if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
{
    consonant++;
}

else if (c >= '0' && c <= '9')
{
    digits++;
}

else if (c == ' ')
{
    word++;
}

else
others++;

i++;
}
word++;

printf("vowel : %d\n",vowel);
printf("consonant : %d\n",consonant);
printf("digits : %d\n",digits);
printf("words : %d\n",word);
printf("others : %d\n",others);

return 0;
}