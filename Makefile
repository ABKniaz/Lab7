AutomatedMakefile = am
CC = g++

FILES = Problem22_1.o RecursiveIntegration.o RombergIntegration.o
EXECUTABLE = integration.exe

PROJECT_PATH = $(PROJECT_DIR)

INC_DIRS = -I$(PROJECT_PATH)/CSC2110/
LIB_DIRS = -L$(PROJECT_PATH)/CSC2110/
LIBS = -lCSC2110

COMPILE = $(CC) $(INC_DIRS) -c
LINK = $(CC) $(LIB_DIRS) -o

all: Project

Project: 		$(FILES)
			$(LINK) $(EXECUTABLE) $(FILES) $(LIBS)

Problem22_1.o:			Problem22_1.cpp Problem22_1.h
			$(COMPILE) Problem22_1.cpp

RecursiveIntegration.o:			MultiVarFunction.h RecursiveIntegration.cpp RecursiveIntegration.h
			$(COMPILE) RecursiveIntegration.cpp

RombergIntegration.o:			QueueLinked.h RombergIntegration.cpp RombergIntegration.h
			$(COMPILE) RombergIntegration.cpp
