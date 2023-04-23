#include "Play.h"


PassPlay ::PassPlay() {
    srand(time(NULL));
    yardsMoved = 0;
}

void PassPlay :: start(){
   // cout << "PASSPLAY STARTED TEST TEST TEST" << endl;
    vector <int> possiblePassValues = {-10,-5,0,0,5,10,15,20,25,30};
    int randPassVal = possiblePassValues.at(rand() % 10);
    setYardsMoved(randPassVal);
}
void PassPlay :: Print(){
    cout <<"Pass play for " <<  yardsMoved << " yards" << endl;
}

//rule of 3

//destructor
PassPlay :: ~PassPlay(){
    // ??? does anything go inside here
   // delete yardsMoved; //says can't delete expression type of int
}
//copy constructor
PassPlay :: PassPlay(const PassPlay &copy){
// ??? does anything go inside here
}

//copy assignment operator is this correct??
PassPlay &PassPlay::operator=(const PassPlay &copy) {
    if (this != &copy) {
        Play:: operator = (copy);
    }
    return *this;
}
