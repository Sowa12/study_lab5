#include <algorithm>
#include <iostream>
#include <model.h>

namespace editor {
    GraphicDocument::GraphicDocument(const std::string& path) {
        load_document(path);
    }

    void GraphicDocument::load_document(const std::string& path) {
        (void)&path;
        elements.clear();
        // ... Read File and deserialize elements
    }

    void GraphicDocument::add_primitive_to_document(std::shared_ptr<IFigure>& primitive) {
        elements.emplace_back(primitive);
    }

    void GraphicDocument::remove_primitive_from_document(std::shared_ptr<IFigure>& primitive) {
        auto position = std::find(elements.begin(), elements.end(), primitive);
        if (position != elements.end()) {
            elements.erase(position);
        }
    }

    void GraphicDocument::save_document(const std::string& path) {
        (void)&path;
    }
}
