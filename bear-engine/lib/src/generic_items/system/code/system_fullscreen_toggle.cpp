/*
  Copyright (C) 2012 Stuffomatic Ltd. <contact@stuff-o-matic.com>

  All rights reserved.

  See the accompanying license file for details about usage, modification and
  distribution of this file.
*/
/**
 * \file
 * \brief Implementation of the bear::system_fullscreen_toggle class.
 * \author Julien Jorge
 */
#include "generic_items/system/system_fullscreen_toggle.hpp"

#include "engine/game.hpp"

BASE_ITEM_EXPORT( system_fullscreen_toggle, bear )

/*----------------------------------------------------------------------------*/
/**
 * \brief Update the state of the item.
 * \param elapsed_time The elapsed time since the last call.
 */
void
bear::system_fullscreen_toggle::progress( universe::time_type elapsed_time )
{
  super::progress( elapsed_time );

  progress_input_reader( elapsed_time );
  
  toggle( bear::engine::game::get_instance().get_fullscreen(), this );
} // system_fullscreen_toggle::progress()

/*----------------------------------------------------------------------------*/
/**
 * \brief The mouse has been pressed on the item.
 * \param button The pressed button.
 * \param pos The position of the mouse on the item.
 */
bool bear::system_fullscreen_toggle::mouse_pressed_local
( input::mouse::mouse_code button, const universe::position_type& pos )
{
  super::mouse_pressed_local( button, pos );

  bear::engine::game::get_instance().toggle_fullscreen();

  return true;
} // system_fullscreen_toggle::mouse_pressed_local()
