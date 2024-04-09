#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MainEffectSO_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(KawaseBloomMainEffectSO)
namespace GlobalNamespace {
class KawaseBlurRendererSO;
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
class KawaseBloomMainEffectSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::KawaseBloomMainEffectSO);
// Type: ::KawaseBloomMainEffectSO
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::KawaseBloomMainEffectSO*
class CORDL_TYPE KawaseBloomMainEffectSO : public ::GlobalNamespace::MainEffectSO {
public:
  // Declarations
  /// @brief Field _baseColorBoost, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__baseColorBoost, put = __cordl_internal_set__baseColorBoost)) float_t _baseColorBoost;

  /// @brief Field _baseColorBoostThreshold, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__baseColorBoostThreshold, put = __cordl_internal_set__baseColorBoostThreshold)) float_t _baseColorBoostThreshold;

  /// @brief Field _bloomAlphaWeights, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__bloomAlphaWeights, put = __cordl_internal_set__bloomAlphaWeights)) float_t _bloomAlphaWeights;

  /// @brief Field _bloomBoost, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__bloomBoost, put = __cordl_internal_set__bloomBoost)) float_t _bloomBoost;

  /// @brief Field _bloomIntensity, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__bloomIntensity, put = __cordl_internal_set__bloomIntensity)) float_t _bloomIntensity;

  /// @brief Field _bloomIntensityID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__bloomIntensityID, put = setStaticF__bloomIntensityID)) int32_t _bloomIntensityID;

  /// @brief Field _bloomIterations, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__bloomIterations, put = __cordl_internal_set__bloomIterations)) int32_t _bloomIterations;

  /// @brief Field _bloomTexID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__bloomTexID, put = setStaticF__bloomTexID)) int32_t _bloomTexID;

  /// @brief Field _bloomTextureWidth, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__bloomTextureWidth, put = __cordl_internal_set__bloomTextureWidth)) int32_t _bloomTextureWidth;

  /// @brief Field _fadeID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__fadeID, put = setStaticF__fadeID)) int32_t _fadeID;

  /// @brief Field _kawaseBlurRenderer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__kawaseBlurRenderer, put = __cordl_internal_set__kawaseBlurRenderer))::UnityW<::GlobalNamespace::KawaseBlurRendererSO> _kawaseBlurRenderer;

  /// @brief Field _mainEffectMaterial, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__mainEffectMaterial, put = __cordl_internal_set__mainEffectMaterial))::UnityW<::UnityEngine::Material> _mainEffectMaterial;

  /// @brief Field _mainEffectShader, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__mainEffectShader, put = __cordl_internal_set__mainEffectShader))::UnityW<::UnityEngine::Shader> _mainEffectShader;

  __declspec(property(get = get_hasPostProcessEffect)) bool hasPostProcessEffect;

  /// @brief Method LazyInitializeMaterials, addr 0x2ad5884, size 0xbc, virtual false, abstract: false, final false
  inline void LazyInitializeMaterials();

  static inline ::GlobalNamespace::KawaseBloomMainEffectSO* New_ctor();

  /// @brief Method OnDisable, addr 0x2ad5940, size 0x20, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2ad5868, size 0x1c, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method PreRender, addr 0x2ad5960, size 0x64, virtual true, abstract: false, final false
  inline void PreRender();

  /// @brief Method Render, addr 0x2ad5a4c, size 0x210, virtual true, abstract: false, final false
  inline void Render(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest, float_t fade);

  constexpr float_t const& __cordl_internal_get__baseColorBoost() const;

  constexpr float_t& __cordl_internal_get__baseColorBoost();

  constexpr float_t const& __cordl_internal_get__baseColorBoostThreshold() const;

  constexpr float_t& __cordl_internal_get__baseColorBoostThreshold();

  constexpr float_t const& __cordl_internal_get__bloomAlphaWeights() const;

  constexpr float_t& __cordl_internal_get__bloomAlphaWeights();

  constexpr float_t const& __cordl_internal_get__bloomBoost() const;

  constexpr float_t& __cordl_internal_get__bloomBoost();

  constexpr float_t const& __cordl_internal_get__bloomIntensity() const;

  constexpr float_t& __cordl_internal_get__bloomIntensity();

  constexpr int32_t const& __cordl_internal_get__bloomIterations() const;

  constexpr int32_t& __cordl_internal_get__bloomIterations();

  constexpr int32_t const& __cordl_internal_get__bloomTextureWidth() const;

  constexpr int32_t& __cordl_internal_get__bloomTextureWidth();

  constexpr ::UnityW<::GlobalNamespace::KawaseBlurRendererSO> const& __cordl_internal_get__kawaseBlurRenderer() const;

  constexpr ::UnityW<::GlobalNamespace::KawaseBlurRendererSO>& __cordl_internal_get__kawaseBlurRenderer();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__mainEffectMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__mainEffectMaterial();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__mainEffectShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__mainEffectShader();

  constexpr void __cordl_internal_set__baseColorBoost(float_t value);

  constexpr void __cordl_internal_set__baseColorBoostThreshold(float_t value);

  constexpr void __cordl_internal_set__bloomAlphaWeights(float_t value);

  constexpr void __cordl_internal_set__bloomBoost(float_t value);

  constexpr void __cordl_internal_set__bloomIntensity(float_t value);

  constexpr void __cordl_internal_set__bloomIterations(int32_t value);

  constexpr void __cordl_internal_set__bloomTextureWidth(int32_t value);

  constexpr void __cordl_internal_set__kawaseBlurRenderer(::UnityW<::GlobalNamespace::KawaseBlurRendererSO> value);

  constexpr void __cordl_internal_set__mainEffectMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__mainEffectShader(::UnityW<::UnityEngine::Shader> value);

  /// @brief Method .ctor, addr 0x2ad5c5c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__bloomIntensityID();

  static inline int32_t getStaticF__bloomTexID();

  static inline int32_t getStaticF__fadeID();

  /// @brief Method get_hasPostProcessEffect, addr 0x2ad5860, size 0x8, virtual true, abstract: false, final false
  inline bool get_hasPostProcessEffect();

  static inline void setStaticF__bloomIntensityID(int32_t value);

  static inline void setStaticF__bloomTexID(int32_t value);

  static inline void setStaticF__fadeID(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KawaseBloomMainEffectSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KawaseBloomMainEffectSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KawaseBloomMainEffectSO(KawaseBloomMainEffectSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KawaseBloomMainEffectSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KawaseBloomMainEffectSO(KawaseBloomMainEffectSO const&) = delete;

  /// @brief Field _kawaseBlurRenderer, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::KawaseBlurRendererSO> ____kawaseBlurRenderer;

  /// @brief Field _mainEffectShader, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ____mainEffectShader;

  /// @brief Field _bloomIntensity, offset: 0x28, size: 0x4, def value: None
  float_t ____bloomIntensity;

  /// @brief Field _bloomIterations, offset: 0x2c, size: 0x4, def value: None
  int32_t ____bloomIterations;

  /// @brief Field _bloomBoost, offset: 0x30, size: 0x4, def value: None
  float_t ____bloomBoost;

  /// @brief Field _bloomAlphaWeights, offset: 0x34, size: 0x4, def value: None
  float_t ____bloomAlphaWeights;

  /// @brief Field _bloomTextureWidth, offset: 0x38, size: 0x4, def value: None
  int32_t ____bloomTextureWidth;

  /// @brief Field _baseColorBoost, offset: 0x3c, size: 0x4, def value: None
  float_t ____baseColorBoost;

  /// @brief Field _baseColorBoostThreshold, offset: 0x40, size: 0x4, def value: None
  float_t ____baseColorBoostThreshold;

  /// @brief Field _mainEffectMaterial, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____mainEffectMaterial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::KawaseBloomMainEffectSO, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::KawaseBloomMainEffectSO, ____kawaseBlurRenderer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KawaseBloomMainEffectSO, ____mainEffectShader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KawaseBloomMainEffectSO, ____bloomIntensity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KawaseBloomMainEffectSO, ____bloomIterations) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KawaseBloomMainEffectSO, ____bloomBoost) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KawaseBloomMainEffectSO, ____bloomAlphaWeights) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KawaseBloomMainEffectSO, ____bloomTextureWidth) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KawaseBloomMainEffectSO, ____baseColorBoost) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KawaseBloomMainEffectSO, ____baseColorBoostThreshold) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KawaseBloomMainEffectSO, ____mainEffectMaterial) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::KawaseBloomMainEffectSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::KawaseBloomMainEffectSO*, "", "KawaseBloomMainEffectSO");
