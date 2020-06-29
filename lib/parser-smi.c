/* A Bison parser, made by GNU Bison 1.875a.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* If NAME_PREFIX is specified substitute the variables and functions
   names.  */
#define yyparse smiparse
#define yylex   smilex
#define yyerror smierror
#define yylval  smilval
#define yychar  smichar
#define yydebug smidebug
#define yynerrs sminerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     DOT_DOT = 258,
     COLON_COLON_EQUAL = 259,
     UPPERCASE_IDENTIFIER = 260,
     LOWERCASE_IDENTIFIER = 261,
     NUMBER = 262,
     NEGATIVENUMBER = 263,
     NUMBER64 = 264,
     NEGATIVENUMBER64 = 265,
     BIN_STRING = 266,
     HEX_STRING = 267,
     QUOTED_STRING = 268,
     ACCESS = 269,
     AGENT_CAPABILITIES = 270,
     APPLICATION = 271,
     AUGMENTS = 272,
     BEGIN_ = 273,
     BITS = 274,
     CHOICE = 275,
     CONTACT_INFO = 276,
     CREATION_REQUIRES = 277,
     COUNTER32 = 278,
     COUNTER64 = 279,
     DEFINITIONS = 280,
     DEFVAL = 281,
     DESCRIPTION = 282,
     DISPLAY_HINT = 283,
     END = 284,
     ENTERPRISE = 285,
     EXPORTS = 286,
     EXTENDS = 287,
     FROM = 288,
     GROUP = 289,
     GAUGE32 = 290,
     IDENTIFIER = 291,
     IMPLICIT = 292,
     IMPLIED = 293,
     IMPORTS = 294,
     INCLUDES = 295,
     INDEX = 296,
     INSTALL_ERRORS = 297,
     INTEGER = 298,
     INTEGER32 = 299,
     INTEGER64 = 300,
     IPADDRESS = 301,
     LAST_UPDATED = 302,
     MACRO = 303,
     MANDATORY_GROUPS = 304,
     MAX_ACCESS = 305,
     MIN_ACCESS = 306,
     MODULE = 307,
     MODULE_COMPLIANCE = 308,
     MODULE_IDENTITY = 309,
     NOT_ACCESSIBLE = 310,
     NOTIFICATIONS = 311,
     NOTIFICATION_GROUP = 312,
     NOTIFICATION_TYPE = 313,
     OBJECT = 314,
     OBJECT_GROUP = 315,
     OBJECT_IDENTITY = 316,
     OBJECT_TYPE = 317,
     OBJECTS = 318,
     OCTET = 319,
     OF = 320,
     ORGANIZATION = 321,
     OPAQUE = 322,
     PIB_ACCESS = 323,
     PIB_DEFINITIONS = 324,
     PIB_INDEX = 325,
     PIB_MIN_ACCESS = 326,
     PIB_REFERENCES = 327,
     PIB_TAG = 328,
     POLICY_ACCESS = 329,
     PRODUCT_RELEASE = 330,
     REFERENCE = 331,
     REVISION = 332,
     SEQUENCE = 333,
     SIZE = 334,
     STATUS = 335,
     STRING = 336,
     SUBJECT_CATEGORIES = 337,
     SUPPORTS = 338,
     SYNTAX = 339,
     TEXTUAL_CONVENTION = 340,
     TIMETICKS = 341,
     TRAP_TYPE = 342,
     UNIQUENESS = 343,
     UNITS = 344,
     UNIVERSAL = 345,
     UNSIGNED32 = 346,
     UNSIGNED64 = 347,
     VALUE = 348,
     VARIABLES = 349,
     VARIATION = 350,
     WRITE_SYNTAX = 351
   };
#endif
#define DOT_DOT 258
#define COLON_COLON_EQUAL 259
#define UPPERCASE_IDENTIFIER 260
#define LOWERCASE_IDENTIFIER 261
#define NUMBER 262
#define NEGATIVENUMBER 263
#define NUMBER64 264
#define NEGATIVENUMBER64 265
#define BIN_STRING 266
#define HEX_STRING 267
#define QUOTED_STRING 268
#define ACCESS 269
#define AGENT_CAPABILITIES 270
#define APPLICATION 271
#define AUGMENTS 272
#define BEGIN_ 273
#define BITS 274
#define CHOICE 275
#define CONTACT_INFO 276
#define CREATION_REQUIRES 277
#define COUNTER32 278
#define COUNTER64 279
#define DEFINITIONS 280
#define DEFVAL 281
#define DESCRIPTION 282
#define DISPLAY_HINT 283
#define END 284
#define ENTERPRISE 285
#define EXPORTS 286
#define EXTENDS 287
#define FROM 288
#define GROUP 289
#define GAUGE32 290
#define IDENTIFIER 291
#define IMPLICIT 292
#define IMPLIED 293
#define IMPORTS 294
#define INCLUDES 295
#define INDEX 296
#define INSTALL_ERRORS 297
#define INTEGER 298
#define INTEGER32 299
#define INTEGER64 300
#define IPADDRESS 301
#define LAST_UPDATED 302
#define MACRO 303
#define MANDATORY_GROUPS 304
#define MAX_ACCESS 305
#define MIN_ACCESS 306
#define MODULE 307
#define MODULE_COMPLIANCE 308
#define MODULE_IDENTITY 309
#define NOT_ACCESSIBLE 310
#define NOTIFICATIONS 311
#define NOTIFICATION_GROUP 312
#define NOTIFICATION_TYPE 313
#define OBJECT 314
#define OBJECT_GROUP 315
#define OBJECT_IDENTITY 316
#define OBJECT_TYPE 317
#define OBJECTS 318
#define OCTET 319
#define OF 320
#define ORGANIZATION 321
#define OPAQUE 322
#define PIB_ACCESS 323
#define PIB_DEFINITIONS 324
#define PIB_INDEX 325
#define PIB_MIN_ACCESS 326
#define PIB_REFERENCES 327
#define PIB_TAG 328
#define POLICY_ACCESS 329
#define PRODUCT_RELEASE 330
#define REFERENCE 331
#define REVISION 332
#define SEQUENCE 333
#define SIZE 334
#define STATUS 335
#define STRING 336
#define SUBJECT_CATEGORIES 337
#define SUPPORTS 338
#define SYNTAX 339
#define TEXTUAL_CONVENTION 340
#define TIMETICKS 341
#define TRAP_TYPE 342
#define UNIQUENESS 343
#define UNITS 344
#define UNIVERSAL 345
#define UNSIGNED32 346
#define UNSIGNED64 347
#define VALUE 348
#define VARIABLES 349
#define VARIATION 350
#define WRITE_SYNTAX 351




/* Copy the first part of user declarations.  */
#line 14 "parser-smi.y"


#include <config.h>
    
#ifdef BACKEND_SMI

#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>

#if defined(_MSC_VER)
#include <malloc.h>
#endif

#include "smi.h"
#include "error.h"
#include "parser-smi.h"
#include "scanner-smi.h"
#include "data.h"
#include "check.h"
#include "util.h"
    
#ifdef HAVE_DMALLOC_H
#include <dmalloc.h>
#endif



/*
 * These arguments are passed to yyparse() and yylex().
 */
#define YYPARSE_PARAM parserPtr
#define YYLEX_PARAM   parserPtr

    
    
#define thisParserPtr      ((Parser *)parserPtr)
#define thisModulePtr     (((Parser *)parserPtr)->modulePtr)


    
/*
 * NOTE: The argument lvalp is not really a void pointer. Unfortunately,
 * we don't know it better at this point. bison generated C code declares
 * YYSTYPE just a few lines below based on the `%union' declaration.
 */
extern int yylex(void *lvalp, Parser *parserPtr);



static Node	   *parentNodePtr;
static int	   impliedFlag;
static SmiBasetype defaultBasetype;
static Module      *complianceModulePtr = NULL;
static Module      *capabilitiesModulePtr = NULL;
static SmiNodekind variationkind;
static int         firstStatementLine = 0;
static int         firstNestedStatementLine = 0;
static int         currentDecl = SMI_DECL_UNKNOWN;
static int	   firstRevisionLine = 0;

static int	   indexFlag;
/*
 * Values for the indexFlag variable
 */
#define INDEXFLAG_NONE     0
#define INDEXFLAG_PIBINDEX 1
#define INDEXFLAG_AUGMENTS 2
#define INDEXFLAG_EXTENDS  3
 
#define MAX_UNSIGNED32		4294967295
#define MIN_UNSIGNED32		0
#define MAX_INTEGER32		2147483647
#define MIN_INTEGER32		-2147483648

#define SMI_EPOCH	631152000	/* 01 Jan 1990 00:00:00 */ 

 

static char *convertImportv2[] = {
    "RFC1155-SMI", "internet",	    "SNMPv2-SMI", "internet",
    "RFC1155-SMI", "directory",	    "SNMPv2-SMI", "directory",
    "RFC1155-SMI", "mgmt",	    "SNMPv2-SMI", "mgmt",
    "RFC1155-SMI", "experimental",  "SNMPv2-SMI", "experimental",
    "RFC1155-SMI", "private",	    "SNMPv2-SMI", "private",
    "RFC1155-SMI", "enterprises",   "SNMPv2-SMI", "enterprises",
    "RFC1155-SMI", "IpAddress",     "SNMPv2-SMI", "IpAddress",
    "RFC1155-SMI", "Counter",       "SNMPv2-SMI", "Counter32",
    "RFC1155-SMI", "Gauge",         "SNMPv2-SMI", "Gauge32",
    "RFC1155-SMI", "TimeTicks",     "SNMPv2-SMI", "TimeTicks",
    "RFC1155-SMI", "Opaque",        "SNMPv2-SMI", "Opaque",
    "RFC1065-SMI", "internet",	    "SNMPv2-SMI", "internet",
    "RFC1065-SMI", "directory",	    "SNMPv2-SMI", "directory",
    "RFC1065-SMI", "mgmt",	    "SNMPv2-SMI", "mgmt",
    "RFC1065-SMI", "experimental",  "SNMPv2-SMI", "experimental",
    "RFC1065-SMI", "private",	    "SNMPv2-SMI", "private",
    "RFC1065-SMI", "enterprises",   "SNMPv2-SMI", "enterprises",
    "RFC1065-SMI", "IpAddress",     "SNMPv2-SMI", "IpAddress",
    "RFC1065-SMI", "Counter",       "SNMPv2-SMI", "Counter32",
    "RFC1065-SMI", "Gauge",         "SNMPv2-SMI", "Gauge32",
    "RFC1065-SMI", "TimeTicks",     "SNMPv2-SMI", "TimeTicks",
    "RFC1065-SMI", "Opaque",        "SNMPv2-SMI", "Opaque",
    "RFC1213-MIB", "mib-2",         "SNMPv2-SMI", "mib-2",    
    "RFC1213-MIB", "DisplayString", "SNMPv2-TC",  "DisplayString",    
    NULL, NULL, NULL, NULL
};
 

 
static void
checkNameLen(Parser *parser, char *name, int error_32, int error_64)
{
    int len = strlen(name);
    
    if (len > 64) {
	smiPrintError(parser, error_64, name);
    } else if (len > 32) {
	smiPrintError(parser, error_32, name);
    }
}


 
static void
checkModuleIdentity(Parser *parserPtr, Module *modulePtr)
{
    if ((modulePtr->export.language == SMI_LANGUAGE_SMIV2)
	&& (modulePtr->numModuleIdentities < 1)
	&& strcmp(modulePtr->export.name, "SNMPv2-SMI")
	&& strcmp(modulePtr->export.name, "SNMPv2-CONF")
	&& strcmp(modulePtr->export.name, "SNMPv2-TC")
        && strcmp(modulePtr->export.name, "COPS-PR-SPPI")) {
	smiPrintError(parserPtr, ERR_NO_MODULE_IDENTITY);
    }
}



static void
checkModuleName(Parser *parserPtr, const char *name)
{
     static char *ignore[] = {
	  "SNMPv2-SMI", "SNMPv2-TC", "SNMPv2-CONF", NULL
     };

     int i, len;

     for (i = 0; ignore[i]; i++) {
	  if (strcmp(ignore[i], name) == 0) {
	       return;
	  }
     }

     len = strlen(name);
     if (len > 3 && (strcmp(name + len - 4, "-MIB") == 0)) {
	  return;
     }
     
     smiPrintError(parserPtr, ERR_MODULENAME_SUFFIX, name);
}



static void
checkObjects(Parser *parserPtr, Module *modulePtr)
{
    Object *objectPtr;
    Node *nodePtr;
    int i;
    Type *counterTypePtr, *counter32TypePtr, *counter64TypePtr;
    
    counterTypePtr = findTypeByName("Counter");
    counter32TypePtr = findTypeByModulenameAndName("SNMPv2-SMI", "Counter32");
    counter64TypePtr = findTypeByModulenameAndName("SNMPv2-SMI", "Counter64");
    
    for (objectPtr = modulePtr->firstObjectPtr;
	 objectPtr; objectPtr = objectPtr->nextPtr) {

	Object *parentPtr;
	
	if (objectPtr->nodePtr->parentPtr &&
	    objectPtr->nodePtr->parentPtr->lastObjectPtr) {
	    parentPtr = objectPtr->nodePtr->parentPtr->lastObjectPtr;
	} else {
	    parentPtr = NULL;
	}

	/*
	 * Set nodekinds of all newly defined objects.
	 */
	
	if (objectPtr->export.decl == SMI_DECL_MODULEIDENTITY) {
	    objectPtr->export.nodekind = SMI_NODEKIND_NODE;
	} else if ((objectPtr->export.decl == SMI_DECL_VALUEASSIGNMENT) ||
		   (objectPtr->export.decl == SMI_DECL_OBJECTIDENTITY)) {
	    objectPtr->export.nodekind = SMI_NODEKIND_NODE;
	} else if ((objectPtr->export.decl == SMI_DECL_OBJECTTYPE) &&
		   (objectPtr->typePtr) &&
		   (objectPtr->typePtr->export.decl == SMI_DECL_IMPL_SEQUENCEOF)) {
	    objectPtr->export.nodekind = SMI_NODEKIND_TABLE;
	} else if ((objectPtr->export.decl == SMI_DECL_OBJECTTYPE) &&
		   (objectPtr->export.indexkind != SMI_INDEX_UNKNOWN)) {
	    objectPtr->export.nodekind = SMI_NODEKIND_ROW;
	} else if ((objectPtr->export.decl == SMI_DECL_NOTIFICATIONTYPE) ||
		   (objectPtr->export.decl == SMI_DECL_TRAPTYPE)) {
	    objectPtr->export.nodekind = SMI_NODEKIND_NOTIFICATION;
	} else if ((objectPtr->export.decl == SMI_DECL_OBJECTGROUP) ||
		   (objectPtr->export.decl == SMI_DECL_NOTIFICATIONGROUP)) {
	    objectPtr->export.nodekind = SMI_NODEKIND_GROUP;
	} else if (objectPtr->export.decl == SMI_DECL_MODULECOMPLIANCE) {
	    objectPtr->export.nodekind = SMI_NODEKIND_COMPLIANCE;
	} else if (objectPtr->export.decl == SMI_DECL_AGENTCAPABILITIES) {
	    objectPtr->export.nodekind = SMI_NODEKIND_CAPABILITIES;
	} else if ((objectPtr->export.decl == SMI_DECL_OBJECTTYPE) &&
		   (parentPtr) &&
		   (parentPtr->export.indexkind != SMI_INDEX_UNKNOWN)) {
	    objectPtr->export.nodekind = SMI_NODEKIND_COLUMN;
	} else if ((objectPtr->export.decl == SMI_DECL_OBJECTTYPE) &&
		   (parentPtr) &&
		   (parentPtr->export.indexkind == SMI_INDEX_UNKNOWN)) {
	    objectPtr->export.nodekind = SMI_NODEKIND_SCALAR;
	}
    }

    for (objectPtr = modulePtr->firstObjectPtr;
	 objectPtr; objectPtr = objectPtr->nextPtr) {

	Object *parentPtr;
	
	if (objectPtr->nodePtr->parentPtr &&
	    objectPtr->nodePtr->parentPtr->lastObjectPtr) {
	    parentPtr = objectPtr->nodePtr->parentPtr->lastObjectPtr;
	} else {
	    parentPtr = NULL;
	}

	/*
	 * Check whether the associated type resolves to a known base type.
	 */
	
	if (objectPtr->typePtr
	    && (objectPtr->export.nodekind == SMI_NODEKIND_COLUMN
		|| objectPtr->export.nodekind == SMI_NODEKIND_SCALAR)
	    && objectPtr->typePtr->export.basetype == SMI_BASETYPE_UNKNOWN) {
	    smiPrintErrorAtLine(parserPtr, ERR_BASETYPE_UNKNOWN,
				objectPtr->line,
				objectPtr->typePtr->export.name ?
				objectPtr->typePtr->export.name : "[unknown]",
				objectPtr->export.name);
	    if (objectPtr->nodePtr->parentPtr->firstObjectPtr->export.nodekind
		== SMI_NODEKIND_TABLE) {
		/* the parent node is a table node, so assume this is
		 *  a row node. this adjusts missing INDEXs in RFC 1158.
		 */
		objectPtr->export.nodekind = SMI_NODEKIND_ROW;
	    }
	}

	/*
	 * Mark types that are referenced in this module.
	 */

	if (objectPtr->typePtr
	    && (objectPtr->export.nodekind == SMI_NODEKIND_COLUMN
		|| objectPtr->export.nodekind == SMI_NODEKIND_SCALAR)
	    && (objectPtr->typePtr->export.decl == SMI_DECL_TYPEDEF
		|| objectPtr->typePtr->export.decl == SMI_DECL_TEXTUALCONVENTION
		|| objectPtr->typePtr->export.decl == SMI_DECL_IMPLICIT_TYPE)) {
	    addTypeFlags(objectPtr->typePtr, FLAG_INSYNTAX);
	    if (objectPtr->typePtr->export.decl == SMI_DECL_IMPLICIT_TYPE) {
		addTypeFlags(objectPtr->typePtr->parentPtr, FLAG_INSYNTAX);
	    }
	}
	
	/*
	 * Check whether the status of the associated type matches the
	 * status of the object.
	 */

	if (objectPtr->typePtr
	    && (objectPtr->export.nodekind == SMI_NODEKIND_COLUMN
		|| objectPtr->export.nodekind == SMI_NODEKIND_SCALAR)
	    && (objectPtr->export.status < objectPtr->typePtr->export.status)) {
	    if (objectPtr->typePtr->export.status == SMI_STATUS_DEPRECATED) {
		smiPrintErrorAtLine(parserPtr, ERR_TYPE_STATUS_DEPRECATED,
				    objectPtr->line,
				    objectPtr->typePtr->export.name,
				    objectPtr->export.name);
	    }
	    if (objectPtr->typePtr->export.status == SMI_STATUS_OBSOLETE) {
		smiPrintErrorAtLine(parserPtr, ERR_TYPE_STATUS_OBSOLETE,
				    objectPtr->line,
				    objectPtr->typePtr->export.name,
				    objectPtr->export.name);
	    }
	}

	/*
	 * Check the nodekind of the parent node.
	 */

	if (parentPtr) {
	    switch (objectPtr->export.nodekind) {
	    case SMI_NODEKIND_COLUMN:
		if (parentPtr->export.nodekind != SMI_NODEKIND_ROW) {
		    smiPrintErrorAtLine(parserPtr, ERR_COLUMN_PARENT_TYPE,
					objectPtr->line, objectPtr->export.name);
		}
		break;
	    case SMI_NODEKIND_ROW:
		if (parentPtr->export.nodekind != SMI_NODEKIND_TABLE) {
		    smiPrintErrorAtLine(parserPtr, ERR_ROW_PARENT_TYPE,
					objectPtr->line, objectPtr->export.name);
		}
		if (parentPtr->typePtr && parentPtr->typePtr->parentPtr &&
		    strcmp(parentPtr->typePtr->parentPtr->export.name,
			   objectPtr->typePtr->export.name)) {
		    smiPrintErrorAtLine(parserPtr, ERR_TABLE_ROW_TYPE_MISMATCH,
					objectPtr->line,
					objectPtr->export.name);
		}
		break;
	    case SMI_NODEKIND_TABLE:
		if ((parentPtr->export.nodekind != SMI_NODEKIND_UNKNOWN) &&
		    (parentPtr->export.nodekind != SMI_NODEKIND_NODE)) {
		    smiPrintErrorAtLine(parserPtr, ERR_TABLE_PARENT_TYPE,
					objectPtr->line, objectPtr->export.name);
		}
		break;
	    case SMI_NODEKIND_SCALAR:
		if ((parentPtr->export.nodekind != SMI_NODEKIND_UNKNOWN) &&
		    (parentPtr->export.nodekind != SMI_NODEKIND_NODE)) {
		    smiPrintErrorAtLine(parserPtr, ERR_SCALAR_PARENT_TYPE,
					objectPtr->line, objectPtr->export.name);
		}
		break;
	    case SMI_NODEKIND_NOTIFICATION:
		if ((parentPtr->export.nodekind != SMI_NODEKIND_NODE) &&
		    (parentPtr->export.nodekind != SMI_NODEKIND_UNKNOWN)) {
		    smiPrintErrorAtLine(parserPtr, ERR_NOTIFICATION_PARENT_TYPE,
					objectPtr->line, objectPtr->export.name);
		}
		if (parserPtr && parentPtr->nodePtr->parentPtr &&
		    parentPtr->nodePtr->parentPtr->lastObjectPtr) {
		    Object *parent2Ptr = parentPtr->nodePtr->parentPtr->lastObjectPtr;
		    if ((parent2Ptr->export.nodekind != SMI_NODEKIND_NODE) &&
			(parent2Ptr->export.nodekind != SMI_NODEKIND_UNKNOWN)) {
			smiPrintErrorAtLine(parserPtr,
					    ERR_NOTIFICATION_PARENT_TYPE,
					    objectPtr->line,
					    objectPtr->export.name);
		    }
		}
		break;
	    case SMI_NODEKIND_NODE:
		/* Node defined by OBJECT IDENTIFIER assignments can have
		   arbitrary parent node. */
		if ((parentPtr->export.nodekind != SMI_NODEKIND_UNKNOWN) &&
		    (parentPtr->export.nodekind != SMI_NODEKIND_NODE) &&
		    (objectPtr->export.decl != SMI_DECL_VALUEASSIGNMENT)) {
		    smiPrintErrorAtLine(parserPtr, ERR_NODE_PARENT_TYPE,
					objectPtr->line, objectPtr->export.name);
		}
		break;
	    case SMI_NODEKIND_GROUP:
		if ((parentPtr->export.nodekind != SMI_NODEKIND_UNKNOWN) &&
		    (parentPtr->export.nodekind != SMI_NODEKIND_NODE)) {
		    smiPrintErrorAtLine(parserPtr, ERR_GROUP_PARENT_TYPE,
					objectPtr->line, objectPtr->export.name);
		}
		break;
	    case SMI_NODEKIND_COMPLIANCE:
		if ((parentPtr->export.nodekind != SMI_NODEKIND_UNKNOWN) &&
		    (parentPtr->export.nodekind != SMI_NODEKIND_NODE)) {
		    smiPrintErrorAtLine(parserPtr, ERR_COMPLIANCE_PARENT_TYPE,
					objectPtr->line, objectPtr->export.name);
		}
		break;
	    case SMI_NODEKIND_CAPABILITIES:
		if ((parentPtr->export.nodekind != SMI_NODEKIND_UNKNOWN) &&
		    (parentPtr->export.nodekind != SMI_NODEKIND_NODE)) {
		    smiPrintErrorAtLine(parserPtr, ERR_CAPABILITIES_PARENT_TYPE,
					objectPtr->line, objectPtr->export.name);
		}
		break;
	    }
	}
	
	/*
	 * Check whether groups only contain scalars, columns and
	 * notifications.
	 */

	if (objectPtr->export.nodekind == SMI_NODEKIND_GROUP) {
	    smiCheckGroupMembers(parserPtr, objectPtr);
	}

	/*
	 * Check whether compliance statements contain out of date
	 * groups or objects.
	 */

	if (objectPtr->export.nodekind == SMI_NODEKIND_COMPLIANCE) {
	    smiCheckComplianceStatus(parserPtr, objectPtr);
	}

	/*
	 * Check whether notification statements contain useful
	 * objects.
	 */

	if (objectPtr->export.nodekind == SMI_NODEKIND_NOTIFICATION) {
	    smiCheckNotificationOid(parserPtr, modulePtr, objectPtr);
	    smiCheckNotificationMembers(parserPtr, objectPtr);
	}

        if (modulePtr->export.language != SMI_LANGUAGE_SPPI) {
	    /*
	     * Check whether tables and rows are not accessible
	     * (RFC 2578 7.1.12).
	     */

	    if (objectPtr->export.nodekind == SMI_NODEKIND_TABLE
	        && objectPtr->export.access != SMI_ACCESS_NOT_ACCESSIBLE) {
	        smiPrintErrorAtLine(parserPtr, ERR_TABLE_ACCESS,
				    objectPtr->line, objectPtr->export.name);
	    }

	    if (objectPtr->export.nodekind == SMI_NODEKIND_ROW
	        && objectPtr->export.access != SMI_ACCESS_NOT_ACCESSIBLE) {
	        smiPrintErrorAtLine(parserPtr, ERR_ROW_ACCESS,
				    objectPtr->line, objectPtr->export.name);
	    }

	    /*
	     * Check whether counter objects are read-only or
	     * accessible-for-notify (RFC 2578, 7.1.6).
	     */
	    if (((objectPtr->export.nodekind == SMI_NODEKIND_SCALAR) ||
		 (objectPtr->export.nodekind == SMI_NODEKIND_COLUMN)) &&
	        (objectPtr->export.access != SMI_ACCESS_NOTIFY) &&
		(objectPtr->export.access != SMI_ACCESS_READ_ONLY) &&
		(smiTypeDerivedFrom(objectPtr->typePtr, counterTypePtr) ||
		 smiTypeDerivedFrom(objectPtr->typePtr, counter32TypePtr) ||
		 smiTypeDerivedFrom(objectPtr->typePtr, counter64TypePtr))) {
	        smiPrintErrorAtLine(parserPtr, ERR_COUNTER_ACCESS,
				    objectPtr->line, objectPtr->export.name);
	    }
        }
	
	/*
	 * Check whether a row's subid is 1, see RFC 2578 7.10 (1).
	 */
	
	if (objectPtr->export.nodekind == SMI_NODEKIND_ROW) {
	    int len;
	    
	    if (objectPtr->nodePtr->subid != 1) {
		smiPrintErrorAtLine(parserPtr, ERR_ROW_SUBID_ONE,
				    objectPtr->line, objectPtr->export.name);
	    }

	    len = strlen(objectPtr->export.name);
	    if (len < 6 || strcmp(objectPtr->export.name+len-5, "Entry")) {
		smiPrintErrorAtLine(parserPtr, ERR_ROWNAME_ENTRY,
				    objectPtr->line, objectPtr->export.name);
	    } else {

		/*
		 * This misreports some cases where the table name
		 * does not have the "*Table" suffix.  This is trying
		 * to allow Entry names of either fooTableEntry or
		 * fooEntry.
		 */
		if (parentPtr &&
		    !(((int)strlen(parentPtr->export.name) == len ||
		       (int)strlen(parentPtr->export.name) == len - 5) &&
		      !strncmp(objectPtr->export.name, parentPtr->export.name,
			len - 5))) {
		    smiPrintErrorAtLine(parserPtr, ERR_ROWNAME_TABLENAME,
					objectPtr->line,
					objectPtr->export.name,
					parentPtr->export.name);
		}
	    }
	}

	/*
	 * Check whether a row's SEQUENCE contains exactly the list
	 * of child nodes (columns).  An unknown SEQUENCE type
	 * is handled later.
	 */

	if (objectPtr->export.nodekind == SMI_NODEKIND_ROW &&
	    ((objectPtr->typePtr->flags & FLAG_INCOMPLETE) == 0)) {
	    List *p;
	    Node *seqNodePtr, *childNodePtr;
	    Object *colPtr;
	    int i;
	    
	    /*
	     * Walk through the SEQUENCE elements and find those
	     * that are misordered or have no matching columnar object.
	     */
	    for (p = objectPtr->typePtr->listPtr, i = 1,
		     childNodePtr = objectPtr->nodePtr->firstChildPtr;
		 p && childNodePtr;
		 p = p->nextPtr, childNodePtr = childNodePtr->nextPtr, i++) {
		seqNodePtr = ((Object *)p->ptr)->nodePtr;

		if (seqNodePtr->parentPtr != childNodePtr->parentPtr) {
		    smiPrintErrorAtLine(parserPtr, ERR_SEQUENCE_NO_COLUMN,
					objectPtr->typePtr->line,
					i,
					((Object *)p->ptr)->export.name,
					objectPtr->export.name);
		    continue;
		}

		if (seqNodePtr != childNodePtr) {
		    smiPrintErrorAtLine(parserPtr, ERR_SEQUENCE_ORDER,
					objectPtr->typePtr->line,
					i,
					((Object *)p->ptr)->export.name,
					objectPtr->export.name);
		    break;
		}
	    }
	    if ((p != NULL) && (childNodePtr == NULL)) {
		smiPrintErrorAtLine(parserPtr, ERR_SEQUENCE_NO_COLUMN,
				    objectPtr->typePtr->line,
				    i, 
				    ((Object *)p->ptr)->export.name,
				    objectPtr->export.name);
	    }

	    /*
	     * Walk through all child objects and find those
	     * that were missing in the SEQUENCE.
	     */
	    for (childNodePtr = objectPtr->nodePtr->firstChildPtr;
		 childNodePtr; childNodePtr = childNodePtr->nextPtr) {
		colPtr = findObjectByModuleAndNode(modulePtr, childNodePtr);
		if (!colPtr) continue;
		for (p = objectPtr->typePtr->listPtr; p; p = p->nextPtr) {
		    if (((Object *)p->ptr)->nodePtr == colPtr->nodePtr)
			break;
		}
		if (!p) {
		    if (colPtr->export.name) {
			/*
			 * Don't complain, if it's an implcitly defined
			 * unnamed node (could happen for parent node of
			 * TRAP-TYPE definitions).
			 */
			smiPrintErrorAtLine(parserPtr,
					    ERR_SEQUENCE_MISSING_COLUMN,
					    objectPtr->typePtr->line,
					    objectPtr->typePtr->export.name,
					    colPtr->export.name);
		    }
		}
	    }
	    
	}
	
	if (objectPtr->export.nodekind == SMI_NODEKIND_TABLE) {
	    int len;

	    len = strlen(objectPtr->export.name);
	    if (len < 6 || strcmp(objectPtr->export.name+len-5, "Table")) {
		smiPrintErrorAtLine(parserPtr, ERR_TABLENAME_TABLE,
				    objectPtr->line, objectPtr->export.name);
	    }
	}

	/*
	 * TODO: check whether the row is the only node below the
         * table node
	 */

	/*
	 * Check references to unknown identifiers.
	 */

	if (objectPtr->flags & FLAG_INCOMPLETE) {
	    if (objectPtr->export.name) {
		smiPrintErrorAtLine(parserPtr, ERR_UNKNOWN_OIDLABEL,
				    objectPtr->line, objectPtr->export.name);
	    } else {
		smiPrintErrorAtLine(parserPtr, ERR_IMPLICIT_NODE,
				    objectPtr->line);
	    }
	}

	/*
	 * Adjust the status of implicit type definitions.
	 */
	
	if (objectPtr->typePtr
	    && (objectPtr->typePtr->export.decl == SMI_DECL_IMPLICIT_TYPE)
	    && (objectPtr->typePtr->export.status == SMI_STATUS_UNKNOWN)) {
	    objectPtr->typePtr->export.status = objectPtr->export.status;
	}

	/*
	 * Link implicit type definition from refinements into
	 * the type derivation tree. Adjust the status of implicit
	 * type definitions in refinements. 
	 */

	if (objectPtr->export.nodekind == SMI_NODEKIND_COMPLIANCE) {

	    List *listPtr;

	    for (listPtr = objectPtr->refinementlistPtr;
		 listPtr;
		 listPtr = listPtr->nextPtr) {

		Refinement *refinementPtr;
		Type *typePtr;
		
		refinementPtr = ((Refinement *)(listPtr->ptr));
		typePtr = refinementPtr->typePtr;
		if (typePtr) {
		    if (typePtr->export.status == SMI_STATUS_UNKNOWN) {
			typePtr->export.status = objectPtr->export.status;
		    }
		}

		typePtr = refinementPtr->writetypePtr;
		if (typePtr) {
		    if (typePtr->export.status == SMI_STATUS_UNKNOWN) {
			typePtr->export.status = objectPtr->export.status;
		    }
		}
		
	    }
	    /* relocate the refinement type into the type tree */
	    /* relocate the write refinement type into the type tree */
	}

	/*
	 * Set the oidlen/oid values that are not yet correct.
	 */

	if (objectPtr->export.oidlen == 0) {
	    if (objectPtr->nodePtr->oidlen == 0) {
		for (nodePtr = objectPtr->nodePtr, i = 1;
		     nodePtr->parentPtr != smiHandle->pendingNodePtr &&
			 nodePtr->parentPtr != smiHandle->rootNodePtr &&
			 nodePtr != nodePtr->parentPtr &&
			 i <= 128;
		     nodePtr = nodePtr->parentPtr, i++);
		if ((objectPtr->export.name) &&
		    ((i > 128) || (nodePtr == nodePtr->parentPtr))) {
		    smiPrintErrorAtLine(parserPtr, ERR_OID_RECURSIVE,
					objectPtr->line,
					objectPtr->export.name);
		}
		objectPtr->nodePtr->oid = smiMalloc(i * sizeof(SmiSubid));
		objectPtr->nodePtr->oidlen = i;
		for (nodePtr = objectPtr->nodePtr; i > 0; i--) {
		    objectPtr->nodePtr->oid[i-1] = nodePtr->subid;
		    nodePtr = nodePtr->parentPtr;
		}
	    }
	    objectPtr->export.oidlen = objectPtr->nodePtr->oidlen;
	    objectPtr->export.oid = objectPtr->nodePtr->oid;
	}

	if (objectPtr->export.nodekind != SMI_NODEKIND_NODE
	    && objectPtr->export.name
	    && objectPtr->export.oid[objectPtr->export.oidlen-1] == 0
	    && objectPtr->export.oidlen != 2 && objectPtr->export.oid[0] != 0) {
	    smiPrintErrorAtLine(parserPtr, ERR_OID_ADMIN_ZERO,
				objectPtr->line,
				objectPtr->export.name);
	}

	/*
	 * Check table linkage constraints for row objects.
	 */

	if (objectPtr->export.nodekind == SMI_NODEKIND_ROW) {
	    switch (objectPtr->export.indexkind) {
	    case SMI_INDEX_INDEX:
		smiCheckIndex(parserPtr, objectPtr);
		break;
	    case SMI_INDEX_AUGMENT:
            case SMI_INDEX_SPARSE:
		smiCheckAugment(parserPtr, objectPtr);
		break;
	    default:
		break;
	    }
	}
	
	/*
	 * Determine the longest common OID prefix of all nodes.
	 */

	if (!modulePtr->prefixNodePtr) {
	    modulePtr->prefixNodePtr = objectPtr->nodePtr;
	} else {
	    if (objectPtr->nodePtr->oidlen < modulePtr->prefixNodePtr->oidlen) {
		Node *nodePtr = findNodeByOid(objectPtr->nodePtr->oidlen,
					      modulePtr->prefixNodePtr->oid);
		if (nodePtr)
		    modulePtr->prefixNodePtr = nodePtr;
		else
		    smiPrintError(parserPtr, ERR_OTHER_ERROR,
				  "Failed to create complete object tree - "
				  "expect incorrect output");
	    }
	    for (i = 0; i < modulePtr->prefixNodePtr->oidlen; i++) {
		if (modulePtr->prefixNodePtr->oid[i] !=
		    objectPtr->nodePtr->oid[i]) {
		    modulePtr->prefixNodePtr =
			findNodeByOid(i, modulePtr->prefixNodePtr->oid);
		    break;
		}
	    }
	}
    }

    if (modulePtr->export.language == SMI_LANGUAGE_SMIV2) {
	for (objectPtr = modulePtr->firstObjectPtr;
	     objectPtr; objectPtr = objectPtr->nextPtr) {
	    
	    /*
	     * Check whether all objects and notifications are contained in at
	     * least one conformance group (RFC 2580 3.3 and 4.1).
	     */
	    
	    smiCheckGroupMembership(parserPtr, objectPtr);
	}
    }

    if (modulePtr->export.language == SMI_LANGUAGE_SPPI) {
        Object *parentPtr;
        
        for (objectPtr = modulePtr->firstObjectPtr;
             objectPtr; objectPtr = objectPtr->nextPtr) {
            /*
             * All checks for SPPI constructs
             */
            if (objectPtr->nodePtr->parentPtr)
                parentPtr = objectPtr->nodePtr->parentPtr->lastObjectPtr;
            else
                parentPtr = NULL;
            
            /*
             * Do all rows contain a PIB-INDEX/AUGMENTS/EXTENDS ?
             * See RFC 3159 7.5, 7.7, 7.8
             */
            if (parentPtr  &&
                (parentPtr->export.nodekind == SMI_NODEKIND_TABLE) &&
                (objectPtr->export.indexkind != SMI_INDEX_INDEX) &&
                (objectPtr->export.indexkind != SMI_INDEX_AUGMENT) &&
                (objectPtr->export.indexkind != SMI_INDEX_SPARSE))
                smiPrintErrorAtLine(parserPtr, ERR_ROW_LACKS_PIB_INDEX,
                                    objectPtr->line);

            /*
             * Does any non row contain a PIB-INDEX/AUGMENTS/EXTENDS ?
             * See RFC 3159 7.5, 7.7, 7.8
             */
            if ((objectPtr->export.nodekind != SMI_NODEKIND_ROW) &&
                (objectPtr->export.indexkind != SMI_INDEX_UNKNOWN))
                smiPrintErrorAtLine(parserPtr, ERR_PIB_INDEX_FOR_NON_ROW_TYPE,
                                    objectPtr->line);

            /*
             * Check the PIB-INDEX and other indices
             */
            if ((objectPtr->export.nodekind == SMI_NODEKIND_ROW) &&
                (objectPtr->export.indexkind == SMI_INDEX_INDEX)) {

                /*
                 * Only the first element (PIB-INDEX) has to be an InstanceId.
                 * See RFC 3159 7.5
                 */
                if (objectPtr->listPtr && objectPtr->listPtr->ptr) {
                    Object *pibindex = (Object *)objectPtr->listPtr->ptr;
                    if (pibindex->typePtr && pibindex->typePtr->export.name &&
                        strcmp(pibindex->typePtr->export.name, "InstanceId"))
                        smiPrintErrorAtLine(thisParserPtr, ERR_PIB_INDEX_NOT_INSTANCEID,
                                            pibindex->line, pibindex->export.name);
                }
            }
            
            /*
             * Do all tables contain a PIB-ACCESS clause?
             * See RFC 3159 7.3
             */
            if ((objectPtr->export.nodekind == SMI_NODEKIND_TABLE) &&
                (objectPtr->export.access == SMI_ACCESS_UNKNOWN))
                smiPrintErrorAtLine(parserPtr, ERR_TABLE_LACKS_PIB_ACCESS,
                                    objectPtr->line);

            /*
             * Does any non table types contain a PIB-ACCESS clause?
             * See RFC 3159 7.3
             */
            if (((objectPtr->export.nodekind == SMI_NODEKIND_NODE) ||
                 (objectPtr->export.nodekind == SMI_NODEKIND_ROW) ||
                 (objectPtr->export.nodekind == SMI_NODEKIND_SCALAR)) &&
                (objectPtr->export.access != SMI_ACCESS_UNKNOWN))
                smiPrintErrorAtLine(parserPtr, ERR_PIB_ACCESS_FOR_NON_TABLE,
                                    objectPtr->line);

            /*
             * Check the UNIQUENESS clause and its entries
             * See RFC 3159 7.9
             */
            if (objectPtr->uniquenessPtr) {
                if (objectPtr->export.nodekind != SMI_NODEKIND_ROW)
                    smiPrintErrorAtLine(parserPtr, ERR_UNIQUENESS_FOR_NON_ROW,
                                        objectPtr->line);
                else
                    smiCheckUniqueness(parserPtr, objectPtr);
            }
            
            /*
             * Does the PIB-REFERENCES object point to a PRC (table)?
             * See RFC 3159 7.10
             */
            if (objectPtr->typePtr && objectPtr->typePtr->export.name &&
                !strcmp(objectPtr->typePtr->export.name, "ReferenceId") &&
                objectPtr->relatedPtr &&
                (objectPtr->relatedPtr->export.nodekind != SMI_NODEKIND_ROW))
                smiPrintErrorAtLine(parserPtr, ERR_PIB_REFERENCES_NOT_ROW,
                                    objectPtr->line);

            /*
             * Do all PIB-TAGs point to objects with a SYNTAX of TagId?
             * See RFC 3159 7.12
             */
            if (objectPtr->typePtr && objectPtr->typePtr->export.name &&
                !strcmp(objectPtr->typePtr->export.name, "TagReferenceId") &&
                objectPtr->relatedPtr && objectPtr->relatedPtr->typePtr &&
                objectPtr->relatedPtr->typePtr->export.name &&
                strcmp(objectPtr->relatedPtr->typePtr->export.name, "TagId"))
                smiPrintErrorAtLine(parserPtr, ERR_PIB_TAG_TYPE, objectPtr->line);
            
            /*
             * Is the attribute member of at least one compliance group?
             * See RFC 3159 9.1
             */
            if (objectPtr->export.nodekind & SMI_NODEKIND_COLUMN) {
                Object *group;
                int found = 0;
                
                for (group = modulePtr->firstObjectPtr; group;
                     group = group->nextPtr) {
                    if ((group->export.nodekind == SMI_NODEKIND_GROUP) &&
                        group->listPtr) {
                        List *l;
                        
                        for (l = group->listPtr; l; l = l->nextPtr)
                            if (((Object *)l->ptr)->export.name &&
                                !strcmp(((Object *)l->ptr)->export.name,
                                        objectPtr->export.name)) {
                                found = 1;
                                break;
                            }
                    }
                    if (found)
                        break;
                }
                if (!found)
                    smiPrintErrorAtLine(parserPtr, ERR_ATTRIBUTE_NOT_IN_GROUP,
                                        objectPtr->line, objectPtr->export.name);
            }
        }
    }
}



static void
checkTypes(Parser *parserPtr, Module *modulePtr)
{
    Type *typePtr;
    
    for (typePtr = modulePtr->firstTypePtr;
	typePtr; typePtr = typePtr->nextPtr) {

	/*
	 * Check references to unknown types.
	 */
	
	if ((typePtr->flags & FLAG_INCOMPLETE)
	    && typePtr->export.name
	    && (typePtr->export.decl == SMI_DECL_UNKNOWN)) {
	    smiPrintErrorAtLine(parserPtr, ERR_UNKNOWN_TYPE,
				typePtr->line, typePtr->export.name);
	}

	/*
	 * Use TCs instead of type assignments in SMIv2.
	 */

	if (thisModulePtr->export.language == SMI_LANGUAGE_SMIV2
	    && typePtr->export.decl == SMI_DECL_TYPEASSIGNMENT
	    && typePtr->export.basetype != SMI_BASETYPE_UNKNOWN
	    && strcmp(thisModulePtr->export.name, "SNMPv2-SMI")) {
	    smiPrintErrorAtLine(parserPtr, ERR_SMIV2_TYPE_ASSIGNEMENT,
				typePtr->line, typePtr->export.name);
	}

	/*
	 * Check whether we have types that are not used in this
	 * module.
	 */

	if ((typePtr->export.decl == SMI_DECL_TYPEDEF
	     || typePtr->export.decl == SMI_DECL_TEXTUALCONVENTION)
	    && ! (typePtr->flags & FLAG_INSYNTAX)) {
	    static char *status[] = { "Unknown", "current", "deprecated",
				      "mandatory", "optional", "obsolete" };
	    smiPrintErrorAtLine(parserPtr, ERR_TYPE_UNREF,
				typePtr->line,
				status[typePtr->export.status],
				typePtr->export.name);
	}

	/*
	 * Complain about TCs derived from other TCs (RFC 2579 3.5).
	 */
	
	if (typePtr->parentPtr
	    && typePtr->export.decl == SMI_DECL_TEXTUALCONVENTION
	    && typePtr->export.decl == typePtr->parentPtr->export.decl) {
	    smiPrintErrorAtLine(parserPtr, ERR_SMIV2_NESTED_TEXTUAL_CONVENTION,
				typePtr->line,
				typePtr->export.name,
				typePtr->parentPtr->export.name);

	    if (typePtr->export.status < typePtr->parentPtr->export.status) {
		if (typePtr->parentPtr->export.status == SMI_STATUS_DEPRECATED) {
		    smiPrintErrorAtLine(parserPtr, ERR_TYPE_STATUS_DEPRECATED,
					typePtr->line,
					typePtr->parentPtr->export.name,
					typePtr->export.name);
		}
		if (typePtr->parentPtr->export.status == SMI_STATUS_OBSOLETE) {
		    smiPrintErrorAtLine(parserPtr, ERR_TYPE_STATUS_OBSOLETE,
					typePtr->line,
					typePtr->parentPtr->export.name,
					typePtr->export.name);
		}
	    }
	}

	smiCheckTypeFormat(parserPtr, typePtr);
	smiCheckNamedNumberRedefinition(parserPtr, typePtr);
	smiCheckNamedNumberSubtyping(parserPtr, typePtr);
    }
}


				
static void
adjustDefval(Parser *parserPtr, SmiValue *valuePtr, Type *typePtr, int line)
{
    Object *object2Ptr;
    List *bitsListPtr, *valueListPtr, *p, *pp, *nextPtr, *listPtr;
    Import *importPtr;
    int nBits, bit;
    
    if (valuePtr->basetype == SMI_BASETYPE_UNKNOWN)
	return;
	
    if (valuePtr->basetype == SMI_BASETYPE_OBJECTIDENTIFIER) {
	/* a len of -1 indicates an unresolved label in ptr */
	if (valuePtr->len == -1) {
	    object2Ptr = findObjectByModuleAndName(parserPtr->modulePtr,
						  (char *)valuePtr->value.ptr);
	    if (!object2Ptr) {
		importPtr = findImportByName(
		    (char *)valuePtr->value.ptr, parserPtr->modulePtr);
		if (importPtr) {		/* imported object */
		    importPtr->use++;
		    object2Ptr = findObjectByModulenameAndName(
			importPtr->export.module,
			importPtr->export.name);
		}
	    }
	    if (!object2Ptr) {
		smiPrintErrorAtLine(parserPtr, ERR_UNKNOWN_OIDLABEL,
				    line,
				    (char *)valuePtr->value.ptr);
		smiFree(valuePtr->value.ptr);
		valuePtr->value.ptr = NULL;
		valuePtr->basetype = SMI_BASETYPE_UNKNOWN;
	    } else {
		smiFree(valuePtr->value.ptr);
		valuePtr->len = object2Ptr->export.oidlen;
		valuePtr->value.ptr = smiMalloc(object2Ptr->export.oidlen *
						sizeof(SmiSubid));
		memcpy(valuePtr->value.ptr,
		       object2Ptr->export.oid,
		       object2Ptr->export.oidlen * sizeof(SmiSubid));
	    }
	}
    } else if (valuePtr->basetype == SMI_BASETYPE_BITS) {
	bitsListPtr = typePtr->listPtr;
	valueListPtr = (void *)valuePtr->value.ptr;
	for (nBits = 0, p = bitsListPtr; p; p = p->nextPtr) {
	    if (nBits < 1+((NamedNumber *)(p->ptr))->export.value.value.integer32) {
		nBits = 1+((NamedNumber *)(p->ptr))->export.value.value.integer32;
	    }
	}
	valuePtr->value.ptr = smiMalloc((nBits+7)/8);
	memset(valuePtr->value.ptr, 0, (nBits+7)/8);
	valuePtr->len = (nBits+7)/8;
	for (p = valueListPtr; p;) {
	    for (pp = bitsListPtr; pp; pp = pp->nextPtr) {
		if (!strcmp(p->ptr,
			    ((NamedNumber *)(pp->ptr))->export.name)) {
		    bit = ((NamedNumber *)(pp->ptr))->export.value.value.integer32;
		    valuePtr->value.ptr[bit/8] |=
			1 << (7-(bit%8));
		}
	    }
	    smiFree(p->ptr);
	    nextPtr = p->nextPtr;
	    smiFree(p);
	    p = nextPtr;
	}
    } else if (valuePtr->basetype == SMI_BASETYPE_ENUM) {
	/* a len of -1 indicates an unresolved enum label in ptr */
	if (valuePtr->len == -1) {
	    for (listPtr = typePtr->listPtr; listPtr;
		 listPtr = listPtr->nextPtr) {
		if (!strcmp(((NamedNumber *)(listPtr->ptr))->export.name,
			    (char *)valuePtr->value.ptr)) {
		    smiFree(valuePtr->value.ptr);
		    valuePtr->value.integer32 =
			((NamedNumber *)(listPtr->ptr))->
			export.value.value.integer32;
		    valuePtr->len = 1;
		    break;
		}
	    }
	}
    }
}



static void
checkDefvals(Parser *parserPtr, Module *modulePtr)
{
    Object *objectPtr, *object2Ptr;
    List *bitsListPtr, *valueListPtr, *p, *pp, *nextPtr, *listPtr;
    Import *importPtr;
    int nBits, bit;
    
    /*
     * Check unknown identifiers in OID DEFVALs.
     */

    for(objectPtr = modulePtr->firstObjectPtr;
	objectPtr; objectPtr = objectPtr->nextPtr) {

	adjustDefval(parserPtr, &objectPtr->export.value,
		     objectPtr->typePtr, objectPtr->line);
	
	if (objectPtr->export.value.len == -1) {
	    smiPrintErrorAtLine(parserPtr,
				ERR_DEFVAL_SYNTAX, objectPtr->line);
	}
	
	smiCheckDefault(parserPtr, objectPtr);
    }
}



static void
checkImportsUsage(Parser *parserPtr, Module *modulePtr)
{
    Import *importPtr;
    
    /*
     * Check usage of all imported identifiers.
     */

    if (strcmp(modulePtr->export.name, "SNMPv2-TC") &&
	strcmp(modulePtr->export.name, "SNMPv2-CONF") &&
	strcmp(modulePtr->export.name, "RFC-1212") &&
	strcmp(modulePtr->export.name, "RFC-1215")) {
	for(importPtr = modulePtr->firstImportPtr;
	    importPtr; importPtr = importPtr->nextPtr) {
	    if (! strcmp(importPtr->export.module, "SNMPv2-SMI")) {
		if (! strcmp(importPtr->export.name, "ExtUTCTime")
		    || !strcmp(importPtr->export.name, "ObjectName")
		    || !strcmp(importPtr->export.name, "NotificationName")) {
		    smiPrintErrorAtLine(parserPtr, ERR_ILLEGAL_IMPORT,
					importPtr->line,
					importPtr->export.name,
					importPtr->export.module);
		}
	    }
	    /* checkImports() handles KIND_NOTFOUND */
	    if (importPtr->use == 0 && importPtr->kind != KIND_NOTFOUND) {
		smiPrintErrorAtLine(parserPtr, ERR_UNUSED_IMPORT,
				    importPtr->line,
				    importPtr->export.name,
				    importPtr->export.module);
	    }

	    if (modulePtr->export.language == SMI_LANGUAGE_SMIV2) {
		int j;
		for (j = 0; convertImportv2[j]; j += 4) {
		    if ((strcmp(convertImportv2[j],
				importPtr->export.module) == 0)
			&& (strcmp(convertImportv2[j+1],
				   importPtr->export.name) == 0)) {
			smiPrintErrorAtLine(parserPtr,
					    ERR_OBSOLETE_IMPORT,
					    importPtr->line,
					    importPtr->export.name,
					    convertImportv2[j+2],
					    importPtr->export.module);
		    }
		}
	    }
	}
    }
}



static time_t
checkDate(Parser *parserPtr, char *date)
{
    struct tm	tm;
    time_t	anytime;
    int		i, len;
    char	*p;
    
    memset(&tm, 0, sizeof(tm));
    anytime = 0;
    
    len = strlen(date);
    if (len == 11 || len == 13) {
	for (i = 0; i < len; i++) {
	    if ( (i < len-1 && ! isdigit((int) date[i]))
		 || (i == len-1 && date[len-1] != 'Z')) {
		smiPrintError(parserPtr, ERR_DATE_CHARACTER, date);
		anytime = (time_t) -1;
		break;
	    }
	}
    } else {
	smiPrintError(parserPtr, ERR_DATE_LENGTH, date);
	anytime = (time_t) -1;
    }

    if (anytime == 0) {
	for (i = 0, p = date, tm.tm_year = 0;
	     i < ((len == 11) ? 2 : 4); i++, p++) {
	    tm.tm_year = tm.tm_year * 10 + (*p - '0');
	}
	if (len == 11) {
	    tm.tm_year += 1900;
	    if (tm.tm_year < 1990)
		smiPrintError(parserPtr, ERR_DATE_YEAR_2DIGITS,
			      date, tm.tm_year);
	}
	tm.tm_mon  = (p[0]-'0') * 10 + (p[1]-'0');
	p += 2;
	tm.tm_mday = (p[0]-'0') * 10 + (p[1]-'0');
	p += 2;
	tm.tm_hour = (p[0]-'0') * 10 + (p[1]-'0');
	p += 2;
	tm.tm_min  = (p[0]-'0') * 10 + (p[1]-'0');
	
	if (tm.tm_mon < 1 || tm.tm_mon > 12) {
	    smiPrintError(parserPtr, ERR_DATE_MONTH, date);
	}
	if (tm.tm_mday < 1 || tm.tm_mday > 31) {
	    smiPrintError(parserPtr, ERR_DATE_DAY, date);
	}
	if (tm.tm_hour < 0 || tm.tm_hour > 23) {
	    smiPrintError(parserPtr, ERR_DATE_HOUR, date);
	}
	if (tm.tm_min < 0 || tm.tm_min > 59) {
	    smiPrintError(parserPtr, ERR_DATE_MINUTES, date);
	}
	
	tm.tm_year -= 1900;
	tm.tm_mon -= 1;
	tm.tm_isdst = 0;

	anytime = timegm(&tm);
	
	if (anytime == (time_t) -1) {
	    smiPrintError(parserPtr, ERR_DATE_VALUE, date);
	} else {
	    if (anytime < SMI_EPOCH) {
		smiPrintError(parserPtr, ERR_DATE_IN_PAST, date);
	    }
	    if (anytime > time(NULL)) {
		smiPrintError(parserPtr, ERR_DATE_IN_FUTURE, date);
	    }
	}
    }

    return (anytime == (time_t) -1) ? 0 : anytime;
}



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 1254 "parser-smi.y"
typedef union YYSTYPE {
    char           *text;	  		/* scanned quoted text       */
    char           *id;				/* identifier name           */
    int            err;				/* actually just a dummy     */
    time_t	   date;			/* a date value              */
    Object         *objectPtr;			/* object identifier         */
    SmiStatus      status;			/* a STATUS value            */
    SmiAccess      access;			/* an ACCESS value           */
    Type           *typePtr;
    List           *listPtr;			/* SEQUENCE and INDEX lists  */
    NamedNumber    *namedNumberPtr;		/* BITS or enum item         */
    Range          *rangePtr;			/* type restricting range    */
    SmiValue	   *valuePtr;
    SmiUnsigned32  unsigned32;			/*                           */
    SmiInteger32   integer32;			/*                           */
    SmiUnsigned64  unsigned64;			/*                           */
    SmiInteger64   integer64;			/*                           */
    struct Compl   compl;
    struct Index   index;
    Module	   *modulePtr;
    SubjectCategories *subjectCategoriesPtr;
} YYSTYPE;
/* Line 191 of yacc.c.  */
#line 1522 "parser-smi.tab.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */
#line 1534 "parser-smi.tab.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   649

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  107
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  222
/* YYNRULES -- Number of rules. */
#define YYNRULES  425
/* YYNRULES -- Number of states. */
#define YYNSTATES  707

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   351

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     101,   102,     2,     2,   100,     2,   105,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    99,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   103,     2,   104,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    97,   106,    98,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
{
       0,     0,     3,     5,     6,     8,    11,    12,    23,    27,
      28,    30,    32,    34,    35,    39,    40,    41,    45,    47,
      48,    50,    53,    57,    59,    63,    65,    67,    69,    71,
      73,    75,    77,    79,    81,    83,    85,    87,    89,    91,
      93,    95,    97,    99,   101,   103,   105,   107,   109,   111,
     113,   115,   117,   119,   121,   122,   124,   127,   129,   131,
     133,   135,   137,   139,   141,   143,   145,   147,   149,   151,
     154,   155,   156,   162,   164,   166,   168,   170,   172,   174,
     176,   178,   180,   182,   183,   187,   189,   191,   192,   201,
     202,   207,   209,   211,   213,   215,   217,   219,   221,   223,
     225,   227,   229,   231,   233,   235,   237,   239,   240,   241,
     253,   255,   259,   261,   266,   268,   272,   275,   277,   282,
     284,   286,   289,   291,   295,   296,   302,   303,   304,   305,
     320,   321,   322,   346,   347,   350,   351,   352,   364,   369,
     370,   372,   376,   378,   381,   382,   384,   386,   389,   390,
     392,   394,   395,   401,   402,   403,   409,   410,   411,   417,
     418,   420,   421,   423,   427,   429,   430,   436,   437,   439,
     443,   448,   449,   453,   454,   458,   459,   460,   461,   477,
     478,   479,   480,   481,   482,   483,   484,   508,   513,   514,
     516,   518,   522,   524,   529,   531,   534,   536,   538,   540,
     542,   548,   554,   556,   558,   560,   562,   563,   567,   568,
     572,   574,   575,   579,   580,   584,   589,   592,   597,   600,
     601,   606,   609,   614,   618,   620,   622,   624,   626,   628,
     630,   632,   634,   638,   641,   644,   648,   652,   655,   658,
     661,   663,   666,   668,   671,   674,   676,   679,   682,   685,
     687,   690,   692,   695,   698,   701,   704,   707,   710,   712,
     715,   717,   719,   721,   723,   725,   726,   730,   737,   739,
     743,   745,   749,   751,   753,   755,   757,   759,   761,   765,
     767,   771,   772,   778,   780,   782,   784,   786,   789,   790,
     793,   794,   796,   797,   803,   808,   809,   815,   816,   817,
     823,   824,   826,   830,   833,   835,   837,   839,   844,   845,
     847,   851,   853,   854,   856,   860,   862,   864,   867,   868,
     870,   871,   873,   876,   877,   883,   888,   889,   891,   895,
     897,   902,   904,   908,   910,   912,   914,   915,   918,   920,
     923,   925,   929,   931,   936,   943,   945,   947,   950,   955,
     957,   958,   959,   960,   976,   977,   978,   979,   995,   996,
     997,   998,  1014,  1016,  1018,  1021,  1022,  1028,  1031,  1033,
    1034,  1039,  1040,  1042,  1046,  1048,  1050,  1051,  1053,  1056,
    1058,  1060,  1061,  1067,  1068,  1077,  1080,  1081,  1084,  1085,
    1087,  1090,  1093,  1094,  1095,  1096,  1097,  1115,  1117,  1118,
    1120,  1123,  1124,  1133,  1135,  1139,  1141,  1144,  1146,  1148,
    1149,  1151,  1154,  1155,  1156,  1157,  1158,  1159,  1174,  1177,
    1178,  1180,  1185,  1186,  1188,  1192
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     108,     0,    -1,   109,    -1,    -1,   110,    -1,   109,   110,
      -1,    -1,   126,   111,   112,   113,     4,    18,   116,   114,
     127,    29,    -1,    97,   267,    98,    -1,    -1,    25,    -1,
      69,    -1,   115,    -1,    -1,    39,   118,    99,    -1,    -1,
      -1,    31,   117,    99,    -1,   119,    -1,    -1,   120,    -1,
     119,   120,    -1,   121,    33,   126,    -1,   122,    -1,   121,
     100,   122,    -1,     6,    -1,     5,    -1,   123,    -1,   124,
      -1,   125,    -1,    19,    -1,    44,    -1,    46,    -1,    49,
      -1,    53,    -1,    54,    -1,    60,    -1,    61,    -1,    62,
      -1,    67,    -1,    85,    -1,    86,    -1,    91,    -1,    15,
      -1,    23,    -1,    24,    -1,    35,    -1,    57,    -1,    58,
      -1,    87,    -1,    45,    -1,    92,    -1,     5,    -1,   128,
      -1,    -1,   129,    -1,   128,   129,    -1,   139,    -1,   137,
      -1,   159,    -1,   163,    -1,   167,    -1,   193,    -1,   197,
      -1,   282,    -1,   274,    -1,   278,    -1,   305,    -1,   130,
      -1,     1,    98,    -1,    -1,    -1,   133,   131,    48,   132,
      29,    -1,    54,    -1,    62,    -1,    87,    -1,    58,    -1,
      61,    -1,    85,    -1,    60,    -1,    57,    -1,    53,    -1,
      15,    -1,    -1,    20,   135,    98,    -1,     6,    -1,     5,
      -1,    -1,   136,   138,    59,    36,     4,    97,   267,    98,
      -1,    -1,   141,   140,     4,   146,    -1,     5,    -1,   142,
      -1,   145,    -1,   143,    -1,   144,    -1,    46,    -1,    86,
      -1,    67,    -1,    44,    -1,    91,    -1,    23,    -1,    35,
      -1,    24,    -1,    45,    -1,    92,    -1,   154,    -1,    -1,
      -1,    85,   147,   236,    80,   234,    27,   265,   148,   254,
      84,   154,    -1,   134,    -1,    78,    65,   150,    -1,     5,
      -1,    78,    97,   152,    98,    -1,   153,    -1,   152,   100,
     153,    -1,     6,   155,    -1,   209,    -1,    19,    97,   156,
      98,    -1,   211,    -1,    19,    -1,     5,   223,    -1,   157,
      -1,   156,   100,   157,    -1,    -1,     6,   158,   101,     7,
     102,    -1,    -1,    -1,    -1,     6,   160,    61,   161,    80,
     234,    27,   265,   162,   254,     4,    97,   267,    98,    -1,
      -1,    -1,     6,   164,    62,   165,    84,   154,   237,   174,
     177,   179,    80,   234,   166,   186,   254,   239,   242,   181,
     248,     4,    97,   252,    98,    -1,    -1,    27,   265,    -1,
      -1,    -1,   136,   168,    87,   169,    30,   267,   170,   173,
     254,     4,     7,    -1,    94,    97,   171,    98,    -1,    -1,
     172,    -1,   171,   100,   172,    -1,   252,    -1,    27,   265,
      -1,    -1,   190,    -1,   175,    -1,   176,   238,    -1,    -1,
      74,    -1,    68,    -1,    -1,    72,   178,    97,   247,    98,
      -1,    -1,    -1,    73,   180,    97,   252,    98,    -1,    -1,
      -1,    88,   182,    97,   183,    98,    -1,    -1,   184,    -1,
      -1,   185,    -1,   184,   100,   185,    -1,   252,    -1,    -1,
      42,   187,    97,   188,    98,    -1,    -1,   189,    -1,   188,
     100,   189,    -1,     6,   101,     7,   102,    -1,    -1,    50,
     191,   238,    -1,    -1,    14,   192,   238,    -1,    -1,    -1,
      -1,     6,   194,    58,   195,   259,    80,   234,    27,   265,
     196,   254,     4,    97,   253,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     6,   198,    54,   199,   205,   200,
      47,   266,   201,    66,   265,   202,    21,   265,   203,    27,
     265,   204,   255,     4,    97,   267,    98,    -1,    82,    97,
     206,    98,    -1,    -1,   207,    -1,   208,    -1,   207,   100,
     208,    -1,     6,    -1,     6,   101,     7,   102,    -1,   213,
      -1,   210,   213,    -1,   149,    -1,   150,    -1,   151,    -1,
     221,    -1,   103,    16,     7,   104,    37,    -1,   103,    90,
       7,   104,    37,    -1,   220,    -1,   222,    -1,   219,    -1,
      43,    -1,    -1,    43,   214,   224,    -1,    -1,    43,   215,
     229,    -1,    44,    -1,    -1,    44,   216,   224,    -1,    -1,
       5,   217,   229,    -1,   126,   105,     5,   229,    -1,     5,
     224,    -1,   126,   105,     5,   224,    -1,    64,    81,    -1,
      -1,    64,    81,   218,   225,    -1,     5,   225,    -1,   126,
     105,     5,   225,    -1,    59,    36,   223,    -1,     7,    -1,
       8,    -1,     9,    -1,    10,    -1,    11,    -1,    12,    -1,
       6,    -1,    13,    -1,    97,   271,    98,    -1,    43,   223,
      -1,    44,   223,    -1,    64,    81,   223,    -1,    59,    36,
     223,    -1,    46,   223,    -1,    23,   223,    -1,    23,   224,
      -1,    35,    -1,    35,   224,    -1,    91,    -1,    91,   224,
      -1,    86,   223,    -1,    67,    -1,    67,   225,    -1,    24,
     223,    -1,    24,   224,    -1,    45,    -1,    45,   224,    -1,
      92,    -1,    92,   224,    -1,    46,   223,    -1,    23,   223,
      -1,    35,   223,    -1,    91,   223,    -1,    86,   223,    -1,
      67,    -1,    24,   223,    -1,    45,    -1,    92,    -1,   224,
      -1,   225,    -1,   229,    -1,    -1,   101,   226,   102,    -1,
     101,    79,   101,   226,   102,   102,    -1,   227,    -1,   226,
     106,   227,    -1,   228,    -1,   228,     3,   228,    -1,     8,
      -1,     7,    -1,    10,    -1,     9,    -1,    12,    -1,    11,
      -1,    97,   230,    98,    -1,   231,    -1,   230,   100,   231,
      -1,    -1,     6,   232,   101,   233,   102,    -1,     7,    -1,
       8,    -1,     6,    -1,     6,    -1,    28,   265,    -1,    -1,
      89,   265,    -1,    -1,     6,    -1,    -1,    70,   240,    97,
     247,    98,    -1,    17,    97,   247,    98,    -1,    -1,    32,
     241,    97,   247,    98,    -1,    -1,    -1,    41,   243,    97,
     244,    98,    -1,    -1,   245,    -1,   244,   100,   245,    -1,
      38,   246,    -1,   246,    -1,   252,    -1,   252,    -1,    26,
      97,   249,    98,    -1,    -1,   212,    -1,    97,   250,    98,
      -1,   251,    -1,    -1,     6,    -1,   251,   100,     6,    -1,
     267,    -1,   267,    -1,    76,   265,    -1,    -1,   256,    -1,
      -1,   257,    -1,   256,   257,    -1,    -1,    77,   266,   258,
      27,   265,    -1,    63,    97,   260,    98,    -1,    -1,   261,
      -1,   260,   100,   261,    -1,   252,    -1,    56,    97,   263,
      98,    -1,   264,    -1,   263,   100,   264,    -1,   253,    -1,
      13,    -1,    13,    -1,    -1,   268,   269,    -1,   270,    -1,
     269,   270,    -1,   136,    -1,   126,   105,     6,    -1,     7,
      -1,     6,   101,     7,   102,    -1,   126,   105,     6,   101,
       7,   102,    -1,   272,    -1,   273,    -1,   272,   273,    -1,
       6,   101,     7,   102,    -1,     7,    -1,    -1,    -1,    -1,
       6,   275,    60,   276,   259,    80,   234,    27,   265,   277,
     254,     4,    97,   267,    98,    -1,    -1,    -1,    -1,     6,
     279,    57,   280,   262,    80,   234,    27,   265,   281,   254,
       4,    97,   267,    98,    -1,    -1,    -1,    -1,     6,   283,
      53,   284,    80,   234,    27,   265,   285,   254,   286,     4,
      97,   267,    98,    -1,   287,    -1,   288,    -1,   287,   288,
      -1,    -1,    52,   290,   289,   291,   294,    -1,     5,   267,
      -1,     5,    -1,    -1,    49,    97,   292,    98,    -1,    -1,
     293,    -1,   292,   100,   293,    -1,   267,    -1,   295,    -1,
      -1,   296,    -1,   295,   296,    -1,   297,    -1,   299,    -1,
      -1,    34,   298,   267,    27,   265,    -1,    -1,    59,   300,
     252,   301,   302,   304,    27,   265,    -1,    84,   154,    -1,
      -1,    96,   303,    -1,    -1,   154,    -1,    51,   238,    -1,
      71,   238,    -1,    -1,    -1,    -1,    -1,     6,   306,    15,
     307,    75,   265,    80,   235,    27,   265,   308,   254,   309,
       4,    97,   267,    98,    -1,   310,    -1,    -1,   311,    -1,
     310,   311,    -1,    -1,    83,   315,   312,    40,    97,   313,
      98,   316,    -1,   314,    -1,   313,   100,   314,    -1,   267,
      -1,     5,   267,    -1,     5,    -1,   317,    -1,    -1,   318,
      -1,   317,   318,    -1,    -1,    -1,    -1,    -1,    -1,    95,
     252,   319,   301,   320,   302,   321,   324,   326,   322,   248,
     323,    27,   265,    -1,    14,   325,    -1,    -1,     6,    -1,
      22,    97,   327,    98,    -1,    -1,   328,    -1,   327,   100,
     328,    -1,   252,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,  1551,  1551,  1556,  1561,  1563,  1572,  1571,  1634,  1637,
    1640,  1642,  1651,  1654,  1657,  1672,  1674,  1673,  1694,  1697,
    1701,  1703,  1707,  1752,  1754,  1762,  1768,  1774,  1790,  1800,
    1806,  1807,  1808,  1809,  1810,  1811,  1812,  1813,  1814,  1815,
    1816,  1817,  1818,  1821,  1822,  1823,  1824,  1825,  1826,  1827,
    1830,  1831,  1834,  1846,  1849,  1853,  1855,  1859,  1864,  1869,
    1874,  1879,  1884,  1889,  1894,  1899,  1904,  1909,  1914,  1919,
    1934,  1946,  1933,  1979,  1980,  1981,  1982,  1983,  1984,  1985,
    1986,  1987,  1988,  1992,  1991,  2021,  2026,  2042,  2041,  2082,
    2081,  2247,  2251,  2275,  2288,  2289,  2298,  2299,  2300,  2301,
    2302,  2305,  2306,  2307,  2310,  2311,  2314,  2331,  2362,  2330,
    2401,  2409,  2423,  2468,  2476,  2482,  2502,  2585,  2591,  2613,
    2617,  2622,  2655,  2661,  2675,  2674,  2710,  2720,  2745,  2709,
    2776,  2786,  2775,  3082,  3091,  3102,  3112,  3101,  3184,  3189,
    3194,  3204,  3226,  3232,  3241,  3244,  3248,  3258,  3261,  3264,
    3268,  3273,  3272,  3280,  3284,  3283,  3291,  3296,  3295,  3303,
    3306,  3309,  3312,  3318,  3332,  3337,  3336,  3344,  3347,  3353,
    3367,  3389,  3388,  3400,  3399,  3413,  3423,  3443,  3412,  3477,
    3487,  3512,  3516,  3520,  3527,  3534,  3476,  3575,  3582,  3589,
    3596,  3602,  3617,  3638,  3661,  3665,  3685,  3690,  3695,  3700,
    3717,  3719,  3727,  3732,  3749,  3758,  3772,  3771,  3791,  3790,
    3805,  3832,  3831,  3863,  3862,  3916,  3963,  4018,  4068,  4074,
    4073,  4085,  4131,  4172,  4179,  4186,  4192,  4199,  4206,  4232,
    4255,  4275,  4292,  4325,  4329,  4354,  4358,  4364,  4392,  4418,
    4455,  4481,  4514,  4538,  4565,  4593,  4631,  4677,  4703,  4740,
    4765,  4797,  4822,  4860,  4888,  4914,  4940,  4964,  4992,  5032,
    5058,  5083,  5110,  5127,  5144,  5163,  5170,  5180,  5192,  5198,
    5212,  5219,  5229,  5235,  5241,  5247,  5253,  5276,  5303,  5309,
    5315,  5329,  5328,  5350,  5365,  5374,  5433,  5449,  5459,  5464,
    5474,  5479,  5546,  5545,  5563,  5574,  5573,  5587,  5593,  5592,
    5626,  5631,  5637,  5651,  5656,  5662,  5672,  5678,  5681,  5685,
    5687,  5695,  5698,  5701,  5707,  5720,  5726,  5732,  5742,  5745,
    5748,  5759,  5761,  5766,  5765,  5801,  5806,  5814,  5820,  5833,
    5845,  5851,  5857,  5870,  5881,  5887,  5893,  5893,  5908,  5912,
    5921,  6015,  6119,  6143,  6173,  6208,  6212,  6214,  6218,  6220,
    6225,  6235,  6254,  6224,  6288,  6298,  6320,  6287,  6355,  6365,
    6383,  6354,  6450,  6456,  6460,  6496,  6495,  6524,  6533,  6543,
    6548,  6553,  6558,  6564,  6577,  6600,  6607,  6614,  6618,  6685,
    6691,  6700,  6699,  6736,  6735,  6785,  6794,  6799,  6811,  6816,
    6822,  6828,  6837,  6843,  6853,  6875,  6842,  6913,  6916,  6919,
    6921,  6926,  6925,  6952,  6962,  6979,  6985,  6994,  7004,  7007,
    7010,  7012,  7017,  7025,  7032,  7040,  7047,  7016,  7074,  7077,
    7080,  7145,  7148,  7151,  7153,  7157
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DOT_DOT", "COLON_COLON_EQUAL", 
  "UPPERCASE_IDENTIFIER", "LOWERCASE_IDENTIFIER", "NUMBER", 
  "NEGATIVENUMBER", "NUMBER64", "NEGATIVENUMBER64", "BIN_STRING", 
  "HEX_STRING", "QUOTED_STRING", "ACCESS", "AGENT_CAPABILITIES", 
  "APPLICATION", "AUGMENTS", "BEGIN_", "BITS", "CHOICE", "CONTACT_INFO", 
  "CREATION_REQUIRES", "COUNTER32", "COUNTER64", "DEFINITIONS", "DEFVAL", 
  "DESCRIPTION", "DISPLAY_HINT", "END", "ENTERPRISE", "EXPORTS", 
  "EXTENDS", "FROM", "GROUP", "GAUGE32", "IDENTIFIER", "IMPLICIT", 
  "IMPLIED", "IMPORTS", "INCLUDES", "INDEX", "INSTALL_ERRORS", "INTEGER", 
  "INTEGER32", "INTEGER64", "IPADDRESS", "LAST_UPDATED", "MACRO", 
  "MANDATORY_GROUPS", "MAX_ACCESS", "MIN_ACCESS", "MODULE", 
  "MODULE_COMPLIANCE", "MODULE_IDENTITY", "NOT_ACCESSIBLE", 
  "NOTIFICATIONS", "NOTIFICATION_GROUP", "NOTIFICATION_TYPE", "OBJECT", 
  "OBJECT_GROUP", "OBJECT_IDENTITY", "OBJECT_TYPE", "OBJECTS", "OCTET", 
  "OF", "ORGANIZATION", "OPAQUE", "PIB_ACCESS", "PIB_DEFINITIONS", 
  "PIB_INDEX", "PIB_MIN_ACCESS", "PIB_REFERENCES", "PIB_TAG", 
  "POLICY_ACCESS", "PRODUCT_RELEASE", "REFERENCE", "REVISION", "SEQUENCE", 
  "SIZE", "STATUS", "STRING", "SUBJECT_CATEGORIES", "SUPPORTS", "SYNTAX", 
  "TEXTUAL_CONVENTION", "TIMETICKS", "TRAP_TYPE", "UNIQUENESS", "UNITS", 
  "UNIVERSAL", "UNSIGNED32", "UNSIGNED64", "VALUE", "VARIABLES", 
  "VARIATION", "WRITE_SYNTAX", "'{'", "'}'", "';'", "','", "'('", "')'", 
  "'['", "']'", "'.'", "'|'", "$accept", "mibFile", "modules", "module", 
  "@1", "moduleOid", "definitions", "linkagePart", "linkageClause", 
  "exportsClause", "@2", "importPart", "imports", "import", 
  "importIdentifiers", "importIdentifier", "importedKeyword", 
  "importedSMIKeyword", "importedSPPIKeyword", "moduleName", 
  "declarationPart", "declarations", "declaration", "macroClause", "@3", 
  "@4", "macroName", "choiceClause", "@5", "fuzzy_lowercase_identifier", 
  "valueDeclaration", "@6", "typeDeclaration", "@7", "typeName", 
  "typeSMI", "typeSMIandSPPI", "typeSMIonly", "typeSPPIonly", 
  "typeDeclarationRHS", "@8", "@9", "conceptualTable", "row", "entryType", 
  "sequenceItems", "sequenceItem", "Syntax", "sequenceSyntax", 
  "NamedBits", "NamedBit", "@10", "objectIdentityClause", "@11", "@12", 
  "@13", "objectTypeClause", "@14", "@15", "descriptionClause", 
  "trapTypeClause", "@16", "@17", "VarPart", "VarTypes", "VarType", 
  "DescrPart", "MaxOrPIBAccessPart", "PibAccessPart", "PibAccess", 
  "SPPIPibReferencesPart", "@18", "SPPIPibTagPart", "@19", 
  "SPPIUniquePart", "@20", "UniqueTypesPart", "UniqueTypes", "UniqueType", 
  "SPPIErrorsPart", "@21", "Errors", "Error", "MaxAccessPart", "@22", 
  "@23", "notificationTypeClause", "@24", "@25", "@26", 
  "moduleIdentityClause", "@27", "@28", "@29", "@30", "@31", "@32", "@33", 
  "SubjectCategoriesPart", "SubjectCategories", "CategoryIDs", 
  "CategoryID", "ObjectSyntax", "typeTag", "sequenceObjectSyntax", 
  "valueofObjectSyntax", "SimpleSyntax", "@34", "@35", "@36", "@37", 
  "@38", "valueofSimpleSyntax", "sequenceSimpleSyntax", 
  "ApplicationSyntax", "sequenceApplicationSyntax", "anySubType", 
  "integerSubType", "octetStringSubType", "ranges", "range", "value", 
  "enumSpec", "enumItems", "enumItem", "@39", "enumNumber", "Status", 
  "Status_Capabilities", "DisplayPart", "UnitsPart", "Access", 
  "IndexPart", "@40", "@41", "MibIndex", "@42", "IndexTypes", "IndexType", 
  "Index", "Entry", "DefValPart", "Value", "BitsValue", "BitNames", 
  "ObjectName", "NotificationName", "ReferPart", "RevisionPart", 
  "Revisions", "Revision", "@43", "ObjectsPart", "Objects", "Object", 
  "NotificationsPart", "Notifications", "Notification", "Text", 
  "ExtUTCTime", "objectIdentifier", "@44", "subidentifiers", 
  "subidentifier", "objectIdentifier_defval", "subidentifiers_defval", 
  "subidentifier_defval", "objectGroupClause", "@45", "@46", "@47", 
  "notificationGroupClause", "@48", "@49", "@50", 
  "moduleComplianceClause", "@51", "@52", "@53", "ComplianceModulePart", 
  "ComplianceModules", "ComplianceModule", "@54", "ComplianceModuleName", 
  "MandatoryPart", "MandatoryGroups", "MandatoryGroup", "CompliancePart", 
  "Compliances", "Compliance", "ComplianceGroup", "@55", 
  "ComplianceObject", "@56", "SyntaxPart", "WriteSyntaxPart", 
  "WriteSyntax", "AccessPart", "agentCapabilitiesClause", "@57", "@58", 
  "@59", "ModulePart_Capabilities", "Modules_Capabilities", 
  "Module_Capabilities", "@60", "CapabilitiesGroups", "CapabilitiesGroup", 
  "ModuleName_Capabilities", "VariationPart", "Variations", "Variation", 
  "@61", "@62", "@63", "@64", "@65", "VariationAccessPart", 
  "VariationAccess", "CreationPart", "Cells", "Cell", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   123,   125,    59,
      44,    40,    41,    91,    93,    46,   124
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short yyr1[] =
{
       0,   107,   108,   108,   109,   109,   111,   110,   112,   112,
     113,   113,   114,   114,   115,   116,   117,   116,   118,   118,
     119,   119,   120,   121,   121,   122,   122,   122,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   124,   124,   124,   124,   124,   124,   124,
     125,   125,   126,   127,   127,   128,   128,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     131,   132,   130,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   135,   134,   136,   136,   138,   137,   140,
     139,   141,   141,   141,   142,   142,   143,   143,   143,   143,
     143,   144,   144,   144,   145,   145,   146,   147,   148,   146,
     146,   149,   150,   151,   152,   152,   153,   154,   154,   155,
     155,   155,   156,   156,   158,   157,   160,   161,   162,   159,
     164,   165,   163,   166,   166,   168,   169,   167,   170,   170,
     171,   171,   172,   173,   173,   174,   174,   175,   175,   176,
     176,   178,   177,   177,   180,   179,   179,   182,   181,   181,
     183,   183,   184,   184,   185,   187,   186,   186,   188,   188,
     189,   191,   190,   192,   190,   194,   195,   196,   193,   198,
     199,   200,   201,   202,   203,   204,   197,   205,   205,   206,
     207,   207,   208,   208,   209,   209,   209,   209,   209,   209,
     210,   210,   211,   211,   212,   213,   214,   213,   215,   213,
     213,   216,   213,   217,   213,   213,   213,   213,   213,   218,
     213,   213,   213,   213,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   220,   220,   220,   220,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   223,   223,   223,   223,   224,   225,   226,   226,
     227,   227,   228,   228,   228,   228,   228,   228,   229,   230,
     230,   232,   231,   233,   233,   234,   235,   236,   236,   237,
     237,   238,   240,   239,   239,   241,   239,   239,   243,   242,
     242,   244,   244,   245,   245,   246,   247,   248,   248,   249,
     249,   250,   250,   251,   251,   252,   253,   254,   254,   255,
     255,   256,   256,   258,   257,   259,   259,   260,   260,   261,
     262,   263,   263,   264,   265,   266,   268,   267,   269,   269,
     270,   270,   270,   270,   270,   271,   272,   272,   273,   273,
     275,   276,   277,   274,   279,   280,   281,   278,   283,   284,
     285,   282,   286,   287,   287,   289,   288,   290,   290,   290,
     291,   291,   292,   292,   293,   294,   294,   295,   295,   296,
     296,   298,   297,   300,   299,   301,   301,   302,   302,   303,
     304,   304,   304,   306,   307,   308,   305,   309,   309,   310,
     310,   312,   311,   313,   313,   314,   315,   315,   316,   316,
     317,   317,   319,   320,   321,   322,   323,   318,   324,   324,
     325,   326,   326,   327,   327,   328
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     0,     1,     2,     0,    10,     3,     0,
       1,     1,     1,     0,     3,     0,     0,     3,     1,     0,
       1,     2,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       0,     0,     5,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     3,     1,     1,     0,     8,     0,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     0,    11,
       1,     3,     1,     4,     1,     3,     2,     1,     4,     1,
       1,     2,     1,     3,     0,     5,     0,     0,     0,    14,
       0,     0,    23,     0,     2,     0,     0,    11,     4,     0,
       1,     3,     1,     2,     0,     1,     1,     2,     0,     1,
       1,     0,     5,     0,     0,     5,     0,     0,     5,     0,
       1,     0,     1,     3,     1,     0,     5,     0,     1,     3,
       4,     0,     3,     0,     3,     0,     0,     0,    15,     0,
       0,     0,     0,     0,     0,     0,    23,     4,     0,     1,
       1,     3,     1,     4,     1,     2,     1,     1,     1,     1,
       5,     5,     1,     1,     1,     1,     0,     3,     0,     3,
       1,     0,     3,     0,     3,     4,     2,     4,     2,     0,
       4,     2,     4,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     2,     3,     3,     2,     2,     2,
       1,     2,     1,     2,     2,     1,     2,     2,     2,     1,
       2,     1,     2,     2,     2,     2,     2,     2,     1,     2,
       1,     1,     1,     1,     1,     0,     3,     6,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     3,     1,
       3,     0,     5,     1,     1,     1,     1,     2,     0,     2,
       0,     1,     0,     5,     4,     0,     5,     0,     0,     5,
       0,     1,     3,     2,     1,     1,     1,     4,     0,     1,
       3,     1,     0,     1,     3,     1,     1,     2,     0,     1,
       0,     1,     2,     0,     5,     4,     0,     1,     3,     1,
       4,     1,     3,     1,     1,     1,     0,     2,     1,     2,
       1,     3,     1,     4,     6,     1,     1,     2,     4,     1,
       0,     0,     0,    15,     0,     0,     0,    15,     0,     0,
       0,    15,     1,     1,     2,     0,     5,     2,     1,     0,
       4,     0,     1,     3,     1,     1,     0,     1,     2,     1,
       1,     0,     5,     0,     8,     2,     0,     2,     0,     1,
       2,     2,     0,     0,     0,     0,    17,     1,     0,     1,
       2,     0,     8,     1,     3,     1,     2,     1,     1,     0,
       1,     2,     0,     0,     0,     0,     0,    14,     2,     0,
       1,     4,     0,     1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
       3,    52,     0,     2,     4,     6,     1,     5,     9,   336,
       0,     0,     0,    10,    11,     0,     8,    86,    85,   342,
       0,   340,   337,   338,     0,     0,     0,   339,    15,     0,
     341,    16,    13,   343,     0,     0,    19,     0,    12,     0,
      17,    26,    25,    43,    30,    44,    45,    46,    31,    50,
      32,    33,    34,    35,    47,    48,    36,    37,    38,    39,
      40,    41,    49,    42,    51,     0,    18,    20,     0,    23,
      27,    28,    29,     0,    86,    85,    82,   101,   103,   102,
      99,   104,    96,    81,    73,    80,    76,    79,    77,    74,
      98,    78,    97,    75,   100,   105,     0,     0,    55,    68,
      70,    87,    58,    57,    89,    92,    94,    95,    93,    59,
      60,    61,    62,    63,    65,    66,    64,    67,   344,    14,
      21,     0,     0,    69,     0,     0,     0,     0,     0,     0,
       0,     0,     7,    56,     0,     0,     0,     0,    22,    24,
     127,   131,   176,   180,   351,   355,   359,   394,    71,     0,
     136,     0,     0,     0,   326,   188,   326,     0,     0,     0,
       0,     0,     0,   112,     0,    83,   265,   265,   240,   205,
     210,   249,   265,     0,     0,   245,     0,   107,   265,   242,
     251,     0,     0,   110,    90,   196,   197,   198,   106,   117,
       0,   194,   199,     0,     0,     0,     0,     0,   181,     0,
       0,     0,     0,     0,    72,     0,   336,     0,     0,   216,
     221,     0,     0,     0,   238,   239,   263,   264,   247,   248,
       0,   241,     0,     0,     0,   250,   237,   262,   265,   218,
       0,   246,     0,     0,   288,   244,   243,   252,     0,     0,
       0,    52,   195,   285,     0,   290,   336,     0,     0,     0,
       0,   336,     0,     0,   334,     0,   336,   139,   273,   272,
     275,   274,   277,   276,     0,     0,   268,   270,   214,   124,
       0,   122,    84,   281,     0,   279,   207,   209,   212,   223,
       0,   112,   111,     0,     0,   114,     0,     0,     0,     0,
       0,     0,     0,   148,   329,     0,   327,   315,     0,   192,
       0,   189,   190,     0,     0,   333,     0,   331,   316,     0,
       0,     0,     0,     0,   144,     0,   266,     0,     0,     0,
     118,     0,     0,   278,     0,   220,   265,   120,   265,   265,
     265,   265,   265,   260,   265,     0,     0,   258,   265,   265,
     261,   116,   119,   202,   203,   113,     0,   287,     0,     0,
       0,   217,   222,   215,   128,   289,   173,   171,   150,   149,
     153,   146,     0,   145,   325,   336,     0,     0,   187,     0,
     335,   182,     0,   330,   336,     0,   360,   286,     0,    88,
     336,     0,   318,     0,   269,   271,     0,   123,     0,   280,
     121,   254,   259,   255,   233,   234,   253,   265,   265,   257,
     256,   115,     0,   200,   201,   318,     0,     0,   151,   156,
     291,   147,   328,   177,     0,   191,     0,   352,   332,   356,
     318,     0,     0,   140,   142,   143,     0,     0,     0,     0,
     283,   284,     0,   236,   235,     0,     0,   174,   172,     0,
     154,     0,   318,   193,     0,   318,   318,     0,   395,   138,
     336,   317,     0,   267,   125,   282,   108,     0,   336,     0,
       0,     0,   183,     0,     0,   369,     0,   362,   363,   318,
     141,   137,   318,   336,     0,   306,   336,   133,     0,     0,
       0,     0,   368,   365,     0,   364,   398,     0,     0,   152,
       0,     0,   167,   336,     0,   336,   336,   367,   371,   336,
       0,     0,   397,   399,     0,   129,   155,   134,   165,   318,
       0,   184,     0,     0,     0,   376,     0,   336,   401,     0,
     400,   109,     0,   297,   178,     0,   353,   357,   336,   381,
     383,   366,   375,   377,   379,   380,   361,   406,     0,   336,
       0,     0,   295,   292,   300,     0,   374,     0,   372,   336,
     336,   378,     0,     0,     0,     0,   168,   336,     0,     0,
     298,   159,   185,   370,   336,     0,   386,   336,   396,     0,
     166,     0,     0,   336,   336,     0,   157,   308,   320,   373,
       0,     0,   388,   405,     0,   403,     0,   169,   294,     0,
       0,   336,     0,     0,     0,     0,     0,   319,   321,   382,
     385,     0,   392,   409,   336,   170,   296,   293,   336,     0,
     301,   304,   305,   336,     0,     0,   323,     0,   322,   389,
     387,     0,     0,     0,   336,   402,   408,   410,   404,   303,
     299,   336,     0,   160,   162,   164,   230,   224,   225,   226,
     227,   228,   229,   231,   312,   309,   204,     0,   336,     0,
     336,   390,   391,     0,   412,   411,   302,   158,   336,   313,
     349,     0,   311,     0,   345,   346,   307,     0,     0,     0,
     384,   386,   163,     0,   310,     0,   232,     0,   347,   132,
     324,   186,   413,     0,   314,   388,   348,   414,   419,     0,
     422,   420,   418,     0,   415,   336,   308,   425,     0,   423,
     416,   421,   336,     0,   424,     0,   417
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,     2,     3,     4,     8,    10,    15,    37,    38,    32,
      35,    65,    66,    67,    68,    69,    70,    71,    72,   182,
      96,    97,    98,    99,   134,   160,   100,   183,   212,    21,
     102,   135,   103,   137,   104,   105,   106,   107,   108,   184,
     234,   472,   185,   186,   187,   284,   285,   188,   341,   270,
     271,   319,   109,   124,   152,   405,   110,   125,   153,   492,
     111,   136,   162,   314,   422,   423,   382,   360,   361,   362,
     409,   439,   441,   459,   577,   592,   632,   633,   634,   509,
     522,   555,   556,   363,   407,   406,   112,   126,   154,   442,
     113,   127,   155,   249,   416,   479,   525,   578,   198,   300,
     301,   302,   189,   190,   342,   645,   191,   222,   223,   224,
     208,   280,   646,   343,   192,   344,   214,   227,   216,   265,
     266,   267,   217,   274,   275,   322,   432,   244,   378,   287,
     293,   411,   544,   559,   558,   561,   575,   609,   610,   611,
     474,   594,   647,   661,   662,   475,   305,   427,   596,   597,
     598,   649,   196,   295,   296,   201,   306,   307,   255,   371,
     297,    12,    22,    23,   663,   664,   665,   114,   128,   156,
     445,   115,   129,   157,   446,   116,   130,   158,   420,   466,
     467,   468,   498,   483,   515,   547,   548,   531,   532,   533,
     534,   549,   535,   550,   582,   602,   620,   623,   117,   131,
     159,   469,   501,   502,   503,   538,   584,   585,   518,   625,
     626,   627,   671,   685,   688,   696,   703,   690,   692,   694,
     698,   699
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -507
static const short yypact[] =
{
      40,  -507,    53,    40,  -507,  -507,  -507,  -507,   -11,  -507,
       0,    -5,   156,  -507,  -507,   117,  -507,    26,    21,  -507,
      27,  -507,   156,  -507,   116,   136,   140,  -507,   109,    47,
      64,  -507,   132,  -507,   149,    89,   557,   347,  -507,    87,
    -507,  -507,  -507,  -507,  -507,  -507,  -507,  -507,  -507,  -507,
    -507,  -507,  -507,  -507,  -507,  -507,  -507,  -507,  -507,  -507,
    -507,  -507,  -507,  -507,  -507,    93,   557,  -507,    -4,  -507,
    -507,  -507,  -507,    98,   196,   133,  -507,  -507,  -507,  -507,
    -507,  -507,  -507,  -507,  -507,  -507,  -507,  -507,  -507,  -507,
    -507,  -507,  -507,  -507,  -507,  -507,   172,   492,  -507,  -507,
    -507,   125,  -507,  -507,  -507,  -507,  -507,  -507,  -507,  -507,
    -507,  -507,  -507,  -507,  -507,  -507,  -507,  -507,  -507,  -507,
    -507,    40,   557,  -507,   143,   158,   163,   175,   173,   180,
     186,   225,  -507,  -507,   193,   185,   161,   241,  -507,  -507,
    -507,  -507,  -507,  -507,  -507,  -507,  -507,  -507,  -507,   214,
    -507,   179,   174,   167,   189,   176,   189,   197,   192,   181,
     226,   255,   230,   -64,   169,  -507,   -54,   -54,   177,   -27,
     182,   177,   -54,   233,   194,   183,   -59,  -507,   -54,   177,
     177,     4,   187,  -507,  -507,  -507,  -507,  -507,  -507,  -507,
      95,  -507,  -507,   267,   244,   184,   200,   188,  -507,   206,
     198,   211,   267,   261,  -507,   201,  -507,   106,   202,  -507,
    -507,   270,   195,   271,  -507,  -507,  -507,  -507,  -507,  -507,
     171,  -507,   177,   202,   177,  -507,  -507,  -507,   -54,   199,
     215,  -507,   292,   295,   274,  -507,  -507,  -507,   297,   299,
     302,   -25,  -507,  -507,   282,   221,  -507,   267,   306,   268,
     267,  -507,   267,   287,  -507,   236,  -507,   223,  -507,  -507,
    -507,  -507,  -507,  -507,   217,    17,  -507,   316,  -507,  -507,
     -66,  -507,  -507,  -507,   -56,  -507,  -507,  -507,  -507,  -507,
     183,  -507,  -507,    66,    29,  -507,   261,   240,   219,   220,
     -54,   261,   261,    34,  -507,    55,  -507,  -507,   294,   224,
     228,   227,  -507,   315,   304,  -507,   108,  -507,  -507,   305,
     261,   323,   235,   237,   310,   171,  -507,   171,   171,   238,
    -507,   270,   239,  -507,   271,  -507,   -54,  -507,   -54,   -54,
     -54,   -54,   -54,  -507,   -54,   307,   257,  -507,   -54,   -54,
    -507,  -507,  -507,  -507,  -507,  -507,   295,  -507,   267,   308,
     312,  -507,  -507,  -507,  -507,  -507,  -507,  -507,  -507,  -507,
     269,  -507,   336,  -507,  -507,  -507,   261,   337,  -507,   306,
    -507,  -507,   261,  -507,  -507,   261,  -507,  -507,   324,  -507,
    -507,   261,   278,    22,  -507,  -507,   343,  -507,    71,  -507,
    -507,  -507,  -507,  -507,  -507,  -507,  -507,   -54,   -54,  -507,
    -507,  -507,   328,  -507,  -507,   278,   336,   336,  -507,   283,
    -507,  -507,  -507,  -507,   256,  -507,   291,  -507,  -507,  -507,
     278,   261,   111,  -507,  -507,  -507,   261,   355,   258,   259,
    -507,  -507,   262,  -507,  -507,   261,   362,  -507,  -507,   275,
    -507,   293,   278,  -507,   261,   278,   278,   322,  -507,  -507,
    -507,  -507,   360,  -507,  -507,  -507,  -507,   280,  -507,   281,
     267,   371,  -507,   376,   377,   378,   381,   322,  -507,   278,
    -507,  -507,   278,  -507,   289,  -507,  -507,   361,   298,   368,
     300,   301,   168,  -507,   309,  -507,   311,   318,   313,  -507,
     314,   261,   354,  -507,   261,  -507,  -507,  -507,   350,  -507,
     410,   412,   311,  -507,   244,  -507,  -507,  -507,  -507,   278,
     319,  -507,   320,   321,   325,     5,   326,   380,  -507,   329,
    -507,  -507,   330,    33,  -507,   396,  -507,  -507,  -507,  -507,
    -507,  -507,     5,  -507,  -507,  -507,  -507,  -507,   385,  -507,
     422,   332,  -507,  -507,   389,   261,  -507,   115,  -507,  -507,
    -507,  -507,   334,   338,   339,   118,  -507,  -507,   340,   344,
    -507,   356,  -507,  -507,  -507,   408,   358,  -507,  -507,   436,
    -507,   422,   348,  -507,  -507,   351,  -507,   419,   370,  -507,
     261,   244,   353,  -507,   119,  -507,   349,  -507,  -507,   357,
     363,   414,   359,   365,   449,   315,   450,   370,  -507,  -507,
    -507,   244,   -36,   364,  -507,  -507,  -507,  -507,  -507,   130,
    -507,  -507,  -507,   367,    50,   366,  -507,   369,  -507,  -507,
    -507,   336,   336,   431,  -507,  -507,   364,  -507,  -507,  -507,
    -507,   414,   372,   374,  -507,  -507,  -507,  -507,  -507,  -507,
    -507,  -507,  -507,  -507,    92,  -507,  -507,   373,  -507,   433,
    -507,  -507,  -507,   261,  -507,  -507,  -507,  -507,  -507,   375,
    -507,   379,   382,   383,    99,  -507,  -507,   387,   261,   390,
    -507,   358,  -507,   460,  -507,   462,  -507,   375,  -507,  -507,
    -507,  -507,  -507,   392,  -507,   353,  -507,  -507,   455,   466,
     453,  -507,  -507,   386,  -507,  -507,   419,  -507,   134,  -507,
    -507,  -507,  -507,   451,  -507,   261,  -507
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -507,  -507,  -507,   476,  -507,  -507,  -507,  -507,  -507,  -507,
    -507,  -507,  -507,   423,  -507,   384,  -507,  -507,  -507,    24,
    -507,  -507,   394,  -507,  -507,  -507,  -507,  -507,  -507,   -14,
    -507,  -507,  -507,  -507,  -507,  -507,  -507,  -507,  -507,  -507,
    -507,  -507,  -507,   248,  -507,  -507,   146,  -191,  -507,  -507,
     178,  -507,  -507,  -507,  -507,  -507,  -507,  -507,  -507,  -507,
    -507,  -507,  -507,  -507,  -507,    45,  -507,  -507,  -507,  -507,
    -507,  -507,  -507,  -507,  -507,  -507,  -507,  -507,  -158,  -507,
    -507,  -507,   -75,  -507,  -507,  -507,  -507,  -507,  -507,  -507,
    -507,  -507,  -507,  -507,  -507,  -507,  -507,  -507,  -507,  -507,
    -507,   135,  -507,  -507,  -507,  -507,   327,  -507,  -507,  -507,
    -507,  -507,  -507,  -507,  -507,  -507,  -162,  -149,  -154,   190,
     203,   191,  -195,  -507,   204,  -507,  -507,  -198,  -507,  -507,
    -507,  -395,  -507,  -507,  -507,  -507,  -507,  -507,  -130,  -106,
    -506,  -193,  -507,  -507,  -507,  -245,    18,  -365,  -507,  -507,
     -87,  -507,   388,  -507,   147,  -507,  -507,   139,  -284,   -81,
      -9,  -507,  -507,   496,  -507,  -507,  -142,  -507,  -507,  -507,
    -507,  -507,  -507,  -507,  -507,  -507,  -507,  -507,  -507,  -507,
    -507,    56,  -507,  -507,  -507,  -507,   -40,  -507,  -507,    -7,
    -507,  -507,  -507,  -507,  -145,  -156,  -507,  -507,  -507,  -507,
    -507,  -507,  -507,  -507,    30,  -507,  -507,   -73,  -507,  -507,
    -507,   -93,  -507,  -507,  -507,  -507,  -507,  -507,  -507,  -507,
    -507,  -168
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -408
static const short yytable[] =
{
      11,   294,   347,   245,   253,   218,   232,   354,   355,   210,
     226,   437,   438,   268,   209,   621,   235,   215,   219,   221,
     238,   231,   225,   101,     5,    13,   376,     5,   277,   121,
     236,   237,   320,  -213,   321,   622,    20,   207,   233,   529,
     436,   -52,   323,   213,   324,     1,    20,   207,   356,   298,
     541,   572,   304,     6,   309,   447,   636,   637,   638,   639,
     640,   641,   642,   643,   530,   542,   279,   589,   590,    14,
    -208,   326,  -213,   276,  -206,   278,   207,   461,   430,   431,
     463,   464,   413,   101,   357,   327,     9,   210,   417,   328,
     329,   419,   209,    16,   239,   353,   122,   425,   659,   660,
     241,   330,   358,   543,   486,   677,   660,   487,   359,   331,
     332,   333,   334,   258,   259,   260,   261,   262,   263,   316,
     294,    24,    25,   317,   428,   335,   325,   345,   317,   346,
     336,   -52,    26,   337,    28,   424,   352,   448,   169,   170,
      31,   351,   451,    29,   523,   138,    30,   644,  -393,    33,
     402,   456,   338,   364,   173,   365,    39,   339,   340,   174,
     462,    17,    18,    19,   390,    34,   391,   392,   393,   394,
     395,    36,   396,  -336,  -336,  -336,   399,   400,   258,   259,
     260,   261,   262,   263,   163,   264,  -358,  -179,    40,   118,
    -354,  -175,   119,  -350,  -126,  -130,   123,   257,   164,   165,
     -91,   132,   166,   167,   140,   424,   373,   507,   374,   449,
     511,   450,  -135,   563,   168,   564,   570,   603,   571,   604,
     141,   142,   169,   170,   171,   172,   651,   652,   630,   143,
     631,   490,   701,   144,   702,   433,   434,   145,   173,   146,
     147,   148,   308,   174,   149,   151,   175,   312,   150,   163,
     161,   194,   195,   200,   193,   204,   203,   176,   197,   205,
     206,   562,   477,   164,   177,   178,   211,   166,   167,   228,
     179,   180,   202,   243,   254,   229,   269,   273,   220,   168,
     247,   246,   181,  -211,   230,   248,   250,   169,   170,   171,
     172,   252,   240,   272,   264,   251,   599,   281,   256,   213,
    -219,   283,   286,   173,   288,   566,   289,   290,   174,   291,
     292,   175,   299,   521,   310,   303,   311,   313,   315,   318,
     348,   366,   176,   349,   350,   367,   368,   369,   370,   377,
     178,   372,   375,   379,   380,   179,   180,   381,   398,   386,
     388,   408,   410,   397,   414,   403,   612,   181,    73,   404,
     429,   421,    74,    75,   426,   435,   440,   444,   443,   452,
     453,   454,    76,   612,   455,   308,   457,   471,   635,   670,
      77,    78,   458,   460,   465,   478,   -54,   473,   476,   654,
     480,   481,    79,   482,   680,   484,   612,   489,   491,   494,
     600,    80,    81,    82,   500,   493,   508,   495,   496,   514,
      83,    84,   504,   667,    85,    86,   499,    87,    88,    89,
     619,   505,   506,   635,    90,   517,   519,   524,   526,   527,
    -407,   706,   528,   545,   536,   552,   539,   540,   554,   557,
     560,   567,    91,    92,    93,   580,   568,   573,    94,    95,
     569,   574,   581,   586,   576,   593,   588,   595,   591,   601,
     697,   605,   608,   615,   617,   606,   613,   697,   653,   624,
     668,   607,   614,   648,   488,  -161,   650,   683,   684,   689,
     657,   666,   691,   497,   658,   693,   673,   674,   705,     7,
     282,   676,   675,   695,   308,   679,   512,   513,   681,   120,
     516,   133,   401,    73,   686,   470,   587,    74,    75,   387,
     672,   656,   629,   700,   415,   383,   139,    76,   537,   385,
     618,   510,   412,   418,   616,    77,    78,   242,    27,   546,
     384,   -53,   678,   485,   579,   551,   682,    79,   389,   687,
     553,   628,   520,   655,   704,     0,    80,    81,    82,     0,
     565,     0,     0,     0,   199,    83,    84,     0,     0,    85,
      86,     0,    87,    88,    89,   546,     0,     0,   583,    90,
       0,     0,    41,    42,     0,     0,     0,     0,     0,     0,
       0,     0,    43,     0,     0,     0,    44,    91,    92,    93,
      45,    46,     0,    94,    95,     0,     0,     0,     0,     0,
       0,     0,    47,     0,     0,   583,     0,     0,     0,     0,
       0,    48,    49,    50,     0,     0,    51,     0,     0,     0,
      52,    53,     0,     0,    54,    55,     0,    56,    57,    58,
       0,     0,     0,     0,    59,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   669,    60,    61,    62,     0,     0,     0,    63,    64
};

static const short yycheck[] =
{
       9,   246,   286,   194,   202,   167,    65,   291,   292,   163,
     172,   406,   407,   208,   163,    51,   178,   166,   167,   168,
      16,   175,   171,    37,     0,    25,   310,     3,   223,    33,
     179,   180,    98,    97,   100,    71,    12,   101,    97,    34,
     405,   105,    98,    97,   100,     5,    22,   101,    14,   247,
      17,   557,   250,     0,   252,   420,     6,     7,     8,     9,
      10,    11,    12,    13,    59,    32,   228,   573,   574,    69,
      97,     5,    97,   222,   101,   224,   101,   442,     7,     8,
     445,   446,   366,    97,    50,    19,    97,   241,   372,    23,
      24,   375,   241,    98,    90,   290,   100,   381,     6,     7,
       5,    35,    68,    70,   469,     6,     7,   472,    74,    43,
      44,    45,    46,     7,     8,     9,    10,    11,    12,   102,
     365,     4,   101,   106,   102,    59,   280,    98,   106,   100,
      64,   105,   105,    67,    18,   380,   290,   421,    43,    44,
      31,   290,   426,     7,   509,   121,     6,    97,    15,   102,
     348,   435,    86,    98,    59,   100,     7,    91,    92,    64,
     444,     5,     6,     7,   326,   101,   328,   329,   330,   331,
     332,    39,   334,     5,     6,     7,   338,   339,     7,     8,
       9,    10,    11,    12,     5,    79,    53,    54,    99,   102,
      57,    58,    99,    60,    61,    62,    98,   206,    19,    20,
       4,    29,    23,    24,    61,   450,    98,   491,   100,    98,
     494,   100,    87,    98,    35,   100,    98,    98,   100,   100,
      62,    58,    43,    44,    45,    46,   621,   622,    98,    54,
     100,   476,    98,    60,   100,   397,   398,    57,    59,    53,
      15,    48,   251,    64,    59,     4,    67,   256,    87,     5,
      36,    84,    63,    56,    80,    29,    75,    78,    82,     4,
      30,   545,   460,    19,    85,    86,    97,    23,    24,    36,
      91,    92,    80,     6,    13,    81,     6,     6,   101,    35,
      80,    97,   103,   101,   101,    97,    80,    43,    44,    45,
      46,    80,   105,    98,    79,    97,   580,     5,    97,    97,
     101,     6,    28,    59,     7,   550,     7,     5,    64,    27,
      89,    67,     6,   504,    27,    47,    80,    94,   101,     3,
      80,    27,    78,   104,   104,   101,    98,   100,    13,     6,
      86,    27,    27,    98,    97,    91,    92,    27,    81,   101,
     101,    72,     6,    36,     7,    37,   591,   103,     1,    37,
       7,    27,     5,     6,    76,    27,    73,    66,   102,     4,
     102,   102,    15,   608,   102,   374,     4,     7,   613,   653,
      23,    24,    97,    80,    52,     4,    29,    97,    97,   624,
       4,     4,    35,     5,   668,     4,   631,    98,    27,    21,
     581,    44,    45,    46,    83,    97,    42,    97,    97,    49,
      53,    54,    84,   648,    57,    58,    97,    60,    61,    62,
     601,    98,    98,   658,    67,     5,     4,    98,    98,    98,
      40,   705,    97,    27,    98,    40,    97,    97,     6,    97,
      41,    97,    85,    86,    87,    27,    98,    97,    91,    92,
     101,    97,    84,     7,    88,    26,    98,    77,    97,    96,
     695,   102,    38,     4,     4,    98,    97,   702,    27,    95,
      27,    98,    97,    97,   473,    98,    97,     7,     6,    14,
      98,    98,     6,   482,   100,    22,   101,    98,    27,     3,
     232,    98,   100,    97,   493,    98,   495,   496,    98,    66,
     499,    97,   346,     1,   102,   450,   571,     5,     6,   321,
     658,   631,   608,   696,   369,   315,   122,    15,   517,   318,
     597,   493,   365,   374,   595,    23,    24,   190,    22,   528,
     317,    29,   664,   467,   564,   532,   671,    35,   324,   685,
     539,   604,   502,   626,   702,    -1,    44,    45,    46,    -1,
     549,    -1,    -1,    -1,   156,    53,    54,    -1,    -1,    57,
      58,    -1,    60,    61,    62,   564,    -1,    -1,   567,    67,
      -1,    -1,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    15,    -1,    -1,    -1,    19,    85,    86,    87,
      23,    24,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    -1,   604,    -1,    -1,    -1,    -1,
      -1,    44,    45,    46,    -1,    -1,    49,    -1,    -1,    -1,
      53,    54,    -1,    -1,    57,    58,    -1,    60,    61,    62,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   650,    85,    86,    87,    -1,    -1,    -1,    91,    92
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short yystos[] =
{
       0,     5,   108,   109,   110,   126,     0,   110,   111,    97,
     112,   267,   268,    25,    69,   113,    98,     5,     6,     7,
     126,   136,   269,   270,     4,   101,   105,   270,    18,     7,
       6,    31,   116,   102,   101,   117,    39,   114,   115,     7,
      99,     5,     6,    15,    19,    23,    24,    35,    44,    45,
      46,    49,    53,    54,    57,    58,    60,    61,    62,    67,
      85,    86,    87,    91,    92,   118,   119,   120,   121,   122,
     123,   124,   125,     1,     5,     6,    15,    23,    24,    35,
      44,    45,    46,    53,    54,    57,    58,    60,    61,    62,
      67,    85,    86,    87,    91,    92,   127,   128,   129,   130,
     133,   136,   137,   139,   141,   142,   143,   144,   145,   159,
     163,   167,   193,   197,   274,   278,   282,   305,   102,    99,
     120,    33,   100,    98,   160,   164,   194,   198,   275,   279,
     283,   306,    29,   129,   131,   138,   168,   140,   126,   122,
      61,    62,    58,    54,    60,    57,    53,    15,    48,    59,
      87,     4,   161,   165,   195,   199,   276,   280,   284,   307,
     132,    36,   169,     5,    19,    20,    23,    24,    35,    43,
      44,    45,    46,    59,    64,    67,    78,    85,    86,    91,
      92,   103,   126,   134,   146,   149,   150,   151,   154,   209,
     210,   213,   221,    80,    84,    63,   259,    82,   205,   259,
      56,   262,    80,    75,    29,     4,    30,   101,   217,   224,
     225,    97,   135,    97,   223,   224,   225,   229,   223,   224,
     101,   224,   214,   215,   216,   224,   223,   224,    36,    81,
     101,   225,    65,    97,   147,   223,   224,   224,    16,    90,
     105,     5,   213,     6,   234,   154,    97,    80,    97,   200,
      80,    97,    80,   234,    13,   265,    97,   267,     7,     8,
       9,    10,    11,    12,    79,   226,   227,   228,   229,     6,
     156,   157,    98,     6,   230,   231,   224,   229,   224,   223,
     218,     5,   150,     6,   152,   153,    28,   236,     7,     7,
       5,    27,    89,   237,   252,   260,   261,   267,   234,     6,
     206,   207,   208,    47,   234,   253,   263,   264,   267,   234,
      27,    80,   267,    94,   170,   101,   102,   106,     3,   158,
      98,   100,   232,    98,   100,   225,     5,    19,    23,    24,
      35,    43,    44,    45,    46,    59,    64,    67,    86,    91,
      92,   155,   211,   220,   222,    98,   100,   265,    80,   104,
     104,   224,   225,   229,   265,   265,    14,    50,    68,    74,
     174,   175,   176,   190,    98,   100,    27,   101,    98,   100,
      13,   266,    27,    98,   100,    27,   265,     6,   235,    98,
      97,    27,   173,   226,   227,   228,   101,   157,   101,   231,
     223,   223,   223,   223,   223,   223,   223,    36,    81,   223,
     223,   153,   234,    37,    37,   162,   192,   191,    72,   177,
       6,   238,   261,   265,     7,   208,   201,   265,   264,   265,
     285,    27,   171,   172,   252,   265,    76,   254,   102,     7,
       7,     8,   233,   223,   223,    27,   254,   238,   238,   178,
      73,   179,   196,   102,    66,   277,   281,   254,   265,    98,
     100,   265,     4,   102,   102,   102,   265,     4,    97,   180,
      80,   254,   265,   254,   254,    52,   286,   287,   288,   308,
     172,     7,   148,    97,   247,   252,    97,   234,     4,   202,
       4,     4,     5,   290,     4,   288,   254,   254,   267,    98,
     252,    27,   166,    97,    21,    97,    97,   267,   289,    97,
      83,   309,   310,   311,    84,    98,    98,   265,    42,   186,
     253,   265,   267,   267,    49,   291,   267,     5,   315,     4,
     311,   154,   187,   254,    98,   203,    98,    98,    97,    34,
      59,   294,   295,   296,   297,   299,    98,   267,   312,    97,
      97,    17,    32,    70,   239,    27,   267,   292,   293,   298,
     300,   296,    40,   267,     6,   188,   189,    97,   241,   240,
      41,   242,   265,    98,   100,   267,   252,    97,    98,   101,
      98,   100,   247,    97,    97,   243,    88,   181,   204,   293,
      27,    84,   301,   267,   313,   314,     7,   189,    98,   247,
     247,    97,   182,    26,   248,    77,   255,   256,   257,   265,
     154,    96,   302,    98,   100,   102,    98,    98,    38,   244,
     245,   246,   252,    97,    97,     4,   266,     4,   257,   154,
     303,    51,    71,   304,    95,   316,   317,   318,   314,   246,
      98,   100,   183,   184,   185,   252,     6,     7,     8,     9,
      10,    11,    12,    13,    97,   212,   219,   249,    97,   258,
      97,   238,   238,    27,   252,   318,   245,    98,   100,     6,
       7,   250,   251,   271,   272,   273,    98,   252,    27,   267,
     265,   319,   185,   101,    98,   100,    98,     6,   273,    98,
     265,    98,   301,     7,     6,   320,   102,   302,   321,    14,
     324,     6,   325,    22,   326,    97,   322,   252,   327,   328,
     248,    98,   100,   323,   328,    27,   265
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrlab1


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)         \
  Current.first_line   = Rhs[1].first_line;      \
  Current.first_column = Rhs[1].first_column;    \
  Current.last_line    = Rhs[N].last_line;       \
  Current.last_column  = Rhs[N].last_column;
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (cinluded).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short *bottom, short *top)
#else
static void
yy_stack_print (bottom, top)
    short *bottom;
    short *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylineno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylineno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse ();
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  /* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 1552 "parser-smi.y"
    {
        yyval.err = 0;
    ;}
    break;

  case 3:
#line 1556 "parser-smi.y"
    {
	yyval.err = 0;
    ;}
    break;

  case 4:
#line 1562 "parser-smi.y"
    { yyval.err = 0; ;}
    break;

  case 5:
#line 1564 "parser-smi.y"
    { yyval.err = 0; ;}
    break;

  case 6:
#line 1572 "parser-smi.y"
    {
			    firstStatementLine = thisParserPtr->line;
			    currentDecl = SMI_DECL_MODULE;
			    
			    thisParserPtr->modulePtr = findModuleByName(yyvsp[0].id);
			    if (!thisParserPtr->modulePtr) {
				thisParserPtr->modulePtr =
				    addModule(yyvsp[0].id,
					      smiStrdup(thisParserPtr->path),
					      0,
					      thisParserPtr);
				thisParserPtr->modulePtr->
				    numImportedIdentifiers = 0;
				thisParserPtr->modulePtr->
				    numStatements = 0;
				thisParserPtr->modulePtr->
				    numModuleIdentities = 0;
				if (!strcmp(yyvsp[0].id, "SNMPv2-SMI")) {
			            /*
				     * SNMPv2-SMI is an SMIv2 module
				     * that cannot be identified by
				     * importing from SNMPv2-SMI.
				     */
				    thisModulePtr->export.language =
					SMI_LANGUAGE_SMIV2;
				}
				checkModuleName(thisParserPtr,
						thisModulePtr->export.name);
			    } else {
			        smiPrintError(thisParserPtr,
					      ERR_MODULE_ALREADY_LOADED,
					      yyvsp[0].id);
				/*
				 * this aborts parsing the whole file,
				 * not only the current module.
				 */
				YYABORT;
			    }
			;}
    break;

  case 7:
#line 1618 "parser-smi.y"
    {
			    if (thisModulePtr->export.language == SMI_LANGUAGE_UNKNOWN)
				thisModulePtr->export.language = SMI_LANGUAGE_SMIV1;
			    checkModuleIdentity(thisParserPtr, thisModulePtr);
			    checkObjects(thisParserPtr, thisModulePtr);
			    checkTypes(thisParserPtr, thisModulePtr);
			    checkDefvals(thisParserPtr, thisModulePtr);
			    checkImportsUsage(thisParserPtr, thisModulePtr);
			    smiCheckTypeUsage(thisParserPtr, thisModulePtr);
			    
			    capabilitiesModulePtr = NULL;

                            yyval.err = 0;
			;}
    break;

  case 8:
#line 1635 "parser-smi.y"
    { yyval.err = 0; ;}
    break;

  case 9:
#line 1637 "parser-smi.y"
    { yyval.err = 0; ;}
    break;

  case 10:
#line 1641 "parser-smi.y"
    { ;}
    break;

  case 11:
#line 1643 "parser-smi.y"
    {
                            thisModulePtr->export.language = SMI_LANGUAGE_SPPI;
                        ;}
    break;

  case 12:
#line 1652 "parser-smi.y"
    { yyval.err = 0; ;}
    break;

  case 13:
#line 1654 "parser-smi.y"
    { yyval.err = 0; ;}
    break;

  case 14:
#line 1658 "parser-smi.y"
    {
			    firstStatementLine = thisParserPtr->line;
			    currentDecl = SMI_DECL_MODULE;

			    if ((thisModulePtr->export.language != SMI_LANGUAGE_SMIV2) &&
                                (thisModulePtr->export.language != SMI_LANGUAGE_SPPI))
				thisModulePtr->export.language = SMI_LANGUAGE_SMIV1;
			    
			    yyval.err = 0;
			;}
    break;

  case 15:
#line 1672 "parser-smi.y"
    { yyval.err = 0; ;}
    break;

  case 16:
#line 1674 "parser-smi.y"
    {
                            if (thisParserPtr->modulePtr->export.language ==
                                 SMI_LANGUAGE_SPPI)
                                smiPrintError(thisParserPtr, ERR_SMI_CONSTRUCT_IN_PIB, "EXPORTS");
                            
			    firstStatementLine = thisParserPtr->line;
			    currentDecl = SMI_DECL_MODULE;

			    if (strcmp(thisParserPtr->modulePtr->export.name,
				       "RFC1155-SMI") &&
				strcmp(thisParserPtr->modulePtr->export.name,
				       "RFC1065-SMI")) {
			        smiPrintError(thisParserPtr, ERR_EXPORTS);
			    }
			;}
    break;

  case 17:
#line 1691 "parser-smi.y"
    { yyval.err = 0; ;}
    break;

  case 18:
#line 1695 "parser-smi.y"
    { yyval.err = 0; ;}
    break;

  case 19:
#line 1697 "parser-smi.y"
    { yyval.err = 0; ;}
    break;

  case 20:
#line 1702 "parser-smi.y"
    { yyval.err = 0; ;}
    break;

  case 21:
#line 1704 "parser-smi.y"
    { yyval.err = 0; ;}
    break;

  case 22:
#line 1710 "parser-smi.y"
    {
			    Import      *importPtr;
			    Module      *modulePtr;
                            
			    /*
			     * Recursively call the parser to suffer
			     * the IMPORTS, if the module is not yet
			     * loaded.
			     */
			    modulePtr = findModuleByName(yyvsp[0].id);
			    if (!modulePtr) {
				modulePtr = loadModule(yyvsp[0].id, thisParserPtr);
			    }
			    checkImports(modulePtr, thisParserPtr);

			    if (modulePtr && !strcmp(yyvsp[0].id, "SNMPv2-SMI")) {
			        /*
				 * A module that imports a macro or
				 * type definition from SNMPv2-SMI
				 * seems to be SMIv2 style - but only if
                                 * it is not SPPI yet.
				 */
                                if (thisModulePtr->export.language != SMI_LANGUAGE_SPPI) {
				    for (importPtr =
					     thisModulePtr->firstImportPtr;
				         importPtr;
				         importPtr = importPtr->nextPtr) {
				        if ((!strcmp(importPtr->export.module,
						     yyvsp[0].id)) &&
					    ((importPtr->kind == KIND_MACRO) ||
					     (importPtr->kind == KIND_TYPE))) {
					    thisModulePtr->export.language =
					        SMI_LANGUAGE_SMIV2;
				        }
				    }
                                }
			    }

			    smiFree(yyvsp[0].id);
			;}
    break;

  case 23:
#line 1753 "parser-smi.y"
    { yyval.err = 0; ;}
    break;

  case 24:
#line 1756 "parser-smi.y"
    { yyval.err = 0; ;}
    break;

  case 25:
#line 1763 "parser-smi.y"
    {
			    addImport(yyvsp[0].id, thisParserPtr);
			    thisParserPtr->modulePtr->numImportedIdentifiers++;
			    yyval.id = 0;
			;}
    break;

  case 26:
#line 1769 "parser-smi.y"
    {
			    addImport(yyvsp[0].id, thisParserPtr);
			    thisParserPtr->modulePtr->numImportedIdentifiers++;
			    yyval.id = 0;
			;}
    break;

  case 27:
#line 1775 "parser-smi.y"
    {
			    addImport(smiStrdup(yyvsp[0].id), thisParserPtr);
			    thisParserPtr->modulePtr->numImportedIdentifiers++;
			    yyval.id = 0;
			;}
    break;

  case 28:
#line 1791 "parser-smi.y"
    {
                            /*
                             * There are PIBs that import e.g. Counter64 - so
                             * don't complain here about SMI keywords.
                             */
                           /* if (thisParserPtr->modulePtr->export.language == SMI_LANGUAGE_SPPI)
                              smiPrintError(thisParserPtr, ERR_SMI_CONSTRUCT_IN_PIB, $1);*/
                            yyval.id = yyvsp[0].id;
                        ;}
    break;

  case 29:
#line 1801 "parser-smi.y"
    {
                            if (thisParserPtr->modulePtr->export.language != SMI_LANGUAGE_SPPI)
                              smiPrintError(thisParserPtr, ERR_SPPI_CONSTRUCT_IN_MIB, yyvsp[0].id);
                            yyval.id = yyvsp[0].id;
                        ;}
    break;

  case 52:
#line 1835 "parser-smi.y"
    {
			    checkNameLen(thisParserPtr, yyvsp[0].id,
					 ERR_MODULENAME_32, ERR_MODULENAME_64);
			    yyval.id = yyvsp[0].id;
			;}
    break;

  case 53:
#line 1847 "parser-smi.y"
    { yyval.err = 0; ;}
    break;

  case 54:
#line 1849 "parser-smi.y"
    { yyval.err = 0; ;}
    break;

  case 55:
#line 1854 "parser-smi.y"
    { yyval.err = 0; ;}
    break;

  case 56:
#line 1856 "parser-smi.y"
    { yyval.err = 0; ;}
    break;

  case 57:
#line 1860 "parser-smi.y"
    { 
			    thisParserPtr->modulePtr->numStatements++;
			    yyval.err = 0;
			;}
    break;

  case 58:
#line 1865 "parser-smi.y"
    { 
			    thisParserPtr->modulePtr->numStatements++;
			    yyval.err = 0;
			;}
    break;

  case 59:
#line 1870 "parser-smi.y"
    { 
			    thisParserPtr->modulePtr->numStatements++;
			    yyval.err = 0;
			;}
    break;

  case 60:
#line 1875 "parser-smi.y"
    { 
			    thisParserPtr->modulePtr->numStatements++;
			    yyval.err = 0;
			;}
    break;

  case 61:
#line 1880 "parser-smi.y"
    { 
			    thisParserPtr->modulePtr->numStatements++;
			    yyval.err = 0;
			;}
    break;

  case 62:
#line 1885 "parser-smi.y"
    { 
			    thisParserPtr->modulePtr->numStatements++;
			    yyval.err = 0;
			;}
    break;

  case 63:
#line 1890 "parser-smi.y"
    { 
			    thisParserPtr->modulePtr->numStatements++;
			    yyval.err = 0;
			;}
    break;

  case 64:
#line 1895 "parser-smi.y"
    { 
			    thisParserPtr->modulePtr->numStatements++;
			    yyval.err = 0;
			;}
    break;

  case 65:
#line 1900 "parser-smi.y"
    { 
			    thisParserPtr->modulePtr->numStatements++;
			    yyval.err = 0;
			;}
    break;

  case 66:
#line 1905 "parser-smi.y"
    {
			    thisParserPtr->modulePtr->numStatements++;
			    yyval.err = 0;
			;}
    break;

  case 67:
#line 1910 "parser-smi.y"
    { 
			    thisParserPtr->modulePtr->numStatements++;
			    yyval.err = 0;
			;}
    break;

  case 68:
#line 1915 "parser-smi.y"
    { 
			    thisParserPtr->modulePtr->numStatements++;
			    yyval.err = 0;
			;}
    break;

  case 69:
#line 1920 "parser-smi.y"
    {
			    smiPrintError(thisParserPtr,
					  ERR_FLUSH_DECLARATION);
			    yyerrok;
			    yyval.err = 1;
			;}
    break;

  case 70:
#line 1934 "parser-smi.y"
    {
			    Macro *macroPtr;

			    firstStatementLine = thisParserPtr->line;
			    currentDecl = SMI_DECL_MACRO;

			    macroPtr = addMacro(smiStrdup(yyvsp[0].id),
						0, thisParserPtr);
			    setMacroLine(macroPtr, firstStatementLine,
					 thisParserPtr);
			;}
    break;

  case 71:
#line 1946 "parser-smi.y"
    {
			    /*
			     * ASN.1 macros are known to be in these
			     * modules.
			     */
			    if (strcmp(thisParserPtr->modulePtr->export.name,
				       "SNMPv2-SMI") &&
			        strcmp(thisParserPtr->modulePtr->export.name,
				       "SNMPv2-TC") &&
				strcmp(thisParserPtr->modulePtr->export.name,
				       "SNMPv2-CONF") &&
				strcmp(thisParserPtr->modulePtr->export.name,
				       "RFC-1212") &&
				strcmp(thisParserPtr->modulePtr->export.name,
				       "RFC-1215") &&
				strcmp(thisParserPtr->modulePtr->export.name,
				       "RFC1065-SMI") &&
				strcmp(thisParserPtr->modulePtr->export.name,
				       "RFC1155-SMI") &&
                                strcmp(thisParserPtr->modulePtr->export.name,
                                       "COPS-PR-SPPI") &&
                                strcmp(thisParserPtr->modulePtr->export.name,
                                       "COPS-PR-SPPI-TC")) {
			        smiPrintError(thisParserPtr, ERR_MACRO);
			    }
			;}
    break;

  case 72:
#line 1974 "parser-smi.y"
    {
			    yyval.err = 0;
                        ;}
    break;

  case 73:
#line 1979 "parser-smi.y"
    { yyval.id = yyvsp[0].id; ;}
    break;

  case 74:
#line 1980 "parser-smi.y"
    { yyval.id = yyvsp[0].id; ;}
    break;

  case 75:
#line 1981 "parser-smi.y"
    { yyval.id = yyvsp[0].id; ;}
    break;

  case 76:
#line 1982 "parser-smi.y"
    { yyval.id = yyvsp[0].id; ;}
    break;

  case 77:
#line 1983 "parser-smi.y"
    { yyval.id = yyvsp[0].id; ;}
    break;

  case 78:
#line 1984 "parser-smi.y"
    { yyval.id = yyvsp[0].id; ;}
    break;

  case 79:
#line 1985 "parser-smi.y"
    { yyval.id = yyvsp[0].id; ;}
    break;

  case 80:
#line 1986 "parser-smi.y"
    { yyval.id = yyvsp[0].id; ;}
    break;

  case 81:
#line 1987 "parser-smi.y"
    { yyval.id = yyvsp[0].id; ;}
    break;

  case 82:
#line 1988 "parser-smi.y"
    { yyval.id = yyvsp[0].id; ;}
    break;

  case 83:
#line 1992 "parser-smi.y"
    {
			    if (strcmp(thisParserPtr->modulePtr->export.name,
				       "SNMPv2-SMI") &&
			        strcmp(thisParserPtr->modulePtr->export.name,
				       "SNMPv2-TC") &&
				strcmp(thisParserPtr->modulePtr->export.name,
				       "SNMPv2-CONF") &&
				strcmp(thisParserPtr->modulePtr->export.name,
				       "RFC-1212") &&
				strcmp(thisParserPtr->modulePtr->export.name,
				       "RFC1065-SMI") &&
				strcmp(thisParserPtr->modulePtr->export.name,
				       "RFC1155-SMI") && 
                                strcmp(thisParserPtr->modulePtr->export.name,
                                       "COPS-PR-SPPI")) {
			        smiPrintError(thisParserPtr, ERR_CHOICE);
			    }
			;}
    break;

  case 84:
#line 2012 "parser-smi.y"
    {
			    yyval.typePtr = addType(NULL, SMI_BASETYPE_UNKNOWN, 0,
					 thisParserPtr);
			;}
    break;

  case 85:
#line 2022 "parser-smi.y"
    {
			  yyval.id = yyvsp[0].id;
			;}
    break;

  case 86:
#line 2027 "parser-smi.y"
    {
			    smiPrintError (thisParserPtr,
					   ERR_BAD_LOWER_IDENTIFIER_CASE,
					   yyvsp[0].id);
			    /* xxx
			    if ((thisParserPtr->flags & SMI_FLAG_BE_LAX) == 0) {
			        YYERROR;
			    }
			    */
			  yyval.id = yyvsp[0].id;
			;}
    break;

  case 87:
#line 2042 "parser-smi.y"
    {
			    firstStatementLine = thisParserPtr->line;
			    currentDecl = SMI_DECL_VALUEASSIGNMENT;

			    checkNameLen(thisParserPtr, yyvsp[0].id,
					 ERR_OIDNAME_32, ERR_OIDNAME_64);
			    smiCheckObjectName(thisParserPtr,
					       thisModulePtr, yyvsp[0].id);
			    if (thisModulePtr->export.language == SMI_LANGUAGE_SMIV2)
			    {
			        if (strchr(yyvsp[0].id, '-') &&
				    (strcmp(yyvsp[0].id, "mib-2") ||
				  strcmp(thisModulePtr->export.name, "SNMPv2-SMI"))) {
				    smiPrintError(thisParserPtr,
						  ERR_OIDNAME_INCLUDES_HYPHEN,
						  yyvsp[0].id);
				}
			    }
			;}
    break;

  case 88:
#line 2063 "parser-smi.y"
    {
			    Object *objectPtr;
			    
			    objectPtr = yyvsp[-1].objectPtr;
			    smiCheckObjectReuse(thisParserPtr, yyvsp[-7].id, &objectPtr);
			    objectPtr = setObjectName(objectPtr, yyvsp[-7].id);
			    deleteObjectFlags(objectPtr, FLAG_INCOMPLETE);
			    setObjectLine(objectPtr, firstStatementLine,
					  thisParserPtr);
			    setObjectDecl(objectPtr,
					  SMI_DECL_VALUEASSIGNMENT);
			    yyval.err = 0;
			;}
    break;

  case 89:
#line 2082 "parser-smi.y"
    {
			    firstStatementLine = thisParserPtr->line;
			    currentDecl = SMI_DECL_TYPEASSIGNMENT;

			    checkNameLen(thisParserPtr, yyvsp[0].id,
					 ERR_TYPENAME_32, ERR_TYPENAME_64);
			;}
    break;

  case 90:
#line 2090 "parser-smi.y"
    {
			    Type *typePtr;
			    
			    if (strlen(yyvsp[-3].id)) {
				if (yyvsp[0].typePtr->export.basetype != SMI_BASETYPE_UNKNOWN) {
				    smiCheckTypeName(thisParserPtr,
						     thisModulePtr, yyvsp[-3].id,
						     firstStatementLine);
				}
				setTypeLine(yyvsp[0].typePtr, firstStatementLine,
					    thisParserPtr);
				setTypeName(yyvsp[0].typePtr, yyvsp[-3].id);
				yyval.err = 0;
			    } else {
				yyval.err = 0;
			    }

			    /*
			     * If we are in an SMI module, some type
			     * definitions derived from ASN.1 `INTEGER'
			     * must be modified to libsmi basetypes.
			     */
			    if (thisModulePtr &&
				(!strcmp(thisModulePtr->export.name, "SNMPv2-SMI"))) {
				if (!strcmp(yyvsp[-3].id, "Counter32")) {
				    yyvsp[0].typePtr->export.basetype = SMI_BASETYPE_UNSIGNED32;
				    setTypeParent(yyvsp[0].typePtr, smiHandle->typeUnsigned32Ptr);
				    if (yyvsp[0].typePtr->listPtr) {
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.minValue.basetype = SMI_BASETYPE_UNSIGNED32;
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.minValue.value.unsigned32 = 0;
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.maxValue.basetype = SMI_BASETYPE_UNSIGNED32;
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.maxValue.value.unsigned32 = 4294967295U;
				    }
				} else if (!strcmp(yyvsp[-3].id, "Gauge32")) {
				    yyvsp[0].typePtr->export.basetype = SMI_BASETYPE_UNSIGNED32;
				    setTypeParent(yyvsp[0].typePtr, smiHandle->typeUnsigned32Ptr);
				    if (yyvsp[0].typePtr->listPtr) {
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.minValue.basetype = SMI_BASETYPE_UNSIGNED32;
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.minValue.value.unsigned32 = 0;
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.maxValue.basetype = SMI_BASETYPE_UNSIGNED32;
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.maxValue.value.unsigned32 = 4294967295U;
				    }
				} else if (!strcmp(yyvsp[-3].id, "Unsigned32")) {
				    yyvsp[0].typePtr->export.basetype = SMI_BASETYPE_UNSIGNED32;
				    setTypeParent(yyvsp[0].typePtr, smiHandle->typeUnsigned32Ptr);
				    if (yyvsp[0].typePtr->listPtr) {
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.minValue.basetype = SMI_BASETYPE_UNSIGNED32;
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.minValue.value.unsigned32 = 0;
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.maxValue.basetype = SMI_BASETYPE_UNSIGNED32;
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.maxValue.value.unsigned32 = 4294967295U;
				    }
				} else if (!strcmp(yyvsp[-3].id, "TimeTicks")) {
				    yyvsp[0].typePtr->export.basetype = SMI_BASETYPE_UNSIGNED32;
				    setTypeParent(yyvsp[0].typePtr, smiHandle->typeUnsigned32Ptr);
				    if (yyvsp[0].typePtr->listPtr) {
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.minValue.basetype = SMI_BASETYPE_UNSIGNED32;
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.minValue.value.unsigned32 = 0;
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.maxValue.basetype = SMI_BASETYPE_UNSIGNED32;
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.maxValue.value.unsigned32 = 4294967295U;
				    }
				} else if (!strcmp(yyvsp[-3].id, "Counter64")) {
				    yyvsp[0].typePtr->export.basetype = SMI_BASETYPE_UNSIGNED64;
				    if (yyvsp[0].typePtr->listPtr) {
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.minValue.basetype = SMI_BASETYPE_UNSIGNED64;
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.minValue.value.unsigned64 = 0;
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.maxValue.basetype = SMI_BASETYPE_UNSIGNED64;
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.maxValue.value.unsigned64 = LIBSMI_UINT64_MAX;
				    }
				    setTypeParent(yyvsp[0].typePtr, smiHandle->typeUnsigned64Ptr);
				}
			    }
			    if (thisModulePtr &&
				(!strcmp(thisModulePtr->export.name, "RFC1155-SMI") ||
				 !strcmp(thisModulePtr->export.name, "RFC1065-SMI"))) {
				if (!strcmp(yyvsp[-3].id, "Counter")) {
				    yyvsp[0].typePtr->export.basetype = SMI_BASETYPE_UNSIGNED32;
				    setTypeParent(yyvsp[0].typePtr, smiHandle->typeUnsigned32Ptr);
				    if (yyvsp[0].typePtr->listPtr) {
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.minValue.basetype = SMI_BASETYPE_UNSIGNED32;
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.minValue.value.unsigned32 = 0;
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.maxValue.basetype = SMI_BASETYPE_UNSIGNED32;
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.maxValue.value.unsigned32 = 4294967295U;
				    }
				} else if (!strcmp(yyvsp[-3].id, "Gauge")) {
				    yyvsp[0].typePtr->export.basetype = SMI_BASETYPE_UNSIGNED32;
				    setTypeParent(yyvsp[0].typePtr, smiHandle->typeUnsigned32Ptr);
				    if (yyvsp[0].typePtr->listPtr) {
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.minValue.basetype = SMI_BASETYPE_UNSIGNED32;
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.minValue.value.unsigned32 = 0;
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.maxValue.basetype = SMI_BASETYPE_UNSIGNED32;
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.maxValue.value.unsigned32 = 4294967295U;
				    }
				} else if (!strcmp(yyvsp[-3].id, "TimeTicks")) {
				    yyvsp[0].typePtr->export.basetype = SMI_BASETYPE_UNSIGNED32;
				    setTypeParent(yyvsp[0].typePtr, smiHandle->typeUnsigned32Ptr);
				    if (yyvsp[0].typePtr->listPtr) {
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.minValue.basetype = SMI_BASETYPE_UNSIGNED32;
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.minValue.value.unsigned32 = 0;
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.maxValue.basetype = SMI_BASETYPE_UNSIGNED32;
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.maxValue.value.unsigned32 = 4294967295U;
				    }
				} else if (!strcmp(yyvsp[-3].id, "NetworkAddress")) {
				    setTypeName(yyvsp[0].typePtr, smiStrdup("NetworkAddress"));
				    yyvsp[0].typePtr->export.basetype = SMI_BASETYPE_OCTETSTRING;
				    setTypeParent(yyvsp[0].typePtr, findTypeByModuleAndName(
					                   thisModulePtr,
						           "IpAddress"));
				} else if (!strcmp(yyvsp[-3].id, "IpAddress")) {
				    typePtr = findTypeByModuleAndName(
					thisModulePtr, "NetworkAddress");
				    if (typePtr) 
					setTypeParent(typePtr, yyvsp[0].typePtr);
				}
			    }
			    if (thisModulePtr &&
				(!strcmp(thisModulePtr->export.name, "COPS-PR-SPPI"))) {
				if (!strcmp(yyvsp[-3].id, "Unsigned32")) {
				    yyvsp[0].typePtr->export.basetype = SMI_BASETYPE_UNSIGNED32;
				    setTypeParent(yyvsp[0].typePtr, smiHandle->typeUnsigned32Ptr);
				    if (yyvsp[0].typePtr->listPtr) {
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.minValue.basetype = SMI_BASETYPE_UNSIGNED32;
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.minValue.value.unsigned32 = 0;
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.maxValue.basetype = SMI_BASETYPE_UNSIGNED32;
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.maxValue.value.unsigned32 = 4294967295U;
				    }
				} else if (!strcmp(yyvsp[-3].id, "TimeTicks")) {
				    yyvsp[0].typePtr->export.basetype = SMI_BASETYPE_UNSIGNED32;
				    setTypeParent(yyvsp[0].typePtr, smiHandle->typeUnsigned32Ptr);
				    if (yyvsp[0].typePtr->listPtr) {
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.minValue.basetype = SMI_BASETYPE_UNSIGNED32;
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.minValue.value.unsigned32 = 0;
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.maxValue.basetype = SMI_BASETYPE_UNSIGNED32;
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.maxValue.value.unsigned32 = 4294967295U;
				    }
				} else if (!strcmp(yyvsp[-3].id, "Unsigned64")) {
				    yyvsp[0].typePtr->export.basetype = SMI_BASETYPE_UNSIGNED64;
				    if (yyvsp[0].typePtr->listPtr) {
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.minValue.basetype = SMI_BASETYPE_UNSIGNED64;
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.minValue.value.unsigned64 = 0;
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.maxValue.basetype = SMI_BASETYPE_UNSIGNED64;
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.maxValue.value.unsigned64 = LIBSMI_UINT64_MAX;
				    }
				    setTypeParent(yyvsp[0].typePtr, smiHandle->typeUnsigned64Ptr);
				} else if (!strcmp(yyvsp[-3].id, "Integer64")) {
				    yyvsp[0].typePtr->export.basetype = SMI_BASETYPE_INTEGER64;
				    if (yyvsp[0].typePtr->listPtr) {
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.minValue.basetype = SMI_BASETYPE_INTEGER64;
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.minValue.value.integer64 = LIBSMI_INT64_MIN;
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.maxValue.basetype = SMI_BASETYPE_INTEGER64;
					((Range *)yyvsp[0].typePtr->listPtr->ptr)->export.maxValue.value.integer64 = LIBSMI_INT64_MAX;
				    }
				    setTypeParent(yyvsp[0].typePtr, smiHandle->typeInteger64Ptr);
				}
			    }
			;}
    break;

  case 91:
#line 2248 "parser-smi.y"
    {
			    yyval.id = yyvsp[0].id;
			;}
    break;

  case 92:
#line 2252 "parser-smi.y"
    {
			    yyval.id = smiStrdup(yyvsp[0].id);
			    /*
			     * well known types (keywords in this grammar)
			     * are known to be defined in these modules.
			     */
			    if (strcmp(thisParserPtr->modulePtr->export.name,
				       "SNMPv2-SMI") &&
			        strcmp(thisParserPtr->modulePtr->export.name,
				       "SNMPv2-TC") &&
				strcmp(thisParserPtr->modulePtr->export.name,
				       "SNMPv2-CONF") &&
				strcmp(thisParserPtr->modulePtr->export.name,
				       "RFC-1212") &&
				strcmp(thisParserPtr->modulePtr->export.name,
				       "RFC1065-SMI") &&
				strcmp(thisParserPtr->modulePtr->export.name,
				       "RFC1155-SMI") &&
				strcmp(thisParserPtr->modulePtr->export.name,
				       "COPS-PR-SPPI")) {
			        smiPrintError(thisParserPtr, ERR_TYPE_SMI, yyvsp[0].id);
			    }
			;}
    break;

  case 93:
#line 2276 "parser-smi.y"
    {
			    yyval.id = smiStrdup(yyvsp[0].id);
			    /*
			     * well known types (keywords in this grammar)
			     * are known to be defined in these modules.
			     */
			    if (strcmp(thisParserPtr->modulePtr->export.name,
				       "COPS-PR-SPPI"))
			        smiPrintError(thisParserPtr, ERR_TYPE_SMI, yyvsp[0].id);
                        ;}
    break;

  case 95:
#line 2290 "parser-smi.y"
    {
                            if ((thisParserPtr->modulePtr->export.language == SMI_LANGUAGE_SPPI) &&
                                !findImportByName(yyvsp[0].id, thisParserPtr->modulePtr))
                                smiPrintError(thisParserPtr, ERR_SMI_CONSTRUCT_IN_PIB, yyvsp[0].id);
                            yyval.id = yyvsp[0].id;
                        ;}
    break;

  case 106:
#line 2315 "parser-smi.y"
    {
			    if (yyvsp[0].typePtr->export.name) {
				/*
				 * If we found an already defined type,
				 * we have to inherit a new type structure.
				 * (Otherwise the `Syntax' rule created
				 * a new type for us.)
				 */
				yyval.typePtr = duplicateType(yyvsp[0].typePtr, 0, thisParserPtr);
				setTypeDecl(yyval.typePtr, SMI_DECL_TYPEASSIGNMENT);
			    } else {
				yyval.typePtr = yyvsp[0].typePtr;
				setTypeDecl(yyval.typePtr, SMI_DECL_TYPEASSIGNMENT);
			    }
			;}
    break;

  case 107:
#line 2331 "parser-smi.y"
    {
			    Import *importPtr;

			    currentDecl = SMI_DECL_TEXTUALCONVENTION;

			    if (thisModulePtr->export.language == SMI_LANGUAGE_UNKNOWN)
				thisModulePtr->export.language = SMI_LANGUAGE_SMIV2;

			    if (strcmp(thisModulePtr->export.name, "SNMPv2-TC")) {
				importPtr =
				    findImportByName("TEXTUAL-CONVENTION",
						     thisModulePtr);
				if (importPtr) {
				    importPtr->use++;
				} else {
                                    if (thisParserPtr->modulePtr->export.language != SMI_LANGUAGE_SPPI)
				        smiPrintError(thisParserPtr,
						      ERR_MACRO_NOT_IMPORTED,
						      "TEXTUAL-CONVENTION",
						      "SNMPv2-TC");
                                    else
				        smiPrintError(thisParserPtr,
						      ERR_MACRO_NOT_IMPORTED,
						      "TEXTUAL-CONVENTION",
						      "COPS-PR-SPPI");
				}
			    }
			;}
    break;

  case 108:
#line 2362 "parser-smi.y"
    {
			    if (yyvsp[0].text && !strlen(yyvsp[0].text)) {
				smiPrintError(thisParserPtr,
					      ERR_EMPTY_DESCRIPTION);
			    }
			;}
    break;

  case 109:
#line 2370 "parser-smi.y"
    {
			    if ((yyvsp[0].typePtr) && !(yyvsp[0].typePtr->export.name)) {
				/*
				 * If the Type we found has just been
				 * defined, we don't have to allocate
				 * a new one.
				 */
				yyval.typePtr = yyvsp[0].typePtr;
			    } else {
				if (!(yyvsp[0].typePtr))
				    smiPrintError(thisParserPtr, ERR_INTERNAL);
				/*
				 * Otherwise, we have to allocate a
				 * new Type struct, inherited from $10.
				 */
				yyval.typePtr = duplicateType(yyvsp[0].typePtr, 0, thisParserPtr);
			    }
			    setTypeDescription(yyval.typePtr, yyvsp[-4].text, thisParserPtr);
			    if (yyvsp[-2].text) {
				setTypeReference(yyval.typePtr, yyvsp[-2].text, thisParserPtr);
			    }
			    setTypeStatus(yyval.typePtr, yyvsp[-6].status);
			    if (yyvsp[-8].text) {
				if (smiCheckFormat(thisParserPtr,
						   yyval.typePtr->export.basetype, yyvsp[-8].text,
						   firstStatementLine)) {
				    setTypeFormat(yyval.typePtr, yyvsp[-8].text);
				}
			    }
			    setTypeDecl(yyval.typePtr, SMI_DECL_TEXTUALCONVENTION);
			;}
    break;

  case 110:
#line 2402 "parser-smi.y"
    {
			    yyval.typePtr = yyvsp[0].typePtr;
			    setTypeDecl(yyval.typePtr, SMI_DECL_TYPEASSIGNMENT);
			;}
    break;

  case 111:
#line 2410 "parser-smi.y"
    {
			    if (yyvsp[0].typePtr) {
				yyval.typePtr = addType(NULL,
					     SMI_BASETYPE_UNKNOWN, 0,
					     thisParserPtr);
				setTypeDecl(yyval.typePtr, SMI_DECL_IMPL_SEQUENCEOF);
				setTypeParent(yyval.typePtr, yyvsp[0].typePtr);
			    } else {
				yyval.typePtr = NULL;
			    }
			;}
    break;

  case 112:
#line 2429 "parser-smi.y"
    {
			    Type *typePtr;
			    Import *importPtr;

			    yyval.typePtr = findTypeByModulenameAndName(
				thisParserPtr->modulePtr->export.name, yyvsp[0].id);
			    if (! yyval.typePtr) {
				importPtr = findImportByName(yyvsp[0].id,
							     thisModulePtr);
				if (!importPtr ||
				    (importPtr->kind == KIND_NOTFOUND)) {
				    /* 
				     * forward referenced type. create it,
				     * marked with FLAG_INCOMPLETE.
				     */
				    typePtr = addType(yyvsp[0].id,
						      SMI_BASETYPE_UNKNOWN,
						      FLAG_INCOMPLETE,
						      thisParserPtr);
				    yyval.typePtr = typePtr;
				} else {
				    /*
				     * imported type.
				     * TODO: is this allowed in a SEQUENCE? 
				     */
				    importPtr->use++;
				    yyval.typePtr = findTypeByModulenameAndName(
					importPtr->export.module,
					importPtr->export.name);
				    smiFree(yyvsp[0].id);
				}
			    } else {
				smiFree(yyvsp[0].id);
			    }
			;}
    break;

  case 113:
#line 2469 "parser-smi.y"
    {
			    yyval.typePtr = addType(NULL, SMI_BASETYPE_UNKNOWN, 0,
					 thisParserPtr);
			    setTypeList(yyval.typePtr, yyvsp[-1].listPtr);
			;}
    break;

  case 114:
#line 2477 "parser-smi.y"
    {
			    yyval.listPtr = smiMalloc(sizeof(List));
			    yyval.listPtr->ptr = yyvsp[0].objectPtr;
			    yyval.listPtr->nextPtr = NULL;
			;}
    break;

  case 115:
#line 2484 "parser-smi.y"
    {
			    List *p, *pp;
			    
			    p = smiMalloc(sizeof(List));
			    p->ptr = (void *)yyvsp[0].objectPtr;
			    p->nextPtr = NULL;
			    for (pp = yyvsp[-2].listPtr; pp->nextPtr; pp = pp->nextPtr);
			    pp->nextPtr = p;
			    yyval.listPtr = yyvsp[-2].listPtr;
			;}
    break;

  case 116:
#line 2503 "parser-smi.y"
    {
			    Object *objectPtr;
			    Import *importPtr;
			    Type *typePtr;
			    
			    objectPtr =
			        findObjectByModuleAndName(thisParserPtr->modulePtr,
							  yyvsp[-1].id);

			    if (!objectPtr) {
				importPtr = findImportByName(yyvsp[-1].id,
							     thisModulePtr);
				if (!importPtr ||
				    (importPtr->kind == KIND_NOTFOUND)) {
				    objectPtr = addObject(yyvsp[-1].id, smiHandle->pendingNodePtr,
					                  0,
					                  FLAG_INCOMPLETE |
							  FLAG_SEQTYPE,
						          thisParserPtr);
				    setObjectType(objectPtr, yyvsp[0].typePtr);
				} else {
				    /*
				     * imported object.
				     */
				    importPtr->use++;
				    objectPtr = findObjectByModulenameAndName(
					importPtr->export.module, yyvsp[-1].id);
				    smiFree(yyvsp[-1].id);

				    if (objectPtr->typePtr->export.name) {
					typePtr = objectPtr->typePtr;
				    } else {
					typePtr = objectPtr->typePtr->parentPtr;
				    }
				    if ((yyvsp[0].typePtr != typePtr) &&
					((yyvsp[0].typePtr->export.basetype !=
					  SMI_BASETYPE_INTEGER32) ||
					 (typePtr->export.basetype !=
					  SMI_BASETYPE_ENUM)) &&
					((yyvsp[0].typePtr->export.basetype !=
					  SMI_BASETYPE_OCTETSTRING) ||
					 (typePtr->export.basetype !=
					  SMI_BASETYPE_BITS))) {
					smiPrintError(thisParserPtr,
						      ERR_SEQUENCE_TYPE_MISMATCH,
						      objectPtr->export.name);
				    }
				}
			    } else {
				smiFree(yyvsp[-1].id);
				if (objectPtr->typePtr) {

				    if (objectPtr->typePtr->export.name) {
					typePtr = objectPtr->typePtr;
				    } else {
					typePtr = objectPtr->typePtr->parentPtr;
				    }
				    if ((yyvsp[0].typePtr != typePtr) &&
					((yyvsp[0].typePtr->export.basetype !=
					  SMI_BASETYPE_INTEGER32) ||
					 (typePtr->export.basetype !=
					  SMI_BASETYPE_ENUM)) &&
					((yyvsp[0].typePtr->export.basetype !=
					  SMI_BASETYPE_OCTETSTRING) ||
					 (typePtr->export.basetype !=
					  SMI_BASETYPE_BITS))) {
					smiPrintError(thisParserPtr,
						      ERR_SEQUENCE_TYPE_MISMATCH,
						      objectPtr->export.name);
				    }

				} else {
				    setObjectType(objectPtr, yyvsp[0].typePtr);
				    addObjectFlags(objectPtr,
						   FLAG_SEQTYPE);
				}
			    }

			    yyval.objectPtr = objectPtr;
			;}
    break;

  case 117:
#line 2586 "parser-smi.y"
    {
			    yyval.typePtr = yyvsp[0].typePtr;
			    if (yyval.typePtr)
				defaultBasetype = yyval.typePtr->export.basetype;
			;}
    break;

  case 118:
#line 2594 "parser-smi.y"
    {
			    Type *typePtr;
			    List *p;
			    
			    defaultBasetype = SMI_BASETYPE_BITS;
			    typePtr = addType(NULL, SMI_BASETYPE_BITS,
					      FLAG_INCOMPLETE,
					      thisParserPtr);
			    setTypeDecl(typePtr, SMI_DECL_IMPLICIT_TYPE);
			    setTypeParent(typePtr, smiHandle->typeBitsPtr);
			    setTypeList(typePtr, yyvsp[-1].listPtr);
			    for (p = yyvsp[-1].listPtr; p; p = p->nextPtr)
				((NamedNumber *)p->ptr)->typePtr = typePtr;
			    smiCheckNamedNumbersOrder(parserPtr, typePtr);
			    yyval.typePtr = typePtr;
			;}
    break;

  case 119:
#line 2614 "parser-smi.y"
    {
			    yyval.typePtr = yyvsp[0].typePtr;
			;}
    break;

  case 120:
#line 2618 "parser-smi.y"
    {
			    /* TODO: */
			    yyval.typePtr = smiHandle->typeOctetStringPtr;
			;}
    break;

  case 121:
#line 2623 "parser-smi.y"
    {
			    Type *typePtr;
			    Import *importPtr;
			    
			    yyval.typePtr = findTypeByModulenameAndName(
				thisParserPtr->modulePtr->export.name, yyvsp[-1].id);
			    if (! yyval.typePtr) {
				importPtr = findImportByName(yyvsp[-1].id,
							     thisModulePtr);
				if (!importPtr ||
				    (importPtr->kind == KIND_NOTFOUND)) {
				    /* 
				     * forward referenced type. create it,
				     * marked with FLAG_INCOMPLETE.
				     */
				    typePtr = addType(yyvsp[-1].id, SMI_BASETYPE_UNKNOWN,
						      FLAG_INCOMPLETE,
						      thisParserPtr);
				    yyval.typePtr = typePtr;
				} else {
				    importPtr->use++;
				    yyval.typePtr = findTypeByModulenameAndName(
					importPtr->export.module,
					importPtr->export.name);
				    smiFree(yyvsp[-1].id);
				}
			    } else {
				smiFree(yyvsp[-1].id);
			    }
			;}
    break;

  case 122:
#line 2656 "parser-smi.y"
    {
			    yyval.listPtr = smiMalloc(sizeof(List));
			    yyval.listPtr->ptr = yyvsp[0].namedNumberPtr;
			    yyval.listPtr->nextPtr = NULL;
			;}
    break;

  case 123:
#line 2662 "parser-smi.y"
    {
			    List *p, *pp;
			    
			    p = smiMalloc(sizeof(List));
			    p->ptr = (void *)yyvsp[0].namedNumberPtr;
			    p->nextPtr = NULL;
			    for (pp = yyvsp[-2].listPtr; pp->nextPtr; pp = pp->nextPtr);
			    pp->nextPtr = p;
			    yyval.listPtr = yyvsp[-2].listPtr;
			;}
    break;

  case 124:
#line 2675 "parser-smi.y"
    {
			    checkNameLen(thisParserPtr, yyvsp[0].id,
					 ERR_BITNAME_32, ERR_BITNAME_64);
			    if (thisModulePtr->export.language == SMI_LANGUAGE_SMIV2)
			    {
				if (strchr(yyvsp[0].id, '-')) {
				    smiPrintError(thisParserPtr,
						  ERR_NAMEDBIT_INCLUDES_HYPHEN,
						  yyvsp[0].id);
				}
			    }
			;}
    break;

  case 125:
#line 2688 "parser-smi.y"
    {
			    yyval.namedNumberPtr = smiMalloc(sizeof(NamedNumber));
			    yyval.namedNumberPtr->export.name = yyvsp[-4].id;
			    yyval.namedNumberPtr->export.value.basetype =
				                       SMI_BASETYPE_UNSIGNED32;
			    yyval.namedNumberPtr->export.value.value.unsigned32 = yyvsp[-1].unsigned32;
			    /* RFC 2578 7.1.4 */
			    if (yyvsp[-1].unsigned32 >= 65535*8) {
				smiPrintError(thisParserPtr,
					      ERR_BITS_NUMBER_TOO_LARGE,
					      yyvsp[-4].id, yyvsp[-1].unsigned32);
			    } else {
				if (yyvsp[-1].unsigned32 >= 128) {
				    smiPrintError(thisParserPtr,
						  ERR_BITS_NUMBER_LARGE,
						  yyvsp[-4].id, yyvsp[-1].unsigned32);
				}
			    }
			;}
    break;

  case 126:
#line 2710 "parser-smi.y"
    {
			    firstStatementLine = thisParserPtr->line;
			    currentDecl = SMI_DECL_OBJECTIDENTITY;

			    checkNameLen(thisParserPtr, yyvsp[0].id,
					 ERR_OIDNAME_32, ERR_OIDNAME_64);
			    smiCheckObjectName(thisParserPtr,
					       thisModulePtr, yyvsp[0].id);
			;}
    break;

  case 127:
#line 2720 "parser-smi.y"
    {
			    Import *importPtr;

			    if (strcmp(thisModulePtr->export.name, "SNMPv2-SMI") &&
                                strcmp(thisModulePtr->export.name, "COPS-PR-SPPI")) {
				importPtr = findImportByName("OBJECT-IDENTITY",
							     thisModulePtr);
				if (importPtr) {
				    importPtr->use++;
				} else {
                                    if (thisParserPtr->modulePtr->export.language != SMI_LANGUAGE_SPPI)
				        smiPrintError(thisParserPtr,
						      ERR_MACRO_NOT_IMPORTED,
						      "OBJECT-IDENTITY",
						      "SNMPv2-SMI");
                                    else
				        smiPrintError(thisParserPtr,
						      ERR_MACRO_NOT_IMPORTED,
						      "OBJECT-IDENTITY",
						      "COPS-PR-SPPI");
				}
			    }
			;}
    break;

  case 128:
#line 2745 "parser-smi.y"
    {
			    if (yyvsp[0].text && !strlen(yyvsp[0].text)) {
				smiPrintError(thisParserPtr,
					      ERR_EMPTY_DESCRIPTION);
			    }
			;}
    break;

  case 129:
#line 2754 "parser-smi.y"
    {
			    Object *objectPtr;
			    
			    objectPtr = yyvsp[-1].objectPtr;
			    smiCheckObjectReuse(thisParserPtr, yyvsp[-13].id, &objectPtr);

			    objectPtr = setObjectName(objectPtr, yyvsp[-13].id);
			    setObjectDecl(objectPtr, SMI_DECL_OBJECTIDENTITY);
			    setObjectLine(objectPtr, firstStatementLine,
					  thisParserPtr);
			    setObjectStatus(objectPtr, yyvsp[-8].status);
			    setObjectDescription(objectPtr, yyvsp[-6].text, thisParserPtr);
			    if (yyvsp[-4].text) {
				setObjectReference(objectPtr, yyvsp[-4].text, thisParserPtr);
			    }
			    addObjectFlags(objectPtr, FLAG_REGISTERED);
			    deleteObjectFlags(objectPtr, FLAG_INCOMPLETE);
			    yyval.err = 0;
			;}
    break;

  case 130:
#line 2776 "parser-smi.y"
    {
			    firstStatementLine = thisParserPtr->line;
			    currentDecl = SMI_DECL_OBJECTTYPE;
			    
			    checkNameLen(thisParserPtr, yyvsp[0].id,
					 ERR_OIDNAME_32, ERR_OIDNAME_64);
			    smiCheckObjectName(thisParserPtr,
					       thisModulePtr, yyvsp[0].id);
			;}
    break;

  case 131:
#line 2786 "parser-smi.y"
    {
			    Import *importPtr;
			    
			    importPtr = findImportByName("OBJECT-TYPE",
							 thisModulePtr);
			    if (importPtr) {
				importPtr->use++;
			    } else {
				if (thisModulePtr->export.language ==
				    SMI_LANGUAGE_SMIV2) {
				    smiPrintError(thisParserPtr,
						  ERR_MACRO_NOT_IMPORTED,
						  "OBJECT-TYPE", "SNMPv2-SMI");
				} else if (thisModulePtr->export.language ==
                                    SMI_LANGUAGE_SPPI) {
                                    smiPrintError(thisParserPtr,
                                                  ERR_MACRO_NOT_IMPORTED,
                                                  "OBJECT-TYPE", "COPS-PR-SPPI");
                                } else {
				    smiPrintError(thisParserPtr,
						  ERR_MACRO_NOT_IMPORTED,
						  "OBJECT-TYPE", "RFC-1212");
				}
			    }
                            indexFlag = 0;
			;}
    break;

  case 132:
#line 2826 "parser-smi.y"
    {
			    Object *objectPtr, *parentPtr;
			    Type *typePtr = NULL;
			    
			    objectPtr = yyvsp[-1].objectPtr;

			    smiCheckObjectReuse(thisParserPtr, yyvsp[-22].id, &objectPtr);

			    objectPtr = setObjectName(objectPtr, yyvsp[-22].id);
			    setObjectDecl(objectPtr, SMI_DECL_OBJECTTYPE);
			    setObjectLine(objectPtr, firstStatementLine,
					  thisParserPtr);
			    if (checkObjectFlags(objectPtr, FLAG_SEQTYPE)) {
				deleteObjectFlags(objectPtr, FLAG_SEQTYPE);
				if (yyvsp[-17].typePtr) {
				    if (yyvsp[-17].typePtr->export.name) {
					typePtr = yyvsp[-17].typePtr;
                                        /*
                                         * According to RFC 3159 7.1.3. Opaque must not be used
                                         * in a SYNTAX clause.
                                         */
                                        if ((thisModulePtr->export.language == SMI_LANGUAGE_SPPI) &&
                                            !strcmp(typePtr->export.name, "Opaque"))
                                            smiPrintError(thisParserPtr, ERR_OPAQUE_IN_SYNTAX);
                                        /*
                                         * According to RFC 3159 7.1.4. IpAddress must not be used
                                         * in a SYNTAX clause.
                                         */
                                        if ((thisModulePtr->export.language == SMI_LANGUAGE_SPPI) &&
                                            !strcmp(typePtr->export.name, "IpAddress"))
                                            smiPrintError(thisParserPtr, ERR_IPADDRESS_IN_SYNTAX);
				    } else {
					typePtr = yyvsp[-17].typePtr->parentPtr;
				    }
				    if ((objectPtr->typePtr != typePtr) &&
					((objectPtr->typePtr->export.basetype !=
					  SMI_BASETYPE_INTEGER32) ||
					 (typePtr->export.basetype !=
					  SMI_BASETYPE_ENUM)) &&
					((objectPtr->typePtr->export.basetype !=
					  SMI_BASETYPE_OCTETSTRING) ||
					 (typePtr->export.basetype !=
					  SMI_BASETYPE_BITS))) {
					smiPrintError(thisParserPtr,
						      ERR_SEQUENCE_TYPE_MISMATCH,
						      objectPtr->export.name);
				    }
				}
			    }
			    setObjectType(objectPtr, yyvsp[-17].typePtr);
			    if (!(yyvsp[-17].typePtr->export.name)) {
				/*
				 * An inlined type.
				 */
#if 0 /* export implicitly defined types by the node's lowercase name */
				setTypeName(yyvsp[-17].typePtr, yyvsp[-22].id);
#endif
			    }
			    setObjectUnits(objectPtr, yyvsp[-16].text);
			    setObjectAccess(objectPtr, yyvsp[-15].access);
			    if (thisParserPtr->flags & FLAG_CREATABLE) {
				thisParserPtr->flags &= ~FLAG_CREATABLE;
				parentPtr =
				  objectPtr->nodePtr->parentPtr->lastObjectPtr;
				if (parentPtr &&
				    parentPtr->export.indexkind !=
				       SMI_INDEX_UNKNOWN) {
				    /*
				     * add objectPtr to the parent object's
				     * listPtr, which is the list of columns
				     * needed for row creation.
				     *
				     * Note, that this would clash, if the
				     * parent row object-type is not yet
				     * defined.
				     */
				    /*
				    newlistPtr = smiMalloc(sizeof(List));
				    newlistPtr->nextPtr = NULL;
				    newlistPtr->ptr = objectPtr;
				    */
				    /*
				     * Look up the parent object-type.
				     */
				    /*
				    if (parentPtr->listPtr) {
					for(listPtr = parentPtr->listPtr;
					    listPtr->nextPtr;
					    listPtr = listPtr->nextPtr);
					listPtr->nextPtr = newlistPtr;
				    } else {
					parentPtr->listPtr = newlistPtr;
				    }
				    */
				    addObjectFlags(parentPtr, FLAG_CREATABLE);
				    setObjectCreate(parentPtr, 1);
				} else {
				    smiPrintError(thisParserPtr,
						  ERR_SCALAR_READCREATE);
				}
			    }
			    setObjectStatus(objectPtr, yyvsp[-11].status);
			    addObjectFlags(objectPtr, FLAG_REGISTERED);
			    deleteObjectFlags(objectPtr, FLAG_INCOMPLETE);
			    if (yyvsp[-10].text) {
				setObjectDescription(objectPtr, yyvsp[-10].text, thisParserPtr);
			    }
			    if (yyvsp[-8].text) {
				setObjectReference(objectPtr, yyvsp[-8].text, thisParserPtr);
			    }
                            if (thisParserPtr->modulePtr->export.language != SMI_LANGUAGE_SPPI) {
                                /*
                                 * For SMI documents either $16 (IndexPart) or $17 (MibIndex)
                                 * are used, but not both. This is signalled via the indexFlag
                                 * which is 1 if IndexPart has been used.
                                 */
                                if (indexFlag == INDEXFLAG_AUGMENTS) { /* IndexPart was used */
			            if (yyvsp[-7].index.indexkind != SMI_INDEX_UNKNOWN) {
				        setObjectList(objectPtr, yyvsp[-7].index.listPtr);
				        setObjectImplied(objectPtr, yyvsp[-7].index.implied);
				        setObjectIndexkind(objectPtr, yyvsp[-7].index.indexkind);
				        setObjectRelated(objectPtr, yyvsp[-7].index.rowPtr);
			            }
                                } else {
			            if (yyvsp[-6].index.indexkind != SMI_INDEX_UNKNOWN) {
				        setObjectList(objectPtr, yyvsp[-6].index.listPtr);
				        setObjectImplied(objectPtr, yyvsp[-6].index.implied);
				        setObjectIndexkind(objectPtr, yyvsp[-6].index.indexkind);
				        setObjectRelated(objectPtr, yyvsp[-6].index.rowPtr);
			            }
                                }
                            } else {
                                /*
                                 * PIBs contain either PIB-INDEX or AUGMENTS or EXTENDS - 
                                 * but only with one Index entry. A PIB-INDEX may be
                                 * followed by a full INDEX. We get the indexkind
                                 * from the first.
                                 * Note that PIB-INDEX/AUGMENTS/EXTENS is always
                                 * the first element in objectPtr->listPtr.
                                 * If an optional INDEX exists then it is
                                 * appended to this list.
                                 */
			        if (yyvsp[-7].index.indexkind != SMI_INDEX_UNKNOWN) {
                                    setObjectList(objectPtr, yyvsp[-7].index.listPtr);
				    setObjectIndexkind(objectPtr, yyvsp[-7].index.indexkind);
				    setObjectRelated(objectPtr, yyvsp[-7].index.rowPtr);
			        }
			        if (yyvsp[-6].index.indexkind != SMI_INDEX_UNKNOWN) {
                                    if (objectPtr->listPtr) {
                                        List *p;
                                        for (p = objectPtr->listPtr; p->nextPtr;
                                             p = p->nextPtr);
                                        p->nextPtr = yyvsp[-6].index.listPtr;
                                    }
				    setObjectImplied(objectPtr, yyvsp[-6].index.implied);
			        }
                            }
                            if (yyvsp[-5].listPtr) {
                                setObjectUniqueness(objectPtr, yyvsp[-5].listPtr);
                            }
			    if (yyvsp[-4].valuePtr) {
				if (objectPtr->typePtr
				    && (((objectPtr->typePtr->export.basetype == SMI_BASETYPE_OCTETSTRING) &&
					 (yyvsp[-4].valuePtr->basetype != SMI_BASETYPE_OCTETSTRING))
					|| ((objectPtr->typePtr->export.basetype == SMI_BASETYPE_OBJECTIDENTIFIER) &&
					    (yyvsp[-4].valuePtr->basetype != SMI_BASETYPE_OBJECTIDENTIFIER)))) {
				    smiPrintError(thisParserPtr,
						  ERR_DEFVAL_SYNTAX);
				    if (yyvsp[-4].valuePtr->basetype == SMI_BASETYPE_OBJECTIDENTIFIER) {
					smiFree(yyvsp[-4].valuePtr->value.oid);
				    }
				    if ((yyvsp[-4].valuePtr->basetype == SMI_BASETYPE_BITS) ||
					(yyvsp[-4].valuePtr->basetype == SMI_BASETYPE_OCTETSTRING)) {
					smiFree(yyvsp[-4].valuePtr->value.ptr);
				    }
				    smiFree(yyvsp[-4].valuePtr);
				} else {
				    setObjectValue(objectPtr, yyvsp[-4].valuePtr);
				}
			    }
                            if (yyvsp[-14].objectPtr) {
                                if (objectPtr->relatedPtr)
                                    smiPrintError(thisParserPtr, ERR_OBJECTPTR_ELEMENT_IN_USE,
                                                  "relatedPtr", "PIB-REFERENCES");
                                /*
                                 * PIB-REFERENCES clauses are only allowed for
                                 * objects with a SYNTAX of 'ReferenceId'.
                                 * See RFC 3159 7.10
                                 */
                                if (objectPtr->typePtr && objectPtr->typePtr->export.name &&
                                    strcmp(objectPtr->typePtr->export.name, "ReferenceId"))
                                    smiPrintErrorAtLine(parserPtr, ERR_PIB_REFERENCES_WRONG_TYPE,
                                                        objectPtr->line);
                                else
                                    setObjectRelated(objectPtr, yyvsp[-14].objectPtr);
                            } else {
                               /*
                                * Does this object have a SYNTAX of 'ReferenceId'
                                * and a PIB-REFERENCES clause?
                                * See RFC 3159 7.10
                                */
                               if ((thisModulePtr->export.language == SMI_LANGUAGE_SPPI) &&
                                   objectPtr->typePtr && objectPtr->typePtr->export.name &&
                                   !strcmp(objectPtr->typePtr->export.name, "ReferenceId"))
                                   smiPrintErrorAtLine(parserPtr, ERR_LACKING_PIB_REFERENCES,
                                                       objectPtr->line);
                            }
                            if (yyvsp[-13].objectPtr) {
                                if (objectPtr->relatedPtr)
                                    smiPrintError(thisParserPtr, ERR_OBJECTPTR_ELEMENT_IN_USE,
                                                  "relatedPtr", "PIB-TAG");
                                /*
                                 * PIB-TAG clauses are only allowed for
                                 * objects with a SYNTAX of 'TagReferenceId'.
                                 * See RFC 3159 7.11
                                 */
                                if (objectPtr->typePtr && objectPtr->typePtr->export.name &&
                                    strcmp(objectPtr->typePtr->export.name, "TagReferenceId"))
                                    smiPrintErrorAtLine(parserPtr, ERR_PIB_TAG_WRONG_TYPE,
                                                        objectPtr->line);
                                else
                                    setObjectRelated(objectPtr, yyvsp[-13].objectPtr);
                            } else {
                                /*
                                 * Does this object have a SYNTAX of 'TagReferenceId'
                                 * and a PIB-TAG clause?
                                 * See RFC 3159 7.11
                                 */
                                if ((thisModulePtr->export.language == SMI_LANGUAGE_SPPI) &&
                                    objectPtr->typePtr && objectPtr->typePtr->export.name &&
                                    !strcmp(objectPtr->typePtr->export.name, "TagReferenceId"))
                                    smiPrintErrorAtLine(parserPtr, ERR_LACKING_PIB_TAG,
                                                        objectPtr->line);

                            }
                            if (yyvsp[-9].listPtr) {
                                if (objectPtr->listPtr)
                                    smiPrintError(thisParserPtr, ERR_OBJECTPTR_ELEMENT_IN_USE,
                                                  "listPtr", "INSTALL-ERRORS");
                                /*
                                 * Are INSTALL-ERRORS only used with tables?
                                 * See RFC 3159 7.4
                                 */
                                if (!((objectPtr->export.decl == SMI_DECL_OBJECTTYPE) &&
                                    (objectPtr->typePtr) &&
                                    (objectPtr->typePtr->export.decl == SMI_DECL_IMPL_SEQUENCEOF)))
                                    smiPrintErrorAtLine(parserPtr, ERR_INSTALL_ERRORS_FOR_NON_TABLE,
                                                        objectPtr->line);
                                else
                                    setObjectList(objectPtr, yyvsp[-9].listPtr);
                            }
			    yyval.err = 0;
			;}
    break;

  case 133:
#line 3082 "parser-smi.y"
    {
			    if ((thisModulePtr->export.language == SMI_LANGUAGE_SMIV2) ||
                                (thisModulePtr->export.language == SMI_LANGUAGE_SPPI))
			    {
				smiPrintError(thisParserPtr,
					      ERR_MISSING_DESCRIPTION);
			    }
			    yyval.text = NULL;
			;}
    break;

  case 134:
#line 3092 "parser-smi.y"
    {
			    yyval.text = yyvsp[0].text;
			    if (yyvsp[0].text && !strlen(yyvsp[0].text)) {
				smiPrintError(thisParserPtr,
					      ERR_EMPTY_DESCRIPTION);
			    }
			;}
    break;

  case 135:
#line 3102 "parser-smi.y"
    {
			    firstStatementLine = thisParserPtr->line;
			    currentDecl = SMI_DECL_TRAPTYPE;
			    
			    checkNameLen(thisParserPtr, yyvsp[0].id,
					 ERR_OIDNAME_32, ERR_OIDNAME_64);
			    smiCheckObjectName(thisParserPtr,
					       thisModulePtr, yyvsp[0].id);
			;}
    break;

  case 136:
#line 3112 "parser-smi.y"
    {
			    Import *importPtr;
                            if (thisParserPtr->modulePtr->export.language == SMI_LANGUAGE_SPPI)
                                smiPrintError(thisParserPtr, ERR_SMI_CONSTRUCT_IN_PIB, "TRAP-TYPE");
			    
			    if (thisModulePtr->export.language == SMI_LANGUAGE_SMIV2)
			    {
			        smiPrintError(thisParserPtr, ERR_TRAP_TYPE);
			    }

			    importPtr = findImportByName("TRAP-TYPE",
							 thisModulePtr);
			    if (importPtr) {
				importPtr->use++;
			    } else {
				smiPrintError(thisParserPtr,
					      ERR_MACRO_NOT_IMPORTED,
					      "TRAP-TYPE", "RFC-1215");
			    }
			;}
    break;

  case 137:
#line 3138 "parser-smi.y"
    {
			    Object *objectPtr;
			    Node *nodePtr;
			    
			    objectPtr = yyvsp[-5].objectPtr;
			    nodePtr = findNodeByParentAndSubid(
				objectPtr->nodePtr, 0);
			    if (nodePtr && nodePtr->lastObjectPtr &&
	       		        (nodePtr->lastObjectPtr->modulePtr == thisModulePtr)) {
				/*
				 * hopefully, the last defined Object for
				 * this Node is the one we expect.
				 */
				objectPtr = nodePtr->lastObjectPtr;
			    } else {
				objectPtr = addObject(NULL,
						      objectPtr->nodePtr,
						      0,
						      FLAG_INCOMPLETE,
						      thisParserPtr);
			    }
			    objectPtr = addObject(NULL,
						  objectPtr->nodePtr,
						  yyvsp[0].unsigned32,
						  FLAG_INCOMPLETE,
						  thisParserPtr);
			    
			    smiCheckObjectReuse(thisParserPtr, yyvsp[-10].id, &objectPtr);

			    objectPtr = setObjectName(objectPtr, yyvsp[-10].id);
			    setObjectDecl(objectPtr,
					  SMI_DECL_TRAPTYPE);
			    setObjectLine(objectPtr, firstStatementLine,
					  thisParserPtr);
			    addObjectFlags(objectPtr, FLAG_REGISTERED);
			    deleteObjectFlags(objectPtr, FLAG_INCOMPLETE);
			    setObjectList(objectPtr, yyvsp[-4].listPtr);
			    setObjectStatus(objectPtr, SMI_STATUS_CURRENT); 
			    setObjectDescription(objectPtr, yyvsp[-3].text, thisParserPtr);
			    if (yyvsp[-2].text) {
				setObjectReference(objectPtr, yyvsp[-2].text, thisParserPtr);
			    }
			    yyval.err = 0;
			;}
    break;

  case 138:
#line 3185 "parser-smi.y"
    {
			    yyval.listPtr = yyvsp[-1].listPtr;
			;}
    break;

  case 139:
#line 3189 "parser-smi.y"
    {
			    yyval.listPtr = NULL;
			;}
    break;

  case 140:
#line 3195 "parser-smi.y"
    {
			    if (yyvsp[0].objectPtr) {
				yyval.listPtr = smiMalloc(sizeof(List));
				yyval.listPtr->ptr = yyvsp[0].objectPtr;
				yyval.listPtr->nextPtr = NULL;
			    } else {
				yyval.listPtr = NULL;
			    }
			;}
    break;

  case 141:
#line 3205 "parser-smi.y"
    {
			    List *p, *pp;

			    if (yyvsp[0].objectPtr) {
				p = smiMalloc(sizeof(List));
				p->ptr = yyvsp[0].objectPtr;
				p->nextPtr = NULL;
				if (yyvsp[-2].listPtr) {
				    for (pp = yyvsp[-2].listPtr; pp->nextPtr;
					 pp = pp->nextPtr);
				    pp->nextPtr = p;
				    yyval.listPtr = yyvsp[-2].listPtr;
				} else {
				    yyval.listPtr = p;
				}
			    } else {
				yyval.listPtr = yyvsp[-2].listPtr;
			    }
			;}
    break;

  case 142:
#line 3227 "parser-smi.y"
    {
			    yyval.objectPtr = yyvsp[0].objectPtr;
			;}
    break;

  case 143:
#line 3233 "parser-smi.y"
    {
			    yyval.text = yyvsp[0].text;
			    if (yyvsp[0].text && !strlen(yyvsp[0].text)) {
				smiPrintError(thisParserPtr,
					      ERR_EMPTY_DESCRIPTION);
			    }
			;}
    break;

  case 144:
#line 3241 "parser-smi.y"
    { yyval.text = NULL; ;}
    break;

  case 145:
#line 3245 "parser-smi.y"
    {
                            yyval.access = yyvsp[0].access;
                        ;}
    break;

  case 146:
#line 3249 "parser-smi.y"
    {
                            if (thisParserPtr->modulePtr->export.language != SMI_LANGUAGE_SPPI)
                                smiPrintError(thisParserPtr, ERR_SPPI_CONSTRUCT_IN_MIB, "MAX-ACCESS");
                            if (yyvsp[0].access == SMI_ACCESS_NOT_ACCESSIBLE)
                                smiPrintError(thisParserPtr, ERR_NOT_ACCESSIBLE_IN_PIB_ACCESS);
                            yyval.access = yyvsp[0].access;
                        ;}
    break;

  case 147:
#line 3259 "parser-smi.y"
    { yyval.access = yyvsp[0].access; ;}
    break;

  case 148:
#line 3261 "parser-smi.y"
    { yyval.access = 0;  ;}
    break;

  case 149:
#line 3265 "parser-smi.y"
    { 
                            smiPrintError(thisParserPtr, ERR_POLICY_ACCESS_IN_PIB);
                        ;}
    break;

  case 150:
#line 3269 "parser-smi.y"
    { ;}
    break;

  case 151:
#line 3273 "parser-smi.y"
    {
                            if (thisParserPtr->modulePtr->export.language != SMI_LANGUAGE_SPPI)
                                smiPrintError(thisParserPtr, ERR_SPPI_CONSTRUCT_IN_MIB, "PIB-REFERENCES");
                        ;}
    break;

  case 152:
#line 3278 "parser-smi.y"
    { yyval.objectPtr = yyvsp[-1].objectPtr; ;}
    break;

  case 153:
#line 3280 "parser-smi.y"
    { yyval.objectPtr = 0; ;}
    break;

  case 154:
#line 3284 "parser-smi.y"
    {
                            if (thisParserPtr->modulePtr->export.language != SMI_LANGUAGE_SPPI)
                                smiPrintError(thisParserPtr, ERR_SPPI_CONSTRUCT_IN_MIB, "PIB-TAG");
                        ;}
    break;

  case 155:
#line 3289 "parser-smi.y"
    { yyval.objectPtr = yyvsp[-1].objectPtr; ;}
    break;

  case 156:
#line 3291 "parser-smi.y"
    { yyval.objectPtr = 0; ;}
    break;

  case 157:
#line 3296 "parser-smi.y"
    {
                            if (thisParserPtr->modulePtr->export.language != SMI_LANGUAGE_SPPI)
                                smiPrintError(thisParserPtr, ERR_SPPI_CONSTRUCT_IN_MIB, "UNIQUENESS");
                        ;}
    break;

  case 158:
#line 3301 "parser-smi.y"
    { yyval.listPtr = yyvsp[-1].listPtr; ;}
    break;

  case 159:
#line 3303 "parser-smi.y"
    { yyval.listPtr = NULL; ;}
    break;

  case 160:
#line 3307 "parser-smi.y"
    { yyval.listPtr = yyvsp[0].listPtr; ;}
    break;

  case 161:
#line 3309 "parser-smi.y"
    { yyval.listPtr = NULL; ;}
    break;

  case 162:
#line 3313 "parser-smi.y"
    {
			    yyval.listPtr = smiMalloc(sizeof(List));
			    yyval.listPtr->ptr = yyvsp[0].objectPtr;
			    yyval.listPtr->nextPtr = NULL;
			;}
    break;

  case 163:
#line 3320 "parser-smi.y"
    {
			    List *p, *pp;
			    
			    p = smiMalloc(sizeof(List));
			    p->ptr = yyvsp[0].objectPtr;
			    p->nextPtr = NULL;
			    for (pp = yyvsp[-2].listPtr; pp->nextPtr; pp = pp->nextPtr);
			    pp->nextPtr = p;
			    yyval.listPtr = yyvsp[-2].listPtr;
                        ;}
    break;

  case 164:
#line 3333 "parser-smi.y"
    { yyval.objectPtr = yyvsp[0].objectPtr; ;}
    break;

  case 165:
#line 3337 "parser-smi.y"
    {
                            if (thisParserPtr->modulePtr->export.language != SMI_LANGUAGE_SPPI)
                                smiPrintError(thisParserPtr, ERR_SPPI_CONSTRUCT_IN_MIB, "INSTALL-ERRORS");
                        ;}
    break;

  case 166:
#line 3342 "parser-smi.y"
    { yyval.listPtr = yyvsp[-1].listPtr; ;}
    break;

  case 167:
#line 3344 "parser-smi.y"
    { yyval.listPtr = NULL; ;}
    break;

  case 168:
#line 3348 "parser-smi.y"
    {
			    yyval.listPtr = smiMalloc(sizeof(List));
			    yyval.listPtr->ptr = yyvsp[0].objectPtr;
			    yyval.listPtr->nextPtr = NULL;
			;}
    break;

  case 169:
#line 3355 "parser-smi.y"
    {
			    List *p, *pp;
			    
			    p = smiMalloc(sizeof(List));
			    p->ptr = yyvsp[0].objectPtr;
			    p->nextPtr = NULL;
			    for (pp = yyvsp[-2].listPtr; pp->nextPtr; pp = pp->nextPtr);
			    pp->nextPtr = p;
			    yyval.listPtr = yyvsp[-2].listPtr;
                        ;}
    break;

  case 170:
#line 3368 "parser-smi.y"
    {
			    Object *objectPtr;
			    
                            if ((yyvsp[-1].unsigned32 < 1) || (yyvsp[-1].unsigned32 > 65536))
                                smiPrintError(thisParserPtr, ERR_ERROR_NUMBER_RANGE, yyvsp[-1].unsigned32);
                            /*
                             * This is not a regular object that will be added vid
                             * 'addObject' as error identifier have no other
                             * meaning in PIBs. They are just used for
                             * a direct mapping to the actual protocol fields.
                             */
                            objectPtr = smiMalloc(sizeof(Object));
                            objectPtr->export.name = yyvsp[-3].id;
                            objectPtr->export.oidlen = 1;
                            objectPtr->export.oid = (void *)yyvsp[-1].unsigned32;
			    yyval.objectPtr = objectPtr;
			;}
    break;

  case 171:
#line 3389 "parser-smi.y"
    {
			    if (thisModulePtr->export.language == SMI_LANGUAGE_SMIV1)
			    {
			        smiPrintError(thisParserPtr,
					      ERR_MAX_ACCESS_IN_SMIV1);
			    } else if (thisParserPtr->modulePtr->export.language == SMI_LANGUAGE_SPPI)
                                smiPrintError(thisParserPtr, ERR_SMI_CONSTRUCT_IN_PIB, "MAX-ACCESS");
			;}
    break;

  case 172:
#line 3398 "parser-smi.y"
    { yyval.access = yyvsp[0].access; ;}
    break;

  case 173:
#line 3400 "parser-smi.y"
    {
			    if (thisModulePtr->export.language == SMI_LANGUAGE_SMIV2)
			    {
			        smiPrintError(thisParserPtr, ERR_ACCESS_IN_SMIV2);
			    } else if (thisParserPtr->modulePtr->export.language == SMI_LANGUAGE_SPPI)
                                smiPrintError(thisParserPtr, ERR_SMI_CONSTRUCT_IN_PIB, "ACCESS");
			;}
    break;

  case 174:
#line 3409 "parser-smi.y"
    { yyval.access = yyvsp[0].access; ;}
    break;

  case 175:
#line 3413 "parser-smi.y"
    {
			    firstStatementLine = thisParserPtr->line;
			    currentDecl = SMI_DECL_NOTIFICATIONTYPE;

			    checkNameLen(thisParserPtr, yyvsp[0].id,
					 ERR_OIDNAME_32, ERR_OIDNAME_64);
			    smiCheckObjectName(thisParserPtr,
					       thisModulePtr, yyvsp[0].id);
			;}
    break;

  case 176:
#line 3423 "parser-smi.y"
    {
			    Import *importPtr;

                            if (thisParserPtr->modulePtr->export.language == SMI_LANGUAGE_SPPI)
                                smiPrintError(thisParserPtr, ERR_SMI_CONSTRUCT_IN_PIB, "NOTIFICATION-TYPE");
                                
			    importPtr = findImportByName("NOTIFICATION-TYPE",
							 thisModulePtr);
			    if (importPtr) {
				importPtr->use++;
			    } else {
				smiPrintError(thisParserPtr,
					      ERR_MACRO_NOT_IMPORTED,
					      "NOTIFICATION-TYPE",
					      "SNMPv2-SMI");
			    }
			;}
    break;

  case 177:
#line 3443 "parser-smi.y"
    {
			    if (yyvsp[0].text && !strlen(yyvsp[0].text)) {
				smiPrintError(thisParserPtr,
					      ERR_EMPTY_DESCRIPTION);
			    }
			;}
    break;

  case 178:
#line 3452 "parser-smi.y"
    {
			    Object *objectPtr;
			    
			    objectPtr = yyvsp[-1].objectPtr;

			    smiCheckObjectReuse(thisParserPtr, yyvsp[-14].id, &objectPtr);

			    objectPtr = setObjectName(objectPtr, yyvsp[-14].id);
			    setObjectDecl(objectPtr,
					  SMI_DECL_NOTIFICATIONTYPE);
			    setObjectLine(objectPtr, firstStatementLine,
					  thisParserPtr);
			    addObjectFlags(objectPtr, FLAG_REGISTERED);
			    deleteObjectFlags(objectPtr, FLAG_INCOMPLETE);
			    setObjectList(objectPtr, yyvsp[-10].listPtr);
			    setObjectStatus(objectPtr, yyvsp[-8].status);
			    setObjectDescription(objectPtr, yyvsp[-6].text, thisParserPtr);
			    if (yyvsp[-4].text) {
				setObjectReference(objectPtr, yyvsp[-4].text, thisParserPtr);
			    }
			    yyval.err = 0;
			;}
    break;

  case 179:
#line 3477 "parser-smi.y"
    {
			    firstStatementLine = thisParserPtr->line;
			    currentDecl = SMI_DECL_MODULEIDENTITY;
			    
			    checkNameLen(thisParserPtr, yyvsp[0].id,
					 ERR_OIDNAME_32, ERR_OIDNAME_64);
			    smiCheckObjectName(thisParserPtr,
					       thisModulePtr, yyvsp[0].id);
			;}
    break;

  case 180:
#line 3487 "parser-smi.y"
    {
			    Import *importPtr;
			    
			    importPtr = findImportByName("MODULE-IDENTITY",
							 thisModulePtr);
			    if (importPtr) {
				importPtr->use++;
			    } else {
				smiPrintError(thisParserPtr,
					      ERR_MACRO_NOT_IMPORTED,
					      "MODULE-IDENTITY",
					      "SNMPv2-SMI");
			    }
			    
			    if (thisParserPtr->modulePtr->numModuleIdentities > 0)
			    {
			        smiPrintError(thisParserPtr,
					      ERR_TOO_MANY_MODULE_IDENTITIES);
			    }
			    if (thisParserPtr->modulePtr->numStatements > 0) {
			        smiPrintError(thisParserPtr,
					      ERR_MODULE_IDENTITY_NOT_FIRST);
			    }
			;}
    break;

  case 181:
#line 3512 "parser-smi.y"
    {
                          /* do nothing at the moment */
                        ;}
    break;

  case 182:
#line 3516 "parser-smi.y"
    {
			    setModuleLastUpdated(thisParserPtr->modulePtr, yyvsp[0].date);
			;}
    break;

  case 183:
#line 3520 "parser-smi.y"
    {
			    if (yyvsp[0].text && !strlen(yyvsp[0].text)) {
				smiPrintError(thisParserPtr,
					      ERR_EMPTY_ORGANIZATION);
			    }
			;}
    break;

  case 184:
#line 3527 "parser-smi.y"
    {
			    if (yyvsp[0].text && !strlen(yyvsp[0].text)) {
				smiPrintError(thisParserPtr,
					      ERR_EMPTY_CONTACT);
			    }
			;}
    break;

  case 185:
#line 3534 "parser-smi.y"
    {
			    if (yyvsp[0].text && !strlen(yyvsp[0].text)) {
				smiPrintError(thisParserPtr,
					      ERR_EMPTY_DESCRIPTION);
			    }
			;}
    break;

  case 186:
#line 3543 "parser-smi.y"
    {
			    Object *objectPtr;
			    
			    objectPtr = yyvsp[-1].objectPtr;
			    smiCheckObjectReuse(thisParserPtr, yyvsp[-22].id, &objectPtr);

			    thisParserPtr->modulePtr->numModuleIdentities++;

			    objectPtr = setObjectName(objectPtr, yyvsp[-22].id);
			    setObjectDecl(objectPtr, SMI_DECL_MODULEIDENTITY);
			    setObjectLine(objectPtr, firstStatementLine,
					  thisParserPtr);
			    setObjectStatus(objectPtr, SMI_STATUS_CURRENT);
			    addObjectFlags(objectPtr, FLAG_REGISTERED);
			    deleteObjectFlags(objectPtr, FLAG_INCOMPLETE);
			    setModuleIdentityObject(thisParserPtr->modulePtr,
						    objectPtr);
			    setModuleOrganization(thisParserPtr->modulePtr,
						  yyvsp[-12].text);
			    setModuleContactInfo(thisParserPtr->modulePtr,
						 yyvsp[-9].text);
			    setModuleDescription(thisParserPtr->modulePtr,
						 yyvsp[-6].text, thisParserPtr);
                            if (yyvsp[-18].subjectCategoriesPtr != NULL) {
                                setObjectList(objectPtr, yyvsp[-18].subjectCategoriesPtr->categories);
                                smiFree(yyvsp[-18].subjectCategoriesPtr);
                            }
			    /* setObjectDescription(objectPtr, $15); */
			    yyval.err = 0;
			;}
    break;

  case 187:
#line 3576 "parser-smi.y"
    {
                            if (thisParserPtr->modulePtr->export.language != SMI_LANGUAGE_SPPI)
                                smiPrintError(thisParserPtr, ERR_SPPI_CONSTRUCT_IN_MIB, "SUBJECT-CATEGORIES");
                            yyval.subjectCategoriesPtr = yyvsp[-1].subjectCategoriesPtr;
                        ;}
    break;

  case 188:
#line 3582 "parser-smi.y"
    {
                            if (thisParserPtr->modulePtr->export.language == SMI_LANGUAGE_SPPI)
                                smiPrintError(thisParserPtr, ERR_SUBJECT_CATEGORIES_MISSING);
                            yyval.subjectCategoriesPtr = NULL;
                        ;}
    break;

  case 189:
#line 3590 "parser-smi.y"
    {
                            yyval.subjectCategoriesPtr = smiMalloc(sizeof(SubjectCategories));
                            yyval.subjectCategoriesPtr->categories    = yyvsp[0].listPtr;
                        ;}
    break;

  case 190:
#line 3597 "parser-smi.y"
    {
			    yyval.listPtr = smiMalloc(sizeof(List));
			    yyval.listPtr->ptr = yyvsp[0].objectPtr;
			    yyval.listPtr->nextPtr = NULL;
			;}
    break;

  case 191:
#line 3603 "parser-smi.y"
    {
			    List *p, *pp;
			    
                            if (yyvsp[-2].listPtr->ptr == NULL)
                                smiPrintError(thisParserPtr, ERR_SUBJECT_CATEGORIES_ALL);
			    p = smiMalloc(sizeof(List));
			    p->ptr = (void *)yyvsp[0].objectPtr;
			    p->nextPtr = NULL;
			    for (pp = yyvsp[-2].listPtr; pp->nextPtr; pp = pp->nextPtr);
			    pp->nextPtr = p;
			    yyval.listPtr = yyvsp[-2].listPtr;
			;}
    break;

  case 192:
#line 3618 "parser-smi.y"
    {
                            Object *objectPtr;
                            
                            if (strcmp(yyvsp[0].id, "all"))
                                smiPrintError(thisParserPtr, ERR_SUBJECT_CATEGORIES_MISSING_SUBID);
                            else {
                                /*
                                 * This is not a regular object that will be added via
                                 * 'addObject' as subject category dentifier have no
                                 * other meaning in PIBs. They are just used for
                                 * a direct mapping to the actual protocol fields.
                                 */
                                objectPtr = smiMalloc(sizeof(Object));
                                objectPtr->export.name = "all";
                                objectPtr->export.oidlen = 0;
                                objectPtr->export.oid = 0;
                                yyval.objectPtr = objectPtr;
                            }
                            smiFree(yyvsp[0].id);
                        ;}
    break;

  case 193:
#line 3639 "parser-smi.y"
    {
			    Object *objectPtr;
			    
                            if (!strcmp(yyvsp[-3].id, "all")) {
                                smiPrintError(thisParserPtr, ERR_SUBJECT_CATEGORIES_ALL_WITH_SUBID);
                                yyval.objectPtr = NULL;
                            } else {
                                /*
                                 * This is not a regular object that will be added via
                                 * 'addObject' as subject category dentifier have no
                                 * other meaning in PIBs. They are just used for
                                 * a direct mapping to the actual protocol fields.
                                 */
                                objectPtr = smiMalloc(sizeof(Object));
                                objectPtr->export.name = yyvsp[-3].id;
                                objectPtr->export.oidlen = 1;
                                objectPtr->export.oid = (void *)yyvsp[-1].unsigned32;
                                yyval.objectPtr = objectPtr;
                            }
			;}
    break;

  case 194:
#line 3662 "parser-smi.y"
    {
			    yyval.typePtr = yyvsp[0].typePtr;
			;}
    break;

  case 195:
#line 3666 "parser-smi.y"
    {
			    if (strcmp(thisParserPtr->modulePtr->export.name,
				       "SNMPv2-SMI") &&
			        strcmp(thisParserPtr->modulePtr->export.name,
				       "SNMPv2-TC") &&
				strcmp(thisParserPtr->modulePtr->export.name,
				       "SNMPv2-CONF") &&
				strcmp(thisParserPtr->modulePtr->export.name,
				       "RFC-1212") &&
				strcmp(thisParserPtr->modulePtr->export.name,
				       "RFC1065-SMI") &&
				strcmp(thisParserPtr->modulePtr->export.name,
				       "RFC1155-SMI") &&
                                strcmp(thisParserPtr->modulePtr->export.name,
                                       "COPS-PR-SPPI")) {
			        smiPrintError(thisParserPtr, ERR_TYPE_TAG, yyvsp[-1].err);
			    }
			    yyval.typePtr = yyvsp[0].typePtr;
			;}
    break;

  case 196:
#line 3686 "parser-smi.y"
    {
			    /* TODO */
			    yyval.typePtr = yyvsp[0].typePtr;
			;}
    break;

  case 197:
#line 3691 "parser-smi.y"
    {
			    /* TODO */
			    yyval.typePtr = yyvsp[0].typePtr;
			;}
    break;

  case 198:
#line 3696 "parser-smi.y"
    {
			    /* TODO */
			    yyval.typePtr = yyvsp[0].typePtr;
			;}
    break;

  case 199:
#line 3701 "parser-smi.y"
    {
			    Import *importPtr;

			    if (yyvsp[0].typePtr && yyvsp[0].typePtr->export.name) {
				importPtr = findImportByName(yyvsp[0].typePtr->export.name,
							     thisModulePtr);
				if (importPtr) {
				    importPtr->use++;
				}
			    }

			    /* TODO */
			    yyval.typePtr = yyvsp[0].typePtr;
			;}
    break;

  case 200:
#line 3718 "parser-smi.y"
    { yyval.err = 0; /* TODO: check range */ ;}
    break;

  case 201:
#line 3720 "parser-smi.y"
    { yyval.err = 0; /* TODO: check range */ ;}
    break;

  case 202:
#line 3728 "parser-smi.y"
    { yyval.typePtr = yyvsp[0].typePtr; ;}
    break;

  case 203:
#line 3733 "parser-smi.y"
    {
			    Import *importPtr;

			    if (yyvsp[0].typePtr && yyvsp[0].typePtr->export.name) {
				importPtr = findImportByName(yyvsp[0].typePtr->export.name,
							     thisModulePtr);
				if (importPtr) {
				    importPtr->use++;
				}
			    }

			    /* TODO */
			    yyval.typePtr = yyvsp[0].typePtr;
			;}
    break;

  case 204:
#line 3750 "parser-smi.y"
    { yyval.valuePtr = yyvsp[0].valuePtr; ;}
    break;

  case 205:
#line 3759 "parser-smi.y"
    {
			    if ((thisModulePtr->export.language == SMI_LANGUAGE_SMIV2)
				&&
				(strcmp(thisModulePtr->export.name, "SNMPv2-SMI") &&
				 strcmp(thisModulePtr->export.name, "SNMPv2-TC") &&
                                 strcmp(thisModulePtr->export.name, "COPS-PR-SPPI")))
				smiPrintError(thisParserPtr,
					      ERR_INTEGER_IN_SMIV2);

			    defaultBasetype = SMI_BASETYPE_INTEGER32;
			    yyval.typePtr = smiHandle->typeInteger32Ptr;
			;}
    break;

  case 206:
#line 3772 "parser-smi.y"
    {
			    defaultBasetype = SMI_BASETYPE_INTEGER32;
			;}
    break;

  case 207:
#line 3776 "parser-smi.y"
    {
			    if ((thisModulePtr->export.language == SMI_LANGUAGE_SMIV2)
				&&
				(strcmp(thisModulePtr->export.name, "SNMPv2-SMI") &&
				 strcmp(thisModulePtr->export.name, "SNMPv2-TC") &&
                                 strcmp(thisModulePtr->export.name, "COPS-PR-SPPI")))
				smiPrintError(thisParserPtr,
					      ERR_INTEGER_IN_SMIV2);

			    yyval.typePtr = duplicateType(smiHandle->typeInteger32Ptr, 0,
					       thisParserPtr);
			    setTypeList(yyval.typePtr, yyvsp[0].listPtr);
			    smiCheckTypeRanges(thisParserPtr, yyval.typePtr);
			;}
    break;

  case 208:
#line 3791 "parser-smi.y"
    {
			    defaultBasetype = SMI_BASETYPE_ENUM;
			;}
    break;

  case 209:
#line 3795 "parser-smi.y"
    {
			    List *p;
			    
			    yyval.typePtr = duplicateType(smiHandle->typeEnumPtr, 0,
					       thisParserPtr);
			    setTypeList(yyval.typePtr, yyvsp[0].listPtr);
			    for (p = yyvsp[0].listPtr; p; p = p->nextPtr)
				((NamedNumber *)p->ptr)->typePtr = yyval.typePtr;
			    smiCheckNamedNumbersOrder(parserPtr, yyval.typePtr);
			;}
    break;

  case 210:
#line 3806 "parser-smi.y"
    {
			    Import *importPtr;

			    defaultBasetype = SMI_BASETYPE_INTEGER32;
			    importPtr = findImportByName("Integer32",
							 thisModulePtr);
			    if (importPtr) {
				importPtr->use++;
			    } else {
				if (thisModulePtr->export.language ==
				    SMI_LANGUAGE_SMIV2) {
				    smiPrintError(thisParserPtr,
						  ERR_SMIV2_BASETYPE_NOT_IMPORTED,
						  "Integer32");
				} else if (thisModulePtr->export.language ==
					   SMI_LANGUAGE_SPPI) {
				    smiPrintError(thisParserPtr,
						  ERR_SPPI_BASETYPE_NOT_IMPORTED,
						  "Integer32");
				}
			    }

			    /* TODO: any need to distinguish from INTEGER? */
			    yyval.typePtr = smiHandle->typeInteger32Ptr;
			;}
    break;

  case 211:
#line 3832 "parser-smi.y"
    {
			    defaultBasetype = SMI_BASETYPE_INTEGER32;
			;}
    break;

  case 212:
#line 3836 "parser-smi.y"
    {
			    Import *importPtr;
			    
			    importPtr = findImportByName("Integer32",
							 thisModulePtr);
			    if (importPtr) {
				importPtr->use++;
			    } else {
				if (thisModulePtr->export.language ==
				    SMI_LANGUAGE_SMIV2) {
				    smiPrintError(thisParserPtr,
						  ERR_SMIV2_BASETYPE_NOT_IMPORTED,
						  "Integer32");
				} else if (thisModulePtr->export.language ==
					   SMI_LANGUAGE_SPPI) {
				    smiPrintError(thisParserPtr,
						  ERR_SPPI_BASETYPE_NOT_IMPORTED,
						  "Integer32");
				}
			    }

			    yyval.typePtr = duplicateType(smiHandle->typeInteger32Ptr, 0,
					       thisParserPtr);
			    setTypeList(yyval.typePtr, yyvsp[0].listPtr);
			    smiCheckTypeRanges(thisParserPtr, yyval.typePtr);
			;}
    break;

  case 213:
#line 3863 "parser-smi.y"
    {
			    defaultBasetype = SMI_BASETYPE_ENUM;
			;}
    break;

  case 214:
#line 3867 "parser-smi.y"
    {
			    Type *parentPtr;
			    Import *importPtr;
			    List *p;
			    
			    parentPtr = findTypeByModuleAndName(
			        thisParserPtr->modulePtr, yyvsp[-2].id);
			    if (!parentPtr) {
			        importPtr = findImportByName(yyvsp[-2].id,
							     thisModulePtr);
				if (importPtr &&
				    importPtr->kind == KIND_TYPE) {
				    importPtr->use++;
				    parentPtr = findTypeByModulenameAndName(
					importPtr->export.module, yyvsp[-2].id);
				}
			    }
			    if (parentPtr) {
				if ((parentPtr->export.basetype !=
				     SMI_BASETYPE_ENUM) &&
				    (parentPtr->export.basetype !=
				     SMI_BASETYPE_BITS)) {
				    smiPrintError(thisParserPtr,
						  ERR_ILLEGAL_ENUM_FOR_PARENT_TYPE,
						  yyvsp[-2].id);
				    yyval.typePtr = duplicateType(smiHandle->typeEnumPtr, 0,
						       thisParserPtr);
				} else {
				    yyval.typePtr = duplicateType(parentPtr, 0,
						       thisParserPtr);
				}
				smiFree(yyvsp[-2].id);
			    } else {
				/* 
				 * forward referenced type. create it,
				 * marked with FLAG_INCOMPLETE.
				 */
				parentPtr = addType(yyvsp[-2].id,
						    SMI_BASETYPE_UNKNOWN,
						    FLAG_INCOMPLETE,
						    thisParserPtr);
				yyval.typePtr = duplicateType(parentPtr, 0,
						   thisParserPtr);
			    }
			    setTypeList(yyval.typePtr, yyvsp[0].listPtr);
			    for (p = yyvsp[0].listPtr; p; p = p->nextPtr)
				((NamedNumber *)p->ptr)->typePtr = yyval.typePtr;
			    smiCheckNamedNumbersOrder(parserPtr, yyval.typePtr);
			;}
    break;

  case 215:
#line 3918 "parser-smi.y"
    {
			    Type *parentPtr;
			    Import *importPtr;
			    List *p;
			    
                            defaultBasetype = SMI_BASETYPE_ENUM;
                            parentPtr = findTypeByModulenameAndName(yyvsp[-3].id, yyvsp[-1].id);
			    if (!parentPtr) {
				importPtr =
				    findImportByModulenameAndName(yyvsp[-3].id,
							  yyvsp[-1].id, thisModulePtr);
				if (importPtr &&
				    importPtr->kind == KIND_TYPE) {
				    importPtr->use++;
				    parentPtr =
					findTypeByModulenameAndName(yyvsp[-3].id, yyvsp[-1].id);
				}
			    }
			    if (parentPtr) {
				if ((parentPtr->export.basetype !=
				     SMI_BASETYPE_ENUM) &&
				    (parentPtr->export.basetype !=
				     SMI_BASETYPE_BITS)) {
				    smiPrintError(thisParserPtr,
						  ERR_ILLEGAL_ENUM_FOR_PARENT_TYPE,
						  yyvsp[-1].id);
				    yyval.typePtr = duplicateType(smiHandle->typeEnumPtr, 0,
						       thisParserPtr);
				} else {
				    yyval.typePtr = duplicateType(parentPtr, 0,
						       thisParserPtr);
				}
			    } else {
				smiPrintError(thisParserPtr,
					      ERR_UNKNOWN_TYPE, yyvsp[-1].id);
				yyval.typePtr = duplicateType(smiHandle->typeEnumPtr, 0,
						   thisParserPtr);
			    }
			    setTypeList(yyval.typePtr, yyvsp[0].listPtr);
			    for (p = yyvsp[0].listPtr; p; p = p->nextPtr)
				((NamedNumber *)p->ptr)->typePtr = yyval.typePtr;
			    smiCheckNamedNumbersOrder(parserPtr, yyval.typePtr);
			    smiFree(yyvsp[-3].id);
			    smiFree(yyvsp[-1].id);
			;}
    break;

  case 216:
#line 3964 "parser-smi.y"
    {
			    Type *parentPtr;
			    Import *importPtr;
			    
			    parentPtr = findTypeByModuleAndName(
				thisParserPtr->modulePtr, yyvsp[-1].id);
			    if (!parentPtr) {
				importPtr = findImportByName(yyvsp[-1].id,
							     thisModulePtr);
				if (importPtr &&
				    importPtr->kind == KIND_TYPE) {
				    importPtr->use++;
				    parentPtr = findTypeByModulenameAndName(
					importPtr->export.module, yyvsp[-1].id);
				}
			    }
			    if (parentPtr) {
				if ((parentPtr->export.basetype !=
				    SMI_BASETYPE_INTEGER32) &&
				    (parentPtr->export.basetype !=
				     SMI_BASETYPE_INTEGER64) &&
				    (parentPtr->export.basetype !=
				     SMI_BASETYPE_UNSIGNED32) &&
				    (parentPtr->export.basetype !=
				     SMI_BASETYPE_UNSIGNED64)) {
				    smiPrintError(thisParserPtr,
					     ERR_ILLEGAL_RANGE_FOR_PARENT_TYPE,
						  yyvsp[-1].id);
				    yyval.typePtr = duplicateType(smiHandle->typeInteger32Ptr, 0,
						       thisParserPtr);
				    defaultBasetype = SMI_BASETYPE_INTEGER32;
				} else {
				    defaultBasetype =
					parentPtr->export.basetype;
				    yyval.typePtr = duplicateType(parentPtr, 0,
						       thisParserPtr);
				}
				smiFree(yyvsp[-1].id);
			    } else {
				/* 
				 * forward referenced type. create it,
				 * marked with FLAG_INCOMPLETE.
				 */
				parentPtr = addType(yyvsp[-1].id,
						    SMI_BASETYPE_UNKNOWN,
						    FLAG_INCOMPLETE,
						    thisParserPtr);
				yyval.typePtr = duplicateType(parentPtr, 0,
						   thisParserPtr);
				defaultBasetype = SMI_BASETYPE_INTEGER32;
			    }
			    setTypeList(yyval.typePtr, yyvsp[0].listPtr);
			    smiCheckTypeRanges(thisParserPtr, yyval.typePtr);
			;}
    break;

  case 217:
#line 4020 "parser-smi.y"
    {
			    Type *parentPtr;
			    Import *importPtr;
			    
			    parentPtr = findTypeByModulenameAndName(yyvsp[-3].id, yyvsp[-1].id);
			    if (!parentPtr) {
				importPtr = findImportByModulenameAndName(yyvsp[-3].id,
							  yyvsp[-1].id, thisModulePtr);
				if (importPtr &&
				    importPtr->kind == KIND_TYPE) {
				    importPtr->use++;
				    parentPtr = findTypeByModulenameAndName(
					yyvsp[-3].id, yyvsp[-1].id);
				}
			    }
			    if (parentPtr) {
				if ((parentPtr->export.basetype !=
				    SMI_BASETYPE_INTEGER32) &&
				    (parentPtr->export.basetype !=
				     SMI_BASETYPE_INTEGER64) &&
				    (parentPtr->export.basetype !=
				     SMI_BASETYPE_UNSIGNED32) &&
				    (parentPtr->export.basetype !=
				     SMI_BASETYPE_UNSIGNED64)) {
				    smiPrintError(thisParserPtr,
					     ERR_ILLEGAL_RANGE_FOR_PARENT_TYPE,
						  yyvsp[-1].id);
				    yyval.typePtr = duplicateType(smiHandle->typeInteger32Ptr, 0,
						       thisParserPtr);
				    defaultBasetype = SMI_BASETYPE_INTEGER32;
				} else {
				    defaultBasetype =
					parentPtr->export.basetype;
				    yyval.typePtr = duplicateType(parentPtr, 0,
						       thisParserPtr);
				}
			    } else {
				smiPrintError(thisParserPtr,
					      ERR_UNKNOWN_TYPE, yyvsp[-1].id);
				yyval.typePtr = duplicateType(smiHandle->typeInteger32Ptr, 0,
						   thisParserPtr);
				defaultBasetype = SMI_BASETYPE_INTEGER32;
			    }
			    setTypeList(yyval.typePtr, yyvsp[0].listPtr);
			    smiCheckTypeRanges(thisParserPtr, yyval.typePtr);
			    smiFree(yyvsp[-3].id);
			    smiFree(yyvsp[-1].id);
			;}
    break;

  case 218:
#line 4069 "parser-smi.y"
    {
			    defaultBasetype = SMI_BASETYPE_OCTETSTRING;
			    yyval.typePtr = smiHandle->typeOctetStringPtr;
			;}
    break;

  case 219:
#line 4074 "parser-smi.y"
    {
			    defaultBasetype = SMI_BASETYPE_OCTETSTRING;
			;}
    break;

  case 220:
#line 4078 "parser-smi.y"
    {
			    
			    yyval.typePtr = duplicateType(smiHandle->typeOctetStringPtr, 0,
					       thisParserPtr);
			    setTypeList(yyval.typePtr, yyvsp[0].listPtr);
			    smiCheckTypeRanges(thisParserPtr, yyval.typePtr);
			;}
    break;

  case 221:
#line 4086 "parser-smi.y"
    {
			    Type *parentPtr;
			    Import *importPtr;
			    
			    defaultBasetype = SMI_BASETYPE_OCTETSTRING;
			    parentPtr = findTypeByModuleAndName(
				thisParserPtr->modulePtr, yyvsp[-1].id);
			    if (!parentPtr) {
				importPtr = findImportByName(yyvsp[-1].id,
							     thisModulePtr);
				if (importPtr &&
				    importPtr->kind == KIND_TYPE) {
				    importPtr->use++;
				    parentPtr = findTypeByModulenameAndName(
					importPtr->export.module, yyvsp[-1].id);
				}
			    }
			    if (parentPtr) {
				if (parentPtr->export.basetype !=
				    SMI_BASETYPE_OCTETSTRING) {
				    smiPrintError(thisParserPtr,
					      ERR_ILLEGAL_SIZE_FOR_PARENT_TYPE,
						  yyvsp[-1].id);
				    yyval.typePtr = duplicateType(smiHandle->typeOctetStringPtr, 0,
						       thisParserPtr);
				} else {
				    yyval.typePtr = duplicateType(parentPtr, 0,
						       thisParserPtr);
				}
				smiFree(yyvsp[-1].id);
			    } else {
				/* 
				 * forward referenced type. create it,
				 * marked with FLAG_INCOMPLETE.
				 */
				parentPtr = addType(yyvsp[-1].id,
						    SMI_BASETYPE_UNKNOWN,
						    FLAG_INCOMPLETE,
						    thisParserPtr);
				yyval.typePtr = duplicateType(parentPtr, 0,
						   thisParserPtr);
			    }
			    setTypeList(yyval.typePtr, yyvsp[0].listPtr);
			    smiCheckTypeRanges(thisParserPtr, yyval.typePtr);
			;}
    break;

  case 222:
#line 4133 "parser-smi.y"
    {
			    Type *parentPtr;
			    Import *importPtr;
			    
			    defaultBasetype = SMI_BASETYPE_OCTETSTRING;
			    parentPtr = findTypeByModulenameAndName(yyvsp[-3].id, yyvsp[-1].id);
			    if (!parentPtr) {
				importPtr = findImportByModulenameAndName(yyvsp[-3].id,
							  yyvsp[-1].id, thisModulePtr);
				if (importPtr &&
				    importPtr->kind == KIND_TYPE) {
				    importPtr->use++;
				    parentPtr = findTypeByModulenameAndName(
					yyvsp[-3].id, yyvsp[-1].id);
				}
			    }
			    if (parentPtr) {
				if (parentPtr->export.basetype !=
				    SMI_BASETYPE_OCTETSTRING) {
				    smiPrintError(thisParserPtr,
					      ERR_ILLEGAL_SIZE_FOR_PARENT_TYPE,
						  yyvsp[-1].id);
				    yyval.typePtr = duplicateType(smiHandle->typeOctetStringPtr, 0,
						       thisParserPtr);
				} else {
				    yyval.typePtr = duplicateType(parentPtr, 0,
						       thisParserPtr);
				}
			    } else {
				smiPrintError(thisParserPtr,
					      ERR_UNKNOWN_TYPE, yyvsp[-1].id);
				yyval.typePtr = duplicateType(smiHandle->typeOctetStringPtr, 0,
						   thisParserPtr);
			    }
			    setTypeList(yyval.typePtr, yyvsp[0].listPtr);
			    smiCheckTypeRanges(thisParserPtr, yyval.typePtr);
			    smiFree(yyvsp[-3].id);
			    smiFree(yyvsp[-1].id);
			;}
    break;

  case 223:
#line 4173 "parser-smi.y"
    {
			    defaultBasetype = SMI_BASETYPE_OBJECTIDENTIFIER;
			    yyval.typePtr = smiHandle->typeObjectIdentifierPtr;
			;}
    break;

  case 224:
#line 4181 "parser-smi.y"
    {
			    yyval.valuePtr = smiMalloc(sizeof(SmiValue));
			    yyval.valuePtr->basetype = SMI_BASETYPE_UNSIGNED32;
			    yyval.valuePtr->value.unsigned32 = yyvsp[0].unsigned32;
			;}
    break;

  case 225:
#line 4187 "parser-smi.y"
    {
			    yyval.valuePtr = smiMalloc(sizeof(SmiValue));
			    yyval.valuePtr->basetype = SMI_BASETYPE_INTEGER32;
			    yyval.valuePtr->value.integer32 = yyvsp[0].integer32;
			;}
    break;

  case 226:
#line 4193 "parser-smi.y"
    {   
                            /* The scanner already checks for the language */
			    yyval.valuePtr = smiMalloc(sizeof(SmiValue));
			    yyval.valuePtr->basetype = SMI_BASETYPE_UNSIGNED64;
			    yyval.valuePtr->value.unsigned64 = yyvsp[0].unsigned64;
			;}
    break;

  case 227:
#line 4200 "parser-smi.y"
    {
                            /* The scanner already checks for the language */
			    yyval.valuePtr = smiMalloc(sizeof(SmiValue));
			    yyval.valuePtr->basetype = SMI_BASETYPE_INTEGER64;
			    yyval.valuePtr->value.integer64 = yyvsp[0].integer64;
			;}
    break;

  case 228:
#line 4207 "parser-smi.y"
    {
			    char s[9];
			    int i, len, j;
			    
			    yyval.valuePtr = smiMalloc(sizeof(SmiValue));
			    if (defaultBasetype == SMI_BASETYPE_OCTETSTRING) {
				yyval.valuePtr->basetype = SMI_BASETYPE_OCTETSTRING;
				len = strlen(yyvsp[0].text);
				yyval.valuePtr->value.ptr =
				    smiMalloc((len+7)/8+1);
				for (i = 0; i < len; i += 8) {
				    strncpy(s, &yyvsp[0].text[i], 8);
				    for (j = 1; j < 8; j++) {
					if (!s[j]) s[j] = '0';
				    }
				    s[8] = 0;
				    yyval.valuePtr->value.ptr[i/8] =
					(unsigned char)strtol(s, 0, 2);
				}
				yyval.valuePtr->len = (len+7)/8;
			    } else {
				yyval.valuePtr->basetype = SMI_BASETYPE_UNSIGNED32;
				yyval.valuePtr->value.unsigned32 = strtoul(yyvsp[0].text, NULL, 2);
			    }
			;}
    break;

  case 229:
#line 4233 "parser-smi.y"
    {
			    char s[3];
			    int i, len;
			    
			    yyval.valuePtr = smiMalloc(sizeof(SmiValue));
			    if (defaultBasetype == SMI_BASETYPE_OCTETSTRING) {
				yyval.valuePtr->basetype = SMI_BASETYPE_OCTETSTRING;
				len = strlen(yyvsp[0].text);
				yyval.valuePtr->value.ptr = smiMalloc((len+1)/2+1);
				for (i = 0; i < len; i += 2) {
				    strncpy(s, &yyvsp[0].text[i], 2);
				    if (!s[1]) s[1] = '0';
				    s[2] = 0;
				    yyval.valuePtr->value.ptr[i/2] =
					(unsigned char)strtol(s, 0, 16);
				}
				yyval.valuePtr->len = (len+1)/2;
			    } else {
				yyval.valuePtr->basetype = SMI_BASETYPE_UNSIGNED32;
				yyval.valuePtr->value.unsigned32 = strtoul(yyvsp[0].text, NULL, 16);
			    }
			;}
    break;

  case 230:
#line 4256 "parser-smi.y"
    {
			    yyval.valuePtr = smiMalloc(sizeof(SmiValue));
			    if ((defaultBasetype != SMI_BASETYPE_ENUM) &&
				(defaultBasetype != SMI_BASETYPE_OBJECTIDENTIFIER)) {
				smiPrintError(thisParserPtr, ERR_DEFVAL_SYNTAX);
				yyval.valuePtr->basetype = defaultBasetype;
				if (defaultBasetype == SMI_BASETYPE_ENUM) {
				    yyval.valuePtr->len = 1;
				    yyval.valuePtr->value.unsigned32 = 0;
				} else {
				    yyval.valuePtr->len = 0;
				    yyval.valuePtr->value.ptr = NULL;
				}
			    } else {
				yyval.valuePtr->basetype = defaultBasetype;
				yyval.valuePtr->len = -1;  /* indicates unresolved ptr */
				yyval.valuePtr->value.ptr = (unsigned char *)yyvsp[0].id; /* JS: needs strdup? */
			    }
			;}
    break;

  case 231:
#line 4276 "parser-smi.y"
    {
			    yyval.valuePtr = smiMalloc(sizeof(SmiValue));
			    yyval.valuePtr->basetype = SMI_BASETYPE_OCTETSTRING;
			    yyval.valuePtr->value.ptr = (unsigned char *)smiStrdup(yyvsp[0].text);
			    yyval.valuePtr->len = strlen(yyvsp[0].text);
			;}
    break;

  case 232:
#line 4299 "parser-smi.y"
    {
			    /*
			     * SMIv1 allows something like { 0 0 } !
			     * SMIv2 does not!
			     */
			    /* TODO: make it work correctly for SMIv1 */
			    if (thisModulePtr->export.language == SMI_LANGUAGE_SMIV2) {
				smiPrintError(thisParserPtr,
					      ERR_OID_DEFVAL_TOO_LONG_SMIV2);
			    } else {
				smiPrintError(thisParserPtr,
					      ERR_OID_DEFVAL_TOO_LONG_SMIV1);
			    }
			    yyval.valuePtr = smiMalloc(sizeof(SmiValue));
			    yyval.valuePtr->basetype = SMI_BASETYPE_OBJECTIDENTIFIER;
			    yyval.valuePtr->len = 2;
			    yyval.valuePtr->value.oid = smiMalloc(2 * sizeof(SmiSubid));
			    yyval.valuePtr->value.oid[0] = 0;
			    yyval.valuePtr->value.oid[1] = 0;
			;}
    break;

  case 233:
#line 4326 "parser-smi.y"
    {
			    yyval.typePtr = smiHandle->typeInteger32Ptr;
			;}
    break;

  case 234:
#line 4330 "parser-smi.y"
    {
			    Import *importPtr;
			    
			    /* TODO: any need to distinguish from INTEGER? */
			    yyval.typePtr = smiHandle->typeInteger32Ptr;

			    importPtr = findImportByName("Integer32",
							 thisModulePtr);
			    if (importPtr) {
				importPtr->use++;
			    } else {
				if (thisModulePtr->export.language ==
				    SMI_LANGUAGE_SMIV2) {
				    smiPrintError(thisParserPtr,
						  ERR_SMIV2_BASETYPE_NOT_IMPORTED,
						  "Integer32");
				} else if (thisModulePtr->export.language ==
					   SMI_LANGUAGE_SPPI) {
				    smiPrintError(thisParserPtr,
						  ERR_SPPI_BASETYPE_NOT_IMPORTED,
						  "Integer32");
				}
			    }
			;}
    break;

  case 235:
#line 4355 "parser-smi.y"
    {
			    yyval.typePtr = smiHandle->typeOctetStringPtr;
			;}
    break;

  case 236:
#line 4359 "parser-smi.y"
    {
			    yyval.typePtr = smiHandle->typeObjectIdentifierPtr;
			;}
    break;

  case 237:
#line 4365 "parser-smi.y"
    {
			    Import *importPtr;
			    
			    yyval.typePtr = findTypeByName("IpAddress");
			    if (! yyval.typePtr) {
				smiPrintError(thisParserPtr, ERR_UNKNOWN_TYPE,
					      "IpAddress");
			    }
			    
			    importPtr = findImportByName("IpAddress",
							 thisModulePtr);
			    if (importPtr) {
				importPtr->use++;
			    } else {
				if (thisModulePtr->export.language ==
				    SMI_LANGUAGE_SMIV2) {
				    smiPrintError(thisParserPtr,
						  ERR_SMIV2_BASETYPE_NOT_IMPORTED,
						  "IpAddress");
				} else if (thisModulePtr->export.language ==
					   SMI_LANGUAGE_SPPI) {
				    smiPrintError(thisParserPtr,
						  ERR_SPPI_BASETYPE_NOT_IMPORTED,
						  "IpAddress");
				}
			    }
			;}
    break;

  case 238:
#line 4393 "parser-smi.y"
    {
			    Import *importPtr;

                            if ((thisParserPtr->modulePtr->export.language == SMI_LANGUAGE_SPPI) &&
                                !findImportByName("Counter32", thisParserPtr->modulePtr))
                                smiPrintError(thisParserPtr, ERR_SMI_CONSTRUCT_IN_PIB, "COUNTER32");
			    yyval.typePtr = findTypeByName("Counter32");
			    if (! yyval.typePtr) {
				smiPrintError(thisParserPtr, ERR_UNKNOWN_TYPE,
					      "Counter32");
			    }
			    
			    importPtr = findImportByName("Counter32",
							 thisModulePtr);
			    if (importPtr) {
				importPtr->use++;
			    } else {
				if (thisModulePtr->export.language ==
				    SMI_LANGUAGE_SMIV2) {
				    smiPrintError(thisParserPtr,
						  ERR_SMIV2_BASETYPE_NOT_IMPORTED,
						  "Counter32");
				}
			    }
			;}
    break;

  case 239:
#line 4419 "parser-smi.y"
    {
			    Import *importPtr;
			    List *listPtr, *nextListPtr;
			    
			    smiPrintError(thisParserPtr,
					  ERR_ILLEGAL_RANGE_FOR_COUNTER,
					  "Counter32");
			    for (listPtr = yyvsp[0].listPtr; listPtr;
				 listPtr = nextListPtr) {
				nextListPtr = listPtr->nextPtr;
				smiFree((Range *)listPtr->ptr);
				smiFree(listPtr);
			    }
			    
                            if ((thisParserPtr->modulePtr->export.language == SMI_LANGUAGE_SPPI) &&
                                !findImportByName("Counter32", thisParserPtr->modulePtr))
                                smiPrintError(thisParserPtr, ERR_SMI_CONSTRUCT_IN_PIB, "Counter32");
			    yyval.typePtr = findTypeByName("Counter32");
			    if (! yyval.typePtr) {
				smiPrintError(thisParserPtr, ERR_UNKNOWN_TYPE,
					      "Counter32");
			    }
			    
			    importPtr = findImportByName("Counter32",
							 thisModulePtr);
			    if (importPtr) {
				importPtr->use++;
			    } else {
				if (thisModulePtr->export.language ==
				    SMI_LANGUAGE_SMIV2) {
				    smiPrintError(thisParserPtr,
						  ERR_SMIV2_BASETYPE_NOT_IMPORTED,
						  "Counter32");
				}
			    }
			;}
    break;

  case 240:
#line 4456 "parser-smi.y"
    {
			    Import *importPtr;

                            if ((thisParserPtr->modulePtr->export.language == SMI_LANGUAGE_SPPI) &&
                                !findImportByName("Gauge32", thisParserPtr->modulePtr))
                                smiPrintError(thisParserPtr, ERR_SMI_CONSTRUCT_IN_PIB, "Gauge32");
			    yyval.typePtr = findTypeByName("Gauge32");
			    if (! yyval.typePtr) {
				smiPrintError(thisParserPtr, ERR_UNKNOWN_TYPE,
					      "Gauge32");
			    }
			    
			    importPtr = findImportByName("Gauge32",
							 thisModulePtr);
			    if (importPtr) {
				importPtr->use++;
			    } else {
				if (thisModulePtr->export.language ==
				    SMI_LANGUAGE_SMIV2) {
				    smiPrintError(thisParserPtr,
						  ERR_SMIV2_BASETYPE_NOT_IMPORTED,
						  "Gauge32");
				}
			    }
			;}
    break;

  case 241:
#line 4482 "parser-smi.y"
    {
			    Type *parentPtr;
			    Import *importPtr;
			    
                            if ((thisParserPtr->modulePtr->export.language == SMI_LANGUAGE_SPPI) &&
                                !findImportByName("Gauge32", thisParserPtr->modulePtr))
                                smiPrintError(thisParserPtr, ERR_SMI_CONSTRUCT_IN_PIB, "Gauge32");
			    parentPtr = findTypeByName("Gauge32");
			    if (! parentPtr) {
				smiPrintError(thisParserPtr, ERR_UNKNOWN_TYPE,
					      "Gauge32");
				yyval.typePtr = NULL;
			    } else {
				yyval.typePtr = duplicateType(parentPtr, 0,
						   thisParserPtr);
				setTypeList(yyval.typePtr, yyvsp[0].listPtr);
				smiCheckTypeRanges(thisParserPtr, yyval.typePtr);
			    }
			    
			    importPtr = findImportByName("Gauge32",
							 thisModulePtr);
			    if (importPtr) {
				importPtr->use++;
			    } else {
				if (thisModulePtr->export.language ==
				    SMI_LANGUAGE_SMIV2) {
				    smiPrintError(thisParserPtr,
						  ERR_SMIV2_BASETYPE_NOT_IMPORTED,
						  "Gauge32");
				}
			    }
			;}
    break;

  case 242:
#line 4515 "parser-smi.y"
    {
			    Import *importPtr;

			    yyval.typePtr = smiHandle->typeUnsigned32Ptr;
			    
			    importPtr = findImportByName("Unsigned32",
							 thisModulePtr);
			    if (importPtr) {
				importPtr->use++;
			    } else {
				if (thisModulePtr->export.language ==
				    SMI_LANGUAGE_SMIV2) {
				    smiPrintError(thisParserPtr,
						  ERR_SMIV2_BASETYPE_NOT_IMPORTED,
						  "Unsigned32");
				} else if (thisModulePtr->export.language ==
					   SMI_LANGUAGE_SPPI) {
				    smiPrintError(thisParserPtr,
						  ERR_SPPI_BASETYPE_NOT_IMPORTED,
						  "Unsigned32");
				}
			    }
			;}
    break;

  case 243:
#line 4539 "parser-smi.y"
    {
			    Import *importPtr;
			    
			    yyval.typePtr = duplicateType(smiHandle->typeUnsigned32Ptr, 0,
					       thisParserPtr);
			    setTypeList(yyval.typePtr, yyvsp[0].listPtr);
			    smiCheckTypeRanges(thisParserPtr, yyval.typePtr);

			    importPtr = findImportByName("Unsigned32",
							 thisModulePtr);
			    if (importPtr) {
				importPtr->use++;
			    } else {
				if (thisModulePtr->export.language ==
				    SMI_LANGUAGE_SMIV2) {
				    smiPrintError(thisParserPtr,
						  ERR_SMIV2_BASETYPE_NOT_IMPORTED,
						  "Unsigned32");
				} else if (thisModulePtr->export.language ==
					   SMI_LANGUAGE_SPPI) {
				    smiPrintError(thisParserPtr,
						  ERR_SPPI_BASETYPE_NOT_IMPORTED,
						  "Unsigned32");
				}
			    }
			;}
    break;

  case 244:
#line 4566 "parser-smi.y"
    {
			    Import *importPtr;
			    
			    yyval.typePtr = findTypeByName("TimeTicks");
			    if (! yyval.typePtr) {
				smiPrintError(thisParserPtr, ERR_UNKNOWN_TYPE,
					      "TimeTicks");
			    }
			    
			    importPtr = findImportByName("TimeTicks",
							 thisModulePtr);
			    if (importPtr) {
				importPtr->use++;
			    } else {
				if (thisModulePtr->export.language ==
				    SMI_LANGUAGE_SMIV2) {
				    smiPrintError(thisParserPtr,
						  ERR_SMIV2_BASETYPE_NOT_IMPORTED,
						  "TimeTicks");
				} else if (thisModulePtr->export.language ==
					   SMI_LANGUAGE_SPPI) {
				    smiPrintError(thisParserPtr,
						  ERR_SPPI_BASETYPE_NOT_IMPORTED,
						  "TimeTicks");
				}
			    }
			;}
    break;

  case 245:
#line 4594 "parser-smi.y"
    {
			    Import *importPtr;
			    
			    yyval.typePtr = findTypeByName("Opaque");
			    if (! yyval.typePtr) {
				smiPrintError(thisParserPtr, ERR_UNKNOWN_TYPE,
					      "Opaque");
			    } else {
				if (thisModulePtr->export.language ==
				    SMI_LANGUAGE_SMIV2) {
				    smiPrintError(thisParserPtr,
						  ERR_SMIV2_OPAQUE_OBSOLETE);
				} else if (thisModulePtr->export.language ==
					   SMI_LANGUAGE_SPPI) {
				    smiPrintError(thisParserPtr,
						  ERR_SPPI_OPAQUE_OBSOLETE);
				}
			    }
			    
			    importPtr = findImportByName("Opaque",
							 thisModulePtr);
			    if (importPtr) {
				importPtr->use++;
			    } else {
				if (thisModulePtr->export.language ==
				    SMI_LANGUAGE_SMIV2) {
				    smiPrintError(thisParserPtr,
						  ERR_SMIV2_BASETYPE_NOT_IMPORTED,
						  "Opaque");
				} else if (thisModulePtr->export.language ==
					   SMI_LANGUAGE_SPPI) {
				    smiPrintError(thisParserPtr,
						  ERR_SPPI_BASETYPE_NOT_IMPORTED,
						  "Opaque");
				}
			    }
			;}
    break;

  case 246:
#line 4632 "parser-smi.y"
    {
			    Type *parentPtr;
			    Import *importPtr;
			    
			    parentPtr = findTypeByName("Opaque");
			    if (! parentPtr) {
				smiPrintError(thisParserPtr, ERR_UNKNOWN_TYPE,
					      "Opaque");
				yyval.typePtr = NULL;
			    } else {
				if (thisModulePtr->export.language ==
				    SMI_LANGUAGE_SMIV2) {
				    smiPrintError(thisParserPtr,
						  ERR_SMIV2_OPAQUE_OBSOLETE,
						  "Opaque");
				} else if (thisModulePtr->export.language ==
					   SMI_LANGUAGE_SPPI) {
				    smiPrintError(thisParserPtr,
						  ERR_SPPI_OPAQUE_OBSOLETE,
						  "Opaque");
				}
				yyval.typePtr = duplicateType(parentPtr, 0,
						   thisParserPtr);
				setTypeList(yyval.typePtr, yyvsp[0].listPtr);
				smiCheckTypeRanges(thisParserPtr, yyval.typePtr);
			    }

			    importPtr = findImportByName("Opaque",
							 thisModulePtr);
			    if (importPtr) {
				importPtr->use++;
			    } else {
				if (thisModulePtr->export.language ==
				    SMI_LANGUAGE_SMIV2) {
				    smiPrintError(thisParserPtr,
						  ERR_SMIV2_BASETYPE_NOT_IMPORTED,
						  "Opaque");
				} else if (thisModulePtr->export.language ==
					   SMI_LANGUAGE_SPPI) {
				    smiPrintError(thisParserPtr,
						  ERR_SPPI_BASETYPE_NOT_IMPORTED,
						  "Opaque");
				}
			    }
			;}
    break;

  case 247:
#line 4678 "parser-smi.y"
    {
			    Import *importPtr;

                            if ((thisParserPtr->modulePtr->export.language == SMI_LANGUAGE_SPPI) &&
                                !findImportByName("Counter64", thisParserPtr->modulePtr))
                                smiPrintError(thisParserPtr, ERR_SMI_CONSTRUCT_IN_PIB, "Counter64");
			    yyval.typePtr = findTypeByName("Counter64");
			    if (! yyval.typePtr) {
				smiPrintError(thisParserPtr, ERR_UNKNOWN_TYPE,
					      "Counter64");
			    }

			    importPtr = findImportByName("Counter64",
							 thisModulePtr);
			    if (importPtr) {
				importPtr->use++;
			    } else {
				if (thisModulePtr->export.language ==
				    SMI_LANGUAGE_SMIV2) {
				    smiPrintError(thisParserPtr,
						  ERR_SMIV2_BASETYPE_NOT_IMPORTED,
						  "Counter64");
				}
			    }
			;}
    break;

  case 248:
#line 4704 "parser-smi.y"
    {
			    Import *importPtr;
			    List *listPtr, *nextListPtr;
			    
			    smiPrintError(thisParserPtr,
					  ERR_ILLEGAL_RANGE_FOR_COUNTER,
					  "Counter64");
			    for (listPtr = yyvsp[0].listPtr; listPtr;
				 listPtr = nextListPtr) {
				nextListPtr = listPtr->nextPtr;
				smiFree((Range *)listPtr->ptr);
				smiFree(listPtr);
			    }
			    
                            if ((thisParserPtr->modulePtr->export.language == SMI_LANGUAGE_SPPI) &&
                                !findImportByName("Counter64", thisParserPtr->modulePtr))
                                smiPrintError(thisParserPtr, ERR_SMI_CONSTRUCT_IN_PIB, "Counter64");
			    yyval.typePtr = findTypeByName("Counter64");
			    if (! yyval.typePtr) {
				smiPrintError(thisParserPtr, ERR_UNKNOWN_TYPE,
					      "Counter64");
			    }

			    importPtr = findImportByName("Counter64",
							 thisModulePtr);
			    if (importPtr) {
				importPtr->use++;
			    } else {
				if (thisModulePtr->export.language ==
				    SMI_LANGUAGE_SMIV2) {
				    smiPrintError(thisParserPtr,
						  ERR_SMIV2_BASETYPE_NOT_IMPORTED,
						  "Counter64");
				}
			    }
			;}
    break;

  case 249:
#line 4741 "parser-smi.y"
    {
			    Import *importPtr;

                            if (thisParserPtr->modulePtr->export.language != SMI_LANGUAGE_SPPI)
                                smiPrintError(thisParserPtr, ERR_SPPI_CONSTRUCT_IN_MIB, "Integer64");
			    yyval.typePtr = findTypeByName("Integer64");
			    if (! yyval.typePtr) {
				smiPrintError(thisParserPtr, ERR_UNKNOWN_TYPE,
					      "Integer64");
			    }

			    importPtr = findImportByName("Integer64",
							 thisModulePtr);
			    if (importPtr) {
				importPtr->use++;
			    } else {
				if (thisModulePtr->export.language ==
					   SMI_LANGUAGE_SPPI) {
				    smiPrintError(thisParserPtr,
						  ERR_SPPI_BASETYPE_NOT_IMPORTED,
						  "Integer64");
				}
			    }
			;}
    break;

  case 250:
#line 4766 "parser-smi.y"
    {
			    Type *parentPtr;
			    Import *importPtr;
			    
                            if (thisParserPtr->modulePtr->export.language != SMI_LANGUAGE_SPPI)
                                smiPrintError(thisParserPtr, ERR_SPPI_CONSTRUCT_IN_MIB, "Integer64");
			    parentPtr = findTypeByName("Integer64");
			    if (! parentPtr) {
				smiPrintError(thisParserPtr, ERR_UNKNOWN_TYPE,
					      "Integer64");
				yyval.typePtr = NULL;
			    } else {
				yyval.typePtr = duplicateType(parentPtr, 0,
						   thisParserPtr);
				setTypeList(yyval.typePtr, yyvsp[0].listPtr);
				smiCheckTypeRanges(thisParserPtr, yyval.typePtr);
			    }

			    importPtr = findImportByName("Integer64",
							 thisModulePtr);
			    if (importPtr) {
				importPtr->use++;
			    } else {
				if (thisModulePtr->export.language ==
					   SMI_LANGUAGE_SPPI) {
				    smiPrintError(thisParserPtr,
						  ERR_SPPI_BASETYPE_NOT_IMPORTED,
						  "Integer64");
				}
			    }
			;}
    break;

  case 251:
#line 4798 "parser-smi.y"
    {
			    Import *importPtr;

                            if (thisParserPtr->modulePtr->export.language != SMI_LANGUAGE_SPPI)
                                smiPrintError(thisParserPtr, ERR_SPPI_CONSTRUCT_IN_MIB, "Unsigned64");
			    yyval.typePtr = findTypeByName("Unsigned64");
			    if (! yyval.typePtr) {
				smiPrintError(thisParserPtr, ERR_UNKNOWN_TYPE,
					      "Unsigned64");
			    }

			    importPtr = findImportByName("Unsigned64",
							 thisModulePtr);
			    if (importPtr) {
				importPtr->use++;
			    } else {
				if (thisModulePtr->export.language ==
					   SMI_LANGUAGE_SPPI) {
				    smiPrintError(thisParserPtr,
						  ERR_SPPI_BASETYPE_NOT_IMPORTED,
						  "Unsigned64");
				}
			    }
			;}
    break;

  case 252:
#line 4823 "parser-smi.y"
    {
			    Type *parentPtr;
			    Import *importPtr;
			    
                            if (thisParserPtr->modulePtr->export.language != SMI_LANGUAGE_SPPI)
                                smiPrintError(thisParserPtr, ERR_SPPI_CONSTRUCT_IN_MIB, "Unsigned64");
			    parentPtr = findTypeByName("Unsigned64");
			    if (! parentPtr) {
				smiPrintError(thisParserPtr, ERR_UNKNOWN_TYPE,
					      "Unsigned64");
				yyval.typePtr = NULL;
			    } else {
				yyval.typePtr = duplicateType(parentPtr, 0,
						   thisParserPtr);
				setTypeList(yyval.typePtr, yyvsp[0].listPtr);
				smiCheckTypeRanges(thisParserPtr, yyval.typePtr);
			    }

			    importPtr = findImportByName("Unsigned64",
							 thisModulePtr);
			    if (importPtr) {
				importPtr->use++;
			    } else {
				if (thisModulePtr->export.language ==
					   SMI_LANGUAGE_SPPI) {
				    smiPrintError(thisParserPtr,
						  ERR_SPPI_BASETYPE_NOT_IMPORTED,
						  "Unsigned64");
				}
			    }
			;}
    break;

  case 253:
#line 4861 "parser-smi.y"
    {
			    Import *importPtr;
			    
			    yyval.typePtr = findTypeByName("IpAddress");
			    if (! yyval.typePtr) {
				smiPrintError(thisParserPtr, ERR_UNKNOWN_TYPE,
					      "IpAddress");
			    }

			    importPtr = findImportByName("IpAddress",
							 thisModulePtr);
			    if (importPtr) {
				importPtr->use++;
			    } else {
				if (thisModulePtr->export.language ==
				    SMI_LANGUAGE_SMIV2) {
				    smiPrintError(thisParserPtr,
						  ERR_SMIV2_BASETYPE_NOT_IMPORTED,
						  "IpAddress");
				} else if (thisModulePtr->export.language ==
					   SMI_LANGUAGE_SPPI) {
				    smiPrintError(thisParserPtr,
						  ERR_SPPI_BASETYPE_NOT_IMPORTED,
						  "IpAddress");
				}
			    }
			;}
    break;

  case 254:
#line 4889 "parser-smi.y"
    {
			    Import *importPtr;
			    
                            if ((thisParserPtr->modulePtr->export.language == SMI_LANGUAGE_SPPI) &&
                                !findImportByName("Counter32", thisParserPtr->modulePtr))
                                smiPrintError(thisParserPtr, ERR_SMI_CONSTRUCT_IN_PIB, "Counter32");
			    yyval.typePtr = findTypeByName("Counter32");
			    if (! yyval.typePtr) {
				smiPrintError(thisParserPtr, ERR_UNKNOWN_TYPE,
					      "Counter32");
			    }

			    importPtr = findImportByName("Counter32",
							 thisModulePtr);
			    if (importPtr) {
				importPtr->use++;
			    } else {
				if (thisModulePtr->export.language ==
				    SMI_LANGUAGE_SMIV2) {
				    smiPrintError(thisParserPtr,
						  ERR_SMIV2_BASETYPE_NOT_IMPORTED,
						  "Counter32");
				}
			    }
			;}
    break;

  case 255:
#line 4915 "parser-smi.y"
    {
			    Import *importPtr;
			    
                            if ((thisParserPtr->modulePtr->export.language == SMI_LANGUAGE_SPPI) &&
                                !findImportByName("Gauge32", thisParserPtr->modulePtr))
                                smiPrintError(thisParserPtr, ERR_SMI_CONSTRUCT_IN_PIB, "Gauge32");
			    yyval.typePtr = findTypeByName("Gauge32");
			    if (! yyval.typePtr) {
				smiPrintError(thisParserPtr, ERR_UNKNOWN_TYPE,
					      "Gauge32");
			    }

			    importPtr = findImportByName("Gauge32",
							 thisModulePtr);
			    if (importPtr) {
				importPtr->use++;
			    } else {
				if (thisModulePtr->export.language ==
				    SMI_LANGUAGE_SMIV2) {
				    smiPrintError(thisParserPtr,
						  ERR_SMIV2_BASETYPE_NOT_IMPORTED,
						  "Gauge32");
				}
			    }
			;}
    break;

  case 256:
#line 4941 "parser-smi.y"
    {
			    Import *importPtr;
			    
			    yyval.typePtr = smiHandle->typeUnsigned32Ptr;

			    importPtr = findImportByName("Unsigned32",
							 thisModulePtr);
			    if (importPtr) {
				importPtr->use++;
			    } else {
				if (thisModulePtr->export.language ==
				    SMI_LANGUAGE_SMIV2) {
				    smiPrintError(thisParserPtr,
						  ERR_SMIV2_BASETYPE_NOT_IMPORTED,
						  "Unsigned32");
				} else if (thisModulePtr->export.language ==
					   SMI_LANGUAGE_SPPI) {
				    smiPrintError(thisParserPtr,
						  ERR_SPPI_BASETYPE_NOT_IMPORTED,
						  "Unsigned32");
				}
			    }
			;}
    break;

  case 257:
#line 4965 "parser-smi.y"
    {
			    Import *importPtr;
			    
			    yyval.typePtr = findTypeByName("TimeTicks");
			    if (! yyval.typePtr) {
				smiPrintError(thisParserPtr, ERR_UNKNOWN_TYPE,
					      "TimeTicks");
			    }

			    importPtr = findImportByName("TimeTicks",
							 thisModulePtr);
			    if (importPtr) {
				importPtr->use++;
			    } else {
				if (thisModulePtr->export.language ==
				    SMI_LANGUAGE_SMIV2) {
				    smiPrintError(thisParserPtr,
						  ERR_SMIV2_BASETYPE_NOT_IMPORTED,
						  "TimeTicks");
				} else if (thisModulePtr->export.language ==
					   SMI_LANGUAGE_SPPI) {
				    smiPrintError(thisParserPtr,
						  ERR_SPPI_BASETYPE_NOT_IMPORTED,
						  "TimeTicks");
				}
			    }
			;}
    break;

  case 258:
#line 4993 "parser-smi.y"
    {
			    Import *importPtr;
			    
			    yyval.typePtr = findTypeByName("Opaque");
			    if (! yyval.typePtr) {
				smiPrintError(thisParserPtr, ERR_UNKNOWN_TYPE,
					      "Opaque");
			    } else {
				if (thisModulePtr->export.language ==
				    SMI_LANGUAGE_SMIV2) {
				    smiPrintError(thisParserPtr,
						  ERR_SMIV2_OPAQUE_OBSOLETE,
						  "Opaque");
				} else if (thisModulePtr->export.language ==
					   SMI_LANGUAGE_SPPI) {
				    smiPrintError(thisParserPtr,
						  ERR_SPPI_OPAQUE_OBSOLETE,
						  "Opaque");
				}
			    }

			    importPtr = findImportByName("Opaque",
							 thisModulePtr);
			    if (importPtr) {
				importPtr->use++;
			    } else {
				if (thisModulePtr->export.language ==
				    SMI_LANGUAGE_SMIV2) {
				    smiPrintError(thisParserPtr,
						  ERR_SMIV2_BASETYPE_NOT_IMPORTED,
						  "Opaque");
				} else if (thisModulePtr->export.language ==
					   SMI_LANGUAGE_SPPI) {
				    smiPrintError(thisParserPtr,
						  ERR_SPPI_BASETYPE_NOT_IMPORTED,
						  "Opaque");
				}
			    }
			;}
    break;

  case 259:
#line 5033 "parser-smi.y"
    {
			    Import *importPtr;

                            if ((thisParserPtr->modulePtr->export.language == SMI_LANGUAGE_SPPI) &&
                                !findImportByName("Counter64", thisModulePtr))
                                smiPrintError(thisParserPtr, ERR_SMI_CONSTRUCT_IN_PIB, "Counter64");
			    yyval.typePtr = findTypeByName("Counter64");
			    if (! yyval.typePtr) {
				smiPrintError(thisParserPtr, ERR_UNKNOWN_TYPE,
					      "Counter64");
			    }

			    importPtr = findImportByName("Counter64",
							 thisModulePtr);
			    if (importPtr) {
				importPtr->use++;
			    } else {
				if (thisModulePtr->export.language ==
				    SMI_LANGUAGE_SMIV2) {
				    smiPrintError(thisParserPtr,
						  ERR_SMIV2_BASETYPE_NOT_IMPORTED,
						  "Counter64");
				}
			    }
			;}
    break;

  case 260:
#line 5059 "parser-smi.y"
    {
			    Import *importPtr;

                            if (thisParserPtr->modulePtr->export.language != SMI_LANGUAGE_SPPI)
                                smiPrintError(thisParserPtr, ERR_SPPI_CONSTRUCT_IN_MIB, "Integer64");
			    yyval.typePtr = findTypeByName("Integer64");
			    if (! yyval.typePtr) {
				smiPrintError(thisParserPtr, ERR_UNKNOWN_TYPE,
					      "Integer64");
			    }

			    importPtr = findImportByName("Integer64",
							 thisModulePtr);
			    if (importPtr) {
				importPtr->use++;
			    } else {
				if (thisModulePtr->export.language ==
					   SMI_LANGUAGE_SPPI) {
				    smiPrintError(thisParserPtr,
						  ERR_SPPI_BASETYPE_NOT_IMPORTED,
						  "Integer64");
				}
			    }
			;}
    break;

  case 261:
#line 5084 "parser-smi.y"
    {
			    Import *importPtr;

                            if (thisParserPtr->modulePtr->export.language != SMI_LANGUAGE_SPPI)
                                smiPrintError(thisParserPtr, ERR_SPPI_CONSTRUCT_IN_MIB, "Unsigned64");
			    yyval.typePtr = findTypeByName("Unsigned64");
			    if (! yyval.typePtr) {
				smiPrintError(thisParserPtr, ERR_UNKNOWN_TYPE,
					      "Unsigned64");
			    }

			    importPtr = findImportByName("Unsigned64",
							 thisModulePtr);
			    if (importPtr) {
				importPtr->use++;
			    } else {
				if (thisModulePtr->export.language ==
					   SMI_LANGUAGE_SPPI) {
				    smiPrintError(thisParserPtr,
						  ERR_SPPI_BASETYPE_NOT_IMPORTED,
						  "Unsigned64");
				}
			    }
			;}
    break;

  case 262:
#line 5111 "parser-smi.y"
    {
			    List *listPtr, *nextListPtr;

			    if (thisModulePtr->export.language == SMI_LANGUAGE_SMIV2)
				smiPrintError(thisParserPtr,
					      ERR_UNEXPECTED_TYPE_RESTRICTION);

			    for (listPtr = yyvsp[0].listPtr; listPtr;
				 listPtr = nextListPtr) {
				nextListPtr = listPtr->nextPtr;
				smiFree((Range *)(listPtr->ptr));
				smiFree(listPtr);
			    }

			    yyval.listPtr = NULL;
			;}
    break;

  case 263:
#line 5128 "parser-smi.y"
    {
			    List *listPtr, *nextListPtr;

			    if (thisModulePtr->export.language == SMI_LANGUAGE_SMIV2)
				smiPrintError(thisParserPtr,
					      ERR_UNEXPECTED_TYPE_RESTRICTION);

			    for (listPtr = yyvsp[0].listPtr; listPtr;
				 listPtr = nextListPtr) {
				nextListPtr = listPtr->nextPtr;
				smiFree((Range *)(listPtr->ptr));
				smiFree(listPtr);
			    }

			    yyval.listPtr = NULL;
			;}
    break;

  case 264:
#line 5145 "parser-smi.y"
    {
			    List *listPtr, *nextListPtr;

			    if (thisModulePtr->export.language == SMI_LANGUAGE_SMIV2)
				smiPrintError(thisParserPtr,
					      ERR_UNEXPECTED_TYPE_RESTRICTION);

			    for (listPtr = yyvsp[0].listPtr; listPtr;
				 listPtr = nextListPtr) {
				nextListPtr = listPtr->nextPtr;
				smiFree(((NamedNumber *)(listPtr->ptr))->export.name);
				smiFree((NamedNumber *)(listPtr->ptr));
				smiFree(listPtr);
			    }

			    yyval.listPtr = NULL;
			;}
    break;

  case 265:
#line 5163 "parser-smi.y"
    {
			    yyval.listPtr = NULL;
			;}
    break;

  case 266:
#line 5177 "parser-smi.y"
    { yyval.listPtr = yyvsp[-1].listPtr; ;}
    break;

  case 267:
#line 5187 "parser-smi.y"
    {
			    yyval.listPtr = yyvsp[-2].listPtr;
			;}
    break;

  case 268:
#line 5193 "parser-smi.y"
    {
			    yyval.listPtr = smiMalloc(sizeof(List));
			    yyval.listPtr->ptr = yyvsp[0].rangePtr;
			    yyval.listPtr->nextPtr = NULL;
			;}
    break;

  case 269:
#line 5199 "parser-smi.y"
    {
			    List *p, *pp;
			    
			    p = smiMalloc(sizeof(List));
			    p->ptr = (void *)yyvsp[0].rangePtr;
			    p->nextPtr = NULL;
			    for (pp = yyvsp[-2].listPtr; pp->nextPtr; pp = pp->nextPtr);
			    pp->nextPtr = p;
			    
			    yyval.listPtr = yyvsp[-2].listPtr;
			;}
    break;

  case 270:
#line 5213 "parser-smi.y"
    {
			    yyval.rangePtr = smiMalloc(sizeof(Range));
			    yyval.rangePtr->export.minValue = *yyvsp[0].valuePtr;
			    yyval.rangePtr->export.maxValue = *yyvsp[0].valuePtr;
			    smiFree(yyvsp[0].valuePtr);
			;}
    break;

  case 271:
#line 5220 "parser-smi.y"
    {
			    yyval.rangePtr = smiMalloc(sizeof(Range));
			    yyval.rangePtr->export.minValue = *yyvsp[-2].valuePtr;
			    yyval.rangePtr->export.maxValue = *yyvsp[0].valuePtr;
			    smiFree(yyvsp[-2].valuePtr);
			    smiFree(yyvsp[0].valuePtr);
			;}
    break;

  case 272:
#line 5230 "parser-smi.y"
    {
			    yyval.valuePtr = smiMalloc(sizeof(SmiValue));
			    yyval.valuePtr->basetype = SMI_BASETYPE_INTEGER32;
			    yyval.valuePtr->value.integer32 = yyvsp[0].integer32;
			;}
    break;

  case 273:
#line 5236 "parser-smi.y"
    {
			    yyval.valuePtr = smiMalloc(sizeof(SmiValue));
			    yyval.valuePtr->basetype = SMI_BASETYPE_UNSIGNED32;
			    yyval.valuePtr->value.unsigned32 = yyvsp[0].unsigned32;
			;}
    break;

  case 274:
#line 5242 "parser-smi.y"
    {
			    yyval.valuePtr = smiMalloc(sizeof(SmiValue));
			    yyval.valuePtr->basetype = SMI_BASETYPE_INTEGER64;
			    yyval.valuePtr->value.integer64 = yyvsp[0].integer64;
			;}
    break;

  case 275:
#line 5248 "parser-smi.y"
    {
			    yyval.valuePtr = smiMalloc(sizeof(SmiValue));
			    yyval.valuePtr->basetype = SMI_BASETYPE_UNSIGNED64;
			    yyval.valuePtr->value.unsigned64 = yyvsp[0].unsigned64;
			;}
    break;

  case 276:
#line 5254 "parser-smi.y"
    {
			    char s[3];
			    int i, len;
			    
			    yyval.valuePtr = smiMalloc(sizeof(SmiValue));
			    if (defaultBasetype == SMI_BASETYPE_OCTETSTRING) {
				yyval.valuePtr->basetype = SMI_BASETYPE_OCTETSTRING;
				len = strlen(yyvsp[0].text);
				yyval.valuePtr->value.ptr = smiMalloc((len+1)/2+1);
				for (i = 0; i < len; i += 2) {
				    strncpy(s, &yyvsp[0].text[i], 2);
				    if (!s[1]) s[1] = '0';
				    s[2] = 0;
				    yyval.valuePtr->value.ptr[i/2] =
					(unsigned char)strtol(s, 0, 16);
				}
				yyval.valuePtr->len = (len+1)/2;
			    } else {
				yyval.valuePtr->basetype = SMI_BASETYPE_UNSIGNED32;
				yyval.valuePtr->value.unsigned32 = strtoul(yyvsp[0].text, NULL, 16);
			    }
			;}
    break;

  case 277:
#line 5277 "parser-smi.y"
    {
			    char s[9];
			    int i, len, j;
			    
			    yyval.valuePtr = smiMalloc(sizeof(SmiValue));
			    if (defaultBasetype == SMI_BASETYPE_OCTETSTRING) {
				yyval.valuePtr->basetype = SMI_BASETYPE_OCTETSTRING;
				len = strlen(yyvsp[0].text);
				yyval.valuePtr->value.ptr = smiMalloc((len+7)/8+1);
				for (i = 0; i < len; i += 8) {
				    strncpy(s, &yyvsp[0].text[i], 8);
				    for (j = 1; j < 8; j++) {
					if (!s[j]) s[j] = '0';
				    }
				    s[8] = 0;
				    yyval.valuePtr->value.ptr[i/8] =
					(unsigned char)strtol(s, 0, 2);
				}
				yyval.valuePtr->len = (len+7)/8;
			    } else {
				yyval.valuePtr->basetype = SMI_BASETYPE_UNSIGNED32;
				yyval.valuePtr->value.unsigned32 = strtoul(yyvsp[0].text, NULL, 2);
			    }
			;}
    break;

  case 278:
#line 5304 "parser-smi.y"
    {
			    yyval.listPtr = yyvsp[-1].listPtr;
			;}
    break;

  case 279:
#line 5310 "parser-smi.y"
    {
			    yyval.listPtr = smiMalloc(sizeof(List));
			    yyval.listPtr->ptr = yyvsp[0].namedNumberPtr;
			    yyval.listPtr->nextPtr = NULL;
			;}
    break;

  case 280:
#line 5316 "parser-smi.y"
    {
			    List *p, *pp;
			    
			    p = smiMalloc(sizeof(List));
			    p->ptr = (void *)yyvsp[0].namedNumberPtr;
			    p->nextPtr = NULL;
			    for (pp = yyvsp[-2].listPtr; pp->nextPtr; pp = pp->nextPtr);
			    pp->nextPtr = p;
			    yyval.listPtr = yyvsp[-2].listPtr;
			;}
    break;

  case 281:
#line 5329 "parser-smi.y"
    {
			    checkNameLen(thisParserPtr, yyvsp[0].id,
					 ERR_ENUMNAME_32, ERR_ENUMNAME_64);
			    if (thisModulePtr->export.language == SMI_LANGUAGE_SMIV2)
			    {
				if (strchr(yyvsp[0].id, '-')) {
				    smiPrintError(thisParserPtr,
					  ERR_NAMEDNUMBER_INCLUDES_HYPHEN,
						  yyvsp[0].id);
				}
			    }
			;}
    break;

  case 282:
#line 5342 "parser-smi.y"
    {
			    yyval.namedNumberPtr = smiMalloc(sizeof(NamedNumber));
			    yyval.namedNumberPtr->export.name = yyvsp[-4].id;
			    yyval.namedNumberPtr->export.value = *yyvsp[-1].valuePtr;
			    smiFree(yyvsp[-1].valuePtr);
			;}
    break;

  case 283:
#line 5351 "parser-smi.y"
    {
			    if (yyvsp[0].unsigned32 > MAX_INTEGER32) {
				smiPrintError(thisParserPtr,
					      ERR_INTEGER32_TOO_LARGE, yyvsp[0].unsigned32);
			    }
			    if ((thisModulePtr->export.language == SMI_LANGUAGE_SMIV1) &&
				(yyvsp[0].unsigned32 == 0)) {
				smiPrintError(thisParserPtr,
					      ERR_ENUM_ZERO);
			    }
			    yyval.valuePtr = smiMalloc(sizeof(SmiValue));
			    yyval.valuePtr->basetype = SMI_BASETYPE_INTEGER32;
			    yyval.valuePtr->value.integer32 = yyvsp[0].unsigned32;
			;}
    break;

  case 284:
#line 5366 "parser-smi.y"
    {
			    yyval.valuePtr = smiMalloc(sizeof(SmiValue));
			    yyval.valuePtr->basetype = SMI_BASETYPE_INTEGER32;
			    yyval.valuePtr->value.integer32 = yyvsp[0].integer32;
			    /* TODO: non-negative is suggested */
			;}
    break;

  case 285:
#line 5375 "parser-smi.y"
    {
			    if (thisModulePtr->export.language == SMI_LANGUAGE_SMIV2)
			    {
			        if (!strcmp(yyvsp[0].id, "current")) {
				    yyval.status = SMI_STATUS_CURRENT;
			        } else if (!strcmp(yyvsp[0].id, "deprecated")) {
				    yyval.status = SMI_STATUS_DEPRECATED;
			        } else if (!strcmp(yyvsp[0].id, "obsolete")) {
				    yyval.status = SMI_STATUS_OBSOLETE;
			        } else {
				    smiPrintError(thisParserPtr,
					          ERR_INVALID_SMIV2_STATUS,
					          yyvsp[0].id);
				    if (!strcmp(yyvsp[0].id, "mandatory")
				        || !strcmp(yyvsp[0].id, "optional")) {
				        /* best guess */
				        yyval.status = SMI_STATUS_CURRENT;
				    } else {
				        yyval.status = SMI_STATUS_UNKNOWN;
				    }
			        }
			    } else if (thisModulePtr->export.language != SMI_LANGUAGE_SPPI) {
			        if (!strcmp(yyvsp[0].id, "mandatory")) {
				    yyval.status = SMI_STATUS_MANDATORY;
			        } else if (!strcmp(yyvsp[0].id, "optional")) {
				    yyval.status = SMI_STATUS_OPTIONAL;
			        } else if (!strcmp(yyvsp[0].id, "obsolete")) {
				    yyval.status = SMI_STATUS_OBSOLETE;
			        } else if (!strcmp(yyvsp[0].id, "deprecated")) {
				    yyval.status = SMI_STATUS_OBSOLETE;
			        } else {
				    smiPrintError(thisParserPtr,
					          ERR_INVALID_SMIV1_STATUS,
					          yyvsp[0].id);
				    if (!strcmp(yyvsp[0].id, "current")) {
				        /* best guess */
				        yyval.status = SMI_STATUS_MANDATORY; 
				    } else {
				        yyval.status = SMI_STATUS_UNKNOWN;
				    }
			        }
			    } else { /* it is SPPI */
			        if (!strcmp(yyvsp[0].id, "current")) {
				    yyval.status = SMI_STATUS_CURRENT;
			        } else if (!strcmp(yyvsp[0].id, "obsolete")) {
				    yyval.status = SMI_STATUS_OBSOLETE;
			        } else if (!strcmp(yyvsp[0].id, "deprecated")) {
				    yyval.status = SMI_STATUS_OBSOLETE;
                                } else {
                                    smiPrintError(thisParserPtr,
                                                  ERR_INVALID_SPPI_STATUS, yyvsp[0].id);
                                    yyval.status = SMI_STATUS_UNKNOWN;
                                }
                            }
			    smiFree(yyvsp[0].id);
			;}
    break;

  case 286:
#line 5434 "parser-smi.y"
    {
			    if (!strcmp(yyvsp[0].id, "current")) {
				yyval.status = SMI_STATUS_CURRENT;
			    } else if (!strcmp(yyvsp[0].id, "obsolete")) {
				yyval.status = SMI_STATUS_OBSOLETE;
			    } else {
				smiPrintError(thisParserPtr,
					      ERR_INVALID_CAPABILITIES_STATUS,
					      yyvsp[0].id);
				yyval.status = SMI_STATUS_UNKNOWN;
			    }
			    smiFree(yyvsp[0].id);
			;}
    break;

  case 287:
#line 5450 "parser-smi.y"
    {
			    yyval.text = yyvsp[0].text;
			    
			    if (yyvsp[0].text && !strlen(yyvsp[0].text)) {
				smiPrintError(thisParserPtr,
					      ERR_EMPTY_FORMAT);
			    }
			;}
    break;

  case 288:
#line 5459 "parser-smi.y"
    {
			    yyval.text = NULL;
			;}
    break;

  case 289:
#line 5465 "parser-smi.y"
    {
			    yyval.text = yyvsp[0].text;
			    
			    if (yyvsp[0].text && !strlen(yyvsp[0].text)) {
				smiPrintError(thisParserPtr,
					      ERR_EMPTY_UNITS);
			    }
			;}
    break;

  case 290:
#line 5474 "parser-smi.y"
    {
			    yyval.text = NULL;
			;}
    break;

  case 291:
#line 5480 "parser-smi.y"
    {
			    if (thisModulePtr->export.language == SMI_LANGUAGE_SMIV2)
			    {
				if (!strcmp(yyvsp[0].id, "not-accessible")) {
				    yyval.access = SMI_ACCESS_NOT_ACCESSIBLE;
				} else if (!strcmp(yyvsp[0].id,
						   "accessible-for-notify")) {
				    yyval.access = SMI_ACCESS_NOTIFY;
				} else if (!strcmp(yyvsp[0].id, "read-only")) {
				    yyval.access = SMI_ACCESS_READ_ONLY;
				} else if (!strcmp(yyvsp[0].id, "read-write")) {
				    yyval.access = SMI_ACCESS_READ_WRITE;
				} else if (!strcmp(yyvsp[0].id, "read-create")) {
				    yyval.access = SMI_ACCESS_READ_WRITE;
				    thisParserPtr->flags |= FLAG_CREATABLE;
				    /* TODO:remember it's really read-create */
				} else if (!strcmp(yyvsp[0].id, "write-only")) {
				    smiPrintError(thisParserPtr,
						  ERR_SMIV2_WRITE_ONLY);
				    yyval.access = SMI_ACCESS_READ_WRITE;
				} else {
				    smiPrintError(thisParserPtr,
						  ERR_INVALID_SMIV2_ACCESS,
						  yyvsp[0].id);
				    yyval.access = SMI_ACCESS_UNKNOWN;
				}
			    } else if (thisModulePtr->export.language != SMI_LANGUAGE_SPPI) {
				if (!strcmp(yyvsp[0].id, "not-accessible")) {
				    yyval.access = SMI_ACCESS_NOT_ACCESSIBLE;
				} else if (!strcmp(yyvsp[0].id, "read-only")) {
				    yyval.access = SMI_ACCESS_READ_ONLY;
				} else if (!strcmp(yyvsp[0].id, "read-write")) {
				    yyval.access = SMI_ACCESS_READ_WRITE;
				} else if (!strcmp(yyvsp[0].id, "write-only")) {
				    smiPrintError(thisParserPtr,
						  ERR_SMIV1_WRITE_ONLY);
				    yyval.access = SMI_ACCESS_READ_WRITE;
				} else {
				    smiPrintError(thisParserPtr,
						  ERR_INVALID_SMIV1_ACCESS,
						  yyvsp[0].id);
				    yyval.access = SMI_ACCESS_UNKNOWN;
				}
			    } else {
			        if (!strcmp(yyvsp[0].id, "install")) {
				    yyval.access = SMI_ACCESS_INSTALL;
			        } else if (!strcmp(yyvsp[0].id, "install-notify")) {
				    yyval.access = SMI_ACCESS_INSTALL_NOTIFY;
			        } else if (!strcmp(yyvsp[0].id, "notify")) {
				    yyval.access = SMI_ACCESS_NOTIFY;
			        } else if (!strcmp(yyvsp[0].id, "report-only")) {
				    yyval.access = SMI_ACCESS_REPORT_ONLY;
			        } else if (!strcmp(yyvsp[0].id, "not-accessible")) {
				    yyval.access = SMI_ACCESS_NOT_ACCESSIBLE;
                                } else {
				    smiPrintError(thisParserPtr,
					          ERR_INVALID_SPPI_ACCESS,
					          yyvsp[0].id);
				    yyval.access = SMI_ACCESS_UNKNOWN;
			        }
                            }
			    smiFree(yyvsp[0].id);
			;}
    break;

  case 292:
#line 5546 "parser-smi.y"
    {
                            if (thisParserPtr->modulePtr->export.language != SMI_LANGUAGE_SPPI)
                                smiPrintError(thisParserPtr, ERR_SPPI_CONSTRUCT_IN_MIB, "PIB-INDEX");
                        ;}
    break;

  case 293:
#line 5551 "parser-smi.y"
    {
                            List *p = smiMalloc(sizeof(List));
                            
                            p->ptr       = yyvsp[-1].objectPtr;
                            p->nextPtr   = NULL;
                            
			    yyval.index.indexkind = SMI_INDEX_INDEX;
			    yyval.index.implied   = impliedFlag;
			    yyval.index.listPtr   = p;
			    yyval.index.rowPtr    = NULL;
                            indexFlag    = INDEXFLAG_PIBINDEX;
			;}
    break;

  case 294:
#line 5566 "parser-smi.y"
    {
			    yyval.index.indexkind    = SMI_INDEX_AUGMENT;
			    yyval.index.implied      = 0;
			    yyval.index.listPtr      = NULL;
			    yyval.index.rowPtr       = yyvsp[-1].objectPtr;
                            indexFlag       = INDEXFLAG_AUGMENTS;
			;}
    break;

  case 295:
#line 5574 "parser-smi.y"
    {
                            if (thisParserPtr->modulePtr->export.language != SMI_LANGUAGE_SPPI)
                                smiPrintError(thisParserPtr, ERR_SPPI_CONSTRUCT_IN_MIB, "EXTENDS");
                        ;}
    break;

  case 296:
#line 5579 "parser-smi.y"
    {
			    yyval.index.indexkind    = SMI_INDEX_SPARSE;
			    yyval.index.implied      = 0;
			    yyval.index.listPtr      = NULL;
			    yyval.index.rowPtr       = yyvsp[-1].objectPtr;
                            indexFlag       = INDEXFLAG_EXTENDS;
			;}
    break;

  case 297:
#line 5587 "parser-smi.y"
    {
			    yyval.index.indexkind = SMI_INDEX_UNKNOWN;
			;}
    break;

  case 298:
#line 5593 "parser-smi.y"
    {
                            /* 
                             * To avoid ambiguity caused by merging
                             * the SMI and SPPI parser we use a flag.
                             */
                            if (thisParserPtr->modulePtr->export.language != SMI_LANGUAGE_SPPI) {
                                /*
                                 * Only INDEX or AUGMENTS are allowed for SMI
                                 */
                                if (indexFlag != INDEXFLAG_NONE)
                                    smiPrintError(thisParserPtr, ERR_INDEX_AND_AUGMENTS_USED);
                            } else {
                                /*
                                 * INDEX may only be used if PIB_INDEX was used
                                 */
                                if (indexFlag != INDEXFLAG_PIBINDEX)
                                    smiPrintError(thisParserPtr, ERR_INDEX_WITHOUT_PIB_INDEX);
                            }
                            
			    /*
			     * Use a global variable to fetch and remember
			     * whether we have seen an IMPLIED keyword.
			     */
			    impliedFlag = 0;
			;}
    break;

  case 299:
#line 5619 "parser-smi.y"
    {
			    yyval.index.indexkind = SMI_INDEX_INDEX;
			    yyval.index.implied   = impliedFlag;
			    yyval.index.listPtr   = yyvsp[-1].listPtr;
			    yyval.index.rowPtr    = NULL;
                        ;}
    break;

  case 300:
#line 5626 "parser-smi.y"
    {
			    yyval.index.indexkind = SMI_INDEX_UNKNOWN;
			;}
    break;

  case 301:
#line 5632 "parser-smi.y"
    {
			    yyval.listPtr = smiMalloc(sizeof(List));
			    yyval.listPtr->ptr = yyvsp[0].objectPtr;
			    yyval.listPtr->nextPtr = NULL;
			;}
    break;

  case 302:
#line 5639 "parser-smi.y"
    {
			    List *p, *pp;
			    
			    p = smiMalloc(sizeof(List));
			    p->ptr = yyvsp[0].objectPtr;
			    p->nextPtr = NULL;
			    for (pp = yyvsp[-2].listPtr; pp->nextPtr; pp = pp->nextPtr);
			    pp->nextPtr = p;
			    yyval.listPtr = yyvsp[-2].listPtr;
			;}
    break;

  case 303:
#line 5652 "parser-smi.y"
    {
			    impliedFlag = 1;
			    yyval.objectPtr = yyvsp[0].objectPtr;
			;}
    break;

  case 304:
#line 5657 "parser-smi.y"
    {
			    yyval.objectPtr = yyvsp[0].objectPtr;
			;}
    break;

  case 305:
#line 5667 "parser-smi.y"
    {
			    yyval.objectPtr = yyvsp[0].objectPtr;
			;}
    break;

  case 306:
#line 5673 "parser-smi.y"
    {
			    yyval.objectPtr = yyvsp[0].objectPtr;
			;}
    break;

  case 307:
#line 5679 "parser-smi.y"
    { yyval.valuePtr = yyvsp[-1].valuePtr; ;}
    break;

  case 308:
#line 5681 "parser-smi.y"
    { yyval.valuePtr = NULL; ;}
    break;

  case 309:
#line 5686 "parser-smi.y"
    { yyval.valuePtr = yyvsp[0].valuePtr; ;}
    break;

  case 310:
#line 5688 "parser-smi.y"
    {
			    yyval.valuePtr = smiMalloc(sizeof(SmiValue));
			    yyval.valuePtr->basetype = SMI_BASETYPE_BITS;
			    yyval.valuePtr->value.ptr = (void *)yyvsp[-1].listPtr;
			;}
    break;

  case 311:
#line 5696 "parser-smi.y"
    { yyval.listPtr = yyvsp[0].listPtr; ;}
    break;

  case 312:
#line 5698 "parser-smi.y"
    { yyval.listPtr = NULL; ;}
    break;

  case 313:
#line 5702 "parser-smi.y"
    {
			    yyval.listPtr = smiMalloc(sizeof(List));
			    yyval.listPtr->ptr = yyvsp[0].id;
			    yyval.listPtr->nextPtr = NULL;
			;}
    break;

  case 314:
#line 5708 "parser-smi.y"
    {
			    List *p, *pp;
			    
			    p = smiMalloc(sizeof(List));
			    p->ptr = yyvsp[0].id;
			    p->nextPtr = NULL;
			    for (pp = yyvsp[-2].listPtr; pp->nextPtr; pp = pp->nextPtr);
			    pp->nextPtr = p;
			    yyval.listPtr = yyvsp[-2].listPtr;
			;}
    break;

  case 315:
#line 5721 "parser-smi.y"
    {
			    yyval.objectPtr = yyvsp[0].objectPtr;
			;}
    break;

  case 316:
#line 5727 "parser-smi.y"
    {
			    yyval.objectPtr = yyvsp[0].objectPtr;
			;}
    break;

  case 317:
#line 5733 "parser-smi.y"
    {
			    yyval.text = yyvsp[0].text;

			    if (yyvsp[0].text && !strlen(yyvsp[0].text)) {
				smiPrintError(thisParserPtr,
					      ERR_EMPTY_REFERENCE);
			    }
			;}
    break;

  case 318:
#line 5742 "parser-smi.y"
    { yyval.text = NULL; ;}
    break;

  case 319:
#line 5746 "parser-smi.y"
    { yyval.err = 0; ;}
    break;

  case 320:
#line 5748 "parser-smi.y"
    {
			    if (!thisModulePtr->firstRevisionPtr) {
				addRevision(thisModulePtr->lastUpdated,
					    smiStrdup(
	           "[Revision added by libsmi due to a LAST-UPDATED clause.]"),
					    thisParserPtr);
			    }
			    yyval.err = 0;
			;}
    break;

  case 321:
#line 5760 "parser-smi.y"
    { yyval.err = 0; ;}
    break;

  case 322:
#line 5762 "parser-smi.y"
    { yyval.err = 0; ;}
    break;

  case 323:
#line 5766 "parser-smi.y"
    {
			    firstRevisionLine = thisParserPtr->line;
			;}
    break;

  case 324:
#line 5770 "parser-smi.y"
    {
			    Revision *revisionPtr;

			    /*
			     * If the first REVISION (which is the newest)
			     * has another date than the LAST-UPDATED clause,
			     * we add an implicit Revision structure.
			     */
			    if ((!thisModulePtr->firstRevisionPtr) &&
				(yyvsp[-3].date != thisModulePtr->lastUpdated)) {
				addRevision(thisModulePtr->lastUpdated,
					    smiStrdup(
	           "[Revision added by libsmi due to a LAST-UPDATED clause.]"),
					    thisParserPtr);
			    }

			    if (yyvsp[0].text && !strlen(yyvsp[0].text)) {
				smiPrintError(thisParserPtr,
					      ERR_EMPTY_DESCRIPTION);
			    }

			    revisionPtr = addRevision(yyvsp[-3].date, yyvsp[0].text, thisParserPtr);
			    if (revisionPtr) {
				setRevisionLine(revisionPtr,
						firstRevisionLine,
						thisParserPtr);
			    }
			    yyval.err = revisionPtr ? 0 : -1;
			;}
    break;

  case 325:
#line 5802 "parser-smi.y"
    {
			    yyval.listPtr = yyvsp[-1].listPtr;
			;}
    break;

  case 326:
#line 5806 "parser-smi.y"
    {
                            /* must be present for PIBs */
                            if (thisParserPtr->modulePtr->export.language == SMI_LANGUAGE_SPPI)
                                smiPrintError(thisParserPtr, ERR_OBJECTS_MISSING_IN_OBJECT_GROUP);
			    yyval.listPtr = NULL;
			;}
    break;

  case 327:
#line 5815 "parser-smi.y"
    {
			    yyval.listPtr = smiMalloc(sizeof(List));
			    yyval.listPtr->ptr = yyvsp[0].objectPtr;
			    yyval.listPtr->nextPtr = NULL;
			;}
    break;

  case 328:
#line 5821 "parser-smi.y"
    {
			    List *p, *pp;
			    
			    p = smiMalloc(sizeof(List));
			    p->ptr = yyvsp[0].objectPtr;
			    p->nextPtr = NULL;
			    for (pp = yyvsp[-2].listPtr; pp->nextPtr; pp = pp->nextPtr);
			    pp->nextPtr = p;
			    yyval.listPtr = yyvsp[-2].listPtr;
			;}
    break;

  case 329:
#line 5834 "parser-smi.y"
    {
			    yyval.objectPtr = yyvsp[0].objectPtr;
			    if ((currentDecl == SMI_DECL_OBJECTGROUP) &&
				yyval.objectPtr->modulePtr != thisParserPtr->modulePtr) {
                                smiPrintError(thisParserPtr,
					      ERR_COMPLIANCE_MEMBER_NOT_LOCAL,
					      yyval.objectPtr->export.name);
			    }
			;}
    break;

  case 330:
#line 5846 "parser-smi.y"
    {
			    yyval.listPtr = yyvsp[-1].listPtr;
			;}
    break;

  case 331:
#line 5852 "parser-smi.y"
    {
			    yyval.listPtr = smiMalloc(sizeof(List));
			    yyval.listPtr->ptr = yyvsp[0].objectPtr;
			    yyval.listPtr->nextPtr = NULL;
			;}
    break;

  case 332:
#line 5858 "parser-smi.y"
    {
			    List *p, *pp;
			    
			    p = smiMalloc(sizeof(List));
			    p->ptr = yyvsp[0].objectPtr;
			    p->nextPtr = NULL;
			    for (pp = yyvsp[-2].listPtr; pp->nextPtr; pp = pp->nextPtr);
			    pp->nextPtr = p;
			    yyval.listPtr = yyvsp[-2].listPtr;
			;}
    break;

  case 333:
#line 5871 "parser-smi.y"
    {
			    yyval.objectPtr = yyvsp[0].objectPtr;
			    if (yyval.objectPtr->modulePtr != thisParserPtr->modulePtr) {
                                smiPrintError(thisParserPtr,
					      ERR_COMPLIANCE_MEMBER_NOT_LOCAL,
					      yyval.objectPtr->export.name);
			    }
			;}
    break;

  case 334:
#line 5882 "parser-smi.y"
    {
			    yyval.text = smiStrdup(yyvsp[0].text);
			;}
    break;

  case 335:
#line 5888 "parser-smi.y"
    {
			    yyval.date = checkDate(thisParserPtr, yyvsp[0].text);
			;}
    break;

  case 336:
#line 5893 "parser-smi.y"
    {
			    parentNodePtr = smiHandle->rootNodePtr;
			;}
    break;

  case 337:
#line 5897 "parser-smi.y"
    {
			    yyval.objectPtr = yyvsp[0].objectPtr;
			    if (yyval.objectPtr) {
				parentNodePtr = yyvsp[0].objectPtr->nodePtr;
			    } else {
				parentNodePtr = NULL;
			    }
			;}
    break;

  case 338:
#line 5909 "parser-smi.y"
    {
			    yyval.objectPtr = yyvsp[0].objectPtr;
			;}
    break;

  case 339:
#line 5914 "parser-smi.y"
    {
			    yyval.objectPtr = yyvsp[0].objectPtr;
			;}
    break;

  case 340:
#line 5922 "parser-smi.y"
    {
			    Object *objectPtr;
			    Import *importPtr;
			    
			    if (parentNodePtr != smiHandle->rootNodePtr) {
				smiPrintError(thisParserPtr,
					      ERR_OIDLABEL_NOT_FIRST, yyvsp[0].id);
			    }
			    objectPtr = findObjectByModuleAndName(
				thisParserPtr->modulePtr, yyvsp[0].id);
			    if (objectPtr) {
				yyval.objectPtr = objectPtr;
				smiFree(yyvsp[0].id);
			    } else {
				importPtr = findImportByName(yyvsp[0].id,
							     thisModulePtr);
				if (!importPtr ||
				    (importPtr->kind == KIND_NOTFOUND)) {
				    /*
				     * If we are in a MODULE-COMPLIANCE
				     * statement with a given MODULE...
				     */
				    if (complianceModulePtr) {
					objectPtr =
					    findObjectByModuleAndName(
						complianceModulePtr, yyvsp[0].id);
					if (objectPtr) {
					    importPtr = addImport(
						yyvsp[0].id,
						thisParserPtr);
					    setImportModulename(importPtr,
								complianceModulePtr->export.name);
					    addImportFlags(importPtr,
							   FLAG_INCOMPLIANCE);
					    importPtr->use++;
					} else {
					    objectPtr = addObject(yyvsp[0].id,
								  smiHandle->pendingNodePtr, 0,
								  FLAG_INCOMPLETE,
								  thisParserPtr);
					    smiPrintError(thisParserPtr,
							  ERR_IDENTIFIER_NOT_IN_MODULE, yyvsp[0].id,
							  complianceModulePtr->export.name);
					}
				    } else if (capabilitiesModulePtr) {
					objectPtr =
					    findObjectByModuleAndName(
						capabilitiesModulePtr, yyvsp[0].id);
					if (objectPtr) {
					    importPtr = addImport(
						yyvsp[0].id,
						thisParserPtr);
					    setImportModulename(importPtr,
								capabilitiesModulePtr->
								export.name);
					    addImportFlags(importPtr,
							   FLAG_INCOMPLIANCE);
					    importPtr->use++;
					} else {
					    objectPtr = addObject(yyvsp[0].id,
								  smiHandle->pendingNodePtr, 0,
								  FLAG_INCOMPLETE,
								  thisParserPtr);
					    smiPrintError(thisParserPtr,
							  ERR_IDENTIFIER_NOT_IN_MODULE, yyvsp[0].id,
							  capabilitiesModulePtr->export.name);
					}
				    } else {
					/* 
					 * forward referenced node.
					 * create it,
					 * marked with FLAG_INCOMPLETE.
					 */
					objectPtr = addObject(yyvsp[0].id,
							      smiHandle->pendingNodePtr,
							      0,
							      FLAG_INCOMPLETE,
							      thisParserPtr);
				    }
				    yyval.objectPtr = objectPtr;
				} else {
				    /*
				     * imported object.
				     */
				    importPtr->use++;
				    yyval.objectPtr = findObjectByModulenameAndName(
					importPtr->export.module, yyvsp[0].id);
				    smiFree(yyvsp[0].id);
				}
			    }
			    if (yyval.objectPtr)
				parentNodePtr = yyval.objectPtr->nodePtr;
			;}
    break;

  case 341:
#line 6016 "parser-smi.y"
    {
			    Object *objectPtr;
			    Import *importPtr;
			    char *md;
			    
			    if (parentNodePtr != smiHandle->rootNodePtr) {
				md = smiMalloc(sizeof(char) *
					       (strlen(yyvsp[-2].id) + strlen(yyvsp[0].id) + 2));
				sprintf(md, "%s.%s", yyvsp[-2].id, yyvsp[0].id);
				smiPrintError(thisParserPtr,
					      ERR_OIDLABEL_NOT_FIRST, md);
				smiFree(md);
			    } else {
				objectPtr = findObjectByModulenameAndName(
				    yyvsp[-2].id, yyvsp[0].id);
				if (objectPtr) {
				    yyval.objectPtr = objectPtr;
				    smiFree(yyvsp[-2].id);
				    smiFree(yyvsp[0].id);
				} else {
				    importPtr = findImportByModulenameAndName(
					yyvsp[-2].id, yyvsp[0].id, thisModulePtr);
				    if (!importPtr ||
					(importPtr->kind == KIND_NOTFOUND)) {
					/* TODO: check: $1 == thisModule ? */
					/*
					 * If we are in a MODULE-COMPLIANCE
					 * statement with a given MODULE...
					 */
					if (complianceModulePtr) {
					    objectPtr =
						findObjectByModuleAndName(
						    complianceModulePtr, yyvsp[-2].id);
					    if (objectPtr) {
						importPtr = addImport(
						    yyvsp[-2].id,
						    thisParserPtr);
						setImportModulename(importPtr,
						    complianceModulePtr->export.name);
						addImportFlags(importPtr,
							       FLAG_INCOMPLIANCE);
						importPtr->use++;
					    } else {
						objectPtr = addObject(yyvsp[-2].id,
						    smiHandle->pendingNodePtr, 0,
						    FLAG_INCOMPLETE,
						    thisParserPtr);
						smiPrintError(thisParserPtr,
					      ERR_IDENTIFIER_NOT_IN_MODULE, yyvsp[-2].id,
					     complianceModulePtr->export.name);
					    }
					} else if (capabilitiesModulePtr) {
					    objectPtr =
						findObjectByModuleAndName(
						    capabilitiesModulePtr, yyvsp[-2].id);
					    if (objectPtr) {
						importPtr = addImport(
						    yyvsp[-2].id,
						    thisParserPtr);
						setImportModulename(importPtr,
						        capabilitiesModulePtr->
								  export.name);
						addImportFlags(importPtr,
							       FLAG_INCOMPLIANCE);
						importPtr->use++;
					    } else {
						objectPtr = addObject(yyvsp[-2].id,
						    smiHandle->pendingNodePtr, 0,
						    FLAG_INCOMPLETE,
						    thisParserPtr);
						smiPrintError(thisParserPtr,
					      ERR_IDENTIFIER_NOT_IN_MODULE, yyvsp[-2].id,
					   capabilitiesModulePtr->export.name);
					    }
					} else {
					    /* 
					     * forward referenced node.
					     * create it,
					     * marked with FLAG_INCOMPLETE.
					     */
					    objectPtr = addObject(yyvsp[0].id,
							    smiHandle->pendingNodePtr,
							      0,
							      FLAG_INCOMPLETE,
							      thisParserPtr);
					    smiFree(yyvsp[-2].id);
					}
					yyval.objectPtr = objectPtr;
				    } else {
					/*
					 * imported object.
					 */
					importPtr->use++;
					yyval.objectPtr = findObjectByModulenameAndName(
					    importPtr->export.module, yyvsp[0].id);
					smiFree(yyvsp[-2].id);
					smiFree(yyvsp[0].id);
				    }
				}
				if (yyval.objectPtr)
				    parentNodePtr = yyval.objectPtr->nodePtr;
			    }
			;}
    break;

  case 342:
#line 6120 "parser-smi.y"
    {
			    Node *nodePtr;
			    Object *objectPtr;

			    nodePtr = findNodeByParentAndSubid(parentNodePtr,
							       yyvsp[0].unsigned32);
			    if (nodePtr && nodePtr->lastObjectPtr &&
	       		(nodePtr->lastObjectPtr->modulePtr == thisModulePtr)) {
				/*
				 * hopefully, the last defined Object for
				 * this Node is the one we expect.
				 */
				yyval.objectPtr = nodePtr->lastObjectPtr;
			    } else {
				objectPtr = addObject(NULL,
						      parentNodePtr,
						      yyvsp[0].unsigned32,
						      FLAG_INCOMPLETE,
						      thisParserPtr);
				yyval.objectPtr = objectPtr;
			    }
			    parentNodePtr = yyval.objectPtr->nodePtr;
			;}
    break;

  case 343:
#line 6144 "parser-smi.y"
    {
			    Object *objectPtr;
			    
			    /* TODO: search in local module and
			     *       in imported modules
			     */
			    objectPtr = findObjectByModuleAndName(
				thisParserPtr->modulePtr, yyvsp[-3].id);
			    if (objectPtr) {
				smiPrintError(thisParserPtr,
					      ERR_EXISTENT_OBJECT, yyvsp[-3].id);
				yyval.objectPtr = objectPtr;
				if (yyval.objectPtr->nodePtr->subid != yyvsp[-1].unsigned32) {
				    smiPrintError(thisParserPtr,
					  ERR_SUBIDENTIFIER_VS_OIDLABEL,
						  yyvsp[-1].unsigned32, yyvsp[-3].id);
				}
				smiFree(yyvsp[-3].id);
			    } else {
				objectPtr = addObject(yyvsp[-3].id, parentNodePtr,
						      yyvsp[-1].unsigned32, 0,
						      thisParserPtr);
				setObjectDecl(objectPtr,
					      SMI_DECL_VALUEASSIGNMENT);
				yyval.objectPtr = objectPtr;
			    }
			    if (yyval.objectPtr) 
				parentNodePtr = yyval.objectPtr->nodePtr;
			;}
    break;

  case 344:
#line 6174 "parser-smi.y"
    {
			    Object *objectPtr;
			    char *md;

			    md = smiMalloc(sizeof(char) *
					   (strlen(yyvsp[-5].id) + strlen(yyvsp[-3].id) + 2));
			    sprintf(md, "%s.%s", yyvsp[-5].id, yyvsp[-3].id);
			    objectPtr = findObjectByModulenameAndName(yyvsp[-5].id, yyvsp[-3].id);
			    if (objectPtr) {
				smiPrintError(thisParserPtr,
					      ERR_EXISTENT_OBJECT, yyvsp[-5].id);
				yyval.objectPtr = objectPtr;
				if (yyval.objectPtr->nodePtr->subid != yyvsp[-1].unsigned32) {
				    smiPrintError(thisParserPtr,
					  ERR_SUBIDENTIFIER_VS_OIDLABEL,
						  yyvsp[-1].unsigned32, md);
				}
				smiFree(yyvsp[-5].id);
				smiFree(yyvsp[-3].id);
			    } else {
				smiPrintError(thisParserPtr,
					      ERR_ILLEGALLY_QUALIFIED, md);
				objectPtr = addObject(yyvsp[-3].id, parentNodePtr,
						   yyvsp[-1].unsigned32, 0,
						   thisParserPtr);
				yyval.objectPtr = objectPtr;
				smiFree(yyvsp[-5].id);
			    }
			    smiFree(md);
			    if (yyval.objectPtr)
				parentNodePtr = yyval.objectPtr->nodePtr;
			;}
    break;

  case 345:
#line 6209 "parser-smi.y"
    { yyval.text = NULL; ;}
    break;

  case 346:
#line 6213 "parser-smi.y"
    { yyval.err = 0; ;}
    break;

  case 347:
#line 6215 "parser-smi.y"
    { yyval.err = 0; ;}
    break;

  case 348:
#line 6219 "parser-smi.y"
    { yyval.err = 0; ;}
    break;

  case 349:
#line 6221 "parser-smi.y"
    { yyval.err = 0; ;}
    break;

  case 350:
#line 6225 "parser-smi.y"
    {
			    firstStatementLine = thisParserPtr->line;
			    currentDecl = SMI_DECL_OBJECTGROUP;
			    
			    checkNameLen(thisParserPtr, yyvsp[0].id,
					 ERR_OIDNAME_32, ERR_OIDNAME_64);
			    smiCheckObjectName(thisParserPtr,
					       thisModulePtr, yyvsp[0].id);
			;}
    break;

  case 351:
#line 6235 "parser-smi.y"
    {
			    Import *importPtr;
			    
			    if (thisModulePtr->export.language == SMI_LANGUAGE_UNKNOWN)
				thisModulePtr->export.language = SMI_LANGUAGE_SMIV2;

			    importPtr = findImportByName("OBJECT-GROUP",
							 thisModulePtr);
			    if (importPtr) {
				importPtr->use++;
			    } else {
				smiPrintError(thisParserPtr,
					      ERR_MACRO_NOT_IMPORTED,
					      "OBJECT-GROUP", "SNMPv2-CONF");
			    }
			;}
    break;

  case 352:
#line 6254 "parser-smi.y"
    {
			    if (yyvsp[0].text && !strlen(yyvsp[0].text)) {
				smiPrintError(thisParserPtr,
					      ERR_EMPTY_DESCRIPTION);
			    }
			;}
    break;

  case 353:
#line 6262 "parser-smi.y"
    {
			    Object *objectPtr;
			    
			    objectPtr = yyvsp[-1].objectPtr;

			    smiCheckObjectReuse(thisParserPtr, yyvsp[-14].id, &objectPtr);

			    objectPtr = setObjectName(objectPtr, yyvsp[-14].id);
			    setObjectDecl(objectPtr, SMI_DECL_OBJECTGROUP);
			    setObjectLine(objectPtr, firstStatementLine,
					  thisParserPtr);
			    addObjectFlags(objectPtr, FLAG_REGISTERED);
			    deleteObjectFlags(objectPtr, FLAG_INCOMPLETE);
			    setObjectStatus(objectPtr, yyvsp[-8].status);
			    setObjectDescription(objectPtr, yyvsp[-6].text, thisParserPtr);
			    if (yyvsp[-4].text) {
				setObjectReference(objectPtr, yyvsp[-4].text, thisParserPtr);
			    }
			    setObjectAccess(objectPtr,
					    SMI_ACCESS_NOT_ACCESSIBLE);
			    setObjectList(objectPtr, yyvsp[-10].listPtr);
			    yyval.err = 0;
			;}
    break;

  case 354:
#line 6288 "parser-smi.y"
    {
			    firstStatementLine = thisParserPtr->line;
			    currentDecl = SMI_DECL_NOTIFICATIONGROUP;
			    
			    checkNameLen(thisParserPtr, yyvsp[0].id,
					 ERR_OIDNAME_32, ERR_OIDNAME_64);
			    smiCheckObjectName(thisParserPtr,
					       thisModulePtr, yyvsp[0].id);
			;}
    break;

  case 355:
#line 6298 "parser-smi.y"
    {
			    Import *importPtr;
                            if (thisParserPtr->modulePtr->export.language == SMI_LANGUAGE_SPPI)
                                smiPrintError(thisParserPtr, ERR_SMI_CONSTRUCT_IN_PIB, "NOTIFICATION-GROUP");
			    
			    if (thisModulePtr->export.language == SMI_LANGUAGE_UNKNOWN)
				thisModulePtr->export.language = SMI_LANGUAGE_SMIV2;

			    importPtr = findImportByName("NOTIFICATION-GROUP",
							 thisModulePtr);
			    if (importPtr) {
				importPtr->use++;
			    } else {
				smiPrintError(thisParserPtr,
					      ERR_MACRO_NOT_IMPORTED,
					      "NOTIFICATION-GROUP",
					      "SNMPv2-CONF");
			    }
			;}
    break;

  case 356:
#line 6320 "parser-smi.y"
    {
			    if (yyvsp[0].text && !strlen(yyvsp[0].text)) {
				smiPrintError(thisParserPtr,
					      ERR_EMPTY_DESCRIPTION);
			    }
			;}
    break;

  case 357:
#line 6328 "parser-smi.y"
    {
			    Object *objectPtr;
			    
			    objectPtr = yyvsp[-1].objectPtr;

			    smiCheckObjectReuse(thisParserPtr, yyvsp[-14].id, &objectPtr);

			    objectPtr = setObjectName(objectPtr, yyvsp[-14].id);
			    setObjectDecl(objectPtr,
					  SMI_DECL_NOTIFICATIONGROUP);
			    setObjectLine(objectPtr, firstStatementLine,
					  thisParserPtr);
			    addObjectFlags(objectPtr, FLAG_REGISTERED);
			    deleteObjectFlags(objectPtr, FLAG_INCOMPLETE);
			    setObjectStatus(objectPtr, yyvsp[-8].status);
			    setObjectDescription(objectPtr, yyvsp[-6].text, thisParserPtr);
			    if (yyvsp[-4].text) {
				setObjectReference(objectPtr, yyvsp[-4].text, thisParserPtr);
			    }
			    setObjectAccess(objectPtr,
					    SMI_ACCESS_NOT_ACCESSIBLE);
			    setObjectList(objectPtr, yyvsp[-10].listPtr);
			    yyval.err = 0;
			;}
    break;

  case 358:
#line 6355 "parser-smi.y"
    {
			    firstStatementLine = thisParserPtr->line;
			    currentDecl = SMI_DECL_MODULECOMPLIANCE;
			    
			    checkNameLen(thisParserPtr, yyvsp[0].id,
					 ERR_OIDNAME_32, ERR_OIDNAME_64);
			    smiCheckObjectName(thisParserPtr,
					       thisModulePtr, yyvsp[0].id);
			;}
    break;

  case 359:
#line 6365 "parser-smi.y"
    {
			    Import *importPtr;
			    
			    if (thisModulePtr->export.language == SMI_LANGUAGE_UNKNOWN)
				thisModulePtr->export.language = SMI_LANGUAGE_SMIV2;
			    importPtr = findImportByName("MODULE-COMPLIANCE",
							 thisModulePtr);
			    if (importPtr) {
				importPtr->use++;
			    } else {
				smiPrintError(thisParserPtr,
					      ERR_MACRO_NOT_IMPORTED,
					      "MODULE-COMPLIANCE",
					      "SNMPv2-CONF");
			    }
			;}
    break;

  case 360:
#line 6383 "parser-smi.y"
    {
			    if (yyvsp[0].text && !strlen(yyvsp[0].text)) {
				smiPrintError(thisParserPtr,
					      ERR_EMPTY_DESCRIPTION);
			    }
			;}
    break;

  case 361:
#line 6392 "parser-smi.y"
    {
			    Object *objectPtr;
			    Option *optionPtr;
			    Refinement *refinementPtr;
			    List *listPtr;
			    
			    objectPtr = yyvsp[-1].objectPtr;

			    smiCheckObjectReuse(thisParserPtr, yyvsp[-14].id, &objectPtr);

			    setObjectName(objectPtr, yyvsp[-14].id);
			    setObjectDecl(objectPtr,
					  SMI_DECL_MODULECOMPLIANCE);
			    setObjectLine(objectPtr, firstStatementLine,
					  thisParserPtr);
			    addObjectFlags(objectPtr, FLAG_REGISTERED);
			    deleteObjectFlags(objectPtr, FLAG_INCOMPLETE);
			    setObjectStatus(objectPtr, yyvsp[-9].status);
			    setObjectDescription(objectPtr, yyvsp[-7].text, thisParserPtr);
			    if (yyvsp[-5].text) {
				setObjectReference(objectPtr, yyvsp[-5].text, thisParserPtr);
			    }
			    setObjectAccess(objectPtr,
					    SMI_ACCESS_NOT_ACCESSIBLE);
			    setObjectList(objectPtr, yyvsp[-4].compl.mandatorylistPtr);
			    objectPtr->optionlistPtr = yyvsp[-4].compl.optionlistPtr;
			    objectPtr->refinementlistPtr =
				                          yyvsp[-4].compl.refinementlistPtr;

			    if (yyvsp[-4].compl.optionlistPtr) {
				for (listPtr = yyvsp[-4].compl.optionlistPtr;
				     listPtr;
				     listPtr = listPtr->nextPtr) {
				    optionPtr = ((Option *)(listPtr->ptr));
				    optionPtr->compliancePtr = objectPtr;
				}
			    }

			    /*
			     * Dirty: Fake the types' names in the
			     * refinement list:
			     * ``<compliancename>+<objecttypename>+type''
			     * ``<compliancename>+<objecttypename>+writetype''
			     */
			    if (yyvsp[-4].compl.refinementlistPtr) {
				for (listPtr = yyvsp[-4].compl.refinementlistPtr;
				     listPtr;
				     listPtr = listPtr->nextPtr) {
				    refinementPtr =
					((Refinement *)(listPtr->ptr));
				    refinementPtr->compliancePtr = objectPtr;
				}
			    }

			    yyval.err = 0;
			;}
    break;

  case 362:
#line 6451 "parser-smi.y"
    {
			    yyval.compl = yyvsp[0].compl;
			;}
    break;

  case 363:
#line 6457 "parser-smi.y"
    {
			    yyval.compl = yyvsp[0].compl;
			;}
    break;

  case 364:
#line 6461 "parser-smi.y"
    {
			    List *listPtr;
			    
			    /* concatenate lists in $1 and $2 */
			    if (yyvsp[-1].compl.mandatorylistPtr) {
				for (listPtr = yyvsp[-1].compl.mandatorylistPtr;
				     listPtr->nextPtr;
				     listPtr = listPtr->nextPtr);
				listPtr->nextPtr = yyvsp[0].compl.mandatorylistPtr;
				yyval.compl.mandatorylistPtr = yyvsp[-1].compl.mandatorylistPtr;
			    } else {
				yyval.compl.mandatorylistPtr = yyvsp[0].compl.mandatorylistPtr;
			    }
			    if (yyvsp[-1].compl.optionlistPtr) {
				for (listPtr = yyvsp[-1].compl.optionlistPtr;
				     listPtr->nextPtr;
				     listPtr = listPtr->nextPtr);
				listPtr->nextPtr = yyvsp[0].compl.optionlistPtr;
				yyval.compl.optionlistPtr = yyvsp[-1].compl.optionlistPtr;
			    } else {
				yyval.compl.optionlistPtr = yyvsp[0].compl.optionlistPtr;
			    }
			    if (yyvsp[-1].compl.refinementlistPtr) {
				for (listPtr = yyvsp[-1].compl.refinementlistPtr;
				     listPtr->nextPtr;
				     listPtr = listPtr->nextPtr);
				listPtr->nextPtr = yyvsp[0].compl.refinementlistPtr;
				yyval.compl.refinementlistPtr = yyvsp[-1].compl.refinementlistPtr;
			    } else {
				yyval.compl.refinementlistPtr = yyvsp[0].compl.refinementlistPtr;
			    }
			;}
    break;

  case 365:
#line 6496 "parser-smi.y"
    {
			    /*
			     * Remember the module. SMIv2 is broken by
			     * design to allow subsequent clauses to
			     * refer identifiers that are not
			     * imported.  Although, SMIv2 does not
			     * require, we will fake it by inserting
			     * appropriate imports.
			     */
			    if (yyvsp[0].modulePtr == thisModulePtr)
				complianceModulePtr = NULL;
			    else
				complianceModulePtr = yyvsp[0].modulePtr;
			;}
    break;

  case 366:
#line 6512 "parser-smi.y"
    {
			    yyval.compl.mandatorylistPtr = yyvsp[-1].listPtr;
			    yyval.compl.optionlistPtr = yyvsp[0].compl.optionlistPtr;
			    yyval.compl.refinementlistPtr = yyvsp[0].compl.refinementlistPtr;
			    if (complianceModulePtr) {
				checkImports(complianceModulePtr,
					     thisParserPtr);
				complianceModulePtr = NULL;
			    }
			;}
    break;

  case 367:
#line 6525 "parser-smi.y"
    {
			    yyval.modulePtr = findModuleByName(yyvsp[-1].id);
			    /* TODO: handle objectIdentifier */
			    if (!yyval.modulePtr) {
				yyval.modulePtr = loadModule(yyvsp[-1].id, thisParserPtr);
			    }
			    smiFree(yyvsp[-1].id);
			;}
    break;

  case 368:
#line 6534 "parser-smi.y"
    {
			    yyval.modulePtr = findModuleByName(yyvsp[0].id);
			    if (!yyval.modulePtr) {
				yyval.modulePtr = loadModule(yyvsp[0].id, thisParserPtr);
			    }
			    smiFree(yyvsp[0].id);
			;}
    break;

  case 369:
#line 6543 "parser-smi.y"
    {
			    yyval.modulePtr = thisModulePtr;
			;}
    break;

  case 370:
#line 6549 "parser-smi.y"
    {
			    yyval.listPtr = yyvsp[-1].listPtr;
			;}
    break;

  case 371:
#line 6553 "parser-smi.y"
    {
			    yyval.listPtr = NULL;
			;}
    break;

  case 372:
#line 6559 "parser-smi.y"
    {
			    yyval.listPtr = smiMalloc(sizeof(List));
			    yyval.listPtr->ptr = yyvsp[0].objectPtr;
			    yyval.listPtr->nextPtr = NULL;
			;}
    break;

  case 373:
#line 6565 "parser-smi.y"
    {
			    List *p, *pp;
			    
			    p = smiMalloc(sizeof(List));
			    p->ptr = yyvsp[0].objectPtr;
			    p->nextPtr = NULL;
			    for (pp = yyvsp[-2].listPtr; pp->nextPtr; pp = pp->nextPtr);
			    pp->nextPtr = p;
			    yyval.listPtr = yyvsp[-2].listPtr;
			;}
    break;

  case 374:
#line 6578 "parser-smi.y"
    {
			    /* TODO: check that objectIdentifier is
			       found, is defined in complianceModulePtr,
			       and is a group node. */
			    Import *importPtr;

			    yyval.objectPtr = yyvsp[0].objectPtr;
			    if (complianceModulePtr) {
				yyval.objectPtr = findObjectByModuleAndName(
				                           complianceModulePtr,
							   yyvsp[0].objectPtr->export.name);
			    }
			    if (complianceModulePtr && yyvsp[0].objectPtr->export.name) {
				importPtr = findImportByModulenameAndName(
				    complianceModulePtr->export.name,
				    yyvsp[0].objectPtr->export.name, thisModulePtr);
				if (importPtr)
				    importPtr->use++;
			    }
			;}
    break;

  case 375:
#line 6601 "parser-smi.y"
    {
			    yyval.compl.mandatorylistPtr = NULL;
			    yyval.compl.optionlistPtr = yyvsp[0].compl.optionlistPtr;
			    yyval.compl.refinementlistPtr = yyvsp[0].compl.refinementlistPtr;
			;}
    break;

  case 376:
#line 6607 "parser-smi.y"
    {
			    yyval.compl.mandatorylistPtr = NULL;
			    yyval.compl.optionlistPtr = NULL;
			    yyval.compl.refinementlistPtr = NULL;
			;}
    break;

  case 377:
#line 6615 "parser-smi.y"
    {
			    yyval.compl = yyvsp[0].compl;
			;}
    break;

  case 378:
#line 6619 "parser-smi.y"
    {
			    List *listPtr;
			    int stop;
			    
			    yyval.compl.mandatorylistPtr = NULL;

			    /* check for duplicates in optionlist */
			    stop = 0;
			    if (yyvsp[0].compl.optionlistPtr) {
				for (listPtr = yyvsp[-1].compl.optionlistPtr; listPtr;
				     listPtr = listPtr->nextPtr) {
				    if (((Option *)listPtr->ptr)->objectPtr ==
					((Option *)yyvsp[0].compl.optionlistPtr->ptr)->objectPtr) {
					smiPrintError(thisParserPtr,
						      ERR_OPTIONALGROUP_ALREADY_EXISTS,
						      ((Option *)yyvsp[0].compl.optionlistPtr->ptr)->objectPtr->export.name);
					stop = 1;
					yyval.compl.optionlistPtr = yyvsp[-1].compl.optionlistPtr;
				    }
				}
			    }
	
                            /* concatenate optionlists */
			    if (yyvsp[-1].compl.optionlistPtr) {
				for (listPtr = yyvsp[-1].compl.optionlistPtr;
				     listPtr->nextPtr;
				     listPtr = listPtr->nextPtr);
				if (!stop) {
				    listPtr->nextPtr = yyvsp[0].compl.optionlistPtr;
				}
				yyval.compl.optionlistPtr = yyvsp[-1].compl.optionlistPtr;
			    } else {
				yyval.compl.optionlistPtr = yyvsp[0].compl.optionlistPtr;
			    }

			    /* check for duplicates in refinementlist */
			    stop = 0;
			    if (yyvsp[0].compl.refinementlistPtr) {
				for (listPtr = yyvsp[-1].compl.refinementlistPtr; listPtr;
				     listPtr = listPtr->nextPtr) {
				    if (((Refinement *)listPtr->ptr)->objectPtr ==
					((Refinement *)yyvsp[0].compl.refinementlistPtr->ptr)->objectPtr) {
					smiPrintError(thisParserPtr,
						      ERR_REFINEMENT_ALREADY_EXISTS,
						      ((Refinement *)yyvsp[0].compl.refinementlistPtr->ptr)->objectPtr->export.name);
					stop = 1;
					yyval.compl.refinementlistPtr = yyvsp[-1].compl.refinementlistPtr;
				    }
				}
			    }
			    
                            /* concatenate refinementlists */
			    if (yyvsp[-1].compl.refinementlistPtr) {
				for (listPtr = yyvsp[-1].compl.refinementlistPtr;
				     listPtr->nextPtr;
				     listPtr = listPtr->nextPtr);
				if (!stop) {
				    listPtr->nextPtr = yyvsp[0].compl.refinementlistPtr;
				}
				yyval.compl.refinementlistPtr = yyvsp[-1].compl.refinementlistPtr;
			    } else {
				yyval.compl.refinementlistPtr = yyvsp[0].compl.refinementlistPtr;
			    }
			;}
    break;

  case 379:
#line 6686 "parser-smi.y"
    {
			    yyval.compl.mandatorylistPtr = NULL;
			    yyval.compl.optionlistPtr = yyvsp[0].listPtr;
			    yyval.compl.refinementlistPtr = NULL;
			;}
    break;

  case 380:
#line 6692 "parser-smi.y"
    {
			    yyval.compl.mandatorylistPtr = NULL;
			    yyval.compl.optionlistPtr = NULL;
			    yyval.compl.refinementlistPtr = yyvsp[0].listPtr;
			;}
    break;

  case 381:
#line 6700 "parser-smi.y"
    {
			    firstNestedStatementLine = thisParserPtr->line;
			;}
    break;

  case 382:
#line 6705 "parser-smi.y"
    {
			    Import *importPtr;
			    
			    if (complianceModulePtr && yyvsp[-2].objectPtr->export.name) {
				importPtr = findImportByModulenameAndName(
						    complianceModulePtr->export.name,
						    yyvsp[-2].objectPtr->export.name,
						    thisModulePtr);
				if (importPtr)
				    importPtr->use++;
			    }
			    
			    if (yyvsp[0].text && !strlen(yyvsp[0].text)) {
				smiPrintError(thisParserPtr,
					      ERR_EMPTY_DESCRIPTION);
			    }
			    
			    yyval.listPtr = smiMalloc(sizeof(List));
			    yyval.listPtr->nextPtr = NULL;
			    yyval.listPtr->ptr = smiMalloc(sizeof(Option));
			    ((Option *)(yyval.listPtr->ptr))->line = firstNestedStatementLine;
			    ((Option *)(yyval.listPtr->ptr))->objectPtr = yyvsp[-2].objectPtr;
			    if (! (thisModulePtr->flags & SMI_FLAG_NODESCR)) {
				((Option *)(yyval.listPtr->ptr))->export.description = yyvsp[0].text;
			    } else {
				smiFree(yyvsp[0].text);
			    }
			;}
    break;

  case 383:
#line 6736 "parser-smi.y"
    {
			    firstNestedStatementLine = thisParserPtr->line;
			;}
    break;

  case 384:
#line 6744 "parser-smi.y"
    {
			    Import *importPtr;

			    if (complianceModulePtr && yyvsp[-5].objectPtr->export.name) {
				importPtr = findImportByModulenameAndName(
						    complianceModulePtr->export.name,
						    yyvsp[-5].objectPtr->export.name,
						    thisModulePtr);
				if (importPtr) 
				    importPtr->use++;
			    }
			    
			    if (yyvsp[0].text && !strlen(yyvsp[0].text)) {
				smiPrintError(thisParserPtr,
					      ERR_EMPTY_DESCRIPTION);
			    }
			    
			    thisParserPtr->flags &= ~FLAG_CREATABLE;
			    yyval.listPtr = smiMalloc(sizeof(List));
			    yyval.listPtr->nextPtr = NULL;
			    yyval.listPtr->ptr = smiMalloc(sizeof(Refinement));
			    ((Refinement *)(yyval.listPtr->ptr))->line =
				firstNestedStatementLine;
			    ((Refinement *)(yyval.listPtr->ptr))->objectPtr = yyvsp[-5].objectPtr;
			    ((Refinement *)(yyval.listPtr->ptr))->typePtr = yyvsp[-4].typePtr;
			    if (yyvsp[-4].typePtr) {
				yyvsp[-4].typePtr->parentPtr = yyvsp[-5].objectPtr->typePtr;
			    }
			    ((Refinement *)(yyval.listPtr->ptr))->writetypePtr = yyvsp[-3].typePtr;
			    if (yyvsp[-3].typePtr) {
				yyvsp[-3].typePtr->parentPtr = yyvsp[-5].objectPtr->typePtr;
			    }
			    ((Refinement *)(yyval.listPtr->ptr))->export.access = yyvsp[-2].access;
			    if (! (thisParserPtr->flags & SMI_FLAG_NODESCR)) {
				((Refinement *)(yyval.listPtr->ptr))->export.description = yyvsp[0].text;
			    } else {
				smiFree(yyvsp[0].text);
			    }
			;}
    break;

  case 385:
#line 6786 "parser-smi.y"
    {
			    if (yyvsp[0].typePtr->export.name) {
				yyval.typePtr = duplicateType(yyvsp[0].typePtr, 0, thisParserPtr);
			    } else {
				yyval.typePtr = yyvsp[0].typePtr;
			    }
			;}
    break;

  case 386:
#line 6794 "parser-smi.y"
    {
			    yyval.typePtr = NULL;
			;}
    break;

  case 387:
#line 6800 "parser-smi.y"
    {
                            /* must not be present in PIBs */
                            if (thisParserPtr->modulePtr->export.language == SMI_LANGUAGE_SPPI)
                                smiPrintError(thisParserPtr, ERR_SMI_CONSTRUCT_IN_PIB, "WRITE-SYNTAX");
			    if (yyvsp[0].typePtr->export.name) {
				yyval.typePtr = duplicateType(yyvsp[0].typePtr, 0, thisParserPtr);
			    } else {
				yyval.typePtr = yyvsp[0].typePtr;
			    }
			;}
    break;

  case 388:
#line 6811 "parser-smi.y"
    {
			    yyval.typePtr = NULL;
			;}
    break;

  case 389:
#line 6817 "parser-smi.y"
    {
			    yyval.typePtr = yyvsp[0].typePtr;
			;}
    break;

  case 390:
#line 6823 "parser-smi.y"
    {
                            if (thisParserPtr->modulePtr->export.language == SMI_LANGUAGE_SPPI)
                                smiPrintError(thisParserPtr, ERR_SMI_CONSTRUCT_IN_PIB, "MIN-ACCESS");
			    yyval.access = yyvsp[0].access;
			;}
    break;

  case 391:
#line 6829 "parser-smi.y"
    {
                            if (thisParserPtr->modulePtr->export.language != SMI_LANGUAGE_SPPI)
                                smiPrintError(thisParserPtr, ERR_SPPI_CONSTRUCT_IN_MIB, "PIB-MIN-ACCESS");
                            if (yyvsp[0].access == SMI_ACCESS_REPORT_ONLY)
                                smiPrintError(thisParserPtr, ERR_REPORT_ONLY_IN_PIB_MIN_ACCESS);
                            yyval.access = yyvsp[0].access;
                        ;}
    break;

  case 392:
#line 6837 "parser-smi.y"
    {
			    yyval.access = SMI_ACCESS_UNKNOWN;
			;}
    break;

  case 393:
#line 6843 "parser-smi.y"
    {
			    firstStatementLine = thisParserPtr->line;
			    currentDecl = SMI_DECL_AGENTCAPABILITIES;
			    
			    checkNameLen(thisParserPtr, yyvsp[0].id,
					 ERR_OIDNAME_32, ERR_OIDNAME_64);
			    smiCheckObjectName(thisParserPtr,
					       thisModulePtr, yyvsp[0].id);
			;}
    break;

  case 394:
#line 6853 "parser-smi.y"
    {
			    Import *importPtr;
                            if (thisParserPtr->modulePtr->export.language == SMI_LANGUAGE_SPPI)
                                smiPrintError(thisParserPtr, ERR_SMI_CONSTRUCT_IN_PIB, "AGENT-CAAPABILITIES");
			    
			    if (thisModulePtr->export.language == SMI_LANGUAGE_UNKNOWN)
				thisModulePtr->export.language = SMI_LANGUAGE_SMIV2;

			    importPtr = findImportByName("AGENT-CAPABILITIES",
							 thisModulePtr);
			    if (importPtr) {
				importPtr->use++;
			    } else {
				smiPrintError(thisParserPtr,
					      ERR_MACRO_NOT_IMPORTED,
					      "AGENT-CAPABILITIES",
					      "SNMPv2-CONF");
			    }
			;}
    break;

  case 395:
#line 6875 "parser-smi.y"
    {
			    if (yyvsp[0].text && !strlen(yyvsp[0].text)) {
				smiPrintError(thisParserPtr,
					      ERR_EMPTY_DESCRIPTION);
			    }
			;}
    break;

  case 396:
#line 6884 "parser-smi.y"
    {
			    Object *objectPtr;
			    
			    objectPtr = yyvsp[-1].objectPtr;
			    
			    smiCheckObjectReuse(thisParserPtr, yyvsp[-16].id, &objectPtr);

			    setObjectName(objectPtr, yyvsp[-16].id);
			    setObjectDecl(objectPtr,
					  SMI_DECL_AGENTCAPABILITIES);
			    setObjectLine(objectPtr, firstStatementLine,
					  thisParserPtr);
			    addObjectFlags(objectPtr, FLAG_REGISTERED);
			    deleteObjectFlags(objectPtr, FLAG_INCOMPLETE);
			    setObjectStatus(objectPtr, yyvsp[-9].status);
			    setObjectDescription(objectPtr, yyvsp[-7].text, thisParserPtr);
			    if (yyvsp[-5].text) {
				setObjectReference(objectPtr, yyvsp[-5].text, thisParserPtr);
			    }
			    setObjectAccess(objectPtr,
					    SMI_ACCESS_NOT_ACCESSIBLE);
				/*
				 * TODO: PRODUCT_RELEASE Text
				 * TODO: ModulePart_Capabilities
				 */
			    yyval.err = 0;
			;}
    break;

  case 397:
#line 6914 "parser-smi.y"
    { yyval.err = 0; ;}
    break;

  case 398:
#line 6916 "parser-smi.y"
    { yyval.err = 0; ;}
    break;

  case 399:
#line 6920 "parser-smi.y"
    { yyval.err = 0; ;}
    break;

  case 400:
#line 6922 "parser-smi.y"
    { yyval.err = 0; ;}
    break;

  case 401:
#line 6926 "parser-smi.y"
    {
			    /*
			     * Remember the module. SMIv2 is broken by
			     * design to allow subsequent clauses to
			     * refer identifiers that are not
			     * imported.  Although, SMIv2 does not
			     * require, we will fake it by inserting
			     * appropriate imports.
			     */
			    if (yyvsp[0].modulePtr == thisModulePtr)
				capabilitiesModulePtr = NULL;
			    else
				capabilitiesModulePtr = yyvsp[0].modulePtr;
			;}
    break;

  case 402:
#line 6942 "parser-smi.y"
    {
			    if (capabilitiesModulePtr) {
				checkImports(capabilitiesModulePtr,
					     thisParserPtr);
				capabilitiesModulePtr = NULL;
			    }
			    yyval.err = 0;
			;}
    break;

  case 403:
#line 6953 "parser-smi.y"
    {
#if 0
			    yyval.listPtr = smiMalloc(sizeof(List));
			    yyval.listPtr->ptr = yyvsp[0].listPtr;
			    yyval.listPtr->nextPtr = NULL;
#else
			    yyval.listPtr = NULL;
#endif
			;}
    break;

  case 404:
#line 6963 "parser-smi.y"
    {
#if 0
			    List *p, *pp;
			    
			    p = smiMalloc(sizeof(List));
			    p->ptr = yyvsp[0].listPtr;
			    p->nextPtr = NULL;
			    for (pp = yyvsp[-2].listPtr; pp->nextPtr; pp = pp->nextPtr);
			    pp->nextPtr = p;
			    yyval.listPtr = yyvsp[-2].listPtr;
#else
			    yyval.listPtr = NULL;
#endif
			;}
    break;

  case 405:
#line 6980 "parser-smi.y"
    {
			    yyval.listPtr = NULL;
			;}
    break;

  case 406:
#line 6986 "parser-smi.y"
    {
			    yyval.modulePtr = findModuleByName(yyvsp[-1].id);
			    /* TODO: handle objectIdentifier */
			    if (!yyval.modulePtr) {
				yyval.modulePtr = loadModule(yyvsp[-1].id, thisParserPtr);
			    }
			    smiFree(yyvsp[-1].id);
			;}
    break;

  case 407:
#line 6995 "parser-smi.y"
    {
			    yyval.modulePtr = findModuleByName(yyvsp[0].id);
			    if (!yyval.modulePtr) {
				yyval.modulePtr = loadModule(yyvsp[0].id, thisParserPtr);
			    }
			    smiFree(yyvsp[0].id);
			;}
    break;

  case 408:
#line 7005 "parser-smi.y"
    { yyval.err = 0; ;}
    break;

  case 409:
#line 7007 "parser-smi.y"
    { yyval.err = 0; ;}
    break;

  case 410:
#line 7011 "parser-smi.y"
    { yyval.err = 0; ;}
    break;

  case 411:
#line 7013 "parser-smi.y"
    { yyval.err = 0; ;}
    break;

  case 412:
#line 7017 "parser-smi.y"
    {
			    if (yyvsp[0].objectPtr) {
				variationkind = yyvsp[0].objectPtr->export.nodekind;
			    } else {
				variationkind = SMI_NODEKIND_UNKNOWN;
			    }
			;}
    break;

  case 413:
#line 7025 "parser-smi.y"
    {
			    if (variationkind == SMI_NODEKIND_NOTIFICATION) {
				smiPrintError(thisParserPtr,
				      ERR_NOTIFICATION_VARIATION_SYNTAX);
			    }
			;}
    break;

  case 414:
#line 7032 "parser-smi.y"
    {
			    if (variationkind == SMI_NODEKIND_NOTIFICATION) {
				smiPrintError(thisParserPtr,
				      ERR_NOTIFICATION_VARIATION_WRITESYNTAX);
			    }
			;}
    break;

  case 415:
#line 7040 "parser-smi.y"
    {
			    if (variationkind == SMI_NODEKIND_NOTIFICATION) {
				smiPrintError(thisParserPtr,
				      ERR_NOTIFICATION_VARIATION_CREATION);
			    }
			;}
    break;

  case 416:
#line 7047 "parser-smi.y"
    {
			    if (variationkind == SMI_NODEKIND_NOTIFICATION) {
				smiPrintError(thisParserPtr,
				      ERR_NOTIFICATION_VARIATION_DEFVAL);
			    } else if (yyvsp[0].valuePtr) {
				adjustDefval(thisParserPtr,
					     yyvsp[0].valuePtr, yyvsp[-9].objectPtr->typePtr,
					     thisParserPtr->line);
				smiCheckValueType(thisParserPtr,
						  yyvsp[0].valuePtr, yyvsp[-9].objectPtr->typePtr,
						  thisParserPtr->line);
			    }
			;}
    break;

  case 417:
#line 7061 "parser-smi.y"
    {
			    thisParserPtr->flags &= ~FLAG_CREATABLE;
			    yyval.err = 0;
			    variationkind = SMI_NODEKIND_UNKNOWN;

			    if (yyvsp[0].text && !strlen(yyvsp[0].text)) {
				smiPrintError(thisParserPtr,
					      ERR_EMPTY_DESCRIPTION);
			    }
			    
			;}
    break;

  case 418:
#line 7075 "parser-smi.y"
    { yyval.access = yyvsp[0].access; ;}
    break;

  case 419:
#line 7077 "parser-smi.y"
    { yyval.access = 0; ;}
    break;

  case 420:
#line 7081 "parser-smi.y"
    {
			    if (!strcmp(yyvsp[0].id, "not-implemented")) {
				yyval.access = SMI_ACCESS_NOT_IMPLEMENTED;
			    } else if (!strcmp(yyvsp[0].id, "accessible-for-notify")) {
				if (variationkind ==
				    SMI_NODEKIND_NOTIFICATION) {
				    smiPrintError(thisParserPtr,
				     ERR_INVALID_NOTIFICATION_VARIATION_ACCESS,
					       yyvsp[0].id);
				    yyval.access = SMI_ACCESS_UNKNOWN;
				} else {
				    yyval.access = SMI_ACCESS_NOTIFY;
				}
			    } else if (!strcmp(yyvsp[0].id, "read-only")) {
				if (variationkind ==
				    SMI_NODEKIND_NOTIFICATION) {
				    smiPrintError(thisParserPtr,
				     ERR_INVALID_NOTIFICATION_VARIATION_ACCESS,
					       yyvsp[0].id);
				    yyval.access = SMI_ACCESS_UNKNOWN;
				} else {
				    yyval.access = SMI_ACCESS_READ_ONLY;
				}
			    } else if (!strcmp(yyvsp[0].id, "read-write")) {
				if (variationkind ==
				    SMI_NODEKIND_NOTIFICATION) {
				    smiPrintError(thisParserPtr,
				     ERR_INVALID_NOTIFICATION_VARIATION_ACCESS,
					       yyvsp[0].id);
				    yyval.access = SMI_ACCESS_UNKNOWN;
				} else {
				    yyval.access = SMI_ACCESS_READ_WRITE;
				}
			    } else if (!strcmp(yyvsp[0].id, "read-create")) {
				if (variationkind ==
				    SMI_NODEKIND_NOTIFICATION) {
				    smiPrintError(thisParserPtr,
				     ERR_INVALID_NOTIFICATION_VARIATION_ACCESS,
					       yyvsp[0].id);
				    yyval.access = SMI_ACCESS_UNKNOWN;
				} else {
				    yyval.access = SMI_ACCESS_READ_WRITE;
				}
			    } else if (!strcmp(yyvsp[0].id, "write-only")) {
				if (variationkind ==
				    SMI_NODEKIND_NOTIFICATION) {
				    smiPrintError(thisParserPtr,
				     ERR_INVALID_NOTIFICATION_VARIATION_ACCESS,
					       yyvsp[0].id);
				    yyval.access = SMI_ACCESS_UNKNOWN;
				} else {
				    yyval.access = SMI_ACCESS_READ_WRITE; /* TODO */
				    smiPrintError(thisParserPtr,
					       ERR_SMIV2_WRITE_ONLY);
				}
			    } else {
				smiPrintError(thisParserPtr,
					      ERR_INVALID_VARIATION_ACCESS,
					      yyvsp[0].id);
				yyval.access = SMI_ACCESS_UNKNOWN;
			    }
			;}
    break;

  case 421:
#line 7146 "parser-smi.y"
    { yyval.err = 0; ;}
    break;

  case 422:
#line 7148 "parser-smi.y"
    { yyval.err = 0; ;}
    break;

  case 423:
#line 7152 "parser-smi.y"
    { yyval.err = 0; ;}
    break;

  case 424:
#line 7154 "parser-smi.y"
    { yyval.err = 0; ;}
    break;

  case 425:
#line 7158 "parser-smi.y"
    { yyval.err = 0; ;}
    break;


    }

/* Line 999 of yacc.c.  */
#line 9408 "parser-smi.tab.c"

  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("syntax error, unexpected ") + 1;
	  yysize += yystrlen (yytname[yytype]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* Return failure if at end of input.  */
      if (yychar == YYEOF)
        {
	  /* Pop the error token.  */
          YYPOPSTACK;
	  /* Pop the rest of the stack.  */
	  while (yyss < yyssp)
	    {
	      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
	      yydestruct (yystos[*yyssp], yyvsp);
	      YYPOPSTACK;
	    }
	  YYABORT;
        }

      YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
      yydestruct (yytoken, &yylval);
      yychar = YYEMPTY;

    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*----------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action.  |
`----------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      yyvsp--;
      yystate = *--yyssp;

      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 7161 "parser-smi.y"


#endif

