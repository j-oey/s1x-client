#pragma once

namespace dvars
{
	namespace disable
	{
		void Dvar_SetBool(const std::string& name);
		void Dvar_SetFloat(const std::string& name);
		void Dvar_SetInt(const std::string& name);
		void Dvar_SetString(const std::string& name);
	}

	namespace override
	{
		void Dvar_RegisterBool(const std::string& name, bool value, unsigned int flags, const std::string& description = "");
		void Dvar_RegisterFloat(const std::string& name, float value, float min, float max, unsigned int flags, const std::string& description = "");
		void Dvar_RegisterInt(const std::string& name, int value, int min, int max, unsigned int flags, const std::string& description = "");
		void Dvar_RegisterString(const std::string& name, const std::string& value, unsigned int flags, const std::string& description = "");

		void Dvar_SetBool(const std::string& name, bool boolean);
		void Dvar_SetFloat(const std::string& name, float fl);
		void Dvar_SetInt(const std::string& name, int integer);
		void Dvar_SetString(const std::string& name, const std::string& string);
	}
}
