#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/RuntimeLabel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeLabel)
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
struct RuntimeLabel;
}
// Write type traits
MARK_VAL_T(::System::Linq::Expressions::Interpreter::RuntimeLabel);
// Dependencies
namespace System::Linq::Expressions::Interpreter {
// Is value type: true
// CS Name: System.Linq.Expressions.Interpreter.RuntimeLabel
struct CORDL_TYPE RuntimeLabel {
public:
  // Declarations
  /// @brief Method ToString, addr 0x5d71394, size 0x10c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x5d71388, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t index, int32_t continuationStackDepth, int32_t stackDepth);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeLabel();

  // Ctor Parameters [CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "StackDepth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "ContinuationStackDepth", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RuntimeLabel(int32_t Index, int32_t StackDepth, int32_t ContinuationStackDepth) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16223 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field Index, offset: 0x0, size: 0x4, def value: None
  int32_t Index;

  /// @brief Field StackDepth, offset: 0x4, size: 0x4, def value: None
  int32_t StackDepth;

  /// @brief Field ContinuationStackDepth, offset: 0x8, size: 0x4, def value: None
  int32_t ContinuationStackDepth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::RuntimeLabel, Index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::RuntimeLabel, StackDepth) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::RuntimeLabel, ContinuationStackDepth) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::RuntimeLabel, 0xc>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::RuntimeLabel, "System.Linq.Expressions.Interpreter", "RuntimeLabel");
