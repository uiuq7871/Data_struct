#include <stdio.h>
#include <stdlib.h>

typedef struct Link
{
	int data1;
	int data2;
	struct Link* next;
}Link;


Link* head = NULL;
Link* head2 = NULL;
int main() {
	multipy();
}
	int append(int val,int val1) 
	{
		Link* new = (Link*)malloc(sizeof(Link));
		new->data1 = val;
		new->data2 = val1;
		new->next = NULL;
		if (head == NULL)
		head=new;
		else 
		{
			Link* p = head;
			while (p->next != NULL)
			{
				p = p->next;
			}
			p->next = new;
		}
	}
	
	int append2(int val, int val1)
	{
		Link* new = (Link*)malloc(sizeof(Link));
		new->data1 = val;
		new->data2 = val1;
		new->next = NULL;
		if (head2 == NULL)
			head2 = new;
		else
		{
			Link* p = head;
			while (p->next != NULL)
			{
				p = p->next;
			}
			p->next = new;
		}
	}


	int traverse()
	{
		Link* p = head;
		while (p != NULL)
		{
			printf(" %d %d ",p->data1,p->data2);
			p = p->next;
		}
	}
	int traverse2()
	{
		Link* p = head2;
		while (p != NULL)
		{
			printf(" %d %d ", p->data1, p->data2);
			p = p->next;
		}
	}
int LEN()
		{
			Link* p = head;
			int LEN = 1;
			while (p->next != NULL)
			{
				p = p->next;
				LEN++;
			}
			return(LEN);
		}

int struct1()
		{
			append(54, 1);
			append(56, 2);
			traverse();
		}
int struct2()
		{
			append2(36, 1);
			append2(20, 2);
			traverse2();
		}
int multipy()
		{
	struct1();
	struct2();
	Link* multi = (Link*)malloc(sizeof(Link));
		Link* p = head;
		Link* p2 = head2;
		while (p->next != NULL)
		{
			
			if (p2->next != NULL)
			{
				multi->data1=p->data1* p2->data1;
				multi->data2 = p->data2 + p2->data2;



			}
			p = p->next;
			p2 = p2->next;

		}
		
		
	
    



		}
	
//stack
/*int stack[5];
int top = -1;
int main() {
	push(66);
	push(67);
	push(68);
	push(69);
	push(70);
	push(71);
	pop();
	pop();
	pop();
	pop();
	pop();
	pop();
	

	

	

}
int push(int value)
{
	if (top >= 4)
		printf("FULL");
	else
	{
		stack[++top] = value;

		printf("%d", value);
	}
}
int pop()
{
	int popval=0;
	if (top < 0)
		printf("empty");
	else
	{
		 popval=stack[top--];
		printf("%d",popval);
	}

}*/
