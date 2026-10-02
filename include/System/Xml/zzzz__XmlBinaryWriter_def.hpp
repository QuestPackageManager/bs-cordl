#pragma once
// IWYU pragma private; include "System/Xml/XmlBinaryWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlBaseWriter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlBinaryWriter)
namespace System::IO {
class Stream;
}
namespace System::Xml {
class IXmlDictionary;
}
namespace System::Xml {
struct XmlBinaryNodeType;
}
namespace System::Xml {
class XmlBinaryNodeWriter;
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
// Forward declare root types
namespace System::Xml {
class XmlBinaryWriter;
}
// Write type traits
MARK_REF_T(::System::Xml::XmlBinaryWriter*);
DEFINE_IL2CPP_CLASS(::System::Xml::XmlBinaryWriter*, "System.Xml", "XmlBinaryWriter");
// Dependencies System.Xml.XmlBaseWriter
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlBinaryWriter
class CORDL_TYPE XmlBinaryWriter : public ::System::Xml::XmlBaseWriter {
public:
  // Declarations
  /// @brief Field bytes, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_bytes, put = __cordl_internal_set_bytes)) ::ArrayW<uint8_t> bytes;

  /// @brief Field chars, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_chars, put = __cordl_internal_set_chars)) ::ArrayW<char16_t> chars;

  /// @brief Field writer, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_writer, put = __cordl_internal_set_writer)) ::System::Xml::XmlBinaryNodeWriter* writer;

  /// @brief Method CheckArray, addr 0x653bcf0, size 0x234, virtual false, abstract: false, final false
  inline void CheckArray(::System::Array* array, int32_t offset, int32_t count);

  static inline ::System::Xml::XmlBinaryWriter* New_ctor();

  /// @brief Method SetOutput, addr 0x653b304, size 0x108, virtual true, abstract: false, final true
  inline void SetOutput(::System::IO::Stream* stream, ::System::Xml::IXmlDictionary* dictionary, ::System::Xml::XmlBinaryWriterSession* session, bool ownsStream);

  /// @brief Method UnsafeWriteArray, addr 0x653bc48, size 0x54, virtual false, abstract: false, final false
  inline void UnsafeWriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::System::Xml::XmlBinaryNodeType nodeType, int32_t count, uint8_t* array, uint8_t* arrayMax);

  /// @brief Method UnsafeWriteArray, addr 0x653bc9c, size 0x54, virtual false, abstract: false, final false
  inline void UnsafeWriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::System::Xml::XmlBinaryNodeType nodeType,
                               int32_t count, uint8_t* array, uint8_t* arrayMax);

  /// @brief Method WriteArray, addr 0x653cbdc, size 0xe0, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::DateTime> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x653ca0c, size 0xe8, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::Decimal> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x653cd9c, size 0xe0, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::Guid> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x653cf5c, size 0xe0, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::TimeSpan> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x653bf24, size 0xe8, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<bool> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x653c83c, size 0xe8, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<double_t> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x653c66c, size 0xe8, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<float_t> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x653c0f4, size 0xec, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<int16_t> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x653c2cc, size 0xe8, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<int32_t> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x653c49c, size 0xe8, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<int64_t> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x653ccbc, size 0xe0, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<::System::DateTime> array, int32_t offset,
                         int32_t count);

  /// @brief Method WriteArray, addr 0x653caf4, size 0xe8, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<::System::Decimal> array, int32_t offset,
                         int32_t count);

  /// @brief Method WriteArray, addr 0x653ce7c, size 0xe0, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<::System::Guid> array, int32_t offset,
                         int32_t count);

  /// @brief Method WriteArray, addr 0x653d03c, size 0xe0, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<::System::TimeSpan> array, int32_t offset,
                         int32_t count);

  /// @brief Method WriteArray, addr 0x653c00c, size 0xe8, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<bool> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x653c924, size 0xe8, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<double_t> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x653c754, size 0xe8, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<float_t> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x653c1e0, size 0xec, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<int16_t> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x653c3b4, size 0xe8, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<int32_t> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x653c584, size 0xe8, virtual true, abstract: false, final false
  inline void WriteArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<int64_t> array, int32_t offset, int32_t count);

  /// @brief Method WriteEndArray, addr 0x653bc44, size 0x4, virtual false, abstract: false, final false
  inline void WriteEndArray();

  /// @brief Method WriteStartArray, addr 0x653bb38, size 0x84, virtual false, abstract: false, final false
  inline void WriteStartArray(::StringW prefix, ::StringW localName, ::StringW namespaceUri, int32_t count);

  /// @brief Method WriteStartArray, addr 0x653bbbc, size 0x88, virtual false, abstract: false, final false
  inline void WriteStartArray(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, int32_t count);

  /// @brief Method WriteTextNode, addr 0x653b40c, size 0x72c, virtual true, abstract: false, final false
  inline void WriteTextNode(::System::Xml::XmlDictionaryReader* reader, bool attribute);

  constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_bytes() const;

  constexpr ::ArrayW<uint8_t>& __cordl_internal_get_bytes();

  constexpr ::ArrayW<char16_t> const& __cordl_internal_get_chars() const;

  constexpr ::ArrayW<char16_t>& __cordl_internal_get_chars();

  constexpr ::System::Xml::XmlBinaryNodeWriter* const& __cordl_internal_get_writer() const;

  constexpr ::System::Xml::XmlBinaryNodeWriter*& __cordl_internal_get_writer();

  constexpr void __cordl_internal_set_bytes(::ArrayW<uint8_t> value);

  constexpr void __cordl_internal_set_chars(::ArrayW<char16_t> value);

  constexpr void __cordl_internal_set_writer(::System::Xml::XmlBinaryNodeWriter* value);

  /// @brief Method .ctor, addr 0x653d11c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBinaryWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlBinaryWriter", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlBinaryWriter(XmlBinaryWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlBinaryWriter", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlBinaryWriter(XmlBinaryWriter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16345 };

  /// @brief Field writer, offset: 0x98, size: 0x8, def value: None
  ::System::Xml::XmlBinaryNodeWriter* ___writer;

  /// @brief Field chars, offset: 0xa0, size: 0x8, def value: None
  ::ArrayW<char16_t> ___chars;

  /// @brief Field bytes, offset: 0xa8, size: 0x8, def value: None
  ::ArrayW<uint8_t> ___bytes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlBinaryWriter, ___writer) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBinaryWriter, ___chars) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBinaryWriter, ___bytes) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::System::Xml::XmlBinaryWriter) == 0xb0, "Size mismatch!");

} // namespace System::Xml
