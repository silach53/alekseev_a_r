// PriorityQueue.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#ifndef QueueP_07092022
#define QueueP_07092022
#pragma once
//#indef QueueP;
#include <iostream>
#include <memory>
#include <vector>
#include <algorithm>
struct QueueP {
	struct Node {
		int data;
		std::unique_ptr <Node> next;
		Node() :
			data(0),
			next(nullptr)
		{}
		Node(int value) :
			data(value),
			next(nullptr)
		{}
	};
	std::unique_ptr<Node> head;
	~QueueP()
	{
		while (head)
			head = std::move(head->next);
	}
	QueueP() = default;
	QueueP(const std::vector<int>& v)
	{

		for (int i = 0; i < v.size(); i++)
		{
			push(v[i]);
		}
	}
	QueueP(const QueueP&copy) = default;
	void push(int value)
	{
		Node* prev = head.get();
		while (value >= prev->next->data && prev->next != nullptr)
		{
			prev = (prev->next).get();
		}
		std::unique_ptr <Node> new_value = std::make_unique<Node>();
		new_value->data = value;
		new_value->next = std::move(prev->next);
		prev->next = std::move(new_value);

	}
	void pop()
	{
		head = std::move(head->next);
	}
	int top()
	{
		return head->data;
	}
};
template <class T>
std::ostream& operator<<(std::ostream& ostream, const QueueP& temp)
{
	while (temp->next != nullptr)
	{
		ostream << temp.top() << ' ';
		temp.pop();
	}
	return ostream;
}
template <class T>
std::istream& operator>>(std::istream& istream, QueueP& temp)
{
	std::vector<T> c;
	for (int i = 0; i < c.size(); i++)
	{
		istream >> c[i];
		temp.push(c[i]);
	}
	return istream;
}


#endif