#include <memory>

class TreeNode;

typedef std::shared_ptr<TreeNode> TreeNodePtr;
typedef std::weak_ptr<TreeNode> TreeNodeWeakPtr;

class TreeNode {
public:
	static TreeNodePtr createNode(int content, TreeNodePtr left = TreeNodePtr(), TreeNodePtr right = TreeNodePtr());
	~TreeNode();
	
private:
	TreeNode(int content, TreeNodePtr left, TreeNodePtr right);
	void setParent(const TreeNodePtr &p);
	TreeNodePtr leftChild, rightChild;
	TreeNodeWeakPtr parent;
	int content;
};