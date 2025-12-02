#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/LightFlag.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightFlag)
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
struct LightFlag;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::Internal::LightFlag);
// Dependencies
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.Internal.LightFlag
struct CORDL_TYPE LightFlag {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LightFlag_Unwrapped
  enum struct __LightFlag_Unwrapped : int32_t {
    __E_SubtractiveMixedLighting = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LightFlag_Unwrapped() const noexcept {
    return static_cast<__LightFlag_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LightFlag();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LightFlag(int32_t value__) noexcept;

  /// @brief Field SubtractiveMixedLighting value: I32(4)
  static ::UnityEngine::Rendering::Universal::Internal::LightFlag const SubtractiveMixedLighting;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13022 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::LightFlag, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::LightFlag, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::LightFlag, "UnityEngine.Rendering.Universal.Internal", "LightFlag");
