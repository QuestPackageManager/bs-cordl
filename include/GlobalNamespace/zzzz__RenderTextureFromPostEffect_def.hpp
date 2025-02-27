#pragma once
// IWYU pragma private; include "GlobalNamespace/RenderTextureFromPostEffect.hpp"
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
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RenderTextureFromPostEffect
class CORDL_TYPE RenderTextureFromPostEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _camera, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__camera, put = __cordl_internal_set__camera)) ::UnityW<::UnityEngine::Camera> _camera;

  /// @brief Field _targetTexture, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__targetTexture, put = __cordl_internal_set__targetTexture)) ::UnityW<::UnityEngine::RenderTexture> _targetTexture;

  __declspec(property(get = get_targetTexture)) ::UnityW<::UnityEngine::RenderTexture> targetTexture;

  /// @brief Method Awake, addr 0x4092d98, size 0x50, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::RenderTextureFromPostEffect* New_ctor();

  /// @brief Method OnRenderImage, addr 0x4092de8, size 0x1f8, virtual false, abstract: false, final false
  inline void OnRenderImage(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dst);

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__camera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__camera();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__targetTexture() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__targetTexture();

  constexpr void __cordl_internal_set__camera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set__targetTexture(::UnityW<::UnityEngine::RenderTexture> value);

  /// @brief Method .ctor, addr 0x4092fe0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_targetTexture, addr 0x4092d90, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> get_targetTexture();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderTextureFromPostEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderTextureFromPostEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderTextureFromPostEffect(RenderTextureFromPostEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderTextureFromPostEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderTextureFromPostEffect(RenderTextureFromPostEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17915 };

  /// @brief Field _targetTexture, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ____targetTexture;

  /// @brief Field _camera, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____camera;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RenderTextureFromPostEffect, ____targetTexture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderTextureFromPostEffect, ____camera) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RenderTextureFromPostEffect, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RenderTextureFromPostEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RenderTextureFromPostEffect*, "", "RenderTextureFromPostEffect");
