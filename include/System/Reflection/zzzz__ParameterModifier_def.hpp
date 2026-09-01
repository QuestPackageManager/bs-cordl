#pragma once
// IWYU pragma private; include "System\Reflection\ParameterModifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ParameterModifier)
// Forward declare root types
namespace System::Reflection {
struct ParameterModifier;
}
// Write type traits
MARK_VAL_T(::System::Reflection::ParameterModifier);
DEFINE_IL2CPP_CLASS(::System::Reflection::ParameterModifier, "System.Reflection", "ParameterModifier");
// Dependencies
namespace System::Reflection {
// Is value type: true
// CS Name: System.Reflection.ParameterModifier
struct CORDL_TYPE ParameterModifier {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParameterModifier();

  // Ctor Parameters [CppParam { name: "_byRef", ty: "::ArrayW<bool>", modifiers: "", def_value: None }]
  constexpr ParameterModifier(::ArrayW<bool> _byRef) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3508 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field _byRef, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<bool> _byRef;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Reflection::ParameterModifier, _byRef) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Reflection::ParameterModifier) == 0x8, "Size mismatch!");

} // namespace System::Reflection
