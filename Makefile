##
## Makefile for Makefile in /home/desomb_v/rendu/Projet/PSU_2014_my_select
## 
## Made by Vincent Desombre
## Login   <desomb_v@epitech.net>
## 
## Started on  Wed Dec 24 23:28:26 2014 Vincent Desombre
## Last update Sun Mar 22 21:28:33 2015 Vincent Desombre
##

CC	= cc

CFLAGS	= -Wall -Wextra -pedantic -Werror

LDFLAGS	=

LIB	= -L libmy.a lib/my/libmy.a

SRCS	= srcs/server/my_server.c

SRCS2	= srcs/client/my_client.c

RM	= rm -rf

OBJS	= $(SRCS:.c=.o)

OBJS2	= $(SRCS2:.c=.o)

NAME	= server

NAME2	= client

all:	$(NAME) $(NAME2)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LIB)
	mv $(NAME) srcs/server

$(NAME2): $(OBJS2)
	$(CC) $(OBJS2) -o $(NAME2) $(LIB)
	mv $(NAME2) srcs/client

miniclean:
	$(RM) $(OBJS)

miniclean2:
	$(RM) $(OBJS2)

clean:	miniclean miniclean2

minifclean:
	$(RM) srcs/client/client

minifclean2:
	$(RM) srcs/server/server

fclean:	clean minifclean minifclean2

re: fclean all
