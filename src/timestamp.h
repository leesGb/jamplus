/*
 * Copyright 1993, 1995 Christopher Seiwald.
 *
 * This file is part of Jam - see jam.c for Copyright information.
 */

/*
 * timestamp.h - get the timestamp of a file or archive member
 */

void timestamp( const char *target, time_t *time, int force );
void timestamp_updatetime( const char *target );
void donestamps();
