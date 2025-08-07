# class member access specifiers

## private
default for all the members
accessible only by the class members or from friends

## protected
accessible only by the class members or from friends or members of derived classes

## public
accessible anywhere where object of the class is visible


# scope operators '::'

Helps in defining member functions outside the class body

When a function is defined inside the class body, it is automatically considered inline by the compiler


# special member functions

## constructor
It is not really a function (more of an initializer of the memory allocated for the object)

Does not return anything. It need not return anything based on the cpp design principles.
Constructs the object in place. Purpose is set up the object's memory in such a way
that object makes sense and becomes usable.

It cannot be called explicitly like normal functions.
It automatically called only oncewhen creating new objects.

### constructor overloading
default constructor

parameterized constructor

#### member initializer list
Using ':' after constructor signature
Example
    ClassName() : member1(...), member2(...), ...

Members can be objects themselves

#### constructor calling forms

Functional form initialization
    ClassName obj(...)
    ClasName ptr-var = new ClassName(...)

Variable form  initialization
    for single parameter constructors
    ClassName obj = Val;

Uniform initialization
    same as functional form but instead of "()", "{}" are used
    ClassName obj{...}  - this can include an optional =
    ClassName obj = {...} - aka pod-like
    ClasName ptr-var = new ClassName{...}

## destructor

## copy constructor

## assignment constructor


# classes with struct and union keyword

Structs and Union can also be used to declare classes

They can also have their own member functions and member variables

Classic properties of a struct and union are retained

Only difference is default access of members if public
