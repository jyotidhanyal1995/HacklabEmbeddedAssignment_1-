
#include "sll.h"

int main()
{

	int option, ndata, gdata, ret, n;


	Slist *head = NULL; //initialize the header to NULL

	printf("1.Insert at first\n2.Delete element\n3.delete_list\n4.delete_n_element\n5.Print list\n6.Exit\nEnter any option : ");
	while(1)
	{

		/*ask user options*/

		scanf("%d", &option);

		switch (option)
		{
			case 1:
				printf("Enter the number you have to insert : ");
				scanf("%d", &ndata);
				if (insert_at_first(&head, ndata) == FAILURE)
				{
					printf("INFO : Insert first failure\n");
				}


				break;
			
			case 2:
				// To delete the element
				printf("Enter the element you need to delete : ");
				scanf("%d", &ndata);
				if ((ret = sl_delete_element(&head, ndata)) == DATA_NOT_FOUND)
				{
					printf("INFO : Element is not found\n");
				}
				else if (ret == FAILURE)
				{
					printf("INFO : List is empty\n");
				}
				else
				{
					printf("Element Successfully deleted\n");
				}
				break;
			case 3:
				//to delete the entire list
				if((ret = sl_delete_list(&head)) == FAILURE)
				{
				    printf("List is Empty\n");
				}
				else
				{
				    printf("List has been deleted successfully\n");
				}
				break;
			case 4:
				//delete the nth element
				printf("Enter the value of n for node that you want to delete ");
				scanf("%d" ,&n);
				if((ret= delete_n_element(&head,n)) == FAILURE)
				{
				    printf("INFO : List is Empty\n");
				}
				else if(ret == DATA_NOT_FOUND)
				{
				    printf("n is larger then length of the list\n");
				}
				else
				{
				    printf("Element is deleted successfully\n");
				}
				break;
			case 5:
				print_list(head);
				break;
			case 6:
				return SUCCESS;

			default: printf("Enter proper choice !!\n");
					 break;
		}
	}

	return SUCCESS;
}
