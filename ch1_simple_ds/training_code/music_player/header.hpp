#include <string>
using namespace std;

class Node{

	public :
		Node * next_node;
		Node * prev_node;

		Node();
		void set_node(string title, string author, string length);
		void print_node();
		void set_node_number(int number);
		
		

	private :
		string title;
		string author;
		string length;
		int number;
		

		
		

};

class LinkedList{
	
	public : 
		
		LinkedList();
		void delete_ll();
		void add_new_song(Node t);
		void delete_node(Node t);
		void delete_node_by_number();
		void print_list();

	private : 
		Node * head;
		Node * tail;
		int count;
		


};