// doubly Linked List LIKE STL.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "DOUBLY_LINKED_LIST_LIKE_STL.h"

int main()
{

	CList<int> test1;


	CList<int>::iterator test_iter = test1.begin();


	//푸시 프론트
	test1.push_front(3);

	test_iter = test1.begin();


	test1.push_front(4);

	test1.push_front(5);


	//푸시 백
	test1.push_back(2);
	test1.push_back(1);

	cout << test1.size() << endl;


	CList<int>::iterator start_iter = test1.begin();
	CList<int>::iterator end_iter = test1.end();
	

	cout << endl;
	for (start_iter = test1.begin() ; start_iter != end_iter  ; start_iter++) {
		cout << *start_iter << ' ';
	}
	cout << endl;
	

	cout << endl;
	for (start_iter = test1.begin(); start_iter != end_iter;) {
		cout << *start_iter  << ' ';
		start_iter = test1.erase(start_iter);
	}
	cout << endl;



	//출력
	//test1.DisplayAll();


	


	//전부 삭제
	test1.clear();

	cout << test1.size() << endl;

	while (true)
	{

	}
    return 0;
}

