extern "C" {
    #include <tinyPTC/src/tinyptc.h>
}
#include <cstdint>
#include <iostream>
#include <vector>


int main(){
int  width = 480;
int height = 272;
    uint32_t screen[480 * 272];
    std::vector<uint32_t> vector_screen;

    ptc_open("Juego",width,height);
    while(true){
    for(uint32_t i=0;i < (480*272);++i){
            screen[i]=0x00999999;

        }
        
        ptc_update(screen);
    }
    ptc_close();

    std::cout<< "my first program gamer " << std::endl;
return 0;
}
