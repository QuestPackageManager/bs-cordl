#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlReader)
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class IDtdInfo;
}
namespace System::Xml::Schema {
class IXmlSchemaInfo;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System {
class IDisposable;
}
namespace System::Xml {
struct ReadState;
}
namespace System::IO {
class Stream;
}
namespace System::Xml {
class XmlReaderSettings;
}
// Forward declare root types
namespace System::Xml {
class XmlReader;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlReader);
// Type: System.Xml::XmlReader
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11456))
// CS Name: ::System.Xml::XmlReader*
class CORDL_TYPE XmlReader : public ::System::Object {
public:
  // Declarations
  /// @brief Field IsTextualNodeBitmap, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_IsTextualNodeBitmap, put = setStaticF_IsTextualNodeBitmap)) uint32_t IsTextualNodeBitmap;

  /// @brief Field CanReadContentAsBitmap, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_CanReadContentAsBitmap, put = setStaticF_CanReadContentAsBitmap)) uint32_t CanReadContentAsBitmap;

  /// @brief Field HasValueBitmap, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_HasValueBitmap, put = setStaticF_HasValueBitmap)) uint32_t HasValueBitmap;

  __declspec(property(get = get_Settings))::System::Xml::XmlReaderSettings* Settings;

  __declspec(property(get = get_NodeType))::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_LocalName))::StringW LocalName;

  __declspec(property(get = get_NamespaceURI))::StringW NamespaceURI;

  __declspec(property(get = get_Prefix))::StringW Prefix;

  __declspec(property(get = get_Value))::StringW Value;

  __declspec(property(get = get_BaseURI))::StringW BaseURI;

  __declspec(property(get = get_IsEmptyElement)) bool IsEmptyElement;

  __declspec(property(get = get_IsDefault)) bool IsDefault;

  __declspec(property(get = get_SchemaInfo))::System::Xml::Schema::IXmlSchemaInfo* SchemaInfo;

  __declspec(property(get = get_ReadState))::System::Xml::ReadState ReadState;

  __declspec(property(get = get_NameTable))::System::Xml::XmlNameTable* NameTable;

  __declspec(property(get = get_CanResolveEntity)) bool CanResolveEntity;

  __declspec(property(get = get_DtdInfo))::System::Xml::IDtdInfo* DtdInfo;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  static inline void setStaticF_IsTextualNodeBitmap(uint32_t value);

  static inline uint32_t getStaticF_IsTextualNodeBitmap();

  static inline void setStaticF_CanReadContentAsBitmap(uint32_t value);

  static inline uint32_t getStaticF_CanReadContentAsBitmap();

  static inline void setStaticF_HasValueBitmap(uint32_t value);

  static inline uint32_t getStaticF_HasValueBitmap();

  /// @brief Method get_Settings, addr 0x2859e14, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlReaderSettings* get_Settings();

  /// @brief Method get_NodeType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_Name, addr 0x2859e1c, size 0xe4, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_LocalName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_NamespaceURI, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_NamespaceURI();

  /// @brief Method get_Prefix, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Value();

  /// @brief Method get_BaseURI, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_BaseURI();

  /// @brief Method get_IsEmptyElement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsEmptyElement();

  /// @brief Method get_IsDefault, addr 0x2859f00, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsDefault();

  /// @brief Method get_SchemaInfo, addr 0x2859f08, size 0x48, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo();

  /// @brief Method MoveToAttribute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool MoveToAttribute(::StringW name);

  /// @brief Method MoveToFirstAttribute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool MoveToFirstAttribute();

  /// @brief Method MoveToNextAttribute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool MoveToNextAttribute();

  /// @brief Method MoveToElement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool MoveToElement();

  /// @brief Method ReadAttributeValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool ReadAttributeValue();

  /// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Read();

  /// @brief Method Close, addr 0x2859f50, size 0x4, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method get_ReadState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Xml::ReadState get_ReadState();

  /// @brief Method get_NameTable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Xml::XmlNameTable* get_NameTable();

  /// @brief Method LookupNamespace, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW LookupNamespace(::StringW prefix);

  /// @brief Method get_CanResolveEntity, addr 0x2859f54, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanResolveEntity();

  /// @brief Method ResolveEntity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ResolveEntity();

  /// @brief Method Dispose, addr 0x2859f5c, size 0x14, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x2859f70, size 0x44, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method get_DtdInfo, addr 0x2859fb4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::IDtdInfo* get_DtdInfo();

  /// @brief Method CalcBufferSize, addr 0x2859fbc, size 0x84, virtual false, abstract: false, final false
  static inline int32_t CalcBufferSize(::System::IO::Stream* input);

  static inline ::System::Xml::XmlReader* New_ctor();

  /// @brief Method .ctor, addr 0x285a040, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "XmlReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlReader(XmlReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlReader(XmlReader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlReader();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlReader, 0x10>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlReader*, "System.Xml", "XmlReader");
