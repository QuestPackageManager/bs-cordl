#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VFXCameraXRSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VFXCameraXRSettings)
// Forward declare root types
namespace UnityEngine::VFX {
struct VFXCameraXRSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::VFX::VFXCameraXRSettings);
// Dependencies
namespace UnityEngine::VFX {
// Is value type: true
// CS Name: UnityEngine.VFX.VFXCameraXRSettings
struct CORDL_TYPE VFXCameraXRSettings {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXCameraXRSettings();

  // Ctor Parameters [CppParam { name: "viewTotal", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "viewCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "viewOffset", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr VFXCameraXRSettings(uint32_t viewTotal, uint32_t viewCount, uint32_t viewOffset) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22582 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field viewTotal, offset: 0x0, size: 0x4, def value: None
  uint32_t viewTotal;

  /// @brief Field viewCount, offset: 0x4, size: 0x4, def value: None
  uint32_t viewCount;

  /// @brief Field viewOffset, offset: 0x8, size: 0x4, def value: None
  uint32_t viewOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VFXCameraXRSettings, viewTotal) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXCameraXRSettings, viewCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXCameraXRSettings, viewOffset) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::VFX::VFXCameraXRSettings, 0xc>, "Size mismatch!");

} // namespace UnityEngine::VFX
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::VFX::VFXCameraXRSettings, "UnityEngine.VFX", "VFXCameraXRSettings");
