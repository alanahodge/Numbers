#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//Coin Flip Program
//Created by Alana Hodge
//Simulates n random coin flips, outs results to stdout. Uses srand(time(0)) generate a
//different random number upon every iterative run. If the number is even, the result is considered
//a heads, else it is tails. n is inputted by the user via command line.

int main(int argc, char **argv){

        if (argc != 2){
                fprintf(stderr,"Usage: Enter a single number.");
                exit(1);
        }
        else {
                int flips = atoi(argv[1]);
                char flipArray[flips];

                if (flips <= 0){
                        fprintf(stderr,"Usage: Enter a positive integer.");
                        exit(1);
                }
                srand(time(0));
                for (int i = 0 ; i < flips; i++){
                        int r = rand();
                        if(r % 2 == 0){

                                char result[1] = "H";
                                strncat(flipArray,result,sizeof(char));
                        }
                        else{
                                char result[1] = "T";
                                strncat(flipArray,result,sizeof(char));
                        }
                }

                //Display final array to standard out
                for(int j = 0; j < flips; j++){
                        fprintf(stdout,"%C",flipArray[j]);
                }
        }
return 0;
}
