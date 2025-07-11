#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/EnterTryFaultInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__IndexedBranchInstruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnterTryFaultInstruction)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System::Linq::Expressions::Interpreter {
class TryFaultHandler;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class EnterTryFaultInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction);
// Dependencies System.Linq.Expressions.Interpreter.IndexedBranchInstruction
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.EnterTryFaultInstruction
class CORDL_TYPE EnterTryFaultInstruction : public ::System::Linq::Expressions::Interpreter::IndexedBranchInstruction {
public:
  // Declarations
  __declspec(property(get = get_Handler)) ::System::Linq::Expressions::Interpreter::TryFaultHandler* Handler;

  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  __declspec(property(get = get_ProducedContinuations)) int32_t ProducedContinuations;

  /// @brief Field _tryHandler, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__tryHandler, put = __cordl_internal_set__tryHandler)) ::System::Linq::Expressions::Interpreter::TryFaultHandler* _tryHandler;

  static inline ::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction* New_ctor(int32_t targetIndex);

  /// @brief Method Run, addr 0x40c4ab4, size 0x1fc, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method SetTryHandler, addr 0x40c4aac, size 0x8, virtual false, abstract: false, final false
  inline void SetTryHandler(::System::Linq::Expressions::Interpreter::TryFaultHandler* tryHandler);

  constexpr ::System::Linq::Expressions::Interpreter::TryFaultHandler* const& __cordl_internal_get__tryHandler() const;

  constexpr ::System::Linq::Expressions::Interpreter::TryFaultHandler*& __cordl_internal_get__tryHandler();

  constexpr void __cordl_internal_set__tryHandler(::System::Linq::Expressions::Interpreter::TryFaultHandler* value);

  /// @brief Method .ctor, addr 0x40c4a34, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t targetIndex);

  /// @brief Method get_Handler, addr 0x40c4aa4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Interpreter::TryFaultHandler* get_Handler();

  /// @brief Method get_InstructionName, addr 0x40c4a5c, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedContinuations, addr 0x40c4a9c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ProducedContinuations();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnterTryFaultInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnterTryFaultInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnterTryFaultInstruction(EnterTryFaultInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnterTryFaultInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnterTryFaultInstruction(EnterTryFaultInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13789 };

  /// @brief Field _tryHandler, offset: 0x18, size: 0x8, def value: None
  ::System::Linq::Expressions::Interpreter::TryFaultHandler* ____tryHandler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction, ____tryHandler) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction, 0x20>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction*, "System.Linq.Expressions.Interpreter", "EnterTryFaultInstruction");
