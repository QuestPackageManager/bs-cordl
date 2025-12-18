#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUResidentDrawerSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__GPUResidentDrawerMode_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GPUResidentDrawerSettings)
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct GPUResidentDrawerSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::GPUResidentDrawerSettings);
// Dependencies UnityEngine.Rendering.GPUResidentDrawerMode
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUResidentDrawerSettings
struct CORDL_TYPE GPUResidentDrawerSettings {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUResidentDrawerSettings();

  // Ctor Parameters [CppParam { name: "mode", ty: "::UnityEngine::Rendering::GPUResidentDrawerMode", modifiers: "", def_value: None }, CppParam { name: "supportDitheringCrossFade", ty: "bool",
  // modifiers: "", def_value: None }, CppParam { name: "enableOcclusionCulling", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "allowInEditMode", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "smallMeshScreenPercentage", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "errorShader", ty: "::UnityW<::UnityEngine::Shader>", modifiers:
  // "", def_value: None }, CppParam { name: "loadingShader", ty: "::UnityW<::UnityEngine::Shader>", modifiers: "", def_value: None }]
  constexpr GPUResidentDrawerSettings(::UnityEngine::Rendering::GPUResidentDrawerMode mode, bool supportDitheringCrossFade, bool enableOcclusionCulling, bool allowInEditMode,
                                      float_t smallMeshScreenPercentage, ::UnityW<::UnityEngine::Shader> errorShader, ::UnityW<::UnityEngine::Shader> loadingShader) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17606 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field mode, offset: 0x0, size: 0x1, def value: None
  ::UnityEngine::Rendering::GPUResidentDrawerMode mode;

  /// @brief Field supportDitheringCrossFade, offset: 0x1, size: 0x1, def value: None
  bool supportDitheringCrossFade;

  /// @brief Field enableOcclusionCulling, offset: 0x2, size: 0x1, def value: None
  bool enableOcclusionCulling;

  /// @brief Field allowInEditMode, offset: 0x3, size: 0x1, def value: None
  bool allowInEditMode;

  /// @brief Field smallMeshScreenPercentage, offset: 0x4, size: 0x4, def value: None
  float_t smallMeshScreenPercentage;

  /// @brief Field errorShader, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> errorShader;

  /// @brief Field loadingShader, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> loadingShader;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawerSettings, mode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawerSettings, supportDitheringCrossFade) == 0x1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawerSettings, enableOcclusionCulling) == 0x2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawerSettings, allowInEditMode) == 0x3, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawerSettings, smallMeshScreenPercentage) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawerSettings, errorShader) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawerSettings, loadingShader) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUResidentDrawerSettings, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUResidentDrawerSettings, "UnityEngine.Rendering", "GPUResidentDrawerSettings");
