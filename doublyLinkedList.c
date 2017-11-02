#include <stdio.h>
#include <stdlib.h>

#include "doublyLinkedList.h"

int main()
{
	int x,y;
	node *first = NULL;
	while(1)
	{
		printf("Enter your choice. 1 for insertfront, 2 for insertrear, \
3 for delete front, 4 for delete back, 5 for delete, 6 for display 7 for reverse and anything else for exit\n");
		scanf("%d",&x);

		switch(x)
		{
			case 1: printf("Enter what to insert front \n"); scanf("%d",&y); first = insertFront(first,y);break;
			case 2: printf("Enter what to insert back \n"); scanf("%d",&y); first = insertRear(first,y);break;
			case 3: printf("Delete from front \n"); first = deleteFirst(first);break;
			case 4: printf("Delete from back \n"); first = deleteLast(first);break;
			case 5: printf("delete what \n"); scanf("%d",&y); first = delete(first,y);break;
			case 6: display(first);break;
			case 7: first = reverse(first);break;
			default: exit(0);
		}

	}
	return 0;
}