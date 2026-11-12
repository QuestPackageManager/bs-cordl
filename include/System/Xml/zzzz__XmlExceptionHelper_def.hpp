#pragma once
// IWYU pragma private; include "System/Xml/XmlExceptionHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::System::Xml::XmlExceptionHelper*);
DEFINE_IL2CPP_CLASS(::System::Xml::XmlExceptionHelper*, "System.Xml", "XmlExceptionHelper");
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlExceptionHelper
class CORDL_TYPE XmlExceptionHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateConversionException, addr 0x657f5b4, size 0x138, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlException* CreateConversionException(::StringW value, ::StringW type, ::System::Exception* exception);

  /// @brief Method CreateEncodingException, addr 0x6581c1c, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlException* CreateEncodingException(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::Exception* exception);

  /// @brief Method CreateEncodingException, addr 0x6581f24, size 0x10c, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlException* CreateEncodingException(::StringW value, ::System::Exception* exception);

  /// @brief Method GetName, addr 0x6594c40, size 0x84, virtual false, abstract: false, final false
  static inline ::StringW GetName(::StringW prefix, ::StringW localName);

  /// @brief Method GetWhatWasFound, addr 0x6594cc4, size 0x480, virtual false, abstract: false, final false
  static inline ::StringW GetWhatWasFound(::System::Xml::XmlDictionaryReader* reader);

  /// @brief Method ThrowBase64DataExpected, addr 0x6585294, size 0x58, virtual false, abstract: false, final false
  static inline void ThrowBase64DataExpected(::System::Xml::XmlDictionaryReader* reader);

  /// @brief Method ThrowConversionOverflow, addr 0x6587204, size 0x5c, virtual false, abstract: false, final false
  static inline void ThrowConversionOverflow(::System::Xml::XmlDictionaryReader* reader, ::StringW value, ::StringW type);

  /// @brief Method ThrowDeclarationNotFirst, addr 0x658fc34, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowDeclarationNotFirst(::System::Xml::XmlDictionaryReader* reader);

  /// @brief Method ThrowDuplicateAttribute, addr 0x6595554, size 0x84, virtual false, abstract: false, final false
  static inline void ThrowDuplicateAttribute(::System::Xml::XmlDictionaryReader* reader, ::StringW prefix1, ::StringW prefix2, ::StringW localName, ::StringW ns);

  /// @brief Method ThrowDuplicateXmlnsAttribute, addr 0x65954a0, size 0xb4, virtual false, abstract: false, final false
  static inline void ThrowDuplicateXmlnsAttribute(::System::Xml::XmlDictionaryReader* reader, ::StringW localName, ::StringW ns);

  /// @brief Method ThrowEmptyNamespace, addr 0x65957ec, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowEmptyNamespace(::System::Xml::XmlDictionaryReader* reader);

  /// @brief Method ThrowEndElementExpected, addr 0x6595144, size 0x64, virtual false, abstract: false, final false
  static inline void ThrowEndElementExpected(::System::Xml::XmlDictionaryReader* reader, ::StringW localName, ::StringW ns);

  /// @brief Method ThrowInvalidBinaryFormat, addr 0x65955d8, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowInvalidBinaryFormat(::System::Xml::XmlDictionaryReader* reader);

  /// @brief Method ThrowInvalidCharRef, addr 0x6595450, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowInvalidCharRef(::System::Xml::XmlDictionaryReader* reader);

  /// @brief Method ThrowInvalidRootData, addr 0x6592430, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowInvalidRootData(::System::Xml::XmlDictionaryReader* reader);

  /// @brief Method ThrowInvalidXml, addr 0x65914f4, size 0xb4, virtual false, abstract: false, final false
  static inline void ThrowInvalidXml(::System::Xml::XmlDictionaryReader* reader, uint8_t b);

  /// @brief Method ThrowMaxArrayLengthExceeded, addr 0x6585224, size 0x70, virtual false, abstract: false, final false
  static inline void ThrowMaxArrayLengthExceeded(::System::Xml::XmlDictionaryReader* reader, int32_t maxArrayLength);

  /// @brief Method ThrowMaxArrayLengthOrMaxItemsQuotaExceeded, addr 0x65951a8, size 0x70, virtual false, abstract: false, final false
  static inline void ThrowMaxArrayLengthOrMaxItemsQuotaExceeded(::System::Xml::XmlDictionaryReader* reader, int32_t maxQuota);

  /// @brief Method ThrowMaxBytesPerReadExceeded, addr 0x6590d08, size 0x70, virtual false, abstract: false, final false
  static inline void ThrowMaxBytesPerReadExceeded(::System::Xml::XmlDictionaryReader* reader, int32_t maxBytesPerRead);

  /// @brief Method ThrowMaxDepthExceeded, addr 0x6595218, size 0x70, virtual false, abstract: false, final false
  static inline void ThrowMaxDepthExceeded(::System::Xml::XmlDictionaryReader* reader, int32_t maxDepth);

  /// @brief Method ThrowMaxNameTableCharCountExceeded, addr 0x6595288, size 0x70, virtual false, abstract: false, final false
  static inline void ThrowMaxNameTableCharCountExceeded(::System::Xml::XmlDictionaryReader* reader, int32_t maxNameTableCharCount);

  /// @brief Method ThrowMaxStringContentLengthExceeded, addr 0x6585778, size 0x70, virtual false, abstract: false, final false
  static inline void ThrowMaxStringContentLengthExceeded(::System::Xml::XmlDictionaryReader* reader, int32_t maxStringContentLength);

  /// @brief Method ThrowMultipleRootElements, addr 0x6595628, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowMultipleRootElements(::System::Xml::XmlDictionaryReader* reader);

  /// @brief Method ThrowProcessingInstructionNotSupported, addr 0x658fbe4, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowProcessingInstructionNotSupported(::System::Xml::XmlDictionaryReader* reader);

  /// @brief Method ThrowStartElementExpected, addr 0x6584d4c, size 0x58, virtual false, abstract: false, final false
  static inline void ThrowStartElementExpected(::System::Xml::XmlDictionaryReader* reader);

  /// @brief Method ThrowTagMismatch, addr 0x65911ec, size 0x84, virtual false, abstract: false, final false
  static inline void ThrowTagMismatch(::System::Xml::XmlDictionaryReader* reader, ::StringW expectedPrefix, ::StringW expectedLocalName, ::StringW foundPrefix, ::StringW foundLocalName);

  /// @brief Method ThrowTokenExpected, addr 0x659026c, size 0x5c, virtual false, abstract: false, final false
  static inline void ThrowTokenExpected(::System::Xml::XmlDictionaryReader* reader, ::StringW expected, ::StringW found);

  /// @brief Method ThrowTokenExpected, addr 0x6590ae0, size 0x7c, virtual false, abstract: false, final false
  static inline void ThrowTokenExpected(::System::Xml::XmlDictionaryReader* reader, ::StringW expected, char16_t found);

  /// @brief Method ThrowUndefinedPrefix, addr 0x65952f8, size 0x58, virtual false, abstract: false, final false
  static inline void ThrowUndefinedPrefix(::System::Xml::XmlDictionaryReader* reader, ::StringW prefix);

  /// @brief Method ThrowUnexpectedEndElement, addr 0x6595400, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowUnexpectedEndElement(::System::Xml::XmlDictionaryReader* reader);

  /// @brief Method ThrowUnexpectedEndOfFile, addr 0x6595350, size 0xb0, virtual false, abstract: false, final false
  static inline void ThrowUnexpectedEndOfFile(::System::Xml::XmlDictionaryReader* reader);

  /// @brief Method ThrowXmlDictionaryStringIDOutOfRange, addr 0x6595678, size 0x94, virtual false, abstract: false, final false
  static inline void ThrowXmlDictionaryStringIDOutOfRange(::System::Xml::XmlDictionaryReader* reader);

  /// @brief Method ThrowXmlDictionaryStringIDUndefinedSession, addr 0x659577c, size 0x70, virtual false, abstract: false, final false
  static inline void ThrowXmlDictionaryStringIDUndefinedSession(::System::Xml::XmlDictionaryReader* reader, int32_t key);

  /// @brief Method ThrowXmlDictionaryStringIDUndefinedStatic, addr 0x659570c, size 0x70, virtual false, abstract: false, final false
  static inline void ThrowXmlDictionaryStringIDUndefinedStatic(::System::Xml::XmlDictionaryReader* reader, int32_t key);

  /// @brief Method ThrowXmlException, addr 0x65903b8, size 0x2cc, virtual false, abstract: false, final false
  static inline void ThrowXmlException(::System::Xml::XmlDictionaryReader* reader, ::System::Xml::XmlException* exception);

  /// @brief Method ThrowXmlException, addr 0x6594858, size 0x14, virtual false, abstract: false, final false
  static inline void ThrowXmlException(::System::Xml::XmlDictionaryReader* reader, ::StringW res);

  /// @brief Method ThrowXmlException, addr 0x659486c, size 0x10, virtual false, abstract: false, final false
  static inline void ThrowXmlException(::System::Xml::XmlDictionaryReader* reader, ::StringW res, ::StringW arg1);

  /// @brief Method ThrowXmlException, addr 0x659487c, size 0xc, virtual false, abstract: false, final false
  static inline void ThrowXmlException(::System::Xml::XmlDictionaryReader* reader, ::StringW res, ::StringW arg1, ::StringW arg2);

  /// @brief Method ThrowXmlException, addr 0x6594888, size 0x3b8, virtual false, abstract: false, final false
  static inline void ThrowXmlException(::System::Xml::XmlDictionaryReader* reader, ::StringW res, ::StringW arg1, ::StringW arg2, ::StringW arg3);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlExceptionHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlExceptionHelper", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlExceptionHelper(XmlExceptionHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlExceptionHelper", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlExceptionHelper(XmlExceptionHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16415 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::XmlExceptionHelper) == 0x10, "Size mismatch!");

} // namespace System::Xml
