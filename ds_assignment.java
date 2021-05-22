
package com.example;
import java.util.Scanner;

class HelloCodiva {
  
  



	

	

	public static void main(String[] args){

		

		  

		Scanner a = new Scanner(System.in);

		linkedList l = new linkedList();

		char c;

		do

		{

		System.out.println("\t1.insert at begning");

		System.out.println("\t2.insert at end");

		System.out.println("\t3.insert at a point");

		System.out.println("\t4.delete at first");

		System.out.println("\t5.delete at end");

		System.out.println("\t6.delete at a position");

		System.out.println("\t7.delete all nodes");

		System.out.println("\t8.size of circular linked list");

		System.out.println("\t9.check list is empty");

		int b = a.nextInt();

		switch (b)

		{

		case 1 :

		System.out.println("enter element to insert");

		l.add_begning( a.nextInt() );

		break;

		case 2 :

		System.out.println("enter element to insert");

		l.add_end( a.nextInt() );

		break;

		case 3 :

		System.out.println("enter element to insert");

		int num = a.nextInt() ;

		System.out.println("enter the position");

		int pos = a.nextInt() ;

		if (pos <= 1 || pos > l.size() )

		System.out.println("\tinvalid entry,position not found \t");

		else

		l.add_any(num, pos);

		break;

		case 4 :

		l.delete_begning();

		case 5 :

		l.delete_end();

		break;

		case 6 :System.out.println("enter the position");

		int p = a.nextInt() ;

		if (p < 1 || p > l.size() )

		System.out.println("\tinvalid entry,position not found\t");

		else

		l.delete_any(p);

		break;

		case 7 :

		l.delete_all();

		case 8 :

		System.out.println("\tsize of linkedlist = "+ l.size() +" \t");

		break;

		case 9 :

		System.out.println("\tempty status = "+ l.empty());

		break;

		default :

		System.out.println("\tin valid entry \t ");

		break;

		}

		l.display();

		System.out.println("\n\ndo you want to continue(y/n)");

		c= a.next().charAt(0);

		} while (c == 'Y'|| c == 'y');

		

		}

		

	}

	

	

	class Node{

		

	int data;

	Node link;

	Node()

	{

	link = null;

	data = 0;

	}

	Node(int d,Node t)

	{

	data = d;

	link = t;

	}

	public void setlink(Node t)

	{

	link = t;

	}

	public void setData(int d)

	{

	data = d;

	} 

	public Node get()

	{

	return link;

	}

	public int getData()

	{

	return data;

	}

	}

	class linkedList

	{

	Node s ;Node e ;

	int r ;

	linkedList()

	{

	s = null;

	e = null;

	r = 0;

	}

	public boolean empty()

	{

	return s == null;

	}

	public int size()

	{

	Node temp = new Node();

	temp = this.s;

	r = 0;

	if (temp != null) {

	r++;

	temp = temp.link;

	}

	while(temp != this.s) {

	r++;

	temp = temp.link;

	}

	return r;

	}

	

	public void add_begning(int k)

	{ Node ptr = new Node(k,null);

	ptr.setlink(s);

	if(s == null)

	{ s = ptr;

	ptr.setlink(s);

	e = s;

	}

	else

	{

	e.setlink(ptr);

	s = ptr;

	}

	r++ ;

	}

	public void add_end(int k)

	{

	Node ptr = new Node(k,null); 

	ptr.setlink(s);

	if(s == null)

	{

	s = ptr;

	ptr.setlink(s);

	e = s;

	}

	else

	{

	e.setlink(ptr);

	e = ptr;

	}

	r++ ;}

	public void add_any(int k , int pos)

	{

	Node ptr = new Node(k,null);

	Node ptr1 = s;

	pos = pos-1 ;

	for (int i = 1; i < r - 1; i++)

	{

	if (i == pos)

	{

	Node tmp = ptr1.get() ;

	ptr1.setlink( ptr );

	ptr.setlink(tmp);

	break;

	}

	ptr1 = ptr1.get();

	}

	r++ ;

	}

	public void delete_begning() {

	if(this.s != null) {

	if(this.s.link == this.s) {

	this.s = null;

	} else {

	Node temp = this.s;

	Node firstNode = this.s;

	while(temp.link != this.s) {

	temp = temp.link;

	}

	this.s = this.s.link;

	firstNode = null;

	}

	}

	}

	public void delete_end() {

	if(this.s != null) {

	if(this.s.link == this.s) {

	this.s = null;

	} else {

	Node temp = new Node();

	temp = this.s;

	while(temp.link.link != this.s)

	temp = temp.link;

	Node lastNode = temp.link;

	temp.link = this.s; 

	lastNode = null;

	}

	}

	}

	public void delete_any(int pos)

	{

	if (r == 1 && pos == 1)

	{

	s = null;

	e = null;

	r = 0;

	return ;

	}if (pos == 1)

	{

	s = s.get();

	e.setlink(s);

	r--;

	return ;

	}

	if (pos == r)

	{

	Node a = s;

	Node t = s;

	while (a != e)

	{

	t = a;

	a = a.get();

	}

	e = t;

	e.setlink(s);

	r --;

	return;

	}

	Node ptr1 = s;

	pos = pos - 1 ;

	for (int i = 1; i < r - 1; i++)

	{

	if (i == pos)

	{

	Node tmp = ptr1.get();

	tmp = tmp.get();

	ptr1.setlink(tmp);

	break;

	}

	ptr1 = ptr1.get();

	}

	r-- ;

	}

	public void delete_all() {

	if(this.s != null) {

	Node temp = new Node();

	Node current = new Node();

	current = this.s.link;

	while(current != this.s) {

	temp = current.link;

	current = null;

	current = temp;

	}

	this.s = null;

	}

	System.out.println("all nodes deleted.\n");

	}

	public void display()

	{

	System.out.print("circular linked list contains ");

	Node ptr1 = s;

	if (this.s == null)

	{

	System.out.print("nothing because it is empty\t");

	return;

	}if (s.get() == s)

	{

	System.out.print(s.getData()+ "->"+ptr1.getData()+

	"\t");

	return;

	}

	System.out.print(s.getData()+ "->");

	ptr1 = s.get();

	while (ptr1.get() != s)

	{

	System.out.print(ptr1.getData()+ "->");

	ptr1 = ptr1.get();

	}

	System.out.print(ptr1.getData()+ "->");

	ptr1 = ptr1.get();

	System.out.print(ptr1.getData()+ "\t");

	

	}
    
   
    

  
}
