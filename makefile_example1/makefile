# generates output file (exe) from main.o and logger.o
output: main.o logger.o  
   # defines how output file will be generated from main.o and logger.o
	g++ main.o logger.o -o output
# generates main.o file from main,cpp  
main.o: main.cpp  
   # defines how main.o file will be generated from main.cpp
	g++ -c main.cpp  
 # generates logger.o from logger.cpp and logger.h
logger.o: logger.cpp logger.h 
    # defines how the logger.o will be generated from logger.cpp
	g++ -c logger.cpp 
# these two lines are describing that when clean will call, remove all object files and output file 
clean:            
	rm *.o output