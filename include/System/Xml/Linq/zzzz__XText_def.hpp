#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Linq/zzzz__XNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XText)
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Xml::Linq {
class XNode;
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
// Type: System.Xml.Linq::XText
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15453))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15459))
// CS Name: ::System.Xml.Linq::XText*
class CORDL_TYPE XText : public ::System::Xml::Linq::XNode {
public:
  // Declarations
  /// @brief Field text, offset 0x28, size 0x8
  __declspec(property(get = __get_text, put = __set_text))::StringW text;

  __declspec(property(get = get_NodeType))::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_Value, put = set_Value))::StringW Value;

  constexpr ::StringW& __get_text();

  constexpr ::StringW const& __get_text() const;

  constexpr void __set_text(::StringW value);

  static inline ::System::Xml::Linq::XText* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x285bbb8, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::System::Xml::Linq::XText* New_ctor(::System::Xml::Linq::XText* other);

  /// @brief Method .ctor, addr 0x285bc34, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Linq::XText* other);

  /// @brief Method get_NodeType, addr 0x2861868, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_Value, addr 0x2861870, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method set_Value, addr 0x285d89c, size 0xf4, virtual false, abstract: false, final false
  inline void set_Value(::StringW value);

  /// @brief Method WriteTo, addr 0x2861878, size 0xf4, virtual true, abstract: false, final false
  inline void WriteTo(::System::Xml::XmlWriter* writer);

  /// @brief Method AppendText, addr 0x286196c, size 0x24, virtual true, abstract: false, final false
  inline void AppendText(::System::Text::StringBuilder* sb);

  /// @brief Method CloneNode, addr 0x2861990, size 0x60, virtual true, abstract: false, final false
  inline ::System::Xml::Linq::XNode* CloneNode();

  // Ctor Parameters [CppParam { name: "", ty: "XText", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XText(XText&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XText", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XText(XText const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XText();

public:
  /// @brief Field text, offset: 0x28, size: 0x8, def value: None
  ::StringW ___text;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::XText, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Linq::XText, ___text) == 0x28, "Offset mismatch!");

} // namespace System::Xml::Linq
NEED_NO_BOX(::System::Xml::Linq::XText);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XText*, "System.Xml.Linq", "XText");
