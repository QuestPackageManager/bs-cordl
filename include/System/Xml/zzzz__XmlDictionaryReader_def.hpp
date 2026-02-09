#pragma once
// IWYU pragma private; include "System/Xml/XmlDictionaryReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlDictionaryReader)
namespace GlobalNamespace {
class XmlDictionaryReader_XmlWrappedReader;
}
namespace System::IO {
class Stream;
}
namespace System::Text {
class Encoding;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
class OnXmlDictionaryReaderClose;
}
namespace System::Xml {
class UniqueId;
}
namespace System::Xml {
class XmlDictionaryReaderQuotas;
}
namespace System::Xml {
class XmlDictionaryString;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlReader;
}
namespace System {
class Array;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml {
class XmlDictionaryReader;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlDictionaryReader);
// Dependencies System.Xml.XmlReader
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlDictionaryReader
class CORDL_TYPE XmlDictionaryReader : public ::System::Xml::XmlReader {
public:
// Declarations
using XmlWrappedReader = ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader;

 __declspec(property(get=get_Quotas)) ::System::Xml::XmlDictionaryReaderQuotas*  Quotas;

/// @brief Method CheckArray, addr 0x5f6e038, size 0x234, virtual false, abstract: false, final false
inline void CheckArray(::System::Array*  array, int32_t  offset, int32_t  count) ;

/// @brief Method CreateDictionaryReader, addr 0x5f6c030, size 0xd8, virtual false, abstract: false, final false
static inline ::System::Xml::XmlDictionaryReader* CreateDictionaryReader(::System::Xml::XmlReader*  reader) ;

/// @brief Method CreateTextReader, addr 0x5f6c140, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Xml::XmlDictionaryReader* CreateTextReader(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding, ::System::Xml::XmlDictionaryReaderQuotas*  quotas, ::System::Xml::OnXmlDictionaryReaderClose*  onClose) ;

/// @brief Method CreateTextReader, addr 0x5f6c130, size 0x10, virtual false, abstract: false, final false
static inline ::System::Xml::XmlDictionaryReader* CreateTextReader(::System::IO::Stream*  stream, ::System::Xml::XmlDictionaryReaderQuotas*  quotas) ;

/// @brief Method IndexOfLocalName, addr 0x5f6c454, size 0x144, virtual true, abstract: false, final false
inline int32_t IndexOfLocalName(::ArrayW<::System::Xml::XmlDictionaryString*,::Array<::System::Xml::XmlDictionaryString*>*>  localNames, ::System::Xml::XmlDictionaryString*  namespaceUri) ;

/// @brief Method IsLocalName, addr 0x5f6c2a0, size 0x24, virtual true, abstract: false, final false
inline bool IsLocalName(::StringW  localName) ;

/// @brief Method IsLocalName, addr 0x5f6c2c4, size 0x4c, virtual true, abstract: false, final false
inline bool IsLocalName(::System::Xml::XmlDictionaryString*  localName) ;

/// @brief Method IsNamespaceUri, addr 0x5f6c310, size 0x54, virtual true, abstract: false, final false
inline bool IsNamespaceUri(::StringW  namespaceUri) ;

/// @brief Method IsNamespaceUri, addr 0x5f6c364, size 0x4c, virtual true, abstract: false, final false
inline bool IsNamespaceUri(::System::Xml::XmlDictionaryString*  namespaceUri) ;

/// @brief Method IsStartArray, addr 0x5f6e26c, size 0xc, virtual true, abstract: false, final false
inline bool IsStartArray(::ByRef<::System::Type*>  type) ;

/// @brief Method IsStartElement, addr 0x5f6c3b0, size 0x98, virtual true, abstract: false, final false
inline bool IsStartElement(::System::Xml::XmlDictionaryString*  localName, ::System::Xml::XmlDictionaryString*  namespaceUri) ;

/// @brief Method IsTextNode, addr 0x5f6ce2c, size 0x18, virtual false, abstract: false, final false
inline bool IsTextNode(::System::Xml::XmlNodeType  nodeType) ;

/// @brief Method MoveToStartElement, addr 0x5f6c270, size 0x30, virtual true, abstract: false, final false
inline void MoveToStartElement() ;

static inline ::System::Xml::XmlDictionaryReader* New_ctor() ;

/// @brief Method ReadArray, addr 0x5f6eeb4, size 0xe8, virtual true, abstract: false, final false
inline int32_t ReadArray(::StringW  localName, ::StringW  namespaceUri, ::ArrayW<::System::DateTime,::Array<::System::DateTime>*>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0x5f6ed0c, size 0xe8, virtual true, abstract: false, final false
inline int32_t ReadArray(::StringW  localName, ::StringW  namespaceUri, ::ArrayW<::System::Decimal,::Array<::System::Decimal>*>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0x5f6f05c, size 0xe8, virtual true, abstract: false, final false
inline int32_t ReadArray(::StringW  localName, ::StringW  namespaceUri, ::ArrayW<::System::Guid,::Array<::System::Guid>*>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0x5f6f204, size 0xe8, virtual true, abstract: false, final false
inline int32_t ReadArray(::StringW  localName, ::StringW  namespaceUri, ::ArrayW<::System::TimeSpan,::Array<::System::TimeSpan>*>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0x5f6e284, size 0xec, virtual true, abstract: false, final false
inline int32_t ReadArray(::StringW  localName, ::StringW  namespaceUri, ::ArrayW<bool,::Array<bool>*>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0x5f6eb64, size 0xe8, virtual true, abstract: false, final false
inline int32_t ReadArray(::StringW  localName, ::StringW  namespaceUri, ::ArrayW<double_t,::Array<double_t>*>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0x5f6e9bc, size 0xe8, virtual true, abstract: false, final false
inline int32_t ReadArray(::StringW  localName, ::StringW  namespaceUri, ::ArrayW<float_t,::Array<float_t>*>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0x5f6e430, size 0x17c, virtual true, abstract: false, final false
inline int32_t ReadArray(::StringW  localName, ::StringW  namespaceUri, ::ArrayW<int16_t,::Array<int16_t>*>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0x5f6e66c, size 0xe8, virtual true, abstract: false, final false
inline int32_t ReadArray(::StringW  localName, ::StringW  namespaceUri, ::ArrayW<int32_t,::Array<int32_t>*>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0x5f6e814, size 0xe8, virtual true, abstract: false, final false
inline int32_t ReadArray(::StringW  localName, ::StringW  namespaceUri, ::ArrayW<int64_t,::Array<int64_t>*>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0x5f6ef9c, size 0xc0, virtual true, abstract: false, final false
inline int32_t ReadArray(::System::Xml::XmlDictionaryString*  localName, ::System::Xml::XmlDictionaryString*  namespaceUri, ::ArrayW<::System::DateTime,::Array<::System::DateTime>*>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0x5f6edf4, size 0xc0, virtual true, abstract: false, final false
inline int32_t ReadArray(::System::Xml::XmlDictionaryString*  localName, ::System::Xml::XmlDictionaryString*  namespaceUri, ::ArrayW<::System::Decimal,::Array<::System::Decimal>*>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0x5f6f144, size 0xc0, virtual true, abstract: false, final false
inline int32_t ReadArray(::System::Xml::XmlDictionaryString*  localName, ::System::Xml::XmlDictionaryString*  namespaceUri, ::ArrayW<::System::Guid,::Array<::System::Guid>*>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0x5f6f2ec, size 0xc0, virtual true, abstract: false, final false
inline int32_t ReadArray(::System::Xml::XmlDictionaryString*  localName, ::System::Xml::XmlDictionaryString*  namespaceUri, ::ArrayW<::System::TimeSpan,::Array<::System::TimeSpan>*>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0x5f6e370, size 0xc0, virtual true, abstract: false, final false
inline int32_t ReadArray(::System::Xml::XmlDictionaryString*  localName, ::System::Xml::XmlDictionaryString*  namespaceUri, ::ArrayW<bool,::Array<bool>*>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0x5f6ec4c, size 0xc0, virtual true, abstract: false, final false
inline int32_t ReadArray(::System::Xml::XmlDictionaryString*  localName, ::System::Xml::XmlDictionaryString*  namespaceUri, ::ArrayW<double_t,::Array<double_t>*>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0x5f6eaa4, size 0xc0, virtual true, abstract: false, final false
inline int32_t ReadArray(::System::Xml::XmlDictionaryString*  localName, ::System::Xml::XmlDictionaryString*  namespaceUri, ::ArrayW<float_t,::Array<float_t>*>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0x5f6e5ac, size 0xc0, virtual true, abstract: false, final false
inline int32_t ReadArray(::System::Xml::XmlDictionaryString*  localName, ::System::Xml::XmlDictionaryString*  namespaceUri, ::ArrayW<int16_t,::Array<int16_t>*>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0x5f6e754, size 0xc0, virtual true, abstract: false, final false
inline int32_t ReadArray(::System::Xml::XmlDictionaryString*  localName, ::System::Xml::XmlDictionaryString*  namespaceUri, ::ArrayW<int32_t,::Array<int32_t>*>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0x5f6e8fc, size 0xc0, virtual true, abstract: false, final false
inline int32_t ReadArray(::System::Xml::XmlDictionaryString*  localName, ::System::Xml::XmlDictionaryString*  namespaceUri, ::ArrayW<int64_t,::Array<int64_t>*>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadContentAs, addr 0x5f6cf14, size 0x350, virtual true, abstract: false, final false
inline ::System::Object* ReadContentAs(::System::Type*  type, ::System::Xml::IXmlNamespaceResolver*  namespaceResolver) ;

/// @brief Method ReadContentAsBase64, addr 0x5f6c5a4, size 0x34, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> ReadContentAsBase64() ;

/// @brief Method ReadContentAsBase64, addr 0x5f6c5d8, size 0x118, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> ReadContentAsBase64(int32_t  maxByteArrayContentLength, int32_t  maxInitialCount) ;

/// @brief Method ReadContentAsBytes, addr 0x5f6c6f0, size 0x240, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> ReadContentAsBytes(bool  base64, int32_t  maxByteArrayContentLength) ;

/// @brief Method ReadContentAsChars, addr 0x5f6ce44, size 0xd0, virtual true, abstract: false, final false
inline int32_t ReadContentAsChars(::ArrayW<char16_t,::Array<char16_t>*>  chars, int32_t  offset, int32_t  count) ;

/// @brief Method ReadContentAsDecimal, addr 0x5f6d264, size 0x74, virtual true, abstract: false, final false
inline ::System::Decimal ReadContentAsDecimal() ;

/// @brief Method ReadContentAsFloat, addr 0x5f6d2d8, size 0x74, virtual true, abstract: false, final false
inline float_t ReadContentAsFloat() ;

/// @brief Method ReadContentAsGuid, addr 0x5f6d3c0, size 0x74, virtual true, abstract: false, final false
inline ::System::Guid ReadContentAsGuid() ;

/// @brief Method ReadContentAsString, addr 0x5f6c930, size 0x30, virtual true, abstract: false, final false
inline ::StringW ReadContentAsString() ;

/// @brief Method ReadContentAsString, addr 0x5f6c960, size 0x224, virtual false, abstract: false, final false
inline ::StringW ReadContentAsString(int32_t  maxStringContentLength) ;

/// @brief Method ReadContentAsTimeSpan, addr 0x5f6d434, size 0x74, virtual true, abstract: false, final false
inline ::System::TimeSpan ReadContentAsTimeSpan() ;

/// @brief Method ReadContentAsUniqueId, addr 0x5f6d34c, size 0x74, virtual true, abstract: false, final false
inline ::System::Xml::UniqueId* ReadContentAsUniqueId() ;

/// @brief Method ReadElementContentAsBase64, addr 0x5f6df34, size 0xe0, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> ReadElementContentAsBase64() ;

/// @brief Method ReadElementContentAsBoolean, addr 0x5f6d558, size 0xfc, virtual true, abstract: false, final false
inline bool ReadElementContentAsBoolean() ;

/// @brief Method ReadElementContentAsDateTime, addr 0x5f6db64, size 0x1ec, virtual true, abstract: false, final false
inline ::System::DateTime ReadElementContentAsDateTime() ;

/// @brief Method ReadElementContentAsDecimal, addr 0x5f6da5c, size 0x108, virtual true, abstract: false, final false
inline ::System::Decimal ReadElementContentAsDecimal() ;

/// @brief Method ReadElementContentAsDouble, addr 0x5f6d954, size 0x108, virtual true, abstract: false, final false
inline double_t ReadElementContentAsDouble() ;

/// @brief Method ReadElementContentAsFloat, addr 0x5f6d84c, size 0x108, virtual true, abstract: false, final false
inline float_t ReadElementContentAsFloat() ;

/// @brief Method ReadElementContentAsGuid, addr 0x5f6dd50, size 0xe8, virtual true, abstract: false, final false
inline ::System::Guid ReadElementContentAsGuid() ;

/// @brief Method ReadElementContentAsInt, addr 0x5f6d654, size 0xfc, virtual true, abstract: false, final false
inline int32_t ReadElementContentAsInt() ;

/// @brief Method ReadElementContentAsLong, addr 0x5f6d750, size 0xfc, virtual true, abstract: false, final false
inline int64_t ReadElementContentAsLong() ;

/// @brief Method ReadElementContentAsString, addr 0x5f6d4a8, size 0xb0, virtual true, abstract: false, final false
inline ::StringW ReadElementContentAsString() ;

/// @brief Method ReadElementContentAsTimeSpan, addr 0x5f6de38, size 0xfc, virtual true, abstract: false, final false
inline ::System::TimeSpan ReadElementContentAsTimeSpan() ;

/// @brief Method ReadString, addr 0x5f6cb84, size 0x30, virtual true, abstract: false, final false
inline ::StringW ReadString() ;

/// @brief Method ReadString, addr 0x5f6cbb4, size 0x278, virtual false, abstract: false, final false
inline ::StringW ReadString(int32_t  maxStringContentLength) ;

/// @brief Method TryGetArrayLength, addr 0x5f6e278, size 0xc, virtual true, abstract: false, final false
inline bool TryGetArrayLength(::ByRef<int32_t>  count) ;

/// @brief Method TryGetBase64ContentLength, addr 0x5f6c598, size 0xc, virtual true, abstract: false, final false
inline bool TryGetBase64ContentLength(::ByRef<int32_t>  length) ;

/// @brief Method TryGetLocalNameAsDictionaryString, addr 0x5f6e014, size 0xc, virtual true, abstract: false, final false
inline bool TryGetLocalNameAsDictionaryString(::ByRef<::System::Xml::XmlDictionaryString*>  localName) ;

/// @brief Method TryGetNamespaceUriAsDictionaryString, addr 0x5f6e020, size 0xc, virtual true, abstract: false, final false
inline bool TryGetNamespaceUriAsDictionaryString(::ByRef<::System::Xml::XmlDictionaryString*>  namespaceUri) ;

/// @brief Method TryGetValueAsDictionaryString, addr 0x5f6e02c, size 0xc, virtual true, abstract: false, final false
inline bool TryGetValueAsDictionaryString(::ByRef<::System::Xml::XmlDictionaryString*>  value) ;

/// @brief Method .ctor, addr 0x5f6f3ac, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Quotas, addr 0x5f6c1dc, size 0x94, virtual true, abstract: false, final false
inline ::System::Xml::XmlDictionaryReaderQuotas* get_Quotas() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlDictionaryReader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlDictionaryReader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlDictionaryReader(XmlDictionaryReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlDictionaryReader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlDictionaryReader(XmlDictionaryReader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16955};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlDictionaryReader, 0x10>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::XmlDictionaryReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlDictionaryReader*, "System.Xml", "XmlDictionaryReader");
