#pragma once
// IWYU pragma private; include "System/Xml/XmlExceptionHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlExceptionHelper)
namespace System::Xml {
class XmlDictionaryReader;
}
namespace System::Xml {
class XmlException;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Xml {
class XmlExceptionHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlExceptionHelper);
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlExceptionHelper
class CORDL_TYPE XmlExceptionHelper : public ::System::Object {
public:
// Declarations
/// @brief Method CreateConversionException, addr 0x5ff0210, size 0x138, virtual false, abstract: false, final false
static inline ::System::Xml::XmlException* CreateConversionException(::StringW  value, ::StringW  type, ::System::Exception*  exception) ;

/// @brief Method CreateEncodingException, addr 0x5ff0348, size 0xb0, virtual false, abstract: false, final false
static inline ::System::Xml::XmlException* CreateEncodingException(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::Exception*  exception) ;

/// @brief Method CreateEncodingException, addr 0x5ff03f8, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Xml::XmlException* CreateEncodingException(::StringW  value, ::System::Exception*  exception) ;

/// @brief Method GetName, addr 0x5fef428, size 0x84, virtual false, abstract: false, final false
static inline ::StringW GetName(::StringW  prefix, ::StringW  localName) ;

/// @brief Method GetWhatWasFound, addr 0x5fef4ac, size 0x480, virtual false, abstract: false, final false
static inline ::StringW GetWhatWasFound(::System::Xml::XmlDictionaryReader*  reader) ;

/// @brief Method ThrowBase64DataExpected, addr 0x5fefc18, size 0x58, virtual false, abstract: false, final false
static inline void ThrowBase64DataExpected(::System::Xml::XmlDictionaryReader*  reader) ;

/// @brief Method ThrowConversionOverflow, addr 0x5fefff0, size 0x5c, virtual false, abstract: false, final false
static inline void ThrowConversionOverflow(::System::Xml::XmlDictionaryReader*  reader, ::StringW  value, ::StringW  type) ;

/// @brief Method ThrowDeclarationNotFirst, addr 0x5fe9d50, size 0x50, virtual false, abstract: false, final false
static inline void ThrowDeclarationNotFirst(::System::Xml::XmlDictionaryReader*  reader) ;

/// @brief Method ThrowDuplicateAttribute, addr 0x5fefecc, size 0x84, virtual false, abstract: false, final false
static inline void ThrowDuplicateAttribute(::System::Xml::XmlDictionaryReader*  reader, ::StringW  prefix1, ::StringW  prefix2, ::StringW  localName, ::StringW  ns) ;

/// @brief Method ThrowDuplicateXmlnsAttribute, addr 0x5fefe18, size 0xb4, virtual false, abstract: false, final false
static inline void ThrowDuplicateXmlnsAttribute(::System::Xml::XmlDictionaryReader*  reader, ::StringW  localName, ::StringW  ns) ;

/// @brief Method ThrowEmptyNamespace, addr 0x5ff01c0, size 0x50, virtual false, abstract: false, final false
static inline void ThrowEmptyNamespace(::System::Xml::XmlDictionaryReader*  reader) ;

/// @brief Method ThrowEndElementExpected, addr 0x5fef984, size 0x64, virtual false, abstract: false, final false
static inline void ThrowEndElementExpected(::System::Xml::XmlDictionaryReader*  reader, ::StringW  localName, ::StringW  ns) ;

/// @brief Method ThrowInvalidBinaryFormat, addr 0x5feff50, size 0x50, virtual false, abstract: false, final false
static inline void ThrowInvalidBinaryFormat(::System::Xml::XmlDictionaryReader*  reader) ;

/// @brief Method ThrowInvalidCharRef, addr 0x5fefdc8, size 0x50, virtual false, abstract: false, final false
static inline void ThrowInvalidCharRef(::System::Xml::XmlDictionaryReader*  reader) ;

/// @brief Method ThrowInvalidRootData, addr 0x5fec54c, size 0x50, virtual false, abstract: false, final false
static inline void ThrowInvalidRootData(::System::Xml::XmlDictionaryReader*  reader) ;

/// @brief Method ThrowInvalidXml, addr 0x5feb610, size 0xb4, virtual false, abstract: false, final false
static inline void ThrowInvalidXml(::System::Xml::XmlDictionaryReader*  reader, uint8_t  b) ;

/// @brief Method ThrowMaxArrayLengthExceeded, addr 0x5fefa58, size 0x70, virtual false, abstract: false, final false
static inline void ThrowMaxArrayLengthExceeded(::System::Xml::XmlDictionaryReader*  reader, int32_t  maxArrayLength) ;

/// @brief Method ThrowMaxArrayLengthOrMaxItemsQuotaExceeded, addr 0x5fefac8, size 0x70, virtual false, abstract: false, final false
static inline void ThrowMaxArrayLengthOrMaxItemsQuotaExceeded(::System::Xml::XmlDictionaryReader*  reader, int32_t  maxQuota) ;

/// @brief Method ThrowMaxBytesPerReadExceeded, addr 0x5feae24, size 0x70, virtual false, abstract: false, final false
static inline void ThrowMaxBytesPerReadExceeded(::System::Xml::XmlDictionaryReader*  reader, int32_t  maxBytesPerRead) ;

/// @brief Method ThrowMaxDepthExceeded, addr 0x5fefb38, size 0x70, virtual false, abstract: false, final false
static inline void ThrowMaxDepthExceeded(::System::Xml::XmlDictionaryReader*  reader, int32_t  maxDepth) ;

/// @brief Method ThrowMaxNameTableCharCountExceeded, addr 0x5fefba8, size 0x70, virtual false, abstract: false, final false
static inline void ThrowMaxNameTableCharCountExceeded(::System::Xml::XmlDictionaryReader*  reader, int32_t  maxNameTableCharCount) ;

/// @brief Method ThrowMaxStringContentLengthExceeded, addr 0x5fef9e8, size 0x70, virtual false, abstract: false, final false
static inline void ThrowMaxStringContentLengthExceeded(::System::Xml::XmlDictionaryReader*  reader, int32_t  maxStringContentLength) ;

/// @brief Method ThrowMultipleRootElements, addr 0x5feffa0, size 0x50, virtual false, abstract: false, final false
static inline void ThrowMultipleRootElements(::System::Xml::XmlDictionaryReader*  reader) ;

/// @brief Method ThrowProcessingInstructionNotSupported, addr 0x5fe9d00, size 0x50, virtual false, abstract: false, final false
static inline void ThrowProcessingInstructionNotSupported(::System::Xml::XmlDictionaryReader*  reader) ;

/// @brief Method ThrowStartElementExpected, addr 0x5fef92c, size 0x58, virtual false, abstract: false, final false
static inline void ThrowStartElementExpected(::System::Xml::XmlDictionaryReader*  reader) ;

/// @brief Method ThrowTagMismatch, addr 0x5feb308, size 0x84, virtual false, abstract: false, final false
static inline void ThrowTagMismatch(::System::Xml::XmlDictionaryReader*  reader, ::StringW  expectedPrefix, ::StringW  expectedLocalName, ::StringW  foundPrefix, ::StringW  foundLocalName) ;

/// @brief Method ThrowTokenExpected, addr 0x5fea388, size 0x5c, virtual false, abstract: false, final false
static inline void ThrowTokenExpected(::System::Xml::XmlDictionaryReader*  reader, ::StringW  expected, ::StringW  found) ;

/// @brief Method ThrowTokenExpected, addr 0x5feabfc, size 0x7c, virtual false, abstract: false, final false
static inline void ThrowTokenExpected(::System::Xml::XmlDictionaryReader*  reader, ::StringW  expected, char16_t  found) ;

/// @brief Method ThrowUndefinedPrefix, addr 0x5fefc70, size 0x58, virtual false, abstract: false, final false
static inline void ThrowUndefinedPrefix(::System::Xml::XmlDictionaryReader*  reader, ::StringW  prefix) ;

/// @brief Method ThrowUnexpectedEndElement, addr 0x5fefd78, size 0x50, virtual false, abstract: false, final false
static inline void ThrowUnexpectedEndElement(::System::Xml::XmlDictionaryReader*  reader) ;

/// @brief Method ThrowUnexpectedEndOfFile, addr 0x5fefcc8, size 0xb0, virtual false, abstract: false, final false
static inline void ThrowUnexpectedEndOfFile(::System::Xml::XmlDictionaryReader*  reader) ;

/// @brief Method ThrowXmlDictionaryStringIDOutOfRange, addr 0x5ff004c, size 0x94, virtual false, abstract: false, final false
static inline void ThrowXmlDictionaryStringIDOutOfRange(::System::Xml::XmlDictionaryReader*  reader) ;

/// @brief Method ThrowXmlDictionaryStringIDUndefinedSession, addr 0x5ff0150, size 0x70, virtual false, abstract: false, final false
static inline void ThrowXmlDictionaryStringIDUndefinedSession(::System::Xml::XmlDictionaryReader*  reader, int32_t  key) ;

/// @brief Method ThrowXmlDictionaryStringIDUndefinedStatic, addr 0x5ff00e0, size 0x70, virtual false, abstract: false, final false
static inline void ThrowXmlDictionaryStringIDUndefinedStatic(::System::Xml::XmlDictionaryReader*  reader, int32_t  key) ;

/// @brief Method ThrowXmlException, addr 0x5fea4d4, size 0x2cc, virtual false, abstract: false, final false
static inline void ThrowXmlException(::System::Xml::XmlDictionaryReader*  reader, ::System::Xml::XmlException*  exception) ;

/// @brief Method ThrowXmlException, addr 0x5fef040, size 0x14, virtual false, abstract: false, final false
static inline void ThrowXmlException(::System::Xml::XmlDictionaryReader*  reader, ::StringW  res) ;

/// @brief Method ThrowXmlException, addr 0x5fef054, size 0x10, virtual false, abstract: false, final false
static inline void ThrowXmlException(::System::Xml::XmlDictionaryReader*  reader, ::StringW  res, ::StringW  arg1) ;

/// @brief Method ThrowXmlException, addr 0x5fef064, size 0xc, virtual false, abstract: false, final false
static inline void ThrowXmlException(::System::Xml::XmlDictionaryReader*  reader, ::StringW  res, ::StringW  arg1, ::StringW  arg2) ;

/// @brief Method ThrowXmlException, addr 0x5fef070, size 0x3b8, virtual false, abstract: false, final false
static inline void ThrowXmlException(::System::Xml::XmlDictionaryReader*  reader, ::StringW  res, ::StringW  arg1, ::StringW  arg2, ::StringW  arg3) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlExceptionHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlExceptionHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlExceptionHelper(XmlExceptionHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlExceptionHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlExceptionHelper(XmlExceptionHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16978};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlExceptionHelper, 0x10>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::XmlExceptionHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlExceptionHelper*, "System.Xml", "XmlExceptionHelper");
