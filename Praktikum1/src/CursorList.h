/*
 * CursorList.h
 *
 *  Created on: 27.10.2014
 *      Author: myroo_000
 */
#include<CursorIterator>
#ifndef CURSORLIST_H_
#define CURSORLIST_H_
#define NUMENTRIES 10


template <class T> class CursorList {

private:
 typedef struct{
	 T data;
	 int prev;//Vorgänger
	 int next;//Nachfolger
 }zeileT;
 zeileT list[NUMENTRIES];
int start_data = 0;
int start_free = 0;


public:
 typedef T value_type;
 typedef CursorIterator<T> iterator;


 //Returns true if list is empty, false if not empty
 bool empty() const{
	 if(list[start_data].next==-1){
		 return true;
	 }
	 else{
		 return false;
	 }
}


 //Returns the numbers of list elements
 int size() const{
	int size=0;
	int next=0;
	for(int i=0;i<NUMENTRIES||empty();i++){
		if(i==0){
			next=list[start_data].next;
			size++;
		}
		if(list[next].next !=-1){
			next =list[next].next;
			size++;
		}
	}
	return size;
 }


 //Returns the Data at the first position of the list
 T& front() const{
	 return list[start_data].data;
 }


 void push_front(const T &){
	 ;// add a new value to the front of a list
 }
 void pop_front();
 iterator begin() const{
	 return 0;
 }
 iterator end() const{
	 return 1;
 }
 iterator insert(iterator itr, const T& value){
	 int actualIndex = list[itr].prev;
	 list[actualIndex].data = value;
	 list[actualIndex].prev = itr;



 }
 iterator erase(iterator start, iterator stop); // stop exclusive
 iterator erase(iterator itr);   // return ++itr




};



#endif /* CURSORLIST_H_ */
