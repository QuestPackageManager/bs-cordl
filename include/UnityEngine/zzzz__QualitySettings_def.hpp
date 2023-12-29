#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(QualitySettings)
namespace UnityEngine::Rendering {
class RenderPipelineAsset;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine {
struct ColorSpace;
}
// Forward declare root types
namespace UnityEngine {
class QualitySettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::QualitySettings);
// Type: UnityEngine::QualitySettings
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10128))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10013))
// CS Name: ::UnityEngine::QualitySettings*
class CORDL_TYPE QualitySettings : public ::UnityEngine::Object {
public:
  // Declarations
  /// @brief Method set_vSyncCount addr 0x2b51274 size 0x3c virtual false final false
  static inline void set_vSyncCount(int32_t value);

  /// @brief Method get_antiAliasing addr 0x2b512b0 size 0x28 virtual false final false
  static inline int32_t get_antiAliasing();

  /// @brief Method set_antiAliasing addr 0x2b512d8 size 0x3c virtual false final false
  static inline void set_antiAliasing(int32_t value);

  /// @brief Method get_INTERNAL_renderPipeline addr 0x2b51314 size 0x28 virtual false final false
  static inline ::UnityEngine::ScriptableObject* get_INTERNAL_renderPipeline();

  /// @brief Method set_INTERNAL_renderPipeline addr 0x2b5133c size 0x3c virtual false final false
  static inline void set_INTERNAL_renderPipeline(::UnityEngine::ScriptableObject* value);

  /// @brief Method get_renderPipeline addr 0x2b51378 size 0x90 virtual false final false
  static inline ::UnityEngine::Rendering::RenderPipelineAsset* get_renderPipeline();

  /// @brief Method set_renderPipeline addr 0x2b51408 size 0x3c virtual false final false
  static inline void set_renderPipeline(::UnityEngine::Rendering::RenderPipelineAsset* value);

  /// @brief Method set_maxQueuedFrames addr 0x2b51444 size 0x3c virtual false final false
  static inline void set_maxQueuedFrames(int32_t value);

  /// @brief Method get_activeColorSpace addr 0x2b51480 size 0x28 virtual false final false
  static inline ::UnityEngine::ColorSpace get_activeColorSpace();

  // Ctor Parameters [CppParam { name: "", ty: "QualitySettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QualitySettings(QualitySettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QualitySettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QualitySettings(QualitySettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QualitySettings();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::QualitySettings, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::QualitySettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::QualitySettings*, "UnityEngine", "QualitySettings");
