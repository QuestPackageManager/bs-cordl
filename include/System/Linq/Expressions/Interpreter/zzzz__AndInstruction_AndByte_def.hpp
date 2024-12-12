#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/AndInstruction_AndByte.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__AndInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AndInstruction_AndByte)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class AndInstruction_AndByte;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AndInstruction_AndByte);
// Dependencies System.Linq.Expressions.Interpreter.AndInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.AndInstruction/AndByte
class CORDL_TYPE AndInstruction_AndByte : public ::System::Linq::Expressions::Interpreter::AndInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::AndInstruction_AndByte* New_ctor();

  /// @brief Method Run, addr 0x40bf928, size 0xf4, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40bf524, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndInstruction_AndByte();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndInstruction_AndByte", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndInstruction_AndByte(AndInstruction_AndByte&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndInstruction_AndByte", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndInstruction_AndByte(AndInstruction_AndByte const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13758 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AndInstruction_AndByte, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AndInstruction_AndByte);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AndInstruction_AndByte*, "System.Linq.Expressions.Interpreter", "AndInstruction/AndByte");
