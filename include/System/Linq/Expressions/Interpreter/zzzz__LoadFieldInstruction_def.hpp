#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\LoadFieldInstruction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__FieldInstruction_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LoadFieldInstruction)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System::Reflection {
class FieldInfo;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class LoadFieldInstruction;
}
// Write type traits
MARK_REF_T(::System::Linq::Expressions::Interpreter::LoadFieldInstruction*);
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Interpreter::LoadFieldInstruction*, "System.Linq.Expressions.Interpreter", "LoadFieldInstruction");
// Dependencies System.Linq.Expressions.Interpreter.FieldInstruction
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.LoadFieldInstruction
class CORDL_TYPE LoadFieldInstruction : public ::System::Linq::Expressions::Interpreter::FieldInstruction {
public:
  // Declarations
  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  static inline ::System::Linq::Expressions::Interpreter::LoadFieldInstruction* New_ctor(::System::Reflection::FieldInfo* field);

  /// @brief Method Run, addr 0x5f95194, size 0x5c, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x5f95138, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::FieldInfo* field);

  /// @brief Method get_ConsumedStack, addr 0x5f95184, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x5f95140, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x5f9518c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ProducedStack();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LoadFieldInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LoadFieldInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LoadFieldInstruction(LoadFieldInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LoadFieldInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LoadFieldInstruction(LoadFieldInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16351 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Linq::Expressions::Interpreter::LoadFieldInstruction) == 0x18, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
