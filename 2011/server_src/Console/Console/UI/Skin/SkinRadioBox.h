#ifndef __SKIN_RADIOBOX_HPP
#define __SKIN_RADIOBOX_HPP


#include "../../CustomControl/CustomRadio.h"


namespace i8desk
{
	namespace ui
	{
		class SkinRadioBox
			: public CCustomRadio
		{
		protected:
			virtual void PreSubclassWindow();
		};

	}
}


#endif