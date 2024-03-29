/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .menu.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneto-co <gneto-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:27:56 by gneto-co          #+#    #+#             */
/*   Updated: 2024/01/10 12:00:26 by gneto-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <time.h>

// run that in your file
// cc .menu.c -o .menu && ./.menu

int long	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_menu_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*newstr;

	i = 0;
	newstr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (newstr == NULL)
		return (0);
	while (*s1)
	{
		newstr[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		newstr[i] = *s2;
		i++;
		s2++;
	}
	newstr[i] = '\0';
	return (newstr);
}

int main()
{
    char i = 0;
    int random;
    int testes = 1;
    char *args = "$(shuf -i 1-900 -n 100 | tr \"\n\" \" \")";
    
    system("clear");   
    while(i != 'q')
    {
	    fflush(stdout);
        printf("\033]0;Test Menu\007");
        
        printf(
            "\nExecute:\n"
            "\n\033[91m 0\x1b[0m test values"
            "\n\033[93m 1\x1b[0m ./push_swap"
            "\n\033[93m 2\x1b[0m valgrind ./push_swap"
            "\n\033[32m 3\x1b[0m make re"
            "\n\033[32m 4\x1b[0m make fclean"
            "\n\033[36m 5\x1b[0m ok/ko"
            "\n\033[34m g\x1b[0m git commit"
            "\n\033[35m n\x1b[0m norminette"
            "\n\x1b[31m r\x1b[0m to reload"
            "\n\x1b[31m q\x1b[0m to quit"
            "\n\n> "
        );
        scanf(" %c", &i);
        system("clear");    
        if (i == '1')
        {
            char *str;
            int j = 0;
            str = ft_menu_strjoin(" ./push_swap ", args);
            while (j++ < testes)
                system(str);
            free(str);

            // system("./push_swap 82 623 177 78 149 413 878 561 300 439 202 86 625 694 791 285 69 5 308 53 845 784 221 715 244 636 630 683 48 100 235 752 851 265 227 753 383 167 316 690 297 526 295 887 267 208 375 790 830 700 287 "
            // "> file_moves.txt");
            // "| cat -e");
            // "");
        }
        else if (i == '2')
        {
            char *str;
            str = ft_menu_strjoin("valgrind ./push_swap ", args);
            system(str);
            free(str);
        }
        else if (i == '0')
        {
            int a = 0;
            int b = 0;
            while (b != 'q')
            {
            	fflush(stdout);
                system("clear");
                printf("\033]0;Chose Values\007");
                printf(
                    "\nActual argument:\n%s\n"
                    "\n\nChose test values:\n"
                    "\n\033[93m 1\x1b[0m ex1 - 2 numbers"
                    "\n\033[93m 2\x1b[0m ex2 - 3 numbers"
                    "\n\033[93m 3\x1b[0m ex3 - 5 numbers"
                    "\n\033[93m 4\x1b[0m ex4 - 100 numbers"
                    "\n\033[93m 5\x1b[0m ex5 - 500 numbers"
                    "\n\033[92m r\x1b[0m random x numbers"
                    "\n\033[92m t\x1b[0m execute x times"
                    "\n\x1b[31m q\x1b[0m quit"
                    "\n\n> ", args
                    );
                a = getchar();
                b = 'q';
                if (a == '1')
                    args = "$(shuf -i 1-900 -n 2 | tr \"\n\" \" \")";
                else if (a == '2')
                    args = "$(shuf -i 1-900 -n 3 | tr \"\n\" \" \")";
                else if (a == '3')
                    args = "$(shuf -i 1-900 -n 5 | tr \"\n\" \" \")";
                else if (a == '4')
                    args = "$(shuf -i 1-900 -n 100 | tr \"\n\" \" \")";
                else if (a == '5')
                    args = "$(shuf -i 1-900 -n 500 | tr \"\n\" \" \")";
				else if (a == 'r')
                {
            	    fflush(stdout);
                    printf("\nInsert the amount of random numbers\n\n> ");
                    scanf(" %d", &random);
                    args = "$(shuf -i 1-900 -n ";
                    char string_numero[20];
                
                    sprintf(string_numero, "%d", random);
                    
                    args = ft_menu_strjoin(args ,string_numero);
                    args = ft_menu_strjoin(args ," | tr \"\n\" \" \")");
                }
                else if (a == 't')
                {
            	    fflush(stdout);
                    printf("\nInsert the amount of testes you want to execute each time\n\n> ");
                    scanf(" %d", &testes);
                }
                else
                    b = a;
            }
            system("clear");
        }
        else if (i == '3')
        {
            system("make re");
        }
        else if (i == '4')
        {
            system("make fclean");
        }
        else if (i == '5')
        {
            char *str1;
            char *str2;
            int j = 0;
            str1 = ft_menu_strjoin("ARG=", args);
            str2 = ft_menu_strjoin(str1, "; ./push_swap $ARG | ./checker_OS $ARG");
            while (j++ < testes)
                system(str2);
            free(str1);
            free(str2);
        }
        else if (i == 'g')
        {
            system("git add ../* && git commit -m \"bk\" && git push && git log");
        }
        else if (i == 'n')
        {
            system("clear");
            printf("\033[34mnorminette test (only errors): \033[0m\n");
            system("find . -type f \\( -name '*.c' -o -name '*.h' \\) ! -name '.menu.c' -exec norminette {} \\; | grep -E 'Error|Warning'");
        } 
        else if (i == 'r')
        {
            if(access("testes.txt", F_OK ) != -1 )
                system("rm testes.txt");
            system("cc .menu.c -o .menu && ./.menu");
            exit(0);
        }
        else if (i == 'q')
        {
            system("rm .menu");
            if(access("testes.txt", F_OK ) != -1 )
                system("rm testes.txt");
            system("clear");
            exit(0);
        }
    }
}
