#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>


static void             check_bzero(void *mem, int c, int len, int n_bzero)
{
	memset(mem, c, len);
	ft_bzero(mem, n_bzero);
	write(1, mem, len);  
}

static void             check_bzerotrue(void *mem, int c, int len, int n_bzero)
{
	memset(mem, c, len);
	bzero(mem, n_bzero);
	write(1, mem, len);
}


int main(void)
{

	printf("============================================================================================\n");
	printf("============================================================================================\n");
	printf("\n");
	printf("                                        FT_BZERO\n");
	printf("\n");
	printf("============================================================================================\n");
	printf("============================================================================================\n");


	void	*mem;
	int	len;
	int 	arg;

	len = 5;
	if (!(mem = malloc(sizeof(*mem) * len)))
		return (0);

	printf("\n\nTEST1 : \n");
	printf("check_bzero(mem, 'e', len, 5);\n");
	printf("Compteur  : =>12345<=\n");
	write(1,"Resultat  : =>",14);
	check_bzero(mem, 'e', len, 5);
	write(1,"<=\n",3); 
	free(mem);
	printf("check_bzerotrue(mem, 'e', len, 5);\n");
	printf("Compteur  : =>12345<=\n");
	write(1,"Resultat  : =>",14);
	check_bzerotrue(mem, 'e', len, 5);
	write(1,"<=\n",3);
	free(mem);



	printf("\nTEST2 : \n");
	printf("check_bzero(mem, 'e', len, 0);\n");
	printf("Compteur  : =>12345<=\n");
	write(1,"Resultat  : =>",14);
	check_bzero(mem, 'e', len, 0);
	write(1,"<=\n",3);
	free(mem);
	printf("check_bzerotrue(mem, 'e', len, 0);\n");
	printf("Compteur  : =>12345<=\n");
	write(1,"Resultat  : =>",14);
	check_bzerotrue(mem, 'e', len, 0);
	write(1,"<=\n",3);
	free(mem);



	printf("\nTEST3 : \n");
	printf("check_bzero(mem, 'e', len, 3);\n");
	printf("Compteur  : =>12345<=\n");
	write(1,"Resultat  : =>",14);
	check_bzero(mem, 'e', len, 3);
	write(1,"<=\n",3);
	free(mem);
	printf("check_bzerotrue(mem, 'e', len, 3);\n");
	printf("Compteur  : =>12345<=\n");
	write(1,"Resultat  : =>",14);
	check_bzerotrue(mem, 'e', len, 3);
	write(1,"<=\n\n",4);
	free(mem);


	return (0);
}
