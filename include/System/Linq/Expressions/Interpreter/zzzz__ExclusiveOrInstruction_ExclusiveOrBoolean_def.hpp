#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\ExclusiveOrInstruction_ExclusiveOrBoolean.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__ExclusiveOrInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExclusiveOrInstruction_ExclusiveOrBoolean)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class ExclusiveOrInstruction_ExclusiveOrBoolean;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrBoolean*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrBoolean*, "System.Linq.Expressions.Interpreter", "ExclusiveOrInstruction/ExclusiveOrBoolean");
// Dependencies System.Linq.Expressions.Interpreter.ExclusiveOrInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.ExclusiveOrInstruction/ExclusiveOrBoolean
class CORDL_TYPE ExclusiveOrInstruction_ExclusiveOrBoolean : public ::System::Linq::Expressions::Interpreter::ExclusiveOrInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrBoolean* New_ctor();

  /// @brief Method Run, addr 0x5f94e70, size 0x9c, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x5f94fe8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExclusiveOrInstruction_ExclusiveOrBoolean();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExclusiveOrInstruction_ExclusiveOrBoolean", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExclusiveOrInstruction_ExclusiveOrBoolean(ExclusiveOrInstruction_ExclusiveOrBoolean&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExclusiveOrInstruction_ExclusiveOrBoolean", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExclusiveOrInstruction_ExclusiveOrBoolean(ExclusiveOrInstruction_ExclusiveOrBoolean const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16347 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrBoolean) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
