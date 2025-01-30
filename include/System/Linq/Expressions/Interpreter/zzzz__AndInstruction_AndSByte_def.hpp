#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/AndInstruction_AndSByte.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__AndInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AndInstruction_AndSByte)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class AndInstruction_AndSByte;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AndInstruction_AndSByte);
// Dependencies System.Linq.Expressions.Interpreter.AndInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.AndInstruction/AndSByte
class CORDL_TYPE AndInstruction_AndSByte : public ::System::Linq::Expressions::Interpreter::AndInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::AndInstruction_AndSByte* New_ctor();

  /// @brief Method Run, addr 0x40c27b0, size 0xf4, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40c2768, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndInstruction_AndSByte();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndInstruction_AndSByte", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndInstruction_AndSByte(AndInstruction_AndSByte&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndInstruction_AndSByte", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndInstruction_AndSByte(AndInstruction_AndSByte const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13757 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AndInstruction_AndSByte, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AndInstruction_AndSByte);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AndInstruction_AndSByte*, "System.Linq.Expressions.Interpreter", "AndInstruction/AndSByte");
