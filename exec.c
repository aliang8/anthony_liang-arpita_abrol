#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(){
  printf("What would you like to do? ");
  char *a = calloc(1,256);
  fgets (a, 255, stdin);
  char *s;
  char *command[20];
  int i = 0;
  a = strsep(&a, "\n");
  while(a != NULL){
    s = strsep(&a, " ");
    command[i] = s;
    i++;
  }
  command[i] = 0; //terminating null;
  execvp(command[0], command);
  return 0;
}
