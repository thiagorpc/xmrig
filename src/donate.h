/* XMRig
 * Copyright 2010      Jeff Garzik <jgarzik@pobox.com>
 * Copyright 2012-2014 pooler      <pooler@litecoinpool.org>
 * Copyright 2014      Lucas Jones <https://github.com/lucasjones>
 * Copyright 2014-2016 Wolf9466    <https://github.com/OhGodAPet>
 * Copyright 2016      Jay D Dee   <jayddee246@gmail.com>
 * Copyright 2017-2018 XMR-Stak    <https://github.com/fireice-uk>, <https://github.com/psychocrypt>
 * Copyright 2016-2018 XMRig       <https://github.com/xmrig>, <support@xmrig.com>
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __DONATE_H__
#define __DONATE_H__


/*
 * Dev donation.
 *
 * Percentage of your hashing power that you want to donate to the developer, can be 0 if you don't want to do that.
 * Example of how it works for the default setting of 1:
 * You miner will mine into your usual pool for 99 minutes, then switch to the developer's pool for 1 minute.
 * Since v2.5.1 start time randomized in range from 50 to 150 minutes minus donation time.
 * Switching is instant, and only happens after a successful connection, so you never loose any hashes.
 *
 * If you plan on changing this setting to 0 please consider making a one off donation to my wallet:
 * XMR: 46yMYuV6DCc9nMSUXuFY1E6r5JcJu87Vz74mXXAxXN8XAP5X98X2u9DJTJ1h21PDGLeQxRLAB2buSWQz8NPeLTKH5v3bgmg
 */
constexpr const int kDonateLevel = 0;


#endif /* __DONATE_H__ */
