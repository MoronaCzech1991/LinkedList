#pragma once
#include <iostream>

namespace LINKED_LIST 
{

// Class that represent the nodes
template<typename T>
class Node 
{
public:
	Node(const T value)
	{
		m_value = value;
		m_next = nullptr;
	}

	void setVaue(const T value) 
	{
		m_value = value;
	}

	void setNext(Node* next)
	{
		m_next = next;
	}

	Node* getNext() const
	{
		return m_next;
	}

	T getValue() const 
	{
		return m_value;
	}

private:
	T m_value;
	Node* m_next;
};

template<typename T>
class LinkedLsit 
{
public:
	LinkedLsit() : m_headNode(nullptr) {}

	LinkedLsit(const T value)
	{
		m_headNode = new Node<T>(value);
	}

	void insertNode(const T data)
	{
		Node<T>* newNode = new Node<T>(data);
		newNode->setVaue(data);

		if (m_headNode == nullptr) 
		{
			m_headNode = newNode;
		}
		else 
		{
			Node<T>* node = m_headNode;
			while (node->getNext() != nullptr) 
			{
				node = node->getNext();
			}
			node->setNext(newNode);
		}
	}

	void showList() const
	{
		Node<T>* node = m_headNode;
		while (node != nullptr)
		{
			std::cout << node->getValue() << std::endl;
			node = node->getNext();
		}
	}

private:
	Node<T>* m_headNode;
};

} // LINKED_LIST
