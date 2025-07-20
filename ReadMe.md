# 📚 PSWC-SEM2: GradeCard Program 🎓

## 🌟 Overview

Welcome to the GradeCard Program repository! This academic project showcases a C-based system designed to manage student data, calculate average scores for Internal Assessment exams (ISA1 and ISA2), and generate personalized grade cards. Dive in to explore the magic of automated grading! 🚀

### 📂 Project Structure

- **Source Files**:
  - **main.c**: Entry point of the program.
  - **marks.c**: Contains functions related to student marks.

- **Header File**:
  - **mk.h**: Essential for function prototypes and data structures.

- **Makefile**:
  - **Compiler**: GCC
  - **Build Tool**: GNU Make
  - **Execution**: PES_Official_GradeCard

## 📁 Files

- **mk.h**: Header file with essential declarations.
- **marks.c**: Code file for student-related functions.
- **main.c**: Main program file.
- **mkfile.mk**: Makefile for compilation.
- **Makefile**: Easier version of makefile gor compilation.
- **grade_card.txt**: Text file used to store the output o the program.

## 💻 Technologies Used

- **Language**: C
- **Compiler**: GCC
- **Build Tool**: GNU Make
- **Version Control**: Git

## 🚀 Getting Started

### 🛠️ Prerequisites

Make sure you have the following installed:

- GCC Compiler
- GNU Make
- Git

### 📥 Installation and Execution

1. **Clone the Repository**

    ```bash
    git clone https://github.com/BizBrainiac/GradeCard.git
    ```

2. **Navigate to the Project Directory**

    ```bash
    cd GradeCard
    ```

3. **Compile the Program**

    ```bash
    mingw32-make -f mkfile.mk
    ```

4. **Run the Program**
   - **Uses mkfile.mk**
   ```bash
   gcc main.c marks.c -o PES_Official_GradeCard
   ./PES_Official_GradeCard.exe
    ```
6. **Run the Program (Method 2)**
   - **Uses Makefile**
   ```bash
   make
   ./studentcard
   ```
   

## 🎯 Features

- **Data Input**: Easily capture student details and their ISA1 & ISA2 marks.
- **Average Calculation**: Instantly compute average scores.
- **Grading System**: Automatically assign grades (S, A, B, C, D, E, F).
- **GradeCard Generation**: Display personalized GradeCards.

## 📜 License

This GradeCard Program is licensed under the terms specified by PES University.

## 🙏 Acknowledgements

- **Prof. Bivas Bhattacharya**: Thank you for the invaluable guidance and mentorship throughout this project.
