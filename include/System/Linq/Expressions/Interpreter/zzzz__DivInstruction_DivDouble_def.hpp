#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/DivInstruction_DivDouble.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__DivInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DivInstruction_DivDouble)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class DivInstruction_DivDouble;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DivInstruction_DivDouble*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DivInstruction_DivDouble*, "System.Linq.Expressions.Interpreter", "DivInstruction/DivDouble");
// Dependencies System.Linq.Expressions.Interpreter.DivInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.DivInstruction/DivDouble
class CORDL_TYPE DivInstruction_DivDouble : public ::System::Linq::Expressions::Interpreter::DivInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::DivInstruction_DivDouble* New_ctor();

  /// @brief Method Run, addr 0x5f8d1a8, size 0x10c, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x5f8ca58, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DivInstruction_DivDouble();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DivInstruction_DivDouble", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DivInstruction_DivDouble(DivInstruction_DivDouble&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DivInstruction_DivDouble", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DivInstruction_DivDouble(DivInstruction_DivDouble const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16280 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::DivInstruction_DivDouble) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
