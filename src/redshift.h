/* redshift.h -- Main program header
   This file is part of Redshift.

   Redshift is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   Redshift is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with Redshift.  If not, see <http://www.gnu.org/licenses/>.

   Copyright (c) 2010  Jon Lund Steffensen <jonlst@gmail.com>
*/

#ifndef _REDSHIFT_REDSHIFT_H
#define _REDSHIFT_REDSHIFT_H


typedef int gamma_method_init_func(void *state, int screen_num, int crtc_num);
typedef void gamma_method_free_func(void *state);
typedef void gamma_method_restore_func(void *state);
typedef int gamma_method_set_temperature_func(void *state, int temp,
					      float gamma[3]);

typedef struct {
	char *name;
	gamma_method_init_func *init;
	gamma_method_free_func *free;
	gamma_method_restore_func *restore;
	gamma_method_set_temperature_func *set_temperature;
} gamma_method_spec_t;


#endif /* ! _REDSHIFT_REDSHIFT_H */
