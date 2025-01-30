#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/StoreLocalInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__IBoxableInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalAccessInstruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StoreLocalInstruction)
namespace System::Linq::Expressions::Interpreter {
class Instruction;
}
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class StoreLocalInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::StoreLocalInstruction);
// Dependencies System.Linq.Expressions.Interpreter.IBoxableInstruction, System.Linq.Expressions.Interpreter.LocalAccessInstruction
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.StoreLocalInstruction
class CORDL_TYPE StoreLocalInstruction : public ::System::Linq::Expressions::Interpreter::LocalAccessInstruction {
public:
  // Declarations
  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  /// @brief Convert operator to "::System::Linq::Expressions::Interpreter::IBoxableInstruction"
  constexpr operator ::System::Linq::Expressions::Interpreter::IBoxableInstruction*() noexcept;

  /// @brief Method BoxIfIndexMatches, addr 0x40eb5d8, size 0x78, virtual true, abstract: false, final true
  inline ::System::Linq::Expressions::Interpreter::Instruction* BoxIfIndexMatches(int32_t index);

  static inline ::System::Linq::Expressions::Interpreter::StoreLocalInstruction* New_ctor(int32_t index);

  /// @brief Method Run, addr 0x40eb560, size 0x78, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40eb4f0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t index);

  /// @brief Method get_ConsumedStack, addr 0x40eb518, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x40eb520, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Convert to "::System::Linq::Expressions::Interpreter::IBoxableInstruction"
  constexpr ::System::Linq::Expressions::Interpreter::IBoxableInstruction* i___System__Linq__Expressions__Interpreter__IBoxableInstruction() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StoreLocalInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StoreLocalInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StoreLocalInstruction(StoreLocalInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StoreLocalInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StoreLocalInstruction(StoreLocalInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13966 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::StoreLocalInstruction, 0x18>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::StoreLocalInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::StoreLocalInstruction*, "System.Linq.Expressions.Interpreter", "StoreLocalInstruction");
