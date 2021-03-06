/*
 * Copyright (C) 2017 FIX94
 *
 * This software may be modified and distributed under the terms
 * of the MIT license.  See the LICENSE file for details.
 */

#ifndef _ppu_h_
#define _ppu_h_

void ppuInit();
void ppuCycle();
bool ppuDrawDone();
uint8_t ppuGet8(uint8_t reg);
void ppuSet8(uint8_t reg, uint8_t val);
bool ppuNMI();
void ppuDumpMem();
uint16_t ppuGetCurVramAddr();

void ppuSetNameTblSingleLower();
void ppuSetNameTblSingleUpper();
void ppuSetNameTblVertical();
void ppuSetNameTblHorizontal();
void ppuSetNameTbl4Screen();
void ppuSetNameTblCustom(uint16_t addrA, uint16_t addrB, uint16_t addrC, uint16_t addrD);
void ppuBackUpTbl();
void ppuRestoreTbl();

void ppuDrawNSFTrackNum(uint8_t cTrack, uint8_t trackTotal);

uint8_t ppuVRAMGet8(uint16_t addr);
void ppuVRAMSet8(uint16_t addr, uint8_t val);

extern bool ppu4Screen;

#endif
