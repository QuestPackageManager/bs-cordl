#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CullingOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CullingOptions)
// Forward declare root types
namespace UnityEngine::Rendering {
struct CullingOptions;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::CullingOptions);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.CullingOptions
struct CORDL_TYPE CullingOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CullingOptions_Unwrapped
  enum struct __CullingOptions_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_ForceEvenIfCameraIsNotActive = static_cast<int32_t>(0x1),
    __E_OcclusionCull = static_cast<int32_t>(0x2),
    __E_NeedsLighting = static_cast<int32_t>(0x4),
    __E_NeedsReflectionProbes = static_cast<int32_t>(0x8),
    __E_Stereo = static_cast<int32_t>(0x10),
    __E_DisablePerObjectCulling = static_cast<int32_t>(0x20),
    __E_ShadowCasters = static_cast<int32_t>(0x40),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CullingOptions_Unwrapped() const noexcept {
    return static_cast<__CullingOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CullingOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CullingOptions(int32_t value__) noexcept;

  /// @brief Field DisablePerObjectCulling value: I32(32)
  static ::UnityEngine::Rendering::CullingOptions const DisablePerObjectCulling;

  /// @brief Field ForceEvenIfCameraIsNotActive value: I32(1)
  static ::UnityEngine::Rendering::CullingOptions const ForceEvenIfCameraIsNotActive;

  /// @brief Field NeedsLighting value: I32(4)
  static ::UnityEngine::Rendering::CullingOptions const NeedsLighting;

  /// @brief Field NeedsReflectionProbes value: I32(8)
  static ::UnityEngine::Rendering::CullingOptions const NeedsReflectionProbes;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Rendering::CullingOptions const None;

  /// @brief Field OcclusionCull value: I32(2)
  static ::UnityEngine::Rendering::CullingOptions const OcclusionCull;

  /// @brief Field ShadowCasters value: I32(64)
  static ::UnityEngine::Rendering::CullingOptions const ShadowCasters;

  /// @brief Field Stereo value: I32(16)
  static ::UnityEngine::Rendering::CullingOptions const Stereo;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10769 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::CullingOptions, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CullingOptions, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CullingOptions, "UnityEngine.Rendering", "CullingOptions");
