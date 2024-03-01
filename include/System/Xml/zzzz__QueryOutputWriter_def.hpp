#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlRawWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(QueryOutputWriter)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Xml {
class BitStack;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml {
class XmlRawWriter;
}
namespace System::Xml {
struct XmlStandalone;
}
namespace System::Xml {
class XmlWriterSettings;
}
// Forward declare root types
namespace System::Xml {
class QueryOutputWriter;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::QueryOutputWriter);
// Type: System.Xml::QueryOutputWriter
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 100, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::QueryOutputWriter*
class CORDL_TYPE QueryOutputWriter : public ::System::Xml::XmlRawWriter {
public:
  // Declarations
  __declspec(property(put = set_NamespaceResolver))::System::Xml::IXmlNamespaceResolver* NamespaceResolver;

  __declspec(property(get = get_SupportsNamespaceDeclarationInChunks)) bool SupportsNamespaceDeclarationInChunks;

  /// @brief Field bitsCData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_bitsCData, put = __cordl_internal_set_bitsCData))::System::Xml::BitStack* bitsCData;

  /// @brief Field checkWellFormedDoc, offset 0x49, size 0x1
  __declspec(property(get = __cordl_internal_get_checkWellFormedDoc, put = __cordl_internal_set_checkWellFormedDoc)) bool checkWellFormedDoc;

  /// @brief Field depth, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_depth, put = __cordl_internal_set_depth)) int32_t depth;

  /// @brief Field hasDocElem, offset 0x4a, size 0x1
  __declspec(property(get = __cordl_internal_get_hasDocElem, put = __cordl_internal_set_hasDocElem)) bool hasDocElem;

  /// @brief Field inAttr, offset 0x4b, size 0x1
  __declspec(property(get = __cordl_internal_get_inAttr, put = __cordl_internal_set_inAttr)) bool inAttr;

  /// @brief Field inCDataSection, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_inCDataSection, put = __cordl_internal_set_inCDataSection)) bool inCDataSection;

  /// @brief Field lookupCDataElems, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_lookupCDataElems,
                      put = __cordl_internal_set_lookupCDataElems))::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, int32_t>* lookupCDataElems;

  /// @brief Field outputDocType, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_outputDocType, put = __cordl_internal_set_outputDocType)) bool outputDocType;

  /// @brief Field publicId, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_publicId, put = __cordl_internal_set_publicId))::StringW publicId;

  /// @brief Field qnameCData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_qnameCData, put = __cordl_internal_set_qnameCData))::System::Xml::XmlQualifiedName* qnameCData;

  /// @brief Field systemId, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_systemId, put = __cordl_internal_set_systemId))::StringW systemId;

  /// @brief Field wrapped, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_wrapped, put = __cordl_internal_set_wrapped))::System::Xml::XmlRawWriter* wrapped;

  /// @brief Method Close, addr 0x293d098, size 0xa8, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method EndCDataSection, addr 0x293cb08, size 0x8, virtual false, abstract: false, final false
  inline void EndCDataSection();

  /// @brief Method Flush, addr 0x293d140, size 0x24, virtual true, abstract: false, final false
  inline void Flush();

  static inline ::System::Xml::QueryOutputWriter* New_ctor(::System::Xml::XmlRawWriter* writer, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method StartCDataSection, addr 0x293cde8, size 0x3c, virtual false, abstract: false, final false
  inline bool StartCDataSection();

  /// @brief Method StartElementContent, addr 0x293cbf0, size 0x24, virtual true, abstract: false, final false
  inline void StartElementContent();

  /// @brief Method WriteCData, addr 0x293ccfc, size 0x24, virtual true, abstract: false, final false
  inline void WriteCData(::StringW text);

  /// @brief Method WriteCharEntity, addr 0x293cf48, size 0x2c, virtual true, abstract: false, final false
  inline void WriteCharEntity(char16_t ch);

  /// @brief Method WriteChars, addr 0x293ce94, size 0x88, virtual true, abstract: false, final false
  inline void WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteComment, addr 0x293cd20, size 0x2c, virtual true, abstract: false, final false
  inline void WriteComment(::StringW text);

  /// @brief Method WriteDocType, addr 0x293c908, size 0x38, virtual true, abstract: false, final false
  inline void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);

  /// @brief Method WriteEndAttribute, addr 0x293cc40, size 0x2c, virtual true, abstract: false, final false
  inline void WriteEndAttribute();

  /// @brief Method WriteEndElement, addr 0x293cb10, size 0x70, virtual true, abstract: false, final false
  inline void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteEndNamespaceDeclaration, addr 0x293ccd8, size 0x24, virtual true, abstract: false, final false
  inline void WriteEndNamespaceDeclaration();

  /// @brief Method WriteEntityRef, addr 0x293cf1c, size 0x2c, virtual true, abstract: false, final false
  inline void WriteEntityRef(::StringW name);

  /// @brief Method WriteFullEndElement, addr 0x293cb80, size 0x70, virtual true, abstract: false, final false
  inline void WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteNamespaceDeclaration, addr 0x293cc6c, size 0x24, virtual true, abstract: false, final false
  inline void WriteNamespaceDeclaration(::StringW prefix, ::StringW ns);

  /// @brief Method WriteProcessingInstruction, addr 0x293cd4c, size 0x2c, virtual true, abstract: false, final false
  inline void WriteProcessingInstruction(::StringW name, ::StringW text);

  /// @brief Method WriteRaw, addr 0x293cfa0, size 0x88, virtual true, abstract: false, final false
  inline void WriteRaw(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw, addr 0x293d028, size 0x70, virtual true, abstract: false, final false
  inline void WriteRaw(::StringW data);

  /// @brief Method WriteStartAttribute, addr 0x293cc14, size 0x2c, virtual true, abstract: false, final false
  inline void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteStartElement, addr 0x293c940, size 0x1c8, virtual true, abstract: false, final false
  inline void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteStartNamespaceDeclaration, addr 0x293ccb4, size 0x24, virtual true, abstract: false, final false
  inline void WriteStartNamespaceDeclaration(::StringW prefix);

  /// @brief Method WriteString, addr 0x293ce24, size 0x70, virtual true, abstract: false, final false
  inline void WriteString(::StringW text);

  /// @brief Method WriteSurrogateCharEntity, addr 0x293cf74, size 0x2c, virtual true, abstract: false, final false
  inline void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar);

  /// @brief Method WriteWhitespace, addr 0x293cd78, size 0x70, virtual true, abstract: false, final false
  inline void WriteWhitespace(::StringW ws);

  /// @brief Method WriteXmlDeclaration, addr 0x293c8c0, size 0x24, virtual true, abstract: false, final false
  inline void WriteXmlDeclaration(::System::Xml::XmlStandalone standalone);

  /// @brief Method WriteXmlDeclaration, addr 0x293c8e4, size 0x24, virtual true, abstract: false, final false
  inline void WriteXmlDeclaration(::StringW xmldecl);

  constexpr ::System::Xml::BitStack*& __cordl_internal_get_bitsCData();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::BitStack*> const& __cordl_internal_get_bitsCData() const;

  constexpr bool const& __cordl_internal_get_checkWellFormedDoc() const;

  constexpr bool& __cordl_internal_get_checkWellFormedDoc();

  constexpr int32_t const& __cordl_internal_get_depth() const;

  constexpr int32_t& __cordl_internal_get_depth();

  constexpr bool const& __cordl_internal_get_hasDocElem() const;

  constexpr bool& __cordl_internal_get_hasDocElem();

  constexpr bool const& __cordl_internal_get_inAttr() const;

  constexpr bool& __cordl_internal_get_inAttr();

  constexpr bool const& __cordl_internal_get_inCDataSection() const;

  constexpr bool& __cordl_internal_get_inCDataSection();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, int32_t>*& __cordl_internal_get_lookupCDataElems();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, int32_t>*> const& __cordl_internal_get_lookupCDataElems() const;

  constexpr bool const& __cordl_internal_get_outputDocType() const;

  constexpr bool& __cordl_internal_get_outputDocType();

  constexpr ::StringW const& __cordl_internal_get_publicId() const;

  constexpr ::StringW& __cordl_internal_get_publicId();

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_qnameCData();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_qnameCData() const;

  constexpr ::StringW const& __cordl_internal_get_systemId() const;

  constexpr ::StringW& __cordl_internal_get_systemId();

  constexpr ::System::Xml::XmlRawWriter*& __cordl_internal_get_wrapped();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlRawWriter*> const& __cordl_internal_get_wrapped() const;

  constexpr void __cordl_internal_set_bitsCData(::System::Xml::BitStack* value);

  constexpr void __cordl_internal_set_checkWellFormedDoc(bool value);

  constexpr void __cordl_internal_set_depth(int32_t value);

  constexpr void __cordl_internal_set_hasDocElem(bool value);

  constexpr void __cordl_internal_set_inAttr(bool value);

  constexpr void __cordl_internal_set_inCDataSection(bool value);

  constexpr void __cordl_internal_set_lookupCDataElems(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, int32_t>* value);

  constexpr void __cordl_internal_set_outputDocType(bool value);

  constexpr void __cordl_internal_set_publicId(::StringW value);

  constexpr void __cordl_internal_set_qnameCData(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_systemId(::StringW value);

  constexpr void __cordl_internal_set_wrapped(::System::Xml::XmlRawWriter* value);

  /// @brief Method .ctor, addr 0x293c5b8, size 0x2d4, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlRawWriter* writer, ::System::Xml::XmlWriterSettings* settings);

  /// @brief Method get_SupportsNamespaceDeclarationInChunks, addr 0x293cc90, size 0x24, virtual true, abstract: false, final false
  inline bool get_SupportsNamespaceDeclarationInChunks();

  /// @brief Method set_NamespaceResolver, addr 0x293c894, size 0x2c, virtual true, abstract: false, final false
  inline void set_NamespaceResolver(::System::Xml::IXmlNamespaceResolver* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QueryOutputWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QueryOutputWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QueryOutputWriter(QueryOutputWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QueryOutputWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QueryOutputWriter(QueryOutputWriter const&) = delete;

  /// @brief Field wrapped, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::XmlRawWriter* ___wrapped;

  /// @brief Field inCDataSection, offset: 0x28, size: 0x1, def value: None
  bool ___inCDataSection;

  /// @brief Field lookupCDataElems, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, int32_t>* ___lookupCDataElems;

  /// @brief Field bitsCData, offset: 0x38, size: 0x8, def value: None
  ::System::Xml::BitStack* ___bitsCData;

  /// @brief Field qnameCData, offset: 0x40, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___qnameCData;

  /// @brief Field outputDocType, offset: 0x48, size: 0x1, def value: None
  bool ___outputDocType;

  /// @brief Field checkWellFormedDoc, offset: 0x49, size: 0x1, def value: None
  bool ___checkWellFormedDoc;

  /// @brief Field hasDocElem, offset: 0x4a, size: 0x1, def value: None
  bool ___hasDocElem;

  /// @brief Field inAttr, offset: 0x4b, size: 0x1, def value: None
  bool ___inAttr;

  /// @brief Field systemId, offset: 0x50, size: 0x8, def value: None
  ::StringW ___systemId;

  /// @brief Field publicId, offset: 0x58, size: 0x8, def value: None
  ::StringW ___publicId;

  /// @brief Field depth, offset: 0x60, size: 0x4, def value: None
  int32_t ___depth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::QueryOutputWriter, 0x68>, "Size mismatch!");

static_assert(offsetof(::System::Xml::QueryOutputWriter, ___wrapped) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::QueryOutputWriter, ___inCDataSection) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::QueryOutputWriter, ___lookupCDataElems) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::QueryOutputWriter, ___bitsCData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::QueryOutputWriter, ___qnameCData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::QueryOutputWriter, ___outputDocType) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::QueryOutputWriter, ___checkWellFormedDoc) == 0x49, "Offset mismatch!");

static_assert(offsetof(::System::Xml::QueryOutputWriter, ___hasDocElem) == 0x4a, "Offset mismatch!");

static_assert(offsetof(::System::Xml::QueryOutputWriter, ___inAttr) == 0x4b, "Offset mismatch!");

static_assert(offsetof(::System::Xml::QueryOutputWriter, ___systemId) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::QueryOutputWriter, ___publicId) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::QueryOutputWriter, ___depth) == 0x60, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::QueryOutputWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::QueryOutputWriter*, "System.Xml", "QueryOutputWriter");
