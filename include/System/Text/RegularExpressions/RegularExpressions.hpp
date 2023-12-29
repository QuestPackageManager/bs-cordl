#ifdef __cpp_modules
module;
#endif

#pragma once
#include "System/Text/RegularExpressions/Capture.hpp"
#include "System/Text/RegularExpressions/CaptureCollection.hpp"
#include "System/Text/RegularExpressions/CollectionDebuggerProxy_1.hpp"
#include "System/Text/RegularExpressions/ExclusiveReference.hpp"
#include "System/Text/RegularExpressions/Group.hpp"
#include "System/Text/RegularExpressions/GroupCollection.hpp"
#include "System/Text/RegularExpressions/Match.hpp"
#include "System/Text/RegularExpressions/MatchCollection.hpp"
#include "System/Text/RegularExpressions/MatchSparse.hpp"
#include "System/Text/RegularExpressions/Regex.hpp"
#include "System/Text/RegularExpressions/RegexBoyerMoore.hpp"
#include "System/Text/RegularExpressions/RegexCharClass.hpp"
#include "System/Text/RegularExpressions/RegexCode.hpp"
#include "System/Text/RegularExpressions/RegexFC.hpp"
#include "System/Text/RegularExpressions/RegexFCD.hpp"
#include "System/Text/RegularExpressions/RegexInterpreter.hpp"
#include "System/Text/RegularExpressions/RegexMatchTimeoutException.hpp"
#include "System/Text/RegularExpressions/RegexNode.hpp"
#include "System/Text/RegularExpressions/RegexOptions.hpp"
#include "System/Text/RegularExpressions/RegexParser.hpp"
#include "System/Text/RegularExpressions/RegexPrefix.hpp"
#include "System/Text/RegularExpressions/RegexReplacement.hpp"
#include "System/Text/RegularExpressions/RegexRunner.hpp"
#include "System/Text/RegularExpressions/RegexRunnerFactory.hpp"
#include "System/Text/RegularExpressions/RegexTree.hpp"
#include "System/Text/RegularExpressions/RegexWriter.hpp"
#ifdef __cpp_modules
export module RegularExpressions;
#endif
