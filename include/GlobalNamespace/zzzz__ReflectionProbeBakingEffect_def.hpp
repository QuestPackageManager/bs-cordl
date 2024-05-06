#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ReflectionProbeBakingEffect)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
class ReflectionProbeBakingEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ReflectionProbeBakingEffect);
// Type: ::ReflectionProbeBakingEffect
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ReflectionProbeBakingEffect*
class CORDL_TYPE ReflectionProbeBakingEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _material, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__material, put = __cordl_internal_set__material))::UnityW<::UnityEngine::Material> _material;

  static inline ::GlobalNamespace::ReflectionProbeBakingEffect* New_ctor();

  /// @brief Method OnRenderImage, addr 0x24ef07c, size 0x74, virtual false, abstract: false, final false
  inline void OnRenderImage(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest);

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material();

  constexpr void __cordl_internal_set__material(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x24ef0f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionProbeBakingEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionProbeBakingEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionProbeBakingEffect(ReflectionProbeBakingEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionProbeBakingEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionProbeBakingEffect(ReflectionProbeBakingEffect const&) = delete;

  /// @brief Field _material, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____material;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ReflectionProbeBakingEffect, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ReflectionProbeBakingEffect, ____material) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ReflectionProbeBakingEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ReflectionProbeBakingEffect*, "", "ReflectionProbeBakingEffect");
