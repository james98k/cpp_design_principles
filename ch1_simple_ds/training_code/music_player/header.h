#include <iostream>
#include <algorithm>

using namespace std;

class node{

	public :
		string title;
		string author;
		string length;
		int number;

		node * next_node;
		node * prev_node;

		node(string title, string author, string length);
		void print_node();
		void set_node_number(int number);
	private :
		

};

class linked_list{
	
	public : 
		node * head;
		node * tail;
		int count;

	private : 
		void delete_ll();
		void add_new_song(node t);
		void delete_node(node t);
		void delete_node_by_number();
		linked_list();


};