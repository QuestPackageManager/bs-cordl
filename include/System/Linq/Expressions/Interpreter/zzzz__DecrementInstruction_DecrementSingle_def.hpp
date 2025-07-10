#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/DecrementInstruction_DecrementSingle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__DecrementInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecrementInstruction_DecrementSingle)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class DecrementInstruction_DecrementSingle;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DecrementInstruction_DecrementSingle);
// Dependencies System.Linq.Expressions.Interpreter.DecrementInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.DecrementInstruction/DecrementSingle
class CORDL_TYPE DecrementInstruction_DecrementSingle : public ::System::Linq::Expressions::Interpreter::DecrementInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::DecrementInstruction_DecrementSingle* New_ctor();

  /// @brief Method Run, addr 0x40c632c, size 0xb4, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40c5f20, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecrementInstruction_DecrementSingle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecrementInstruction_DecrementSingle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecrementInstruction_DecrementSingle(DecrementInstruction_DecrementSingle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecrementInstruction_DecrementSingle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecrementInstruction_DecrementSingle(DecrementInstruction_DecrementSingle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13807 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DecrementInstruction_DecrementSingle, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DecrementInstruction_DecrementSingle);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DecrementInstruction_DecrementSingle*, "System.Linq.Expressions.Interpreter", "DecrementInstruction/DecrementSingle");
