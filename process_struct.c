#include <string.h>

// to store the details of a process

struct process_struct{

    int pid;

    int priority;

    struct registers_struct *registers;

    struct memory_struct *memory;

    struct files_struct *files;

    char* state;
};
