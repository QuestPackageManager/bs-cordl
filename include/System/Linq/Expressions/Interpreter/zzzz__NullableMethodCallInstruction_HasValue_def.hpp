#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NullableMethodCallInstruction_HasValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__NullableMethodCallInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NullableMethodCallInstruction_HasValue)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class NullableMethodCallInstruction_HasValue;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NullableMethodCallInstruction_HasValue);
// Dependencies System.Linq.Expressions.Interpreter.NullableMethodCallInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/HasValue
class CORDL_TYPE NullableMethodCallInstruction_HasValue : public ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::NullableMethodCallInstruction_HasValue* New_ctor();

  /// @brief Method Run, addr 0x40fa514, size 0x3c, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40fa41c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NullableMethodCallInstruction_HasValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NullableMethodCallInstruction_HasValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NullableMethodCallInstruction_HasValue(NullableMethodCallInstruction_HasValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NullableMethodCallInstruction_HasValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NullableMethodCallInstruction_HasValue(NullableMethodCallInstruction_HasValue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14106 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NullableMethodCallInstruction_HasValue, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NullableMethodCallInstruction_HasValue);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NullableMethodCallInstruction_HasValue*, "System.Linq.Expressions.Interpreter", "NullableMethodCallInstruction/HasValue");
