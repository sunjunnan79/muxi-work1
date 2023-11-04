#include <stdio.h>
#include <windows.h>
int main(){
    int money;
    int drink;
    printf("请投入钱币(2元,3元,5元):");
    scanf("%d元",&money);
    getchar();
    if(money==2){
        printf("请选择您的饮品(康师傅矿泉水A、怡宝矿泉水B和农夫山泉B):");
        drink = getchar();
        switch(drink){
        case 'A':
            printf("您花了%d元购买的饮品是康师傅矿泉水\n",money);break;
        case 'B':
            printf("您花了%d元购买的饮品是怡宝矿泉水\n",money);break;
        case 'C':
            printf("您花了%d元购买的饮品是农夫山泉\n",money);break;
        }    
    }
    else if(money==3){
        printf("请选择您的饮品(可乐A、雪碧B和果汁C):");
        drink = getchar();
        switch(drink){
        case 'A':
            printf("您花了%d元购买的饮品是可乐\n",money);break;
        case 'B':
            printf("您花了%d元购买的饮品是雪碧\n",money);break;
        case 'C':
            printf("您花了%d元购买的饮品是果汁\n",money);break;
        }   
    }
    else if(money==5){
            printf("请选择您的饮品(奶茶A、咖啡B和酸奶C):");
            drink = getchar();
            switch(drink){
            case 'A':
                printf("您花了%d元购买的饮品是奶茶\n",money);break;
            case 'B':
                printf("您花了%d元购买的饮品是咖啡\n",money);break;
            case 'C':
                printf("您花了%d元购买的饮品是酸奶\n",money);break;   
            }
    }
    printf("谢谢惠顾");
    system("pause");
    return 0;

}