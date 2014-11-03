/*
 * CursorIterator.h
 *
 *  Created on: 03.11.2014
 *      Author: Philipp
 */

#ifndef SRC_CURSORITERATOR_H_
#define SRC_CURSORITERATOR_H_


template <class T> class ListIterator {
	typedef CursorIterator<T> iterator;
public:
	T& operator *();
	iterator& operator = (const iterator& rhs);
	bool operator != (const iterator& rhs) const;
	bool operator == (const iterator& rhs) const;
	iterator& operator ++();
	iterator operator ++(int); // postfix operator, dummy parameter
};


#endif /* SRC_CURSORITERATOR_H_ */
