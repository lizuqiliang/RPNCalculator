#ifndef RPN_H
#define RPN_H

class RPN:public stack{
      public:
          void add();
          void sub();
          void mul();
          void div();
          void exp();
          void ln();
          void lgm();
          void mag();
          void pi();
          void sn();
          void cs();
          void tn();
          void sq();
          void ee();
};

#endif
