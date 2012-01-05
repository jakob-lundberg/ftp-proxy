/*
 * $Id: ftp-main.h,v 1.1 2002/01/14 19:20:36 mt Exp $
 *
 * Header for the FTP Proxy main program
 *
 * Author(s): Jens-Gero Boehm <jens-gero.boehm@suse.de>
 *            Pieter Hollants <pieter.hollants@suse.de>
 *            Marius Tomaschewski <mt@suse.de>
 *            Volker Wiegand <volker.wiegand@suse.de>
 *
 * This file is part of the SuSE Proxy Suite
 *            See also  http://proxy-suite.suse.de/
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version
 * 2 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 * A history log can be found at the end of this file.
 */

#if !defined(_FTP_MAIN_H_)
#define _FTP_MAIN_H_

/* ------------------------------------------------------------ */

#if !defined(ETC_DIR)
#define ETC_DIR			"/etc/proxy-suite"
#endif
#define DEFAULT_CONFIG		ETC_DIR"/ftp-proxy.conf"

const char* config_filename();

/* ------------------------------------------------------------ */

#endif /* defined(_FTP_MAIN_H_) */

/* ------------------------------------------------------------
 * $Log: ftp-main.h,v $
 * Revision 1.1  2002/01/14 19:20:36  mt
 * added header to provide config file name
 *
 * ------------------------------------------------------------ */

