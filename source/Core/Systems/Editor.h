#pragma once

#include "System.h"

#include <glad/glad.h>
#include <GLFW/glfw3.h>

namespace Proton
{
    class Editor : System
    {
    public:
        Editor();
        ~Editor();

        void Initialize();
        void Update(float a_DeltaTime);
        void Render();
        void Destroy();

        void SetWindow(GLFWwindow* a_Window);

    private:
        void ShowDebugMenu();

    private:
        GLFWwindow * m_Window;
        float m_FrameTimes[5];
    };
}
