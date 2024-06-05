app_smfl: sfml_app sfml.o input.o

sfml_app: sfml.o input.o
	g++ sfml.o input.o -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system

sfml.o: sfml.cpp 
	g++ -c sfml.cpp 

input.o: input.cpp
	g++ -c input.cpp

clean:
	rm -rf *.o 
