#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/IncrementInstruction_IncrementInt64.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__IncrementInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IncrementInstruction_IncrementInt64)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class IncrementInstruction_IncrementInt64;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IncrementInstruction_IncrementInt64);
// Dependencies System.Linq.Expressions.Interpreter.IncrementInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.IncrementInstruction/IncrementInt64
class CORDL_TYPE IncrementInstruction_IncrementInt64 : public ::System::Linq::Expressions::Interpreter::IncrementInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::IncrementInstruction_IncrementInt64* New_ctor();

  /// @brief Method Run, addr 0x5de2e7c, size 0x84, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x5de2c90, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IncrementInstruction_IncrementInt64();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IncrementInstruction_IncrementInt64", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IncrementInstruction_IncrementInt64(IncrementInstruction_IncrementInt64&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IncrementInstruction_IncrementInt64", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IncrementInstruction_IncrementInt64(IncrementInstruction_IncrementInt64 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16348 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IncrementInstruction_IncrementInt64, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IncrementInstruction_IncrementInt64);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IncrementInstruction_IncrementInt64*, "System.Linq.Expressions.Interpreter", "IncrementInstruction/IncrementInt64");
