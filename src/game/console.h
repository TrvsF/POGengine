#ifndef CONSOLE_H_
#define CONSOLE_H_

namespace console
{
	inline char m_inputstr[64] = "";

	inline bool ACTIVE = false;

	inline void InputChar(const char* c)
	{
		if (strlen(m_inputstr) < 63)
		{
			strncat_s(m_inputstr, c, 1);
		}
	}

	inline void InputBackspace()
	{
		size_t last = strlen(m_inputstr);
		if (last > 0)
		{
			m_inputstr[last - 1] = '\0';
		}
	}

	inline void InputEnter()
	{
		// TODO : event system here for commands?
		std::cout << "console : " << m_inputstr << "\n";
		m_inputstr[0] = '\0';
	}
}
#endif // !CONSOLE_H_