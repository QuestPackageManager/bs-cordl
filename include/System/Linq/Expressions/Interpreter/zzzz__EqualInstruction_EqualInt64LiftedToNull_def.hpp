#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/EqualInstruction_EqualInt64LiftedToNull.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__EqualInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EqualInstruction_EqualInt64LiftedToNull)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class EqualInstruction_EqualInt64LiftedToNull;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EqualInstruction_EqualInt64LiftedToNull);
// Dependencies System.Linq.Expressions.Interpreter.EqualInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.EqualInstruction/EqualInt64LiftedToNull
class CORDL_TYPE EqualInstruction_EqualInt64LiftedToNull : public ::System::Linq::Expressions::Interpreter::EqualInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::EqualInstruction_EqualInt64LiftedToNull* New_ctor();

  /// @brief Method Run, addr 0x40c8d28, size 0xe8, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40c7d1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EqualInstruction_EqualInt64LiftedToNull();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EqualInstruction_EqualInt64LiftedToNull", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EqualInstruction_EqualInt64LiftedToNull(EqualInstruction_EqualInt64LiftedToNull&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EqualInstruction_EqualInt64LiftedToNull", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EqualInstruction_EqualInt64LiftedToNull(EqualInstruction_EqualInt64LiftedToNull const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13838 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EqualInstruction_EqualInt64LiftedToNull, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EqualInstruction_EqualInt64LiftedToNull);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EqualInstruction_EqualInt64LiftedToNull*, "System.Linq.Expressions.Interpreter", "EqualInstruction/EqualInt64LiftedToNull");
