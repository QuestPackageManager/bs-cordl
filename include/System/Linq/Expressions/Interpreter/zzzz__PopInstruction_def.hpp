#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/PopInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PopInstruction)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class PopInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::PopInstruction);
// Type: System.Linq.Expressions.Interpreter::PopInstruction
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::PopInstruction*
class CORDL_TYPE PopInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  /// @brief Field Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance)) ::System::Linq::Expressions::Interpreter::PopInstruction* Instance;

  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  static inline ::System::Linq::Expressions::Interpreter::PopInstruction* New_ctor();

  /// @brief Method Run, addr 0x407efa4, size 0x24, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x407ef54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Linq::Expressions::Interpreter::PopInstruction* getStaticF_Instance();

  /// @brief Method get_ConsumedStack, addr 0x407ef5c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x407ef64, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  static inline void setStaticF_Instance(::System::Linq::Expressions::Interpreter::PopInstruction* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PopInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PopInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PopInstruction(PopInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PopInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PopInstruction(PopInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14040 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::PopInstruction, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::PopInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::PopInstruction*, "System.Linq.Expressions.Interpreter", "PopInstruction");
