#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/LeaveExceptionFilterInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LeaveExceptionFilterInstruction)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class LeaveExceptionFilterInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction);
// Dependencies System.Linq.Expressions.Interpreter.Instruction
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.LeaveExceptionFilterInstruction
class CORDL_TYPE LeaveExceptionFilterInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  /// @brief Field Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance)) ::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction* Instance;

  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  static inline ::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction* New_ctor();

  /// @brief Method Run, addr 0x5d74858, size 0x8, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x5d74808, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction* getStaticF_Instance();

  /// @brief Method get_ConsumedStack, addr 0x5d74850, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x5d7480c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  static inline void setStaticF_Instance(::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaveExceptionFilterInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LeaveExceptionFilterInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaveExceptionFilterInstruction(LeaveExceptionFilterInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaveExceptionFilterInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaveExceptionFilterInstruction(LeaveExceptionFilterInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16242 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction*, "System.Linq.Expressions.Interpreter", "LeaveExceptionFilterInstruction");
