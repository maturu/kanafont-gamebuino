# KanaFont: A japanese font for the game of Gamebuino
<p>
  <a href="https://gamebuino.com/"><img src="https://img.shields.io/badge/env-Gamebuino-blue"></a>
  <a href="http://www.musashinodenpa.com/arduino/ref/"><img src="https://img.shields.io/badge/code-C/C++-green"></a>
  <a href="http://legacy.gamebuino.com/wiki/index.php?title=Main_Page"><img src="https://img.shields.io/badge/docs-wiki-blue"></a>
  <a href="https://github.com/maturu/kanafont-gamebuino/blob/master/LICENSE"><img src="https://img.shields.io/badge/license-MIT-green"></a>
</p>

KanaFont is a C/C++ based japanese font generation system for the game of Gamebuino. 
It provides an easy convert a japanese text array into a bitmap index array for the created japanese bitmap list, "Bitmap.h".

## Installation
To install KanaFont, use `git`

```
$ git clone https://github.com/maturu/kanafont-gamebuino.git
```

## Usage
First, generate a bitmap index array
```
$ gcc hashConverter.c

$ ./a.out
Enter text in Japanese to convert to a bitmap. >> ほげふが
const int words[4] = {30, 52, 28, 49};
```
Second, use it in Arduino IDE
```
#include "Bitmaps.h"
```
For example
```
void write(const int*, int, int, int);
...
void write(const int *text, int text_len, int w = 0, int h = 0){
  int value;
  for(value=0; value < text_len; value++){
    // chars is variable in "Bitmap.h"
    gb.display.drawBitmap(w, h, chars[text[value]-1]);
    w += 7;
    if(w >= 84){
      w = 0;
      h += 7;
    }
  }
}

const int words[4] = {30, 52, 28, 49};
void loop(){
  while(1){
    if(gb.update()){
      int w_len = sizeof(word)/sizeof(int);
      // w is your any width
      // h is your any height
      write(word, w_len, w, h);
    }
  }
}
```

## License
MIT License (see `LICENSE` file).
