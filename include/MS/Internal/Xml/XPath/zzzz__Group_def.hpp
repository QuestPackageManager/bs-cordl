#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MS/Internal/Xml/XPath/zzzz__AstNode_def.hpp"
CORDL_MODULE_EXPORT(Group)
namespace MS::Internal::Xml::XPath {
class AstNode;
}
namespace MS::Internal::Xml::XPath {
struct __AstNode__AstType;
}
namespace System::Xml::XPath {
struct XPathResultType;
}
// Forward declare root types
namespace MS::Internal::Xml::XPath {
class Group;
}
// Write type traits
MARK_REF_PTR_T(::MS::Internal::Xml::XPath::Group);
// Type: MS.Internal.Xml.XPath::Group
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace MS::Internal::Xml::XPath {
// Is value type: false
// CS Name: ::MS.Internal.Xml.XPath::Group*
class CORDL_TYPE Group : public ::MS::Internal::Xml::XPath::AstNode {
public:
  // Declarations
  __declspec(property(get = get_ReturnType))::System::Xml::XPath::XPathResultType ReturnType;

  __declspec(property(get = get_Type))::MS::Internal::Xml::XPath::__AstNode__AstType Type;

  /// @brief Field _groupNode, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__groupNode, put = __cordl_internal_set__groupNode))::MS::Internal::Xml::XPath::AstNode* _groupNode;

  static inline ::MS::Internal::Xml::XPath::Group* New_ctor(::MS::Internal::Xml::XPath::AstNode* groupNode);

  constexpr ::MS::Internal::Xml::XPath::AstNode*& __cordl_internal_get__groupNode();

  constexpr ::cordl_internals::to_const_pointer<::MS::Internal::Xml::XPath::AstNode*> const& __cordl_internal_get__groupNode() const;

  constexpr void __cordl_internal_set__groupNode(::MS::Internal::Xml::XPath::AstNode* value);

  /// @brief Method .ctor, addr 0x2d5ecc4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::MS::Internal::Xml::XPath::AstNode* groupNode);

  /// @brief Method get_ReturnType, addr 0x2d5ecf4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XPath::XPathResultType get_ReturnType();

  /// @brief Method get_Type, addr 0x2d5ecec, size 0x8, virtual true, abstract: false, final false
  inline ::MS::Internal::Xml::XPath::__AstNode__AstType get_Type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Group();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Group", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Group(Group&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Group", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Group(Group const&) = delete;

  /// @brief Field _groupNode, offset: 0x10, size: 0x8, def value: None
  ::MS::Internal::Xml::XPath::AstNode* ____groupNode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::MS::Internal::Xml::XPath::Group, 0x18>, "Size mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::Group, ____groupNode) == 0x10, "Offset mismatch!");

} // namespace MS::Internal::Xml::XPath
NEED_NO_BOX(::MS::Internal::Xml::XPath::Group);
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::XPath::Group*, "MS.Internal.Xml.XPath", "Group");
