/*
 * Copyright (C) 2019 Radim Lipka <xlipka02@stud.fit.vutbr.cz>
 * Copyright (C) 2019 Roman Ondráček <xondra58@stud.fit.vutbr.cz>
 * Copyright (C) 2019 Pavel Raur <xraurp00@stud.fit.vutbr.cz>
 * Copyright (C) 2019 David Reinhart <xreinh00@stud.fit.vutbr.cz>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

grammar calculator;

/**
 * Parser rules
 */
input
   : expression EOF
   ;

expression
   : (PLUS|MINUS) expression # SignedExpression
   | LPAREN expression RPAREN # Parenthesis
   | expression FACT # Factorial
   | expression POW expression # Pow
   | SQRT expression # Sqrt
   | expression SQRT expression # Root
   | expression TIMES expression PERC # PercentageTimes
   | expression TIMES expression # Times
   | expression DIV expression PERC # PercentageDiv
   | expression DIV expression # Div
   | expression MOD expression # Mod
   | expression PLUS expression PERC # PercentagePlus
   | expression PLUS expression # Plus
   | expression MINUS expression PERC # PercentageMinus
   | expression MINUS expression # Minus
   | ABSPAREN expression ABSPAREN # Abs
   | funcName LPAREN expression (COMMA expression)* RPAREN # Function
   | NUMBER # Number
   | PI #Pi
   | EULER #Euler
   ;

funcName
   : ABSVAL
   | SIN
   | COS
   | TAN
   | LOG
   | LN
   ;

/*
 * Lexer rules
 */
fragment A  : ('A'|'a') ;
fragment B  : ('B'|'b') ;
fragment C  : ('C'|'c') ;
fragment D  : ('D'|'d') ;
fragment E  : ('E'|'e') ;
fragment F  : ('F'|'f') ;
fragment G  : ('G'|'g') ;
fragment H  : ('H'|'h') ;
fragment I  : ('I'|'i') ;
fragment J  : ('J'|'j') ;
fragment K  : ('K'|'k') ;
fragment L  : ('L'|'l') ;
fragment M  : ('M'|'m') ;
fragment N  : ('N'|'n') ;
fragment O  : ('O'|'o') ;
fragment P  : ('P'|'p') ;
fragment Q  : ('Q'|'q') ;
fragment R  : ('R'|'r') ;
fragment S  : ('S'|'s') ;
fragment T  : ('T'|'t') ;
fragment U  : ('U'|'u') ;
fragment V  : ('V'|'v') ;
fragment W  : ('W'|'w') ;
fragment X  : ('X'|'x') ;
fragment Y  : ('Y'|'y') ;
fragment Z  : ('Z'|'z') ;

NUMBER
   : [0-9]+ ((','|'.')[0-9]+)?
   ;

// Parentheses
LPAREN
   : '('
   ;
RPAREN
   : ')'
   ;

ABSPAREN
   : '|'
   ;

// Operations
PLUS
   : '+'
   ;
MINUS
   : '-'
   ;
TIMES
   : '*'
   ;
DIV
   : '/'
   | ':'
   ;
MOD
   : M O D
   ;
POW
   : '^'
   ;

COMMA
   : ','
   ;
POINT
   : '.'
   ;

FACT
   : '!'
   ;

SQRT
   : '√'
   ;

PERC
   : '%'
   ;
// Constants
PI
   : 'π'
   ;

EULER
   : 'ℯ'
   | 'e'
   ;

// Functions
ABSVAL
   : A B S
   ;
SIN
   : S I N
   ;
COS
   : C O S
   ;
TAN
   : T A N
   | T G
   ;
LOG
   : L O G
   ;
LN
   : L N
   ;

WHITESPACE
   : [ \r\n\t]+ -> skip
;
