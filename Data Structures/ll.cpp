#include <iostream>
using namespace std;

class Chunk {
public:
    int value;
    Chunk *next;

    Chunk() {
        value = -1;
        next = NULL;
    }
};

class LL {
public:
    Chunk *head;
    int size;

    LL() {
        head = NULL;
        size = 0;
    }

    void insertAtHead(int x) {
        Chunk *newHead;
        newHead = new Chunk;
        newHead->value = x;

        newHead->next = head;
        head = newHead;
    }

    //1. Add: value + position
    void AddAtPos(int value, int pos) {
        if (pos <= size + 1) {
            Chunk *temp = new Chunk;
            temp->value = value;

            if (pos == 1) {
                //exactly like stack!
                insertAtHead(value);
            } else {
                Chunk *help = head;
                for (int i = 1; i < pos - 1; i++){
                    help = help->next;
                    cout << "at position " << i << endl;
                }

                ///check all this!.
                cout << "help value:" << help->value << endl;
                cout << "help next" << help->next << endl;
                temp->next = help->next; //1
                help->next = temp;
            }
            size++;

        } else {
            cout << "Sorry, invalid position" << endl;
            return;
        }
    }

    //2. Remove: position
    void removeFromPos(int pos) {

        if (pos <= size) {
            if (pos == size && size == 1) {
                //deleting lone chunk!
                delete head;
                head = NULL;
                size = 0;
            }

            if (pos == 1) {
                //exactly like stack!
                if(head == NULL){
                    cout << "Nothing to delete, stack is empty" <<endl;
                }
                else{
                    Chunk *temp;
                    head = temp;
                    head = head->next;
                    cout << "deleting" << temp->value<< endl;
                    delete temp;
                }
            } else if (pos == size) {
                //like queue!
                Chunk *follow, *chase;

                if(head == NULL) {
                    cout << "Empty Queue, nothing to delete" << endl;
                }
                else if(head->next == NULL) {
                    cout << "Lone chunk, deleting " << head->value << endl;
                    delete head;
                    head = NULL;
                }
                else {
                    follow = chase = head;
                    while(chase->next != NULL) {
                        follow = chase;
                        chase = chase->next;
                    }
                    follow-> next = NULL;
                    cout << "About to delete: " << chase->value << endl;
                    delete chase;

                }
            } else {
                Chunk *chase, *follow;
                chase = follow = head;
                for (int i = 1; i < pos; i++) {
                    follow = chase;
                    chase = chase->next;
                }
                follow->next = chase->next;
                delete chase;
            }
            size--;
        } else {

        }
    }

    //3. Display (ignore this today)
    void display() {
        Chunk *temp;
        temp = head;
        while (temp != NULL) {
            cout << temp->value << endl;
            temp = temp->next;
        }
    }
};
    int main() {
        LL link;

        int choice, value, pos;

        while (1) {
            cout << "Press 1 to insert at heat " << endl;
            cout << "Press 2 to insert at a position" << endl;
            cout << "Press 3 to remove from the position" << endl;
            cout << "Press 4 to display contents" << endl;
            cout << "Anything else to quit" << endl;
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "insert what?" << endl;
                    cin >> value;
                    link.insertAtHead(value);
                    break;

                case 2:
                    cout << "add what?" << endl;
                    cin >> value;
                    cout << "Where?" << endl;
                    cin >> pos;
                    link.AddAtPos(value, pos);

                    break;
                case 3:
                    cout << "Remove which?" << endl;
                    cin >> pos;
                    link.removeFromPos(pos);
                    break;
                case 4:
                    cout << "\n";
                    link.display();
                    break;
                case 5:
                    cout << "Goodbye!" << endl;
                    exit(1);
            }
        }

    return 0;
    }


