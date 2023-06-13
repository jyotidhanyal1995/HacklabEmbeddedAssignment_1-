
#include "sll.h"

//function defination
int delete_n_element(Slist **head, data_t n)
{
    //check if list is not empty
    if(*head == NULL)
    {
	/*return failure if list is empty*/
	return FAILURE;
    }

    //declare variable count to find the length of the list
    int count = 1;
    //temp and prev are Slist pointers
    Slist *temp ,*prev;
    //initiate temp with head pointer
    temp = *head;
    prev = NULL;

    //find the length of list
    while(temp != NULL)
    {
	count++;
	temp = temp->link;
    }

    //again assign temp with head
    temp = *head;
    //if n is greater or equal to count return data not found
    if(n >= count)
    {
	return DATA_NOT_FOUND;
    }
    else
    {
	//again make count as 1
	count = 1;
    }

    //to fectch the position and delete the node
    while(temp != NULL && count <= n)
    {
	//check if count is equal to n
	if(count++ == n)
	{
	    //if it is the first node
	    if(*head == temp)
	    {
		//store temp-<link in head 
		*head = temp->link;
	    }
	    else
	    {
		//if not first node then update prev->link with temp->link
	    prev->link = temp->link;
	    }
	    //free the node
	    free(temp);
	    //return success
	    return SUCCESS;
	}
	else
	{
	    //if n is not equal to count then traverse through the list
	    prev = temp;
	    temp = temp->link;
	}

    }
}
