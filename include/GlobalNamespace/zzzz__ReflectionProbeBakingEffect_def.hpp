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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14502))
// CS Name: ::ReflectionProbeBakingEffect*
class CORDL_TYPE ReflectionProbeBakingEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _material, offset 0x18, size 0x8
  __declspec(property(get = __get__material, put = __set__material))::UnityEngine::Material* _material;

  constexpr ::UnityEngine::Material*& __get__material();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__material() const;

  constexpr void __set__material(::UnityEngine::Material* value);

  /// @brief Method OnRenderImage addr 0x210c310 size 0x74 virtual false final false
  inline void OnRenderImage(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest);

  static inline ::GlobalNamespace::ReflectionProbeBakingEffect* New_ctor();

  /// @brief Method .ctor addr 0x210c384 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionProbeBakingEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionProbeBakingEffect(ReflectionProbeBakingEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionProbeBakingEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionProbeBakingEffect(ReflectionProbeBakingEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionProbeBakingEffect();

public:
  /// @brief Field _material, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Material* ____material;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ReflectionProbeBakingEffect, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ReflectionProbeBakingEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ReflectionProbeBakingEffect*, "", "ReflectionProbeBakingEffect");
