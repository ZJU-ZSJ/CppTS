﻿/*
** Xin YUAN, 2019, BSD (2)
*/

////////////////////////////////////////////////////////////////////////////////
#ifndef __WMARK_DEF_H__
#define __WMARK_DEF_H__
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
namespace CSL {
////////////////////////////////////////////////////////////////////////////////

//Action IDs for scanner
enum {
	WMARK_SCANNER_TK_ACTION = 1,
	WMARK_SCANNER_COMMENT_ACTION,
	WMARK_SCANNER_TEXT_ACTION,
	WMARK_SCANNER_CODETEXT_ACTION,
    WMARK_SCANNER_IMAGE_ACTION,
    WMARK_SCANNER_OL_ACTION,
    WMARK_SCANNER_UL_ACTION,
};

//Token IDs
enum {
	WMARK_TK_RETURN = 1,
	WMARK_TK_COMMENT,
	WMARK_TK_INDENT,
	WMARK_TK_TEXT,
    WMARK_TK_HEADING,
	WMARK_TK_BOLD,
	WMARK_TK_ITALIC,
	WMARK_TK_FOOBAR,
	WMARK_TK_CODEINLINE,
	WMARK_TK_CODEINPARAGRAPH,
	WMARK_TK_CODETEXT,
	WMARK_TK_IMAGE,
	WMARK_TK_OLI,
	WMARK_TK_ULI,
	WMARK_TK_MAX
};

//NT
enum {
	WMARK_NT_program = 501,
	WMARK_NT_return_list,
	WMARK_NT_r_body,
	WMARK_NT_b_body,
	WMARK_NT_block_element,
	WMARK_NT_be_tail,
	WMARK_NT_ber_tail,
	WMARK_NT_berr_tail,
	WMARK_NT_return_list_tail,
	WMARK_NT_line_element,
	WMARK_NT_up,
	WMARK_NT_text,
	WMARK_NT_text_tail,
	WMARK_NT_bold_text,
	WMARK_NT_italic_text,
	WMARK_NT_OLI,
	WMARK_NT_ULI,
	WMARK_NT_OL,
	WMARK_NT_UL,
	WMARK_NT_li_tail,
};

//actions for parser
enum {
	WMARK_PARSER_ACT_program = 1,
	WMARK_PARSER_ACT_TK_COMMENT,
	WMARK_PARSER_ACT_block_element,
	WMARK_PARSER_ACT_UP,
	WMARK_PARSER_ACT_TK_TEXT,
	WMARK_PARSER_ACT_TK_INDENT,
	WMARK_PARSER_ACT_TK_ITALIC,
	WMARK_PARSER_ACT_TK_BOLD,
	WMARK_PARSER_ACT_TK_HEADING,
	WMARK_PARSER_ACT_TK_CODE,
	WMARK_PARSER_ACT_TK_IMAGE,
	WMARK_PARSER_ACT_NT_OL,
	WMARK_PARSER_ACT_NT_UL,
	WMARK_PARSER_ACT_NT_LI,
};

//meta types
enum {
	WMARK_NODETYPE_ROOT = 1,
	WMARK_NODETYPE_COMMENT,
	WMARK_NODETYPE_PARAGRAPH,
	WMARK_NODETYPE_TEXT,
	WMARK_NODETYPE_INDENT,
	WMARK_NODETYPE_ITALIC,
	WMARK_NODETYPE_BOLD,
	WMARK_NODETYPE_HEADING,
	WMARK_NODETYPE_CODE,
	WMARK_NODETYPE_IMAGE,
	WMARK_NODETYPE_OL,
	WMARK_NODETYPE_UL,
	WMARK_NODETYPE_LI,
};

//code types
enum {
    NON_CODE = 0,
    CODE_OPEN,
    CODE_CLOSE,
};

//meta data
#define WMARK_ROOT_SYMBOL  "document"

////////////////////////////////////////////////////////////////////////////////
}
////////////////////////////////////////////////////////////////////////////////
#endif
////////////////////////////////////////////////////////////////////////////////
