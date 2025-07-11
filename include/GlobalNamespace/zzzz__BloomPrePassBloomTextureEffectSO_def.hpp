#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassBloomTextureEffectSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BloomPrePassEffectSO_def.hpp"
#include "GlobalNamespace/zzzz__PyramidBloomRendererSO_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BloomPrePassBloomTextureEffectSO)
namespace GlobalNamespace {
class BloomFogSO;
}
namespace GlobalNamespace {
class PyramidBloomRendererSO;
}
namespace GlobalNamespace {
struct ToneMapping;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBloomTextureEffectSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBloomTextureEffectSO);
// Dependencies BloomPrePassEffectSO, PyramidBloomRendererSO::Pass
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomPrePassBloomTextureEffectSO
class CORDL_TYPE BloomPrePassBloomTextureEffectSO : public ::GlobalNamespace::BloomPrePassEffectSO {
public:
  // Declarations
  /// @brief Field _bloomFog, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomFog, put = __cordl_internal_set__bloomFog)) ::UnityW<::GlobalNamespace::BloomFogSO> _bloomFog;

  /// @brief Field _bloomRenderer, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomRenderer, put = __cordl_internal_set__bloomRenderer)) ::UnityW<::GlobalNamespace::PyramidBloomRendererSO> _bloomRenderer;

  /// @brief Field _downBloomIntensityOffset, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__downBloomIntensityOffset, put = __cordl_internal_set__downBloomIntensityOffset)) float_t _downBloomIntensityOffset;

  /// @brief Field _downsamplePass, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__downsamplePass, put = __cordl_internal_set__downsamplePass)) ::GlobalNamespace::PyramidBloomRendererSO_Pass _downsamplePass;

  /// @brief Field _finalUpsampleBrightness, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__finalUpsampleBrightness, put = __cordl_internal_set__finalUpsampleBrightness)) float_t _finalUpsampleBrightness;

  /// @brief Field _finalUpsamplePass, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__finalUpsamplePass, put = __cordl_internal_set__finalUpsamplePass)) ::GlobalNamespace::PyramidBloomRendererSO_Pass _finalUpsamplePass;

  /// @brief Field _firstUpsampleBrightness, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__firstUpsampleBrightness, put = __cordl_internal_set__firstUpsampleBrightness)) float_t _firstUpsampleBrightness;

  /// @brief Field _intensity, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__intensity, put = __cordl_internal_set__intensity)) float_t _intensity;

  /// @brief Field _prefilterPass, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__prefilterPass, put = __cordl_internal_set__prefilterPass)) ::GlobalNamespace::PyramidBloomRendererSO_Pass _prefilterPass;

  /// @brief Field _pyramidWeightsParam, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__pyramidWeightsParam, put = __cordl_internal_set__pyramidWeightsParam)) float_t _pyramidWeightsParam;

  /// @brief Field _radius, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__radius, put = __cordl_internal_set__radius)) float_t _radius;

  /// @brief Field _uniformPyramidWeights, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__uniformPyramidWeights, put = __cordl_internal_set__uniformPyramidWeights)) bool _uniformPyramidWeights;

  /// @brief Field _upsamplePass, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__upsamplePass, put = __cordl_internal_set__upsamplePass)) ::GlobalNamespace::PyramidBloomRendererSO_Pass _upsamplePass;

  __declspec(property(get = get_toneMapping)) ::GlobalNamespace::ToneMapping toneMapping;

  static inline ::GlobalNamespace::BloomPrePassBloomTextureEffectSO* New_ctor();

  /// @brief Method Render, addr 0x4086978, size 0x6c, virtual true, abstract: false, final false
  inline void Render(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest);

  constexpr ::UnityW<::GlobalNamespace::BloomFogSO> const& __cordl_internal_get__bloomFog() const;

  constexpr ::UnityW<::GlobalNamespace::BloomFogSO>& __cordl_internal_get__bloomFog();

  constexpr ::UnityW<::GlobalNamespace::PyramidBloomRendererSO> const& __cordl_internal_get__bloomRenderer() const;

  constexpr ::UnityW<::GlobalNamespace::PyramidBloomRendererSO>& __cordl_internal_get__bloomRenderer();

  constexpr float_t const& __cordl_internal_get__downBloomIntensityOffset() const;

  constexpr float_t& __cordl_internal_get__downBloomIntensityOffset();

  constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass const& __cordl_internal_get__downsamplePass() const;

  constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass& __cordl_internal_get__downsamplePass();

  constexpr float_t const& __cordl_internal_get__finalUpsampleBrightness() const;

  constexpr float_t& __cordl_internal_get__finalUpsampleBrightness();

  constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass const& __cordl_internal_get__finalUpsamplePass() const;

  constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass& __cordl_internal_get__finalUpsamplePass();

  constexpr float_t const& __cordl_internal_get__firstUpsampleBrightness() const;

  constexpr float_t& __cordl_internal_get__firstUpsampleBrightness();

  constexpr float_t const& __cordl_internal_get__intensity() const;

  constexpr float_t& __cordl_internal_get__intensity();

  constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass const& __cordl_internal_get__prefilterPass() const;

  constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass& __cordl_internal_get__prefilterPass();

  constexpr float_t const& __cordl_internal_get__pyramidWeightsParam() const;

  constexpr float_t& __cordl_internal_get__pyramidWeightsParam();

  constexpr float_t const& __cordl_internal_get__radius() const;

  constexpr float_t& __cordl_internal_get__radius();

  constexpr bool const& __cordl_internal_get__uniformPyramidWeights() const;

  constexpr bool& __cordl_internal_get__uniformPyramidWeights();

  constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass const& __cordl_internal_get__upsamplePass() const;

  constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass& __cordl_internal_get__upsamplePass();

  constexpr void __cordl_internal_set__bloomFog(::UnityW<::GlobalNamespace::BloomFogSO> value);

  constexpr void __cordl_internal_set__bloomRenderer(::UnityW<::GlobalNamespace::PyramidBloomRendererSO> value);

  constexpr void __cordl_internal_set__downBloomIntensityOffset(float_t value);

  constexpr void __cordl_internal_set__downsamplePass(::GlobalNamespace::PyramidBloomRendererSO_Pass value);

  constexpr void __cordl_internal_set__finalUpsampleBrightness(float_t value);

  constexpr void __cordl_internal_set__finalUpsamplePass(::GlobalNamespace::PyramidBloomRendererSO_Pass value);

  constexpr void __cordl_internal_set__firstUpsampleBrightness(float_t value);

  constexpr void __cordl_internal_set__intensity(float_t value);

  constexpr void __cordl_internal_set__prefilterPass(::GlobalNamespace::PyramidBloomRendererSO_Pass value);

  constexpr void __cordl_internal_set__pyramidWeightsParam(float_t value);

  constexpr void __cordl_internal_set__radius(float_t value);

  constexpr void __cordl_internal_set__uniformPyramidWeights(bool value);

  constexpr void __cordl_internal_set__upsamplePass(::GlobalNamespace::PyramidBloomRendererSO_Pass value);

  /// @brief Method .ctor, addr 0x40869e4, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_toneMapping, addr 0x4086958, size 0x20, virtual true, abstract: false, final false
  inline ::GlobalNamespace::ToneMapping get_toneMapping();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassBloomTextureEffectSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBloomTextureEffectSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassBloomTextureEffectSO(BloomPrePassBloomTextureEffectSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBloomTextureEffectSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassBloomTextureEffectSO(BloomPrePassBloomTextureEffectSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17899 };

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
  ::GlobalNamespace::PyramidBloomRendererSO_Pass ____prefilterPass;

  /// @brief Field _downsamplePass, offset: 0x4c, size: 0x4, def value: None
  ::GlobalNamespace::PyramidBloomRendererSO_Pass ____downsamplePass;

  /// @brief Field _upsamplePass, offset: 0x50, size: 0x4, def value: None
  ::GlobalNamespace::PyramidBloomRendererSO_Pass ____upsamplePass;

  /// @brief Field _finalUpsamplePass, offset: 0x54, size: 0x4, def value: None
  ::GlobalNamespace::PyramidBloomRendererSO_Pass ____finalUpsamplePass;

  /// @brief Field _bloomRenderer, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PyramidBloomRendererSO> ____bloomRenderer;

  /// @brief Field _bloomFog, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomFogSO> ____bloomFog;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassBloomTextureEffectSO, ____radius) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBloomTextureEffectSO, ____intensity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBloomTextureEffectSO, ____downBloomIntensityOffset) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBloomTextureEffectSO, ____uniformPyramidWeights) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBloomTextureEffectSO, ____pyramidWeightsParam) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBloomTextureEffectSO, ____firstUpsampleBrightness) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBloomTextureEffectSO, ____finalUpsampleBrightness) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBloomTextureEffectSO, ____prefilterPass) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBloomTextureEffectSO, ____downsamplePass) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBloomTextureEffectSO, ____upsamplePass) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBloomTextureEffectSO, ____finalUpsamplePass) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBloomTextureEffectSO, ____bloomRenderer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBloomTextureEffectSO, ____bloomFog) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBloomTextureEffectSO, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBloomTextureEffectSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBloomTextureEffectSO*, "", "BloomPrePassBloomTextureEffectSO");
