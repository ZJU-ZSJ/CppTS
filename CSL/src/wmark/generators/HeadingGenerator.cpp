﻿/*
** Xin YUAN, 2019, BSD (2)
*/

////////////////////////////////////////////////////////////////////////////////

#include "precomp.h"

#include "../WmarkHtmlGenerator.h"

////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
namespace CSL {
////////////////////////////////////////////////////////////////////////////////

// WmarkHtmlGeneratorHelper

WmarkMetaDataTraversalAction WmarkHtmlGeneratorHelper::get_HeadingGenerator()
{
	return [](bool bOpen, RdMetaData& data, RdMetaDataPosition pos, std::ostream& stm)->bool
			{
	            int heading_level = 0;
                std::string heading = (const char *) data.GetData(pos);
                while (heading.at(heading_level) == '#' ) {
                    heading_level++;
                }
                stm << "<" << (bOpen ? "h" : "/h") << heading_level << ">" << (bOpen ? "" : "\r\n");
                return true;
			};
}

////////////////////////////////////////////////////////////////////////////////
}
////////////////////////////////////////////////////////////////////////////////
