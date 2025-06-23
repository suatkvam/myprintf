Name =

src=

libft_src= .find libft -name "*.c" | tr '\n' ' '
libft= ./libft/libft.a
obj= $(src:.c=.o)

all: $(Name)

$(NAME): $(OBJECT_FILE) $(libft)
	cc -wall -wextra -werror 
	
$(libft):$(libft_src)
	make -c libft



clean:
	rm -f $(obj)

fclean: clean
	rm -f $(Name)
