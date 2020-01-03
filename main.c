#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "functionscat.h"
#include "functionstag.h"
#include "Map.h"
#include "list.h"
#include "queue.h"

long long stringHash(const void * key) {
    long long hash = 5381;

    const char * ptr;

    for (ptr = key; *ptr != '\0'; ptr++) {
        hash = ((hash << 5) + hash) + tolower(*ptr); /* hash * 33 + c */
    }

    return hash;
}

int stringEqual(const void * key1, const void * key2) {
    const char * A = key1;
    const char * B = key2;

    return strcmp(A, B) == 0;
}

int main()
{
    int op;

    printf("Hewwo\n");
    return 0;

    while(op) //Menu
    {
      printf("1.-A\n");
      printf("2.-B\n");
      printf("3.-C\n");
      printf("4.-D\n");
      printf("5.-E\n");
      printf("6.-F\n");
      printf("7.-G\n");
      printf("8.-H\n");
      printf("9.-Salir\n");
      printf("Escoja una opcion -> ");

      scanf("%i",&op);

      if( op < 1 || op > 9)
      {
        system("cls");  //Limpia pantalla
        printf("Ingrese una opcion valida\n");
        getchar();
        getchar();
        system("cls");
      }

      switch (op)
      {
          case 1:

                system("cls");
                break;


          case 2:

                system("cls");
                break;

          case 3:

                system("cls");
                break;


          case 4:

                system("cls");
                break;

          case 5:

                system("cls");
                break;

          case 6:

                system("cls");
                break;

          case 7:

                system("cls");
                break;

          case 8:

                system("cls");
                break;


          case 9: //salir
                system("cls");
                exit (1);
                break;

        }

    }
}
