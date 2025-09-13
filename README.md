# CPP-05 Project

This repository contains a set of C++ exercises focused on object-oriented programming, exception handling, and inheritance. Each exercise is organized in its own directory (`ex00`, `ex01`, `ex02`, `ex03`).

## Structure
- **ex00**: Implementation of the `Bureaucrat` class, demonstrating basic class design and exception handling.
- **ex01**: Adds the `Form` class and explores interactions between `Bureaucrat` and `Form`.
- **ex02**: Introduces abstract classes (`AForm`) and specialized forms (`PresidentialPardonForm`, `RobotomyRequestForm`, `ShrubberyCreationForm`).
- **ex03**: Adds the `Intern` class, demonstrating dynamic form creation and further abstraction.

## How to Build & Run
Each exercise contains its own `Makefile`. To build and run an exercise:

```bash
cd ex00 # or ex01, ex02, ex03
make
./main
```

## Main Concepts
- **Classes & Inheritance**: Demonstrates inheritance, abstract classes, and polymorphism.
- **Exception Handling**: Custom exceptions for error management.
- **Encapsulation**: Proper use of access specifiers and member functions.

## File Overview
- `Bureaucrat.*`: Core class for bureaucratic operations.
- `Form.*` / `AForm.*`: Base and abstract form classes.
- `PresidentialPardonForm.*`, `RobotomyRequestForm.*`, `ShrubberyCreationForm.*`: Specialized forms.
- `Intern.*`: Handles dynamic form creation.
- `main.cpp`: Entry point for each exercise.
- `Makefile`: Build instructions.

## Author
Jeferson Sopan R

---
Feel free to explore each exercise for more details on the implementation and concepts covered.
