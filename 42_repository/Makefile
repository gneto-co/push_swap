# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gneto-co <gneto-co@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 10:09:55 by gabriel           #+#    #+#              #
#    Updated: 2024/02/23 13:46:00 by gneto-co         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



#--------------------------------------------------------------------------------
#-----------------------------LIBFT SOURCE FILES---------------------------------
#--------------------------------------------------------------------------------

LIBFT_PATH = ./libft

LIBFT = $(LIBFT_PATH)/libft.a

$(LIBFT):
	@$(MAKE) -C $(LIBFT_PATH) --no-print-directory



#--------------------------------------------------------------------------------
#-----------------------------------MAIN FILES-----------------------------------
#--------------------------------------------------------------------------------

MAINSOURCES = \
main.c \
# _tester.c \

SOURCES = $(MAINSOURCES)

MAIN = $(SOURCES:.c=.o)



#--------------------------------------------------------------------------------
#----------------------------PROJECT SOURCE FILES--------------------------------
#--------------------------------------------------------------------------------

PROJECT_PATH = ./push_swap_files

PROJECT = $(PROJECT_PATH)/push_swap.a

$(PROJECT):
	@$(MAKE) -C $(PROJECT_PATH) --no-print-directory



#--------------------------------------------------------------------------------
#--------------------------COMPILATION SPECIFICATIONS----------------------------
#--------------------------------------------------------------------------------

CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(LIBFT_PATH) -I$(PROJECT_PATH) 



#--------------------------------------------------------------------------------
#---------------------------------MAKEFILE RULES---------------------------------
#--------------------------------------------------------------------------------

.DEFAULT_GOAL := all
NAME = push_swap

all: $(NAME)

$(NAME): $(MAIN) $(PROJECT) $(LIBFT)
	clang $(CFLAGS) -o $(NAME) $(MAIN) $(PROJECT) $(LIBFT)
	@clear
	@echo "\033[32m\n---------- $(NAME) compiled and ready! ----------\033[0m"

clean:
	@rm -f $(MAIN) $(NAME)
	@$(MAKE) -C $(LIBFT_PATH) clean --no-print-directory
	@$(MAKE) -C $(PROJECT_PATH) clean --no-print-directory
	@clear
	@echo "\033[31m\033[33m\n---------- program objects cleaned ----------\033[0m"

fclean: clean
	@rm -f $(NAME)
	@$(MAKE) -C $(LIBFT_PATH) fclean --no-print-directory
	@$(MAKE) -C $(PROJECT_PATH) fclean --no-print-directory
	@clear
	@echo "\033[31m\033[33m\n--------- program name and objects cleaned ----------\033[0m"
	
re: fclean all