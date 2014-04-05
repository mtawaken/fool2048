/*
 * default_adding_number_player.h
 *
 *  Created on: Mar 23, 2014
 *      Author: chncwang
 */

#ifndef DEFAULT_ADDING_NUMBER_PLAYER_H_
#define DEFAULT_ADDING_NUMBER_PLAYER_H_

#include "adding_number_player.h"

class DefaultAddingNumberPlayer : public AddingNumberPlayer {
public:
  DefaultAddingNumberPlayer() = default;
  ~DefaultAddingNumberPlayer() = default;

  FullBoard::AddingNumberMove NextMove(const FullBoard &full_board) const;
};

#endif /* DEFAULT_ADDING_NUMBER_PLAYER_H_ */
