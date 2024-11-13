#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/ValueTypeCopyInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ValueTypeCopyInstruction)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class ValueTypeCopyInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::ValueTypeCopyInstruction);
// Type: System.Linq.Expressions.Interpreter::ValueTypeCopyInstruction
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::ValueTypeCopyInstruction*
class CORDL_TYPE ValueTypeCopyInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  /// @brief Field Instruction, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Instruction, put = setStaticF_Instruction)) ::System::Linq::Expressions::Interpreter::ValueTypeCopyInstruction* Instruction;

  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  static inline ::System::Linq::Expressions::Interpreter::ValueTypeCopyInstruction* New_ctor();

  /// @brief Method Run, addr 0x40875e4, size 0x44, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x4087628, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Linq::Expressions::Interpreter::ValueTypeCopyInstruction* getStaticF_Instruction();

  /// @brief Method get_ConsumedStack, addr 0x4087594, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x40875a4, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x408759c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ProducedStack();

  static inline void setStaticF_Instruction(::System::Linq::Expressions::Interpreter::ValueTypeCopyInstruction* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValueTypeCopyInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ValueTypeCopyInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValueTypeCopyInstruction(ValueTypeCopyInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValueTypeCopyInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValueTypeCopyInstruction(ValueTypeCopyInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13933 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::ValueTypeCopyInstruction, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::ValueTypeCopyInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::ValueTypeCopyInstruction*, "System.Linq.Expressions.Interpreter", "ValueTypeCopyInstruction");
