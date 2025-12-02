#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/IncrementInstruction_IncrementSingle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__IncrementInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IncrementInstruction_IncrementSingle)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class IncrementInstruction_IncrementSingle;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IncrementInstruction_IncrementSingle);
// Dependencies System.Linq.Expressions.Interpreter.IncrementInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.IncrementInstruction/IncrementSingle
class CORDL_TYPE IncrementInstruction_IncrementSingle : public ::System::Linq::Expressions::Interpreter::IncrementInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::IncrementInstruction_IncrementSingle* New_ctor();

  /// @brief Method Run, addr 0x5d7b4e4, size 0x88, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x5d7b114, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IncrementInstruction_IncrementSingle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IncrementInstruction_IncrementSingle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IncrementInstruction_IncrementSingle(IncrementInstruction_IncrementSingle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IncrementInstruction_IncrementSingle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IncrementInstruction_IncrementSingle(IncrementInstruction_IncrementSingle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16338 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IncrementInstruction_IncrementSingle, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IncrementInstruction_IncrementSingle);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IncrementInstruction_IncrementSingle*, "System.Linq.Expressions.Interpreter", "IncrementInstruction/IncrementSingle");
