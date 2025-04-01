#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/IncrementInstruction_IncrementUInt16.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__IncrementInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IncrementInstruction_IncrementUInt16)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class IncrementInstruction_IncrementUInt16;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IncrementInstruction_IncrementUInt16);
// Dependencies System.Linq.Expressions.Interpreter.IncrementInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.IncrementInstruction/IncrementUInt16
class CORDL_TYPE IncrementInstruction_IncrementUInt16 : public ::System::Linq::Expressions::Interpreter::IncrementInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::IncrementInstruction_IncrementUInt16* New_ctor();

  /// @brief Method Run, addr 0x40c8cc4, size 0x98, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40c8990, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IncrementInstruction_IncrementUInt16();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IncrementInstruction_IncrementUInt16", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IncrementInstruction_IncrementUInt16(IncrementInstruction_IncrementUInt16&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IncrementInstruction_IncrementUInt16", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IncrementInstruction_IncrementUInt16(IncrementInstruction_IncrementUInt16 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13886 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IncrementInstruction_IncrementUInt16, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IncrementInstruction_IncrementUInt16);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IncrementInstruction_IncrementUInt16*, "System.Linq.Expressions.Interpreter", "IncrementInstruction/IncrementUInt16");
