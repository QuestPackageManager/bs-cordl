#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/LeftShiftInstruction_LeftShiftUInt64.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__LeftShiftInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LeftShiftInstruction_LeftShiftUInt64)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class LeftShiftInstruction_LeftShiftUInt64;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LeftShiftInstruction_LeftShiftUInt64);
// Dependencies System.Linq.Expressions.Interpreter.LeftShiftInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.LeftShiftInstruction/LeftShiftUInt64
class CORDL_TYPE LeftShiftInstruction_LeftShiftUInt64 : public ::System::Linq::Expressions::Interpreter::LeftShiftInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::LeftShiftInstruction_LeftShiftUInt64* New_ctor();

  /// @brief Method Run, addr 0x40d5fec, size 0x100, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40d5970, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeftShiftInstruction_LeftShiftUInt64();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LeftShiftInstruction_LeftShiftUInt64", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeftShiftInstruction_LeftShiftUInt64(LeftShiftInstruction_LeftShiftUInt64&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeftShiftInstruction_LeftShiftUInt64", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeftShiftInstruction_LeftShiftUInt64(LeftShiftInstruction_LeftShiftUInt64 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13914 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LeftShiftInstruction_LeftShiftUInt64, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LeftShiftInstruction_LeftShiftUInt64);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeftShiftInstruction_LeftShiftUInt64*, "System.Linq.Expressions.Interpreter", "LeftShiftInstruction/LeftShiftUInt64");
