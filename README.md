# PSWC-SEM2
## GradeCard
  -This Grade Card Management System is a simple C program that allows users to input student grades, calculate the average grade, and display the grade card for each student.

### Overview
  - **Source Files**:
    - **main.c**: This file likely contains the main function and possibly the user interface or entry point of the program.
    - **marks.c**: This file probably contains functions related to handling student marks or grades.

  - **Header File**:
    - **mk.h**: This header file is included in the source files and likely contains function prototypes, data structures, or other declarations necessary for the program to compile and run correctly.

  - **Makefile**:
    - **CC = gcc**: Specifies the compiler to be used as `gcc`.
    - **CFLAGS = -Wall -Wextra -I.**: Sets compiler flags to include warnings (`-Wall` and `-Wextra`) and include directories (`-I.`).
    - **SRCS = main.c marks.c**: Lists the source files used in the program.
    - **OBJS = $(SRCS:.c=.o)**: Creates a list of object files derived from source files.
    - **HEADER = mk.h**: Specifies the header file dependency.
    - **EXECUTABLE = PES_Official_GradeCard**: Defines the name of the executable file.
    - **all**: Target to build the executable.
    - **$(EXECUTABLE)**: Rule to build the executable from object files.
    - **%.o: %.c $(HEADER)**: Rule to compile each source file into an object file.
    - **clean**: Target to clean up generated files.
    - **del $(EXECUTABLE) $(OBJS)**: Command to delete the executable and object files.


### Files
- **mk.h:** Header file containing declarations
- **marks.c:** Code file for student-related functions
- **main.c:** Main program file
- **mkfile.mk:** Makefile containing compilation instructions

### Compilation
To compile the project using MingW64 on Windows Command Prompt:
```bash
mingw32-make -f mkfile.mk
```

### Execution
After compilation, the output file will be named **PES_Official_GradeCaed**. Run it to use the GradeCard.

### Usage
Explain how to use the GradeCardProgram, input formats, expected outputs, etc.

### Dependencies

- **MingW64:** Compiler used for compiling the code
- **Standard C Libraries:**
  - **stdio.h**: For input and output operations.
  - **stdlib.h**: For memory allocation, random number generation, and other general utilities.
  - **string.h**: For string manipulation functions.
  - **math.h**: For mathematical functions like trigonometric, logarithmic, and exponential functions.
  - **ctype.h**: For character handling functions.
  - **time.h**: For date and time functions.
- **Makefile Libraries**

### License
This GradeCard is licensed under the terms specified by PES University. 

### Acknowledgements
- **Prof. Bivas Bhattacharya**: For guidance and mentorship throughout the development of this project.
