//�㷨5.5 ��������������
#include<iostream>
using namespace std;

//�������Ķ�������洢��ʾ
typedef struct BiNode
{				
	char data;						//���������
	struct BiNode *lchild,*rchild;	//���Һ���ָ��
}BiTNode,*BiTree;

//���㷨5.3������������
void CreateBiTree(BiTree &T)
{	
	//�������������������н���ֵ��һ���ַ������������������ʾ�Ķ�����T
	char ch;
	cin >> ch;
	if(ch=='#')  T=NULL;			//�ݹ������������
	else{							
		T=new BiTNode;
		T->data=ch;					//���ɸ����
		CreateBiTree(T->lchild);	//�ݹ鴴��������
		CreateBiTree(T->rchild);	//�ݹ鴴��������
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
	return 0;        //����ǿ��������Ϊ0���ݹ����
	}
	else 
	{							
		m=Depth(T->lchild);			//�ݹ��������������ȼ�Ϊm
		cout<<"j"<<"="<<m<<endl;
		n=Depth(T->rchild);			//�ݹ��������������ȼ�Ϊn
		cout<<"k"<<"="<<n<<endl;
		if(m>n) return(m+1);		//�����������Ϊm ��n�Ľϴ��߼�1
		else return (n+1);
	}
}

main()
{
	BiTree tree;
	cout<<"�����뽨��������������У�\n";
	CreateBiTree(tree);
	cout<<"�������Ϊ��"<<Depth(tree)<<endl;
}
