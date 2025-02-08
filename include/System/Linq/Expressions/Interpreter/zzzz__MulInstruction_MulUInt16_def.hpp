#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/MulInstruction_MulUInt16.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__MulInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MulInstruction_MulUInt16)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class MulInstruction_MulUInt16;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MulInstruction_MulUInt16);
// Dependencies System.Linq.Expressions.Interpreter.MulInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.MulInstruction/MulUInt16
class CORDL_TYPE MulInstruction_MulUInt16 : public ::System::Linq::Expressions::Interpreter::MulInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::MulInstruction_MulUInt16* New_ctor();

  /// @brief Method Run, addr 0x40f1560, size 0x148, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40f1174, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MulInstruction_MulUInt16();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MulInstruction_MulUInt16", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MulInstruction_MulUInt16(MulInstruction_MulUInt16&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MulInstruction_MulUInt16", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MulInstruction_MulUInt16(MulInstruction_MulUInt16 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13998 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MulInstruction_MulUInt16, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MulInstruction_MulUInt16);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MulInstruction_MulUInt16*, "System.Linq.Expressions.Interpreter", "MulInstruction/MulUInt16");
