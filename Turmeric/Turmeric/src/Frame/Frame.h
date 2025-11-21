#pragma once

#include <string>

namespace turmeric
{
	struct FrameProperties
	{
		float Width, Height;
		std::string Title;
		float TitleOffset;

		FrameProperties(size_t width = 1, size_t height = 1, const std::string& title = "", float titleOffset = 0.1)
			: Width(width)
			, Height(height)
			, Title(title)
			, TitleOffset(titleOffset)
		{}
	};


	class Frame
	{
	public:
		Frame(FrameProperties props = {});

	private:

		struct
		{
			FrameProperties Props;

			unsigned int Width, Height;

		} m_Data;

	};

}