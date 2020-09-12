#pragma once

#include <glad/glad.h>
#include <string>

class Shader {
public:
	// Program ID
	unsigned int ID;

	// Constructor
	Shader(const char* vertexPath, const char* fragmentPath);
	
	// Activate the shader
	void use();
	// Utility uniform functions
	void setBool(const std::string &name, bool value) const;
	void setInt(const std::string &name, int value) const;
	void setFloat(const std::string& name, float value) const;
};