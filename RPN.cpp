#ifndef RPN_CPP
#define RPN_CPP

void RPN::add(){
     push(pop()+pop());
};

void RPN::sub(){
     float x=pop();
     push(pop()-x);;
};

void RPN::mul(){
     push(pop()*pop());
};

void RPN::div(){
     float x=pop();
     push(pop()/x);;
};

void RPN::exp(){
     float x=pop();
     push(pow(pop(),x));;
};

void RPN::ln(){
     push(log(pop()));;
};

void RPN::lgm(){
     push(log10(pop()));;
};

void RPN::mag(){
     push(pow(10,pop()));
};

void RPN::pi(){
     push(3.1415926545);
};

void RPN::sn(){
     push(sin(pop()));
};

void RPN::cs(){
     push(cos(pop()));
};

void RPN::tn(){
     push(tan(pop()));
};

void RPN::ee(){
     push(2.718281828);
};

void RPN::sq(){
     push(pow(pop(),2));
};

#endif
