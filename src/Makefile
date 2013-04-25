# delete file
RM=-rm -f
# delete directory
RMDIR=-rm -rf
# make directory
MKDIR=-mkdir -p
# binary file directory
BIN_DIR=../bin

.PHONY: build
# make build
build: 
# make binary directory first
	$(MKDIR) $(BIN_DIR)
	@echo Starting compile algorithm codes...
# start compile source codes
	$(CC) insert_sort.c -o $(BIN_DIR)/insert_sort
	$(CC) merge_sort.c -o $(BIN_DIR)/merge_sort
	$(CC) bubble_sort.c -o $(BIN_DIR)/bubble_sort
	$(CC) quick_sort.c -o $(BIN_DIR)/quick_sort

.PHONY: clean
# make clean
clean:
	@echo Starting clean built algorithm binary files...
# $(RM) $(BIN_DIR)/*
	$(RMDIR) $(BIN_DIR)
	@echo Finished cleaning built algorithm binary files 