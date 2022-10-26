# Stack implementation in Python

# Creating a stack
def create_stack():
    stack=[]
    return stack

# Creating an empty stack
def check_empty(stack):
    return len(stack)== 0

# Adding items into the stack
def push(stack,item):
    stack.append(item)
    print('Pushed Item : '+item)

# Removing an element from stack
def pop():
    if(check_empty(stack)):
        return 'Stack is empty'
    return stack.pop()

stack=create_stack()
push(stack,str(1))
print(stack)
push(stack,str(2))
print(stack)
push(stack,str(3))
print(stack)
push(stack,str(4))
print(stack)
pop()
print(stack)