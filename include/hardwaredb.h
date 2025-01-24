/*
Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License

CopyRight (c) 2023-2025 OpenATV, jbleyel

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the Rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
1. Non-Commercial Use: You may not use the Software or any derivative works
   for commercial purposes without obtaining explicit permission from the
   copyRight holder.
2. Share Alike: If you distribute or publicly perform the Software or any
   derivative works, you must do so under the same license terms, and you
   must make the source code of any derivative works available to the
   public.
3. Attribution: You must give appropriate credit to the original author(s)
   of the Software by including a prominent notice in your derivative works.
THE SOFTWARE IS PROVIDED "AS IS," WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE, AND NONINFRINGEMENT. IN NO EVENT SHALL
THE AUTHORS OR COPYRight HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES, OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT, OR OTHERWISE,
ARISING FROM, OUT OF, OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.

For more details about the CC BY-NC-SA 4.0 License, please visit:
https://creativecommons.org/licenses/by-nc-sa/4.0/
*/

#ifndef __hardwaredb_h
#define __hardwaredb_h
#include <string>
#include <unordered_map>

static std::unordered_map<std::string, std::string> HardwareDB{

#ifdef HWVUSOLO4K
	{"/devices/platform/strict-ahci.0/ata1/", "SATA"},
	{"/devices/f0490600.ohci/usb10/", "Front USB"},
	{"/devices/f0480400.ohci/usb7/", "Rear USB 3.0 Lower"},
	{"/devices/f0480600.ohci/usb8/", "Rear USB 3.0 Upper"}
#elif HWUNO4KSE
	{"/devices/platform/rdb/f045a000.sata/ata1/", "SATA"},
	{"/devices/platform/rdb/f0470300.ehci_v2/usb3/3-1/3-1", "Rear USB 3.0 Lower"},
	{"/devices/platform/rdb/f0471000.xhci_v2/usb2/2-1/2-1", "Rear USB 3.0 Lower"},
	{"/devices/platform/rdb/f0470500.ehci_v2/usb4/4-1/4-1", "Rear USB 3.0 Upper"},
	{"/devices/platform/rdb/f0471000.xhci_v2/usb2/2-2/2-2", "Rear USB 3.0 Upper"}
#elif HWDUO4K
	{"/devices/platform/rdb/8b0a000.sata/", "SATA"},
	{"/devices/platform/rdb/8b39000.xhci_v2/usb1/", "Front USB"},
	{"/devices/platform/rdb/8b39000.xhci_v2/usb2/2-2/", "Rear USB 3.0 Upper"},
	{"/devices/platform/rdb/8b39000.xhci_v2/usb2/2-1/", "Rear USB 3.0 Lower"}
#elif HWDUO4KSE
	{"/devices/platform/rdb/f045a000.sata/", "SATA"},
	{"/devices/platform/rdb/f0480500.ehci_v2/usb6/", "Front USB"},
	{"/devices/platform/rdb/f0471000.xhci_v2/usb2/2-2/", "Rear USB 3.0 Upper"},
	{"/devices/platform/rdb/f0471000.xhci_v2/usb2/2-1/", "Rear USB 3.0 Lower"}
#elif HWVUULTIMO4K
	{"/devices/platform/brcmstb-ahci.0/ata1", "SATA"},
	{"/devices/rdb.3/f0470300.ehci_v2/usb3/", "Rear USB 3.0 Lower"},
	{"/devices/rdb.3/f0470500.ehci_v2/usb4/", "Rear USB 3.0 Upper"},
	{"/devices/rdb.3/f0480600.ohci_v2/usb10/", "Front USB"}
#elif HWDUO2 // CHECKED
	{"/devices/platform/strict-ahci.0/ata1/", "eSATA"},
	{"/devices/platform/ehci-brcm.2/usb3/", "Front USB"},
	{"/devices/platform/ehci-brcm.0/usb1/", "Rear USB Lower"},
	{"/devices/platform/ehci-brcm.1/usb2/", "Rear USB Upper"}
#elif HWGBIP4K // CHECKED
	{"/devices/platform/soc/f9890000.ehci/usb1/1-1/1-1.3/1-1.3:1.0", "Rear MicroSD"},
	{"/devices/platform/soc/f9890000.ehci/usb1/1-1/1-1.2/1-1.2:1.0", "Rear Left USB"},
	{"/devices/platform/soc/f98a0000.xhci/usb3/3-1/3-1:1.0", "Rear Right USB 3.0"}
#elif HWGBTRIO4K // CHECKED
	{"/devices/platform/soc/f9890000.ehci/usb1/1-1/1-1.3/1-1.3:1.0", "Rear Right MicroSD"},
	{"/devices/platform/soc/f9890000.ehci/usb1/1-1/1-1.2/1-1.2:1.0", "Rear Right USB"},
	{"/devices/platform/soc/f98a0000.xhci/usb3/3-1/3-1:1.0", "Rear Left USB 3.0"},
	{"/devices/platform/soc/f9890000.ehci/usb1/1-2/1-2:1.0", "Front USB"}
#elif HWGBTRIO4KPRO // CHECKED
	{"/devices/platform/soc/f9890000.ehci/usb1/1-2/1-2", "MicroSD"},
	{"/devices/platform/soc/f98a0000.xhci/usb4/4-1/4-1", "Rear USB Left"},
	{"/devices/platform/soc/f98a0000.xhci/usb3/3-1/3-1", "Rear USB Left"},
	{"/devices/platform/soc/f9880000.ohci/usb2/2-1/2-1", "Rear USB Right"},
	{"/devices/platform/soc/f9890000.ehci/usb1/1-1/1-1", "Rear USB Right"}
#elif HWGBUE4K
	{"/devices/platform/rdb/f045a000.sata/ata2/", "SATA"},
	{"/devices/platform/rdb/f0470300.ehci_v2/usb3/3-1/3-1.1/3-1.1:", "Front USB"},
	{"/devices/platform/rdb/f0470500.ehci_v2/usb4/", "Rear USB 3.0"},
	{"/devices/platform/rdb/f0470300.ehci_v2/usb3/3-1/3-1.2/3-1.2:", "Rear Upper USB"},
	{"/devices/platform/rdb/f0470300.ehci_v2/usb3/3-1/3-1.3/3-1.3:", "Rear Lower USB"}
#elif HWGBQUAD4K
	{"/devices/platform/rdb/f045a000.sata/", "SATA"},
	{"/devices/platform/rdb/f03e0000.sdhci/mmc_host/", "SD"},
	{"/devices/platform/rdb/f0470300.ehci_v2/usb3/3-1/3-1:1.0", "Front USB"},
	{"/devices/platform/rdb/f0470500.ehci_v2/usb4/4-1/4-1.4/4-1.4:1.0", "Rear USB 3.0 Left"},
	{"/devices/platform/rdb/f0471000.xhci_v2/usb2/2-2/2-2.3/2-2.3:1.0", "Rear USB 3.0 Right"},
	{"/devices/platform/rdb/f0470500.ehci_v2/usb4/4-1/4-1.2/4-1.2:1.0", "Rear Lower USB"},
	{"/devices/platform/rdb/f0470500.ehci_v2/usb4/4-1/4-1.1/4-1.1:1.0", "Rear Upper USB"}
#elif HWGBQUAD4KPRO // CHECKED
	{"/devices/platform/rdb/f045a000.sata/", "SATA"},
	{"/devices/platform/rdb/f03e0000.sdhci/mmc_host/", "SD"},
	{"/devices/platform/rdb/f0470500.ehci_v2/usb4/4-1/4-1.1", "Front USB"},
	{"/devices/platform/rdb/f0471000.xhci_v2/usb2/2-2/2-2.1", "Front USB"},
	{"/devices/platform/rdb/f0470500.ehci_v2/usb4/4-1/4-1.4", "Rear USB Right"},
	{"/devices/platform/rdb/f0471000.xhci_v2/usb2/2-2/2-2.4", "Rear USB Right"},
	{"/devices/platform/rdb/f0470300.ehci_v2/usb3/3-1/3-1", "Rear USB 3.0, Left"},
	{"/devices/platform/rdb/f0471000.xhci_v2/usb2/2-1/2-1", "Rear USB 3.0, Left"},
	{"/devices/platform/rdb/f0470500.ehci_v2/usb4/4-1/4-1.3", "Rear USB-C"},
	{"/devices/platform/rdb/f0471000.xhci_v2/usb2/2-2/2-2.3", "Rear USB-C"}
#elif HWSF8008
	{"/devices/platform/soc/f98a0000.xhci/usb4/4-1/4-1", "Right USB"},
	{"/devices/platform/soc/f98a0000.xhci/usb4/3-1/3-1", "Right USB"},
	{"/devices/platform/soc/f9890000.ehci/usb1/1-1/1-1.2", "Rear USB"},
	{"/devices/platform/soc/f9890000.ehci/usb1/1-1/1-1.3", "Rear MicroSD"}
#elif HWSFX6008 // CHECKED
	{"/devices/platform/soc/f98a0000.xhci/usb3/3-1/3-1", "Left USB"},
	{"/devices/platform/soc/f9890000.ehci/usb1/1-1", "Rear USB"}
#elif HWPULSE4K
	{"/devices/platform/soc/f9820000.himciv200.SD/mmc_host/mmc1", "Front MicroSD"},
	{"/devices/platform/soc/f9900000.hiahci/ata1/host0/target0:0:0/0:0:0:0", "SATA"},
	{"/devices/platform/soc/f98a0000.xhci/usb3/", "Front USB"},
	{"/devices/platform/soc/f9890000.ehci/usb1/", "Rear USB"}
#elif HWPULSE4KMINI // CHECKED
	{"/devices/platform/soc/f9820000.himciv200.SD/mmc_host/mmc1/", "MicroSD"},
	{"/devices/platform/soc/f9890000.ehci/usb1/", "Rear Upper USB"},
	{"/devices/platform/soc/f98a0000.xhci/usb4/", "Rear Lower USB"},
	{"/devices/platform/soc/f98a0000.xhci/usb3/", "Rear Lower USB"}
#elif HWMULTIBOXPRO // CHECKED
	{"/devices/platform/soc/f98a0000.xhci/usb3", "Rear USB Left"},
	{"/devices/platform/soc/f9890000.ehci/usb1", "Rear USB Right"},
	{"/devices/platform/soc/f9820000.himciv200.SD/mmc_host/mmc1", "MicroSD"}
#elif HWH7
	{"/devices/platform/rdb/f045a000.sata/ata1/", "SATA"},
	{"/devices/platform/f0470500.ehci/usb2/", "Rear USB 3.0"},
	{"/devices/platform/f0470300.ehci/usb1/1-1/1-1.2/", "Rear USB Lower"},
	{"/devices/platform/f0470300.ehci/usb1/1-1/1-1.1/", "Rear USB Upper"}
#elif HWDUAL
	{"/devices/platform/soc/f98a0000.xhci/usb3/3-1/3-1:1.0", "Rear USB 3.0"},
	{"/devices/platform/soc/f9890000.ehci/usb1/1-1/1-1:1.0", "Front USB"}
#else

#endif

};

#endif
