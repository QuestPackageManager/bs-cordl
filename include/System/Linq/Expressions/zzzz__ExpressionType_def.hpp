#pragma once
// IWYU pragma private; include "System/Linq/Expressions/ExpressionType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExpressionType)
// Forward declare root types
namespace System::Linq::Expressions {
struct ExpressionType;
}
// Write type traits
MARK_VAL_T(::System::Linq::Expressions::ExpressionType);
// Dependencies
namespace System::Linq::Expressions {
// Is value type: true
// CS Name: System.Linq.Expressions.ExpressionType
struct CORDL_TYPE ExpressionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ExpressionType_Unwrapped
  enum struct __ExpressionType_Unwrapped : int32_t {
    __E_Add = static_cast<int32_t>(0x0),
    __E_AddChecked = static_cast<int32_t>(0x1),
    __E_And = static_cast<int32_t>(0x2),
    __E_AndAlso = static_cast<int32_t>(0x3),
    __E_ArrayLength = static_cast<int32_t>(0x4),
    __E_ArrayIndex = static_cast<int32_t>(0x5),
    __E_Call = static_cast<int32_t>(0x6),
    __E_Coalesce = static_cast<int32_t>(0x7),
    __E_Conditional = static_cast<int32_t>(0x8),
    __E_Constant = static_cast<int32_t>(0x9),
    __E_Convert = static_cast<int32_t>(0xa),
    __E_ConvertChecked = static_cast<int32_t>(0xb),
    __E_Divide = static_cast<int32_t>(0xc),
    __E_Equal = static_cast<int32_t>(0xd),
    __E_ExclusiveOr = static_cast<int32_t>(0xe),
    __E_GreaterThan = static_cast<int32_t>(0xf),
    __E_GreaterThanOrEqual = static_cast<int32_t>(0x10),
    __E_Invoke = static_cast<int32_t>(0x11),
    __E_Lambda = static_cast<int32_t>(0x12),
    __E_LeftShift = static_cast<int32_t>(0x13),
    __E_LessThan = static_cast<int32_t>(0x14),
    __E_LessThanOrEqual = static_cast<int32_t>(0x15),
    __E_ListInit = static_cast<int32_t>(0x16),
    __E_MemberAccess = static_cast<int32_t>(0x17),
    __E_MemberInit = static_cast<int32_t>(0x18),
    __E_Modulo = static_cast<int32_t>(0x19),
    __E_Multiply = static_cast<int32_t>(0x1a),
    __E_MultiplyChecked = static_cast<int32_t>(0x1b),
    __E_Negate = static_cast<int32_t>(0x1c),
    __E_UnaryPlus = static_cast<int32_t>(0x1d),
    __E_NegateChecked = static_cast<int32_t>(0x1e),
    __E_New = static_cast<int32_t>(0x1f),
    __E_NewArrayInit = static_cast<int32_t>(0x20),
    __E_NewArrayBounds = static_cast<int32_t>(0x21),
    __E_Not = static_cast<int32_t>(0x22),
    __E_NotEqual = static_cast<int32_t>(0x23),
    __E_Or = static_cast<int32_t>(0x24),
    __E_OrElse = static_cast<int32_t>(0x25),
    __E_Parameter = static_cast<int32_t>(0x26),
    __E_Power = static_cast<int32_t>(0x27),
    __E_Quote = static_cast<int32_t>(0x28),
    __E_RightShift = static_cast<int32_t>(0x29),
    __E_Subtract = static_cast<int32_t>(0x2a),
    __E_SubtractChecked = static_cast<int32_t>(0x2b),
    __E_TypeAs = static_cast<int32_t>(0x2c),
    __E_TypeIs = static_cast<int32_t>(0x2d),
    __E_Assign = static_cast<int32_t>(0x2e),
    __E_Block = static_cast<int32_t>(0x2f),
    __E_DebugInfo = static_cast<int32_t>(0x30),
    __E_Decrement = static_cast<int32_t>(0x31),
    __E_Dynamic = static_cast<int32_t>(0x32),
    __E_Default = static_cast<int32_t>(0x33),
    __E_Extension = static_cast<int32_t>(0x34),
    __E_Goto = static_cast<int32_t>(0x35),
    __E_Increment = static_cast<int32_t>(0x36),
    __E_Index = static_cast<int32_t>(0x37),
    __E_Label = static_cast<int32_t>(0x38),
    __E_RuntimeVariables = static_cast<int32_t>(0x39),
    __E_Loop = static_cast<int32_t>(0x3a),
    __E_Switch = static_cast<int32_t>(0x3b),
    __E_Throw = static_cast<int32_t>(0x3c),
    __E_Try = static_cast<int32_t>(0x3d),
    __E_Unbox = static_cast<int32_t>(0x3e),
    __E_AddAssign = static_cast<int32_t>(0x3f),
    __E_AndAssign = static_cast<int32_t>(0x40),
    __E_DivideAssign = static_cast<int32_t>(0x41),
    __E_ExclusiveOrAssign = static_cast<int32_t>(0x42),
    __E_LeftShiftAssign = static_cast<int32_t>(0x43),
    __E_ModuloAssign = static_cast<int32_t>(0x44),
    __E_MultiplyAssign = static_cast<int32_t>(0x45),
    __E_OrAssign = static_cast<int32_t>(0x46),
    __E_PowerAssign = static_cast<int32_t>(0x47),
    __E_RightShiftAssign = static_cast<int32_t>(0x48),
    __E_SubtractAssign = static_cast<int32_t>(0x49),
    __E_AddAssignChecked = static_cast<int32_t>(0x4a),
    __E_MultiplyAssignChecked = static_cast<int32_t>(0x4b),
    __E_SubtractAssignChecked = static_cast<int32_t>(0x4c),
    __E_PreIncrementAssign = static_cast<int32_t>(0x4d),
    __E_PreDecrementAssign = static_cast<int32_t>(0x4e),
    __E_PostIncrementAssign = static_cast<int32_t>(0x4f),
    __E_PostDecrementAssign = static_cast<int32_t>(0x50),
    __E_TypeEqual = static_cast<int32_t>(0x51),
    __E_OnesComplement = static_cast<int32_t>(0x52),
    __E_IsTrue = static_cast<int32_t>(0x53),
    __E_IsFalse = static_cast<int32_t>(0x54),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ExpressionType_Unwrapped() const noexcept {
    return static_cast<__ExpressionType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ExpressionType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ExpressionType(int32_t value__) noexcept;

  /// @brief Field Add value: I32(0)
  static ::System::Linq::Expressions::ExpressionType const Add;

  /// @brief Field AddAssign value: I32(63)
  static ::System::Linq::Expressions::ExpressionType const AddAssign;

  /// @brief Field AddAssignChecked value: I32(74)
  static ::System::Linq::Expressions::ExpressionType const AddAssignChecked;

  /// @brief Field AddChecked value: I32(1)
  static ::System::Linq::Expressions::ExpressionType const AddChecked;

  /// @brief Field And value: I32(2)
  static ::System::Linq::Expressions::ExpressionType const And;

  /// @brief Field AndAlso value: I32(3)
  static ::System::Linq::Expressions::ExpressionType const AndAlso;

  /// @brief Field AndAssign value: I32(64)
  static ::System::Linq::Expressions::ExpressionType const AndAssign;

  /// @brief Field ArrayIndex value: I32(5)
  static ::System::Linq::Expressions::ExpressionType const ArrayIndex;

  /// @brief Field ArrayLength value: I32(4)
  static ::System::Linq::Expressions::ExpressionType const ArrayLength;

  /// @brief Field Assign value: I32(46)
  static ::System::Linq::Expressions::ExpressionType const Assign;

  /// @brief Field Block value: I32(47)
  static ::System::Linq::Expressions::ExpressionType const Block;

  /// @brief Field Call value: I32(6)
  static ::System::Linq::Expressions::ExpressionType const Call;

  /// @brief Field Coalesce value: I32(7)
  static ::System::Linq::Expressions::ExpressionType const Coalesce;

  /// @brief Field Conditional value: I32(8)
  static ::System::Linq::Expressions::ExpressionType const Conditional;

  /// @brief Field Constant value: I32(9)
  static ::System::Linq::Expressions::ExpressionType const Constant;

  /// @brief Field Convert value: I32(10)
  static ::System::Linq::Expressions::ExpressionType const Convert;

  /// @brief Field ConvertChecked value: I32(11)
  static ::System::Linq::Expressions::ExpressionType const ConvertChecked;

  /// @brief Field DebugInfo value: I32(48)
  static ::System::Linq::Expressions::ExpressionType const DebugInfo;

  /// @brief Field Decrement value: I32(49)
  static ::System::Linq::Expressions::ExpressionType const Decrement;

  /// @brief Field Default value: I32(51)
  static ::System::Linq::Expressions::ExpressionType const Default;

  /// @brief Field Divide value: I32(12)
  static ::System::Linq::Expressions::ExpressionType const Divide;

  /// @brief Field DivideAssign value: I32(65)
  static ::System::Linq::Expressions::ExpressionType const DivideAssign;

  /// @brief Field Dynamic value: I32(50)
  static ::System::Linq::Expressions::ExpressionType const Dynamic;

  /// @brief Field Equal value: I32(13)
  static ::System::Linq::Expressions::ExpressionType const Equal;

  /// @brief Field ExclusiveOr value: I32(14)
  static ::System::Linq::Expressions::ExpressionType const ExclusiveOr;

  /// @brief Field ExclusiveOrAssign value: I32(66)
  static ::System::Linq::Expressions::ExpressionType const ExclusiveOrAssign;

  /// @brief Field Extension value: I32(52)
  static ::System::Linq::Expressions::ExpressionType const Extension;

  /// @brief Field Goto value: I32(53)
  static ::System::Linq::Expressions::ExpressionType const Goto;

  /// @brief Field GreaterThan value: I32(15)
  static ::System::Linq::Expressions::ExpressionType const GreaterThan;

  /// @brief Field GreaterThanOrEqual value: I32(16)
  static ::System::Linq::Expressions::ExpressionType const GreaterThanOrEqual;

  /// @brief Field Increment value: I32(54)
  static ::System::Linq::Expressions::ExpressionType const Increment;

  /// @brief Field Index value: I32(55)
  static ::System::Linq::Expressions::ExpressionType const Index;

  /// @brief Field Invoke value: I32(17)
  static ::System::Linq::Expressions::ExpressionType const Invoke;

  /// @brief Field IsFalse value: I32(84)
  static ::System::Linq::Expressions::ExpressionType const IsFalse;

  /// @brief Field IsTrue value: I32(83)
  static ::System::Linq::Expressions::ExpressionType const IsTrue;

  /// @brief Field Label value: I32(56)
  static ::System::Linq::Expressions::ExpressionType const Label;

  /// @brief Field Lambda value: I32(18)
  static ::System::Linq::Expressions::ExpressionType const Lambda;

  /// @brief Field LeftShift value: I32(19)
  static ::System::Linq::Expressions::ExpressionType const LeftShift;

  /// @brief Field LeftShiftAssign value: I32(67)
  static ::System::Linq::Expressions::ExpressionType const LeftShiftAssign;

  /// @brief Field LessThan value: I32(20)
  static ::System::Linq::Expressions::ExpressionType const LessThan;

  /// @brief Field LessThanOrEqual value: I32(21)
  static ::System::Linq::Expressions::ExpressionType const LessThanOrEqual;

  /// @brief Field ListInit value: I32(22)
  static ::System::Linq::Expressions::ExpressionType const ListInit;

  /// @brief Field Loop value: I32(58)
  static ::System::Linq::Expressions::ExpressionType const Loop;

  /// @brief Field MemberAccess value: I32(23)
  static ::System::Linq::Expressions::ExpressionType const MemberAccess;

  /// @brief Field MemberInit value: I32(24)
  static ::System::Linq::Expressions::ExpressionType const MemberInit;

  /// @brief Field Modulo value: I32(25)
  static ::System::Linq::Expressions::ExpressionType const Modulo;

  /// @brief Field ModuloAssign value: I32(68)
  static ::System::Linq::Expressions::ExpressionType const ModuloAssign;

  /// @brief Field Multiply value: I32(26)
  static ::System::Linq::Expressions::ExpressionType const Multiply;

  /// @brief Field MultiplyAssign value: I32(69)
  static ::System::Linq::Expressions::ExpressionType const MultiplyAssign;

  /// @brief Field MultiplyAssignChecked value: I32(75)
  static ::System::Linq::Expressions::ExpressionType const MultiplyAssignChecked;

  /// @brief Field MultiplyChecked value: I32(27)
  static ::System::Linq::Expressions::ExpressionType const MultiplyChecked;

  /// @brief Field Negate value: I32(28)
  static ::System::Linq::Expressions::ExpressionType const Negate;

  /// @brief Field NegateChecked value: I32(30)
  static ::System::Linq::Expressions::ExpressionType const NegateChecked;

  /// @brief Field New value: I32(31)
  static ::System::Linq::Expressions::ExpressionType const New;

  /// @brief Field NewArrayBounds value: I32(33)
  static ::System::Linq::Expressions::ExpressionType const NewArrayBounds;

  /// @brief Field NewArrayInit value: I32(32)
  static ::System::Linq::Expressions::ExpressionType const NewArrayInit;

  /// @brief Field Not value: I32(34)
  static ::System::Linq::Expressions::ExpressionType const Not;

  /// @brief Field NotEqual value: I32(35)
  static ::System::Linq::Expressions::ExpressionType const NotEqual;

  /// @brief Field OnesComplement value: I32(82)
  static ::System::Linq::Expressions::ExpressionType const OnesComplement;

  /// @brief Field Or value: I32(36)
  static ::System::Linq::Expressions::ExpressionType const Or;

  /// @brief Field OrAssign value: I32(70)
  static ::System::Linq::Expressions::ExpressionType const OrAssign;

  /// @brief Field OrElse value: I32(37)
  static ::System::Linq::Expressions::ExpressionType const OrElse;

  /// @brief Field Parameter value: I32(38)
  static ::System::Linq::Expressions::ExpressionType const Parameter;

  /// @brief Field PostDecrementAssign value: I32(80)
  static ::System::Linq::Expressions::ExpressionType const PostDecrementAssign;

  /// @brief Field PostIncrementAssign value: I32(79)
  static ::System::Linq::Expressions::ExpressionType const PostIncrementAssign;

  /// @brief Field Power value: I32(39)
  static ::System::Linq::Expressions::ExpressionType const Power;

  /// @brief Field PowerAssign value: I32(71)
  static ::System::Linq::Expressions::ExpressionType const PowerAssign;

  /// @brief Field PreDecrementAssign value: I32(78)
  static ::System::Linq::Expressions::ExpressionType const PreDecrementAssign;

  /// @brief Field PreIncrementAssign value: I32(77)
  static ::System::Linq::Expressions::ExpressionType const PreIncrementAssign;

  /// @brief Field Quote value: I32(40)
  static ::System::Linq::Expressions::ExpressionType const Quote;

  /// @brief Field RightShift value: I32(41)
  static ::System::Linq::Expressions::ExpressionType const RightShift;

  /// @brief Field RightShiftAssign value: I32(72)
  static ::System::Linq::Expressions::ExpressionType const RightShiftAssign;

  /// @brief Field RuntimeVariables value: I32(57)
  static ::System::Linq::Expressions::ExpressionType const RuntimeVariables;

  /// @brief Field Subtract value: I32(42)
  static ::System::Linq::Expressions::ExpressionType const Subtract;

  /// @brief Field SubtractAssign value: I32(73)
  static ::System::Linq::Expressions::ExpressionType const SubtractAssign;

  /// @brief Field SubtractAssignChecked value: I32(76)
  static ::System::Linq::Expressions::ExpressionType const SubtractAssignChecked;

  /// @brief Field SubtractChecked value: I32(43)
  static ::System::Linq::Expressions::ExpressionType const SubtractChecked;

  /// @brief Field Switch value: I32(59)
  static ::System::Linq::Expressions::ExpressionType const Switch;

  /// @brief Field Throw value: I32(60)
  static ::System::Linq::Expressions::ExpressionType const Throw;

  /// @brief Field Try value: I32(61)
  static ::System::Linq::Expressions::ExpressionType const Try;

  /// @brief Field TypeAs value: I32(44)
  static ::System::Linq::Expressions::ExpressionType const TypeAs;

  /// @brief Field TypeEqual value: I32(81)
  static ::System::Linq::Expressions::ExpressionType const TypeEqual;

  /// @brief Field TypeIs value: I32(45)
  static ::System::Linq::Expressions::ExpressionType const TypeIs;

  /// @brief Field UnaryPlus value: I32(29)
  static ::System::Linq::Expressions::ExpressionType const UnaryPlus;

  /// @brief Field Unbox value: I32(62)
  static ::System::Linq::Expressions::ExpressionType const Unbox;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13672 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::ExpressionType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::ExpressionType, 0x4>, "Size mismatch!");

} // namespace System::Linq::Expressions
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::ExpressionType, "System.Linq.Expressions", "ExpressionType");
