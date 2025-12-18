#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/RightShiftInstruction_RightShiftUInt32.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__RightShiftInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RightShiftInstruction_RightShiftUInt32)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class RightShiftInstruction_RightShiftUInt32;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RightShiftInstruction_RightShiftUInt32);
// Dependencies System.Linq.Expressions.Interpreter.RightShiftInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftUInt32
class CORDL_TYPE RightShiftInstruction_RightShiftUInt32 : public ::System::Linq::Expressions::Interpreter::RightShiftInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::RightShiftInstruction_RightShiftUInt32* New_ctor();

  /// @brief Method Run, addr 0x5e07e90, size 0xc8, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x5e07a34, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RightShiftInstruction_RightShiftUInt32();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RightShiftInstruction_RightShiftUInt32", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RightShiftInstruction_RightShiftUInt32(RightShiftInstruction_RightShiftUInt32&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RightShiftInstruction_RightShiftUInt32", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RightShiftInstruction_RightShiftUInt32(RightShiftInstruction_RightShiftUInt32 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16541 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RightShiftInstruction_RightShiftUInt32, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RightShiftInstruction_RightShiftUInt32);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RightShiftInstruction_RightShiftUInt32*, "System.Linq.Expressions.Interpreter", "RightShiftInstruction/RightShiftUInt32");
