#pragma once
// IWYU pragma private; include "MS/Internal/Xml/XPath/Operator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MS/Internal/Xml/XPath/zzzz__AstNode_def.hpp"
#include "MS/Internal/Xml/XPath/zzzz__Operator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Operator)
namespace MS::Internal::Xml::XPath {
class AstNode;
}
namespace MS::Internal::Xml::XPath {
struct __AstNode__AstType;
}
namespace MS::Internal::Xml::XPath {
struct __Operator__Op;
}
namespace System::Xml::XPath {
struct XPathResultType;
}
// Forward declare root types
namespace MS::Internal::Xml::XPath {
struct __Operator__Op;
}
namespace MS::Internal::Xml::XPath {
class Operator;
}
// Write type traits
MARK_VAL_T(::MS::Internal::Xml::XPath::__Operator__Op);
MARK_REF_PTR_T(::MS::Internal::Xml::XPath::Operator);
// Type: ::Op
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace MS::Internal::Xml::XPath {
// Is value type: true
// CS Name: ::Operator::Op
struct CORDL_TYPE __Operator__Op {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Operator__Op_Unwrapped
  enum struct ____Operator__Op_Unwrapped : int32_t {
    __E_INVALID = static_cast<int32_t>(0x0),
    __E_OR = static_cast<int32_t>(0x1),
    __E_AND = static_cast<int32_t>(0x2),
    __E_EQ = static_cast<int32_t>(0x3),
    __E_NE = static_cast<int32_t>(0x4),
    __E_LT = static_cast<int32_t>(0x5),
    __E_LE = static_cast<int32_t>(0x6),
    __E_GT = static_cast<int32_t>(0x7),
    __E_GE = static_cast<int32_t>(0x8),
    __E_PLUS = static_cast<int32_t>(0x9),
    __E_MINUS = static_cast<int32_t>(0xa),
    __E_MUL = static_cast<int32_t>(0xb),
    __E_DIV = static_cast<int32_t>(0xc),
    __E_MOD = static_cast<int32_t>(0xd),
    __E_UNION = static_cast<int32_t>(0xe),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Operator__Op_Unwrapped() const noexcept {
    return static_cast<____Operator__Op_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Operator__Op();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Operator__Op(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AND value: static_cast<int32_t>(0x2)
  static ::MS::Internal::Xml::XPath::__Operator__Op const AND;

  /// @brief Field DIV value: static_cast<int32_t>(0xc)
  static ::MS::Internal::Xml::XPath::__Operator__Op const DIV;

  /// @brief Field EQ value: static_cast<int32_t>(0x3)
  static ::MS::Internal::Xml::XPath::__Operator__Op const EQ;

  /// @brief Field GE value: static_cast<int32_t>(0x8)
  static ::MS::Internal::Xml::XPath::__Operator__Op const GE;

  /// @brief Field GT value: static_cast<int32_t>(0x7)
  static ::MS::Internal::Xml::XPath::__Operator__Op const GT;

  /// @brief Field INVALID value: static_cast<int32_t>(0x0)
  static ::MS::Internal::Xml::XPath::__Operator__Op const INVALID;

  /// @brief Field LE value: static_cast<int32_t>(0x6)
  static ::MS::Internal::Xml::XPath::__Operator__Op const LE;

  /// @brief Field LT value: static_cast<int32_t>(0x5)
  static ::MS::Internal::Xml::XPath::__Operator__Op const LT;

  /// @brief Field MINUS value: static_cast<int32_t>(0xa)
  static ::MS::Internal::Xml::XPath::__Operator__Op const MINUS;

  /// @brief Field MOD value: static_cast<int32_t>(0xd)
  static ::MS::Internal::Xml::XPath::__Operator__Op const MOD;

  /// @brief Field MUL value: static_cast<int32_t>(0xb)
  static ::MS::Internal::Xml::XPath::__Operator__Op const MUL;

  /// @brief Field NE value: static_cast<int32_t>(0x4)
  static ::MS::Internal::Xml::XPath::__Operator__Op const NE;

  /// @brief Field OR value: static_cast<int32_t>(0x1)
  static ::MS::Internal::Xml::XPath::__Operator__Op const OR;

  /// @brief Field PLUS value: static_cast<int32_t>(0x9)
  static ::MS::Internal::Xml::XPath::__Operator__Op const PLUS;

  /// @brief Field UNION value: static_cast<int32_t>(0xe)
  static ::MS::Internal::Xml::XPath::__Operator__Op const UNION;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7746 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::MS::Internal::Xml::XPath::__Operator__Op, 0x4>, "Size mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::__Operator__Op, value__) == 0x0, "Offset mismatch!");

} // namespace MS::Internal::Xml::XPath
// Type: MS.Internal.Xml.XPath::Operator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace MS::Internal::Xml::XPath {
// Is value type: false
// CS Name: ::MS.Internal.Xml.XPath::Operator*
class CORDL_TYPE Operator : public ::MS::Internal::Xml::XPath::AstNode {
public:
  // Declarations
  using Op = ::MS::Internal::Xml::XPath::__Operator__Op;

  __declspec(property(get = get_ReturnType)) ::System::Xml::XPath::XPathResultType ReturnType;

  __declspec(property(get = get_Type)) ::MS::Internal::Xml::XPath::__AstNode__AstType Type;

  /// @brief Field _opType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__opType, put = __cordl_internal_set__opType)) ::MS::Internal::Xml::XPath::__Operator__Op _opType;

  /// @brief Field _opnd1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__opnd1, put = __cordl_internal_set__opnd1)) ::MS::Internal::Xml::XPath::AstNode* _opnd1;

  /// @brief Field _opnd2, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__opnd2, put = __cordl_internal_set__opnd2)) ::MS::Internal::Xml::XPath::AstNode* _opnd2;

  /// @brief Field s_invertOp, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_invertOp, put = setStaticF_s_invertOp)) ::ArrayW<::MS::Internal::Xml::XPath::__Operator__Op, ::Array<::MS::Internal::Xml::XPath::__Operator__Op>*>
      s_invertOp;

  static inline ::MS::Internal::Xml::XPath::Operator* New_ctor(::MS::Internal::Xml::XPath::__Operator__Op op, ::MS::Internal::Xml::XPath::AstNode* opnd1, ::MS::Internal::Xml::XPath::AstNode* opnd2);

  constexpr ::MS::Internal::Xml::XPath::__Operator__Op const& __cordl_internal_get__opType() const;

  constexpr ::MS::Internal::Xml::XPath::__Operator__Op& __cordl_internal_get__opType();

  constexpr ::MS::Internal::Xml::XPath::AstNode*& __cordl_internal_get__opnd1();

  constexpr ::cordl_internals::to_const_pointer<::MS::Internal::Xml::XPath::AstNode*> const& __cordl_internal_get__opnd1() const;

  constexpr ::MS::Internal::Xml::XPath::AstNode*& __cordl_internal_get__opnd2();

  constexpr ::cordl_internals::to_const_pointer<::MS::Internal::Xml::XPath::AstNode*> const& __cordl_internal_get__opnd2() const;

  constexpr void __cordl_internal_set__opType(::MS::Internal::Xml::XPath::__Operator__Op value);

  constexpr void __cordl_internal_set__opnd1(::MS::Internal::Xml::XPath::AstNode* value);

  constexpr void __cordl_internal_set__opnd2(::MS::Internal::Xml::XPath::AstNode* value);

  /// @brief Method .ctor, addr 0x428fa98, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::MS::Internal::Xml::XPath::__Operator__Op op, ::MS::Internal::Xml::XPath::AstNode* opnd1, ::MS::Internal::Xml::XPath::AstNode* opnd2);

  static inline ::ArrayW<::MS::Internal::Xml::XPath::__Operator__Op, ::Array<::MS::Internal::Xml::XPath::__Operator__Op>*> getStaticF_s_invertOp();

  /// @brief Method get_ReturnType, addr 0x428fadc, size 0x24, virtual true, abstract: false, final false
  inline ::System::Xml::XPath::XPathResultType get_ReturnType();

  /// @brief Method get_Type, addr 0x428fad4, size 0x8, virtual true, abstract: false, final false
  inline ::MS::Internal::Xml::XPath::__AstNode__AstType get_Type();

  static inline void setStaticF_s_invertOp(::ArrayW<::MS::Internal::Xml::XPath::__Operator__Op, ::Array<::MS::Internal::Xml::XPath::__Operator__Op>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Operator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Operator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Operator(Operator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Operator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Operator(Operator const&) = delete;

  /// @brief Field _opType, offset: 0x10, size: 0x4, def value: None
  ::MS::Internal::Xml::XPath::__Operator__Op ____opType;

  /// @brief Field _opnd1, offset: 0x18, size: 0x8, def value: None
  ::MS::Internal::Xml::XPath::AstNode* ____opnd1;

  /// @brief Field _opnd2, offset: 0x20, size: 0x8, def value: None
  ::MS::Internal::Xml::XPath::AstNode* ____opnd2;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7747 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::MS::Internal::Xml::XPath::Operator, 0x28>, "Size mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::Operator, ____opType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::Operator, ____opnd1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::Operator, ____opnd2) == 0x20, "Offset mismatch!");

} // namespace MS::Internal::Xml::XPath
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::XPath::__Operator__Op, "MS.Internal.Xml.XPath", "Operator/Op");
NEED_NO_BOX(::MS::Internal::Xml::XPath::Operator);
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::XPath::Operator*, "MS.Internal.Xml.XPath", "Operator");
