#pragma once
// IWYU pragma private; include "System/Xml/XmlRawWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlRawWriter)
namespace System::Xml {
struct ConformanceLevel;
}
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
class XmlReader;
}
namespace System::Xml {
struct XmlSpace;
}
namespace System::Xml {
struct XmlStandalone;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml {
class XmlRawWriter;
}
// Write type traits
MARK_REF_T(::System::Xml::XmlRawWriter*);
DEFINE_IL2CPP_CLASS(::System::Xml::XmlRawWriter*, "System.Xml", "XmlRawWriter");
// Dependencies System.Xml.XmlWriter
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlRawWriter
class CORDL_TYPE XmlRawWriter : public ::System::Xml::XmlWriter {
public:
  // Declarations
  __declspec(property(put = set_NamespaceResolver)) ::System::Xml::IXmlNamespaceResolver* NamespaceResolver;

  __declspec(property(get = get_SupportsNamespaceDeclarationInChunks)) bool SupportsNamespaceDeclarationInChunks;

  __declspec(property(get = get_WriteState)) ::System::Xml::WriteState WriteState;

  __declspec(property(get = get_XmlLang)) ::StringW XmlLang;

  __declspec(property(get = get_XmlSpace)) ::System::Xml::XmlSpace XmlSpace;

  /// @brief Field base64Encoder, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_base64Encoder, put = __cordl_internal_set_base64Encoder)) ::System::Xml::XmlRawWriterBase64Encoder* base64Encoder;

  /// @brief Field resolver, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_resolver, put = __cordl_internal_set_resolver)) ::System::Xml::IXmlNamespaceResolver* resolver;

  /// @brief Method Close, addr 0x66b772c, size 0x10, virtual true, abstract: false, final false
  inline void Close(::System::Xml::WriteState currentState);

  /// @brief Method LookupPrefix, addr 0x66b70e4, size 0x50, virtual true, abstract: false, final false
  inline ::StringW LookupPrefix(::StringW ns);

  static inline ::System::Xml::XmlRawWriter* New_ctor();

  /// @brief Method OnRootElement, addr 0x66b75e0, size 0x4, virtual true, abstract: false, final false
  inline void OnRootElement(::System::Xml::ConformanceLevel conformanceLevel);

  /// @brief Method StartElementContent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void StartElementContent();

  /// @brief Method WriteAttributes, addr 0x66b7530, size 0x50, virtual true, abstract: false, final false
  inline void WriteAttributes(::System::Xml::XmlReader* reader, bool defattr);

  /// @brief Method WriteBase64, addr 0x66b7050, size 0x94, virtual true, abstract: false, final false
  inline void WriteBase64(::ArrayW<uint8_t> buffer, int32_t index, int32_t count);

  /// @brief Method WriteCData, addr 0x66b7274, size 0x10, virtual true, abstract: false, final false
  inline void WriteCData(::StringW text);

  /// @brief Method WriteCharEntity, addr 0x66b7284, size 0x8c, virtual true, abstract: false, final false
  inline void WriteCharEntity(char16_t ch);

  /// @brief Method WriteChars, addr 0x66b73bc, size 0x34, virtual true, abstract: false, final false
  inline void WriteChars(::ArrayW<char16_t> buffer, int32_t index, int32_t count);

  /// @brief Method WriteDocType, addr 0x66b6fac, size 0x4, virtual true, abstract: false, final false
  inline void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);

  /// @brief Method WriteEndBase64, addr 0x66b7714, size 0x18, virtual true, abstract: false, final false
  inline void WriteEndBase64();

  /// @brief Method WriteEndDocument, addr 0x66b6f5c, size 0x50, virtual true, abstract: false, final false
  inline void WriteEndDocument();

  /// @brief Method WriteEndElement, addr 0x66b6fb0, size 0x50, virtual true, abstract: false, final false
  inline void WriteEndElement();

  /// @brief Method WriteEndElement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteEndNamespaceDeclaration, addr 0x66b76dc, size 0x38, virtual true, abstract: false, final false
  inline void WriteEndNamespaceDeclaration();

  /// @brief Method WriteFullEndElement, addr 0x66b7000, size 0x50, virtual true, abstract: false, final false
  inline void WriteFullEndElement();

  /// @brief Method WriteFullEndElement, addr 0x66b75e4, size 0x10, virtual true, abstract: false, final false
  inline void WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteNamespaceDeclaration, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void WriteNamespaceDeclaration(::StringW prefix, ::StringW ns);

  /// @brief Method WriteNode, addr 0x66b7580, size 0x50, virtual true, abstract: false, final false
  inline void WriteNode(::System::Xml::XmlReader* reader, bool defattr);

  /// @brief Method WriteQualifiedName, addr 0x66b7224, size 0x50, virtual true, abstract: false, final false
  inline void WriteQualifiedName(::StringW localName, ::StringW ns);

  /// @brief Method WriteQualifiedName, addr 0x66b75f4, size 0xa8, virtual true, abstract: false, final false
  inline void WriteQualifiedName(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteRaw, addr 0x66b73f0, size 0x34, virtual true, abstract: false, final false
  inline void WriteRaw(::ArrayW<char16_t> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw, addr 0x66b7424, size 0x10, virtual true, abstract: false, final false
  inline void WriteRaw(::StringW data);

  /// @brief Method WriteStartDocument, addr 0x66b6ebc, size 0x50, virtual true, abstract: false, final false
  inline void WriteStartDocument();

  /// @brief Method WriteStartDocument, addr 0x66b6f0c, size 0x50, virtual true, abstract: false, final false
  inline void WriteStartDocument(bool standalone);

  /// @brief Method WriteStartNamespaceDeclaration, addr 0x66b76a4, size 0x38, virtual true, abstract: false, final false
  inline void WriteStartNamespaceDeclaration(::StringW prefix);

  /// @brief Method WriteSurrogateCharEntity, addr 0x66b7310, size 0x9c, virtual true, abstract: false, final false
  inline void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar);

  /// @brief Method WriteValue, addr 0x66b7520, size 0x10, virtual true, abstract: false, final false
  inline void WriteValue(::StringW value);

  /// @brief Method WriteValue, addr 0x66b7434, size 0xec, virtual true, abstract: false, final false
  inline void WriteValue(::System::Object* value);

  /// @brief Method WriteWhitespace, addr 0x66b73ac, size 0x10, virtual true, abstract: false, final false
  inline void WriteWhitespace(::StringW ws);

  /// @brief Method WriteXmlDeclaration, addr 0x66b75d8, size 0x4, virtual true, abstract: false, final false
  inline void WriteXmlDeclaration(::System::Xml::XmlStandalone standalone);

  /// @brief Method WriteXmlDeclaration, addr 0x66b75dc, size 0x4, virtual true, abstract: false, final false
  inline void WriteXmlDeclaration(::StringW xmldecl);

  constexpr ::System::Xml::XmlRawWriterBase64Encoder* const& __cordl_internal_get_base64Encoder() const;

  constexpr ::System::Xml::XmlRawWriterBase64Encoder*& __cordl_internal_get_base64Encoder();

  constexpr ::System::Xml::IXmlNamespaceResolver* const& __cordl_internal_get_resolver() const;

  constexpr ::System::Xml::IXmlNamespaceResolver*& __cordl_internal_get_resolver();

  constexpr void __cordl_internal_set_base64Encoder(::System::Xml::XmlRawWriterBase64Encoder* value);

  constexpr void __cordl_internal_set_resolver(::System::Xml::IXmlNamespaceResolver* value);

  /// @brief Method .ctor, addr 0x66b773c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_SupportsNamespaceDeclarationInChunks, addr 0x66b769c, size 0x8, virtual true, abstract: false, final false
  inline bool get_SupportsNamespaceDeclarationInChunks();

  /// @brief Method get_WriteState, addr 0x66b7134, size 0x50, virtual true, abstract: false, final false
  inline ::System::Xml::WriteState get_WriteState();

  /// @brief Method get_XmlLang, addr 0x66b71d4, size 0x50, virtual true, abstract: false, final false
  inline ::StringW get_XmlLang();

  /// @brief Method get_XmlSpace, addr 0x66b7184, size 0x50, virtual true, abstract: false, final false
  inline ::System::Xml::XmlSpace get_XmlSpace();

  /// @brief Method set_NamespaceResolver, addr 0x66b75d0, size 0x8, virtual true, abstract: false, final false
  inline void set_NamespaceResolver(::System::Xml::IXmlNamespaceResolver* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlRawWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlRawWriter", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlRawWriter(XmlRawWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlRawWriter", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlRawWriter(XmlRawWriter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11280 };

  /// @brief Field base64Encoder, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlRawWriterBase64Encoder* ___base64Encoder;

  /// @brief Field resolver, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::IXmlNamespaceResolver* ___resolver;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlRawWriter, ___base64Encoder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlRawWriter, ___resolver) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Xml::XmlRawWriter) == 0x28, "Size mismatch!");

} // namespace System::Xml
