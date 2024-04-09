#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__LocalAccessInstruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::AssignLocalBoxedInstruction);
// Type: System.Linq.Expressions.Interpreter::AssignLocalBoxedInstruction
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::AssignLocalBoxedInstruction*
class CORDL_TYPE AssignLocalBoxedInstruction : public ::System::Linq::Expressions::Interpreter::LocalAccessInstruction {
public:
  // Declarations
  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName))::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  static inline ::System::Linq::Expressions::Interpreter::AssignLocalBoxedInstruction* New_ctor(int32_t index);

  /// @brief Method Run, addr 0x2b3bfd8, size 0x134, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x2b3bf60, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t index);

  /// @brief Method get_ConsumedStack, addr 0x2b3bf88, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x2b3bf98, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x2b3bf90, size 0x8, virtual true, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::AssignLocalBoxedInstruction, 0x18>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::AssignLocalBoxedInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::AssignLocalBoxedInstruction*, "System.Linq.Expressions.Interpreter", "AssignLocalBoxedInstruction");
