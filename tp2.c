#include <stdio.h>
#include <stdlib.h>


int main()
{
   char tb[20] = "MouradZOBIRI";
   printf("%s\n",tb);
   int longueur_chaine = 0;
   longueur_chaine = strlen(tb);
   printf("la chaine  %s fais %d caracteres de long\n",tb,longueur_chaine);
   printf("donc on aura au final:\n\n");

   int tb1[longueur_chaine],i = 0;
      for (i=0; i<longueur_chaine; i++)
      {
       tb1[longueur_chaine] = 052;
      }
          for (i = 0; i<longueur_chaine+2 ;i++)
          {
           printf("%c",tb1[longueur_chaine]);
          }

       {
       printf("\n");
       printf("%c""%s""%c\n",052,tb,052);
           for (i = 0; i<longueur_chaine+2;i++)
           {
           printf("%c",tb1[longueur_chaine]);
           }

       }

return 0;
}



