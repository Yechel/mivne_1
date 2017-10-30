
#include "tree.h"
using namespace std;
///aaaaaaaa

void Tree::addRoot(string newval)
{
	Node *newNode = new Node(newval);
	root = newNode;
}
