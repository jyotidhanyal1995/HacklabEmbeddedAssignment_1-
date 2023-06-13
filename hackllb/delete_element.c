

#include "sll.h"
int sl_delete_element(Slist **head, data_t data)
{
	/*check if list is not empty*/
	if (*head == NULL) 
	{
		/*if list is empty then return failure*/
		return FAILURE;
	}
        /*declare temp and prev as slist pointer */
	Slist *temp = *head;
	Slist *prev = NULL;
	int node_deleted = 0;


	while(temp != NULL)
	{
	    if(temp->data == data)
	    {
		//if it is first node
		if(temp == *head)
		{
		  
		    *head = temp->link;
		}
		else
		{
		    prev->link= temp->link;
		}
		//check next node before freeing
		Slist *delete =temp;
		//traverse through the link
		temp =temp->link;
		free(delete);
		node_deleted++;
                // return SUCCESS;
	    }
	    else
	    {
		prev = temp;
		temp = temp->link;
	    }
	  
	}

         /*if node_deleted is 0 then return data not found */
	if(node_deleted == 0)
	{
		return DATA_NOT_FOUND;
	}
	
	//else retur success
	return SUCCESS;
	
}
