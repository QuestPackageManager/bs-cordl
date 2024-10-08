#pragma once
// IWYU pragma private; include "System/Reflection/ParameterModifier.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ParameterModifier)
// Forward declare root types
namespace System::Reflection {
struct ParameterModifier;
}
// Write type traits
MARK_VAL_T(::System::Reflection::ParameterModifier);
// Type: System.Reflection::ParameterModifier
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: true
// CS Name: ::System.Reflection::ParameterModifier
struct CORDL_TYPE ParameterModifier {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParameterModifier();

  // Ctor Parameters [CppParam { name: "_byRef", ty: "::ArrayW<bool,::Array<bool>*>", modifiers: "", def_value: None }]
  constexpr ParameterModifier(::ArrayW<bool, ::Array<bool>*> _byRef) noexcept;

  /// @brief Field _byRef, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> _byRef;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3486 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::ParameterModifier, 0x8>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::ParameterModifier, _byRef) == 0x0, "Offset mismatch!");

} // namespace System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::ParameterModifier, "System.Reflection", "ParameterModifier");
