#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/AssignLocalBoxedInstruction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__LocalAccessInstruction_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AssignLocalBoxedInstruction)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class AssignLocalBoxedInstruction;
}
// Write type traits
MARK_REF_T(::System::Linq::Expressions::Interpreter::AssignLocalBoxedInstruction*);
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Interpreter::AssignLocalBoxedInstruction*, "System.Linq.Expressions.Interpreter", "AssignLocalBoxedInstruction");
// Dependencies System.Linq.Expressions.Interpreter.LocalAccessInstruction
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.AssignLocalBoxedInstruction
class CORDL_TYPE AssignLocalBoxedInstruction : public ::System::Linq::Expressions::Interpreter::LocalAccessInstruction {
public:
  // Declarations
  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  static inline ::System::Linq::Expressions::Interpreter::AssignLocalBoxedInstruction* New_ctor(int32_t index);

  /// @brief Method Run, addr 0x5fad140, size 0x138, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x5fad0e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t index);

  /// @brief Method get_ConsumedStack, addr 0x5fad0ec, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x5fad0fc, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x5fad0f4, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ProducedStack();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssignLocalBoxedInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssignLocalBoxedInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssignLocalBoxedInstruction(AssignLocalBoxedInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssignLocalBoxedInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssignLocalBoxedInstruction(AssignLocalBoxedInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16431 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Linq::Expressions::Interpreter::AssignLocalBoxedInstruction) == 0x18, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
