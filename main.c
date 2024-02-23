#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"

#include "Queue.h"

int main(int argc , char **argv) {
  NodePtr headPtr=NULL;
  NodePtr tailPtr=NULL;

  int i,d,price,n=0;

  Queue  q;
   q.headPtr=NULL;
   q.tailPtr=NULL;
   q.size=0;

 for(i=1;i<argc;i++){
        if(strcmp(argv[i],"x")==0){
            d = dequeue_struct(&q,++n);
        }
        else {
        enqueue_struct(&q, atoi(argv[i]), atoi(argv[i+1]));
        printf("   My order number is %d\n",atoi(argv[i]));
        i++;
        }   
 }
        printf("==========================\n");
        if(q.size>0){ printf("There are %d queue left ;0;\n",q.size); printf("==========================\n");}
  return 0;
}
