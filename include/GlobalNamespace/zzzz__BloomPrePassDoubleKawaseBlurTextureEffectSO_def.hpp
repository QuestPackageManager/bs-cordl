#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassDoubleKawaseBlurTextureEffectSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BloomPrePassEffectSO_def.hpp"
#include "GlobalNamespace/zzzz__KawaseBlurRendererSO_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BloomPrePassDoubleKawaseBlurTextureEffectSO)
namespace GlobalNamespace {
class KawaseBlurRendererSO;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassDoubleKawaseBlurTextureEffectSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO);
// Type: ::BloomPrePassDoubleKawaseBlurTextureEffectSO
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BloomPrePassDoubleKawaseBlurTextureEffectSO*
class CORDL_TYPE BloomPrePassDoubleKawaseBlurTextureEffectSO : public ::GlobalNamespace::BloomPrePassEffectSO {
public:
  // Declarations
  /// @brief Field _bloom1Boost, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__bloom1Boost, put = __cordl_internal_set__bloom1Boost)) float_t _bloom1Boost;

  /// @brief Field _bloom1KernelSize, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__bloom1KernelSize, put = __cordl_internal_set__bloom1KernelSize))::GlobalNamespace::__KawaseBlurRendererSO__KernelSize _bloom1KernelSize;

  /// @brief Field _bloom2Alpha, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__bloom2Alpha, put = __cordl_internal_set__bloom2Alpha)) float_t _bloom2Alpha;

  /// @brief Field _bloom2Boost, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__bloom2Boost, put = __cordl_internal_set__bloom2Boost)) float_t _bloom2Boost;

  /// @brief Field _bloom2KernelSize, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__bloom2KernelSize, put = __cordl_internal_set__bloom2KernelSize))::GlobalNamespace::__KawaseBlurRendererSO__KernelSize _bloom2KernelSize;

  /// @brief Field _downsample, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__downsample, put = __cordl_internal_set__downsample)) int32_t _downsample;

  /// @brief Field _gammaCorrection, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get__gammaCorrection, put = __cordl_internal_set__gammaCorrection)) bool _gammaCorrection;

  /// @brief Field _kawaseBlurRenderer, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__kawaseBlurRenderer, put = __cordl_internal_set__kawaseBlurRenderer))::UnityW<::GlobalNamespace::KawaseBlurRendererSO> _kawaseBlurRenderer;

  static inline ::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO* New_ctor();

  /// @brief Method Render, addr 0x2bd8624, size 0x38, virtual true, abstract: false, final false
  inline void Render(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest);

  constexpr float_t const& __cordl_internal_get__bloom1Boost() const;

  constexpr float_t& __cordl_internal_get__bloom1Boost();

  constexpr ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize const& __cordl_internal_get__bloom1KernelSize() const;

  constexpr ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize& __cordl_internal_get__bloom1KernelSize();

  constexpr float_t const& __cordl_internal_get__bloom2Alpha() const;

  constexpr float_t& __cordl_internal_get__bloom2Alpha();

  constexpr float_t const& __cordl_internal_get__bloom2Boost() const;

  constexpr float_t& __cordl_internal_get__bloom2Boost();

  constexpr ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize const& __cordl_internal_get__bloom2KernelSize() const;

  constexpr ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize& __cordl_internal_get__bloom2KernelSize();

  constexpr int32_t const& __cordl_internal_get__downsample() const;

  constexpr int32_t& __cordl_internal_get__downsample();

  constexpr bool const& __cordl_internal_get__gammaCorrection() const;

  constexpr bool& __cordl_internal_get__gammaCorrection();

  constexpr ::UnityW<::GlobalNamespace::KawaseBlurRendererSO> const& __cordl_internal_get__kawaseBlurRenderer() const;

  constexpr ::UnityW<::GlobalNamespace::KawaseBlurRendererSO>& __cordl_internal_get__kawaseBlurRenderer();

  constexpr void __cordl_internal_set__bloom1Boost(float_t value);

  constexpr void __cordl_internal_set__bloom1KernelSize(::GlobalNamespace::__KawaseBlurRendererSO__KernelSize value);

  constexpr void __cordl_internal_set__bloom2Alpha(float_t value);

  constexpr void __cordl_internal_set__bloom2Boost(float_t value);

  constexpr void __cordl_internal_set__bloom2KernelSize(::GlobalNamespace::__KawaseBlurRendererSO__KernelSize value);

  constexpr void __cordl_internal_set__downsample(int32_t value);

  constexpr void __cordl_internal_set__gammaCorrection(bool value);

  constexpr void __cordl_internal_set__kawaseBlurRenderer(::UnityW<::GlobalNamespace::KawaseBlurRendererSO> value);

  /// @brief Method .ctor, addr 0x2bd865c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassDoubleKawaseBlurTextureEffectSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassDoubleKawaseBlurTextureEffectSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassDoubleKawaseBlurTextureEffectSO(BloomPrePassDoubleKawaseBlurTextureEffectSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassDoubleKawaseBlurTextureEffectSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassDoubleKawaseBlurTextureEffectSO(BloomPrePassDoubleKawaseBlurTextureEffectSO const&) = delete;

  /// @brief Field _bloom1KernelSize, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize ____bloom1KernelSize;

  /// @brief Field _bloom1Boost, offset: 0x30, size: 0x4, def value: None
  float_t ____bloom1Boost;

  /// @brief Field _bloom2KernelSize, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize ____bloom2KernelSize;

  /// @brief Field _bloom2Boost, offset: 0x38, size: 0x4, def value: None
  float_t ____bloom2Boost;

  /// @brief Field _bloom2Alpha, offset: 0x3c, size: 0x4, def value: None
  float_t ____bloom2Alpha;

  /// @brief Field _downsample, offset: 0x40, size: 0x4, def value: None
  int32_t ____downsample;

  /// @brief Field _gammaCorrection, offset: 0x44, size: 0x1, def value: None
  bool ____gammaCorrection;

  /// @brief Field _kawaseBlurRenderer, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::KawaseBlurRendererSO> ____kawaseBlurRenderer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO, ____bloom1KernelSize) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO, ____bloom1Boost) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO, ____bloom2KernelSize) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO, ____bloom2Boost) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO, ____bloom2Alpha) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO, ____downsample) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO, ____gammaCorrection) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO, ____kawaseBlurRenderer) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO*, "", "BloomPrePassDoubleKawaseBlurTextureEffectSO");
