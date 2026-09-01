#pragma once
// IWYU pragma private; include "GlobalNamespace\MainEffectRendererFeature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MainEffectRendererFeature)
namespace GlobalNamespace {
class MainEffectController;
}
namespace GlobalNamespace {
class MainEffectLoadingIndicatorPass;
}
namespace GlobalNamespace {
class MainEffectPostRenderPass;
}
namespace GlobalNamespace {
class MainEffectPreRenderPass;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class MainEffectRendererFeature;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MainEffectRendererFeature*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MainEffectRendererFeature*, "", "MainEffectRendererFeature");
// Dependencies UnityEngine.Rendering.Universal.ScriptableRendererFeature
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainEffectRendererFeature
class CORDL_TYPE MainEffectRendererFeature : public ::UnityEngine::Rendering::Universal::ScriptableRendererFeature {
public:
  // Declarations
  /// @brief Field _loadingIndicatorDelaySec, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__loadingIndicatorDelaySec, put = __cordl_internal_set__loadingIndicatorDelaySec)) float_t _loadingIndicatorDelaySec;

  /// @brief Field _loadingIndicatorPass, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__loadingIndicatorPass, put = __cordl_internal_set__loadingIndicatorPass)) ::GlobalNamespace::MainEffectLoadingIndicatorPass* _loadingIndicatorPass;

  /// @brief Field _loadingIndicatorShader, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__loadingIndicatorShader, put = __cordl_internal_set__loadingIndicatorShader)) ::UnityW<::UnityEngine::Shader> _loadingIndicatorShader;

  /// @brief Field _loadingIndicatorTexture, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__loadingIndicatorTexture, put = __cordl_internal_set__loadingIndicatorTexture)) ::UnityW<::UnityEngine::Texture2D> _loadingIndicatorTexture;

  /// @brief Field _postRenderPass, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__postRenderPass, put = __cordl_internal_set__postRenderPass)) ::GlobalNamespace::MainEffectPostRenderPass* _postRenderPass;

  /// @brief Field _preRenderPass, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__preRenderPass, put = __cordl_internal_set__preRenderPass)) ::GlobalNamespace::MainEffectPreRenderPass* _preRenderPass;

  /// @brief Field _spinnerShownAtTimeSec, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__spinnerShownAtTimeSec, put = __cordl_internal_set__spinnerShownAtTimeSec)) float_t _spinnerShownAtTimeSec;

  /// @brief Method AddRenderPasses, addr 0x5f4374c, size 0x68, virtual true, abstract: false, final false
  inline void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Create, addr 0x5f4340c, size 0xe4, virtual true, abstract: false, final false
  inline void Create();

  /// @brief Method Dispose, addr 0x5f4373c, size 0x10, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EnqueueLoadingIndicatorPassIfDue, addr 0x5f437b8, size 0x138, virtual false, abstract: false, final false
  inline void EnqueueLoadingIndicatorPassIfDue(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, ::GlobalNamespace::MainEffectController* controller);

  /// @brief Method GetEnabledController, addr 0x5f438f0, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityW<::GlobalNamespace::MainEffectController> GetEnabledController(::UnityEngine::Camera* camera);

  static inline ::GlobalNamespace::MainEffectRendererFeature* New_ctor();

  /// @brief Method ResolveController, addr 0x5f437b4, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityW<::GlobalNamespace::MainEffectController> ResolveController(::UnityEngine::Camera* camera);

  constexpr float_t const& __cordl_internal_get__loadingIndicatorDelaySec() const;

  constexpr float_t& __cordl_internal_get__loadingIndicatorDelaySec();

  constexpr ::GlobalNamespace::MainEffectLoadingIndicatorPass* const& __cordl_internal_get__loadingIndicatorPass() const;

  constexpr ::GlobalNamespace::MainEffectLoadingIndicatorPass*& __cordl_internal_get__loadingIndicatorPass();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__loadingIndicatorShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__loadingIndicatorShader();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__loadingIndicatorTexture() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__loadingIndicatorTexture();

  constexpr ::GlobalNamespace::MainEffectPostRenderPass* const& __cordl_internal_get__postRenderPass() const;

  constexpr ::GlobalNamespace::MainEffectPostRenderPass*& __cordl_internal_get__postRenderPass();

  constexpr ::GlobalNamespace::MainEffectPreRenderPass* const& __cordl_internal_get__preRenderPass() const;

  constexpr ::GlobalNamespace::MainEffectPreRenderPass*& __cordl_internal_get__preRenderPass();

  constexpr float_t const& __cordl_internal_get__spinnerShownAtTimeSec() const;

  constexpr float_t& __cordl_internal_get__spinnerShownAtTimeSec();

  constexpr void __cordl_internal_set__loadingIndicatorDelaySec(float_t value);

  constexpr void __cordl_internal_set__loadingIndicatorPass(::GlobalNamespace::MainEffectLoadingIndicatorPass* value);

  constexpr void __cordl_internal_set__loadingIndicatorShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set__loadingIndicatorTexture(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set__postRenderPass(::GlobalNamespace::MainEffectPostRenderPass* value);

  constexpr void __cordl_internal_set__preRenderPass(::GlobalNamespace::MainEffectPreRenderPass* value);

  constexpr void __cordl_internal_set__spinnerShownAtTimeSec(float_t value);

  /// @brief Method .ctor, addr 0x5f439ac, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainEffectRendererFeature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainEffectRendererFeature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainEffectRendererFeature(MainEffectRendererFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainEffectRendererFeature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainEffectRendererFeature(MainEffectRendererFeature const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20636 };

  /// @brief Field kFadedOutThreshold offset 0xffffffff size 0x4
  static constexpr float_t kFadedOutThreshold{ static_cast<float_t>(0.0001f) };

  /// @brief Field kMainEffectBloomTextureName offset 0xffffffff size 0x8
  static constexpr ::ConstString kMainEffectBloomTextureName{ u"_MainEffectBloomTexture" };

  /// @brief Field _loadingIndicatorShader, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ____loadingIndicatorShader;

  /// @brief Field _loadingIndicatorTexture, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ____loadingIndicatorTexture;

  /// @brief Field _loadingIndicatorDelaySec, offset: 0x30, size: 0x4, def value: None
  float_t ____loadingIndicatorDelaySec;

  /// @brief Field _preRenderPass, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::MainEffectPreRenderPass* ____preRenderPass;

  /// @brief Field _postRenderPass, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::MainEffectPostRenderPass* ____postRenderPass;

  /// @brief Field _loadingIndicatorPass, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::MainEffectLoadingIndicatorPass* ____loadingIndicatorPass;

  /// @brief Field _spinnerShownAtTimeSec, offset: 0x50, size: 0x4, def value: None
  float_t ____spinnerShownAtTimeSec;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MainEffectRendererFeature, ____loadingIndicatorShader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainEffectRendererFeature, ____loadingIndicatorTexture) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainEffectRendererFeature, ____loadingIndicatorDelaySec) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainEffectRendererFeature, ____preRenderPass) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainEffectRendererFeature, ____postRenderPass) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainEffectRendererFeature, ____loadingIndicatorPass) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainEffectRendererFeature, ____spinnerShownAtTimeSec) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MainEffectRendererFeature) == 0x58, "Size mismatch!");

} // namespace GlobalNamespace
