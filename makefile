CC = g++
INC =./inc
EXE = taskmanager.out


$(EXE):
	$(CC) ./src/*.cpp -o $(EXE) -I$(INC)
	@echo "taskmanager.out build successfully.."

clean:
	rm -f $(EXE)
	@echo "taskmanager.out deleted successfully.."
