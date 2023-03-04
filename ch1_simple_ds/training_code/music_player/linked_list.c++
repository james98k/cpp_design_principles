#include "header.h";


node::node(string title, string author, string length){
	title = title;
	author = author;
	length = length;
};

void node::print_node(){
	cout<<"title : "<< title << "author : " << author<< "length : " << length;
}

linked_list::linked_list(){

	this->head = 0x0;
	this->tail = 0x0;
	count = 0;
};

void linked_list::delete_ll(){

	while(head != 0x0){
		
	}
};

void linked_list::delete_node(node t){
	node * tmp;
	tmp = &t;

	//if ll has only one node;
	if(head == 0x0)
		return;
	else{
		if(head == tail){
			free(tmp);
			head = 0x0;
			tail = 0x0;
		}
		else
			tmp->prev_node->next_node = tmp->next_node;
	};
	
	
	
	if(tmp == tail){
		tail = tmp->prev_node;
	}
	if(tmp->next_node != 0x0)
		tmp->next_node->prev_node = tmp->prev_node;

};


















