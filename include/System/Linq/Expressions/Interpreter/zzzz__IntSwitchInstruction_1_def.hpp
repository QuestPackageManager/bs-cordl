#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/IntSwitchInstruction_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IntSwitchInstruction_1)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
template <typename T> class IntSwitchInstruction_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Linq::Expressions::Interpreter::IntSwitchInstruction_1);
// Dependencies System.Linq.Expressions.Interpreter.Instruction
namespace System::Linq::Expressions::Interpreter {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.IntSwitchInstruction`1<T>
class CORDL_TYPE IntSwitchInstruction_1 : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  /// @brief Field _cases, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__cases, put = __cordl_internal_set__cases)) ::System::Collections::Generic::Dictionary_2<T, int32_t>* _cases;

  static inline ::System::Linq::Expressions::Interpreter::IntSwitchInstruction_1<T>* New_ctor(::System::Collections::Generic::Dictionary_2<T, int32_t>* cases);

  /// @brief Method Run, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  constexpr ::System::Collections::Generic::Dictionary_2<T, int32_t>* const& __cordl_internal_get__cases() const;

  constexpr ::System::Collections::Generic::Dictionary_2<T, int32_t>*& __cordl_internal_get__cases();

  constexpr void __cordl_internal_set__cases(::System::Collections::Generic::Dictionary_2<T, int32_t>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::Dictionary_2<T, int32_t>* cases);

  /// @brief Method get_ConsumedStack, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntSwitchInstruction_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IntSwitchInstruction_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntSwitchInstruction_1(IntSwitchInstruction_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntSwitchInstruction_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntSwitchInstruction_1(IntSwitchInstruction_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16246 };

  /// @brief Field _cases, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<T, int32_t>* ____cases;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq::Expressions::Interpreter
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Expressions::Interpreter::IntSwitchInstruction_1, "System.Linq.Expressions.Interpreter", "IntSwitchInstruction`1");
