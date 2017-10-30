
#include "tree.h"
using namespace std;


void Tree::addRoot(string newval)
{
	Node *newNode = new Node(newval);
	root = newNode;
}
