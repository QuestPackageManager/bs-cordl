#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/AndInstruction_AndUInt16.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__AndInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AndInstruction_AndUInt16)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class AndInstruction_AndUInt16;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AndInstruction_AndUInt16);
// Dependencies System.Linq.Expressions.Interpreter.AndInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.AndInstruction/AndUInt16
class CORDL_TYPE AndInstruction_AndUInt16 : public ::System::Linq::Expressions::Interpreter::AndInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::AndInstruction_AndUInt16* New_ctor();

  /// @brief Method Run, addr 0x40c13c4, size 0xf4, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40c0ed4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndInstruction_AndUInt16();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndInstruction_AndUInt16", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndInstruction_AndUInt16(AndInstruction_AndUInt16&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndInstruction_AndUInt16", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndInstruction_AndUInt16(AndInstruction_AndUInt16 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13764 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AndInstruction_AndUInt16, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AndInstruction_AndUInt16);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AndInstruction_AndUInt16*, "System.Linq.Expressions.Interpreter", "AndInstruction/AndUInt16");
