#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct vowelDict{

        int a;
        int e;
        int i;
        int o;
        int u;
};


void sort_letter(struct vowelDict *dict, char ptr){

        if (ptr == 'a'){
                dict->a = dict->a + 1;
        }
        else if (ptr == 'e'){
                dict->e = dict->e + 1;
        }
        else if(ptr == 'i'){
                dict->i = dict->i + 1;
        }
        else if(ptr == 'o'){
                dict->o = dict->o + 1;
        }
        else if (ptr == 'u'){
                dict->u = dict->u + 1;
        }
}


int main(int argc, char *argv[]){

        if (argc < 2){
                fprintf(stderr,"Usage: Must include text in command line\n");
                exit(1);
        }

        struct vowelDict Dict;
        Dict.a = 0;
        Dict.e = 0;
        Dict.i = 0;
        Dict.o = 0;
        Dict.u = 0;

        for (int i = 1; i < argc; i ++){

                for (int k = 0; k < strlen(argv[i]); k++){

                                char ptr = argv[i][k];

                                if(isalpha(ptr)){
                                        sort_letter(&Dict,ptr);
                                        }

                                }
        }
        if (Dict.a == 0 && Dict.e == 0 && Dict.i == 0 && Dict.o == 0 && Dict.u == 0){
               fprintf(stdout,"No vowels detected\n");
       }
       else{

               fprintf(stdout,"Number of a's: %d\n",Dict.a);
               fprintf(stdout,"Number of e's: %d\n",Dict.e);
               fprintf(stdout,"Number of i's: %d\n",Dict.i);
               fprintf(stdout,"Number of o's: %d\n",Dict.o);
               fprintf(stdout,"Number of u's: %d\n",Dict.u);
       }


return 0;
}
