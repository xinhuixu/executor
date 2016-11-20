#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
  char buf[50];
  char * buffer = buf;
  printf("what's good:\n");
  fgets(buf, sizeof(buf), stdin);

  buffer = strsep(&buffer, "\n");

  char *command[10];

  int i = 0;
  while (buffer) {
    command[i] = strsep(&buffer, " ");
    i++;
  }

  command[i] = 0;
  execvp( command[0], command );

  return 0;
}
