#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/LeaveFaultInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LeaveFaultInstruction)
namespace System::Linq::Expressions::Interpreter {
class Instruction;
}
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class LeaveFaultInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::LeaveFaultInstruction);
// Dependencies System.Linq.Expressions.Interpreter.Instruction
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.LeaveFaultInstruction
class CORDL_TYPE LeaveFaultInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  __declspec(property(get = get_ConsumedContinuations)) int32_t ConsumedContinuations;

  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  /// @brief Field Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance)) ::System::Linq::Expressions::Interpreter::Instruction* Instance;

  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  static inline ::System::Linq::Expressions::Interpreter::LeaveFaultInstruction* New_ctor();

  /// @brief Method Run, addr 0x40c5630, size 0x24, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40c55d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_Instance();

  /// @brief Method get_ConsumedContinuations, addr 0x40c55e8, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedContinuations();

  /// @brief Method get_ConsumedStack, addr 0x40c55e0, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x40c55f0, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  static inline void setStaticF_Instance(::System::Linq::Expressions::Interpreter::Instruction* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaveFaultInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LeaveFaultInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaveFaultInstruction(LeaveFaultInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaveFaultInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaveFaultInstruction(LeaveFaultInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13793 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::LeaveFaultInstruction, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::LeaveFaultInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::LeaveFaultInstruction*, "System.Linq.Expressions.Interpreter", "LeaveFaultInstruction");
