#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlCharacterData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlSignificantWhitespace)
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
class XmlSignificantWhitespace;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlSignificantWhitespace);
// Type: System.Xml::XmlSignificantWhitespace
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11398))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11424))
// CS Name: ::System.Xml::XmlSignificantWhitespace*
class CORDL_TYPE XmlSignificantWhitespace : public ::System::Xml::XmlCharacterData {
public:
  // Declarations
  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_LocalName))::StringW LocalName;

  __declspec(property(get = get_NodeType))::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_ParentNode))::System::Xml::XmlNode* ParentNode;

  __declspec(property(get = get_Value, put = set_Value))::StringW Value;

  __declspec(property(get = get_IsText)) bool IsText;

  static inline ::System::Xml::XmlSignificantWhitespace* New_ctor(::StringW strData, ::System::Xml::XmlDocument* doc);

  /// @brief Method .ctor, addr 0x2890484, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::StringW strData, ::System::Xml::XmlDocument* doc);

  /// @brief Method get_Name, addr 0x2895220, size 0x28, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_LocalName, addr 0x2895248, size 0x28, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_NodeType, addr 0x2895270, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_ParentNode, addr 0x2895278, size 0x88, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* get_ParentNode();

  /// @brief Method CloneNode, addr 0x2895300, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* CloneNode(bool deep);

  /// @brief Method get_Value, addr 0x289535c, size 0x10, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method set_Value, addr 0x289536c, size 0x94, virtual true, abstract: false, final false
  inline void set_Value(::StringW value);

  /// @brief Method get_IsText, addr 0x2895400, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsText();

  // Ctor Parameters [CppParam { name: "", ty: "XmlSignificantWhitespace", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSignificantWhitespace(XmlSignificantWhitespace&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSignificantWhitespace", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSignificantWhitespace(XmlSignificantWhitespace const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSignificantWhitespace();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlSignificantWhitespace, 0x28>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlSignificantWhitespace);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlSignificantWhitespace*, "System.Xml", "XmlSignificantWhitespace");
