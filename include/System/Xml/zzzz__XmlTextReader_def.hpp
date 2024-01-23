#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlTextReader)
namespace System::IO {
class TextReader;
}
namespace System::Xml {
struct EntityHandling;
}
namespace System::Xml {
class IDtdInfo;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
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
class XmlResolver;
}
namespace System::Xml {
class XmlTextReaderImpl;
}
// Forward declare root types
namespace System::Xml {
class XmlTextReader;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlTextReader);
// Type: System.Xml::XmlTextReader
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11456))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11459))
// CS Name: ::System.Xml::XmlTextReader*
class CORDL_TYPE XmlTextReader : public ::System::Xml::XmlReader {
public:
  // Declarations
  /// @brief Field impl, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_impl, put = __cordl_internal_set_impl))::System::Xml::XmlTextReaderImpl* impl;

  __declspec(property(get = get_NodeType))::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_LocalName))::StringW LocalName;

  __declspec(property(get = get_NamespaceURI))::StringW NamespaceURI;

  __declspec(property(get = get_Prefix))::StringW Prefix;

  __declspec(property(get = get_Value))::StringW Value;

  __declspec(property(get = get_BaseURI))::StringW BaseURI;

  __declspec(property(get = get_IsEmptyElement)) bool IsEmptyElement;

  __declspec(property(get = get_IsDefault)) bool IsDefault;

  __declspec(property(get = get_ReadState))::System::Xml::ReadState ReadState;

  __declspec(property(get = get_NameTable))::System::Xml::XmlNameTable* NameTable;

  __declspec(property(get = get_CanResolveEntity)) bool CanResolveEntity;

  __declspec(property(put = set_EntityHandling))::System::Xml::EntityHandling EntityHandling;

  __declspec(property(put = set_XmlResolver))::System::Xml::XmlResolver* XmlResolver;

  __declspec(property(get = get_Impl))::System::Xml::XmlTextReaderImpl* Impl;

  __declspec(property(put = set_XmlValidatingReaderCompatibilityMode)) bool XmlValidatingReaderCompatibilityMode;

  __declspec(property(get = get_DtdInfo))::System::Xml::IDtdInfo* DtdInfo;

  /// @brief Convert operator to "::System::Xml::IXmlNamespaceResolver"
  constexpr operator ::System::Xml::IXmlNamespaceResolver*() noexcept;

  /// @brief Convert to "::System::Xml::IXmlNamespaceResolver"
  constexpr ::System::Xml::IXmlNamespaceResolver* i___System__Xml__IXmlNamespaceResolver() noexcept;

  constexpr ::System::Xml::XmlTextReaderImpl*& __cordl_internal_get_impl();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlTextReaderImpl*> const& __cordl_internal_get_impl() const;

  constexpr void __cordl_internal_set_impl(::System::Xml::XmlTextReaderImpl* value);

  static inline ::System::Xml::XmlTextReader* New_ctor(::System::IO::TextReader* input, ::System::Xml::XmlNameTable* nt);

  /// @brief Method .ctor, addr 0x2873da8, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::TextReader* input, ::System::Xml::XmlNameTable* nt);

  /// @brief Method get_NodeType, addr 0x2873e54, size 0x20, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_Name, addr 0x2873e74, size 0x20, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_LocalName, addr 0x2873e94, size 0x20, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_NamespaceURI, addr 0x2873eb4, size 0x20, virtual true, abstract: false, final false
  inline ::StringW get_NamespaceURI();

  /// @brief Method get_Prefix, addr 0x2873ed4, size 0x20, virtual true, abstract: false, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_Value, addr 0x2873ef4, size 0x20, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method get_BaseURI, addr 0x2873f14, size 0x20, virtual true, abstract: false, final false
  inline ::StringW get_BaseURI();

  /// @brief Method get_IsEmptyElement, addr 0x2873f34, size 0x24, virtual true, abstract: false, final false
  inline bool get_IsEmptyElement();

  /// @brief Method get_IsDefault, addr 0x2873f58, size 0x24, virtual true, abstract: false, final false
  inline bool get_IsDefault();

  /// @brief Method MoveToAttribute, addr 0x2873f7c, size 0x24, virtual true, abstract: false, final false
  inline bool MoveToAttribute(::StringW name);

  /// @brief Method MoveToFirstAttribute, addr 0x2873fa0, size 0x24, virtual true, abstract: false, final false
  inline bool MoveToFirstAttribute();

  /// @brief Method MoveToNextAttribute, addr 0x2873fc4, size 0x24, virtual true, abstract: false, final false
  inline bool MoveToNextAttribute();

  /// @brief Method MoveToElement, addr 0x2873fe8, size 0x24, virtual true, abstract: false, final false
  inline bool MoveToElement();

  /// @brief Method ReadAttributeValue, addr 0x287400c, size 0x24, virtual true, abstract: false, final false
  inline bool ReadAttributeValue();

  /// @brief Method Read, addr 0x2874030, size 0x24, virtual true, abstract: false, final false
  inline bool Read();

  /// @brief Method Close, addr 0x2874054, size 0x24, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method get_ReadState, addr 0x2874078, size 0x24, virtual true, abstract: false, final false
  inline ::System::Xml::ReadState get_ReadState();

  /// @brief Method get_NameTable, addr 0x287409c, size 0x24, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNameTable* get_NameTable();

  /// @brief Method LookupNamespace, addr 0x28740c0, size 0x38, virtual true, abstract: false, final false
  inline ::StringW LookupNamespace(::StringW prefix);

  /// @brief Method get_CanResolveEntity, addr 0x28740f8, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanResolveEntity();

  /// @brief Method ResolveEntity, addr 0x2874100, size 0x24, virtual true, abstract: false, final false
  inline void ResolveEntity();

  /// @brief Method System.Xml.IXmlNamespaceResolver.LookupNamespace, addr 0x2874124, size 0x24, virtual true, abstract: false, final true
  inline ::StringW System_Xml_IXmlNamespaceResolver_LookupNamespace(::StringW prefix);

  /// @brief Method System.Xml.IXmlNamespaceResolver.LookupPrefix, addr 0x2874148, size 0x1c, virtual true, abstract: false, final true
  inline ::StringW System_Xml_IXmlNamespaceResolver_LookupPrefix(::StringW namespaceName);

  /// @brief Method set_EntityHandling, addr 0x2874164, size 0x1c, virtual false, abstract: false, final false
  inline void set_EntityHandling(::System::Xml::EntityHandling value);

  /// @brief Method set_XmlResolver, addr 0x2874180, size 0x1c, virtual false, abstract: false, final false
  inline void set_XmlResolver(::System::Xml::XmlResolver* value);

  /// @brief Method get_Impl, addr 0x287419c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlTextReaderImpl* get_Impl();

  /// @brief Method set_XmlValidatingReaderCompatibilityMode, addr 0x28741a4, size 0x20, virtual false, abstract: false, final false
  inline void set_XmlValidatingReaderCompatibilityMode(bool value);

  /// @brief Method get_DtdInfo, addr 0x28741c4, size 0x24, virtual true, abstract: false, final false
  inline ::System::Xml::IDtdInfo* get_DtdInfo();

  // Ctor Parameters [CppParam { name: "", ty: "XmlTextReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlTextReader(XmlTextReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlTextReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlTextReader(XmlTextReader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlTextReader();

public:
  /// @brief Field impl, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlTextReaderImpl* ___impl;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlTextReader, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReader, ___impl) == 0x10, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlTextReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlTextReader*, "System.Xml", "XmlTextReader");
