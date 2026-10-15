#pragma once
// IWYU pragma private; include "System/Xml/XmlDictionaryWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlDictionaryWriter)
namespace GlobalNamespace {
class XmlDictionaryWriter_XmlWrappedWriter;
}
namespace System::IO {
class Stream;
}
namespace System::Text {
class Encoding;
}
namespace System::Xml {
class IStreamProvider;
}
namespace System::Xml {
class IXmlDictionary;
}
namespace System::Xml {
class UniqueId;
}
namespace System::Xml {
class XmlBinaryWriterSession;
}
namespace System::Xml {
class XmlDictionaryReader;
}
namespace System::Xml {
class XmlDictionaryString;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class XmlWriter;
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
struct TimeSpan;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml {
class XmlDictionaryWriter;
}
// Write type traits
MARK_REF_T(::System::Xml::XmlDictionaryWriter*);
DEFINE_IL2CPP_CLASS(::System::Xml::XmlDictionaryWriter*, "System.Xml", "XmlDictionaryWriter");
// Dependencies System.Xml.XmlWriter
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlDictionaryWriter
class CORDL_TYPE XmlDictionaryWriter : public ::System::Xml::XmlWriter {
public:
  // Declarations
  using XmlWrappedWriter = ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter;

  /// @brief Method CheckArray, addr 0x658ae14, size 0x234, virtual false, abstract: false, final false
  inline void CheckArray(::System::Array* array, int32_t offset, int32_t count);

  /// @brief Method CreateBinaryWriter, addr 0x6588858, size 0x10, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlDictionaryWriter* CreateBinaryWriter(::System::IO::Stream* stream);

  /// @brief Method CreateBinaryWriter, addr 0x6588868, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlDictionaryWriter* CreateBinaryWriter(::System::IO::Stream* stream, ::System::Xml::IXmlDictionary* dictionary);

  /// @brief Method CreateBinaryWriter, addr 0x6588874, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlDictionaryWriter* CreateBinaryWriter(::System::IO::Stream* stream, ::System::Xml::IXmlDictionary* dictionary, ::System::Xml::XmlBinaryWriterSession* session);

  /// @brief Method CreateBinaryWriter, addr 0x658887c, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlDictionaryWriter* CreateBinaryWriter(::System::IO::Stream* stream, ::System::Xml::IXmlDictionary* dictionary, ::System::Xml::XmlBinaryWriterSession* session,
                                                                       bool ownsStream);

  /// @brief Method CreateDictionaryWriter, addr 0x6588b58, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlDictionaryWriter* CreateDictionaryWriter(::System::Xml::XmlWriter* writer);

  /// @brief Method CreateTextWriter, addr 0x6588918, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlDictionaryWriter* CreateTextWriter(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool ownsStream);

  static inline ::System::Xml::XmlDictionaryWriter* New_ctor();

  /// @brief Method WriteArray, addr 0x658bbe0, size 0xe0, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::DateTime> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x658ba38, size 0xe0, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::Decimal> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x658bd88, size 0xe0, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::Guid> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x658bf30, size 0xe0, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::TimeSpan> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x658b048, size 0xe0, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<bool> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x658b890, size 0xe0, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<double_t> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x658b6e8, size 0xe0, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<float_t> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x658b1f0, size 0xe0, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<int16_t> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x658b398, size 0xe0, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<int32_t> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x658b540, size 0xe0, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<int64_t> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x658bcc0, size 0xc8, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<::System::DateTime> array, int32_t offset,
                         int32_t count);

  /// @brief Method WriteArray, addr 0x658bb18, size 0xc8, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<::System::Decimal> array, int32_t offset,
                         int32_t count);

  /// @brief Method WriteArray, addr 0x658be68, size 0xc8, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<::System::Guid> array, int32_t offset,
                         int32_t count);

  /// @brief Method WriteArray, addr 0x658c010, size 0xc8, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<::System::TimeSpan> array, int32_t offset,
                         int32_t count);

  /// @brief Method WriteArray, addr 0x658b128, size 0xc8, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<bool> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x658b970, size 0xc8, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<double_t> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x658b7c8, size 0xc8, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<float_t> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x658b2d0, size 0xc8, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<int16_t> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x658b478, size 0xc8, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<int32_t> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x658b620, size 0xc8, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<int64_t> array, int32_t offset, int32_t count);

  /// @brief Method WriteArrayNode, addr 0x65898c4, size 0x7a4, virtual false, abstract: false, final false
  inline void WriteArrayNode(::System::Xml::XmlDictionaryReader* reader, ::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::System::Type* type);

  /// @brief Method WriteArrayNode, addr 0x658a068, size 0x7a4, virtual false, abstract: false, final false
  inline void WriteArrayNode(::System::Xml::XmlDictionaryReader* reader, ::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri,
                             ::System::Type* type);

  /// @brief Method WriteArrayNode, addr 0x658a80c, size 0xf4, virtual false, abstract: false, final false
  inline void WriteArrayNode(::System::Xml::XmlDictionaryReader* reader, ::System::Type* type);

  /// @brief Method WriteElementNode, addr 0x658953c, size 0x388, virtual false, abstract: false, final false
  inline void WriteElementNode(::System::Xml::XmlDictionaryReader* reader, bool defattr);

  /// @brief Method WriteNode, addr 0x658aa60, size 0x3b4, virtual true, abstract: false, final false
  inline void WriteNode(::System::Xml::XmlDictionaryReader* reader, bool defattr);

  /// @brief Method WriteNode, addr 0x658a9a4, size 0xbc, virtual true, abstract: false, final false
  inline void WriteNode(::System::Xml::XmlReader* reader, bool defattr);

  /// @brief Method WriteQualifiedName, addr 0x6589004, size 0xdc, virtual true, abstract: false, final false
  inline void WriteQualifiedName(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri);

  /// @brief Method WriteStartAttribute, addr 0x6588cdc, size 0xa4, virtual true, abstract: false, final false
  inline void WriteStartAttribute(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri);

  /// @brief Method WriteStartElement, addr 0x6588c38, size 0xa4, virtual true, abstract: false, final false
  inline void WriteStartElement(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri);

  /// @brief Method WriteString, addr 0x6588f80, size 0x84, virtual true, abstract: false, final false
  inline void WriteString(::System::Xml::XmlDictionaryString* value);

  /// @brief Method WriteTextNode, addr 0x658a900, size 0xa4, virtual true, abstract: false, final false
  inline void WriteTextNode(::System::Xml::XmlDictionaryReader* reader, bool isAttribute);

  /// @brief Method WriteValue, addr 0x658945c, size 0x3c, virtual true, abstract: false, final false
  inline void WriteValue(::System::Guid value);

  /// @brief Method WriteValue, addr 0x6589498, size 0xa4, virtual true, abstract: false, final false
  inline void WriteValue(::System::TimeSpan value);

  /// @brief Method WriteValue, addr 0x6589164, size 0x240, virtual true, abstract: false, final false
  inline void WriteValue(::System::Xml::IStreamProvider* value);

  /// @brief Method WriteValue, addr 0x65893a4, size 0xb8, virtual true, abstract: false, final false
  inline void WriteValue(::System::Xml::UniqueId* value);

  /// @brief Method WriteValue, addr 0x65890e0, size 0x84, virtual true, abstract: false, final false
  inline void WriteValue(::System::Xml::XmlDictionaryString* value);

  /// @brief Method WriteXmlnsAttribute, addr 0x6588d80, size 0x174, virtual true, abstract: false, final false
  inline void WriteXmlnsAttribute(::StringW prefix, ::StringW namespaceUri);

  /// @brief Method WriteXmlnsAttribute, addr 0x6588ef4, size 0x8c, virtual true, abstract: false, final false
  inline void WriteXmlnsAttribute(::StringW prefix, ::System::Xml::XmlDictionaryString* namespaceUri);

  /// @brief Method .ctor, addr 0x658c0d8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlDictionaryWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlDictionaryWriter", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlDictionaryWriter(XmlDictionaryWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlDictionaryWriter", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlDictionaryWriter(XmlDictionaryWriter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16400 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::XmlDictionaryWriter) == 0x18, "Size mismatch!");

} // namespace System::Xml
