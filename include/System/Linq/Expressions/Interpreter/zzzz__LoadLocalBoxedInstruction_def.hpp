#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/LoadLocalBoxedInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__LocalAccessInstruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LoadLocalBoxedInstruction)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class LoadLocalBoxedInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::LoadLocalBoxedInstruction);
// Dependencies System.Linq.Expressions.Interpreter.LocalAccessInstruction
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.LoadLocalBoxedInstruction
class CORDL_TYPE LoadLocalBoxedInstruction : public ::System::Linq::Expressions::Interpreter::LocalAccessInstruction {
public:
  // Declarations
  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  static inline ::System::Linq::Expressions::Interpreter::LoadLocalBoxedInstruction* New_ctor(int32_t index);

  /// @brief Method Run, addr 0x40eaf94, size 0x15c, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40eaf24, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t index);

  /// @brief Method get_InstructionName, addr 0x40eaf54, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x40eaf4c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ProducedStack();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LoadLocalBoxedInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LoadLocalBoxedInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LoadLocalBoxedInstruction(LoadLocalBoxedInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LoadLocalBoxedInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LoadLocalBoxedInstruction(LoadLocalBoxedInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13962 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::LoadLocalBoxedInstruction, 0x18>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::LoadLocalBoxedInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::LoadLocalBoxedInstruction*, "System.Linq.Expressions.Interpreter", "LoadLocalBoxedInstruction");
