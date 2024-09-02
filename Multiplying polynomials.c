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
Link* head3 = NULL;
int main() {
	
    multipy();
}
int append(int val, int val1)
{
	Link* newb = (Link*)malloc(sizeof(Link));
	newb->data1 = val;
	newb->data2 = val1;
	newb->next = NULL;
	if (head == NULL)
		head = newb;
	else
	{
		Link* p = head;
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = newb;
	}
}

int append2(int val, int val1)
{
	Link* newb = (Link*)malloc(sizeof(Link));
	newb->data1 = val;
	newb->data2 = val1;
	newb->next = NULL;
	if (head2 == NULL)
		head2 = newb;
	else
	{
		Link* p = head2;
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = newb;
	}
}
int append3(int val, int val1)
{
	Link* newb = (Link*)malloc(sizeof(Link));
	newb->data1 = val;
	newb->data2 = val1;
	newb->next = NULL;
	if (head3 == NULL)
		head3 = newb;
	else
	{
		Link* p3 = head3;
		while (p3->next != NULL)
		{
			p3 = p3->next;
		}
		p3->next = newb;
	}
}
int traverse()
{
	Link* p = head;
	while (p != NULL)
	{
		printf(" %d %d ", p->data1, p->data2);
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
	append(1, 1);
	append(0, 1);
}
int struct2()
{
	append2(1, 1);
	append2(0, 2);
}
int multipy()
{
	struct1();
	struct2();
	int MATH = 0;
	int DOB = 0;
	Link* p = head;
	Link* p2 = head2;
	while (p != NULL)
	{
		p2 = head2;
		while (p2 != NULL)
		{
			MATH = p->data1 * p2->data1;
			DOB = p->data2 + p2->data2;
			p2 = p2->next;
			append3(MATH, DOB);
		}

		p = p->next;

	}
	//¥[Á`
	Link* p3 = head3;
	for (int i = (head3->data2);i >= 0;i--)
	{
		int sum = 0;
		p3 = head3;
		while (p3 != NULL)
		{
			if (p3->data2 == i)
			{
				sum += p3->data1;
				p3 = p3->next;
			}
			else
			{
				p3 = p3->next;
			}
		}
		if (i == 0)
		{
			printf("%dy^%d", sum, i);
		}
		else
		{
			printf("%dy^%d+", sum, i);
		}


	}

}





