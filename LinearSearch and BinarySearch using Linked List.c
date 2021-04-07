#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//#define NULL 0
int count,size,num;
struct node
   {
      int info,index;
      struct node*link;
   }*start,*node1,*temp,*low,*high,*mid;
void Create(){
    int n;
    printf("Enter the number of nodes you want to enter in the linked list:");
    scanf("%d",&n);
    size=n;
    start=NULL;
    num=1;
    while(n>=1){
        node1=(struct node*)malloc(sizeof(start));
        node1->link=NULL;
        printf("Enter any integer you want to add for current node = ");
        scanf("%d",&node1->info);
        node1->index=num;
        num++;
        if(start==NULL){
            start=node1;
        }
        else{
            temp=start;
            while(temp->link!=NULL){
                temp=temp->link;
            }
            temp->link=node1;
        }
        n--;
    }
}
void Display(){
    temp=start;
    while(temp!=NULL){
        printf("->%d",temp->info);
        temp=temp->link;
    }
}
void LinearSearch(int key){
    count=0;
    temp=start;
    while(temp!=NULL){
        count++;
        if(temp->info==key){
            printf("%d found at position %d .",key,count);
            break;
        }
        temp=temp->link;
    }
    if(count>size){
        printf("%d is not present in the linked list",key);
    }
}
void BinarySearch(int key){
    low=start;
    temp=start;
    while(temp->link!=NULL){
        temp=temp->link;
    }
  high=temp;
  count=0;
  while(low->index<=high->index)
  {
      mid->index=((low->index)+(high->index))/2;
      if(mid->info==key)
      {
          count++;
          printf("%d is found at %d position",key,mid->index);
          break;
      }
      else if((mid->info)>key)
      {
          high->index=(mid->index)-1;
      }
      else if((mid->info)<key)
      {
          low->index=(mid->index)+1;
      }
  }
  if(count!=1)
  {
      printf("!!!Element is not present in the array!!!");
  }
}
int main()
{
    int k;
    printf("\nCreating Linked list....\n");
    Create();
    printf("\nDisplaying Linked list....\n");
    Display();
    printf("\nEnter the integer you want to search in the linked list: ");
    scanf("%d",&k);
    printf("By LinearSearch:\n");
    LinearSearch(k);
    printf("By BinarySearch:\n");
    BinarySearch(k);
    return 0;
}
