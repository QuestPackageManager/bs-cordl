#pragma once
// IWYU pragma private; include "System/Xml/Linq/XText.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Linq/zzzz__XNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XText)
namespace System::Text {
class StringBuilder;
}
namespace System::Xml::Linq {
class XNode;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace System::Xml::Linq {
class XText;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Linq::XText);
// Dependencies System.Xml.Linq.XNode
namespace System::Xml::Linq {
// Is value type: false
// CS Name: System.Xml.Linq.XText
class CORDL_TYPE XText : public ::System::Xml::Linq::XNode {
public:
  // Declarations
  __declspec(property(get = get_NodeType)) ::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_Value, put = set_Value)) ::StringW Value;

  /// @brief Field text, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_text, put = __cordl_internal_set_text)) ::StringW text;

  /// @brief Method AppendText, addr 0x424e8b0, size 0x24, virtual true, abstract: false, final false
  inline void AppendText(::System::Text::StringBuilder* sb);

  /// @brief Method CloneNode, addr 0x424e8d4, size 0x58, virtual true, abstract: false, final false
  inline ::System::Xml::Linq::XNode* CloneNode();

  static inline ::System::Xml::Linq::XText* New_ctor(::System::Xml::Linq::XText* other);

  static inline ::System::Xml::Linq::XText* New_ctor(::StringW value);

  /// @brief Method WriteTo, addr 0x424e7c4, size 0xec, virtual true, abstract: false, final false
  inline void WriteTo(::System::Xml::XmlWriter* writer);

  constexpr ::StringW const& __cordl_internal_get_text() const;

  constexpr ::StringW& __cordl_internal_get_text();

  constexpr void __cordl_internal_set_text(::StringW value);

  /// @brief Method .ctor, addr 0x4246ae4, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Linq::XText* other);

  /// @brief Method .ctor, addr 0x4246a6c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  /// @brief Method get_NodeType, addr 0x424e7b4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_Value, addr 0x424e7bc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method set_Value, addr 0x4248700, size 0xf0, virtual false, abstract: false, final false
  inline void set_Value(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XText();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XText", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XText(XText&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XText", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XText(XText const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17989 };

  /// @brief Field text, offset: 0x28, size: 0x8, def value: None
  ::StringW ___text;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Linq::XText, ___text) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::XText, 0x30>, "Size mismatch!");

} // namespace System::Xml::Linq
NEED_NO_BOX(::System::Xml::Linq::XText);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XText*, "System.Xml.Linq", "XText");
