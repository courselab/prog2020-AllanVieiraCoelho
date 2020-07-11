/* m007.c - Number of letters.

   This program reads the name of a person from the standard input
   and outputs the number of letters contained in the name (excluding
   blanks and punctuation). The name should be entered using only
   ASCII characters (26 letter of latim alphabet, no diacrictics).


   E.g.

      command line    : m007
      standard input  : John Doe
      expected output : 7

   Directions:

      Please, edit function lettercount();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 256

/* Count the number of letters in string s.*/

int pattern (char s)             
{
   int c = 0;
   if (s>='a' && s<='z')
   {
      c++;
   }
   if (s>='A' && s<='Z')
   {
      c++;
   }
   return c;
}

int lettercount (char *s)
{
 int k, contagem;
   contagem = 0;
   
   for (k=0; k<=strlen(s); k++)
   {
      contagem = contagem + pattern(s[k]);
   }
   
  return contagem;
  
}



/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;
  char name[MAX];

  fgets (name, MAX-1, stdin);
  
  n = lettercount (name);

  printf ("%d\n", n);
  
  return 0;
}
