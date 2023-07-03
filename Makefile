NAME = akropopolis

F = Tile \

SRC = $(foreach f, $(F), srcs/$(f).cpp)
OBJ = $(SRC:.cpp=.o)

GFLAGS = -ISFML/include -LSFML/lib -lsfml-graphics -lsfml-window -lsfml-system -Iheaders
CFLAGS = -ISFML/include -LSFML/lib -lsfml-graphics -lsfml-window -lsfml-system -Iheaders

all: $(NAME)
r: re exp
	./$(NAME)

exp:
	@export LD_LIBRARY_PATH=SFML/lib

$(NAME): $(OBJ)
	@printf "\x1b[32mAll objects compiled\x1b[0m\n"
	@g++ main.cpp -o $(NAME) $(OBJ) $(CFLAGS)
	@printf "\x1b[32mExecutable compiled\x1b[0m\n"

.cpp.o:
	@c++ $(GFLAGS) -o $@ -c $< -Iheaders

clean:
	@rm -rf $(OBJ)
	@printf "\x1b[32mall objects deleted\x1b[0m\n"

fclean: clean
	@rm -rf $(NAME)
	@printf "\x1b[32mexecutable deleted\x1b[0m\n"

re: fclean all
