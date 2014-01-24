#ifndef STACK_CPP
#define STACK_CPP

stack::stack(){
	for(int i=0;i<20;i++) n[i]=0;
	t=-1;
}

void stack::push(float f){
	if(t<19){
		t++;
		n[t]=f;
	}
}

float stack::pop(){
	if(t>=0){
		float f=n[t];
		t--;
	return f;
	}
	else return 0;
}

float stack::show(){
	return n[t];
}

float stack::show2(){
	return n[t-1];
}

#endif
