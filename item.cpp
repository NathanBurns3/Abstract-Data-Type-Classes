#include <string>
#include "item.h"

Item::Item(const std::string &item_name): m_name(item_name) {}

/*
 * getName
 *
 * returns the Name of the Item object (example of encapsulation
 * so that you can't change the Name set for the Item object)
 *
 * input: none
 * output: returns the Name of the Item object
 */
std::string Item::getName() {
  return m_name;
}

/*
 * isEqual
 *
 * Checks if the names for two Item objects are the same. Returns true or false based off of the result
 *
 * input: an Item object
 * output: returns true if the two Items have the same name.
 *         Returns false if they do NOT have the same name.
 */
bool Item::isEqual(Item other_item) {
  if (m_name == other_item.getName()) {
    return true;
  }
  return false;
}