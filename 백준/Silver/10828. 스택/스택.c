#include <stdio.h>
#include <string.h>

#define MAX_STACK_SIZE 10000

typedef struct {
    int max_size;
    int size;
    int stack_array[MAX_STACK_SIZE];
} Stack;

void push(Stack *stack, int element) {
    if (stack->size < stack->max_size)
        stack->stack_array[stack->size++] = element;
    else
        printf("full stack\n");
}

int pop(Stack *stack) {
    if (stack->size > 0) {
        int element = stack->stack_array[--stack->size];
        return element;
    } else {
        return -1;
    }
}

void intialize(Stack *stack) {
    stack->size = 0;
}

int main() {
    Stack stack;
    stack.max_size = MAX_STACK_SIZE;
    stack.size = 0;
    int n;
    scanf("%d", &n);
    char command[6];
    int element;
    for (int i = 0; i < n; i++) {
        scanf("%s", command);
        if (!strcmp(command, "push")) { // push
            scanf("%d", &element);
            push(&stack, element);
        } else if (!strcmp(command, "top")){ // top
            if (stack.size == 0)
                printf("-1\n");
            else
                printf("%d\n", stack.stack_array[stack.size - 1]);
        } else if (!strcmp(command, "pop")) {
            printf("%d\n", pop(&stack));
        } else if (!strcmp(command, "size")) {
            printf("%d\n", stack.size);
        } else if (!strcmp(command, "empty")) {
            if (stack.size == 0)
                printf("1\n");
            else
                printf("0\n");
        }
    }
    return 0;
}