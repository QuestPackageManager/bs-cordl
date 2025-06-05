#pragma once
// IWYU pragma private; include "System/Xml/XmlWhitespace.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlCharacterData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlWhitespace)
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace System::Xml {
class XmlWhitespace;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlWhitespace);
// Dependencies System.Xml.XmlCharacterData
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlWhitespace
class CORDL_TYPE XmlWhitespace : public ::System::Xml::XmlCharacterData {
public:
  // Declarations
  __declspec(property(get = get_IsText)) bool IsText;

  __declspec(property(get = get_LocalName)) ::StringW LocalName;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_NodeType)) ::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_ParentNode)) ::System::Xml::XmlNode* ParentNode;

  __declspec(property(get = get_Value, put = set_Value)) ::StringW Value;

  /// @brief Method CloneNode, addr 0x434a748, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* CloneNode(bool deep);

  static inline ::System::Xml::XmlWhitespace* New_ctor(::StringW strData, ::System::Xml::XmlDocument* doc);

  /// @brief Method WriteContentTo, addr 0x434a7e4, size 0x4, virtual true, abstract: false, final false
  inline void WriteContentTo(::System::Xml::XmlWriter* w);

  /// @brief Method WriteTo, addr 0x434a7a4, size 0x40, virtual true, abstract: false, final false
  inline void WriteTo(::System::Xml::XmlWriter* w);

  /// @brief Method .ctor, addr 0x434a530, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::StringW strData, ::System::Xml::XmlDocument* doc);

  /// @brief Method get_IsText, addr 0x434a7e8, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsText();

  /// @brief Method get_LocalName, addr 0x434a5f4, size 0x28, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_Name, addr 0x434a5cc, size 0x28, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NodeType, addr 0x434a61c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_ParentNode, addr 0x434a624, size 0x88, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* get_ParentNode();

  /// @brief Method get_Value, addr 0x434a6ac, size 0x10, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method set_Value, addr 0x434a6bc, size 0x8c, virtual true, abstract: false, final false
  inline void set_Value(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlWhitespace();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlWhitespace", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlWhitespace(XmlWhitespace&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlWhitespace", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlWhitespace(XmlWhitespace const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7322 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlWhitespace, 0x28>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlWhitespace);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlWhitespace*, "System.Xml", "XmlWhitespace");
