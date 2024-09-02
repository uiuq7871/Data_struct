#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
	int data;
	struct Node* next;
}Node;
Node* head = NULL;
int main() 
{
	append(60);
	append(70);
	append(80);
	append(90);
	append(100);
	append(110);
	append(120);
	//taverse();
	reverse();
	taverse();
}


int append(int value)
{
	Node* new = (Node*)malloc(sizeof(Node));
	new -> data = value;
	new -> next = NULL;
	if (head == NULL)
		head=new;
	else
	{
		Node* p = head;
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = new;
	}
}

int taverse()
{
	if (head == NULL)
		return(-1);
	else
	{
		Node* p = head;
		while (p ->next!= NULL)
		{
			printf(" %d ", p->data);
			p = p->next;
		}
	}

}

int reverse()
{
	if (head == NULL || head->next == NULL) {
		return head; // �B�z�ũζȥ]�t�@�Ӹ`�I���C��
	}

	Node* prev = NULL;
	Node* current = head;
	Node* next = NULL;

	while (current != NULL) {
		next = current->next; // �s�x�U�@�Ӹ`�I
		current->next = prev; // �����e�`�I�����w
		prev = current; // �V�e���ʫ��w
		current = next;
	}

	head = prev; // �s�Y�`�I�O prev

	return head;

}

int LEN()
{
	int count=0;
	Node* p = head;
	while (p->next != NULL)
	{
		p = p->next;
		count++;
	}
	count++;
	printf("\n����%d", count);
	return(count);
}






