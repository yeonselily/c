#ifndef __POINT_H__ 
#define __POINT_H__ 


class point{
	
	private: 
		int x, y; 
		
	public: 
		point();  // constructor, »ý¼ºÀÚ 
		~point(); // destructor  
		void set(int a, int b); 
		void print(); 	
};

#endif
