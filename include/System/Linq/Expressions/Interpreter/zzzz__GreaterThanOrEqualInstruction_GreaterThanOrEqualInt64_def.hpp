#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__GreaterThanOrEqualInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64);
// Dependencies System.Linq.Expressions.Interpreter.GreaterThanOrEqualInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.GreaterThanOrEqualInstruction/GreaterThanOrEqualInt64
class CORDL_TYPE GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64 : public ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64* New_ctor(::System::Object* nullValue);

  /// @brief Method Run, addr 0x5de246c, size 0xa4, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x5de21a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* nullValue);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64(GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64(GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16338 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64*, "System.Linq.Expressions.Interpreter", "GreaterThanOrEqualInstruction/GreaterThanOrEqualInt64");
