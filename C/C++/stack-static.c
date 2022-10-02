//stack static implementation
#include<stdio.h>

#include<conio.h>

int stack[5], n=5, top=-1;

void push(int val) {

   if(top>=n-1)

      printf("Stack Overflow"); 

   else {

      top++;

      stack[top]=val;

   }

}

void pop() {

   if(top<=-1)

      printf("Stack Underflow\n"); 


   else {

      printf("The popped element is %d",stack[top]);

      top--;

   }

}

void display() {
    int i;
   if(top>=0) {

      printf("Stack elements are:\n");

      for(i=top; i>=0; i--)

	 printf("\n%d",stack[i]);

        } else

      printf("Stack is empty");

}

int main() {

   int ch, val; 

   printf("1 Push in stack\n");

    printf("2 Pop from stack\n");

    printf("3 Display stack\n");

    printf("4 Exit\n");

   do {

      printf("Enter choice: ");

      scanf("%d",&ch);

      switch(ch) {

	 case 1: {

	   printf("Enter value to be pushed:");

	    scanf("%d",&val);

	    push(val);

	    break;

	 }

	 case 2: {

            pop();

            break;

         }

         case 3: {

            display();

            break;

         }

         case 4: {

            printf("Exit\n");

            break;

         }

         default: {

            printf("Invalid Choice \n");

         }

      }

   }while(ch!=4); 

      return 0;

}

