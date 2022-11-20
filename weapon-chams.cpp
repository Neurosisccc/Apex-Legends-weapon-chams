if (MenuSettings::Transparent) {

			DWORD_PTR MyLocalplayer = Drv.read<DWORD_PTR>(Globals::modBase + OFFSET_LOCAL_ENT);

			DWORD64 ViewModelHandle = Drv.read<DWORD64>(MyLocalplayer + OFFSET_ViewModels) & 0xFFFF; //m_hViewModels
			DWORD64 ViewModelPtr = Drv.read<DWORD64>(Globals::modBase + OFFSET_ENTITYLIST + ViewModelHandle * 0x20);

			Drv.write<int>(ViewModelPtr + 0x3C8, 1);
			Drv.write<int>(ViewModelPtr + 0x3D0, 2);
			Drv.write<glowMode>(ViewModelPtr + 0x2C4, { 101,101,46,0 });
			Drv.write<float>(ViewModelPtr + 0x1D0, 1.f);
			Drv.write<float>(ViewModelPtr + 0x1D4, 19.f);
			Drv.write<float>(ViewModelPtr + 0x1D8, 20.f);
		}
