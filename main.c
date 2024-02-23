#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"

#include "Queue.h"

int main(int argc , char **argv) {
  NodePtr headPtr=NULL;
  NodePtr tailPtr=NULL;

  int i,d;

  Queue  q;
   q.headPtr=NULL;
   q.tailPtr=NULL;
   q.size=0;

 for(i=1;i<argc;i++){
        if(strcmp(argv[i],"x")==0){
            d = dequeue_struct(&q);
            printf("dequeing %d\n",d);
        }
        else {
        enqueue_struct(&q, atoi(argv[i]));
        }
 }
  return 0;
}
