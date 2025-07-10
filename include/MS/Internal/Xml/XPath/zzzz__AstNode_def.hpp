#pragma once
// IWYU pragma private; include "MS/Internal/Xml/XPath/AstNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AstNode)
namespace MS::Internal::Xml::XPath {
struct AstNode_AstType;
}
namespace System::Xml::XPath {
struct XPathResultType;
}
// Forward declare root types
namespace MS::Internal::Xml::XPath {
struct AstNode_AstType;
}
namespace MS::Internal::Xml::XPath {
class AstNode;
}
// Write type traits
MARK_VAL_T(::MS::Internal::Xml::XPath::AstNode_AstType);
MARK_REF_PTR_T(::MS::Internal::Xml::XPath::AstNode);
// Dependencies
namespace MS::Internal::Xml::XPath {
// Is value type: true
// CS Name: MS.Internal.Xml.XPath.AstNode/AstType
struct CORDL_TYPE AstNode_AstType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AstNode_AstType_Unwrapped
  enum struct __AstNode_AstType_Unwrapped : int32_t {
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
  constexpr operator __AstNode_AstType_Unwrapped() const noexcept {
    return static_cast<__AstNode_AstType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AstNode_AstType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AstNode_AstType(int32_t value__) noexcept;

  /// @brief Field Axis value: I32(0)
  static ::MS::Internal::Xml::XPath::AstNode_AstType const Axis;

  /// @brief Field ConstantOperand value: I32(3)
  static ::MS::Internal::Xml::XPath::AstNode_AstType const ConstantOperand;

  /// @brief Field Error value: I32(8)
  static ::MS::Internal::Xml::XPath::AstNode_AstType const Error;

  /// @brief Field Filter value: I32(2)
  static ::MS::Internal::Xml::XPath::AstNode_AstType const Filter;

  /// @brief Field Function value: I32(4)
  static ::MS::Internal::Xml::XPath::AstNode_AstType const Function;

  /// @brief Field Group value: I32(5)
  static ::MS::Internal::Xml::XPath::AstNode_AstType const Group;

  /// @brief Field Operator value: I32(1)
  static ::MS::Internal::Xml::XPath::AstNode_AstType const Operator;

  /// @brief Field Root value: I32(6)
  static ::MS::Internal::Xml::XPath::AstNode_AstType const Root;

  /// @brief Field Variable value: I32(7)
  static ::MS::Internal::Xml::XPath::AstNode_AstType const Variable;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7772 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MS::Internal::Xml::XPath::AstNode_AstType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::MS::Internal::Xml::XPath::AstNode_AstType, 0x4>, "Size mismatch!");

} // namespace MS::Internal::Xml::XPath
// Dependencies System.Object
namespace MS::Internal::Xml::XPath {
// Is value type: false
// CS Name: MS.Internal.Xml.XPath.AstNode
class CORDL_TYPE AstNode : public ::System::Object {
public:
  // Declarations
  using AstType = ::MS::Internal::Xml::XPath::AstNode_AstType;

  __declspec(property(get = get_ReturnType)) ::System::Xml::XPath::XPathResultType ReturnType;

  __declspec(property(get = get_Type)) ::MS::Internal::Xml::XPath::AstNode_AstType Type;

  static inline ::MS::Internal::Xml::XPath::AstNode* New_ctor();

  /// @brief Method .ctor, addr 0x4306504, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ReturnType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Xml::XPath::XPathResultType get_ReturnType();

  /// @brief Method get_Type, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::MS::Internal::Xml::XPath::AstNode_AstType get_Type();

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7773 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::MS::Internal::Xml::XPath::AstNode, 0x10>, "Size mismatch!");

} // namespace MS::Internal::Xml::XPath
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::XPath::AstNode_AstType, "MS.Internal.Xml.XPath", "AstNode/AstType");
NEED_NO_BOX(::MS::Internal::Xml::XPath::AstNode);
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::XPath::AstNode*, "MS.Internal.Xml.XPath", "AstNode");
