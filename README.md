# C++ Projects Repository

A collection of C++ projects created to practice and demonstrate C++ concepts, algorithms, and small utilities.

## Table of Contents
- About
- Included projects (summary)
- Requirements
- Build & Run
- Recommended workflow
- Coding style & conventions
- How to add a new project
- Testing
- License & Contact

## About
This repository stores small-to-medium sized C++ programs — exercises, utilities, game prototypes, and algorithm implementations. Each project should be self-contained and include build instructions.

## Included projects (example)
- project-name-1/ — short description (e.g., "simple calculator")
- project-name-2/ — short description (e.g., "graph algorithms: BFS, DFS")
- utils/ — helper utilities or reusable code
(Replace the above with your actual folder names and descriptions.)

## Requirements
- C++ compiler (g++/clang++/MSVC)
- Optional: CMake (recommended for multi-file projects)
- Optional: Make

## Build & Run
Using g++ (simple single-file or small projects):
g++ -std=c++17 -O2 -Wall -Wextra src/main.cpp -o bin/app
./bin/app

Using CMake (recommended for projects with many files):
mkdir build
cd build
cmake ..
cmake --build .
./your_executable

Notes:
- Use `-std=c++17` or newer depending on the code.
- Address sanitizer for debugging:
g++ -std=c++17 -fsanitize=address,undefined -g src/main.cpp -o bin/app

## Recommended workflow
- Create a separate directory per project
- Add a `README.md` in each project folder with build/run instructions and sample input/output
- Keep `main.cpp` or clearly named entrypoints
- Prefer CMake for reproducible builds

## Coding style & conventions
- Use modern C++ idioms (RAII, smart pointers, STL)
- Name files and directories clearly
- Prefer small, testable functions
- Add comments where non-obvious behaviour exists

## How to add a new project
1. Create a directory `projects/your-project-name`
2. Add source files and a `README.md` describing the purpose and build steps
3. Optionally add a `CMakeLists.txt`
4. Open a PR describing the new project

## Testing
- Include example inputs and expected outputs
- For algorithmic problems, add unit tests where feasible (Catch2, GoogleTest)

## License & Contact
Add LICENSE (MIT recommended) if you want reuse. For questions, open an issue or contact https://github.com/stectorius
