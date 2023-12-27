#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UsageHint)
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
struct UsageHint;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::XR::UsageHint);
// Type: UnityEngine.InputSystem.XR::UsageHint
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::XR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6334))
// CS Name: ::UnityEngine.InputSystem.XR::UsageHint
struct CORDL_TYPE UsageHint {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "content", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr UsageHint(::StringW content) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr UsageHint();

  /// @brief Field content, offset: 0x0, size: 0x8, def value: None
  ::StringW content;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::UsageHint, 0x8>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::UsageHint, "UnityEngine.InputSystem.XR", "UsageHint");
