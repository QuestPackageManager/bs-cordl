#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/SubInstruction_SubDouble.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__SubInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SubInstruction_SubDouble)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class SubInstruction_SubDouble;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SubInstruction_SubDouble);
// Dependencies System.Linq.Expressions.Interpreter.SubInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.SubInstruction/SubDouble
class CORDL_TYPE SubInstruction_SubDouble : public ::System::Linq::Expressions::Interpreter::SubInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::SubInstruction_SubDouble* New_ctor();

  /// @brief Method Run, addr 0x5da1574, size 0x10c, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x5da0e28, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubInstruction_SubDouble();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubInstruction_SubDouble", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubInstruction_SubDouble(SubInstruction_SubDouble&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubInstruction_SubDouble", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubInstruction_SubDouble(SubInstruction_SubDouble const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16542 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SubInstruction_SubDouble, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SubInstruction_SubDouble);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SubInstruction_SubDouble*, "System.Linq.Expressions.Interpreter", "SubInstruction/SubDouble");
