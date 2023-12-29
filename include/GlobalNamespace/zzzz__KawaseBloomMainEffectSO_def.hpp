#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MainEffectSO_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(KawaseBloomMainEffectSO)
namespace UnityEngine {
class RenderTexture;
}
namespace GlobalNamespace {
class KawaseBlurRendererSO;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class KawaseBloomMainEffectSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::KawaseBloomMainEffectSO);
// Type: ::KawaseBloomMainEffectSO
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15322))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15318))
// CS Name: ::KawaseBloomMainEffectSO*
class CORDL_TYPE KawaseBloomMainEffectSO : public ::GlobalNamespace::MainEffectSO {
public:
  // Declarations
  /// @brief Field _kawaseBlurRenderer, offset 0x18, size 0x8
  __declspec(property(get = __get__kawaseBlurRenderer, put = __set__kawaseBlurRenderer))::GlobalNamespace::KawaseBlurRendererSO* _kawaseBlurRenderer;

  /// @brief Field _fadeShader, offset 0x20, size 0x8
  __declspec(property(get = __get__fadeShader, put = __set__fadeShader))::UnityEngine::Shader* _fadeShader;

  /// @brief Field _mainEffectShader, offset 0x28, size 0x8
  __declspec(property(get = __get__mainEffectShader, put = __set__mainEffectShader))::UnityEngine::Shader* _mainEffectShader;

  /// @brief Field _bloomIntensity, offset 0x30, size 0x4
  __declspec(property(get = __get__bloomIntensity, put = __set__bloomIntensity)) float_t _bloomIntensity;

  /// @brief Field _bloomIterations, offset 0x34, size 0x4
  __declspec(property(get = __get__bloomIterations, put = __set__bloomIterations)) int32_t _bloomIterations;

  /// @brief Field _bloomBoost, offset 0x38, size 0x4
  __declspec(property(get = __get__bloomBoost, put = __set__bloomBoost)) float_t _bloomBoost;

  /// @brief Field _bloomAlphaWeights, offset 0x3c, size 0x4
  __declspec(property(get = __get__bloomAlphaWeights, put = __set__bloomAlphaWeights)) float_t _bloomAlphaWeights;

  /// @brief Field _bloomTextureWidth, offset 0x40, size 0x4
  __declspec(property(get = __get__bloomTextureWidth, put = __set__bloomTextureWidth)) int32_t _bloomTextureWidth;

  /// @brief Field _baseColorBoost, offset 0x44, size 0x4
  __declspec(property(get = __get__baseColorBoost, put = __set__baseColorBoost)) float_t _baseColorBoost;

  /// @brief Field _baseColorBoostThreshold, offset 0x48, size 0x4
  __declspec(property(get = __get__baseColorBoostThreshold, put = __set__baseColorBoostThreshold)) float_t _baseColorBoostThreshold;

  /// @brief Field _fadeMaterial, offset 0x50, size 0x8
  __declspec(property(get = __get__fadeMaterial, put = __set__fadeMaterial))::UnityEngine::Material* _fadeMaterial;

  /// @brief Field _mainEffectMaterial, offset 0x58, size 0x8
  __declspec(property(get = __get__mainEffectMaterial, put = __set__mainEffectMaterial))::UnityEngine::Material* _mainEffectMaterial;

  /// @brief Field _bloomTexID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__bloomTexID, put = setStaticF__bloomTexID)) int32_t _bloomTexID;

  /// @brief Field _bloomIntensityID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__bloomIntensityID, put = setStaticF__bloomIntensityID)) int32_t _bloomIntensityID;

  __declspec(property(get = get_hasPostProcessEffect)) bool hasPostProcessEffect;

  constexpr ::GlobalNamespace::KawaseBlurRendererSO*& __get__kawaseBlurRenderer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::KawaseBlurRendererSO*> const& __get__kawaseBlurRenderer() const;

  constexpr void __set__kawaseBlurRenderer(::GlobalNamespace::KawaseBlurRendererSO* value);

  constexpr ::UnityEngine::Shader*& __get__fadeShader();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> const& __get__fadeShader() const;

  constexpr void __set__fadeShader(::UnityEngine::Shader* value);

  constexpr ::UnityEngine::Shader*& __get__mainEffectShader();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> const& __get__mainEffectShader() const;

  constexpr void __set__mainEffectShader(::UnityEngine::Shader* value);

  constexpr float_t& __get__bloomIntensity();

  constexpr float_t const& __get__bloomIntensity() const;

  constexpr void __set__bloomIntensity(float_t value);

  constexpr int32_t& __get__bloomIterations();

  constexpr int32_t const& __get__bloomIterations() const;

  constexpr void __set__bloomIterations(int32_t value);

  constexpr float_t& __get__bloomBoost();

  constexpr float_t const& __get__bloomBoost() const;

  constexpr void __set__bloomBoost(float_t value);

  constexpr float_t& __get__bloomAlphaWeights();

  constexpr float_t const& __get__bloomAlphaWeights() const;

  constexpr void __set__bloomAlphaWeights(float_t value);

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

  /// @brief Method get_hasPostProcessEffect addr 0x268d11c size 0x8 virtual true final false
  inline bool get_hasPostProcessEffect();

  /// @brief Method OnEnable addr 0x268d124 size 0x1c virtual true final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x268d264 size 0x30 virtual false final false
  inline void OnDisable();

  /// @brief Method LazyInitializeMaterials addr 0x268d140 size 0x124 virtual false final false
  inline void LazyInitializeMaterials();

  /// @brief Method PreRender addr 0x268d294 size 0x64 virtual true final false
  inline void PreRender();

  /// @brief Method Render addr 0x268d380 size 0x268 virtual true final false
  inline void Render(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest, float_t fade);

  static inline ::GlobalNamespace::KawaseBloomMainEffectSO* New_ctor();

  /// @brief Method .ctor addr 0x268d5e8 size 0x28 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "KawaseBloomMainEffectSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KawaseBloomMainEffectSO(KawaseBloomMainEffectSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KawaseBloomMainEffectSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KawaseBloomMainEffectSO(KawaseBloomMainEffectSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KawaseBloomMainEffectSO();

public:
  /// @brief Field _kawaseBlurRenderer, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::KawaseBlurRendererSO* ____kawaseBlurRenderer;

  /// @brief Field _fadeShader, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Shader* ____fadeShader;

  /// @brief Field _mainEffectShader, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Shader* ____mainEffectShader;

  /// @brief Field _bloomIntensity, offset: 0x30, size: 0x4, def value: None
  float_t ____bloomIntensity;

  /// @brief Field _bloomIterations, offset: 0x34, size: 0x4, def value: None
  int32_t ____bloomIterations;

  /// @brief Field _bloomBoost, offset: 0x38, size: 0x4, def value: None
  float_t ____bloomBoost;

  /// @brief Field _bloomAlphaWeights, offset: 0x3c, size: 0x4, def value: None
  float_t ____bloomAlphaWeights;

  /// @brief Field _bloomTextureWidth, offset: 0x40, size: 0x4, def value: None
  int32_t ____bloomTextureWidth;

  /// @brief Field _baseColorBoost, offset: 0x44, size: 0x4, def value: None
  float_t ____baseColorBoost;

  /// @brief Field _baseColorBoostThreshold, offset: 0x48, size: 0x4, def value: None
  float_t ____baseColorBoostThreshold;

  /// @brief Field _fadeMaterial, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Material* ____fadeMaterial;

  /// @brief Field _mainEffectMaterial, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Material* ____mainEffectMaterial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::KawaseBloomMainEffectSO, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::KawaseBloomMainEffectSO, ____kawaseBlurRenderer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KawaseBloomMainEffectSO, ____fadeShader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KawaseBloomMainEffectSO, ____mainEffectShader) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KawaseBloomMainEffectSO, ____bloomIntensity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KawaseBloomMainEffectSO, ____bloomIterations) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KawaseBloomMainEffectSO, ____bloomBoost) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KawaseBloomMainEffectSO, ____bloomAlphaWeights) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KawaseBloomMainEffectSO, ____bloomTextureWidth) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KawaseBloomMainEffectSO, ____baseColorBoost) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KawaseBloomMainEffectSO, ____baseColorBoostThreshold) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KawaseBloomMainEffectSO, ____fadeMaterial) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KawaseBloomMainEffectSO, ____mainEffectMaterial) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::KawaseBloomMainEffectSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::KawaseBloomMainEffectSO*, "", "KawaseBloomMainEffectSO");
