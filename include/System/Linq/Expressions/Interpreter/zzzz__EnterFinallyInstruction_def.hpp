#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/EnterFinallyInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__IndexedBranchInstruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnterFinallyInstruction)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class EnterFinallyInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::EnterFinallyInstruction);
// Type: System.Linq.Expressions.Interpreter::EnterFinallyInstruction
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::EnterFinallyInstruction*
class CORDL_TYPE EnterFinallyInstruction : public ::System::Linq::Expressions::Interpreter::IndexedBranchInstruction {
public:
  // Declarations
  __declspec(property(get = get_ConsumedContinuations)) int32_t ConsumedContinuations;

  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  /// @brief Field s_cache, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF_s_cache,
      put = setStaticF_s_cache)) ::ArrayW<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*, ::Array<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*>*>
      s_cache;

  /// @brief Method Create, addr 0x404dcbc, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::Interpreter::EnterFinallyInstruction* Create(int32_t labelIndex);

  static inline ::System::Linq::Expressions::Interpreter::EnterFinallyInstruction* New_ctor(int32_t labelIndex);

  /// @brief Method Run, addr 0x404ddb0, size 0x6c, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x404dc44, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t labelIndex);

  static inline ::ArrayW<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*, ::Array<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*>*> getStaticF_s_cache();

  /// @brief Method get_ConsumedContinuations, addr 0x404dcb4, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedContinuations();

  /// @brief Method get_InstructionName, addr 0x404dc6c, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x404dcac, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ProducedStack();

  static inline void
  setStaticF_s_cache(::ArrayW<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*, ::Array<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnterFinallyInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnterFinallyInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnterFinallyInstruction(EnterFinallyInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnterFinallyInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnterFinallyInstruction(EnterFinallyInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13744 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction, 0x18>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::EnterFinallyInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*, "System.Linq.Expressions.Interpreter", "EnterFinallyInstruction");
