#pragma once
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
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class RenderTexture;
}
namespace GlobalNamespace {
class PyramidBloomRendererSO;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class PyramidBloomMainEffectSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PyramidBloomMainEffectSO);
// Type: ::PyramidBloomMainEffectSO
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15293)), TypeDefinitionIndex(TypeDefinitionIndex(14446))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15295))
// CS Name: ::PyramidBloomMainEffectSO*
class CORDL_TYPE PyramidBloomMainEffectSO : public ::GlobalNamespace::MainEffectSO {
public:
  // Declarations
  /// @brief Field _bloomRenderer, offset 0x18, size 0x8
  __declspec(property(get = __get__bloomRenderer, put = __set__bloomRenderer))::GlobalNamespace::PyramidBloomRendererSO* _bloomRenderer;

  /// @brief Field _bloomFog, offset 0x20, size 0x8
  __declspec(property(get = __get__bloomFog, put = __set__bloomFog))::GlobalNamespace::BloomFogSO* _bloomFog;

  /// @brief Field _fadeShader, offset 0x28, size 0x8
  __declspec(property(get = __get__fadeShader, put = __set__fadeShader))::UnityEngine::Shader* _fadeShader;

  /// @brief Field _mainEffectShader, offset 0x30, size 0x8
  __declspec(property(get = __get__mainEffectShader, put = __set__mainEffectShader))::UnityEngine::Shader* _mainEffectShader;

  /// @brief Field _bloomBlendFactor, offset 0x38, size 0x4
  __declspec(property(get = __get__bloomBlendFactor, put = __set__bloomBlendFactor)) float_t _bloomBlendFactor;

  /// @brief Field _bloomRadius, offset 0x3c, size 0x4
  __declspec(property(get = __get__bloomRadius, put = __set__bloomRadius)) float_t _bloomRadius;

  /// @brief Field _bloomIntensity, offset 0x40, size 0x4
  __declspec(property(get = __get__bloomIntensity, put = __set__bloomIntensity)) float_t _bloomIntensity;

  /// @brief Field _downBloomIntensityOffset, offset 0x44, size 0x4
  __declspec(property(get = __get__downBloomIntensityOffset, put = __set__downBloomIntensityOffset)) float_t _downBloomIntensityOffset;

  /// @brief Field _pyramidWeightsParam, offset 0x48, size 0x4
  __declspec(property(get = __get__pyramidWeightsParam, put = __set__pyramidWeightsParam)) float_t _pyramidWeightsParam;

  /// @brief Field _alphaWeights, offset 0x4c, size 0x4
  __declspec(property(get = __get__alphaWeights, put = __set__alphaWeights)) float_t _alphaWeights;

  /// @brief Field _preFilterPass, offset 0x50, size 0x4
  __declspec(property(get = __get__preFilterPass, put = __set__preFilterPass))::GlobalNamespace::__PyramidBloomRendererSO__Pass _preFilterPass;

  /// @brief Field _downsamplePass, offset 0x54, size 0x4
  __declspec(property(get = __get__downsamplePass, put = __set__downsamplePass))::GlobalNamespace::__PyramidBloomRendererSO__Pass _downsamplePass;

  /// @brief Field _upsamplePass, offset 0x58, size 0x4
  __declspec(property(get = __get__upsamplePass, put = __set__upsamplePass))::GlobalNamespace::__PyramidBloomRendererSO__Pass _upsamplePass;

  /// @brief Field _finalUpsamplePass, offset 0x5c, size 0x4
  __declspec(property(get = __get__finalUpsamplePass, put = __set__finalUpsamplePass))::GlobalNamespace::__PyramidBloomRendererSO__Pass _finalUpsamplePass;

  /// @brief Field _bloomTextureWidth, offset 0x60, size 0x4
  __declspec(property(get = __get__bloomTextureWidth, put = __set__bloomTextureWidth)) int32_t _bloomTextureWidth;

  /// @brief Field _baseColorBoost, offset 0x64, size 0x4
  __declspec(property(get = __get__baseColorBoost, put = __set__baseColorBoost)) float_t _baseColorBoost;

  /// @brief Field _baseColorBoostThreshold, offset 0x68, size 0x4
  __declspec(property(get = __get__baseColorBoostThreshold, put = __set__baseColorBoostThreshold)) float_t _baseColorBoostThreshold;

  /// @brief Field _fadeMaterial, offset 0x70, size 0x8
  __declspec(property(get = __get__fadeMaterial, put = __set__fadeMaterial))::UnityEngine::Material* _fadeMaterial;

  /// @brief Field _mainEffectMaterial, offset 0x78, size 0x8
  __declspec(property(get = __get__mainEffectMaterial, put = __set__mainEffectMaterial))::UnityEngine::Material* _mainEffectMaterial;

  /// @brief Field _bloomTexID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__bloomTexID, put = setStaticF__bloomTexID)) int32_t _bloomTexID;

  /// @brief Field _bloomIntensityID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__bloomIntensityID, put = setStaticF__bloomIntensityID)) int32_t _bloomIntensityID;

  /// @brief Field _fadeID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__fadeID, put = setStaticF__fadeID)) int32_t _fadeID;

  __declspec(property(get = get_hasPostProcessEffect)) bool hasPostProcessEffect;

  constexpr ::GlobalNamespace::PyramidBloomRendererSO*& __get__bloomRenderer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PyramidBloomRendererSO*> const& __get__bloomRenderer() const;

  constexpr void __set__bloomRenderer(::GlobalNamespace::PyramidBloomRendererSO* value);

  constexpr ::GlobalNamespace::BloomFogSO*& __get__bloomFog();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomFogSO*> const& __get__bloomFog() const;

  constexpr void __set__bloomFog(::GlobalNamespace::BloomFogSO* value);

  constexpr ::UnityEngine::Shader*& __get__fadeShader();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> const& __get__fadeShader() const;

  constexpr void __set__fadeShader(::UnityEngine::Shader* value);

  constexpr ::UnityEngine::Shader*& __get__mainEffectShader();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> const& __get__mainEffectShader() const;

  constexpr void __set__mainEffectShader(::UnityEngine::Shader* value);

  constexpr float_t& __get__bloomBlendFactor();

  constexpr float_t const& __get__bloomBlendFactor() const;

  constexpr void __set__bloomBlendFactor(float_t value);

  constexpr float_t& __get__bloomRadius();

  constexpr float_t const& __get__bloomRadius() const;

  constexpr void __set__bloomRadius(float_t value);

  constexpr float_t& __get__bloomIntensity();

  constexpr float_t const& __get__bloomIntensity() const;

  constexpr void __set__bloomIntensity(float_t value);

  constexpr float_t& __get__downBloomIntensityOffset();

  constexpr float_t const& __get__downBloomIntensityOffset() const;

  constexpr void __set__downBloomIntensityOffset(float_t value);

  constexpr float_t& __get__pyramidWeightsParam();

  constexpr float_t const& __get__pyramidWeightsParam() const;

  constexpr void __set__pyramidWeightsParam(float_t value);

  constexpr float_t& __get__alphaWeights();

  constexpr float_t const& __get__alphaWeights() const;

  constexpr void __set__alphaWeights(float_t value);

  constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass& __get__preFilterPass();

  constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass const& __get__preFilterPass() const;

  constexpr void __set__preFilterPass(::GlobalNamespace::__PyramidBloomRendererSO__Pass value);

  constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass& __get__downsamplePass();

  constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass const& __get__downsamplePass() const;

  constexpr void __set__downsamplePass(::GlobalNamespace::__PyramidBloomRendererSO__Pass value);

  constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass& __get__upsamplePass();

  constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass const& __get__upsamplePass() const;

  constexpr void __set__upsamplePass(::GlobalNamespace::__PyramidBloomRendererSO__Pass value);

  constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass& __get__finalUpsamplePass();

  constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass const& __get__finalUpsamplePass() const;

  constexpr void __set__finalUpsamplePass(::GlobalNamespace::__PyramidBloomRendererSO__Pass value);

  constexpr int32_t& __get__bloomTextureWidth();

  constexpr int32_t const& __get__bloomTextureWidth() const;

  constexpr void __set__bloomTextureWidth(int32_t value);

  constexpr float_t& __get__baseColorBoost();

  constexpr float_t const& __get__baseColorBoost() const;

  constexpr void __set__baseColorBoost(float_t value);

  constexpr float_t& __get__baseColorBoostThreshold();

  constexpr float_t const& __get__baseColorBoostThreshold() const;

  constexpr void __set__baseColorBoostThreshold(float_t value);

  constexpr ::UnityEngine::Material*& __get__fadeMaterial();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__fadeMaterial() const;

  constexpr void __set__fadeMaterial(::UnityEngine::Material* value);

  constexpr ::UnityEngine::Material*& __get__mainEffectMaterial();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__mainEffectMaterial() const;

  constexpr void __set__mainEffectMaterial(::UnityEngine::Material* value);

  static inline void setStaticF__bloomTexID(int32_t value);

  static inline int32_t getStaticF__bloomTexID();

  static inline void setStaticF__bloomIntensityID(int32_t value);

  static inline int32_t getStaticF__bloomIntensityID();

  static inline void setStaticF__fadeID(int32_t value);

  static inline int32_t getStaticF__fadeID();

  /// @brief Method get_hasPostProcessEffect addr 0x2808be4 size 0x8 virtual true final false
  inline bool get_hasPostProcessEffect();

  /// @brief Method OnEnable addr 0x2808bec size 0x1c virtual true final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x2808d2c size 0x30 virtual false final false
  inline void OnDisable();

  /// @brief Method LazyInitializeMaterials addr 0x2808c08 size 0x124 virtual false final false
  inline void LazyInitializeMaterials();

  /// @brief Method PreRender addr 0x2808d5c size 0x64 virtual true final false
  inline void PreRender();

  /// @brief Method Render addr 0x2808dc0 size 0x27c virtual true final false
  inline void Render(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest, float_t fade);

  static inline ::GlobalNamespace::PyramidBloomMainEffectSO* New_ctor();

  /// @brief Method .ctor addr 0x280903c size 0x3c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PyramidBloomMainEffectSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PyramidBloomMainEffectSO(PyramidBloomMainEffectSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PyramidBloomMainEffectSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PyramidBloomMainEffectSO(PyramidBloomMainEffectSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PyramidBloomMainEffectSO();

public:
  /// @brief Field _bloomRenderer, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::PyramidBloomRendererSO* ____bloomRenderer;

  /// @brief Field _bloomFog, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BloomFogSO* ____bloomFog;

  /// @brief Field _fadeShader, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Shader* ____fadeShader;

  /// @brief Field _mainEffectShader, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Shader* ____mainEffectShader;

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
  ::GlobalNamespace::__PyramidBloomRendererSO__Pass ____preFilterPass;

  /// @brief Field _downsamplePass, offset: 0x54, size: 0x4, def value: None
  ::GlobalNamespace::__PyramidBloomRendererSO__Pass ____downsamplePass;

  /// @brief Field _upsamplePass, offset: 0x58, size: 0x4, def value: None
  ::GlobalNamespace::__PyramidBloomRendererSO__Pass ____upsamplePass;

  /// @brief Field _finalUpsamplePass, offset: 0x5c, size: 0x4, def value: None
  ::GlobalNamespace::__PyramidBloomRendererSO__Pass ____finalUpsamplePass;

  /// @brief Field _bloomTextureWidth, offset: 0x60, size: 0x4, def value: None
  int32_t ____bloomTextureWidth;

  /// @brief Field _baseColorBoost, offset: 0x64, size: 0x4, def value: None
  float_t ____baseColorBoost;

  /// @brief Field _baseColorBoostThreshold, offset: 0x68, size: 0x4, def value: None
  float_t ____baseColorBoostThreshold;

  /// @brief Field _fadeMaterial, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Material* ____fadeMaterial;

  /// @brief Field _mainEffectMaterial, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Material* ____mainEffectMaterial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PyramidBloomMainEffectSO, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PyramidBloomMainEffectSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PyramidBloomMainEffectSO*, "", "PyramidBloomMainEffectSO");
