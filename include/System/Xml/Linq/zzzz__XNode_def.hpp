#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Linq/zzzz__XObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XNode)
namespace System::Xml::Linq {
struct SaveOptions;
}
namespace System::Xml {
class XmlWriter;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace System::Xml::Linq {
class XNode;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Linq::XNode);
// Type: System.Xml.Linq::XNode
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15454))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15453))
// CS Name: ::System.Xml.Linq::XNode*
class CORDL_TYPE XNode : public ::System::Xml::Linq::XObject {
public:
  // Declarations
  /// @brief Field next, offset 0x20, size 0x8
  __declspec(property(get = __get_next, put = __set_next))::System::Xml::Linq::XNode* next;

  constexpr ::System::Xml::Linq::XNode*& __get_next();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::XNode*> const& __get_next() const;

  constexpr void __set_next(::System::Xml::Linq::XNode* value);

  static inline ::System::Xml::Linq::XNode* New_ctor();

  /// @brief Method .ctor addr 0x285be04 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method Remove addr 0x2860be0 size 0x64 virtual false final false
  inline void Remove();

  /// @brief Method ToString addr 0x2860c44 size 0x1c virtual true final false
  inline ::StringW ToString();

  /// @brief Method WriteTo addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void WriteTo(::System::Xml::XmlWriter* writer);

  /// @brief Method AppendText addr 0x28611b0 size 0x4 virtual true final false
  inline void AppendText(::System::Text::StringBuilder* sb);

  /// @brief Method CloneNode addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Xml::Linq::XNode* CloneNode();

  /// @brief Method GetXmlString addr 0x2860d40 size 0x470 virtual false final false
  inline ::StringW GetXmlString(::System::Xml::Linq::SaveOptions o);

  // Ctor Parameters [CppParam { name: "", ty: "XNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XNode(XNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XNode(XNode const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XNode();

public:
  /// @brief Field next, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::Linq::XNode* ___next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::XNode, 0x28>, "Size mismatch!");

} // namespace System::Xml::Linq
NEED_NO_BOX(::System::Xml::Linq::XNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XNode*, "System.Xml.Linq", "XNode");
