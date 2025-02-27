#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchFilterSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BatchFilterSettings)
// Forward declare root types
namespace UnityEngine::Rendering {
struct BatchFilterSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BatchFilterSettings);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.BatchFilterSettings
struct CORDL_TYPE BatchFilterSettings {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchFilterSettings();

  // Ctor Parameters [CppParam { name: "renderingLayerMask", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "layer", ty: "uint8_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_motionMode", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_shadowMode", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_receiveShadows", ty:
  // "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_staticShadowCaster", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_allDepthSorted", ty: "uint8_t",
  // modifiers: "", def_value: None }]
  constexpr BatchFilterSettings(uint32_t renderingLayerMask, uint8_t layer, uint8_t m_motionMode, uint8_t m_shadowMode, uint8_t m_receiveShadows, uint8_t m_staticShadowCaster,
                                uint8_t m_allDepthSorted) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11250 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field renderingLayerMask, offset: 0x0, size: 0x4, def value: None
  uint32_t renderingLayerMask;

  /// @brief Field layer, offset: 0x4, size: 0x1, def value: None
  uint8_t layer;

  /// @brief Field m_motionMode, offset: 0x5, size: 0x1, def value: None
  uint8_t m_motionMode;

  /// @brief Field m_shadowMode, offset: 0x6, size: 0x1, def value: None
  uint8_t m_shadowMode;

  /// @brief Field m_receiveShadows, offset: 0x7, size: 0x1, def value: None
  uint8_t m_receiveShadows;

  /// @brief Field m_staticShadowCaster, offset: 0x8, size: 0x1, def value: None
  uint8_t m_staticShadowCaster;

  /// @brief Field m_allDepthSorted, offset: 0x9, size: 0x1, def value: None
  uint8_t m_allDepthSorted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::BatchFilterSettings, renderingLayerMask) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchFilterSettings, layer) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchFilterSettings, m_motionMode) == 0x5, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchFilterSettings, m_shadowMode) == 0x6, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchFilterSettings, m_receiveShadows) == 0x7, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchFilterSettings, m_staticShadowCaster) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchFilterSettings, m_allDepthSorted) == 0x9, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BatchFilterSettings, 0xc>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchFilterSettings, "UnityEngine.Rendering", "BatchFilterSettings");
