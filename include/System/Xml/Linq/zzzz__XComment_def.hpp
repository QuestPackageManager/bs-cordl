#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Linq/zzzz__XNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XComment)
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlWriter;
}
namespace System::Xml::Linq {
class XNode;
}
// Forward declare root types
namespace System::Xml::Linq {
class XComment;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Linq::XComment);
// Type: System.Xml.Linq::XComment
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15453))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15434))
// CS Name: ::System.Xml.Linq::XComment*
class CORDL_TYPE XComment : public ::System::Xml::Linq::XNode {
public:
  // Declarations
  /// @brief Field value, offset 0x28, size 0x8
  __declspec(property(get = __get_value, put = __set_value))::StringW value;

  __declspec(property(get = get_NodeType))::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_Value, put = set_Value))::StringW Value;

  constexpr ::StringW& __get_value();

  constexpr ::StringW const& __get_value() const;

  constexpr void __set_value(::StringW value);

  static inline ::System::Xml::Linq::XComment* New_ctor(::StringW value);

  /// @brief Method .ctor addr 0x285bd8c size 0x78 virtual false final false
  inline void _ctor(::StringW value);

  static inline ::System::Xml::Linq::XComment* New_ctor(::System::Xml::Linq::XComment* other);

  /// @brief Method .ctor addr 0x285be0c size 0x7c virtual false final false
  inline void _ctor(::System::Xml::Linq::XComment* other);

  /// @brief Method get_NodeType addr 0x285be88 size 0x8 virtual true final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_Value addr 0x285be90 size 0x8 virtual false final false
  inline ::StringW get_Value();

  /// @brief Method set_Value addr 0x285be98 size 0xf4 virtual false final false
  inline void set_Value(::StringW value);

  /// @brief Method WriteTo addr 0x285bf8c size 0x74 virtual true final false
  inline void WriteTo(::System::Xml::XmlWriter* writer);

  /// @brief Method CloneNode addr 0x285c000 size 0x60 virtual true final false
  inline ::System::Xml::Linq::XNode* CloneNode();

  // Ctor Parameters [CppParam { name: "", ty: "XComment", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XComment(XComment&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XComment", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XComment(XComment const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XComment();

public:
  /// @brief Field value, offset: 0x28, size: 0x8, def value: None
  ::StringW ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::XComment, 0x30>, "Size mismatch!");

} // namespace System::Xml::Linq
NEED_NO_BOX(::System::Xml::Linq::XComment);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XComment*, "System.Xml.Linq", "XComment");
