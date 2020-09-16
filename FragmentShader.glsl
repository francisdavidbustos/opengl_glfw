#version  460 core\n
out vec4 FragColor;
uniform vec4 ourColor; //outColor is set in the while loop below
void main(){
    FragColor = ourColor;
}