#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\ExclusiveOrInstruction_ExclusiveOrInt64.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__ExclusiveOrInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExclusiveOrInstruction_ExclusiveOrInt64)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class ExclusiveOrInstruction_ExclusiveOrInt64;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrInt64*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrInt64*, "System.Linq.Expressions.Interpreter", "ExclusiveOrInstruction/ExclusiveOrInt64");
// Dependencies System.Linq.Expressions.Interpreter.ExclusiveOrInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.ExclusiveOrInstruction/ExclusiveOrInt64
class CORDL_TYPE ExclusiveOrInstruction_ExclusiveOrInt64 : public ::System::Linq::Expressions::Interpreter::ExclusiveOrInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrInt64* New_ctor();

  /// @brief Method Run, addr 0x5f94960, size 0xb8, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x5f94764, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExclusiveOrInstruction_ExclusiveOrInt64();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExclusiveOrInstruction_ExclusiveOrInt64", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExclusiveOrInstruction_ExclusiveOrInt64(ExclusiveOrInstruction_ExclusiveOrInt64&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExclusiveOrInstruction_ExclusiveOrInt64", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExclusiveOrInstruction_ExclusiveOrInt64(ExclusiveOrInstruction_ExclusiveOrInt64 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16342 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrInt64) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
