#object folder's
objd32= ./Object/Linux/x86_32/Debug
objr32= ./Object/Linux/x86_32/Release
objd64= ./Object/Linux/x86_64/Debug
objr64= ./Object/Linux/x86_64/Release

#Library folder's
libd32= ./Library/Linux/x86_32/Debug
libr32= ./Library/Linux/x86_32/Release
libd64= ./Library/Linux/x86_64/Debug
libr64= ./Library/Linux/x86_64/Release

#Include folder's
inc= ./Include

#source Folder's
src= ./Source

#common flags
flags= -I$(inc)

library: Compile
	ar rcs $(libd32)/libglad.a $(objd32)/glad.o
	ar rcs $(libd64)/libglad.a $(objd64)/glad.o
	ar rcs $(libr32)/libglad.a $(objr32)/glad.o
	ar rcs $(libr64)/libglad.a $(objr64)/glad.o

Compile: $(src)/glad.c
	gcc $(flags) -g -m32 -c $(src)/glad.c -o $(objd32)/glad.o 
	gcc $(flags) -g -m64 -c $(src)/glad.c -o $(objd64)/glad.o 
	gcc $(flags)    -m32 -c $(src)/glad.c -o $(objr32)/glad.o 
	gcc $(flags)    -m64 -c $(src)/glad.c -o $(objr64)/glad.o 

allFiles= $(libr64)/libglad.a $(objd32)/glad.o $(objd64)/glad.o $(objr32)/glad.o $(objr64)/glad.o $(libd64)/libglad.a $(libd32)/libglad.a $(libr32)/libglad.a

test:
	file $(objd32)/glad.o 
	file $(objd64)/glad.o 
	file $(objr32)/glad.o 
	file $(objr64)/glad.o

clear: 
	rm -rf $(allFiles)