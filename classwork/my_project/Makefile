.PHONY: clean create_directories

all: clean create_directories #main_bin


#main_bin: 
#	@echo "Building the project..."
#	@g++ main.cpp -o bin/main_exec
#	@echo "Executing the binary executable..."
#	@./bin/main_exec

lib/libhatik.a: obj/hatik/sum.o
	@echo "Creating "
	ar cvq lib/libhatik.a obj/hatik/sum.o

obj/hatik/sum.o: obj/hatik
	@echo "Creating object file for sum..."
	g++ -c src/hatik/sum.cpp  -I inc -o obj/hatik/sum.o

obj/hatik:
	mkdir -p obj/hatik

create_directories:
	@echo "Creating directories..."
	@mkdir  -p lib bin obj


clean:
	@echo "Cleaning the project directories.."
	@rm -rf obj lib bin
