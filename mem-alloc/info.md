# new operator

## single element allocation
ptr-type-var = new type

## multiple contiguous element allocation aka array allocation
ptr-type-var = new type [count]

## exception handling
on allocation failure, new operator throws an std::bad_alloc exception

## std::nothrow
if this is used, then instead of exception and null ptr is returned on failure
ptr-type-var = new (std::nothrow) type


# delete operator

## single element deallocation
delete ptr-type-var

## multiple contiguous element deallocation aka arary deallocation
delete [] ptr-type-var

# placement new
Mostly used in
    performace critical code,
    with custom memory allocators,
    with preallocted memory pools,
    embedded systems and real-time system where memory resources are critical.

Constructs an object on an already allocated memory buffer

Destructor needs to be explicitly called to release resources held by object, delete does not work


# realloc ?
No equivalent of realloc in the cpp world

Realloc's behaviour of copying from old storage to new storage is not acceptable in cpp world.
Cpp does not consider objects as an opaque bag of bits. They are types which can hold states and invariants.
Copying of data may break some of these states and invariants.

For example, many std::list implementations store a terminator node in the std::list object itself which is used to represent the start/end of the linked list. If you simply copied its bits, pointers to the terminator node would point to the old allocation that is now gone

Simple copying is allowed for only trivially-copyable types
