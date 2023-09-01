/* Copyright 2023 Dual Tachyon
 * https://github.com/DualTachyon
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 *     Unless required by applicable law or agreed to in writing, software
 *     distributed under the License is distributed on an "AS IS" BASIS,
 *     WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *     See the License for the specific language governing permissions and
 *     limitations under the License.
 */

#include "font.h"

const uint8_t gFontBig[95][16] = {
    //  !"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[]^_`abcdefghijklmnopqrstuvwxyz{|}~
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /*" ",0*/
    {0x00, 0x00, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x19, 0x00, 0x00, 0x00, 0x00}, /*"!",1*/
    {0x00, 0x1C, 0x1C, 0x00, 0x00, 0x1C, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /*""",2*/
    {0x60, 0xFC, 0x30, 0x30, 0x30, 0xFC, 0x18, 0x00, 0x0C, 0x1F, 0x06, 0x06, 0x06, 0x1F, 0x03, 0x00}, /*"#",3*/
    {0x30, 0x78, 0xD8, 0xFC, 0x98, 0x38, 0x30, 0x00, 0x06, 0x0E, 0x0C, 0x1F, 0x0D, 0x0F, 0x06, 0x00}, /*"$",4*/
    {0x38, 0x6C, 0x38, 0x80, 0xE0, 0x38, 0x0C, 0x00, 0x30, 0x1C, 0x07, 0x01, 0x1C, 0x36, 0x1C, 0x00}, /*"%",5*/
    {0x00, 0x18, 0xFC, 0xE4, 0xBC, 0x18, 0x00, 0x00, 0x06, 0x0F, 0x19, 0x19, 0x0F, 0x1E, 0x13, 0x00}, /*"&",6*/
    {0x00, 0x20, 0x3C, 0x1C, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"'",7*/
    {0x00, 0x00, 0xC0, 0xF0, 0xF8, 0x1C, 0x0C, 0x00, 0x00, 0x00, 0x01, 0x07, 0x0F, 0x1C, 0x18, 0x00}, /*"(",8*/
    {0x00, 0x0C, 0x1C, 0xF8, 0xF0, 0xC0, 0x00, 0x00, 0x00, 0x18, 0x1C, 0x0F, 0x07, 0x01, 0x00, 0x00}, /*")",9*/
    {0x80, 0xB0, 0xF0, 0xC0, 0xF0, 0xB0, 0x80, 0x00, 0x01, 0x0D, 0x0F, 0x03, 0x0F, 0x0D, 0x01, 0x00}, /*"*",10*/
    {0x80, 0x80, 0xF0, 0xF0, 0x80, 0x80, 0x00, 0x00, 0x01, 0x01, 0x0F, 0x0F, 0x01, 0x01, 0x00, 0x00}, /*"+",11*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x3C, 0x1C, 0x0C, 0x00, 0x00, 0x00}, /*",",12*/
    {0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00}, /*"-",13*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x00}, /*".",14*/
    {0x00, 0x00, 0xC0, 0xF0, 0x3C, 0x0C, 0x00, 0x00, 0x1C, 0x1F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"/",15*/
    {0xF8, 0xFC, 0x8C, 0xCC, 0x6C, 0xFC, 0xF8, 0x00, 0x0F, 0x1F, 0x19, 0x18, 0x18, 0x1F, 0x0F, 0x00}, /*"0",16*/
    {0x20, 0x30, 0xF8, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x1F, 0x1F, 0x18, 0x18, 0x00, 0x00}, /*"1",17*/
    {0x38, 0x3C, 0x0C, 0x8C, 0xCC, 0xFC, 0x78, 0x00, 0x1C, 0x1E, 0x1F, 0x1B, 0x19, 0x18, 0x18, 0x00}, /*"2",18*/
    {0x18, 0x1C, 0xCC, 0xCC, 0xCC, 0xFC, 0x38, 0x00, 0x0C, 0x1C, 0x18, 0x18, 0x18, 0x1F, 0x0F, 0x00}, /*"3",19*/
    {0x80, 0xC0, 0x60, 0x30, 0xF8, 0xFC, 0x00, 0x00, 0x03, 0x03, 0x03, 0x1B, 0x1F, 0x1F, 0x1B, 0x00}, /*"4",20*/
    {0xFC, 0xFC, 0xCC, 0xCC, 0xCC, 0xCC, 0x8C, 0x00, 0x0C, 0x1C, 0x18, 0x18, 0x18, 0x1F, 0x0F, 0x00}, /*"5",21*/
    {0xF0, 0xF8, 0xDC, 0xCC, 0xC4, 0xC0, 0x80, 0x00, 0x0F, 0x1F, 0x18, 0x18, 0x18, 0x1F, 0x0F, 0x00}, /*"6",22*/
    {0x1C, 0x1C, 0x0C, 0x0C, 0xCC, 0xFC, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x01, 0x00, 0x00}, /*"7",23*/
    {0x38, 0xFC, 0xCC, 0xCC, 0xCC, 0xFC, 0x38, 0x00, 0x0F, 0x1F, 0x18, 0x18, 0x18, 0x1F, 0x0F, 0x00}, /*"8",24*/
    {0xF8, 0xFC, 0x8C, 0x8C, 0x8C, 0xFC, 0xF8, 0x00, 0x00, 0x19, 0x19, 0x19, 0x19, 0x1F, 0x0F, 0x00}, /*"9",25*/
    {0x00, 0x00, 0x38, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x0E, 0x00, 0x00, 0x00, 0x00}, /*":",26*/
    {0x00, 0x00, 0x38, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x0F, 0x00, 0x00, 0x00, 0x00}, /*";",27*/
    {0x80, 0xC0, 0x60, 0x30, 0x18, 0x0C, 0x04, 0x00, 0x00, 0x01, 0x03, 0x06, 0x0C, 0x18, 0x10, 0x00}, /*"<",28*/
    {0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x00, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x00}, /*"=",29*/
    {0x04, 0x0C, 0x18, 0x30, 0x60, 0xC0, 0x80, 0x00, 0x10, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x00, 0x00}, /*">",30*/
    {0x00, 0x38, 0x3C, 0x0C, 0x8C, 0xFC, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x1B, 0x01, 0x00, 0x00}, /*"?",31*/
    {0xF8, 0xFC, 0x0C, 0xEC, 0xEC, 0xFC, 0xF8, 0x00, 0x0F, 0x1F, 0x18, 0x1B, 0x03, 0x03, 0x03, 0x00}, /*"@",32*/
    {0xF0, 0xF8, 0x1C, 0x0C, 0x1C, 0xF8, 0xF0, 0x00, 0x1F, 0x1F, 0x03, 0x03, 0x03, 0x1F, 0x1F, 0x00}, /*"A",33*/
    {0x0C, 0xFC, 0xFC, 0xCC, 0xCC, 0xFC, 0x38, 0x00, 0x18, 0x1F, 0x1F, 0x18, 0x18, 0x1F, 0x0F, 0x00}, /*"B",34*/
    {0xF8, 0xFC, 0x0C, 0x0C, 0x0C, 0x3C, 0x38, 0x00, 0x0F, 0x1F, 0x18, 0x18, 0x18, 0x1E, 0x0E, 0x00}, /*"C",35*/
    {0x0C, 0xFC, 0xFC, 0x0C, 0x1C, 0xF8, 0xF0, 0x00, 0x18, 0x1F, 0x1F, 0x18, 0x1C, 0x0F, 0x07, 0x00}, /*"D",36*/
    {0x0C, 0xFC, 0xFC, 0xCC, 0xCC, 0x1C, 0x1C, 0x00, 0x18, 0x1F, 0x1F, 0x18, 0x18, 0x1C, 0x1C, 0x00}, /*"E",37*/
    {0x0C, 0xFC, 0xFC, 0xCC, 0xCC, 0x1C, 0x1C, 0x00, 0x18, 0x1F, 0x1F, 0x18, 0x00, 0x00, 0x00, 0x00}, /*"F",38*/
    {0xF0, 0xF8, 0x1C, 0x0C, 0x8C, 0x9C, 0x98, 0x00, 0x07, 0x0F, 0x1C, 0x18, 0x18, 0x1F, 0x1F, 0x00}, /*"G",39*/
    {0xFC, 0xFC, 0xC0, 0xC0, 0xC0, 0xFC, 0xFC, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00}, /*"H",40*/
    {0x00, 0x00, 0x0C, 0xFC, 0xFC, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x18, 0x1F, 0x1F, 0x18, 0x00, 0x00}, /*"I",41*/
    {0x00, 0x00, 0x00, 0x0C, 0xFC, 0xFC, 0x0C, 0x00, 0x0E, 0x1E, 0x18, 0x18, 0x1F, 0x0F, 0x00, 0x00}, /*"J",42*/
    {0xFC, 0xFC, 0xE0, 0x70, 0x38, 0x1C, 0x0C, 0x00, 0x1F, 0x1F, 0x03, 0x07, 0x0E, 0x1C, 0x18, 0x00}, /*"K",43*/
    {0x0C, 0xFC, 0xFC, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x18, 0x1F, 0x1F, 0x18, 0x18, 0x1C, 0x1E, 0x00}, /*"L",44*/
    {0xFC, 0xF8, 0xE0, 0xC0, 0xE0, 0xF8, 0xFC, 0x00, 0x1F, 0x1F, 0x00, 0x01, 0x00, 0x1F, 0x1F, 0x00}, /*"M",45*/
    {0xFC, 0xFC, 0xF0, 0xC0, 0x80, 0xFC, 0xFC, 0x00, 0x1F, 0x1F, 0x01, 0x03, 0x0F, 0x1F, 0x1F, 0x00}, /*"N",46*/
    {0xF0, 0xF8, 0x1C, 0x0C, 0x1C, 0xF8, 0xF0, 0x00, 0x07, 0x0F, 0x1C, 0x18, 0x1C, 0x0F, 0x07, 0x00}, /*"O",47*/
    {0xFC, 0xFC, 0xCC, 0xCC, 0xCC, 0xFC, 0x78, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"P",48*/
    {0xF0, 0xF8, 0x1C, 0x0C, 0x1C, 0xF8, 0xF0, 0x00, 0x07, 0x0F, 0x1E, 0x3C, 0x3C, 0x2F, 0x07, 0x00}, /*"Q",49*/
    {0xFC, 0xFC, 0xCC, 0xCC, 0xCC, 0xFC, 0x78, 0x00, 0x1F, 0x1F, 0x03, 0x07, 0x0E, 0x1C, 0x18, 0x00}, /*"R",50*/
    {0x78, 0xFC, 0xCC, 0xCC, 0x8C, 0x9C, 0x18, 0x00, 0x0C, 0x1C, 0x18, 0x19, 0x19, 0x1F, 0x0F, 0x00}, /*"S",51*/
    {0x1C, 0x0C, 0xFC, 0xFC, 0x0C, 0x1C, 0x00, 0x00, 0x00, 0x18, 0x1F, 0x1F, 0x18, 0x00, 0x00, 0x00}, /*"T",52*/
    {0xFC, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0xFC, 0x00, 0x0F, 0x1F, 0x18, 0x18, 0x18, 0x1F, 0x0F, 0x00}, /*"U",53*/
    {0xFC, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0xFC, 0x00, 0x03, 0x07, 0x0E, 0x1C, 0x0E, 0x07, 0x03, 0x00}, /*"V",54*/
    {0xFC, 0xFC, 0x00, 0xE0, 0x00, 0xFC, 0xFC, 0x00, 0x07, 0x1F, 0x1E, 0x0F, 0x1E, 0x1F, 0x07, 0x00}, /*"W",55*/
    {0x1C, 0x7C, 0xF0, 0xC0, 0xF0, 0x7C, 0x1C, 0x00, 0x1C, 0x1F, 0x07, 0x01, 0x07, 0x1F, 0x1C, 0x00}, /*"X",56*/
    {0xFC, 0xFC, 0x80, 0x80, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x19, 0x1F, 0x1F, 0x19, 0x00, 0x00, 0x00}, /*"Y",57*/
    {0x0C, 0x0C, 0x8C, 0xCC, 0xEC, 0x7C, 0x3C, 0x00, 0x1E, 0x1F, 0x1B, 0x19, 0x18, 0x18, 0x18, 0x00}, /*"Z",58*/
    {0x00, 0x00, 0x00, 0xFC, 0xFC, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x10, 0x10, 0x00}, /*"[",59*/
    {0x04, 0x04, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00}, /*"]",60*/
    {0x00, 0x10, 0x18, 0x0C, 0x18, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"^",61*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0}, /*"_",62*/
    {0x00, 0x00, 0x00, 0x0C, 0x1C, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"`",63*/
    {0x00, 0x60, 0x60, 0x60, 0xE0, 0xC0, 0x00, 0x00, 0x0E, 0x1F, 0x1B, 0x1B, 0x0F, 0x1F, 0x18, 0x00}, /*"a",64*/
    {0x0C, 0xFC, 0xFC, 0x60, 0x60, 0xC0, 0x80, 0x00, 0x18, 0x1F, 0x1F, 0x18, 0x18, 0x1F, 0x0F, 0x00}, /*"b",65*/
    {0xC0, 0xE0, 0x60, 0x60, 0x60, 0xE0, 0xC0, 0x00, 0x0F, 0x1F, 0x18, 0x18, 0x18, 0x1C, 0x0C, 0x00}, /*"c",66*/
    {0x80, 0xC0, 0x60, 0x64, 0xFC, 0xFC, 0x00, 0x00, 0x0F, 0x1F, 0x18, 0x18, 0x0F, 0x1F, 0x18, 0x00}, /*"d",67*/
    {0xC0, 0xE0, 0x60, 0x60, 0x60, 0xE0, 0xC0, 0x00, 0x0F, 0x1F, 0x1B, 0x1B, 0x1B, 0x1B, 0x0B, 0x00}, /*"e",68*/
    {0xC0, 0xC0, 0xF8, 0xFC, 0xCC, 0xDC, 0x18, 0x00, 0x00, 0x18, 0x1F, 0x1F, 0x18, 0x00, 0x00, 0x00}, /*"f",69*/
    {0xC0, 0xE0, 0x60, 0x60, 0x60, 0xC0, 0xE0, 0x00, 0x03, 0x37, 0x36, 0x36, 0x36, 0x3F, 0x1F, 0x00}, /*"g",70*/
    {0x04, 0xFC, 0xFC, 0x60, 0x60, 0xC0, 0x80, 0x00, 0x10, 0x1F, 0x1F, 0x00, 0x00, 0x1F, 0x1F, 0x00}, /*"h",71*/
    {0x00, 0xC0, 0xD8, 0xD8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x1F, 0x1F, 0x18, 0x00, 0x00, 0x00}, /*"i",72*/
    {0x00, 0x00, 0x00, 0xC0, 0xD8, 0xD8, 0x00, 0x00, 0x1C, 0x3C, 0x30, 0x30, 0x3F, 0x1F, 0x00, 0x00}, /*"j",73*/
    {0xFC, 0xFC, 0x80, 0xC0, 0xE0, 0x60, 0x20, 0x00, 0x1F, 0x1F, 0x07, 0x0F, 0x1C, 0x18, 0x10, 0x00}, /*"k",74*/
    {0x00, 0x0C, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x1F, 0x1F, 0x18, 0x00, 0x00, 0x00}, /*"l",75*/
    {0xE0, 0xC0, 0xE0, 0xC0, 0xE0, 0xE0, 0xC0, 0x00, 0x1F, 0x1F, 0x00, 0x0F, 0x00, 0x1F, 0x1F, 0x00}, /*"m",76*/
    {0x60, 0xE0, 0xC0, 0x60, 0x60, 0xE0, 0xC0, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x1F, 0x1F, 0x00}, /*"n",77*/
    {0xC0, 0xE0, 0x60, 0x60, 0x60, 0xE0, 0xC0, 0x00, 0x0F, 0x1F, 0x18, 0x18, 0x18, 0x1F, 0x0F, 0x00}, /*"o",78*/
    {0x60, 0xE0, 0xE0, 0x60, 0x60, 0xE0, 0xC0, 0x00, 0x30, 0x3F, 0x3F, 0x36, 0x06, 0x07, 0x03, 0x00}, /*"p",79*/
    {0xC0, 0xE0, 0x60, 0x60, 0xC0, 0xE0, 0x60, 0x00, 0x03, 0x07, 0x06, 0x36, 0x3F, 0x3F, 0x30, 0x00}, /*"q",80*/
    {0x60, 0xE0, 0xC0, 0xE0, 0x60, 0xE0, 0xC0, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x01, 0x01, 0x00}, /*"r",81*/
    {0xC0, 0xE0, 0xE0, 0x60, 0x60, 0x60, 0xC0, 0x00, 0x0C, 0x1D, 0x19, 0x1B, 0x1F, 0x1E, 0x0C, 0x00}, /*"s",82*/
    {0x60, 0xFC, 0xFC, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x18, 0x18, 0x1E, 0x0E, 0x00}, /*"t",83*/
    {0xE0, 0xE0, 0x00, 0x00, 0xE0, 0xE0, 0x00, 0x00, 0x0F, 0x1F, 0x18, 0x18, 0x0F, 0x1F, 0x18, 0x00}, /*"u",84*/
    {0xE0, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0x00, 0x03, 0x07, 0x0E, 0x1C, 0x0E, 0x07, 0x03, 0x00}, /*"v",85*/
    {0xE0, 0xE0, 0x00, 0x80, 0x00, 0xE0, 0xE0, 0x00, 0x0F, 0x1F, 0x1C, 0x0F, 0x1C, 0x1F, 0x0F, 0x00}, /*"w",86*/
    {0x60, 0xE0, 0xC0, 0x80, 0xC0, 0xE0, 0x60, 0x00, 0x18, 0x1C, 0x0F, 0x07, 0x0F, 0x1C, 0x18, 0x00}, /*"x",87*/
    {0x60, 0xE0, 0xE0, 0x00, 0x00, 0xE0, 0xE0, 0x00, 0x00, 0x33, 0x37, 0x36, 0x36, 0x3F, 0x1F, 0x00}, /*"y",88*/
    {0x60, 0x60, 0x60, 0x60, 0xE0, 0xE0, 0xE0, 0x00, 0x18, 0x1C, 0x1E, 0x1F, 0x1B, 0x19, 0x18, 0x00}, /*"z",89*/
    {0x00, 0x00, 0x00, 0xC0, 0xF8, 0x3C, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x10, 0x00}, /*"{",90*/
    {0x00, 0x00, 0x7C, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00}, /*"|",91*/
    {0x04, 0x3C, 0xF8, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x10, 0x1F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"}",92*/
    {0x00, 0x18, 0x0C, 0x18, 0x30, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"~",93*/
    {0x10, 0x18, 0x08, 0x18, 0x10, 0x18, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}};

//{
// 	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
// 	{ 0x00, 0x00, 0x70, 0xF8, 0xF8, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x1B, 0x00, 0x00, 0x00 },
// 	{ 0x00, 0x1E, 0x3E, 0x00, 0x00, 0x3E, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
// 	{ 0x40, 0xF0, 0xF0, 0x40, 0xF0, 0xF0, 0x40, 0x00, 0x04, 0x1F, 0x1F, 0x04, 0x1F, 0x1F, 0x04, 0x00 },
// 	{ 0x70, 0xF8, 0x88, 0x8F, 0x8F, 0x98, 0x30, 0x00, 0x06, 0x0C, 0x08, 0x38, 0x38, 0x0F, 0x07, 0x00 },
// 	{ 0x60, 0x60, 0x00, 0x00, 0x80, 0xC0, 0x60, 0x00, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x18, 0x18, 0x00 },
// 	{ 0x00, 0xB0, 0xF8, 0xC8, 0x78, 0xB0, 0x80, 0x00, 0x0F, 0x1F, 0x10, 0x11, 0x0F, 0x1F, 0x10, 0x00 },
// 	{ 0x00, 0x20, 0x3E, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
// 	{ 0x00, 0x00, 0xE0, 0xF0, 0x18, 0x08, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0F, 0x18, 0x10, 0x00, 0x00 },
// 	{ 0x00, 0x00, 0x08, 0x18, 0xF0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x10, 0x18, 0x0F, 0x07, 0x00, 0x00 },
// 	{ 0x00, 0x40, 0xC0, 0x80, 0x80, 0xC0, 0x40, 0x00, 0x01, 0x05, 0x07, 0x03, 0x03, 0x07, 0x05, 0x01 },
// 	{ 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x07, 0x07, 0x01, 0x01, 0x00 },
// 	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x3C, 0x1C, 0x00, 0x00, 0x00 },
// 	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00 },
// 	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00 },
// 	{ 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0x60, 0x00, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00 },
// 	{ 0xF0, 0xF8, 0x08, 0x88, 0x48, 0xF8, 0xF0, 0x00, 0x0F, 0x1F, 0x12, 0x11, 0x10, 0x1F, 0x0F, 0x00 },
// 	{ 0x00, 0x20, 0x30, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x1F, 0x1F, 0x10, 0x10, 0x00 },
// 	{ 0x10, 0x18, 0x08, 0x88, 0xC8, 0x78, 0x30, 0x00, 0x1C, 0x1E, 0x13, 0x11, 0x10, 0x18, 0x18, 0x00 },
// 	{ 0x10, 0x18, 0x88, 0x88, 0x88, 0xF8, 0x70, 0x00, 0x08, 0x18, 0x10, 0x10, 0x10, 0x1F, 0x0F, 0x00 },
// 	{ 0x80, 0xC0, 0x60, 0x30, 0xF8, 0xF8, 0x00, 0x00, 0x01, 0x01, 0x01, 0x11, 0x1F, 0x1F, 0x11, 0x00 },
// 	{ 0xF8, 0xF8, 0x88, 0x88, 0x88, 0x88, 0x08, 0x00, 0x08, 0x18, 0x10, 0x10, 0x11, 0x1F, 0x0F, 0x00 },
// 	{ 0xE0, 0xF0, 0x98, 0x88, 0x88, 0x80, 0x00, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x10, 0x1F, 0x0F, 0x00 },
// 	{ 0x18, 0x18, 0x08, 0x08, 0x88, 0xF8, 0x78, 0x00, 0x00, 0x00, 0x1E, 0x1F, 0x01, 0x00, 0x00, 0x00 },
// 	{ 0x70, 0xF8, 0x88, 0x88, 0x88, 0xF8, 0x70, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x10, 0x1F, 0x0F, 0x00 },
// 	{ 0x70, 0xF8, 0x88, 0x88, 0x88, 0xF8, 0xF0, 0x00, 0x00, 0x10, 0x10, 0x10, 0x18, 0x0F, 0x07, 0x00 },
// 	{ 0x00, 0x00, 0x00, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x00, 0x00, 0x00 },
// 	{ 0x00, 0x00, 0x00, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x1C, 0x0C, 0x00, 0x00, 0x00 },
// 	{ 0x00, 0x00, 0x80, 0xC0, 0x60, 0x30, 0x10, 0x00, 0x00, 0x01, 0x03, 0x06, 0x0C, 0x18, 0x10, 0x00 },
// 	{ 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00 },
// 	{ 0x00, 0x10, 0x30, 0x60, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x10, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x00 },
// 	{ 0x30, 0x38, 0x08, 0x88, 0xC8, 0x78, 0x30, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x1B, 0x00, 0x00, 0x00 },
// 	{ 0xE0, 0xF0, 0x10, 0x90, 0x90, 0xF0, 0xE0, 0x00, 0x0F, 0x1F, 0x10, 0x17, 0x17, 0x17, 0x03, 0x00 },
// 	{ 0xC0, 0xE0, 0x30, 0x18, 0x30, 0xE0, 0xC0, 0x00, 0x1F, 0x1F, 0x01, 0x01, 0x01, 0x1F, 0x1F, 0x00 },
// 	{ 0x08, 0xF8, 0xF8, 0x88, 0x88, 0xF8, 0x70, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x10, 0x1F, 0x0F, 0x00 },
// 	{ 0xE0, 0xF0, 0x18, 0x08, 0x08, 0x18, 0x30, 0x00, 0x07, 0x0F, 0x18, 0x10, 0x10, 0x18, 0x0C, 0x00 },
// 	{ 0x08, 0xF8, 0xF8, 0x08, 0x18, 0xF0, 0xE0, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x18, 0x0F, 0x07, 0x00 },
// 	{ 0x08, 0xF8, 0xF8, 0x88, 0xC8, 0x18, 0x38, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x11, 0x18, 0x1C, 0x00 },
// 	{ 0x08, 0xF8, 0xF8, 0x88, 0xC8, 0x18, 0x38, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x01, 0x00, 0x00, 0x00 },
// 	{ 0xE0, 0xF0, 0x18, 0x08, 0x08, 0x18, 0x30, 0x00, 0x07, 0x0F, 0x18, 0x11, 0x11, 0x0F, 0x1F, 0x00 },
// 	{ 0xF8, 0xF8, 0x80, 0x80, 0x80, 0xF8, 0xF8, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00 },
// 	{ 0x00, 0x00, 0x08, 0xF8, 0xF8, 0x08, 0x00, 0x00, 0x00, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00, 0x00 },
// 	{ 0x00, 0x00, 0x00, 0x08, 0xF8, 0xF8, 0x08, 0x00, 0x0E, 0x1E, 0x10, 0x10, 0x1F, 0x0F, 0x00, 0x00 },
// 	{ 0x08, 0xF8, 0xF8, 0x80, 0xE0, 0x78, 0x18, 0x00, 0x10, 0x1F, 0x1F, 0x01, 0x03, 0x1E, 0x1C, 0x00 },
// 	{ 0x08, 0xF8, 0xF8, 0x08, 0x00, 0x00, 0x00, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x10, 0x18, 0x1C, 0x00 },
// 	{ 0xF8, 0xF8, 0x70, 0xE0, 0x70, 0xF8, 0xF8, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00 },
// 	{ 0xF8, 0xF8, 0x70, 0xE0, 0xC0, 0xF8, 0xF8, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x01, 0x1F, 0x1F, 0x00 },
// 	{ 0xE0, 0xF0, 0x18, 0x08, 0x18, 0xF0, 0xE0, 0x00, 0x07, 0x0F, 0x18, 0x10, 0x18, 0x0F, 0x07, 0x00 },
// 	{ 0x08, 0xF8, 0xF8, 0x88, 0x88, 0xF8, 0x70, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00, 0x00, 0x00, 0x00 },
// 	{ 0xF0, 0xF8, 0x08, 0x08, 0x08, 0xF8, 0xF0, 0x00, 0x0F, 0x1F, 0x10, 0x1C, 0x78, 0x7F, 0x4F, 0x00 },
// 	{ 0x08, 0xF8, 0xF8, 0x88, 0x88, 0xF8, 0x70, 0x00, 0x10, 0x1F, 0x1F, 0x00, 0x01, 0x1F, 0x1E, 0x00 },
// 	{ 0x30, 0x78, 0xC8, 0x88, 0x88, 0x38, 0x30, 0x00, 0x0C, 0x1C, 0x10, 0x10, 0x11, 0x1F, 0x0E, 0x00 },
// 	{ 0x00, 0x38, 0x18, 0xF8, 0xF8, 0x18, 0x38, 0x00, 0x00, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00, 0x00 },
// 	{ 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x10, 0x1F, 0x0F, 0x00 },
// 	{ 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x03, 0x07, 0x0C, 0x18, 0x0C, 0x07, 0x03, 0x00 },
// 	{ 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x07, 0x1F, 0x1C, 0x07, 0x1C, 0x1F, 0x07, 0x00 },
// 	{ 0x18, 0x78, 0xE0, 0x80, 0xE0, 0x78, 0x18, 0x00, 0x18, 0x1E, 0x07, 0x01, 0x07, 0x1E, 0x18, 0x00 },
// 	{ 0x00, 0x78, 0xF8, 0x80, 0x80, 0xF8, 0x78, 0x00, 0x00, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00, 0x00 },
// 	{ 0x38, 0x18, 0x08, 0x88, 0xC8, 0x78, 0x38, 0x00, 0x1C, 0x1E, 0x13, 0x11, 0x10, 0x18, 0x1C, 0x00 },
// 	{ 0x00, 0x00, 0xF8, 0xF8, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x10, 0x10, 0x00, 0x00 },
// 	{ 0x70, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0E, 0x1C, 0x00 },
// 	{ 0x00, 0x00, 0x08, 0x08, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x1F, 0x1F, 0x00, 0x00 },
// 	{ 0x10, 0x18, 0x0E, 0x07, 0x0E, 0x18, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
// 	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40 },
// 	{ 0x00, 0x00, 0x07, 0x0F, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
// 	{ 0x00, 0x40, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x00, 0x0E, 0x1F, 0x11, 0x11, 0x0F, 0x1F, 0x10, 0x00 },
// 	{ 0x08, 0xF8, 0xF8, 0x40, 0xC0, 0x80, 0x00, 0x00, 0x10, 0x1F, 0x0F, 0x10, 0x10, 0x1F, 0x0F, 0x00 },
// 	{ 0x80, 0xC0, 0x40, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x10, 0x18, 0x08, 0x00 },
// 	{ 0x00, 0x80, 0xC0, 0x48, 0xF8, 0xF8, 0x00, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x0F, 0x1F, 0x10, 0x00 },
// 	{ 0x80, 0xC0, 0x40, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x0F, 0x1F, 0x11, 0x11, 0x11, 0x19, 0x09, 0x00 },
// 	{ 0x80, 0xF0, 0xF8, 0x88, 0x18, 0x30, 0x00, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00, 0x00, 0x00, 0x00 },
// 	{ 0x80, 0xC0, 0x40, 0x40, 0x80, 0xC0, 0x40, 0x00, 0x4F, 0xDF, 0x90, 0x90, 0xFF, 0x7F, 0x00, 0x00 },
// 	{ 0x08, 0xF8, 0xF8, 0x80, 0x40, 0xC0, 0x80, 0x00, 0x10, 0x1F, 0x1F, 0x00, 0x00, 0x1F, 0x1F, 0x00 },
// 	{ 0x00, 0x00, 0x40, 0xD8, 0xD8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00, 0x00 },
// 	{ 0x00, 0x00, 0x00, 0x00, 0x40, 0xD8, 0xD8, 0x00, 0x00, 0x60, 0xE0, 0x80, 0x80, 0xFF, 0x7F, 0x00 },
// 	{ 0x08, 0xF8, 0xF8, 0x00, 0x80, 0xC0, 0x40, 0x00, 0x10, 0x1F, 0x1F, 0x03, 0x07, 0x1C, 0x18, 0x00 },
// 	{ 0x00, 0x00, 0x08, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00, 0x00 },
// 	{ 0xC0, 0xC0, 0xC0, 0x80, 0xC0, 0xC0, 0x80, 0x00, 0x1F, 0x1F, 0x00, 0x1F, 0x00, 0x1F, 0x1F, 0x00 },
// 	{ 0x40, 0xC0, 0x80, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x1F, 0x1F, 0x00 },
// 	{ 0x80, 0xC0, 0x40, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x10, 0x1F, 0x0F, 0x00 },
// 	{ 0x40, 0xC0, 0x80, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x80, 0xFF, 0xFF, 0x90, 0x10, 0x1F, 0x0F, 0x00 },
// 	{ 0x80, 0xC0, 0x40, 0x40, 0x80, 0xC0, 0x40, 0x00, 0x0F, 0x1F, 0x10, 0x90, 0xFF, 0xFF, 0x80, 0x00 },
// 	{ 0x40, 0xC0, 0x80, 0xC0, 0x40, 0xC0, 0x80, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00, 0x00, 0x01, 0x00 },
// 	{ 0x80, 0xC0, 0x40, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x08, 0x19, 0x13, 0x12, 0x16, 0x1C, 0x08, 0x00 },
// 	{ 0x40, 0x40, 0xF0, 0xF8, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x10, 0x18, 0x08, 0x00 },
// 	{ 0xC0, 0xC0, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x0F, 0x1F, 0x10, 0x00 },
// 	{ 0x00, 0xC0, 0xC0, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x07, 0x0F, 0x18, 0x18, 0x0F, 0x07, 0x00 },
// 	{ 0xC0, 0xC0, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x0F, 0x1F, 0x18, 0x0E, 0x18, 0x1F, 0x0F, 0x00 },
// 	{ 0x40, 0xC0, 0x80, 0x00, 0x80, 0xC0, 0x40, 0x00, 0x10, 0x18, 0x0F, 0x07, 0x0F, 0x18, 0x10, 0x00 },
// 	{ 0xC0, 0xC0, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x8F, 0x9F, 0x90, 0x90, 0xD0, 0x7F, 0x3F, 0x00 },
// 	{ 0xC0, 0xC0, 0x40, 0x40, 0xC0, 0xC0, 0x40, 0x00, 0x18, 0x1C, 0x16, 0x13, 0x11, 0x18, 0x18, 0x00 },
// 	{ 0x00, 0x80, 0x80, 0xF0, 0x78, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x00 },
// 	{ 0x00, 0x00, 0x00, 0x78, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00 },
// 	{ 0x00, 0x08, 0x08, 0x78, 0xF0, 0x80, 0x80, 0x00, 0x00, 0x10, 0x10, 0x1F, 0x0F, 0x00, 0x00, 0x00 },
// 	{ 0x10, 0x18, 0x08, 0x18, 0x10, 0x18, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
// };

const uint8_t gFontBigDigits[11][26] = {
    {0x00, 0xC0, 0xF0, 0xF8, 0x3C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1C, 0xF8, 0xF0, 0xE0, 0x00, 0x07, 0x1F, 0x3F, 0x78, 0x60, 0x60, 0x60, 0x60, 0x70, 0x3F, 0x1F, 0x0F},
    {0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x10, 0x38, 0x38, 0x1C, 0x0C, 0x0C, 0x0C, 0x0C, 0xFC, 0xF8, 0xF0, 0x00, 0x00, 0x70, 0x78, 0x7C, 0x7C, 0x6E, 0x66, 0x67, 0x67, 0x63, 0x61, 0x60, 0x00},
    {0x00, 0x10, 0x18, 0x18, 0x9C, 0x8C, 0x8C, 0x8C, 0x8C, 0xCC, 0xF8, 0xF8, 0x70, 0x00, 0x30, 0x30, 0x30, 0x71, 0x61, 0x61, 0x61, 0x61, 0x71, 0x3F, 0x3F, 0x1E},
    {0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0x70, 0x38, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0x1C, 0x1E, 0x1F, 0x1F, 0x19, 0x18, 0x18, 0x18, 0x7F, 0x7F, 0x7F, 0x18},
    {0x00, 0x00, 0xFC, 0xFC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x8C, 0x0C, 0x00, 0x00, 0x18, 0x30, 0x70, 0x60, 0x60, 0x60, 0x60, 0x71, 0x7B, 0x3F, 0x1F},
    {0x00, 0xC0, 0xF0, 0xF8, 0x38, 0x9C, 0x8C, 0x8C, 0x8C, 0x8C, 0x9C, 0x38, 0x30, 0x00, 0x0F, 0x1F, 0x3F, 0x73, 0x61, 0x61, 0x61, 0x61, 0x73, 0x33, 0x3F, 0x1E},
    {0x00, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x8C, 0xEC, 0xFC, 0x3C, 0x1C, 0x00, 0x00, 0x00, 0x40, 0x60, 0x78, 0x7C, 0x1F, 0x07, 0x03, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x78, 0xF8, 0xDC, 0x8C, 0x8C, 0x8C, 0x8C, 0xDC, 0xF8, 0x78, 0x00, 0x00, 0x1E, 0x3F, 0x3F, 0x73, 0x61, 0x61, 0x61, 0x61, 0x73, 0x3F, 0x3F, 0x1E},
    {0x00, 0xF0, 0xF8, 0xB8, 0x1C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1C, 0xB8, 0xF0, 0xE0, 0x00, 0x11, 0x33, 0x77, 0x67, 0x66, 0x66, 0x66, 0x76, 0x33, 0x3F, 0x1F, 0x07},
    {0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00},
};

const uint8_t gFontSmallDigits[13][7] = {
    // 0123456789-,.
    {0x00, 0x7F, 0x41, 0x41, 0x41, 0x41, 0x7F}, /*"0",0*/
    {0x00, 0x01, 0x7F, 0x00, 0x00, 0x00, 0x00}, /*"1",1*/
    {0x00, 0x79, 0x49, 0x49, 0x49, 0x49, 0x4F}, /*"2",2*/
    {0x00, 0x41, 0x41, 0x49, 0x49, 0x49, 0x7F}, /*"3",3*/
    {0x00, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x7F}, /*"4",4*/
    {0x00, 0x4F, 0x49, 0x49, 0x49, 0x49, 0x79}, /*"5",5*/
    {0x00, 0x7F, 0x49, 0x49, 0x49, 0x49, 0x79}, /*"6",6*/
    {0x00, 0x07, 0x01, 0x01, 0x01, 0x01, 0x7F}, /*"7",7*/
    {0x00, 0x7F, 0x49, 0x49, 0x49, 0x49, 0x7F}, /*"8",8*/
    {0x00, 0x4F, 0x49, 0x49, 0x49, 0x49, 0x7F}, /*"9",9*/
    {0x00, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00}, /*"-",10*/
    {0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00}, /*",",11*/
    {0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00}, /*".",12*/
};
