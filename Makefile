solver: solver.o baglib.o toollib.o benchlib.o
		g++ -o solver solver.o baglib.o toollib.o benchlib.o

solver.o : solver.cpp
		g++ -c solver.cpp
	
benchlib.o : utilities/benchlib.cpp utilities/benchlib.h utilities/baglib.h
		g++ -c utilities/benchlib.cpp

baglib.o : utilities/baglib.cpp utilities/baglib.h utilities/toollib.h
		g++ -c utilities/baglib.cpp
	
toollib.o : utilities/toollib.cpp utilities/toollib.h
		g++ -c utilities/toollib.cpp

clean:
	rm toollib.o baglib.o benchlib.o solver.o