#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlNotation)
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlNode;
}
// Forward declare root types
namespace System::Xml {
class XmlNotation;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlNotation);
// Type: System.Xml::XmlNotation
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11418))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11422))
// CS Name: ::System.Xml::XmlNotation*
class CORDL_TYPE XmlNotation : public ::System::Xml::XmlNode {
public:
  // Declarations
  /// @brief Field publicId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_publicId, put = __cordl_internal_set_publicId))::StringW publicId;

  /// @brief Field systemId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_systemId, put = __cordl_internal_set_systemId))::StringW systemId;

  /// @brief Field name, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::StringW name;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_LocalName))::StringW LocalName;

  __declspec(property(get = get_NodeType))::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(put = set_InnerXml))::StringW InnerXml;

  constexpr ::StringW& __cordl_internal_get_publicId();

  constexpr ::StringW const& __cordl_internal_get_publicId() const;

  constexpr void __cordl_internal_set_publicId(::StringW value);

  constexpr ::StringW& __cordl_internal_get_systemId();

  constexpr ::StringW const& __cordl_internal_get_systemId() const;

  constexpr void __cordl_internal_set_systemId(::StringW value);

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr void __cordl_internal_set_name(::StringW value);

  static inline ::System::Xml::XmlNotation* New_ctor(::StringW name, ::StringW publicId, ::StringW systemId, ::System::Xml::XmlDocument* doc);

  /// @brief Method .ctor, addr 0x2890924, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::StringW publicId, ::StringW systemId, ::System::Xml::XmlDocument* doc);

  /// @brief Method get_Name, addr 0x2894fe8, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_LocalName, addr 0x2894ff0, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_NodeType, addr 0x2894ff8, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method CloneNode, addr 0x2895000, size 0x60, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* CloneNode(bool deep);

  /// @brief Method get_IsReadOnly, addr 0x2895060, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method set_InnerXml, addr 0x2895068, size 0x60, virtual true, abstract: false, final false
  inline void set_InnerXml(::StringW value);

  // Ctor Parameters [CppParam { name: "", ty: "XmlNotation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlNotation(XmlNotation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlNotation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlNotation(XmlNotation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlNotation();

public:
  /// @brief Field publicId, offset: 0x18, size: 0x8, def value: None
  ::StringW ___publicId;

  /// @brief Field systemId, offset: 0x20, size: 0x8, def value: None
  ::StringW ___systemId;

  /// @brief Field name, offset: 0x28, size: 0x8, def value: None
  ::StringW ___name;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlNotation, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlNotation, ___publicId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNotation, ___systemId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNotation, ___name) == 0x28, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlNotation);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlNotation*, "System.Xml", "XmlNotation");
