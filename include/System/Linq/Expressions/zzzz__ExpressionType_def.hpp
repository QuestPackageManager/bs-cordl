#pragma once
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
// Type: System.Linq.Expressions::ExpressionType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14302))
// CS Name: ::System.Linq.Expressions::ExpressionType
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ExpressionType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ExpressionType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Add value: static_cast<int32_t>(0x0)
  static ::System::Linq::Expressions::ExpressionType const Add;

  /// @brief Field AddChecked value: static_cast<int32_t>(0x1)
  static ::System::Linq::Expressions::ExpressionType const AddChecked;

  /// @brief Field And value: static_cast<int32_t>(0x2)
  static ::System::Linq::Expressions::ExpressionType const And;

  /// @brief Field AndAlso value: static_cast<int32_t>(0x3)
  static ::System::Linq::Expressions::ExpressionType const AndAlso;

  /// @brief Field ArrayLength value: static_cast<int32_t>(0x4)
  static ::System::Linq::Expressions::ExpressionType const ArrayLength;

  /// @brief Field ArrayIndex value: static_cast<int32_t>(0x5)
  static ::System::Linq::Expressions::ExpressionType const ArrayIndex;

  /// @brief Field Call value: static_cast<int32_t>(0x6)
  static ::System::Linq::Expressions::ExpressionType const Call;

  /// @brief Field Coalesce value: static_cast<int32_t>(0x7)
  static ::System::Linq::Expressions::ExpressionType const Coalesce;

  /// @brief Field Conditional value: static_cast<int32_t>(0x8)
  static ::System::Linq::Expressions::ExpressionType const Conditional;

  /// @brief Field Constant value: static_cast<int32_t>(0x9)
  static ::System::Linq::Expressions::ExpressionType const Constant;

  /// @brief Field Convert value: static_cast<int32_t>(0xa)
  static ::System::Linq::Expressions::ExpressionType const Convert;

  /// @brief Field ConvertChecked value: static_cast<int32_t>(0xb)
  static ::System::Linq::Expressions::ExpressionType const ConvertChecked;

  /// @brief Field Divide value: static_cast<int32_t>(0xc)
  static ::System::Linq::Expressions::ExpressionType const Divide;

  /// @brief Field Equal value: static_cast<int32_t>(0xd)
  static ::System::Linq::Expressions::ExpressionType const Equal;

  /// @brief Field ExclusiveOr value: static_cast<int32_t>(0xe)
  static ::System::Linq::Expressions::ExpressionType const ExclusiveOr;

  /// @brief Field GreaterThan value: static_cast<int32_t>(0xf)
  static ::System::Linq::Expressions::ExpressionType const GreaterThan;

  /// @brief Field GreaterThanOrEqual value: static_cast<int32_t>(0x10)
  static ::System::Linq::Expressions::ExpressionType const GreaterThanOrEqual;

  /// @brief Field Invoke value: static_cast<int32_t>(0x11)
  static ::System::Linq::Expressions::ExpressionType const Invoke;

  /// @brief Field Lambda value: static_cast<int32_t>(0x12)
  static ::System::Linq::Expressions::ExpressionType const Lambda;

  /// @brief Field LeftShift value: static_cast<int32_t>(0x13)
  static ::System::Linq::Expressions::ExpressionType const LeftShift;

  /// @brief Field LessThan value: static_cast<int32_t>(0x14)
  static ::System::Linq::Expressions::ExpressionType const LessThan;

  /// @brief Field LessThanOrEqual value: static_cast<int32_t>(0x15)
  static ::System::Linq::Expressions::ExpressionType const LessThanOrEqual;

  /// @brief Field ListInit value: static_cast<int32_t>(0x16)
  static ::System::Linq::Expressions::ExpressionType const ListInit;

  /// @brief Field MemberAccess value: static_cast<int32_t>(0x17)
  static ::System::Linq::Expressions::ExpressionType const MemberAccess;

  /// @brief Field MemberInit value: static_cast<int32_t>(0x18)
  static ::System::Linq::Expressions::ExpressionType const MemberInit;

  /// @brief Field Modulo value: static_cast<int32_t>(0x19)
  static ::System::Linq::Expressions::ExpressionType const Modulo;

  /// @brief Field Multiply value: static_cast<int32_t>(0x1a)
  static ::System::Linq::Expressions::ExpressionType const Multiply;

  /// @brief Field MultiplyChecked value: static_cast<int32_t>(0x1b)
  static ::System::Linq::Expressions::ExpressionType const MultiplyChecked;

  /// @brief Field Negate value: static_cast<int32_t>(0x1c)
  static ::System::Linq::Expressions::ExpressionType const Negate;

  /// @brief Field UnaryPlus value: static_cast<int32_t>(0x1d)
  static ::System::Linq::Expressions::ExpressionType const UnaryPlus;

  /// @brief Field NegateChecked value: static_cast<int32_t>(0x1e)
  static ::System::Linq::Expressions::ExpressionType const NegateChecked;

  /// @brief Field New value: static_cast<int32_t>(0x1f)
  static ::System::Linq::Expressions::ExpressionType const New;

  /// @brief Field NewArrayInit value: static_cast<int32_t>(0x20)
  static ::System::Linq::Expressions::ExpressionType const NewArrayInit;

  /// @brief Field NewArrayBounds value: static_cast<int32_t>(0x21)
  static ::System::Linq::Expressions::ExpressionType const NewArrayBounds;

  /// @brief Field Not value: static_cast<int32_t>(0x22)
  static ::System::Linq::Expressions::ExpressionType const Not;

  /// @brief Field NotEqual value: static_cast<int32_t>(0x23)
  static ::System::Linq::Expressions::ExpressionType const NotEqual;

  /// @brief Field Or value: static_cast<int32_t>(0x24)
  static ::System::Linq::Expressions::ExpressionType const Or;

  /// @brief Field OrElse value: static_cast<int32_t>(0x25)
  static ::System::Linq::Expressions::ExpressionType const OrElse;

  /// @brief Field Parameter value: static_cast<int32_t>(0x26)
  static ::System::Linq::Expressions::ExpressionType const Parameter;

  /// @brief Field Power value: static_cast<int32_t>(0x27)
  static ::System::Linq::Expressions::ExpressionType const Power;

  /// @brief Field Quote value: static_cast<int32_t>(0x28)
  static ::System::Linq::Expressions::ExpressionType const Quote;

  /// @brief Field RightShift value: static_cast<int32_t>(0x29)
  static ::System::Linq::Expressions::ExpressionType const RightShift;

  /// @brief Field Subtract value: static_cast<int32_t>(0x2a)
  static ::System::Linq::Expressions::ExpressionType const Subtract;

  /// @brief Field SubtractChecked value: static_cast<int32_t>(0x2b)
  static ::System::Linq::Expressions::ExpressionType const SubtractChecked;

  /// @brief Field TypeAs value: static_cast<int32_t>(0x2c)
  static ::System::Linq::Expressions::ExpressionType const TypeAs;

  /// @brief Field TypeIs value: static_cast<int32_t>(0x2d)
  static ::System::Linq::Expressions::ExpressionType const TypeIs;

  /// @brief Field Assign value: static_cast<int32_t>(0x2e)
  static ::System::Linq::Expressions::ExpressionType const Assign;

  /// @brief Field Block value: static_cast<int32_t>(0x2f)
  static ::System::Linq::Expressions::ExpressionType const Block;

  /// @brief Field DebugInfo value: static_cast<int32_t>(0x30)
  static ::System::Linq::Expressions::ExpressionType const DebugInfo;

  /// @brief Field Decrement value: static_cast<int32_t>(0x31)
  static ::System::Linq::Expressions::ExpressionType const Decrement;

  /// @brief Field Dynamic value: static_cast<int32_t>(0x32)
  static ::System::Linq::Expressions::ExpressionType const Dynamic;

  /// @brief Field Default value: static_cast<int32_t>(0x33)
  static ::System::Linq::Expressions::ExpressionType const Default;

  /// @brief Field Extension value: static_cast<int32_t>(0x34)
  static ::System::Linq::Expressions::ExpressionType const Extension;

  /// @brief Field Goto value: static_cast<int32_t>(0x35)
  static ::System::Linq::Expressions::ExpressionType const Goto;

  /// @brief Field Increment value: static_cast<int32_t>(0x36)
  static ::System::Linq::Expressions::ExpressionType const Increment;

  /// @brief Field Index value: static_cast<int32_t>(0x37)
  static ::System::Linq::Expressions::ExpressionType const Index;

  /// @brief Field Label value: static_cast<int32_t>(0x38)
  static ::System::Linq::Expressions::ExpressionType const Label;

  /// @brief Field RuntimeVariables value: static_cast<int32_t>(0x39)
  static ::System::Linq::Expressions::ExpressionType const RuntimeVariables;

  /// @brief Field Loop value: static_cast<int32_t>(0x3a)
  static ::System::Linq::Expressions::ExpressionType const Loop;

  /// @brief Field Switch value: static_cast<int32_t>(0x3b)
  static ::System::Linq::Expressions::ExpressionType const Switch;

  /// @brief Field Throw value: static_cast<int32_t>(0x3c)
  static ::System::Linq::Expressions::ExpressionType const Throw;

  /// @brief Field Try value: static_cast<int32_t>(0x3d)
  static ::System::Linq::Expressions::ExpressionType const Try;

  /// @brief Field Unbox value: static_cast<int32_t>(0x3e)
  static ::System::Linq::Expressions::ExpressionType const Unbox;

  /// @brief Field AddAssign value: static_cast<int32_t>(0x3f)
  static ::System::Linq::Expressions::ExpressionType const AddAssign;

  /// @brief Field AndAssign value: static_cast<int32_t>(0x40)
  static ::System::Linq::Expressions::ExpressionType const AndAssign;

  /// @brief Field DivideAssign value: static_cast<int32_t>(0x41)
  static ::System::Linq::Expressions::ExpressionType const DivideAssign;

  /// @brief Field ExclusiveOrAssign value: static_cast<int32_t>(0x42)
  static ::System::Linq::Expressions::ExpressionType const ExclusiveOrAssign;

  /// @brief Field LeftShiftAssign value: static_cast<int32_t>(0x43)
  static ::System::Linq::Expressions::ExpressionType const LeftShiftAssign;

  /// @brief Field ModuloAssign value: static_cast<int32_t>(0x44)
  static ::System::Linq::Expressions::ExpressionType const ModuloAssign;

  /// @brief Field MultiplyAssign value: static_cast<int32_t>(0x45)
  static ::System::Linq::Expressions::ExpressionType const MultiplyAssign;

  /// @brief Field OrAssign value: static_cast<int32_t>(0x46)
  static ::System::Linq::Expressions::ExpressionType const OrAssign;

  /// @brief Field PowerAssign value: static_cast<int32_t>(0x47)
  static ::System::Linq::Expressions::ExpressionType const PowerAssign;

  /// @brief Field RightShiftAssign value: static_cast<int32_t>(0x48)
  static ::System::Linq::Expressions::ExpressionType const RightShiftAssign;

  /// @brief Field SubtractAssign value: static_cast<int32_t>(0x49)
  static ::System::Linq::Expressions::ExpressionType const SubtractAssign;

  /// @brief Field AddAssignChecked value: static_cast<int32_t>(0x4a)
  static ::System::Linq::Expressions::ExpressionType const AddAssignChecked;

  /// @brief Field MultiplyAssignChecked value: static_cast<int32_t>(0x4b)
  static ::System::Linq::Expressions::ExpressionType const MultiplyAssignChecked;

  /// @brief Field SubtractAssignChecked value: static_cast<int32_t>(0x4c)
  static ::System::Linq::Expressions::ExpressionType const SubtractAssignChecked;

  /// @brief Field PreIncrementAssign value: static_cast<int32_t>(0x4d)
  static ::System::Linq::Expressions::ExpressionType const PreIncrementAssign;

  /// @brief Field PreDecrementAssign value: static_cast<int32_t>(0x4e)
  static ::System::Linq::Expressions::ExpressionType const PreDecrementAssign;

  /// @brief Field PostIncrementAssign value: static_cast<int32_t>(0x4f)
  static ::System::Linq::Expressions::ExpressionType const PostIncrementAssign;

  /// @brief Field PostDecrementAssign value: static_cast<int32_t>(0x50)
  static ::System::Linq::Expressions::ExpressionType const PostDecrementAssign;

  /// @brief Field TypeEqual value: static_cast<int32_t>(0x51)
  static ::System::Linq::Expressions::ExpressionType const TypeEqual;

  /// @brief Field OnesComplement value: static_cast<int32_t>(0x52)
  static ::System::Linq::Expressions::ExpressionType const OnesComplement;

  /// @brief Field IsTrue value: static_cast<int32_t>(0x53)
  static ::System::Linq::Expressions::ExpressionType const IsTrue;

  /// @brief Field IsFalse value: static_cast<int32_t>(0x54)
  static ::System::Linq::Expressions::ExpressionType const IsFalse;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::ExpressionType, 0x4>, "Size mismatch!");

} // namespace System::Linq::Expressions
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::ExpressionType, "System.Linq.Expressions", "ExpressionType");
