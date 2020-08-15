/* m008.c - Lastname-Names.

   This program reads the name of a person from the standard input
   in the form 'First-name middle-names last-name' and outputs the 
   name in the form 'LAST-NAME, first-name middle-names'.
   The name should be entered using only ASCII characters (26 letter 
   of latim alphabet, no diacrictics).


   E.g.

      command line    : m008
      standard input  : John Little Bill Doe 
      expected output : DOE, John Little Bill

   Directions:

      Please, edit function lasname();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 256

/* Converts the string 's' from first-middle-last name 
   form into LAST-first-middle form. */

void lastname (char *s)
{int a,b,c,i;
    char d[50],e[50],f[50],g[50],h;
    b=0;
    a=strlen(s);
    strncpy(d,s,a);
    d[a+1]= '\0';

      for (i=0;i<=(a-1);i=i+1)
      {
        h=d[i];


        if (h== ' ')
        {   c=i;}
      } 
  strncpy(e,d,(c));
    e[c]='\0';

    strncpy(f,d+c+1,a-c);
    f[a-c-2]='\0';

    a=strnlen(f);
    strncpy(g,f,a);
    g[a]=    ',';
    g[a+1]=  ' ';
    g[a+2]= '\0';

    for (i=0;i<=a;i=i+1)
    {
        h=g[i];

        if (h>='a' && 122>='c')
        {   g[i]=g[i]-32;
            ;
        }
    }    
    strncpy(g+a+2,e,c);
     g[a+2+c]='\0';
    a=strlen(g);
    strncpy(s,g,a);
    s[a]='\0';
}     

/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;
  char name[MAX];

  fgets (name, MAX-1, stdin);
  
  lastname (name);

  printf ("%s\n", name);
  
  return 0;
}
