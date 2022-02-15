#include <iostream>

using namespace std;

class chromeTab{
public:
    int length;
    int width;
    chromeTab *next; //use this everythime you want to create a new tab with little footprint in the app space


    chromeTab()
    {
        length = 40;
        width =20;
        next=NULL; //pointer is not pointing to anything
        //the pointer points to l, w, and next pointer, which initially points to null

    }
};

int main()
{
    //================
    //Creating and deleting chucks
    //===============
    chromeTab *p;
    p = new chromeTab;
    delete p; //deletes the chunk that p is pointing to, does not delete p
    //1 get a pointer
    //2 use that to get a "new" tab from the heap
    //3 Use that pointer to manipulate this namelss object
    chromeTab *ptr;
    ptr = new chromeTab;// forcing os to go to the heap

    cout << "Just checking the length is: " << ptr->length<< ", width: " << ptr->width<< '\n';

    //change lenght ot 80
    ptr->length=80; //now you change the room from 40 to 80
    ptr->width=100;//changing th width with one line of code 

    //I need a new tab!?
    //new tab with L=180, W=200
    /*
    chromeTab *another; //solution is to make another pointer
    another = new chromeTab;// another pointer points to another box in the heap with the lenght and width
    another->length=180;
    another->width=200; //this can get sloppy and boring, poulutting the app space
    */
   //pointer(lhs) = new chromeTab;
   //next poines to new heap with l, w, and next pointer which will be grounded
   ptr->next = new chromeTab;//doing this can open many more tabs with no apspace pollution
   ptr->next->length=180;
   ptr->next->width=200;//changin w and l using the next pointer

   //Third tab please!
   ptr->next->next = new chromeTab;
   //l=200, w=100
   ptr->next->next->length=200;
   ptr->next->next->width=100;

   //fourth tab
    ptr->next->next->next = new chromeTab;
    ptr->next->next->next->length=10;
    ptr->next->next->next->width=10;

    delete ptr; //sure you deleted the first one, but also deleted access to the rest of them too

}
//(Lecture-Stevens Institute of technology, 2022)
