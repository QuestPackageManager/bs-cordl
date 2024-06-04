#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/BranchFalseInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__OffsetInstruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BranchFalseInstruction)
namespace System::Linq::Expressions::Interpreter {
class Instruction;
}
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class BranchFalseInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::BranchFalseInstruction);
// Type: System.Linq.Expressions.Interpreter::BranchFalseInstruction
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::BranchFalseInstruction*
class CORDL_TYPE BranchFalseInstruction : public ::System::Linq::Expressions::Interpreter::OffsetInstruction {
public:
  // Declarations
  __declspec(property(get = get_Cache))::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*, ::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> Cache;

  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName))::StringW InstructionName;

  /// @brief Field s_cache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_cache,
                             put = setStaticF_s_cache))::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*, ::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> s_cache;

  static inline ::System::Linq::Expressions::Interpreter::BranchFalseInstruction* New_ctor();

  /// @brief Method Run, addr 0x2c33a3c, size 0x90, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x2c33acc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*, ::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> getStaticF_s_cache();

  /// @brief Method get_Cache, addr 0x2c33970, size 0x84, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*, ::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> get_Cache();

  /// @brief Method get_ConsumedStack, addr 0x2c33a34, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x2c339f4, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  static inline void setStaticF_s_cache(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*, ::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BranchFalseInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BranchFalseInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BranchFalseInstruction(BranchFalseInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BranchFalseInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BranchFalseInstruction(BranchFalseInstruction const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::BranchFalseInstruction, 0x18>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::BranchFalseInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::BranchFalseInstruction*, "System.Linq.Expressions.Interpreter", "BranchFalseInstruction");
