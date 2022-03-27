#include <iostream>
using namespace std;

//1. concept of a "chunck"
class Chunk {
public:
    int value;
    Chunk *next;

    Chunk(){
        value = -1; //it assigns a random value this time call it -1
        next = NULL; // assigns the next pointer as null each time the chunk gets created
    }
};

//class called "Stack"
//a stack of chunks
//member functions to add, delete and display
class Stack{
public:
    Chunk *top;
    Stack(){
        top = NULL;
    }
    //1. add: Push: adds a new element to the stack
    void push(int x){
        //step1: go get us a new chunk and put 'x' inside the value portion
        Chunk *temp = new Chunk;
        temp->value = x;
        //step2: to make this new chunk the "first" chunk
        //if the stack is empty, make this the first chunk. Else, move some pointers
        if(top == NULL){
            top = temp; // thats it!
        }
        else{
            temp->next = top;
            top = temp;
        }
        cout << "Just added a new element: " << top->value <<endl;
    }
    //2. delete: Pop: removes and element (if any) from the Stack
    void pop(){
        //step1: check to see if the stack is empty. if yes, nothing to do here.
        //step2: if it's not empty, just get rid of the first chunk
        if(top == NULL){
            cout << "Nothing to delete, stack is empty" <<endl;
        }
        else{
            Chunk *temp;
            top = temp;
            top = top->next;
            cout << "deleting" << temp->value<< endl;
            delete temp;
        }
    }
    //3. display: displays the contents of the stack
    void display(){
        Chunk *temp;
        temp = top;
        while(temp != NULL){
            cout << temp->value << endl;
            temp = temp->next;
        }
    }
};

int main() {
    Stack S;
    int choice, value;

    while (1) {
        cout << "Press 1 to push to the stack " << endl;
        cout << "Press 2 to pop from the stack" << endl;
        cout << "Press 3 to display contents" << endl;
        cout << "Anything else to quit" << endl;
        cin >> choice;


    switch (choice) {
        case 1:
            cout << "Push what?" << endl;
            cin >> value;
            S.push(value);
            break;

        case 2:
            S.pop();
        case 3:
            S.display();
            exit(1);
    }
}
    return 0;
}
