#include<bits/stdc++.h>
using namespace std;

class Subscriber{

  int value;

  std::vector<*Observer> observer;

  void attach(Observer *obj)
  {
    observer.push_back(obj);
  }

  void setValue(int val)
  {
    this->value=val;
  }
  int getValue()
  {
    return value;
  }
  void notify()
  {
    observer[i]->onchanged();
  }
};

class Observer{


  virtual void onchanged();

}

class MulObserve:public Observer{

  void onchanged()
  {

  }

};

class DivObserver:public Observer{

};
 void main()
 {

 }
