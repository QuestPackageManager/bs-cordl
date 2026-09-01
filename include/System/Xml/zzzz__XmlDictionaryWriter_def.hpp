#pragma once
// IWYU pragma private; include "System\Xml\XmlDictionaryWriter.hpp"
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

  /// @brief Method CheckArray, addr 0x61265d0, size 0x234, virtual false, abstract: false, final false
  inline void CheckArray(::System::Array* array, int32_t offset, int32_t count);

  /// @brief Method CreateDictionaryWriter, addr 0x6124690, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlDictionaryWriter* CreateDictionaryWriter(::System::Xml::XmlWriter* writer);

  /// @brief Method CreateTextWriter, addr 0x6124604, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlDictionaryWriter* CreateTextWriter(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool ownsStream);

  static inline ::System::Xml::XmlDictionaryWriter* New_ctor();

  /// @brief Method WriteArray, addr 0x612739c, size 0xe0, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::DateTime> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x61271f4, size 0xe0, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::Decimal> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x6127544, size 0xe0, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::Guid> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x61276ec, size 0xe0, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::TimeSpan> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x6126804, size 0xe0, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<bool> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x612704c, size 0xe0, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<double_t> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x6126ea4, size 0xe0, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<float_t> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x61269ac, size 0xe0, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<int16_t> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x6126b54, size 0xe0, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<int32_t> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x6126cfc, size 0xe0, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<int64_t> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x612747c, size 0xc8, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<::System::DateTime> array, int32_t offset,
                         int32_t count);

  /// @brief Method WriteArray, addr 0x61272d4, size 0xc8, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<::System::Decimal> array, int32_t offset,
                         int32_t count);

  /// @brief Method WriteArray, addr 0x6127624, size 0xc8, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<::System::Guid> array, int32_t offset,
                         int32_t count);

  /// @brief Method WriteArray, addr 0x61277cc, size 0xc8, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<::System::TimeSpan> array, int32_t offset,
                         int32_t count);

  /// @brief Method WriteArray, addr 0x61268e4, size 0xc8, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<bool> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x612712c, size 0xc8, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<double_t> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x6126f84, size 0xc8, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<float_t> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x6126a8c, size 0xc8, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<int16_t> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x6126c34, size 0xc8, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<int32_t> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x6126ddc, size 0xc8, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<int64_t> array, int32_t offset, int32_t count);

  /// @brief Method WriteArrayNode, addr 0x6125080, size 0x7a4, virtual false, abstract: false, final false
  inline void WriteArrayNode(::System::Xml::XmlDictionaryReader* reader, ::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::System::Type* type);

  /// @brief Method WriteArrayNode, addr 0x6125824, size 0x7a4, virtual false, abstract: false, final false
  inline void WriteArrayNode(::System::Xml::XmlDictionaryReader* reader, ::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri,
                             ::System::Type* type);

  /// @brief Method WriteArrayNode, addr 0x6125fc8, size 0xf4, virtual false, abstract: false, final false
  inline void WriteArrayNode(::System::Xml::XmlDictionaryReader* reader, ::System::Type* type);

  /// @brief Method WriteElementNode, addr 0x6124cf8, size 0x388, virtual false, abstract: false, final false
  inline void WriteElementNode(::System::Xml::XmlDictionaryReader* reader, bool defattr);

  /// @brief Method WriteNode, addr 0x612621c, size 0x3b4, virtual true, abstract: false, final false
  inline void WriteNode(::System::Xml::XmlDictionaryReader* reader, bool defattr);

  /// @brief Method WriteNode, addr 0x6126160, size 0xbc, virtual true, abstract: false, final false
  inline void WriteNode(::System::Xml::XmlReader* reader, bool defattr);

  /// @brief Method WriteQualifiedName, addr 0x6124b3c, size 0xdc, virtual true, abstract: false, final false
  inline void WriteQualifiedName(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri);

  /// @brief Method WriteStartAttribute, addr 0x6124814, size 0xa4, virtual true, abstract: false, final false
  inline void WriteStartAttribute(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri);

  /// @brief Method WriteStartElement, addr 0x6124770, size 0xa4, virtual true, abstract: false, final false
  inline void WriteStartElement(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri);

  /// @brief Method WriteString, addr 0x6124ab8, size 0x84, virtual true, abstract: false, final false
  inline void WriteString(::System::Xml::XmlDictionaryString* value);

  /// @brief Method WriteTextNode, addr 0x61260bc, size 0xa4, virtual true, abstract: false, final false
  inline void WriteTextNode(::System::Xml::XmlDictionaryReader* reader, bool isAttribute);

  /// @brief Method WriteValue, addr 0x6124c18, size 0x3c, virtual true, abstract: false, final false
  inline void WriteValue(::System::Guid value);

  /// @brief Method WriteValue, addr 0x6124c54, size 0xa4, virtual true, abstract: false, final false
  inline void WriteValue(::System::TimeSpan value);

  /// @brief Method WriteXmlnsAttribute, addr 0x61248b8, size 0x174, virtual true, abstract: false, final false
  inline void WriteXmlnsAttribute(::StringW prefix, ::StringW namespaceUri);

  /// @brief Method WriteXmlnsAttribute, addr 0x6124a2c, size 0x8c, virtual true, abstract: false, final false
  inline void WriteXmlnsAttribute(::StringW prefix, ::System::Xml::XmlDictionaryString* namespaceUri);

  /// @brief Method .ctor, addr 0x6127894, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlDictionaryWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlDictionaryWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlDictionaryWriter(XmlDictionaryWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlDictionaryWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlDictionaryWriter(XmlDictionaryWriter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16989 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::XmlDictionaryWriter) == 0x18, "Size mismatch!");

} // namespace System::Xml
