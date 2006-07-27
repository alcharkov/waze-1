/* roadmap_sound.h - Play sound
 *
 * LICENSE:
 *
 *   Copyright 2006 Ehud Shabtai
 *
 *   This file is part of RoadMap.
 *
 *   RoadMap is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   RoadMap is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with RoadMap; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef __ROADMAP_SOUND__H
#define __ROADMAP_SOUND__H

#define MAX_SOUND_LIST 20
#define MAX_SOUND_NAME 30

struct roadmap_sound_list_t {
   int count;
   char list[MAX_SOUND_LIST][MAX_SOUND_NAME];
};

typedef struct roadmap_sound_list_t *RoadMapSoundList;

RoadMapSoundList roadmap_sound_list_create (void);
int roadmap_sound_list_add (RoadMapSoundList list, const char *name);
int roadmap_sound_list_count (const RoadMapSoundList list);
const char *roadmap_sound_list_get (const RoadMapSoundList list, int i);
void roadmap_sound_list_free (RoadMapSoundList list);

int roadmap_sound_play      (const char *file_name);
int roadmap_sound_play_list (const RoadMapSoundList list);

void roadmap_sound_initialize (void);
void roadmap_sound_shutdown   (void);

#endif // __ROADMAP_SOUND__H
