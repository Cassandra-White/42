#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>


	char ft(unsigned int c, char b)
	{
		if(b && c)
			return 'y';
		return 'z';
	}




int main(int argc, char **argv)
{

	(void)argc;



	//char *str1 = argv[1]; 
	// char *str2 = argv[1];
	//
	char *source = "je suis un test";
	//	char *destination = "";
	char *destination = "abcdefghijklmnopqrstuvwxyz";
	char *source2 = "123456789123456789";
	char *destination2 ="abcdefghijklmnopqrstuvwxyz";
	//	memcpy(source2, "abcdef", 6);
	//	memcpy(destination2, "ABCDEF", 6);


	//int size = strlen(argv[1]);


	//  printf("%d", ft_strlen(argv[5]));

	//  printf("%d\n\n", ft_atoi(argv[1]));

	//  printf("%d\n", atoi(argv[1]));

	//  printf("\n\n %s \n\n", ft_memset(str, 69, 6));

	//  ft_bzero(str1 + 4,  1);
	//  printf("\n\n %s \n\n", str1);


	/*

	   printf("\n\n Source1 : %s \n\n", source);
	   printf("\n\n destination1 Avant :  %s \n\n", destination);

	   printf("\n\n Source2 Avant : %s \n\n", source2);	
	   printf("\n\n destination2 Avant :  %s \n\n", destination2);


	   printf("%d \n\n", size);

	   ft_memcpy(destination2, source2, size);
	   memcpy( destination, source, size);


	   printf("\n\nDestination après:  %s \n\n",  destination);



	   printf("\n\nDestination2 après:  %s \n\n",  destination2);
	   */
	/*	
		printf("%p\n\n", ft_memccpy(destination, source, 69, size));
		printf("%p\n\n", destination + 4);
		printf("resultat fausse MEMCCPY : %s \n\n", destination);

		printf("%p\n\n",memccpy(destination2, source2, 69, size));
		printf("%p\n\n", destination2 + 4);
		printf("resultat Vrai MEMCCPY : %s \n\n", destination2);
		*/


	/*
	   printf("%p\n\n",ft_memmove(destination, source, 1));
	   printf("%p\n\n", destination);
	   printf("resultat fausse MEMCCPY : %s \n\n", destination);


	   printf("destination avant : %s \n\n", destination2);
	   printf("%p\n\n",memmove(destination2, source2, 1));
	   printf("%p\n\n", destination2);
	   printf("resultat Vrai MEMCCPY : %s \n\n", destination2);
	   */
	/*
	   printf("source1 : %s\n", source);
	   printf("pointeur avant recherche : %p\n", source + 5);
	   printf("poitneur trouvé par la function : %p\n\n", ft_memchr(source, 69, 10));


	   printf("source2 : %s\n", source2);
	   printf("pointeur avant recherche : %p\n", source + 5);
	   printf("poitneur trouvé par la VRAI function : %p\n\n", memchr(source, 69, 10));
	   */

	//	printf("le resulta est : %d\n\n", ft_memcmp(source, destination, 8));
	/*
	   printf("source2 : %s\n", source);
	   printf("destination2 : %s\n", destination);
	   int res = memcmp(source2, destination2, 5);
	   */
	//	printf("VRAI resultat est : %d\n\n", memcmp(source, destination, 8));
	/*
	   printf("%d\n\n", ft_isascii('i'));
	   printf("%d\n\n", ft_isascii('9'));
	   printf("%d\n\n", ft_isascii(' '));
	   printf("%d\n\n", ft_isascii('/'));
	   */


	// size_t x =  ft_strlcpy(destination, source, 5);
	//	size_t y =  strlcpy(destination2, source2, 20);


	//	char *str = ft_strjoin(destination, source);
	//	printf("source d'origine      : %s\n\n", source);
	//	printf("destination d'origine : %s\n\n", destination);
	//	printf("resultat de sortie :      %s \n\n", str);	

	//printf("pointeur d'origine : %s\n\n", source);
	//	printf("VRAI resultat de sortie : %zu \n\n", y);

	/*
	   char c = ' ';
	   char **strsplit = ft_split(source, c);

	   printf("test :\n %s\n",strsplit[0]);
	   printf("%s\n",strsplit[1]);
	   printf("%s\n",strsplit[2]);
	   printf("%s\n",strsplit[3]);
	   printf("%p\n",strsplit[4]);
	   */
	/*
	   int num = -69;
	   char *str = ft_itoa(num);

	   printf("%s",str);
	   */
	/*
	   int dec = 12 ;
	   void *p = &dec;
	   printf("%d", ft_lstnew(p));

*/




	char *a = "aegoeirhgerglih";
	unsigned int c = 12;
	char b = 'b';
	char *p;



	p = ft_strmapi(a,ft);
	printf("%s\n", p);

	return(0);
}
