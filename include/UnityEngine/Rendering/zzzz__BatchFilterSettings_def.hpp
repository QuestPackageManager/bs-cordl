#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchFilterSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BatchFilterSettings)
namespace UnityEngine::Rendering {
struct ShadowCastingMode;
}
namespace UnityEngine {
struct MotionVectorGenerationMode;
}
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
  __declspec(property(put = set_allDepthSorted)) bool allDepthSorted;

  __declspec(property(put = set_batchLayer)) uint8_t batchLayer;

  __declspec(property(put = set_motionMode)) ::UnityEngine::MotionVectorGenerationMode motionMode;

  __declspec(property(put = set_receiveShadows)) bool receiveShadows;

  __declspec(property(put = set_shadowCastingMode)) ::UnityEngine::Rendering::ShadowCastingMode shadowCastingMode;

  __declspec(property(put = set_staticShadowCaster)) bool staticShadowCaster;

  /// @brief Method set_allDepthSorted, addr 0x695f5cc, size 0x8, virtual false, abstract: false, final false
  inline void set_allDepthSorted(bool value);

  /// @brief Method set_batchLayer, addr 0x695f5a4, size 0x8, virtual false, abstract: false, final false
  inline void set_batchLayer(uint8_t value);

  /// @brief Method set_motionMode, addr 0x695f5ac, size 0x8, virtual false, abstract: false, final false
  inline void set_motionMode(::UnityEngine::MotionVectorGenerationMode value);

  /// @brief Method set_receiveShadows, addr 0x695f5bc, size 0x8, virtual false, abstract: false, final false
  inline void set_receiveShadows(bool value);

  /// @brief Method set_shadowCastingMode, addr 0x695f5b4, size 0x8, virtual false, abstract: false, final false
  inline void set_shadowCastingMode(::UnityEngine::Rendering::ShadowCastingMode value);

  /// @brief Method set_staticShadowCaster, addr 0x695f5c4, size 0x8, virtual false, abstract: false, final false
  inline void set_staticShadowCaster(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchFilterSettings();

  // Ctor Parameters [CppParam { name: "renderingLayerMask", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "rendererPriority", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "m_sceneCullingMask", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "layer", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_batchLayer", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_motionMode", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_shadowMode", ty: "uint8_t",
  // modifiers: "", def_value: None }, CppParam { name: "m_receiveShadows", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_staticShadowCaster", ty: "uint8_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_allDepthSorted", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_isSceneCullingMaskSet", ty: "uint8_t", modifiers: "", def_value: None
  // }]
  constexpr BatchFilterSettings(uint32_t renderingLayerMask, int32_t rendererPriority, uint64_t m_sceneCullingMask, uint8_t layer, uint8_t m_batchLayer, uint8_t m_motionMode, uint8_t m_shadowMode,
                                uint8_t m_receiveShadows, uint8_t m_staticShadowCaster, uint8_t m_allDepthSorted, uint8_t m_isSceneCullingMaskSet) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10838 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field renderingLayerMask, offset: 0x0, size: 0x4, def value: None
  uint32_t renderingLayerMask;

  /// @brief Field rendererPriority, offset: 0x4, size: 0x4, def value: None
  int32_t rendererPriority;

  /// @brief Field m_sceneCullingMask, offset: 0x8, size: 0x8, def value: None
  uint64_t m_sceneCullingMask;

  /// @brief Field layer, offset: 0x10, size: 0x1, def value: None
  uint8_t layer;

  /// @brief Field m_batchLayer, offset: 0x11, size: 0x1, def value: None
  uint8_t m_batchLayer;

  /// @brief Field m_motionMode, offset: 0x12, size: 0x1, def value: None
  uint8_t m_motionMode;

  /// @brief Field m_shadowMode, offset: 0x13, size: 0x1, def value: None
  uint8_t m_shadowMode;

  /// @brief Field m_receiveShadows, offset: 0x14, size: 0x1, def value: None
  uint8_t m_receiveShadows;

  /// @brief Field m_staticShadowCaster, offset: 0x15, size: 0x1, def value: None
  uint8_t m_staticShadowCaster;

  /// @brief Field m_allDepthSorted, offset: 0x16, size: 0x1, def value: None
  uint8_t m_allDepthSorted;

  /// @brief Field m_isSceneCullingMaskSet, offset: 0x17, size: 0x1, def value: None
  uint8_t m_isSceneCullingMaskSet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::BatchFilterSettings, renderingLayerMask) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchFilterSettings, rendererPriority) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchFilterSettings, m_sceneCullingMask) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchFilterSettings, layer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchFilterSettings, m_batchLayer) == 0x11, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchFilterSettings, m_motionMode) == 0x12, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchFilterSettings, m_shadowMode) == 0x13, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchFilterSettings, m_receiveShadows) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchFilterSettings, m_staticShadowCaster) == 0x15, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchFilterSettings, m_allDepthSorted) == 0x16, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchFilterSettings, m_isSceneCullingMaskSet) == 0x17, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BatchFilterSettings, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchFilterSettings, "UnityEngine.Rendering", "BatchFilterSettings");
