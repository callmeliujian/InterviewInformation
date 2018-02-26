//算法5.5 计算二叉树的深度
#include<iostream>
using namespace std;

//二叉树的二叉链表存储表示
typedef struct BiNode
{				
	char data;						//结点数据域
	struct BiNode *lchild,*rchild;	//左右孩子指针
}BiTNode,*BiTree;

//用算法5.3建立二叉链表
void CreateBiTree(BiTree &T)
{	
	//按先序次序输入二叉树中结点的值（一个字符），创建二叉链表表示的二叉树T
	char ch;
	cin >> ch;
	if(ch=='#')  T=NULL;			//递归结束，建空树
	else{							
		T=new BiTNode;
		T->data=ch;					//生成根结点
		CreateBiTree(T->lchild);	//递归创建左子树
		CreateBiTree(T->rchild);	//递归创建右子树
	}								//else
}									//CreateBiTree

int Depth(BiTree T)
{ 
	int m,n;
			cout<<"m0"<<m<<endl;
				cout<<"n0"<<n<<endl;
	if(T == NULL ) 
	{
	cout<<"ww"<<endl;	
	return 0;        //如果是空树，深度为0，递归结束
	}
	else 
	{							
		m=Depth(T->lchild);			//递归计算左子树的深度记为m
		cout<<"j"<<"="<<m<<endl;
		n=Depth(T->rchild);			//递归计算右子树的深度记为n
		cout<<"k"<<"="<<n<<endl;
		if(m>n) return(m+1);		//二叉树的深度为m 与n的较大者加1
		else return (n+1);
	}
}

main()
{
	BiTree tree;
	cout<<"请输入建立二叉链表的序列：\n";
	CreateBiTree(tree);
	cout<<"数的深度为："<<Depth(tree)<<endl;
}
