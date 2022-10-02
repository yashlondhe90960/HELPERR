#include<stdio.h>

#include<conio.h>

int queue[3], n = 3, front = - 1, rear = - 1;

void Insert() {

   int val;

   if (rear == n - 1)

      printf("\nQueue Overflow\n");

   else {

      if (front == - 1)

      front = 0;

      printf("\nInsert the element in queue : ");

      scanf("%d",&val);

      rear++;

      queue[rear] = val;

   }

}

void Delete() {

   if (front == - 1 || front > rear) {

      printf("\nQueue Underflow ");

   return ;

   } else {

      printf("\nElement deleted from queue is :   %d",queue[front] );

      front++;;

   }

}

void Display() {

   if (front == - 1)

   printf("\nQueue is empty");

   else {
	   int i;
      printf("\nQueue elements are : ");

      for (i = front; i <= rear; i++)

	 printf("%d ",queue[i]);



   }

}

int main() {

   int ch;  
   printf("\n\nQUEUE MENU\n");
   printf("1. Insert element to queue\n");

   printf("2. Delete element from queue\n");

   printf("3. Display all the elements of queue\n");

   printf("4. Exit\n");

do {

   printf("\nEnter your choice : ");

   scanf("%d",&ch);

   switch (ch) {

      case 1: Insert();

         break;

      case 2: Delete();

         break;

      case 3: Display();

         break;

      case 4: printf("Exit\n");

         break;

      default: printf("Invalid choice\n");

   }

} while(ch!=4);

   return 0;

}
