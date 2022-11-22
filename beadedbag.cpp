#include <algorithm>
#include "beadedbag.h"
#include "item.h"
#include <vector>

/*
 * insert
 *
 * checks to see if the BeadedBag data structure has the Item you want to add.
 * If not then it adds the Item object to the data structure.
 *
 * input: an Item object
 * output: doesn't return a value, but if the BeadedBag doesn't
 *         contain the Item object then it adds it to the data structure.
 */
void BeadedBag::insert(Item to_insert) {
  if (!(contains(to_insert))) {
    bagVector.push_back(to_insert);
  }
}

/*
 * size
 *
 * when called it returns the "size" or amount of Items in the BeadedBag data Structure
 *
 * input: none
 * output: returns the amount of Items in the BeadedBag data structure
 */
int BeadedBag::size() {
  return bagVector.size();
}

/*
 * contains
 *
 * checks to see if an Item object is in the BeadedBag data structure.
 * Returns true or false based on if it appears or not.
 *
 * input: an Item object
 * output: returns true if the item is already in the data structure and false if it is not
 */
bool BeadedBag::contains(Item maybe_contained_item) {
  for (auto a : bagVector) {
    if (a.getName() == maybe_contained_item.getName()) {
      return true;
    }
  }
  return false;
}