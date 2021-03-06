/*
  Copyright (C) 2012 Stuffomatic Ltd. <contact@stuff-o-matic.com>

  All rights reserved.

  See the accompanying license file for details about usage, modification and
  distribution of this file.
*/
/**
 * \file
 * \brief Compile the node of the "file" rule.
 * \author Julien Jorge
 */
#ifndef __ENGINE_NODE_PARSER_FILE_HPP__
#define __ENGINE_NODE_PARSER_FILE_HPP__

#include "engine/script/node_parser/node_parser.hpp"

#include "engine/i18n/translator.hpp"

#include "engine/class_export.hpp"

namespace bear
{
  namespace engine
  {
    class call_sequence;

    /**
     * \brief Compile the node of the "file" rule.
     * \author Julien Jorge
     */
    class ENGINE_EXPORT node_parser_file:
      public node_parser
    {
    public:
      void parse_node
        ( call_sequence& seq, const tree_node& node,
          translator t ) const;

    }; // class node_parser_file
  } // namespace engine
} // namespace bear

#endif // __ENGINE_NODE_PARSER_FILE_HPP__
