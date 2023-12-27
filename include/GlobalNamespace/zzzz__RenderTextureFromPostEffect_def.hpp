#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RenderTextureFromPostEffect)
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
class RenderTextureFromPostEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RenderTextureFromPostEffect);
// Type: ::RenderTextureFromPostEffect
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15299))
// CS Name: ::RenderTextureFromPostEffect*
class CORDL_TYPE RenderTextureFromPostEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _targetTexture, offset 0x18, size 0x8
  __declspec(property(get = __get__targetTexture, put = __set__targetTexture))::UnityEngine::RenderTexture* _targetTexture;

  /// @brief Field _camera, offset 0x20, size 0x8
  __declspec(property(get = __get__camera, put = __set__camera))::UnityEngine::Camera* _camera;

  __declspec(property(get = get_targetTexture))::UnityEngine::RenderTexture* targetTexture;

  constexpr ::UnityEngine::RenderTexture*& __get__targetTexture();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RenderTexture*> const& __get__targetTexture() const;

  constexpr void __set__targetTexture(::UnityEngine::RenderTexture* value);

  constexpr ::UnityEngine::Camera*& __get__camera();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> const& __get__camera() const;

  constexpr void __set__camera(::UnityEngine::Camera* value);

  /// @brief Method get_targetTexture addr 0x280ad54 size 0x8 virtual false final false
  inline ::UnityEngine::RenderTexture* get_targetTexture();

  /// @brief Method Awake addr 0x280ad5c size 0x50 virtual false final false
  inline void Awake();

  /// @brief Method OnRenderImage addr 0x280adac size 0x1f8 virtual false final false
  inline void OnRenderImage(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dst);

  static inline ::GlobalNamespace::RenderTextureFromPostEffect* New_ctor();

  /// @brief Method .ctor addr 0x280afa4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RenderTextureFromPostEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderTextureFromPostEffect(RenderTextureFromPostEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderTextureFromPostEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderTextureFromPostEffect(RenderTextureFromPostEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderTextureFromPostEffect();

public:
  /// @brief Field _targetTexture, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::RenderTexture* ____targetTexture;

  /// @brief Field _camera, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Camera* ____camera;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RenderTextureFromPostEffect, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RenderTextureFromPostEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RenderTextureFromPostEffect*, "", "RenderTextureFromPostEffect");
