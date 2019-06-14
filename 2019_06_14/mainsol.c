#include "solucion.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char** argv) {
  pid_t pid;
  pid=fork();
  int x;
  int y;
 if(pid==0){
    x=fibonacci(10);
    guardarEntero("archivo",x);
 }
 else{
   wait(NULL);
   y=leerEntero("archivo")*100;
   printf("fibonacci(%d) = ",y);
 }
}
