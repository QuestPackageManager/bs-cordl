#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundNonLightRendererCore_def.hpp"
CORDL_MODULE_EXPORT(BloomPrePassBackgroundSpriteRenderer)
namespace UnityEngine {
class SpriteRenderer;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundSpriteRenderer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundSpriteRenderer);
// Type: ::BloomPrePassBackgroundSpriteRenderer
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14683))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14685))
// CS Name: ::BloomPrePassBackgroundSpriteRenderer*
class CORDL_TYPE BloomPrePassBackgroundSpriteRenderer : public ::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore {
public:
  // Declarations
  /// @brief Field _spriteRenderer, offset 0x38, size 0x8
  __declspec(property(get = __get__spriteRenderer, put = __set__spriteRenderer))::UnityEngine::SpriteRenderer* _spriteRenderer;

  __declspec(property(get = get_renderer))::UnityEngine::Renderer* renderer;

  constexpr ::UnityEngine::SpriteRenderer*& __get__spriteRenderer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SpriteRenderer*> const& __get__spriteRenderer() const;

  constexpr void __set__spriteRenderer(::UnityEngine::SpriteRenderer* value);

  /// @brief Method get_renderer addr 0x1fb0ea4 size 0x8 virtual true final false
  inline ::UnityEngine::Renderer* get_renderer();

  static inline ::GlobalNamespace::BloomPrePassBackgroundSpriteRenderer* New_ctor();

  /// @brief Method .ctor addr 0x1fb0eac size 0x54 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundSpriteRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassBackgroundSpriteRenderer(BloomPrePassBackgroundSpriteRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundSpriteRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassBackgroundSpriteRenderer(BloomPrePassBackgroundSpriteRenderer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassBackgroundSpriteRenderer();

public:
  /// @brief Field _spriteRenderer, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::SpriteRenderer* ____spriteRenderer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundSpriteRenderer, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundSpriteRenderer, ____spriteRenderer) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundSpriteRenderer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundSpriteRenderer*, "", "BloomPrePassBackgroundSpriteRenderer");
