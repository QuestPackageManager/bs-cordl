#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/BranchTrueInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__OffsetInstruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BranchTrueInstruction)
namespace System::Linq::Expressions::Interpreter {
class Instruction;
}
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class BranchTrueInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::BranchTrueInstruction);
// Dependencies System.Linq.Expressions.Interpreter.OffsetInstruction
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.BranchTrueInstruction
class CORDL_TYPE BranchTrueInstruction : public ::System::Linq::Expressions::Interpreter::OffsetInstruction {
public:
  // Declarations
  __declspec(property(get = get_Cache)) ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*, ::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> Cache;

  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  /// @brief Field s_cache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_cache,
                      put = setStaticF_s_cache)) ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*, ::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>
      s_cache;

  static inline ::System::Linq::Expressions::Interpreter::BranchTrueInstruction* New_ctor();

  /// @brief Method Run, addr 0x5d72f38, size 0x5c, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x5d72f94, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*, ::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> getStaticF_s_cache();

  /// @brief Method get_Cache, addr 0x5d72e60, size 0x8c, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*, ::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> get_Cache();

  /// @brief Method get_ConsumedStack, addr 0x5d72f30, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x5d72eec, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  static inline void setStaticF_s_cache(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*, ::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BranchTrueInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BranchTrueInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BranchTrueInstruction(BranchTrueInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BranchTrueInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BranchTrueInstruction(BranchTrueInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16230 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::BranchTrueInstruction, 0x18>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::BranchTrueInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::BranchTrueInstruction*, "System.Linq.Expressions.Interpreter", "BranchTrueInstruction");
