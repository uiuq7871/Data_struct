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
		return head; // 處理空或僅包含一個節點的列表
	}

	Node* prev = NULL;
	Node* current = head;
	Node* next = NULL;

	while (current != NULL) {
		next = current->next; // 存儲下一個節點
		current->next = prev; // 反轉當前節點的指針
		prev = current; // 向前移動指針
		current = next;
	}

	head = prev; // 新頭節點是 prev

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
	printf("\n長度%d", count);
	return(count);
}






