#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundNonLightRendererCore_def.hpp"
CORDL_MODULE_EXPORT(BloomPrePassBackgroundSpriteRenderer)
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class SpriteRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundSpriteRenderer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundSpriteRenderer);
// Type: ::BloomPrePassBackgroundSpriteRenderer
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BloomPrePassBackgroundSpriteRenderer*
class CORDL_TYPE BloomPrePassBackgroundSpriteRenderer : public ::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore {
public:
  // Declarations
  /// @brief Field _spriteRenderer, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__spriteRenderer, put = __cordl_internal_set__spriteRenderer))::UnityW<::UnityEngine::SpriteRenderer> _spriteRenderer;

  __declspec(property(get = get_renderer))::UnityW<::UnityEngine::Renderer> renderer;

  static inline ::GlobalNamespace::BloomPrePassBackgroundSpriteRenderer* New_ctor();

  constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get__spriteRenderer() const;

  constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get__spriteRenderer();

  constexpr void __cordl_internal_set__spriteRenderer(::UnityW<::UnityEngine::SpriteRenderer> value);

  /// @brief Method .ctor, addr 0x23f10e4, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_renderer, addr 0x23f10dc, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Renderer> get_renderer();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassBackgroundSpriteRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundSpriteRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassBackgroundSpriteRenderer(BloomPrePassBackgroundSpriteRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundSpriteRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassBackgroundSpriteRenderer(BloomPrePassBackgroundSpriteRenderer const&) = delete;

  /// @brief Field _spriteRenderer, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::SpriteRenderer> ____spriteRenderer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundSpriteRenderer, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundSpriteRenderer, ____spriteRenderer) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundSpriteRenderer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundSpriteRenderer*, "", "BloomPrePassBackgroundSpriteRenderer");
