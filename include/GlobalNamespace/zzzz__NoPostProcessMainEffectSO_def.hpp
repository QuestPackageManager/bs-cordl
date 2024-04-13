#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MainEffectSO_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NoPostProcessMainEffectSO)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace GlobalNamespace {
class NoPostProcessMainEffectSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoPostProcessMainEffectSO);
// Type: ::NoPostProcessMainEffectSO
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NoPostProcessMainEffectSO*
class CORDL_TYPE NoPostProcessMainEffectSO : public ::GlobalNamespace::MainEffectSO {
public:
  // Declarations
  /// @brief Field _baseColorBoost, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__baseColorBoost, put = __cordl_internal_set__baseColorBoost)) float_t _baseColorBoost;

  /// @brief Field _baseColorBoostThreshold, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__baseColorBoostThreshold, put = __cordl_internal_set__baseColorBoostThreshold)) float_t _baseColorBoostThreshold;

  /// @brief Field _fadeMaterial, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeMaterial, put = __cordl_internal_set__fadeMaterial))::UnityW<::UnityEngine::Material> _fadeMaterial;

  /// @brief Field _fadeShader, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeShader, put = __cordl_internal_set__fadeShader))::UnityW<::UnityEngine::Shader> _fadeShader;

  __declspec(property(get = get_hasPostProcessEffect)) bool hasPostProcessEffect;

  /// @brief Method DrawFadeQuad, addr 0x2ad8590, size 0xec, virtual false, abstract: false, final false
  inline void DrawFadeQuad(float_t alpha);

  static inline ::GlobalNamespace::NoPostProcessMainEffectSO* New_ctor();

  /// @brief Method OnDisable, addr 0x2ad8514, size 0xc, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2ad8494, size 0x80, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method PostRender, addr 0x2ad8584, size 0xc, virtual true, abstract: false, final false
  inline void PostRender(float_t fade);

  /// @brief Method PreRender, addr 0x2ad8520, size 0x64, virtual true, abstract: false, final false
  inline void PreRender();

  constexpr float_t const& __cordl_internal_get__baseColorBoost() const;

  constexpr float_t& __cordl_internal_get__baseColorBoost();

  constexpr float_t const& __cordl_internal_get__baseColorBoostThreshold() const;

  constexpr float_t& __cordl_internal_get__baseColorBoostThreshold();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__fadeMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__fadeMaterial();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__fadeShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__fadeShader();

  constexpr void __cordl_internal_set__baseColorBoost(float_t value);

  constexpr void __cordl_internal_set__baseColorBoostThreshold(float_t value);

  constexpr void __cordl_internal_set__fadeMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__fadeShader(::UnityW<::UnityEngine::Shader> value);

  /// @brief Method .ctor, addr 0x2ad867c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_hasPostProcessEffect, addr 0x2ad848c, size 0x8, virtual true, abstract: false, final false
  inline bool get_hasPostProcessEffect();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoPostProcessMainEffectSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoPostProcessMainEffectSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoPostProcessMainEffectSO(NoPostProcessMainEffectSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoPostProcessMainEffectSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoPostProcessMainEffectSO(NoPostProcessMainEffectSO const&) = delete;

  /// @brief Field _fadeShader, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ____fadeShader;

  /// @brief Field _baseColorBoost, offset: 0x20, size: 0x4, def value: None
  float_t ____baseColorBoost;

  /// @brief Field _baseColorBoostThreshold, offset: 0x24, size: 0x4, def value: None
  float_t ____baseColorBoostThreshold;

  /// @brief Field _fadeMaterial, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____fadeMaterial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoPostProcessMainEffectSO, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NoPostProcessMainEffectSO, ____fadeShader) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoPostProcessMainEffectSO, ____baseColorBoost) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoPostProcessMainEffectSO, ____baseColorBoostThreshold) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoPostProcessMainEffectSO, ____fadeMaterial) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoPostProcessMainEffectSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoPostProcessMainEffectSO*, "", "NoPostProcessMainEffectSO");
