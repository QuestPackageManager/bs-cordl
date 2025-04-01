#pragma once
// IWYU pragma private; include "GlobalNamespace/PyramidBloomMainEffectSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MainEffectSO_def.hpp"
#include "GlobalNamespace/zzzz__PyramidBloomRendererSO_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PyramidBloomMainEffectSO)
namespace GlobalNamespace {
class BloomFogSO;
}
namespace GlobalNamespace {
class PyramidBloomRendererSO;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace GlobalNamespace {
class PyramidBloomMainEffectSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PyramidBloomMainEffectSO);
// Dependencies MainEffectSO, PyramidBloomRendererSO::Pass
namespace GlobalNamespace {
// Is value type: false
// CS Name: PyramidBloomMainEffectSO
class CORDL_TYPE PyramidBloomMainEffectSO : public ::GlobalNamespace::MainEffectSO {
public:
  // Declarations
  /// @brief Field _alphaWeights, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__alphaWeights, put = __cordl_internal_set__alphaWeights)) float_t _alphaWeights;

  /// @brief Field _baseColorBoost, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get__baseColorBoost, put = __cordl_internal_set__baseColorBoost)) float_t _baseColorBoost;

  /// @brief Field _baseColorBoostThreshold, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__baseColorBoostThreshold, put = __cordl_internal_set__baseColorBoostThreshold)) float_t _baseColorBoostThreshold;

  /// @brief Field _bloomBlendFactor, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__bloomBlendFactor, put = __cordl_internal_set__bloomBlendFactor)) float_t _bloomBlendFactor;

  /// @brief Field _bloomFog, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomFog, put = __cordl_internal_set__bloomFog)) ::UnityW<::GlobalNamespace::BloomFogSO> _bloomFog;

  /// @brief Field _bloomIntensity, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__bloomIntensity, put = __cordl_internal_set__bloomIntensity)) float_t _bloomIntensity;

  /// @brief Field _bloomIntensityID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__bloomIntensityID, put = setStaticF__bloomIntensityID)) int32_t _bloomIntensityID;

  /// @brief Field _bloomRadius, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__bloomRadius, put = __cordl_internal_set__bloomRadius)) float_t _bloomRadius;

  /// @brief Field _bloomRenderer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomRenderer, put = __cordl_internal_set__bloomRenderer)) ::UnityW<::GlobalNamespace::PyramidBloomRendererSO> _bloomRenderer;

  /// @brief Field _bloomTexID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__bloomTexID, put = setStaticF__bloomTexID)) int32_t _bloomTexID;

  /// @brief Field _bloomTextureWidth, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__bloomTextureWidth, put = __cordl_internal_set__bloomTextureWidth)) int32_t _bloomTextureWidth;

  /// @brief Field _downBloomIntensityOffset, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__downBloomIntensityOffset, put = __cordl_internal_set__downBloomIntensityOffset)) float_t _downBloomIntensityOffset;

  /// @brief Field _downsamplePass, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__downsamplePass, put = __cordl_internal_set__downsamplePass)) ::GlobalNamespace::PyramidBloomRendererSO_Pass _downsamplePass;

  /// @brief Field _fadeID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__fadeID, put = setStaticF__fadeID)) int32_t _fadeID;

  /// @brief Field _fadeMaterial, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeMaterial, put = __cordl_internal_set__fadeMaterial)) ::UnityW<::UnityEngine::Material> _fadeMaterial;

  /// @brief Field _fadeShader, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeShader, put = __cordl_internal_set__fadeShader)) ::UnityW<::UnityEngine::Shader> _fadeShader;

  /// @brief Field _finalUpsamplePass, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__finalUpsamplePass, put = __cordl_internal_set__finalUpsamplePass)) ::GlobalNamespace::PyramidBloomRendererSO_Pass _finalUpsamplePass;

  /// @brief Field _mainEffectMaterial, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__mainEffectMaterial, put = __cordl_internal_set__mainEffectMaterial)) ::UnityW<::UnityEngine::Material> _mainEffectMaterial;

  /// @brief Field _mainEffectShader, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__mainEffectShader, put = __cordl_internal_set__mainEffectShader)) ::UnityW<::UnityEngine::Shader> _mainEffectShader;

  /// @brief Field _preFilterPass, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__preFilterPass, put = __cordl_internal_set__preFilterPass)) ::GlobalNamespace::PyramidBloomRendererSO_Pass _preFilterPass;

  /// @brief Field _pyramidWeightsParam, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__pyramidWeightsParam, put = __cordl_internal_set__pyramidWeightsParam)) float_t _pyramidWeightsParam;

  /// @brief Field _upsamplePass, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__upsamplePass, put = __cordl_internal_set__upsamplePass)) ::GlobalNamespace::PyramidBloomRendererSO_Pass _upsamplePass;

  __declspec(property(get = get_hasPostProcessEffect)) bool hasPostProcessEffect;

  /// @brief Method LazyInitializeMaterials, addr 0x407e78c, size 0x124, virtual false, abstract: false, final false
  inline void LazyInitializeMaterials();

  static inline ::GlobalNamespace::PyramidBloomMainEffectSO* New_ctor();

  /// @brief Method OnDisable, addr 0x407e8b0, size 0x30, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x407e770, size 0x1c, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method PreRender, addr 0x407e8e0, size 0x64, virtual true, abstract: false, final false
  inline void PreRender();

  /// @brief Method Render, addr 0x407e944, size 0x27c, virtual true, abstract: false, final false
  inline void Render(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest, float_t fade);

  constexpr float_t const& __cordl_internal_get__alphaWeights() const;

  constexpr float_t& __cordl_internal_get__alphaWeights();

  constexpr float_t const& __cordl_internal_get__baseColorBoost() const;

  constexpr float_t& __cordl_internal_get__baseColorBoost();

  constexpr float_t const& __cordl_internal_get__baseColorBoostThreshold() const;

  constexpr float_t& __cordl_internal_get__baseColorBoostThreshold();

  constexpr float_t const& __cordl_internal_get__bloomBlendFactor() const;

  constexpr float_t& __cordl_internal_get__bloomBlendFactor();

  constexpr ::UnityW<::GlobalNamespace::BloomFogSO> const& __cordl_internal_get__bloomFog() const;

  constexpr ::UnityW<::GlobalNamespace::BloomFogSO>& __cordl_internal_get__bloomFog();

  constexpr float_t const& __cordl_internal_get__bloomIntensity() const;

  constexpr float_t& __cordl_internal_get__bloomIntensity();

  constexpr float_t const& __cordl_internal_get__bloomRadius() const;

  constexpr float_t& __cordl_internal_get__bloomRadius();

  constexpr ::UnityW<::GlobalNamespace::PyramidBloomRendererSO> const& __cordl_internal_get__bloomRenderer() const;

  constexpr ::UnityW<::GlobalNamespace::PyramidBloomRendererSO>& __cordl_internal_get__bloomRenderer();

  constexpr int32_t const& __cordl_internal_get__bloomTextureWidth() const;

  constexpr int32_t& __cordl_internal_get__bloomTextureWidth();

  constexpr float_t const& __cordl_internal_get__downBloomIntensityOffset() const;

  constexpr float_t& __cordl_internal_get__downBloomIntensityOffset();

  constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass const& __cordl_internal_get__downsamplePass() const;

  constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass& __cordl_internal_get__downsamplePass();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__fadeMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__fadeMaterial();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__fadeShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__fadeShader();

  constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass const& __cordl_internal_get__finalUpsamplePass() const;

  constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass& __cordl_internal_get__finalUpsamplePass();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__mainEffectMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__mainEffectMaterial();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__mainEffectShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__mainEffectShader();

  constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass const& __cordl_internal_get__preFilterPass() const;

  constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass& __cordl_internal_get__preFilterPass();

  constexpr float_t const& __cordl_internal_get__pyramidWeightsParam() const;

  constexpr float_t& __cordl_internal_get__pyramidWeightsParam();

  constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass const& __cordl_internal_get__upsamplePass() const;

  constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass& __cordl_internal_get__upsamplePass();

  constexpr void __cordl_internal_set__alphaWeights(float_t value);

  constexpr void __cordl_internal_set__baseColorBoost(float_t value);

  constexpr void __cordl_internal_set__baseColorBoostThreshold(float_t value);

  constexpr void __cordl_internal_set__bloomBlendFactor(float_t value);

  constexpr void __cordl_internal_set__bloomFog(::UnityW<::GlobalNamespace::BloomFogSO> value);

  constexpr void __cordl_internal_set__bloomIntensity(float_t value);

  constexpr void __cordl_internal_set__bloomRadius(float_t value);

  constexpr void __cordl_internal_set__bloomRenderer(::UnityW<::GlobalNamespace::PyramidBloomRendererSO> value);

  constexpr void __cordl_internal_set__bloomTextureWidth(int32_t value);

  constexpr void __cordl_internal_set__downBloomIntensityOffset(float_t value);

  constexpr void __cordl_internal_set__downsamplePass(::GlobalNamespace::PyramidBloomRendererSO_Pass value);

  constexpr void __cordl_internal_set__fadeMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__fadeShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set__finalUpsamplePass(::GlobalNamespace::PyramidBloomRendererSO_Pass value);

  constexpr void __cordl_internal_set__mainEffectMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__mainEffectShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set__preFilterPass(::GlobalNamespace::PyramidBloomRendererSO_Pass value);

  constexpr void __cordl_internal_set__pyramidWeightsParam(float_t value);

  constexpr void __cordl_internal_set__upsamplePass(::GlobalNamespace::PyramidBloomRendererSO_Pass value);

  /// @brief Method .ctor, addr 0x407ebc0, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__bloomIntensityID();

  static inline int32_t getStaticF__bloomTexID();

  static inline int32_t getStaticF__fadeID();

  /// @brief Method get_hasPostProcessEffect, addr 0x407e768, size 0x8, virtual true, abstract: false, final false
  inline bool get_hasPostProcessEffect();

  static inline void setStaticF__bloomIntensityID(int32_t value);

  static inline void setStaticF__bloomTexID(int32_t value);

  static inline void setStaticF__fadeID(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PyramidBloomMainEffectSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PyramidBloomMainEffectSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PyramidBloomMainEffectSO(PyramidBloomMainEffectSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PyramidBloomMainEffectSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PyramidBloomMainEffectSO(PyramidBloomMainEffectSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17879 };

  /// @brief Field _bloomRenderer, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PyramidBloomRendererSO> ____bloomRenderer;

  /// @brief Field _bloomFog, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomFogSO> ____bloomFog;

  /// @brief Field _fadeShader, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ____fadeShader;

  /// @brief Field _mainEffectShader, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ____mainEffectShader;

  /// @brief Field _bloomBlendFactor, offset: 0x38, size: 0x4, def value: None
  float_t ____bloomBlendFactor;

  /// @brief Field _bloomRadius, offset: 0x3c, size: 0x4, def value: None
  float_t ____bloomRadius;

  /// @brief Field _bloomIntensity, offset: 0x40, size: 0x4, def value: None
  float_t ____bloomIntensity;

  /// @brief Field _downBloomIntensityOffset, offset: 0x44, size: 0x4, def value: None
  float_t ____downBloomIntensityOffset;

  /// @brief Field _pyramidWeightsParam, offset: 0x48, size: 0x4, def value: None
  float_t ____pyramidWeightsParam;

  /// @brief Field _alphaWeights, offset: 0x4c, size: 0x4, def value: None
  float_t ____alphaWeights;

  /// @brief Field _preFilterPass, offset: 0x50, size: 0x4, def value: None
  ::GlobalNamespace::PyramidBloomRendererSO_Pass ____preFilterPass;

  /// @brief Field _downsamplePass, offset: 0x54, size: 0x4, def value: None
  ::GlobalNamespace::PyramidBloomRendererSO_Pass ____downsamplePass;

  /// @brief Field _upsamplePass, offset: 0x58, size: 0x4, def value: None
  ::GlobalNamespace::PyramidBloomRendererSO_Pass ____upsamplePass;

  /// @brief Field _finalUpsamplePass, offset: 0x5c, size: 0x4, def value: None
  ::GlobalNamespace::PyramidBloomRendererSO_Pass ____finalUpsamplePass;

  /// @brief Field _bloomTextureWidth, offset: 0x60, size: 0x4, def value: None
  int32_t ____bloomTextureWidth;

  /// @brief Field _baseColorBoost, offset: 0x64, size: 0x4, def value: None
  float_t ____baseColorBoost;

  /// @brief Field _baseColorBoostThreshold, offset: 0x68, size: 0x4, def value: None
  float_t ____baseColorBoostThreshold;

  /// @brief Field _fadeMaterial, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____fadeMaterial;

  /// @brief Field _mainEffectMaterial, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____mainEffectMaterial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PyramidBloomMainEffectSO, ____bloomRenderer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PyramidBloomMainEffectSO, ____bloomFog) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PyramidBloomMainEffectSO, ____fadeShader) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PyramidBloomMainEffectSO, ____mainEffectShader) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PyramidBloomMainEffectSO, ____bloomBlendFactor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PyramidBloomMainEffectSO, ____bloomRadius) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PyramidBloomMainEffectSO, ____bloomIntensity) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PyramidBloomMainEffectSO, ____downBloomIntensityOffset) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PyramidBloomMainEffectSO, ____pyramidWeightsParam) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PyramidBloomMainEffectSO, ____alphaWeights) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PyramidBloomMainEffectSO, ____preFilterPass) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PyramidBloomMainEffectSO, ____downsamplePass) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PyramidBloomMainEffectSO, ____upsamplePass) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PyramidBloomMainEffectSO, ____finalUpsamplePass) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PyramidBloomMainEffectSO, ____bloomTextureWidth) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PyramidBloomMainEffectSO, ____baseColorBoost) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PyramidBloomMainEffectSO, ____baseColorBoostThreshold) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PyramidBloomMainEffectSO, ____fadeMaterial) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PyramidBloomMainEffectSO, ____mainEffectMaterial) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PyramidBloomMainEffectSO, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PyramidBloomMainEffectSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PyramidBloomMainEffectSO*, "", "PyramidBloomMainEffectSO");
