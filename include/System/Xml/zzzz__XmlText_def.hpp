#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlCharacterData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlText)
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
class XmlText;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlText);
// Type: System.Xml::XmlText
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11398))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11425))
// CS Name: ::System.Xml::XmlText*
class CORDL_TYPE XmlText : public ::System::Xml::XmlCharacterData {
public:
  // Declarations
  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_LocalName))::StringW LocalName;

  __declspec(property(get = get_NodeType))::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_ParentNode))::System::Xml::XmlNode* ParentNode;

  __declspec(property(get = get_Value, put = set_Value))::StringW Value;

  __declspec(property(get = get_IsText)) bool IsText;

  static inline ::System::Xml::XmlText* New_ctor(::StringW strData);

  /// @brief Method .ctor, addr 0x288f154, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW strData);

  static inline ::System::Xml::XmlText* New_ctor(::StringW strData, ::System::Xml::XmlDocument* doc);

  /// @brief Method .ctor, addr 0x288f14c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW strData, ::System::Xml::XmlDocument* doc);

  /// @brief Method get_Name, addr 0x2895408, size 0x28, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_LocalName, addr 0x2895430, size 0x28, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_NodeType, addr 0x2895458, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_ParentNode, addr 0x2895460, size 0x84, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* get_ParentNode();

  /// @brief Method CloneNode, addr 0x28954e4, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* CloneNode(bool deep);

  /// @brief Method get_Value, addr 0x2895540, size 0x10, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method set_Value, addr 0x2895550, size 0xd4, virtual true, abstract: false, final false
  inline void set_Value(::StringW value);

  /// @brief Method get_IsText, addr 0x2895624, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsText();

  // Ctor Parameters [CppParam { name: "", ty: "XmlText", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlText(XmlText&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlText", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlText(XmlText const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlText();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlText, 0x28>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlText);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlText*, "System.Xml", "XmlText");
