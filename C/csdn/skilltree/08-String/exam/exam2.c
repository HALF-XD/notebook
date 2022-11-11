/*
比较词序列，并替换其中的指定词，最后将所有词拼接形成一个新的句子。程序的输出如下：
替换前： 非淡泊无以明志！
替换后： 非宁静无以致远！
*/ 

#include <stdio.h>
#include <string.h>
#define SENT_LEN 5
#define WORDS_NUM 2
#define STR_LEN 101

int main(int argc, char** argv)
{
    int i, j;
    
    char words[SENT_LEN][STR_LEN] = {"非", "淡泊", "无以", "明志", "！"};
    char source[WORDS_NUM][STR_LEN] = {"淡泊", "明志"};
    char target[WORDS_NUM][STR_LEN] = {"宁静", "致远"};
    const char sentence_before[STR_LEN];
    const char sentence_after[STR_LEN];
    
    // error 1:
    // char* words[SENT_LEN] = {"非", "淡泊", "无以", "明志", "！"};
    // char *str = "abcd"等价于 const char *str = "abcd"，指针数组存放在静态存储区，即常量区，该区只许读不许写。


    for (i = 0; i < SENT_LEN; ++i)
    {
        strcat(sentence_before, words[i]);
        for (j = 0; j < WORDS_NUM; ++j)
            if (strcmp(words[i], source[j]) == 0)
            // if (strcmp(words[i], source[j]) >= 0)
                strcpy(words[i], target[j]);
        strcat(sentence_after, words[i]);
    }
    
    puts("替换前：");
    puts(sentence_before);
    puts("替换后：");
    puts(sentence_after);

    return 0;
}






