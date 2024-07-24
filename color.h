#ifndef _COLOR_H_
#define _COLOR_H_

// https://blog.csdn.net/MoDa_Li/article/details/82156888
#define C_NONE                  "\e[0m"           //清除颜色，即之后的打印为正常输出，之前的不受影响
#define C_BLACK                 "\e[0;30m"         //深黑
#define C_L_BLACK             "\e[1;30m"            //亮黑，偏灰褐
#define C_RED                     "\e[0;31m"      //深红，暗红
#define C_L_RED                 "\e[1;31m"        //鲜红
#define C_GREEN                "\e[0;32m"         //深绿，暗绿
#define C_L_GREEN            "\e[1;32m"           //鲜绿
#define C_BROWN               "\e[0;33m"          //深黄，暗黄
#define C_YELLOW              "\e[1;33m"          //鲜黄
#define C_BLUE                    "\e[0;34m"      //深蓝，暗蓝
#define C_L_BLUE                "\e[1;34m"        //亮蓝，偏白灰
#define C_PURPLE               "\e[0;35m"         //深粉，暗粉，偏暗紫
#define C_L_PURPLE           "\e[1;35m"           //亮粉，偏白灰
#define C_CYAN                   "\e[0;36m"       //暗青色
#define C_L_CYAN               "\e[1;36m"         //鲜亮青色
#define C_GRAY                   "\e[0;37m"       //灰色
#define C_WHITE                  "\e[1;37m"       //白色，字体粗一点，比正常大，比bold小
#define C_BOLD                    "\e[1m"         //白色，粗体
#define C_UNDERLINE         "\e[4m"               //下划线，白色，正常大小
#define C_BLINK                   "\e[5m"         //闪烁，白色，正常大小
#define C_REVERSE            "\e[7m"              //反转，即字体背景为白色，字体为黑色
#define C_HIDE                     "\e[8m"        //隐藏
#define C_CLEAR                  "\e[2J"          //清除
#define C_CLRLINE               "\r\e[K"          //清除行

#endif
