#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NotEqualInstruction_NotEqualByteLiftedToNull.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__NotEqualInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NotEqualInstruction_NotEqualByteLiftedToNull)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class NotEqualInstruction_NotEqualByteLiftedToNull;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NotEqualInstruction_NotEqualByteLiftedToNull);
// Dependencies System.Linq.Expressions.Interpreter.NotEqualInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualByteLiftedToNull
class CORDL_TYPE NotEqualInstruction_NotEqualByteLiftedToNull : public ::System::Linq::Expressions::Interpreter::NotEqualInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::NotEqualInstruction_NotEqualByteLiftedToNull* New_ctor();

  /// @brief Method Run, addr 0x40f0f10, size 0xe8, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40efedc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NotEqualInstruction_NotEqualByteLiftedToNull();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NotEqualInstruction_NotEqualByteLiftedToNull", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NotEqualInstruction_NotEqualByteLiftedToNull(NotEqualInstruction_NotEqualByteLiftedToNull&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NotEqualInstruction_NotEqualByteLiftedToNull", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NotEqualInstruction_NotEqualByteLiftedToNull(NotEqualInstruction_NotEqualByteLiftedToNull const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14042 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NotEqualInstruction_NotEqualByteLiftedToNull, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NotEqualInstruction_NotEqualByteLiftedToNull);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NotEqualInstruction_NotEqualByteLiftedToNull*, "System.Linq.Expressions.Interpreter", "NotEqualInstruction/NotEqualByteLiftedToNull");
