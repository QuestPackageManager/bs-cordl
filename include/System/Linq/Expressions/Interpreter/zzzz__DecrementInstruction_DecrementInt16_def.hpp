#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/DecrementInstruction_DecrementInt16.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__DecrementInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecrementInstruction_DecrementInt16)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class DecrementInstruction_DecrementInt16;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DecrementInstruction_DecrementInt16);
// Dependencies System.Linq.Expressions.Interpreter.DecrementInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.DecrementInstruction/DecrementInt16
class CORDL_TYPE DecrementInstruction_DecrementInt16 : public ::System::Linq::Expressions::Interpreter::DecrementInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::DecrementInstruction_DecrementInt16* New_ctor();

  /// @brief Method Run, addr 0x40c5f30, size 0xa4, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40c5ef0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecrementInstruction_DecrementInt16();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecrementInstruction_DecrementInt16", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecrementInstruction_DecrementInt16(DecrementInstruction_DecrementInt16&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecrementInstruction_DecrementInt16", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecrementInstruction_DecrementInt16(DecrementInstruction_DecrementInt16 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13801 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DecrementInstruction_DecrementInt16, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DecrementInstruction_DecrementInt16);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DecrementInstruction_DecrementInt16*, "System.Linq.Expressions.Interpreter", "DecrementInstruction/DecrementInt16");
