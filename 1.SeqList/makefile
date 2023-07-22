objs = main.o func1.o func2.o question.o

test: $(objs)
	g++ $(objs) -o test
	@echo compile successfully

main.o: myheader.h seqlist.h
func1.o: myheader.h seqlist.h
func2.o: myheader.h seqlist.h
question.o: myheader.h seqlist.h

.phony: clean run   
clean:
	rm test *.o
run: 
	@./test