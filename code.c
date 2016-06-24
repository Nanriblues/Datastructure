
void main(){
int i;// 선택받을 메뉴의 숫자
while(1){
printf("0. Read data files\n1. display statistics\n2. Top 5 most tweeted words\n3. Top 5 most tweeted users\n4. Find users who tweeted a word
\n5. Find all people who are friends of the above users\n6. Delete all mentions of a word\n7. Delete all users who mentioned a word
\n8. Find strongly connected components\n9. Find shortest path from a given user\n10. Quit\nSelect Menu:)

scanf("%d",&i);
system("cls")
if(i>=0&&i<=10)
break;
else{
printf("잘못된 숫자 입력입니다. 다시 메뉴로 돌아갑니다....");
sleep(2000);
system("cls")
}


}
}
