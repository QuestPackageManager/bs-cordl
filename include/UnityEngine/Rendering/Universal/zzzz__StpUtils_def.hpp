#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/StpUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StpUtils)
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering::Universal {
class TemporalAA_JitterFunc;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalResourceData;
}
namespace UnityEngine::Rendering {
struct STP_Config;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class StpUtils;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::StpUtils);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.StpUtils
class CORDL_TYPE StpUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_JitterFunc, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_JitterFunc, put = setStaticF_s_JitterFunc)) ::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc* s_JitterFunc;

  /// @brief Method CalculateJitter, addr 0x669e4f0, size 0x80, virtual false, abstract: false, final false
  static inline void CalculateJitter(int32_t frameIndex, ::ByRef<::UnityEngine::Vector2> jitter, ::ByRef<bool> allowScaling);

  /// @brief Method Execute, addr 0x669eb48, size 0x2fc, virtual false, abstract: false, final false
  static inline void Execute(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                             ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle inputColor,
                             ::UnityEngine::Rendering::RenderGraphModule::TextureHandle inputDepth, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle inputMotion,
                             ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination, ::UnityEngine::Texture2D* noiseTexture);

  /// @brief Method PopulateStpConfig, addr 0x669e570, size 0x598, virtual false, abstract: false, final false
  static inline void PopulateStpConfig(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle inputColor,
                                       ::UnityEngine::Rendering::RenderGraphModule::TextureHandle inputDepth, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle inputMotion,
                                       int32_t debugViewIndex, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle debugView,
                                       ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination, ::UnityEngine::Texture2D* noiseTexture,
                                       ::ByRef<::UnityEngine::Rendering::STP_Config> config);

  static inline ::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc* getStaticF_s_JitterFunc();

  static inline void setStaticF_s_JitterFunc(::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StpUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StpUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StpUtils(StpUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StpUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StpUtils(StpUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12934 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::StpUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::StpUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::StpUtils*, "UnityEngine.Rendering.Universal", "StpUtils");
