#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/OrInstruction_OrBoolean.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__OrInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OrInstruction_OrBoolean)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class OrInstruction_OrBoolean;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OrInstruction_OrBoolean);
// Dependencies System.Linq.Expressions.Interpreter.OrInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.OrInstruction/OrBoolean
class CORDL_TYPE OrInstruction_OrBoolean : public ::System::Linq::Expressions::Interpreter::OrInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::OrInstruction_OrBoolean* New_ctor();

  /// @brief Method Run, addr 0x5e07544, size 0x138, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x5e06fd0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OrInstruction_OrBoolean();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OrInstruction_OrBoolean", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OrInstruction_OrBoolean(OrInstruction_OrBoolean&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OrInstruction_OrBoolean", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OrInstruction_OrBoolean(OrInstruction_OrBoolean const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16533 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OrInstruction_OrBoolean, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OrInstruction_OrBoolean);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OrInstruction_OrBoolean*, "System.Linq.Expressions.Interpreter", "OrInstruction/OrBoolean");
