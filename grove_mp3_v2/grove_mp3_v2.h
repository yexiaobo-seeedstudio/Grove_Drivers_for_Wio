/*
 * grove_mp3_v2.h
 *
 * Copyright (c) 2012 seeed technology inc.
 * Website    : www.seeed.cc
 * Author     : Jack Shao
 *
 * The MIT License (MIT)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */


#ifndef __GROVE_MP3V2_H__
#define __GROVE_MP3V2_H__

#include "suli2.h"

//GROVE_NAME        "Grove - MP3 v2.0"
//SKU               107020008
//IF_TYPE           UART
//IMAGE_URL         http://www.seeedstudio.com/depot/bmz_cache/e/e0d5fd4cbcface290dc089c29adbf98b.image.530x397.jpg


class GroveMP3V2
{
public:

    GroveMP3V2(int pintx, int pinrx);

    /**
     * Play a music specified by its index.
     * 
     * @param index - 1~n
     * 
     * @return bool 
     */
    bool write_index_to_play(uint8_t index);
    
    bool write_pause();
    
    bool write_resume();
    
    bool write_next();
    
    bool write_prev();
    
    /**
     * Loop playing all the musics in the SD card.
     * 
     * 
     * @return bool 
     */
    bool write_loop_all();
    
    /**
     * Tune the volume.
     * 
     * @param volume - 0~31
     * 
     * @return bool 
     */
    bool write_volume(uint8_t volume);
    
    
    
private:

    UART_T *uart;
    
    void _select_storage();
    
    void _drain_uart();
    

};

#endif
