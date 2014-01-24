#ifndef stack_h
#define stack_h

class stack{
	public:
		stack();
		//~stack();
		struct NODE{
			int n;
			NODE* next;
		};

		void push(float f);
		float show();
		float show2();
		float pop();
	private:
		float n[20];
		int t;
};

#endif
