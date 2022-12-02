#----------------------------------------------------------------------------------------------
# Source Files
#----------------------------------------------------------------------------------------------
SRC = wr_address.c conv_hex.c ft_putunbr_fd.c ft_printf.c

#----------------------------------------------------------------------------------------------
# Object Files
#----------------------------------------------------------------------------------------------
OBJ = $(addprefix $(OBJ_D)/, $(SRC:.c=.o))
SRC_PATH = $(addprefix $(SRC_D), /)
LIBFT_OBJ_M = libft_printf/obj/*.o
LIBFT_OBJ_B = libft_printf/obj_B/*.o

#----------------------------------------------------------------------------------------------
# Archives
#----------------------------------------------------------------------------------------------
NAME = libftprintf.a

LIBFT_ARCHIVE = libft_printf/libft.a

#----------------------------------------------------------------------------------------------
# Variables
#----------------------------------------------------------------------------------------------
CFLAGS = -Wall -Werror -Wextra -c

HEADER = include/ft_printf.h

OBJ_D = obj

SRC_D = src

COMPILE = compiling

TITLE = FT_PRINTF

AR = ar -rcs

RM = rm -rf

#----------------------------------------------------------------------------------------------
# Terminal Ansi Colors
#----------------------------------------------------------------------------------------------
HBLK = '\e[1;90m'
HRED = '\e[1;91m'
HGRN = '\e[1;92m'
HYEL = '\e[1;93m'
HBLU = '\e[1;94m'
HMAG = '\e[1;95m'
HCYN = '\e[1;96m'
HWHT = '\e[1;97m'
NC   = '\e[0m'

#----------------------------------------------------------------------------------------------
# Creating libftprintf.a
#----------------------------------------------------------------------------------------------

all : $(NAME)

$(TITLE) :
		@ printf $(HMAG)"\n□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□\n"
		@ printf "❚ 	    ✍❡ FT_PRINTF ❡✍ 		❚\n"$
		@ printf "□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□\n\n"$(NC)

$(NAME) : $(TITLE) $(OBJ_D) $(OBJ) $(LIBFT_ARCHIVE) 
	$(AR) $(NAME) $(OBJ) $(LIBFT_OBJ_M) $(LIBFT_OBJ_B)
#	$(CC) $(NAME) $(LIBFT_ARCHIVE)
	@ printf ${HYEL}"\nft_Printf: Compilation steps finished 👻 "$(HRED)"Run ./a.out\n\n"${NC} 

$(OBJ_D)/%.o : $(SRC_PATH)%.c $(HEADER)
	@ $(CC) $(CFLAGS) $< -o $@
	@ printf $(HWHT)"🧐 Compiling ▻ "${HRED}"$(notdir $@)\n"${NC}

$(OBJ_D) :
	mkdir obj

#----------------------------------------------------------------------------------------------
# Libft rules
#----------------------------------------------------------------------------------------------
$(LIBFT_ARCHIVE) :
	cd ./libft_printf ; make ; make bonus

re_all :
	cd libft_printf ; make re ; make bonus ; cd .. ; make re

#----------------------------------------------------------------------------------------------
# Cleaning Object files
#----------------------------------------------------------------------------------------------
clean :
	$(RM) $(OBJ_D)
	@ printf $(HWHT)"	Deleted : "$(HRED)" Object files\n"$(NC)
	
fclean : clean
	$(RM) $(NAME)
	@ printf $(HWHT)"	Deleted : "$(HRED)" libftprintf.a\n"$(NC)

re : fclean all

#----------------------------------------------------------------------------------------------
# Built-in Targets
#----------------------------------------------------------------------------------------------
.SILENT : fclean clean clean_libft re_all $(OBJ_D) $(NAME) $(LIBFT_ARCHIVE)
.DEFAULT_GOAL := all