

typedef struct {
	NodePtr headPtr,tailPtr;
	int size;
} Queue;


void enqueue_struct(Queue* q, int o, int n){
  NodePtr new_node=(NodePtr) malloc(sizeof(Node));
  int price;
if(new_node){ 
  new_node->order_number = o;
  new_node->qty = n;
  new_node->next = NULL;
  if(q->size==0) q->headPtr=new_node; 
  else q->tailPtr->next = new_node;
  q->tailPtr = new_node;
  q->size++;
 }
}

void payment(int price, char menu[], int no)
{
  int cash=0;
  printf("--------------------------\n");
  printf("|    Customer No. %02d     |\n|  %19s   |\n|    You have to pay:    |\n|        %05d ฿         |\n",no ,menu ,price);
  while(cash<price)
  {
    printf("      Paid : ");
    scanf("%d",&cash);
  }
  if(cash>price) printf("|   Your Change : %05d  |\n",cash-price);
  printf("--------------------------\n");
  printf("|      THANK YOU <3      |\n");
  printf("--------------------------\n");
}

int dequeue_struct(Queue *q, int no){
   NodePtr t=q->headPtr;
   if(t){
   int o = t->order_number;
   int n = t->qty;
  switch(o){
    case 1: payment(100*n,"Ramen        ",no); break;
    case 2: payment(20*n,"Somtum      ",no); break;
    case 3: payment(50*n,"Fried Chicken   ",no); break;
    default:  printf("--------------------------\n"); printf("|         No Food        |\n"); printf("--------------------------\n");
    }
   q->headPtr = t->next;
   if(q->size==1) q->tailPtr=NULL;
   q->size--;
   free(t);
   return o;
   }
   printf("---------------------------\n"); printf("|     The Queue is Empty ;-;    |\n"); printf("---------------------------\n");
   return 0;
}

