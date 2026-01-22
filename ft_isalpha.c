#include <stdio.h>

#function en c qui vérifie si un charactere est bien un charactere Alphanumérique
int	ft_isalpha(int c)
{
	if((c >= 'A' && c <= 'Z')||(c >= 'a' && c <= 'z'))
	{
		return(1);
	}
	else
	{
		return(0);
	}
}

