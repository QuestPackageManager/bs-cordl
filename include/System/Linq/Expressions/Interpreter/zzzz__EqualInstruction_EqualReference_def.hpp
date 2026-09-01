#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\EqualInstruction_EqualReference.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__EqualInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EqualInstruction_EqualReference)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class EqualInstruction_EqualReference;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EqualInstruction_EqualReference*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EqualInstruction_EqualReference*, "System.Linq.Expressions.Interpreter", "EqualInstruction/EqualReference");
// Dependencies System.Linq.Expressions.Interpreter.EqualInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.EqualInstruction/EqualReference
class CORDL_TYPE EqualInstruction_EqualReference : public ::System::Linq::Expressions::Interpreter::EqualInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::EqualInstruction_EqualReference* New_ctor();

  /// @brief Method Run, addr 0x5f93ad8, size 0x54, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x5f932f4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EqualInstruction_EqualReference();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EqualInstruction_EqualReference", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EqualInstruction_EqualReference(EqualInstruction_EqualReference&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EqualInstruction_EqualReference", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EqualInstruction_EqualReference(EqualInstruction_EqualReference const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16325 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::EqualInstruction_EqualReference) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
