#include <stdio.h>
#include<stdlib.h>

int main()
{

  FILE *the_file =  fopen("kriti.csv","r");
  if(the_file == NULL)
  {
      printf("Unable to open the file.");
      exit(1);
  }
   do
   {
       char c =fgetc(the_file);
       if(feof(the_file))
        {
            break;
        }
        else
        {
            if(c==',')
            {
                c ='\t';
            }
            printf("%c",c);
        }
   }while(1);

    fclose(the_file);
    return 0;
}



//  char line[100];
//
//  while(fgets(line, 100 ,the_file))
//  {
//      char *token;
//      token = strtok(line, ",");
//      while(token!=NULL)
//      {
//          printf("%-10s,",token);
//          token = strtok(NULL,",");
//      }
//      printf("\n");
//  }
//}




//#include<stdio.h>
//main()
//{
//    char line[81], character;
//    int c;
//    c = 0;
//    printf("Enter text . Press<return> at end\n");
//    do
//    {
//        character =getchar();
//        line[c] = character;
//        c++;
//    }
//    while(character != '\n');
//    c = c-1;
//    line[c] = '\0';
//    printf("\n%s\n" , line);
//}
