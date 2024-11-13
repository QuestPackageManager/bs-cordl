#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/AssignLocalInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__LocalAccessInstruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AssignLocalInstruction)
namespace System::Linq::Expressions::Interpreter {
class IBoxableInstruction;
}
namespace System::Linq::Expressions::Interpreter {
class Instruction;
}
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class AssignLocalInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::AssignLocalInstruction);
// Type: System.Linq.Expressions.Interpreter::AssignLocalInstruction
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::AssignLocalInstruction*
class CORDL_TYPE AssignLocalInstruction : public ::System::Linq::Expressions::Interpreter::LocalAccessInstruction {
public:
  // Declarations
  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  /// @brief Convert operator to "::System::Linq::Expressions::Interpreter::IBoxableInstruction"
  constexpr operator ::System::Linq::Expressions::Interpreter::IBoxableInstruction*() noexcept;

  /// @brief Method BoxIfIndexMatches, addr 0x4086f00, size 0x78, virtual true, abstract: false, final true
  inline ::System::Linq::Expressions::Interpreter::Instruction* BoxIfIndexMatches(int32_t index);

  static inline ::System::Linq::Expressions::Interpreter::AssignLocalInstruction* New_ctor(int32_t index);

  /// @brief Method Run, addr 0x4086e88, size 0x78, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x4086e10, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t index);

  /// @brief Method get_ConsumedStack, addr 0x4086e38, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x4086e48, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x4086e40, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ProducedStack();

  /// @brief Convert to "::System::Linq::Expressions::Interpreter::IBoxableInstruction"
  constexpr ::System::Linq::Expressions::Interpreter::IBoxableInstruction* i___System__Linq__Expressions__Interpreter__IBoxableInstruction() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssignLocalInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssignLocalInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssignLocalInstruction(AssignLocalInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssignLocalInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssignLocalInstruction(AssignLocalInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13928 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::AssignLocalInstruction, 0x18>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::AssignLocalInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::AssignLocalInstruction*, "System.Linq.Expressions.Interpreter", "AssignLocalInstruction");
