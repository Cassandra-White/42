#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include <stdio.h>




static void                     ft_print_result(char const *s)
{
        int             len;

        len = 0;
        while (s[len])
                len++;
        write(1, s, len);
}

static void                     ft_print_tabstr(char **tabstr)
{
        int             i;

        i = 0;
        while (tabstr[i] != NULL)
        {
                ft_print_result(tabstr[i]);
                write(1, "\n", 1);
                free(tabstr[i]);
                i++;
        }
        free(tabstr);
}

static void                     check_split(char *s, char c)
{
        char    **tabstr;

        if (!(tabstr = ft_split(s, c)))
                ft_print_result("NULL");
        else
                ft_print_tabstr(tabstr);
}


int             main(void)
{



        printf("============================================================================================\n");
        printf("============================================================================================\n");
        printf("\n");
        printf("                                        FT_SPLIT\n");
        printf("\n");
        printf("============================================================================================\n");
        printf("============================================================================================\n");


	        check_split("          ", ' ');
                

printf("\n\nTEST 1 :\n");
printf("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse, ' '\n\n");
check_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
printf("\n");



printf("\n\nTEST 2 :\n");
printf("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   , ' '\n\n");
check_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
printf("\n");



printf("\n\nTEST 3 :\n");
printf("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi., 'i'\n\n");
check_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');
printf("\n");

                


printf("\n\nTEST 4 :\n");
printf("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi., 'z'\n\n");
check_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z');
printf("\n");



	return (0);
}
