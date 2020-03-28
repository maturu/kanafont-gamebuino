#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char text[256];
    int i = 0, j=0, char_len=3;
    int id[171] = {};

    printf("Enter text in Japanese to convert to a bitmap. >> ");
    scanf("%s", text);

    for (i = 0; text[i] != '\0'; i += char_len)
    {
        if(memcmp(&text[i], "あ", char_len) == 0){id[j] = 1;}
        if(memcmp(&text[i], "い", char_len) == 0){id[j] = 2;}
        if(memcmp(&text[i], "う", char_len) == 0){id[j] = 3;}
        if(memcmp(&text[i], "え", char_len) == 0){id[j] = 4;}
        if(memcmp(&text[i], "お", char_len) == 0){id[j] = 5;}
        if(memcmp(&text[i], "か", char_len) == 0){id[j] = 6;}
        if(memcmp(&text[i], "き", char_len) == 0){id[j] = 7;}
        if(memcmp(&text[i], "く", char_len) == 0){id[j] = 8;}
        if(memcmp(&text[i], "け", char_len) == 0){id[j] = 9;}
        if(memcmp(&text[i], "こ", char_len) == 0){id[j] = 10;}
        if(memcmp(&text[i], "さ", char_len) == 0){id[j] = 11;}
        if(memcmp(&text[i], "し", char_len) == 0){id[j] = 12;}
        if(memcmp(&text[i], "す", char_len) == 0){id[j] = 13;}
        if(memcmp(&text[i], "せ", char_len) == 0){id[j] = 14;}
        if(memcmp(&text[i], "そ", char_len) == 0){id[j] = 15;}
        if(memcmp(&text[i], "た", char_len) == 0){id[j] = 16;}
        if(memcmp(&text[i], "ち", char_len) == 0){id[j] = 17;}
        if(memcmp(&text[i], "つ", char_len) == 0){id[j] = 18;}
        if(memcmp(&text[i], "て", char_len) == 0){id[j] = 19;}
        if(memcmp(&text[i], "と", char_len) == 0){id[j] = 20;}
        if(memcmp(&text[i], "な", char_len) == 0){id[j] = 21;}
        if(memcmp(&text[i], "に", char_len) == 0){id[j] = 22;}
        if(memcmp(&text[i], "ぬ", char_len) == 0){id[j] = 23;}
        if(memcmp(&text[i], "ね", char_len) == 0){id[j] = 24;}
        if(memcmp(&text[i], "の", char_len) == 0){id[j] = 25;}
        if(memcmp(&text[i], "は", char_len) == 0){id[j] = 26;}
        if(memcmp(&text[i], "ひ", char_len) == 0){id[j] = 27;}
        if(memcmp(&text[i], "ふ", char_len) == 0){id[j] = 28;}
        if(memcmp(&text[i], "へ", char_len) == 0){id[j] = 29;}
        if(memcmp(&text[i], "ほ", char_len) == 0){id[j] = 30;}
        if(memcmp(&text[i], "ま", char_len) == 0){id[j] = 31;}
        if(memcmp(&text[i], "み", char_len) == 0){id[j] = 32;}
        if(memcmp(&text[i], "む", char_len) == 0){id[j] = 33;}
        if(memcmp(&text[i], "め", char_len) == 0){id[j] = 34;}
        if(memcmp(&text[i], "も", char_len) == 0){id[j] = 35;}
        if(memcmp(&text[i], "や", char_len) == 0){id[j] = 36;}
        if(memcmp(&text[i], "ゆ", char_len) == 0){id[j] = 37;}
        if(memcmp(&text[i], "よ", char_len) == 0){id[j] = 38;}
        if(memcmp(&text[i], "ら", char_len) == 0){id[j] = 39;}
        if(memcmp(&text[i], "り", char_len) == 0){id[j] = 40;}
        if(memcmp(&text[i], "る", char_len) == 0){id[j] = 41;}
        if(memcmp(&text[i], "れ", char_len) == 0){id[j] = 42;}
        if(memcmp(&text[i], "ろ", char_len) == 0){id[j] = 43;}
        if(memcmp(&text[i], "わ", char_len) == 0){id[j] = 44;}
        if(memcmp(&text[i], "ゐ", char_len) == 0){id[j] = 45;}
        if(memcmp(&text[i], "ゑ", char_len) == 0){id[j] = 46;}
        if(memcmp(&text[i], "を", char_len) == 0){id[j] = 47;}
        if(memcmp(&text[i], "ん", char_len) == 0){id[j] = 48;}
        if(memcmp(&text[i], "が", char_len) == 0){id[j] = 49;}
        if(memcmp(&text[i], "ぎ", char_len) == 0){id[j] = 50;}
        if(memcmp(&text[i], "ぐ", char_len) == 0){id[j] = 51;}
        if(memcmp(&text[i], "げ", char_len) == 0){id[j] = 52;}
        if(memcmp(&text[i], "ご", char_len) == 0){id[j] = 53;}
        if(memcmp(&text[i], "ざ", char_len) == 0){id[j] = 54;}
        if(memcmp(&text[i], "じ", char_len) == 0){id[j] = 55;}
        if(memcmp(&text[i], "ず", char_len) == 0){id[j] = 56;}
        if(memcmp(&text[i], "ぜ", char_len) == 0){id[j] = 57;}
        if(memcmp(&text[i], "ぞ", char_len) == 0){id[j] = 58;}
        if(memcmp(&text[i], "だ", char_len) == 0){id[j] = 59;}
        if(memcmp(&text[i], "ぢ", char_len) == 0){id[j] = 60;}
        if(memcmp(&text[i], "づ", char_len) == 0){id[j] = 61;}
        if(memcmp(&text[i], "で", char_len) == 0){id[j] = 62;}
        if(memcmp(&text[i], "ど", char_len) == 0){id[j] = 63;}
        if(memcmp(&text[i], "ば", char_len) == 0){id[j] = 64;}
        if(memcmp(&text[i], "び", char_len) == 0){id[j] = 65;}
        if(memcmp(&text[i], "ぶ", char_len) == 0){id[j] = 66;}
        if(memcmp(&text[i], "べ", char_len) == 0){id[j] = 67;}
        if(memcmp(&text[i], "ぼ", char_len) == 0){id[j] = 68;}
        if(memcmp(&text[i], "ぱ", char_len) == 0){id[j] = 69;}
        if(memcmp(&text[i], "ぴ", char_len) == 0){id[j] = 70;}
        if(memcmp(&text[i], "ぷ", char_len) == 0){id[j] = 71;}
        if(memcmp(&text[i], "ぺ", char_len) == 0){id[j] = 72;}
        if(memcmp(&text[i], "ぽ", char_len) == 0){id[j] = 73;}
        if(memcmp(&text[i], "ゔ", char_len) == 0){id[j] = 74;}
        if(memcmp(&text[i], "ぁ", char_len) == 0){id[j] = 75;}
        if(memcmp(&text[i], "ぃ", char_len) == 0){id[j] = 76;}
        if(memcmp(&text[i], "ぅ", char_len) == 0){id[j] = 77;}
        if(memcmp(&text[i], "ぇ", char_len) == 0){id[j] = 78;}
        if(memcmp(&text[i], "ぉ", char_len) == 0){id[j] = 79;}
        if(memcmp(&text[i], "っ", char_len) == 0){id[j] = 80;}
        if(memcmp(&text[i], "ゃ", char_len) == 0){id[j] = 81;}
        if(memcmp(&text[i], "ゅ", char_len) == 0){id[j] = 82;}
        if(memcmp(&text[i], "ょ", char_len) == 0){id[j] = 83;}
        if(memcmp(&text[i], "ア", char_len) == 0){id[j] = 84;}
        if(memcmp(&text[i], "イ", char_len) == 0){id[j] = 85;}
        if(memcmp(&text[i], "ウ", char_len) == 0){id[j] = 86;}
        if(memcmp(&text[i], "エ", char_len) == 0){id[j] = 87;}
        if(memcmp(&text[i], "オ", char_len) == 0){id[j] = 88;}
        if(memcmp(&text[i], "カ", char_len) == 0){id[j] = 89;}
        if(memcmp(&text[i], "キ", char_len) == 0){id[j] = 90;}
        if(memcmp(&text[i], "ク", char_len) == 0){id[j] = 91;}
        if(memcmp(&text[i], "ケ", char_len) == 0){id[j] = 92;}
        if(memcmp(&text[i], "コ", char_len) == 0){id[j] = 93;}
        if(memcmp(&text[i], "サ", char_len) == 0){id[j] = 94;}
        if(memcmp(&text[i], "シ", char_len) == 0){id[j] = 95;}
        if(memcmp(&text[i], "ス", char_len) == 0){id[j] = 96;}
        if(memcmp(&text[i], "セ", char_len) == 0){id[j] = 97;}
        if(memcmp(&text[i], "ソ", char_len) == 0){id[j] = 98;}
        if(memcmp(&text[i], "タ", char_len) == 0){id[j] = 99;}
        if(memcmp(&text[i], "チ", char_len) == 0){id[j] = 100;}
        if(memcmp(&text[i], "ツ", char_len) == 0){id[j] = 101;}
        if(memcmp(&text[i], "テ", char_len) == 0){id[j] = 102;}
        if(memcmp(&text[i], "ト", char_len) == 0){id[j] = 103;}
        if(memcmp(&text[i], "ナ", char_len) == 0){id[j] = 104;}
        if(memcmp(&text[i], "ニ", char_len) == 0){id[j] = 105;}
        if(memcmp(&text[i], "ヌ", char_len) == 0){id[j] = 106;}
        if(memcmp(&text[i], "ネ", char_len) == 0){id[j] = 107;}
        if(memcmp(&text[i], "ノ", char_len) == 0){id[j] = 108;}
        if(memcmp(&text[i], "ハ", char_len) == 0){id[j] = 109;}
        if(memcmp(&text[i], "ヒ", char_len) == 0){id[j] = 110;}
        if(memcmp(&text[i], "フ", char_len) == 0){id[j] = 111;}
        if(memcmp(&text[i], "ヘ", char_len) == 0){id[j] = 112;}
        if(memcmp(&text[i], "ホ", char_len) == 0){id[j] = 113;}
        if(memcmp(&text[i], "マ", char_len) == 0){id[j] = 114;}
        if(memcmp(&text[i], "ミ", char_len) == 0){id[j] = 115;}
        if(memcmp(&text[i], "ム", char_len) == 0){id[j] = 116;}
        if(memcmp(&text[i], "メ", char_len) == 0){id[j] = 117;}
        if(memcmp(&text[i], "モ", char_len) == 0){id[j] = 118;}
        if(memcmp(&text[i], "ヤ", char_len) == 0){id[j] = 119;}
        if(memcmp(&text[i], "ユ", char_len) == 0){id[j] = 120;}
        if(memcmp(&text[i], "ヨ", char_len) == 0){id[j] = 121;}
        if(memcmp(&text[i], "ラ", char_len) == 0){id[j] = 122;}
        if(memcmp(&text[i], "リ", char_len) == 0){id[j] = 123;}
        if(memcmp(&text[i], "ル", char_len) == 0){id[j] = 124;}
        if(memcmp(&text[i], "レ", char_len) == 0){id[j] = 125;}
        if(memcmp(&text[i], "ロ", char_len) == 0){id[j] = 126;}
        if(memcmp(&text[i], "ワ", char_len) == 0){id[j] = 127;}
        if(memcmp(&text[i], "ヰ", char_len) == 0){id[j] = 128;}
        if(memcmp(&text[i], "ヱ", char_len) == 0){id[j] = 129;}
        if(memcmp(&text[i], "ヲ", char_len) == 0){id[j] = 130;}
        if(memcmp(&text[i], "ン", char_len) == 0){id[j] = 131;}
        if(memcmp(&text[i], "ガ", char_len) == 0){id[j] = 132;}
        if(memcmp(&text[i], "ギ", char_len) == 0){id[j] = 133;}
        if(memcmp(&text[i], "グ", char_len) == 0){id[j] = 134;}
        if(memcmp(&text[i], "ゲ", char_len) == 0){id[j] = 135;}
        if(memcmp(&text[i], "ゴ", char_len) == 0){id[j] = 136;}
        if(memcmp(&text[i], "ザ", char_len) == 0){id[j] = 137;}
        if(memcmp(&text[i], "ジ", char_len) == 0){id[j] = 138;}
        if(memcmp(&text[i], "ズ", char_len) == 0){id[j] = 139;}
        if(memcmp(&text[i], "ゼ", char_len) == 0){id[j] = 140;}
        if(memcmp(&text[i], "ゾ", char_len) == 0){id[j] = 141;}
        if(memcmp(&text[i], "ダ", char_len) == 0){id[j] = 142;}
        if(memcmp(&text[i], "ヂ", char_len) == 0){id[j] = 143;}
        if(memcmp(&text[i], "ヅ", char_len) == 0){id[j] = 144;}
        if(memcmp(&text[i], "デ", char_len) == 0){id[j] = 145;}
        if(memcmp(&text[i], "ド", char_len) == 0){id[j] = 146;}
        if(memcmp(&text[i], "バ", char_len) == 0){id[j] = 147;}
        if(memcmp(&text[i], "ビ", char_len) == 0){id[j] = 148;}
        if(memcmp(&text[i], "ブ", char_len) == 0){id[j] = 149;}
        if(memcmp(&text[i], "ベ", char_len) == 0){id[j] = 150;}
        if(memcmp(&text[i], "ボ", char_len) == 0){id[j] = 151;}
        if(memcmp(&text[i], "パ", char_len) == 0){id[j] = 152;}
        if(memcmp(&text[i], "ピ", char_len) == 0){id[j] = 153;}
        if(memcmp(&text[i], "プ", char_len) == 0){id[j] = 154;}
        if(memcmp(&text[i], "ペ", char_len) == 0){id[j] = 155;}
        if(memcmp(&text[i], "ポ", char_len) == 0){id[j] = 156;}
        if(memcmp(&text[i], "ヷ", char_len) == 0){id[j] = 157;}
        if(memcmp(&text[i], "ヸ", char_len) == 0){id[j] = 158;}
        if(memcmp(&text[i], "ヴ", char_len) == 0){id[j] = 159;}
        if(memcmp(&text[i], "ヹ", char_len) == 0){id[j] = 160;}
        if(memcmp(&text[i], "ヺ", char_len) == 0){id[j] = 161;}
        if(memcmp(&text[i], "ァ", char_len) == 0){id[j] = 162;}
        if(memcmp(&text[i], "ィ", char_len) == 0){id[j] = 163;}
        if(memcmp(&text[i], "ゥ", char_len) == 0){id[j] = 164;}
        if(memcmp(&text[i], "ェ", char_len) == 0){id[j] = 165;}
        if(memcmp(&text[i], "ォ", char_len) == 0){id[j] = 166;}
        if(memcmp(&text[i], "ッ", char_len) == 0){id[j] = 167;}
        if(memcmp(&text[i], "ャ", char_len) == 0){id[j] = 168;}
        if(memcmp(&text[i], "ュ", char_len) == 0){id[j] = 169;}
        if(memcmp(&text[i], "ョ", char_len) == 0){id[j] = 170;}
        if(memcmp(&text[i], "ー", char_len) == 0){id[j] = 171;}
        if(memcmp(&text[i], "、", char_len) == 0){id[j] = 172;}
        if(memcmp(&text[i], "。", char_len) == 0){id[j] = 173;}
        j++;
    }

    printf("const int words[%d] = {", strlen(text)/3);

    for(i = 0; i < strlen(text)/3; i++){
        if(i>0) printf(", ");
        printf("%d", id[i]);
    }
    printf("};\n");

    return 0;
}
