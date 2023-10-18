main: main.cpp
	g++ main.cpp -I include/ -L ./lib -lraylib -static-libgcc -static-libstdc++ -mwindows -lopengl32 -lgdi32 -lwinmm -o main.exe