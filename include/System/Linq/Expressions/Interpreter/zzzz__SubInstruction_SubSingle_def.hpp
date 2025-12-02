#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/SubInstruction_SubSingle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__SubInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SubInstruction_SubSingle)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class SubInstruction_SubSingle;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SubInstruction_SubSingle);
// Dependencies System.Linq.Expressions.Interpreter.SubInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.SubInstruction/SubSingle
class CORDL_TYPE SubInstruction_SubSingle : public ::System::Linq::Expressions::Interpreter::SubInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::SubInstruction_SubSingle* New_ctor();

  /// @brief Method Run, addr 0x5da1468, size 0x10c, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x5da0e24, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubInstruction_SubSingle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubInstruction_SubSingle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubInstruction_SubSingle(SubInstruction_SubSingle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubInstruction_SubSingle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubInstruction_SubSingle(SubInstruction_SubSingle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16541 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SubInstruction_SubSingle, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SubInstruction_SubSingle);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SubInstruction_SubSingle*, "System.Linq.Expressions.Interpreter", "SubInstruction/SubSingle");
