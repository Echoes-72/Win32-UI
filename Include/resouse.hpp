#pragma once
#include <windows.h>
#define ATTRIBUTE TEXT("  ϸ���Զ������ÿ��ϸ��������һ���ĲƸ�ֵ(���W) �����ڵ�ͼ�ϵ�ÿ��ϸ��֮�仹��\
���ڳ�ŵֵ(���C) ��������ͬһ�Ե�˫����˵ �����ŵֵ��һ����")
#define ABOUT TEXT("   ϸ���Զ�����һ��ʱ��Ϳռ䶼��ɢ�Ķ�̬ϵͳ ÿ��ϸ���Զ���������ϸ����Ԫ(cell)��ɵĹ������� \
ÿ��ϸ��Ԫ���� k �����ܵ�״̬ �䵱ǰ״̬���䱾����Χϸ��Ԫ��ǰһ״̬��ͬ����.")
#define ACCELERATOR TEXT("�½�:\t\t\tCtrl+O\n����:\t\t\tCtrl+C\n��ȡ:\t\t\tCtrl+G\n����:\t\t\tCtrl+A\n����:\t\t\tCtrl+R\n\
��ݼ�:\t\tCtrl+S\nˮƽ����������:\thome\nˮƽ�����������:\tend\n��ֱ����������:\tShift+home\n��ֱ�����������:\
\tShift+end\nGO:\t\t\tEnter\nSTOP:\t\t\tSpace\nʵ��˼·:\t\tCtrl+I\nʵ�ֹ���:\t\tCtrl+T")
#define SAVE TEXT("�Ƿ񱣴浱ǰ�ļ�?")
#define IDEA TEXT("    �ó�����󲿷���ʹ��Windows API��ʵ�ֵ� û��ʹ�õ��������� ��ʵ�ֹ����� ʹ��Visual Studio Code��Ϊ�༭�� g++��Ϊ������ �õ���һ���html��xml��\
\n    main.cpp�ļ�������Ҫ�Ĵ����ļ� ��ʵ���˳���󲿷ֵ�GUI��Include�ļ����°�����Caculate.hpp Cell.hpp Evolution.h����ͷ�ļ��ֱ����˼���·����ϸ���塢�ݻ��йص���ͺ��� \
��Ӧ����Src�ļ�������Caculate.cpp Cell.cpp Evolution.cpp����Դ�ļ���ʵ����غ������ܡ�Resource�ļ����°�����resource.rc�ļ���main.exe.xml�����ļ� \
ǰ���ǵ���Դ�ű��ļ� ���ﶨ�������еĶԻ��� �˵��� ���ڵ��Ӿ���ʽ �Ͳ��ֵĿ�ݼ� ����ʹ��xml��д ��.rc�ļ�һ�����ڹ涨���ڵ��Ӿ���ʽ��\
Data�ļ����µ�Cell.txt���ڴ�Ŵ浵���ݡ�Build�µ�.o�ļ��Ǳ���������ɵ�Ŀ���ļ���\n\
    �ó����ʵ��˼·�� ���ȶ�����һ��ϸ������ ��������ϸ����λ�� ״̬ �Ƹ�ֵ ��ɫ����Ϣ ����ϸ���Ƹ�Wealth���Ӿ��ϵ�չ�� ʹ��RGB������:����һ����Wealthֵ ����ɫ��RGB(max(0 255-Wealth) min(255 max(0 510-Wealth) min(255 max(0 765-Wealth)) \
�ɴ˿��Կ���һ��ϸ���Ƹ����ֵ��765 ��СֵΪ0 Խ���е�ϸ����ɫԽ�ӽ���ɫ Խƶ���Խ�ӽ���ɫ������ƶ����еı仯������ ��ɫ�ǴӰ�ɫ����ɫ�ٱ�Ϊ��ɫ���������Ի��Ƶİ�ͼ��50x50 ��Ļ�Ų��� �������˴�ֱ��ˮƽ������ \
���ڱ��ֳ������鲿�� ����������� �ұ����ݻ���.���ھ������� û���Ǵ��ڴ�С�仯ʱ�Ĵ��ڲ��� ��˸ɴ�ͨ��������Ӧ����Ϣ�Ѵ������ó��޷����ڴ�С��״̬��\n     \
���ݻ������� ���һ��ϸ���������һ��ϸ������Ӱ�� ��ô����ͨ��������ϸ��֮���һ�����·��������Ӱ�� ������ݻ���ʼǰ ��ʹ��CreateThread����������һ���߳�(�̺߳�������Calcution����) ����̵߳Ĺ�����ʹ�ù�����ȼ��������������ϸ��֮������·��.Ȼ�󽫽�������һ���ڽӾ���ChannelGraph�� \
�����׾��������һ��ȫ�ֱ��� ���ݻ������� ÿ��ϸ�������Է��ʵ�������� �Ӷ����Կ��ٲ�ѯ����������ϸ��ϸ��֮������·�� �Ӷ����Զ�����ϸ������Ӱ�졣������ϸ��֮��Ĺ�ϵ�����������·�� ���г�ŵֵ(��Χ��0-1) �����ŵֵ�����ݻ������ﶯ̬�仯�� Ϊ�˿��Կ��ٷ����� \
������Ȼ�������ڽӾ�������¼��������ϸ���Զ����ĺ����ǻ�ϸ���Ĳ����ݻ� ��������������һ���߳�����ɵ� �̺߳�����Evolution���� ���Ĺ����ǲ��ϵؽ��л�ϸ��֮��Ľ��� �������õ���ÿ0.1�����һ���ݻ� ��ˢ��һ��ҳ�档�ݻ��Ĺ����� �����ѡ���֮һ�Ļ�ϸ����Ϊ�ݻ��ķ����� Ȼ�������Ŀ��Ĺ涨��\
������ϸ������ѡ�������������Ŷ��� ���н��� ���ڽ�����ϸ�� ����Ŀ��\n\
    ֮���Լ�����ݻ������������߳� ����Ϊ����������Ǻ�ʱ�Ĺ��� �᳤ʱ���������̡߳����߳���Ҫ���е�GUI����Ⱦ ͨ�������߳�GUI�Ľ��� ������ʱ�������������̵߳Ŀ�ʼ��ֹͣ\
�ڱ������ʵ�ֹ����� �漰�����̰߳�ȫ ��Ϊ�������߳���ͬʱ�����Ĺ���������ͬʱ������Ķ��ȫ�ֱ�������� ���ʹ��EnterCriticalSection��LeaveCriticalSection�������")

#define TOOL TEXT("g++ -v 13.1.0 (x86_64-posix-seh-rev1)\nVisual Studo Code\nWindows API\nC++11\n")
#define ID_BUTGO 1
#define ID_BUTSTOP 2 
#define ID_BUTERASE 3
#define ID_EDITOR 4
#define ID_TIMER 5
#define ID_PROBAR 6
#define ID_STATICTEXT 7
#define ID_MENU 1000
#define ID_FILE_NEW 1001
#define ID_FILE_SAVE 1002
#define ID_FILE_READ 1003
#define ID_HELP_ATTRIBUTE 1004
#define ID_HELP_ABOUT 1005
#define ID_HELP_ACCELERATORS 1006
#define ID_CODE_IDEA 1007
#define ID_CODE_TOOL 1008
#define IDR_ACC 1009
#define ID_DIALOG_ATTRIBUTE 10010
#define ID_DIALOG_ABOUT 10011
#define ID_DIALOG_ACCELERATORS 1012
#define ID_DIALOG_SAVEORNOT 1013
#define ID_LEFT 1016  
#define ID_RIGHT 1017
#define ID_UP 1018
#define ID_DOWN 1019 
#define ID_SPACE 1020
#define ID_RETURN 1021
#define ID_H_HOME 1022
#define ID_V_HOME 1023
#define ID_H_END 1024
#define ID_V_END 1025
#define WM_DONE (WM_USER+1)