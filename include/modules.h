/*
	Copyright (C) 2020 Samotari (Charles Hill, Carlos Garcia Ortiz)

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef BLESKOMAT_MODULES_H
#define BLESKOMAT_MODULES_H

#include "config.h"
#include "logger.h"

#ifdef COIN_ACCEPTOR
	#include "modules/coin-acceptor.h"
#endif

#ifdef BUTTON
	#include "modules/button.h"
#endif

#ifdef TFT
	#include "modules/tft.h"
	namespace screen = tft;
#else
	#include "modules/dummy/screen.h"
#endif

namespace modules {
	void init();
	void loop();
}

#endif
