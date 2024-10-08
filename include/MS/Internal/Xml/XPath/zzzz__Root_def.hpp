#pragma once
// IWYU pragma private; include "MS/Internal/Xml/XPath/Root.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MS/Internal/Xml/XPath/zzzz__AstNode_def.hpp"
CORDL_MODULE_EXPORT(Root)
namespace MS::Internal::Xml::XPath {
struct __AstNode__AstType;
}
namespace System::Xml::XPath {
struct XPathResultType;
}
// Forward declare root types
namespace MS::Internal::Xml::XPath {
class Root;
}
// Write type traits
MARK_REF_PTR_T(::MS::Internal::Xml::XPath::Root);
// Type: MS.Internal.Xml.XPath::Root
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace MS::Internal::Xml::XPath {
// Is value type: false
// CS Name: ::MS.Internal.Xml.XPath::Root*
class CORDL_TYPE Root : public ::MS::Internal::Xml::XPath::AstNode {
public:
  // Declarations
  __declspec(property(get = get_ReturnType)) ::System::Xml::XPath::XPathResultType ReturnType;

  __declspec(property(get = get_Type)) ::MS::Internal::Xml::XPath::__AstNode__AstType Type;

  static inline ::MS::Internal::Xml::XPath::Root* New_ctor();

  /// @brief Method .ctor, addr 0x428fb94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ReturnType, addr 0x428fba4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XPath::XPathResultType get_ReturnType();

  /// @brief Method get_Type, addr 0x428fb9c, size 0x8, virtual true, abstract: false, final false
  inline ::MS::Internal::Xml::XPath::__AstNode__AstType get_Type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Root();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Root", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Root(Root&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Root", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Root(Root const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7748 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::MS::Internal::Xml::XPath::Root, 0x10>, "Size mismatch!");

} // namespace MS::Internal::Xml::XPath
NEED_NO_BOX(::MS::Internal::Xml::XPath::Root);
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::XPath::Root*, "MS.Internal.Xml.XPath", "Root");
