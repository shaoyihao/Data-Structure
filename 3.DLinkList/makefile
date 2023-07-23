objs = main.o func1.o func2.o

test: $(objs)
	g++ $(objs) -o test
	@echo compile successfully

main.o: myheader.h dlinklist.h
func1.o: myheader.h dlinklist.h
func2.o: myheader.h dlinklist.h

.phony: clean run   
clean:
	rm test *.o
run: 
	@./test