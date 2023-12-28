#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlCharacterData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlWhitespace)
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
struct XmlNodeType;
}
// Forward declare root types
namespace System::Xml {
class XmlWhitespace;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlWhitespace);
// Type: System.Xml::XmlWhitespace
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11500))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11529))
// CS Name: ::System.Xml::XmlWhitespace*
class CORDL_TYPE XmlWhitespace : public ::System::Xml::XmlCharacterData {
public:
  // Declarations
  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_LocalName))::StringW LocalName;

  __declspec(property(get = get_NodeType))::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_ParentNode))::System::Xml::XmlNode* ParentNode;

  __declspec(property(get = get_Value, put = set_Value))::StringW Value;

  __declspec(property(get = get_IsText)) bool IsText;

  static inline ::System::Xml::XmlWhitespace* New_ctor(::StringW strData, ::System::Xml::XmlDocument* doc);

  /// @brief Method .ctor addr 0x288cec0 size 0xa4 virtual false final false
  inline void _ctor(::StringW strData, ::System::Xml::XmlDocument* doc);

  /// @brief Method get_Name addr 0x2892168 size 0x28 virtual true final false
  inline ::StringW get_Name();

  /// @brief Method get_LocalName addr 0x2892190 size 0x28 virtual true final false
  inline ::StringW get_LocalName();

  /// @brief Method get_NodeType addr 0x28921b8 size 0x8 virtual true final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_ParentNode addr 0x28921c0 size 0x88 virtual true final false
  inline ::System::Xml::XmlNode* get_ParentNode();

  /// @brief Method get_Value addr 0x2892248 size 0x10 virtual true final false
  inline ::StringW get_Value();

  /// @brief Method set_Value addr 0x2892258 size 0x94 virtual true final false
  inline void set_Value(::StringW value);

  /// @brief Method CloneNode addr 0x28922ec size 0x5c virtual true final false
  inline ::System::Xml::XmlNode* CloneNode(bool deep);

  /// @brief Method get_IsText addr 0x2892348 size 0x8 virtual true final false
  inline bool get_IsText();

  // Ctor Parameters [CppParam { name: "", ty: "XmlWhitespace", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlWhitespace(XmlWhitespace&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlWhitespace", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlWhitespace(XmlWhitespace const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlWhitespace();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlWhitespace, 0x28>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlWhitespace);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlWhitespace*, "System.Xml", "XmlWhitespace");
