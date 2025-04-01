#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/AndInstruction_AndBoolean.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__AndInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AndInstruction_AndBoolean)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class AndInstruction_AndBoolean;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AndInstruction_AndBoolean);
// Dependencies System.Linq.Expressions.Interpreter.AndInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.AndInstruction/AndBoolean
class CORDL_TYPE AndInstruction_AndBoolean : public ::System::Linq::Expressions::Interpreter::AndInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::AndInstruction_AndBoolean* New_ctor();

  /// @brief Method Run, addr 0x40bc7bc, size 0x154, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40bbff0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndInstruction_AndBoolean();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndInstruction_AndBoolean", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndInstruction_AndBoolean(AndInstruction_AndBoolean&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndInstruction_AndBoolean", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndInstruction_AndBoolean(AndInstruction_AndBoolean const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13765 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AndInstruction_AndBoolean, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AndInstruction_AndBoolean);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AndInstruction_AndBoolean*, "System.Linq.Expressions.Interpreter", "AndInstruction/AndBoolean");
