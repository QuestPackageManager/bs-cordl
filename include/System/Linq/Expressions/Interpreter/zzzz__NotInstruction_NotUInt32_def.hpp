#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NotInstruction_NotUInt32.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__NotInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NotInstruction_NotUInt32)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class NotInstruction_NotUInt32;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NotInstruction_NotUInt32);
// Dependencies System.Linq.Expressions.Interpreter.NotInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.NotInstruction/NotUInt32
class CORDL_TYPE NotInstruction_NotUInt32 : public ::System::Linq::Expressions::Interpreter::NotInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::NotInstruction_NotUInt32* New_ctor();

  /// @brief Method Run, addr 0x5e04b5c, size 0x8c, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x5e048d4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NotInstruction_NotUInt32();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NotInstruction_NotUInt32", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NotInstruction_NotUInt32(NotInstruction_NotUInt32&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NotInstruction_NotUInt32", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NotInstruction_NotUInt32(NotInstruction_NotUInt32 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16515 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NotInstruction_NotUInt32, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NotInstruction_NotUInt32);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NotInstruction_NotUInt32*, "System.Linq.Expressions.Interpreter", "NotInstruction/NotUInt32");
