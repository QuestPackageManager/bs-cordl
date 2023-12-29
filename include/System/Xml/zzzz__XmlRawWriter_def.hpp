#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlRawWriter)
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
struct WriteState;
}
namespace System::Xml {
class XmlRawWriterBase64Encoder;
}
namespace System::Xml {
struct ConformanceLevel;
}
namespace System::Xml {
struct XmlStandalone;
}
// Forward declare root types
namespace System::Xml {
class XmlRawWriter;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlRawWriter);
// Type: System.Xml::XmlRawWriter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11419))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11383))
// CS Name: ::System.Xml::XmlRawWriter*
class CORDL_TYPE XmlRawWriter : public ::System::Xml::XmlWriter {
public:
  // Declarations
  /// @brief Field base64Encoder, offset 0x10, size 0x8
  __declspec(property(get = __get_base64Encoder, put = __set_base64Encoder))::System::Xml::XmlRawWriterBase64Encoder* base64Encoder;

  /// @brief Field resolver, offset 0x18, size 0x8
  __declspec(property(get = __get_resolver, put = __set_resolver))::System::Xml::IXmlNamespaceResolver* resolver;

  __declspec(property(get = get_WriteState))::System::Xml::WriteState WriteState;

  __declspec(property(put = set_NamespaceResolver))::System::Xml::IXmlNamespaceResolver* NamespaceResolver;

  __declspec(property(get = get_SupportsNamespaceDeclarationInChunks)) bool SupportsNamespaceDeclarationInChunks;

  constexpr ::System::Xml::XmlRawWriterBase64Encoder*& __get_base64Encoder();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlRawWriterBase64Encoder*> const& __get_base64Encoder() const;

  constexpr void __set_base64Encoder(::System::Xml::XmlRawWriterBase64Encoder* value);

  constexpr ::System::Xml::IXmlNamespaceResolver*& __get_resolver();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::IXmlNamespaceResolver*> const& __get_resolver() const;

  constexpr void __set_resolver(::System::Xml::IXmlNamespaceResolver* value);

  /// @brief Method WriteStartDocument addr 0x26dd8a8 size 0x60 virtual true final false
  inline void WriteStartDocument();

  /// @brief Method WriteStartDocument addr 0x26dd908 size 0x60 virtual true final false
  inline void WriteStartDocument(bool standalone);

  /// @brief Method WriteEndDocument addr 0x26dd968 size 0x60 virtual true final false
  inline void WriteEndDocument();

  /// @brief Method WriteDocType addr 0x26dd9c8 size 0x4 virtual true final false
  inline void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);

  /// @brief Method WriteEndElement addr 0x26dd9cc size 0x60 virtual true final false
  inline void WriteEndElement();

  /// @brief Method WriteFullEndElement addr 0x26dda2c size 0x60 virtual true final false
  inline void WriteFullEndElement();

  /// @brief Method WriteBase64 addr 0x26dcc08 size 0x8c virtual true final false
  inline void WriteBase64(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method LookupPrefix addr 0x26dda8c size 0x60 virtual true final false
  inline ::StringW LookupPrefix(::StringW ns);

  /// @brief Method get_WriteState addr 0x26ddaec size 0x60 virtual true final false
  inline ::System::Xml::WriteState get_WriteState();

  /// @brief Method WriteCData addr 0x26ddb4c size 0x10 virtual true final false
  inline void WriteCData(::StringW text);

  /// @brief Method WriteCharEntity addr 0x26ddb5c size 0x94 virtual true final false
  inline void WriteCharEntity(char16_t ch);

  /// @brief Method WriteSurrogateCharEntity addr 0x26ddbf0 size 0xa4 virtual true final false
  inline void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar);

  /// @brief Method WriteWhitespace addr 0x26ddc94 size 0x10 virtual true final false
  inline void WriteWhitespace(::StringW ws);

  /// @brief Method WriteChars addr 0x26ddca4 size 0x30 virtual true final false
  inline void WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw addr 0x26ddcd4 size 0x30 virtual true final false
  inline void WriteRaw(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw addr 0x26ddd04 size 0x10 virtual true final false
  inline void WriteRaw(::StringW data);

  /// @brief Method WriteValue addr 0x26ddd14 size 0x10 virtual true final false
  inline void WriteValue(::StringW value);

  /// @brief Method set_NamespaceResolver addr 0x26ddd24 size 0x8 virtual true final false
  inline void set_NamespaceResolver(::System::Xml::IXmlNamespaceResolver* value);

  /// @brief Method WriteXmlDeclaration addr 0x26ddd2c size 0x4 virtual true final false
  inline void WriteXmlDeclaration(::System::Xml::XmlStandalone standalone);

  /// @brief Method WriteXmlDeclaration addr 0x26ddd30 size 0x4 virtual true final false
  inline void WriteXmlDeclaration(::StringW xmldecl);

  /// @brief Method StartElementContent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void StartElementContent();

  /// @brief Method OnRootElement addr 0x26ddd34 size 0x4 virtual true final false
  inline void OnRootElement(::System::Xml::ConformanceLevel conformanceLevel);

  /// @brief Method WriteEndElement addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteFullEndElement addr 0x26ddd38 size 0x10 virtual true final false
  inline void WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteNamespaceDeclaration addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void WriteNamespaceDeclaration(::StringW prefix, ::StringW ns);

  /// @brief Method get_SupportsNamespaceDeclarationInChunks addr 0x26ddd48 size 0x8 virtual true final false
  inline bool get_SupportsNamespaceDeclarationInChunks();

  /// @brief Method WriteStartNamespaceDeclaration addr 0x26ddd50 size 0x40 virtual true final false
  inline void WriteStartNamespaceDeclaration(::StringW prefix);

  /// @brief Method WriteEndNamespaceDeclaration addr 0x26ddd90 size 0x40 virtual true final false
  inline void WriteEndNamespaceDeclaration();

  /// @brief Method WriteEndBase64 addr 0x26dddd0 size 0x18 virtual true final false
  inline void WriteEndBase64();

  /// @brief Method Close addr 0x26ddde8 size 0x10 virtual true final false
  inline void Close(::System::Xml::WriteState currentState);

  static inline ::System::Xml::XmlRawWriter* New_ctor();

  /// @brief Method .ctor addr 0x26d7d8c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "XmlRawWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlRawWriter(XmlRawWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlRawWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlRawWriter(XmlRawWriter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlRawWriter();

public:
  /// @brief Field base64Encoder, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlRawWriterBase64Encoder* ___base64Encoder;

  /// @brief Field resolver, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::IXmlNamespaceResolver* ___resolver;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlRawWriter, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlRawWriter, ___base64Encoder) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlRawWriter, ___resolver) == 0x18, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlRawWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlRawWriter*, "System.Xml", "XmlRawWriter");
