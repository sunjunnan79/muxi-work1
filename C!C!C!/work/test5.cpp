#include <stdio.h>
#include <windows.h>
int main(){
    int money;
    int drink;
    printf("��Ͷ��Ǯ��(2Ԫ,3Ԫ,5Ԫ):");
    scanf("%dԪ",&money);
    getchar();
    if(money==2){
        printf("��ѡ��������Ʒ(��ʦ����ȪˮA��������ȪˮB��ũ��ɽȪB):");
        drink = getchar();
        switch(drink){
        case 'A':
            printf("������%dԪ�������Ʒ�ǿ�ʦ����Ȫˮ\n",money);break;
        case 'B':
            printf("������%dԪ�������Ʒ��������Ȫˮ\n",money);break;
        case 'C':
            printf("������%dԪ�������Ʒ��ũ��ɽȪ\n",money);break;
        }    
    }
    else if(money==3){
        printf("��ѡ��������Ʒ(����A��ѩ��B�͹�֭C):");
        drink = getchar();
        switch(drink){
        case 'A':
            printf("������%dԪ�������Ʒ�ǿ���\n",money);break;
        case 'B':
            printf("������%dԪ�������Ʒ��ѩ��\n",money);break;
        case 'C':
            printf("������%dԪ�������Ʒ�ǹ�֭\n",money);break;
        }   
    }
    else if(money==5){
            printf("��ѡ��������Ʒ(�̲�A������B������C):");
            drink = getchar();
            switch(drink){
            case 'A':
                printf("������%dԪ�������Ʒ���̲�\n",money);break;
            case 'B':
                printf("������%dԪ�������Ʒ�ǿ���\n",money);break;
            case 'C':
                printf("������%dԪ�������Ʒ������\n",money);break;   
            }
    }
    printf("лл�ݹ�");
    system("pause");
    return 0;

}