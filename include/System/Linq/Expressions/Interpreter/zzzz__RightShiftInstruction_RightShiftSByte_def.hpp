#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/RightShiftInstruction_RightShiftSByte.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__RightShiftInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RightShiftInstruction_RightShiftSByte)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class RightShiftInstruction_RightShiftSByte;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RightShiftInstruction_RightShiftSByte);
// Dependencies System.Linq.Expressions.Interpreter.RightShiftInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftSByte
class CORDL_TYPE RightShiftInstruction_RightShiftSByte : public ::System::Linq::Expressions::Interpreter::RightShiftInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::RightShiftInstruction_RightShiftSByte* New_ctor();

  /// @brief Method Run, addr 0x5e07a3c, size 0xb8, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x5e07a1c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RightShiftInstruction_RightShiftSByte();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RightShiftInstruction_RightShiftSByte", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RightShiftInstruction_RightShiftSByte(RightShiftInstruction_RightShiftSByte&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RightShiftInstruction_RightShiftSByte", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RightShiftInstruction_RightShiftSByte(RightShiftInstruction_RightShiftSByte const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16535 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RightShiftInstruction_RightShiftSByte, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RightShiftInstruction_RightShiftSByte);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RightShiftInstruction_RightShiftSByte*, "System.Linq.Expressions.Interpreter", "RightShiftInstruction/RightShiftSByte");
