#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Linq/zzzz__XNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XComment)
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
class XComment;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Linq::XComment);
// Type: System.Xml.Linq::XComment
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Linq {
// Is value type: false
// CS Name: ::System.Xml.Linq::XComment*
class CORDL_TYPE XComment : public ::System::Xml::Linq::XNode {
public:
  // Declarations
  __declspec(property(get = get_NodeType))::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_Value, put = set_Value))::StringW Value;

  /// @brief Field value, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value))::StringW value;

  /// @brief Method CloneNode, addr 0x29a731c, size 0x60, virtual true, abstract: false, final false
  inline ::System::Xml::Linq::XNode* CloneNode();

  static inline ::System::Xml::Linq::XComment* New_ctor(::System::Xml::Linq::XComment* other);

  static inline ::System::Xml::Linq::XComment* New_ctor(::StringW value);

  /// @brief Method WriteTo, addr 0x29a72a8, size 0x74, virtual true, abstract: false, final false
  inline void WriteTo(::System::Xml::XmlWriter* writer);

  constexpr ::StringW const& __cordl_internal_get_value() const;

  constexpr ::StringW& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_value(::StringW value);

  /// @brief Method .ctor, addr 0x29a7128, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Linq::XComment* other);

  /// @brief Method .ctor, addr 0x29a70a8, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  /// @brief Method get_NodeType, addr 0x29a71a4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_Value, addr 0x29a71ac, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method set_Value, addr 0x29a71b4, size 0xf4, virtual false, abstract: false, final false
  inline void set_Value(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XComment();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XComment", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XComment(XComment&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XComment", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XComment(XComment const&) = delete;

  /// @brief Field value, offset: 0x28, size: 0x8, def value: None
  ::StringW ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::XComment, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Linq::XComment, ___value) == 0x28, "Offset mismatch!");

} // namespace System::Xml::Linq
NEED_NO_BOX(::System::Xml::Linq::XComment);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XComment*, "System.Xml.Linq", "XComment");
