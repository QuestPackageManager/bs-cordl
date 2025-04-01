#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NullCheckInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NullCheckInstruction)
namespace System::Linq::Expressions::Interpreter {
class Instruction;
}
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class NullCheckInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::NullCheckInstruction);
// Dependencies System.Linq.Expressions.Interpreter.Instruction
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.NullCheckInstruction
class CORDL_TYPE NullCheckInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  /// @brief Field Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance)) ::System::Linq::Expressions::Interpreter::Instruction* Instance;

  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  static inline ::System::Linq::Expressions::Interpreter::NullCheckInstruction* New_ctor();

  /// @brief Method Run, addr 0x40ed398, size 0x5c, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40ed340, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_Instance();

  /// @brief Method get_ConsumedStack, addr 0x40ed348, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x40ed358, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x40ed350, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ProducedStack();

  static inline void setStaticF_Instance(::System::Linq::Expressions::Interpreter::Instruction* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NullCheckInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NullCheckInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NullCheckInstruction(NullCheckInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NullCheckInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NullCheckInstruction(NullCheckInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14057 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::NullCheckInstruction, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::NullCheckInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::NullCheckInstruction*, "System.Linq.Expressions.Interpreter", "NullCheckInstruction");
