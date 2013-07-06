#include "TopBar.hh"
#include "../../GraphicEngine/Elements/Ressource.hh"

TopBar::TopBar() {
}

TopBar::~TopBar() {
}

void TopBar::init() {
    this->setSize(Tools::Position(1024, 40));
    this->setPosition(Tools::Position(0, 0));
    this->setBackgroundColor(sf::Color(38, 43, 57));

    Graphic::GUI::Ressource *gas = new Graphic::GUI::Ressource();
    gas->setPosition(Tools::Position(30, 5));
    gas->setValue("0");
    gas->setIcon("gas");
    this->addComponent(gas);

    Graphic::GUI::Ressource *minerals = new Graphic::GUI::Ressource();
    minerals->setPosition(Tools::Position(120, 5));
    minerals->setValue("0");
    minerals->setIcon("minerals");
    this->addComponent(minerals);

}