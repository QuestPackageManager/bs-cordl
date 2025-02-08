#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NegateInstruction_NegateSingle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__NegateInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NegateInstruction_NegateSingle)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class NegateInstruction_NegateSingle;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NegateInstruction_NegateSingle);
// Dependencies System.Linq.Expressions.Interpreter.NegateInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.NegateInstruction/NegateSingle
class CORDL_TYPE NegateInstruction_NegateSingle : public ::System::Linq::Expressions::Interpreter::NegateInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::NegateInstruction_NegateSingle* New_ctor();

  /// @brief Method Run, addr 0x40f3048, size 0xb0, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40f2e40, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NegateInstruction_NegateSingle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NegateInstruction_NegateSingle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NegateInstruction_NegateSingle(NegateInstruction_NegateSingle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NegateInstruction_NegateSingle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NegateInstruction_NegateSingle(NegateInstruction_NegateSingle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14014 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NegateInstruction_NegateSingle, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NegateInstruction_NegateSingle);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NegateInstruction_NegateSingle*, "System.Linq.Expressions.Interpreter", "NegateInstruction/NegateSingle");
