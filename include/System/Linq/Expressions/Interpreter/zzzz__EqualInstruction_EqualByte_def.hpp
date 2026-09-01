#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\EqualInstruction_EqualByte.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__EqualInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EqualInstruction_EqualByte)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class EqualInstruction_EqualByte;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EqualInstruction_EqualByte*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EqualInstruction_EqualByte*, "System.Linq.Expressions.Interpreter", "EqualInstruction/EqualByte");
// Dependencies System.Linq.Expressions.Interpreter.EqualInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.EqualInstruction/EqualByte
class CORDL_TYPE EqualInstruction_EqualByte : public ::System::Linq::Expressions::Interpreter::EqualInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::EqualInstruction_EqualByte* New_ctor();

  /// @brief Method Run, addr 0x5f936e8, size 0xa8, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x5f932dc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EqualInstruction_EqualByte();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EqualInstruction_EqualByte", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EqualInstruction_EqualByte(EqualInstruction_EqualByte&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EqualInstruction_EqualByte", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EqualInstruction_EqualByte(EqualInstruction_EqualByte const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16319 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::EqualInstruction_EqualByte) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
