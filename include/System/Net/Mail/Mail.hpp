#ifdef __cpp_modules
module;
#endif

#pragma once
#include "System\Net\Mail\DomainLiteralReader.hpp"
#include "System\Net\Mail\DotAtomReader.hpp"
#include "System\Net\Mail\MailAddress.hpp"
#include "System\Net\Mail\MailAddressParser.hpp"
#include "System\Net\Mail\QuotedPairReader.hpp"
#include "System\Net\Mail\QuotedStringFormatReader.hpp"
#include "System\Net\Mail\WhitespaceReader.hpp"
#ifdef __cpp_modules
export module Mail;
#endif
