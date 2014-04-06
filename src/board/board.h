/*
 * board.h
 *
 *  Created on: Mar 17, 2014
 *      Author: chncwang
 */

#ifndef BOARD_H_
#define BOARD_H_

#include <cassert>

#include <array>
#include <functional>
#include <ostream>

#include "def.h"
#include "board/number.h"

class Location;

class Board {
public:
  static const int kBoardLength = 4;
  static const int kBoardLengthSquare = kBoardLength * kBoardLength;
  static const int kLargeSideXY = kBoardLength - 1;
  static const Number kEmpty = 0;

  Board();

  ~Board() = default;

  void Copy(const Board &board) {
    numbers_ = board.numbers_;
  }

  Number GetNumber(const Location &location) const;

  void SetNumber(const Location &location, Number number);

  void ForEachLocation(const std::function<
      void(const Location&, Number*)> &process);

  static void ForEachLokation(
      const std::function<void(const Location&)> &process);

  static int ToIndex(const Location &location);

  static const Location& ToLocation(int index);

  DISALLOW_COPY_AND_ASSIGN(Board);

private:
  typedef std::ostream ostream;

  class IndexLocationTable;

  friend ostream& operator<<(ostream &out, const Board &board);
  friend bool IsEqual(const Board &a, const Board &b);

  std::array<std::array<Number, kBoardLength>, kBoardLength> numbers_;
};

#endif /* BOARD_H_ */
