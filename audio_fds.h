/*
 * Copyright (C) 2017 FIX94
 *
 * This software may be modified and distributed under the terms
 * of the MIT license.  See the LICENSE file for details.
 */

#ifndef _AUDIO_FDS_H_
#define _AUDIO_FDS_H_

#include "common.h"

void fdsAudioInit();
FIXNES_NOINLINE void fdsAudioCycle();
void fdsAudioClockTimers();
FIXNES_NOINLINE void fdsAudioMasterUpdate();
void fdsAudioSet8(uint8_t reg, uint8_t val);
void fdsAudioSetWave(uint8_t pos, uint8_t val);
uint8_t fdsAudioGet8(uint8_t reg);
uint8_t fdsAudioGetWave(uint8_t pos);

extern uint8_t fdsOut;

#endif
