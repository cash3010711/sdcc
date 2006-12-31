/* This file is auto-generated by opts.sh.  */

#include <intl.h>
#include "options.h"
#include "opts.h"

const char * const lang_names[] =
{
  "SDCPP",
  0
};

const unsigned int cl_options_count = N_OPTS;

const struct cl_option cl_options[] =
{
  { "--help",
    N_("Display this information"),
    N_OPTS, 5, CL_COMMON },
  { "--version",
    N_("Display the compiler's version"),
    N_OPTS, 8, CL_COMMON },
  { "-A",
    N_("-A<question>=<answer>	Assert the <answer> to <question>.  Putting '-' before <question> disables the <answer> to <question>"),
    N_OPTS, 1, CL_SDCPP | CL_JOINED | CL_SEPARATE },
  { "-C",
    N_("Do not discard comments"),
    N_OPTS, 1, CL_SDCPP },
  { "-CC",
    N_("Do not discard comments in macro expansions"),
    N_OPTS, 2, CL_SDCPP },
  { "-D",
    N_("-D<macro>[=<val>]	Define a <macro> with <val> as its value.  If just <macro> is given, <val> is taken to be 1"),
    N_OPTS, 1, CL_SDCPP | CL_JOINED | CL_SEPARATE },
  { "-H",
    N_("Print the name of header files as they are used"),
    N_OPTS, 1, CL_SDCPP },
  { "-I",
    N_("-I <dir>	Add <dir> to the end of the main include path.  -I- gives more include path control; see info documentation"),
    N_OPTS, 1, CL_SDCPP | CL_JOINED | CL_SEPARATE },
  { "-M",
    N_("Generate make dependencies"),
    N_OPTS, 1, CL_SDCPP },
  { "-MD",
    N_("Generate make dependencies and compile"),
    N_OPTS, 2, CL_SDCPP | CL_SEPARATE },
  { "-MF",
    N_("-MF <file>	Write dependency output to the given file"),
    N_OPTS, 2, CL_SDCPP | CL_JOINED | CL_SEPARATE },
  { "-MG",
    N_("Treat missing header files as generated files"),
    N_OPTS, 2, CL_SDCPP },
  { "-MM",
    N_("Like -M but ignore system header files"),
    N_OPTS, 2, CL_SDCPP },
  { "-MMD",
    N_("Like -MD but ignore system header files"),
    N_OPTS, 3, CL_SDCPP | CL_SEPARATE },
  { "-MP",
    N_("Generate phony targets for all headers"),
    N_OPTS, 2, CL_SDCPP },
  { "-MQ",
    N_("-MQ <target>	Add a MAKE-quoted target"),
    N_OPTS, 2, CL_SDCPP | CL_JOINED | CL_SEPARATE },
  { "-MT",
    N_("-MT <target>	Add an unquoted target"),
    N_OPTS, 2, CL_SDCPP | CL_JOINED | CL_SEPARATE },
  { "-P",
    N_("Do not generate #line directives"),
    N_OPTS, 1, CL_SDCPP },
  { "-U",
    N_("-U<macro>	Undefine <macro>"),
    N_OPTS, 1, CL_SDCPP | CL_JOINED | CL_SEPARATE },
  { "-Wall",
    N_("Enable most warning messages"),
    N_OPTS, 4, CL_SDCPP },
  { "-Wcomment",
    N_("Warn about possibly nested block comments, and C++ comments spanning more than one physical line"),
    N_OPTS, 8, CL_SDCPP },
  { "-Wcomments",
    N_("Synonym for -Wcomment"),
    N_OPTS, 9, CL_SDCPP },
  { "-Wdeprecated",
    N_("Warn about deprecated compiler features"),
    N_OPTS, 11, CL_SDCPP },
  { "-Wendif-labels",
    N_("Warn about stray tokens after #elif and #endif"),
    N_OPTS, 13, CL_SDCPP },
  { "-Werror",
    N_("Treat all warnings as errors"),
    N_OPTS, 6, CL_SDCPP },
  { "-Wimport",
    N_("Deprecated.  This switch has no effect."),
    N_OPTS, 7, CL_SDCPP },
  { "-Wsystem-headers",
    N_("Do not suppress warnings from system headers"),
    N_OPTS, 15, CL_SDCPP },
  { "-Wtrigraphs",
    N_("Warn if trigraphs are encountered that might affect the meaning of the program"),
    N_OPTS, 10, CL_SDCPP },
  { "-Wundef",
    N_("Warn if an undefined macro is used in an #if directive"),
    N_OPTS, 6, CL_SDCPP },
  { "-Wunused-macros",
    N_("Warn about macros defined in the main file that are not used"),
    N_OPTS, 14, CL_SDCPP },
  { "-ansi",
    N_("A synonym for -std=c89."),
    N_OPTS, 4, CL_SDCPP },
  { "-d",
    N_("-d<letters>	Enable dumps from specific passes of the compiler"),
    N_OPTS, 1, CL_SDCPP | CL_JOINED },
  { "-fdollars-in-identifiers",
    N_("Permit '$' as an identifier character"),
    N_OPTS, 23, CL_SDCPP },
  { "-fexec-charset=",
    N_("-fexec-charset=<cset>	Convert all strings and character constants to character set <cset>"),
    N_OPTS, 14, CL_SDCPP | CL_JOINED | CL_REJECT_NEGATIVE },
  { "-finput-charset=",
    N_("-finput-charset=<cset>      Specify the default character set for source files."),
    N_OPTS, 15, CL_SDCPP | CL_JOINED | CL_REJECT_NEGATIVE },
  { "-fpreprocessed",
    N_("Treat the input file as already preprocessed"),
    N_OPTS, 13, CL_SDCPP },
  { "-fshow-column",
    0,
    N_OPTS, 12, CL_SDCPP },
  { "-fsigned-char",
    N_("Make \"char\" signed by default"),
    N_OPTS, 12, CL_SDCPP },
  { "-ftabstop=",
    N_("-ftabstop=<number>	Distance between tab stops for column reporting"),
    N_OPTS, 9, CL_SDCPP | CL_JOINED | CL_REJECT_NEGATIVE | CL_UINTEGER },
  { "-funsigned-char",
    N_("Make \"char\" unsigned by default"),
    N_OPTS, 14, CL_SDCPP },
  { "-fwide-exec-charset=",
    N_("-fwide-exec-charset=<cset>	Convert all wide strings and character constants to character set <cset>"),
    N_OPTS, 19, CL_SDCPP | CL_JOINED | CL_REJECT_NEGATIVE },
  { "-fworking-directory",
    N_("Generate a #line directive pointing at the current working directory"),
    N_OPTS, 18, CL_SDCPP },
  { "-idirafter",
    N_("-idirafter <dir>	Add <dir> to the end of the system include path"),
    N_OPTS, 9, CL_SDCPP | CL_JOINED | CL_SEPARATE },
  { "-imacros",
    N_("-imacros <file>	Accept definition of macros in <file>"),
    N_OPTS, 7, CL_SDCPP | CL_JOINED | CL_SEPARATE },
  { "-include",
    N_("-include <file>	Include the contents of <file> before other files"),
    N_OPTS, 7, CL_SDCPP | CL_JOINED | CL_SEPARATE },
  { "-iprefix",
    N_("-iprefix <path>	Specify <path> as a prefix for next two options"),
    N_OPTS, 7, CL_SDCPP | CL_JOINED | CL_SEPARATE },
  { "-isysroot",
    N_("-isysroot <dir>	Set <dir> to be the system root directory"),
    N_OPTS, 8, CL_SDCPP | CL_JOINED | CL_SEPARATE },
  { "-isystem",
    N_("-isystem <dir>	Add <dir> to the start of the system include path"),
    N_OPTS, 7, CL_SDCPP | CL_JOINED | CL_SEPARATE },
  { "-iwithprefix",
    N_("-iwithprefix <dir>	Add <dir> to the end of the system include path"),
    N_OPTS, 11, CL_SDCPP | CL_JOINED | CL_SEPARATE },
  { "-iwithprefixbefore",
    N_("-iwithprefixbefore <dir>	Add <dir> to the end of the main include path"),
    OPT_iwithprefix, 17, CL_SDCPP | CL_JOINED | CL_SEPARATE },
  { "-lang-asm",
    0,
    N_OPTS, 8, CL_UNDOCUMENTED },
  { "-lang-objc",
    0,
    N_OPTS, 9, CL_SDCPP | CL_UNDOCUMENTED },
  { "-nostdinc",
    N_("Do not search standard system include directories (those specified with -isystem will still be used)"),
    N_OPTS, 8, CL_SDCPP },
  { "-o",
    N_("-o <file>	Place output into <file>"),
    N_OPTS, 1, CL_SDCPP | CL_JOINED | CL_SEPARATE },
  { "-obj-ext=",
    N_("-obj-ext=<extension>	Define object file extension, used for generation of make dependencies"),
    OPT_o, 8, CL_SDCPP | CL_JOINED },
  { "-pedantic",
    N_("Issue warnings needed for strict compliance to the standard"),
    N_OPTS, 8, CL_SDCPP },
  { "-pedantic-errors",
    N_("Like -pedantic but issue them as errors"),
    N_OPTS, 15, CL_SDCPP },
  { "-pedantic-parse-number",
    N_("Pedantic parse number"),
    N_OPTS, 21, CL_SDCPP },
  { "-remap",
    N_("Remap file names when including files"),
    N_OPTS, 5, CL_SDCPP },
  { "-std=c89",
    N_("Conform to the ISO 1990 C standard"),
    N_OPTS, 7, CL_SDCPP },
  { "-std=c99",
    N_("Conform to the ISO 1999 C standard"),
    N_OPTS, 7, CL_SDCPP },
  { "-std=iso9899:1990",
    N_("Conform to the ISO 1990 C standard"),
    N_OPTS, 16, 0 },
  { "-std=iso9899:199409",
    N_("Conform to the ISO 1990 C standard as amended in 1994"),
    N_OPTS, 18, CL_SDCPP },
  { "-std=iso9899:1999",
    N_("Conform to the ISO 1999 C standard"),
    N_OPTS, 16, 0 },
  { "-traditional-cpp",
    N_("Enable traditional preprocessing"),
    N_OPTS, 15, CL_SDCPP },
  { "-trigraphs",
    N_("-trigraphs	Support ISO C trigraphs"),
    N_OPTS, 9, CL_SDCPP },
  { "-v",
    N_("Enable verbose output"),
    N_OPTS, 1, CL_SDCPP },
  { "-w",
    N_("Suppress warnings"),
    N_OPTS, 1, CL_SDCPP }
};