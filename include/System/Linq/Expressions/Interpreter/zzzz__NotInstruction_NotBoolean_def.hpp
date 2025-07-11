#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NotInstruction_NotBoolean.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__NotInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NotInstruction_NotBoolean)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class NotInstruction_NotBoolean;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NotInstruction_NotBoolean);
// Dependencies System.Linq.Expressions.Interpreter.NotInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.NotInstruction/NotBoolean
class CORDL_TYPE NotInstruction_NotBoolean : public ::System::Linq::Expressions::Interpreter::NotInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::NotInstruction_NotBoolean* New_ctor();

  /// @brief Method Run, addr 0x40f18e8, size 0xa8, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40f18a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NotInstruction_NotBoolean();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NotInstruction_NotBoolean", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NotInstruction_NotBoolean(NotInstruction_NotBoolean&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NotInstruction_NotBoolean", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NotInstruction_NotBoolean(NotInstruction_NotBoolean const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14049 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NotInstruction_NotBoolean, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NotInstruction_NotBoolean);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NotInstruction_NotBoolean*, "System.Linq.Expressions.Interpreter", "NotInstruction/NotBoolean");
