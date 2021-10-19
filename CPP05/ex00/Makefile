NAME=bureaucrats

SRC_DIR=.
SRCS=main.cpp Bureaucrat.cpp

BIN=bin
SRC_FILES=$(addprefix $(SRC_DIR),$(SRCS))
OBJS=$(addprefix $(BIN)/, $(SRCS:.cpp=.o))

INCLUDES_LOCATION=inc
LIBRARY_LOCATION=lib
LIBRARYS=

CLANG=clang++
CPP_FLAGS=-Wextra -Wall -Werror -std=c++98
CPP_IFLAGS=$(addprefix -I,$(INCLUDES_LOCATION))
CPP_LFLAGS=$(addprefix -L,$(addprefix $(LIBRARY_LOCATION), $(LIBRARYS)))

all: $(NAME)
	@echo "Nothing else to do"

$(NAME): $(BIN) $(OBJS)
	@$(CLANG) $(OBJS) -o $(NAME) $(CPP_FLAGS) $(CPP_LFLAGS)
	@echo "Linking done."

$(BIN):
	@echo "No bin dir found. Creating one."
	@mkdir -p $(BIN)

$(BIN)/%.o : $(SRC_DIR)/%.cpp
	@$(CLANG) -c $< -o $@ $(CPP_FLAGS) $(CPP_IFLAGS)
	@echo "Compiled: $<"

clean:
	@echo "Cleaning $(BIN)/"
	@rm -rf $(BIN)

fclean: clean
	@echo "Cleaning $(NAME)"
	@rm -f $(NAME)

re: fclean all
