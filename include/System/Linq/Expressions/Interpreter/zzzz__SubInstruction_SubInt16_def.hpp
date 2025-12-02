#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/SubInstruction_SubInt16.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__SubInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SubInstruction_SubInt16)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class SubInstruction_SubInt16;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SubInstruction_SubInt16);
// Dependencies System.Linq.Expressions.Interpreter.SubInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.SubInstruction/SubInt16
class CORDL_TYPE SubInstruction_SubInt16 : public ::System::Linq::Expressions::Interpreter::SubInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::SubInstruction_SubInt16* New_ctor();

  /// @brief Method Run, addr 0x5da0e2c, size 0x10c, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x5da0e0c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubInstruction_SubInt16();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubInstruction_SubInt16", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubInstruction_SubInt16(SubInstruction_SubInt16&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubInstruction_SubInt16", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubInstruction_SubInt16(SubInstruction_SubInt16 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16535 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SubInstruction_SubInt16, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SubInstruction_SubInt16);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SubInstruction_SubInt16*, "System.Linq.Expressions.Interpreter", "SubInstruction/SubInt16");
