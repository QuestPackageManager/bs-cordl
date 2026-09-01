#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\LeftShiftInstruction_LeftShiftUInt32.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__LeftShiftInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LeftShiftInstruction_LeftShiftUInt32)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class LeftShiftInstruction_LeftShiftUInt32;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LeftShiftInstruction_LeftShiftUInt32*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LeftShiftInstruction_LeftShiftUInt32*, "System.Linq.Expressions.Interpreter", "LeftShiftInstruction/LeftShiftUInt32");
// Dependencies System.Linq.Expressions.Interpreter.LeftShiftInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.LeftShiftInstruction/LeftShiftUInt32
class CORDL_TYPE LeftShiftInstruction_LeftShiftUInt32 : public ::System::Linq::Expressions::Interpreter::LeftShiftInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::LeftShiftInstruction_LeftShiftUInt32* New_ctor();

  /// @brief Method Run, addr 0x5f9fc68, size 0xbc, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x5f9f868, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeftShiftInstruction_LeftShiftUInt32();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LeftShiftInstruction_LeftShiftUInt32", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeftShiftInstruction_LeftShiftUInt32(LeftShiftInstruction_LeftShiftUInt32&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeftShiftInstruction_LeftShiftUInt32", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeftShiftInstruction_LeftShiftUInt32(LeftShiftInstruction_LeftShiftUInt32 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16406 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::LeftShiftInstruction_LeftShiftUInt32) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
