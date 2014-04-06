/*

 * board_helper.cc
 *
 *  Created on: Apr 6, 2014
 *      Author: chncwang
 */
#include "board/board.h"
#include "board/board_helper.h"
#include "board/location.h"

Number GetBoardNumber(const Board &board, int index) {
  return board.GetNumber(Board::ToLocation(index));
}

Number GetBoardNumber(const Board &board, int x, int y) {
  return board.GetNumber(Location(x, y));
}

void SetBoardNumber(Board *board, int x, int y, Number number) {
  board->SetNumber(Location(x, y), number);
}
