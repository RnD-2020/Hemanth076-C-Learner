/*
OVERVIEW: 	Given date of births of two persons as inputs, return 1 if person one is elder,
2 if person two is elder, 0 if both are of same age.
Example: isOlder("24-07-2000", "25-07-2000") should return 1 as person one
is elder than person two.

INPUTS: 	DOBs of two persons as parameters in the format "DD-MM-YYYY".

OUTPUT: 	1 if person one is elder, 2 if person two is elder, 0 if both are of same age.

ERROR CASES: Return -1 if any DOB is invalid.

NOTES: 		Don't use any built-in C functions for comparisions. You are free to write any helper functions.
*/

int isOlder(char *dob1, char *dob2) {
	if(((*(dob1+1))==(*(dob2+1)))&((*(dob1))==(*(dob2))))
		if(((*(dob1+3))==(*(dob2+3)))&(*(dob1+4)==((*(dob2+4)))))
			for(int i=6;i!='\0';i++)
				for (int j = 6; j != '\0'; j++)
				{
					if ((*(dob1 + i)) == (*(dob2 + j)))
						return 0;
					else if ((*(dob1 + i)) > ((*(dob2 + j))))
						return 1;
					else
						return 2;
				}

}