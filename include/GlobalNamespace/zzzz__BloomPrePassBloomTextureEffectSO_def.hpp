#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BloomPrePassEffectSO_def.hpp"
#include "GlobalNamespace/zzzz__PyramidBloomRendererSO_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BloomPrePassBloomTextureEffectSO)
namespace UnityEngine {
class RenderTexture;
}
namespace GlobalNamespace {
class BloomFogSO;
}
namespace GlobalNamespace {
class PyramidBloomRendererSO;
}
namespace GlobalNamespace {
struct ToneMapping;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBloomTextureEffectSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBloomTextureEffectSO);
// Type: ::BloomPrePassBloomTextureEffectSO
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14446)), TypeDefinitionIndex(TypeDefinitionIndex(14470))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15312))
// CS Name: ::BloomPrePassBloomTextureEffectSO*
class CORDL_TYPE BloomPrePassBloomTextureEffectSO : public ::GlobalNamespace::BloomPrePassEffectSO {
public:
  // Declarations
  /// @brief Field _radius, offset 0x2c, size 0x4
  __declspec(property(get = __get__radius, put = __set__radius)) float_t _radius;

  /// @brief Field _intensity, offset 0x30, size 0x4
  __declspec(property(get = __get__intensity, put = __set__intensity)) float_t _intensity;

  /// @brief Field _downBloomIntensityOffset, offset 0x34, size 0x4
  __declspec(property(get = __get__downBloomIntensityOffset, put = __set__downBloomIntensityOffset)) float_t _downBloomIntensityOffset;

  /// @brief Field _uniformPyramidWeights, offset 0x38, size 0x1
  __declspec(property(get = __get__uniformPyramidWeights, put = __set__uniformPyramidWeights)) bool _uniformPyramidWeights;

  /// @brief Field _pyramidWeightsParam, offset 0x3c, size 0x4
  __declspec(property(get = __get__pyramidWeightsParam, put = __set__pyramidWeightsParam)) float_t _pyramidWeightsParam;

  /// @brief Field _firstUpsampleBrightness, offset 0x40, size 0x4
  __declspec(property(get = __get__firstUpsampleBrightness, put = __set__firstUpsampleBrightness)) float_t _firstUpsampleBrightness;

  /// @brief Field _finalUpsampleBrightness, offset 0x44, size 0x4
  __declspec(property(get = __get__finalUpsampleBrightness, put = __set__finalUpsampleBrightness)) float_t _finalUpsampleBrightness;

  /// @brief Field _prefilterPass, offset 0x48, size 0x4
  __declspec(property(get = __get__prefilterPass, put = __set__prefilterPass))::GlobalNamespace::__PyramidBloomRendererSO__Pass _prefilterPass;

  /// @brief Field _downsamplePass, offset 0x4c, size 0x4
  __declspec(property(get = __get__downsamplePass, put = __set__downsamplePass))::GlobalNamespace::__PyramidBloomRendererSO__Pass _downsamplePass;

  /// @brief Field _upsamplePass, offset 0x50, size 0x4
  __declspec(property(get = __get__upsamplePass, put = __set__upsamplePass))::GlobalNamespace::__PyramidBloomRendererSO__Pass _upsamplePass;

  /// @brief Field _finalUpsamplePass, offset 0x54, size 0x4
  __declspec(property(get = __get__finalUpsamplePass, put = __set__finalUpsamplePass))::GlobalNamespace::__PyramidBloomRendererSO__Pass _finalUpsamplePass;

  /// @brief Field _bloomRenderer, offset 0x58, size 0x8
  __declspec(property(get = __get__bloomRenderer, put = __set__bloomRenderer))::GlobalNamespace::PyramidBloomRendererSO* _bloomRenderer;

  /// @brief Field _bloomFog, offset 0x60, size 0x8
  __declspec(property(get = __get__bloomFog, put = __set__bloomFog))::GlobalNamespace::BloomFogSO* _bloomFog;

  __declspec(property(get = get_toneMapping))::GlobalNamespace::ToneMapping toneMapping;

  constexpr float_t& __get__radius();

  constexpr float_t const& __get__radius() const;

  constexpr void __set__radius(float_t value);

  constexpr float_t& __get__intensity();

  constexpr float_t const& __get__intensity() const;

  constexpr void __set__intensity(float_t value);

  constexpr float_t& __get__downBloomIntensityOffset();

  constexpr float_t const& __get__downBloomIntensityOffset() const;

  constexpr void __set__downBloomIntensityOffset(float_t value);

  constexpr bool& __get__uniformPyramidWeights();

  constexpr bool const& __get__uniformPyramidWeights() const;

  constexpr void __set__uniformPyramidWeights(bool value);

  constexpr float_t& __get__pyramidWeightsParam();

  constexpr float_t const& __get__pyramidWeightsParam() const;

  constexpr void __set__pyramidWeightsParam(float_t value);

  constexpr float_t& __get__firstUpsampleBrightness();

  constexpr float_t const& __get__firstUpsampleBrightness() const;

  constexpr void __set__firstUpsampleBrightness(float_t value);

  constexpr float_t& __get__finalUpsampleBrightness();

  constexpr float_t const& __get__finalUpsampleBrightness() const;

  constexpr void __set__finalUpsampleBrightness(float_t value);

  constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass& __get__prefilterPass();

  constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass const& __get__prefilterPass() const;

  constexpr void __set__prefilterPass(::GlobalNamespace::__PyramidBloomRendererSO__Pass value);

  constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass& __get__downsamplePass();

  constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass const& __get__downsamplePass() const;

  constexpr void __set__downsamplePass(::GlobalNamespace::__PyramidBloomRendererSO__Pass value);

  constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass& __get__upsamplePass();

  constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass const& __get__upsamplePass() const;

  constexpr void __set__upsamplePass(::GlobalNamespace::__PyramidBloomRendererSO__Pass value);

  constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass& __get__finalUpsamplePass();

  constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass const& __get__finalUpsamplePass() const;

  constexpr void __set__finalUpsamplePass(::GlobalNamespace::__PyramidBloomRendererSO__Pass value);

  constexpr ::GlobalNamespace::PyramidBloomRendererSO*& __get__bloomRenderer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PyramidBloomRendererSO*> const& __get__bloomRenderer() const;

  constexpr void __set__bloomRenderer(::GlobalNamespace::PyramidBloomRendererSO* value);

  constexpr ::GlobalNamespace::BloomFogSO*& __get__bloomFog();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomFogSO*> const& __get__bloomFog() const;

  constexpr void __set__bloomFog(::GlobalNamespace::BloomFogSO* value);

  /// @brief Method get_toneMapping addr 0x280c20c size 0x20 virtual true final false
  inline ::GlobalNamespace::ToneMapping get_toneMapping();

  /// @brief Method Render addr 0x280c22c size 0x6c virtual true final false
  inline void Render(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest);

  static inline ::GlobalNamespace::BloomPrePassBloomTextureEffectSO* New_ctor();

  /// @brief Method .ctor addr 0x280c298 size 0x3c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBloomTextureEffectSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassBloomTextureEffectSO(BloomPrePassBloomTextureEffectSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBloomTextureEffectSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassBloomTextureEffectSO(BloomPrePassBloomTextureEffectSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassBloomTextureEffectSO();

public:
  /// @brief Field _radius, offset: 0x2c, size: 0x4, def value: None
  float_t ____radius;

  /// @brief Field _intensity, offset: 0x30, size: 0x4, def value: None
  float_t ____intensity;

  /// @brief Field _downBloomIntensityOffset, offset: 0x34, size: 0x4, def value: None
  float_t ____downBloomIntensityOffset;

  /// @brief Field _uniformPyramidWeights, offset: 0x38, size: 0x1, def value: None
  bool ____uniformPyramidWeights;

  /// @brief Field _pyramidWeightsParam, offset: 0x3c, size: 0x4, def value: None
  float_t ____pyramidWeightsParam;

  /// @brief Field _firstUpsampleBrightness, offset: 0x40, size: 0x4, def value: None
  float_t ____firstUpsampleBrightness;

  /// @brief Field _finalUpsampleBrightness, offset: 0x44, size: 0x4, def value: None
  float_t ____finalUpsampleBrightness;

  /// @brief Field _prefilterPass, offset: 0x48, size: 0x4, def value: None
  ::GlobalNamespace::__PyramidBloomRendererSO__Pass ____prefilterPass;

  /// @brief Field _downsamplePass, offset: 0x4c, size: 0x4, def value: None
  ::GlobalNamespace::__PyramidBloomRendererSO__Pass ____downsamplePass;

  /// @brief Field _upsamplePass, offset: 0x50, size: 0x4, def value: None
  ::GlobalNamespace::__PyramidBloomRendererSO__Pass ____upsamplePass;

  /// @brief Field _finalUpsamplePass, offset: 0x54, size: 0x4, def value: None
  ::GlobalNamespace::__PyramidBloomRendererSO__Pass ____finalUpsamplePass;

  /// @brief Field _bloomRenderer, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::PyramidBloomRendererSO* ____bloomRenderer;

  /// @brief Field _bloomFog, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::BloomFogSO* ____bloomFog;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBloomTextureEffectSO, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBloomTextureEffectSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBloomTextureEffectSO*, "", "BloomPrePassBloomTextureEffectSO");
