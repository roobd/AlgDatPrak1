/*
 * CursorList.h
 *
 *  Created on: 27.10.2014
 *      Author: myroo_000
 */

#ifndef CURSORLIST_H_
#define CURSORLIST_H_
#define NUMENTRIES 10
template <class T> class CursorList {
public:
 typedef T value_type;
 typedef ListIterator<T> iterator;
2
 bool empty() const;
 int size() const;
 T& front() const;
 void push_front(const T &);  // add a new value to the front of a list
 void pop_front();
 iterator begin() const;
 iterator end() const;
 iterator insert(iterator itr, const T& value); // insert before itr
 iterator erase(iterator start, iterator stop); // stop exclusive
 iterator erase(iterator itr);   // return ++itr

private:
 typedef struct{
	 T data;
	 int prev;
	 int next;
 } zeileT;
 zeileT list[NUMENTRIES];

};



#endif /* CURSORLIST_H_ */
