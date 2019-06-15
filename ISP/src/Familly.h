/*
 * Familly.h
 *
 *  Created on: Jun. 14, 2019
 *      Author: Yamaan
 */

#ifndef FAMILLY_H_
#define FAMILLY_H_

#include "Book.h"

namespace std {

class Familly: public Book {
public:
	Familly(string name) :Book(name){

	}
	virtual ~Familly();
};

} /* namespace std */

#endif /* FAMILLY_H_ */
