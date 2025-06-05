#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__GreaterThanOrEqualInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle);
// Dependencies System.Linq.Expressions.Interpreter.GreaterThanOrEqualInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.GreaterThanOrEqualInstruction/GreaterThanOrEqualSingle
class CORDL_TYPE GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle : public ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle* New_ctor(::System::Object* nullValue);

  /// @brief Method Run, addr 0x40cd2ec, size 0xe4, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40ccae0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* nullValue);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle(GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle(GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13882 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle*, "System.Linq.Expressions.Interpreter", "GreaterThanOrEqualInstruction/GreaterThanOrEqualSingle");
