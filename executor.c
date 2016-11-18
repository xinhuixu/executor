#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main( int argc, char *argv[] ) {
  char buf[50];
  printf("what's good:\n");
  fgets(buf, sizeof(buf), stdin);

  char *s = buf;
  char *p;

  char *command[10];
  //  for(i = 0; s; command[i] = strsep(&s, " "), i++);
  // command[i] = 0;
 
  while ((p = strsep(&s, " ")) != NULL )
    command[i] = p;
 
  //  execvp( command[0], command );

  return 0;
}
