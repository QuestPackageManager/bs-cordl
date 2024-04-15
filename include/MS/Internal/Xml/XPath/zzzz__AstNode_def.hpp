#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AstNode)
namespace MS::Internal::Xml::XPath {
struct __AstNode__AstType;
}
namespace System::Xml::XPath {
struct XPathResultType;
}
// Forward declare root types
namespace MS::Internal::Xml::XPath {
struct __AstNode__AstType;
}
namespace MS::Internal::Xml::XPath {
class AstNode;
}
// Write type traits
MARK_VAL_T(::MS::Internal::Xml::XPath::__AstNode__AstType);
MARK_REF_PTR_T(::MS::Internal::Xml::XPath::AstNode);
// Type: ::AstType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace MS::Internal::Xml::XPath {
// Is value type: true
// CS Name: ::AstNode::AstType
struct CORDL_TYPE __AstNode__AstType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____AstNode__AstType_Unwrapped
  enum struct ____AstNode__AstType_Unwrapped : int32_t {
    __E_Axis = static_cast<int32_t>(0x0),
    __E_Operator = static_cast<int32_t>(0x1),
    __E_Filter = static_cast<int32_t>(0x2),
    __E_ConstantOperand = static_cast<int32_t>(0x3),
    __E_Function = static_cast<int32_t>(0x4),
    __E_Group = static_cast<int32_t>(0x5),
    __E_Root = static_cast<int32_t>(0x6),
    __E_Variable = static_cast<int32_t>(0x7),
    __E_Error = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____AstNode__AstType_Unwrapped() const noexcept {
    return static_cast<____AstNode__AstType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AstNode__AstType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __AstNode__AstType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Axis value: static_cast<int32_t>(0x0)
  static ::MS::Internal::Xml::XPath::__AstNode__AstType const Axis;

  /// @brief Field ConstantOperand value: static_cast<int32_t>(0x3)
  static ::MS::Internal::Xml::XPath::__AstNode__AstType const ConstantOperand;

  /// @brief Field Error value: static_cast<int32_t>(0x8)
  static ::MS::Internal::Xml::XPath::__AstNode__AstType const Error;

  /// @brief Field Filter value: static_cast<int32_t>(0x2)
  static ::MS::Internal::Xml::XPath::__AstNode__AstType const Filter;

  /// @brief Field Function value: static_cast<int32_t>(0x4)
  static ::MS::Internal::Xml::XPath::__AstNode__AstType const Function;

  /// @brief Field Group value: static_cast<int32_t>(0x5)
  static ::MS::Internal::Xml::XPath::__AstNode__AstType const Group;

  /// @brief Field Operator value: static_cast<int32_t>(0x1)
  static ::MS::Internal::Xml::XPath::__AstNode__AstType const Operator;

  /// @brief Field Root value: static_cast<int32_t>(0x6)
  static ::MS::Internal::Xml::XPath::__AstNode__AstType const Root;

  /// @brief Field Variable value: static_cast<int32_t>(0x7)
  static ::MS::Internal::Xml::XPath::__AstNode__AstType const Variable;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::MS::Internal::Xml::XPath::__AstNode__AstType, 0x4>, "Size mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::__AstNode__AstType, value__) == 0x0, "Offset mismatch!");

} // namespace MS::Internal::Xml::XPath
// Type: MS.Internal.Xml.XPath::AstNode
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace MS::Internal::Xml::XPath {
// Is value type: false
// CS Name: ::MS.Internal.Xml.XPath::AstNode*
class CORDL_TYPE AstNode : public ::System::Object {
public:
  // Declarations
  using AstType = ::MS::Internal::Xml::XPath::__AstNode__AstType;

  __declspec(property(get = get_ReturnType))::System::Xml::XPath::XPathResultType ReturnType;

  __declspec(property(get = get_Type))::MS::Internal::Xml::XPath::__AstNode__AstType Type;

  static inline ::MS::Internal::Xml::XPath::AstNode* New_ctor();

  /// @brief Method .ctor, addr 0x2d617a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ReturnType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Xml::XPath::XPathResultType get_ReturnType();

  /// @brief Method get_Type, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::MS::Internal::Xml::XPath::__AstNode__AstType get_Type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AstNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AstNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AstNode(AstNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AstNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AstNode(AstNode const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::MS::Internal::Xml::XPath::AstNode, 0x10>, "Size mismatch!");

} // namespace MS::Internal::Xml::XPath
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::XPath::__AstNode__AstType, "MS.Internal.Xml.XPath", "AstNode/AstType");
NEED_NO_BOX(::MS::Internal::Xml::XPath::AstNode);
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::XPath::AstNode*, "MS.Internal.Xml.XPath", "AstNode");
