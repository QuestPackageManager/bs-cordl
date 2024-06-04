#pragma once
// IWYU pragma private; include "System/Data/DataTextReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataTextReader)
namespace System::Xml {
struct ReadState;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlReaderSettings;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
struct XmlSpace;
}
// Forward declare root types
namespace System::Data {
class DataTextReader;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataTextReader);
// Type: System.Data::DataTextReader
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::DataTextReader*
class CORDL_TYPE DataTextReader : public ::System::Xml::XmlReader {
public:
  // Declarations
  __declspec(property(get = get_AttributeCount)) int32_t AttributeCount;

  __declspec(property(get = get_BaseURI))::StringW BaseURI;

  __declspec(property(get = get_CanReadValueChunk)) bool CanReadValueChunk;

  __declspec(property(get = get_CanResolveEntity)) bool CanResolveEntity;

  __declspec(property(get = get_Depth)) int32_t Depth;

  __declspec(property(get = get_IsDefault)) bool IsDefault;

  __declspec(property(get = get_IsEmptyElement)) bool IsEmptyElement;

  __declspec(property(get = get_LocalName))::StringW LocalName;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_NameTable))::System::Xml::XmlNameTable* NameTable;

  __declspec(property(get = get_NamespaceURI))::StringW NamespaceURI;

  __declspec(property(get = get_NodeType))::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_Prefix))::StringW Prefix;

  __declspec(property(get = get_QuoteChar)) char16_t QuoteChar;

  __declspec(property(get = get_ReadState))::System::Xml::ReadState ReadState;

  __declspec(property(get = get_Settings))::System::Xml::XmlReaderSettings* Settings;

  __declspec(property(get = get_Value))::StringW Value;

  __declspec(property(get = get_XmlLang))::StringW XmlLang;

  __declspec(property(get = get_XmlSpace))::System::Xml::XmlSpace XmlSpace;

  __declspec(property(get = get_EOF)) bool _cordl_EOF;

  /// @brief Field _xmlreader, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__xmlreader, put = __cordl_internal_set__xmlreader))::System::Xml::XmlReader* _xmlreader;

  /// @brief Method Close, addr 0x2d33eb8, size 0x24, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method CreateReader, addr 0x2d33a64, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlReader* CreateReader(::System::Xml::XmlReader* xr);

  /// @brief Method GetAttribute, addr 0x2d33d74, size 0x24, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(int32_t i);

  /// @brief Method GetAttribute, addr 0x2d33d50, size 0x24, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(::StringW localName, ::StringW namespaceURI);

  /// @brief Method GetAttribute, addr 0x2d33d2c, size 0x24, virtual true, abstract: false, final false
  inline ::StringW GetAttribute(::StringW name);

  /// @brief Method LookupNamespace, addr 0x2d33f48, size 0x24, virtual true, abstract: false, final false
  inline ::StringW LookupNamespace(::StringW prefix);

  /// @brief Method MoveToAttribute, addr 0x2d33d98, size 0x24, virtual true, abstract: false, final false
  inline bool MoveToAttribute(::StringW name);

  /// @brief Method MoveToAttribute, addr 0x2d33dbc, size 0x24, virtual true, abstract: false, final false
  inline void MoveToAttribute(int32_t i);

  /// @brief Method MoveToElement, addr 0x2d33e28, size 0x24, virtual true, abstract: false, final false
  inline bool MoveToElement();

  /// @brief Method MoveToFirstAttribute, addr 0x2d33de0, size 0x24, virtual true, abstract: false, final false
  inline bool MoveToFirstAttribute();

  /// @brief Method MoveToNextAttribute, addr 0x2d33e04, size 0x24, virtual true, abstract: false, final false
  inline bool MoveToNextAttribute();

  static inline ::System::Data::DataTextReader* New_ctor(::System::Xml::XmlReader* input);

  /// @brief Method Read, addr 0x2d33e70, size 0x24, virtual true, abstract: false, final false
  inline bool Read();

  /// @brief Method ReadAttributeValue, addr 0x2d33e4c, size 0x24, virtual true, abstract: false, final false
  inline bool ReadAttributeValue();

  /// @brief Method ReadString, addr 0x2d33fd8, size 0x24, virtual true, abstract: false, final false
  inline ::StringW ReadString();

  /// @brief Method ResolveEntity, addr 0x2d33f90, size 0x24, virtual true, abstract: false, final false
  inline void ResolveEntity();

  /// @brief Method Skip, addr 0x2d33f00, size 0x24, virtual true, abstract: false, final false
  inline void Skip();

  constexpr ::System::Xml::XmlReader*& __cordl_internal_get__xmlreader();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlReader*> const& __cordl_internal_get__xmlreader() const;

  constexpr void __cordl_internal_set__xmlreader(::System::Xml::XmlReader* value);

  /// @brief Method .ctor, addr 0x2d33ac4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlReader* input);

  /// @brief Method get_AttributeCount, addr 0x2d33d08, size 0x24, virtual true, abstract: false, final false
  inline int32_t get_AttributeCount();

  /// @brief Method get_BaseURI, addr 0x2d33c30, size 0x24, virtual true, abstract: false, final false
  inline ::StringW get_BaseURI();

  /// @brief Method get_CanReadValueChunk, addr 0x2d33fb4, size 0x24, virtual true, abstract: false, final false
  inline bool get_CanReadValueChunk();

  /// @brief Method get_CanResolveEntity, addr 0x2d33f6c, size 0x24, virtual true, abstract: false, final false
  inline bool get_CanResolveEntity();

  /// @brief Method get_Depth, addr 0x2d33c10, size 0x20, virtual true, abstract: false, final false
  inline int32_t get_Depth();

  /// @brief Method get_EOF, addr 0x2d33e94, size 0x24, virtual true, abstract: false, final false
  inline bool get_EOF();

  /// @brief Method get_IsDefault, addr 0x2d33c78, size 0x24, virtual true, abstract: false, final false
  inline bool get_IsDefault();

  /// @brief Method get_IsEmptyElement, addr 0x2d33c54, size 0x24, virtual true, abstract: false, final false
  inline bool get_IsEmptyElement();

  /// @brief Method get_LocalName, addr 0x2d33b90, size 0x20, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_Name, addr 0x2d33b70, size 0x20, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NameTable, addr 0x2d33f24, size 0x24, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNameTable* get_NameTable();

  /// @brief Method get_NamespaceURI, addr 0x2d33bb0, size 0x20, virtual true, abstract: false, final false
  inline ::StringW get_NamespaceURI();

  /// @brief Method get_NodeType, addr 0x2d33b50, size 0x20, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_Prefix, addr 0x2d33bd0, size 0x20, virtual true, abstract: false, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_QuoteChar, addr 0x2d33c9c, size 0x24, virtual true, abstract: false, final false
  inline char16_t get_QuoteChar();

  /// @brief Method get_ReadState, addr 0x2d33edc, size 0x24, virtual true, abstract: false, final false
  inline ::System::Xml::ReadState get_ReadState();

  /// @brief Method get_Settings, addr 0x2d33b30, size 0x20, virtual true, abstract: false, final false
  inline ::System::Xml::XmlReaderSettings* get_Settings();

  /// @brief Method get_Value, addr 0x2d33bf0, size 0x20, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method get_XmlLang, addr 0x2d33ce4, size 0x24, virtual true, abstract: false, final false
  inline ::StringW get_XmlLang();

  /// @brief Method get_XmlSpace, addr 0x2d33cc0, size 0x24, virtual true, abstract: false, final false
  inline ::System::Xml::XmlSpace get_XmlSpace();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataTextReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataTextReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataTextReader(DataTextReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataTextReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataTextReader(DataTextReader const&) = delete;

  /// @brief Field _xmlreader, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlReader* ____xmlreader;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::DataTextReader, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Data::DataTextReader, ____xmlreader) == 0x10, "Offset mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DataTextReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataTextReader*, "System.Data", "DataTextReader");
