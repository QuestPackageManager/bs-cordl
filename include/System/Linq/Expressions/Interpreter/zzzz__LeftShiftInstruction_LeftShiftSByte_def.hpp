#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/LeftShiftInstruction_LeftShiftSByte.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__LeftShiftInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LeftShiftInstruction_LeftShiftSByte)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class LeftShiftInstruction_LeftShiftSByte;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LeftShiftInstruction_LeftShiftSByte);
// Dependencies System.Linq.Expressions.Interpreter.LeftShiftInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.LeftShiftInstruction/LeftShiftSByte
class CORDL_TYPE LeftShiftInstruction_LeftShiftSByte : public ::System::Linq::Expressions::Interpreter::LeftShiftInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::LeftShiftInstruction_LeftShiftSByte* New_ctor();

  /// @brief Method Run, addr 0x5dead18, size 0xa8, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x5deacf8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeftShiftInstruction_LeftShiftSByte();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LeftShiftInstruction_LeftShiftSByte", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeftShiftInstruction_LeftShiftSByte(LeftShiftInstruction_LeftShiftSByte&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeftShiftInstruction_LeftShiftSByte", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeftShiftInstruction_LeftShiftSByte(LeftShiftInstruction_LeftShiftSByte const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16368 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LeftShiftInstruction_LeftShiftSByte, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LeftShiftInstruction_LeftShiftSByte);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeftShiftInstruction_LeftShiftSByte*, "System.Linq.Expressions.Interpreter", "LeftShiftInstruction/LeftShiftSByte");
