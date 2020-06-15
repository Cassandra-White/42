#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

static void             check_memset(void *mem, int c, int n, int mem_size)
{
	if (mem != ft_memset(mem, c, n))
		write(1, "mem's adress was not returned\n", 30);
	write(1, mem, mem_size);
	free(mem);
}


static void             check_memsettrue(void *mem, int c, int n, int mem_size)
{
	if (mem != memset(mem, c, n))
		write(1, "mem's adress was not returned\n", 30);
	write(1, mem, mem_size);
	free(mem);
}


int                             main(void)
{

        printf("============================================================================================\n");
        printf("============================================================================================\n");
        printf("\n");
        printf("                                        FT_MEMSET\n");
        printf("\n");
        printf("============================================================================================\n");
        printf("============================================================================================\n");





	void    *mem;
	int             mem_size;

	mem_size = 15;
	if (!(mem = malloc(sizeof(*mem) * mem_size)))
		return (0);
	memset(mem, 'j', mem_size);

	printf("\n\nTest1 :\n");
	printf("mem, 'c', 5, mem_size\n");
	check_memset(mem, 'c', 5, mem_size);


	mem_size = 15;
	if (!(mem = malloc(sizeof(*mem) * mem_size)))
		return (0);
	memset(mem, 'j', mem_size);

	printf("\nTest1 memset() :\n");
	check_memsettrue(mem, 'c', 5, mem_size);
	printf("\n");	

	mem_size = 15;
	if (!(mem = malloc(sizeof(*mem) * mem_size)))
		return (0);
	memset(mem, 'j', mem_size);
	/*---------------------------------------------*/	
	/*---------------------------------------------*/
	printf("\n\nTest2 :\n");
	printf("mem, 'c', 14, mem_size\n");
	check_memset(mem, 'c', 14, mem_size);

	mem_size = 15;
	if (!(mem = malloc(sizeof(*mem) * mem_size)))
		return (0);
	memset(mem, 'j', mem_size);

	printf("\nTest2 memset() :\n");
	check_memsettrue(mem, 'c', 14, mem_size);

	mem_size = 15;
	if (!(mem = malloc(sizeof(*mem) * mem_size)))
		return (0);
	memset(mem, 'j', mem_size);
	/*---------------------------------------------*/
	printf("\n\nTest3 :\n");
	printf("mem, \'\\n\', 6, mem_size\n");
	check_memset(mem, '\n', 6, mem_size);

	mem_size = 15;
	if (!(mem = malloc(sizeof(*mem) * mem_size)))
		return (0);
	memset(mem, 'j', mem_size);


	printf("\nTest3 memset() :\n");
	check_memsettrue(mem, '\n', 6, mem_size);

	mem_size = 15;
	if (!(mem = malloc(sizeof(*mem) * mem_size)))
		return (0);
	memset(mem, 'j', mem_size);
	/*---------------------------------------------*/
        printf("\n\nTest4 :\n");
	printf("mem, \'\\0\', 1, mem_size\n");
	check_memset(mem, '\0', 1, mem_size);

	mem_size = 15;
	if (!(mem = malloc(sizeof(*mem) * mem_size)))
		return (0);
	memset(mem, 'j', mem_size);

	  printf("\nTest4 memset() :\n");
	check_memsettrue(mem, '\0', 1, mem_size);

	/*---------------------------------------------*/
	printf("\n\n");
	return (0);


}
