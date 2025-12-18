#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NotEqualInstruction_NotEqualChar.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__NotEqualInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NotEqualInstruction_NotEqualChar)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class NotEqualInstruction_NotEqualChar;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NotEqualInstruction_NotEqualChar);
// Dependencies System.Linq.Expressions.Interpreter.NotEqualInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualChar
class CORDL_TYPE NotEqualInstruction_NotEqualChar : public ::System::Linq::Expressions::Interpreter::NotEqualInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::NotEqualInstruction_NotEqualChar* New_ctor();

  /// @brief Method Run, addr 0x5e036e4, size 0xac, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x5e034b8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NotEqualInstruction_NotEqualChar();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NotEqualInstruction_NotEqualChar", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NotEqualInstruction_NotEqualChar(NotEqualInstruction_NotEqualChar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NotEqualInstruction_NotEqualChar", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NotEqualInstruction_NotEqualChar(NotEqualInstruction_NotEqualChar const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16488 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NotEqualInstruction_NotEqualChar, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NotEqualInstruction_NotEqualChar);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NotEqualInstruction_NotEqualChar*, "System.Linq.Expressions.Interpreter", "NotEqualInstruction/NotEqualChar");
