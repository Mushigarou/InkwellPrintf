#----------------------------------------------------------------------------------------------
# Source Files
#----------------------------------------------------------------------------------------------
SRC = 	ft_isalnum.c	ft_isascii.c	ft_isprint.c	ft_strlcpy.c	\
		ft_isalpha.c	ft_isdigit.c	ft_strlcat.c	ft_strlen.c		\
		ft_strncmp.c	ft_toupper.c	ft_tolower.c	ft_strnstr.c	\
		ft_strchr.c		ft_strrchr.c	ft_memset.c		ft_bzero.c		\
		ft_memchr.c		ft_memcmp.c		ft_memmove.c	ft_atoi.c		\
		ft_strdup.c		ft_substr.c		ft_strjoin.c	ft_strtrim.c	\
		ft_itoa.c		ft_strmapi.c	ft_striteri.c	ft_putchar_fd.c	\
		ft_putstr_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c  ft_split.c		\
		ft_calloc.c 	ft_memcpy.c

SRC_B =	ft_lstnew.c		ft_lstadd_front.c	ft_lstsize.c	ft_lstlast.c	\
		ft_lstiter.c	ft_lstdelone.c		ft_lstclear.c	ft_lstmap.c	 ft_lstadd_back.c

#----------------------------------------------------------------------------------------------
# Adding the object directory path as a prefix to the source files
#----------------------------------------------------------------------------------------------
OBJECTS = $(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))

OBJECTS_B = $(addprefix $(OBJ_B_DIR)/,$(SRC_B:.c=.o))

#----------------------------------------------------------------------------------------------
# Variables
#----------------------------------------------------------------------------------------------
NAME = libft.a

TITLE_M = LIBFT_MANDATORY

TITLE_B = LIBFT_BONUS

CFLAGS = -Werror -Wextra -Wall

HEADER = libft.h

OBJ_DIR = obj

OBJ_B_DIR = obj_B

RM = /bin/rm -rf

#----------------------------------------------------------------------------------------------
# Terminal ANSI colors
#----------------------------------------------------------------------------------------------
Green ='\033[1;32m'
Blue = '\033[1;91m'
HBLK = '\e[1;90m'
HRED = '\e[1;91m'
HGRN = '\e[1;92m'
HYEL = '\e[1;93m'
HBLU = '\e[1;94m'
HMAG = '\e[1;95m'
HCYN = '\e[1;96m'
HWHT = '\e[1;97m'
NC ='\033[0m'

#----------------------------------------------------------------------------------------------
# Main dependencies
#----------------------------------------------------------------------------------------------
all : $(NAME)

$(TITLE_M) :
		@ printf $(HBLU)"\n□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□\n"
		@ printf "❚ 	   ✍❡ LIBFT_MANDATORY ❡✍ 	❚\n"$
		@ printf "□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□\n\n"$(NC)

$(TITLE_B) :
		@ printf $(HBLU)"\n□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□\n"
		@ printf "❚ 	    ✍❡ LIBFT_BONUS ❡✍ 		❚\n"$
		@ printf "□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□\n\n"$(NC)

$(NAME) : $(TITLE_M) $(OBJ_DIR) $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)
	printf ${Green}"\n😂 Libft : Mandatory part is ready to be linked 😂\n"${NC}

$(OBJ_DIR)/%.o : %.c $(HEADER)
	@ $(CC) $(CFLAGS) -c $< -o $@
	@ printf $(HWHT)"🧐 Compiling ▻ "${Blue}$(notdir $@)"\n"${NC}

$(OBJ_DIR) :
	@ mkdir obj
#----------------------------------------------------------------------------------------------
# Bonus dependencies
#----------------------------------------------------------------------------------------------
bonus : $(TITLE_B) $(OBJ_B_DIR) $(OBJECTS_B) 
	ar rc $(NAME) $(OBJECTS_B)
	printf ${Green}"\n 😂 Libft : Bonus part is ready to be linked 😂\n\n"${NC}

$(OBJ_B_DIR)/%.o : %.c $(HEADER)
	@ $(CC) $(CFLAGS) -c $< -o $@
	@ printf $(HWHT)"🧐 Compiling ▻ "${Blue}$(notdir $@)"\n"${NC}

$(OBJ_B_DIR) :
	@ mkdir obj_B

#----------------------------------------------------------------------------------------------
# Deleting object files
#----------------------------------------------------------------------------------------------
clean :
	$(RM) $(OBJ_DIR) $(OBJ_B_DIR)
	@ printf $(HWHT)"	Deleted : "$(HRED)" Object files\n"$(NC)


fclean : clean
	$(RM) $(NAME)
	@ printf $(HWHT)"	Deleted : "$(HRED)" libftprintf.a\n"$(NC)


re : fclean all

#----------------------------------------------------------------------------------------------
# Special Built-in Target Names
#----------------------------------------------------------------------------------------------
.Phony : all clean fclean re
.SILENT : $(OBJ_DIR) bonus $(NAME) clean fclean
.DEFAULT_GOAL := all