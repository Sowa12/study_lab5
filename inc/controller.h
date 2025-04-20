#pragma once

#include <string>
#include "model.h"
#include "view.h"

namespace editor {
    class Controller {
    public:
        /**
         * Construct controller with model and view
         */
        Controller(GraphicDocument& model_, MainView& view_);

        /**
         * Load document from file and draw
         */
        void import_document(const std::string& path);

        /**
         * Save document to file
         */
        void export_document(const std::string& path);

        /**
         * Add figure and redraw figure
         */
        void add_primitive(std::shared_ptr<IFigure>& primitive);

        /**
         * Remove figure and redraw figure
         */
        void remove_primitive(std::shared_ptr<IFigure>& primitive);

    private:
        GraphicDocument& model;
        MainView view;
    };
}
