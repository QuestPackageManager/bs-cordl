#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/DecrementInstruction_DecrementUInt32.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__DecrementInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecrementInstruction_DecrementUInt32)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class DecrementInstruction_DecrementUInt32;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DecrementInstruction_DecrementUInt32);
// Dependencies System.Linq.Expressions.Interpreter.DecrementInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.DecrementInstruction/DecrementUInt32
class CORDL_TYPE DecrementInstruction_DecrementUInt32 : public ::System::Linq::Expressions::Interpreter::DecrementInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::DecrementInstruction_DecrementUInt32* New_ctor();

  /// @brief Method Run, addr 0x40c61cc, size 0xb0, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40c5f10, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecrementInstruction_DecrementUInt32();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecrementInstruction_DecrementUInt32", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecrementInstruction_DecrementUInt32(DecrementInstruction_DecrementUInt32&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecrementInstruction_DecrementUInt32", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecrementInstruction_DecrementUInt32(DecrementInstruction_DecrementUInt32 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13805 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DecrementInstruction_DecrementUInt32, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DecrementInstruction_DecrementUInt32);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DecrementInstruction_DecrementUInt32*, "System.Linq.Expressions.Interpreter", "DecrementInstruction/DecrementUInt32");
