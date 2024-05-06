// arquivo para plotar de 79 em 79 caracteres (ou seja, plota uma string inteira, ao invés de caracter por caracter como o readarqs.c)
#include<stdio.h>
#include <stdlib.h>

int main( )
{
  FILE *fp;
  char s[80];
  fp = fopen ( "POEM.TXT", "r" );
  if ( fp == NULL )
  {
    puts ( "Cannot open file" );
    system("pause");
    exit(0);
  }
  while ( fgets ( s, 79, fp ) != NULL )
    printf ( "%s" , s );
  fclose ( fp );
  system("pause");
  return 0;
}