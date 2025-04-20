#include "view.h"
#include "iostream"

namespace editor {
    MainView::MainView(const editor::GraphicDocument& model_): model{model_} {
        render();
    }

    void MainView::redraw() {
        render();
    }

    void MainView::render() {
        std::cout << "========================================" << std::endl;
        std::cout << "drawing figure: ";
        
        std::cout << "end drawing figure" << std::endl;
        std::cout << "========================================" << std::endl;
    }
}
