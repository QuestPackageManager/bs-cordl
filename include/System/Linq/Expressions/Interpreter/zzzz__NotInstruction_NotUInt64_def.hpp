#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NotInstruction_NotUInt64.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__NotInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NotInstruction_NotUInt64)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class NotInstruction_NotUInt64;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NotInstruction_NotUInt64);
// Dependencies System.Linq.Expressions.Interpreter.NotInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.NotInstruction/NotUInt64
class CORDL_TYPE NotInstruction_NotUInt64 : public ::System::Linq::Expressions::Interpreter::NotInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::NotInstruction_NotUInt64* New_ctor();

  /// @brief Method Run, addr 0x40f1b88, size 0xb0, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40f18c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NotInstruction_NotUInt64();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NotInstruction_NotUInt64", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NotInstruction_NotUInt64(NotInstruction_NotUInt64&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NotInstruction_NotUInt64", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NotInstruction_NotUInt64(NotInstruction_NotUInt64 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14053 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NotInstruction_NotUInt64, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NotInstruction_NotUInt64);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NotInstruction_NotUInt64*, "System.Linq.Expressions.Interpreter", "NotInstruction/NotUInt64");
