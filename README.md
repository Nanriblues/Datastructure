# Datastructure

Draft:

사용자의 ID값들을 기준으로 Redblack Tree를 만듭니다.
각 Node에는 ID(char형)과 ID값(정수형)과 Mention을 저장할 struct 포인터(linked list)
user을 연결하는 friend포인터(linked list)가 있습니다.
또 당연히 색깔, left, right와 같은 RBT의 기본적인 사항도 존재합니다.

Mention과 user를 연결하는 struct들은 양이 많지 않으므로 굳이 tree형식으로
표현하지는 않기로 선택했습니다.
user을 연결하는 linked list의 첫번째 값은 기본적으로 자신의 ID로 고정됩니다.
읽는 순서에 따라 위에서부터 읽으면 다음과 같이 진행됩니다.

1. word.txt를 읽기

(1) 네 줄에 한 단위로 싸이클이 진행되게 구성합니다.

(2-new?)  단위의 첫번째줄을 읽고 만약에 tree에 구성되어 있지 않은 ID값이면
          Node를 새로 할당한후 새로운 ID값을 넣습니다.
          
(2-old?)  만약 이미 tree에 구성되어 있는 ID값이면
          그 위치에 대한 포인터를 찾습니다.
          
(3) 단위의 셋째줄을 읽고 만약 new였다면 새로 할당된 node, 
    old였다면 찾아낸 위치의 포인터에 Linkedlist에 mention을 추가합니다.
    (이부분은 linked list에서 배운 전형적인 노드 추가이므로 설명이 필요 없음)
    
(4)EOF가 나올 때까지 (2)(3)을 반복합니다.


2. user.txt 읽기

(1) 네 줄에 한 단위로 싸이클이 진행되게 구성합니다.

(2) 이미 1.에서 word를 읽어낼 때 tree를 구성했으므로 첫 번째 줄에 있는
    ID값을 찾아서 node에 담긴 ID(char형)공간에 저장하니다.
    

3. friend.txt를 읽기

(1) 세줄 에 한 단위로 싸이클이 진행되게 구성합니다.

(2) 이미 1.에서 word를 읽어낼 때 tree를 구성했으므로
    첫 번째 줄에 있는 ID값을 찾아서 friend 포인터로 linked list를 연결합니다.
    



