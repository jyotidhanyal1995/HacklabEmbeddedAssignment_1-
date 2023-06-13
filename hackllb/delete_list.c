
#include "sll.h"

/*function defination to delete the list*/
int sl_delete_list(Slist **head)
{
	/*check if the list is empty*/
	if(*head == NULL)
	{
		/*if list is empty then return failure*/
		return FAILURE;
	}
        /*Declare the temp Slist pointer*/
	Slist *temp;
	
	/*if the list is not empty*/
	while(*head != NULL)
	{
           /*update temp with head* */
	   temp = *head;
	   /*update head with temp->link*/
	   *head = temp->link;
	   /*free temp*/
	   free(temp);
	}
	   /*return success */
	   return SUCCESS;
}
