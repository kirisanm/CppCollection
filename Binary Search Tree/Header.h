// Coded &  Developed by Kirisan Manivannan

struct BTNode {			// Binær Tre Node
	int value;
	BTNode* left;
	BTNode* right;
	BTNode(int v): value(v), left(nullptr), right(nullptr){}
};

class BT				//Binær Tre
{
public:
	BT();
	~BT();
	void insert(int);
	BTNode* search(int);
	void remove(BTNode*);
	void printPrefix();
	void printPostfix();
	void printInfix();
private:
	BTNode* insert(BTNode*, int);
	BTNode* search(BTNode*, int);
	BTNode* remove(BTNode*, BTNode*);
	BTNode* findMinimum(BTNode*);
	void destroy_tree(BTNode*);
	void printPrefix(BTNode*);
	void printPostfix(BTNode*);
	void printInfix(BTNode*);

	BTNode* root;

};
