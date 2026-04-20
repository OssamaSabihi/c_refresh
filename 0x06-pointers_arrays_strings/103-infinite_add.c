#include "main.h"

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1len = 0;
	int n2len = 0;
	int carry = 0;
	int sum;
	int i = 0;
	while(n1[n1len] != '\0')
		n1len++;
	while(n2[n2len] != '\0')
		n2len++;
	n1len--;
	n2len--;

	while(n1[n1len] != 0 && n2[n2len] != 0)
	{
		sum = (n1[n1len] - '0') + (n2[n2len] - '0') + carry;
		if(sum < 10)
			 r[i] = sum + '0';
		else
		{
			r[i] = (sum % 10) + '0';
			carry = (sum / 10) ;
		}
		n1len--;
		n2len--;
		i++;
	}
	if(n1len > n2len)
	{

		if(sum >= 10)
		{
			sum = ((n1[n1len] - '0') + carry );
			if(sum < 10)
			{
				r[i] = sum + '0';
				i++;
				n1len--;
			}
			else
			{
					r[i] = (sum % 10) + '0';
			        	carry = (sum / 10);
					i++;
					n1len--;
			}
		}
			
			while(n1[n1len] != 0)
			{
				r[i] = n1[n1len];
				i++;
				n1len--;
			}
			if(carry != 0)
				r[i] = (carry + '0');

	}
	if(n2len > n1len)
        {

                if(sum >= 10)
                {
                        sum = ((n2[n2len] - '0') + carry );
                        if(sum < 10)
                        {
                                r[i] = sum + '0';
                                i++;
                                n2len--;
                        }
                        else
                        {
                                r[i] = (sum % 10) + '0';
                                carry = (sum / 10);
                                i++;
                                n2len--;
                        }
                }
                        while(n1[n1len] != 0)
                        {
                                r[i] = n2[n2len];
                                i++;
                                n2len--;
                        }
        }
	r[i] = '\0';
	if(i > size_r)
		return (0);
	i--;
	int temp;
	int j = 0;
	while(i > j)
	{
		temp = r[i];
		r[i] = r[j];
		r[j] = temp;
		i--;
		j++;
	}
	return (r);
}

		



			
