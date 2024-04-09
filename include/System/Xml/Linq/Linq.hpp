#ifdef __cpp_modules
module;
#endif

#pragma once
#include "System/Xml/Linq/BaseUriAnnotation.hpp"
#include "System/Xml/Linq/ElementWriter.hpp"
#include "System/Xml/Linq/LineInfoAnnotation.hpp"
#include "System/Xml/Linq/LineInfoEndElementAnnotation.hpp"
#include "System/Xml/Linq/LoadOptions.hpp"
#include "System/Xml/Linq/NamespaceCache.hpp"
#include "System/Xml/Linq/NamespaceResolver.hpp"
#include "System/Xml/Linq/SaveOptions.hpp"
#include "System/Xml/Linq/XAttribute.hpp"
#include "System/Xml/Linq/XCData.hpp"
#include "System/Xml/Linq/XComment.hpp"
#include "System/Xml/Linq/XContainer.hpp"
#include "System/Xml/Linq/XDeclaration.hpp"
#include "System/Xml/Linq/XDocument.hpp"
#include "System/Xml/Linq/XDocumentType.hpp"
#include "System/Xml/Linq/XElement.hpp"
#include "System/Xml/Linq/XHashtable_1.hpp"
#include "System/Xml/Linq/XName.hpp"
#include "System/Xml/Linq/XNamespace.hpp"
#include "System/Xml/Linq/XNode.hpp"
#include "System/Xml/Linq/XObject.hpp"
#include "System/Xml/Linq/XObjectChange.hpp"
#include "System/Xml/Linq/XObjectChangeAnnotation.hpp"
#include "System/Xml/Linq/XObjectChangeEventArgs.hpp"
#include "System/Xml/Linq/XProcessingInstruction.hpp"
#include "System/Xml/Linq/XStreamingElement.hpp"
#include "System/Xml/Linq/XText.hpp"
#ifdef __cpp_modules
export module Linq;
#endif
