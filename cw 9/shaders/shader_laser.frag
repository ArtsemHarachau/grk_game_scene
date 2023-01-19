#version 430 core


out vec4 out_color;
flat in vec4 color;
in vec4 pos_local;
in vec4 pos_global;

uniform float time;

void main()
{
	//out_color = vec4(0.8,0.2,0.9,1.0);
//    vec4 mixColor = mix(color, vec4(0.0f, 0.3f, 0.3f, 1.0f), sin(time));
//    out_color = mixColor / sin(time);

    vec4 mixColor = mix(time * abs(pos_local), vec4(0.0f, 0.3f, 0.3f, 1.0f), sin(time));
    out_color = mixColor / sin(time);

//    vec4 mixColor = mix(pos_global, vec4(0.0f, 0.3f, 0.3f, 1.0f), sin(time));
//    out_color = mixColor / sin(time);
    //out_color = color / time;
}