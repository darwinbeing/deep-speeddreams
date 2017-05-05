/*
  SOLID - Software Library for Interference Detection
  Copyright (C) 1997-1998  Gino van den Bergen

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Library General Public
  License as published by the Free Software Foundation; either
  version 2 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Library General Public License for more details.

  You should have received a copy of the GNU Library General Public
  License along with this library; if not, write to the Free
  Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA.

  Please send remarks, questions and bug reports to gino@win.tue.nl,
  or write to:
                  Gino van den Bergen
		  Department of Mathematics and Computing Science
		  Eindhoven University of Technology
		  P.O. Box 513, 5600 MB Eindhoven, The Netherlands
*/

#ifndef ENDPOINT_H
#define ENDPOINT_H

#ifdef _MSC_VER
#pragma warning(disable:4786) // identifier was truncated to '255'
#endif // _MSC_VER

#include <3D/Basic.h>

enum { MIN = 0, MAX = 1 };
typedef int Side;

class Object;

class Endpoint {
public:
  Endpoint *succ;
  Endpoint *pred;
  Side side;
  const Object *objPtr;
  Scalar pos;

  Endpoint() : objPtr(0) {}
  Endpoint(int axis, Side s, const Object *obj);
  ~Endpoint() { if (objPtr) remove(); }

  void move(Scalar x);

private:
  void insert(Endpoint *p);
  void remove() { succ->pred = pred; pred->succ = succ; }
};


#endif

