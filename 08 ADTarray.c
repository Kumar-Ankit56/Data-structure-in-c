#include<stdio.h>
#include<stdlib.h>
//this is ADT of marks, custom data type, our data type
struct myArry{
   int total_size;
   int used_size;
   int *ptr;
};
void createArray(struct myArry *a, int tsize, int usize){
    /*(*a).total_size = tsize;
    (*a).used_size =  usize;
    (*a).ptr=(int *)malloc(tsize*sizeof(int));*/

     //short cut
     a->total_size = tsize;
    a->used_size =  usize;
    a->ptr=(int *)malloc(tsize*sizeof(int));
}
void show(struct myArry*a){
    for(int i=0; i< a->used_size; i++){
        printf("%d\n",(a->ptr)[i]);
    }
}
void set(struct myArry*a){
    int n;
    for(int i=0; i< a->used_size; i++){
            printf("Enter element %d",i);
        scanf("%d",&n);
        (a->ptr)[i]=n;
    }
}
int main()
{
  struct myArry marks;
  createArray(&marks,10,2);
  printf("Now it is running set\n");
  set(&marks);
  printf("Now it is running show\n");
  show(&marks);

  return(0);
}
