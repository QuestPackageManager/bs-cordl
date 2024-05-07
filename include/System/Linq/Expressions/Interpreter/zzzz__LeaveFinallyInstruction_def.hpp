#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/LeaveFinallyInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LeaveFinallyInstruction)
namespace System::Linq::Expressions::Interpreter {
class Instruction;
}
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class LeaveFinallyInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::LeaveFinallyInstruction);
// Type: System.Linq.Expressions.Interpreter::LeaveFinallyInstruction
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::LeaveFinallyInstruction*
class CORDL_TYPE LeaveFinallyInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  /// @brief Field Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance))::System::Linq::Expressions::Interpreter::Instruction* Instance;

  __declspec(property(get = get_InstructionName))::StringW InstructionName;

  static inline ::System::Linq::Expressions::Interpreter::LeaveFinallyInstruction* New_ctor();

  /// @brief Method Run, addr 0x2c14a84, size 0x48, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x2c14a34, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_Instance();

  /// @brief Method get_ConsumedStack, addr 0x2c14a3c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x2c14a44, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  static inline void setStaticF_Instance(::System::Linq::Expressions::Interpreter::Instruction* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaveFinallyInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LeaveFinallyInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaveFinallyInstruction(LeaveFinallyInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaveFinallyInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaveFinallyInstruction(LeaveFinallyInstruction const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::LeaveFinallyInstruction, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::LeaveFinallyInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::LeaveFinallyInstruction*, "System.Linq.Expressions.Interpreter", "LeaveFinallyInstruction");
