#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/QuoteInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionVisitor_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(QuoteInstruction)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System::Linq::Expressions::Interpreter {
class LocalVariable;
}
namespace System::Linq::Expressions::Interpreter {
class QuoteInstruction_ExpressionQuoter;
}
namespace System::Linq::Expressions {
class BlockExpression;
}
namespace System::Linq::Expressions {
class CatchBlock;
}
namespace System::Linq::Expressions {
template <typename TDelegate> class Expression_1;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Linq::Expressions {
class ParameterExpression;
}
namespace System::Runtime::CompilerServices {
class IStrongBox;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class QuoteInstruction;
}
namespace System::Linq::Expressions::Interpreter {
class QuoteInstruction_ExpressionQuoter;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::QuoteInstruction);
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter);
// Dependencies System.Linq.Expressions.ExpressionVisitor
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
class CORDL_TYPE QuoteInstruction_ExpressionQuoter : public ::System::Linq::Expressions::ExpressionVisitor {
public:
  // Declarations
  /// @brief Field _frame, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__frame, put = __cordl_internal_set__frame)) ::System::Linq::Expressions::Interpreter::InterpretedFrame* _frame;

  /// @brief Field _shadowedVars, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get__shadowedVars,
      put = __cordl_internal_set__shadowedVars)) ::System::Collections::Generic::Stack_1<::System::Collections::Generic::HashSet_1<::System::Linq::Expressions::ParameterExpression*>*>* _shadowedVars;

  /// @brief Field _variables, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__variables,
                      put = __cordl_internal_set__variables)) ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*,
                                                                                                           ::System::Linq::Expressions::Interpreter::LocalVariable*>* _variables;

  /// @brief Method GetBox, addr 0x40fbd2c, size 0x10c, virtual false, abstract: false, final false
  inline ::System::Runtime::CompilerServices::IStrongBox* GetBox(::System::Linq::Expressions::ParameterExpression* variable);

  static inline ::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter*
  New_ctor(::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* hoistedVariables,
           ::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method VisitBlock, addr 0x40fb930, size 0x194, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitBlock(::System::Linq::Expressions::BlockExpression* node);

  /// @brief Method VisitCatchBlock, addr 0x40fbac4, size 0x19c, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::CatchBlock* VisitCatchBlock(::System::Linq::Expressions::CatchBlock* node);

  /// @brief Method VisitLambda, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline ::System::Linq::Expressions::Expression* VisitLambda(::System::Linq::Expressions::Expression_1<T>* node);

  /// @brief Method VisitParameter, addr 0x40fbc60, size 0xcc, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitParameter(::System::Linq::Expressions::ParameterExpression* node);

  constexpr ::System::Linq::Expressions::Interpreter::InterpretedFrame* const& __cordl_internal_get__frame() const;

  constexpr ::System::Linq::Expressions::Interpreter::InterpretedFrame*& __cordl_internal_get__frame();

  constexpr ::System::Collections::Generic::Stack_1<::System::Collections::Generic::HashSet_1<::System::Linq::Expressions::ParameterExpression*>*>* const& __cordl_internal_get__shadowedVars() const;

  constexpr ::System::Collections::Generic::Stack_1<::System::Collections::Generic::HashSet_1<::System::Linq::Expressions::ParameterExpression*>*>*& __cordl_internal_get__shadowedVars();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* const&
  __cordl_internal_get__variables() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*&
  __cordl_internal_get__variables();

  constexpr void __cordl_internal_set__frame(::System::Linq::Expressions::Interpreter::InterpretedFrame* value);

  constexpr void __cordl_internal_set__shadowedVars(::System::Collections::Generic::Stack_1<::System::Collections::Generic::HashSet_1<::System::Linq::Expressions::ParameterExpression*>*>* value);

  constexpr void
  __cordl_internal_set__variables(::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* value);

  /// @brief Method .ctor, addr 0x40fb89c, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* hoistedVariables,
                    ::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuoteInstruction_ExpressionQuoter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QuoteInstruction_ExpressionQuoter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuoteInstruction_ExpressionQuoter(QuoteInstruction_ExpressionQuoter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuoteInstruction_ExpressionQuoter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuoteInstruction_ExpressionQuoter(QuoteInstruction_ExpressionQuoter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14121 };

  /// @brief Field _variables, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* ____variables;

  /// @brief Field _frame, offset: 0x18, size: 0x8, def value: None
  ::System::Linq::Expressions::Interpreter::InterpretedFrame* ____frame;

  /// @brief Field _shadowedVars, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::System::Collections::Generic::HashSet_1<::System::Linq::Expressions::ParameterExpression*>*>* ____shadowedVars;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter, ____variables) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter, ____frame) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter, ____shadowedVars) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter, 0x28>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
// Dependencies System.Linq.Expressions.Interpreter.Instruction
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.QuoteInstruction
class CORDL_TYPE QuoteInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  using ExpressionQuoter = ::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter;

  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  /// @brief Field _hoistedVariables, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__hoistedVariables,
                      put = __cordl_internal_set__hoistedVariables)) ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*,
                                                                                                                  ::System::Linq::Expressions::Interpreter::LocalVariable*>* _hoistedVariables;

  /// @brief Field _operand, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__operand, put = __cordl_internal_set__operand)) ::System::Linq::Expressions::Expression* _operand;

  static inline ::System::Linq::Expressions::Interpreter::QuoteInstruction*
  New_ctor(::System::Linq::Expressions::Expression* operand,
           ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* hoistedVariables);

  /// @brief Method Run, addr 0x40fb7f8, size 0xa4, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* const&
  __cordl_internal_get__hoistedVariables() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*&
  __cordl_internal_get__hoistedVariables();

  constexpr ::System::Linq::Expressions::Expression* const& __cordl_internal_get__operand() const;

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__operand();

  constexpr void __cordl_internal_set__hoistedVariables(
      ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* value);

  constexpr void __cordl_internal_set__operand(::System::Linq::Expressions::Expression* value);

  /// @brief Method .ctor, addr 0x40fb784, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Expression* operand,
                    ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* hoistedVariables);

  /// @brief Method get_InstructionName, addr 0x40fb7b8, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x40fb7b0, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ProducedStack();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuoteInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QuoteInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuoteInstruction(QuoteInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuoteInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuoteInstruction(QuoteInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14122 };

  /// @brief Field _operand, offset: 0x10, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____operand;

  /// @brief Field _hoistedVariables, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* ____hoistedVariables;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::QuoteInstruction, ____operand) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::QuoteInstruction, ____hoistedVariables) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::QuoteInstruction, 0x20>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::QuoteInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::QuoteInstruction*, "System.Linq.Expressions.Interpreter", "QuoteInstruction");
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter*, "System.Linq.Expressions.Interpreter", "QuoteInstruction/ExpressionQuoter");
