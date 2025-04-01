#pragma once
// IWYU pragma private; include "UnityEngine/Tilemaps/TilemapRenderer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
CORDL_MODULE_EXPORT(TilemapRenderer)
namespace UnityEngine::U2D {
class SpriteAtlas;
}
// Forward declare root types
namespace UnityEngine::Tilemaps {
class TilemapRenderer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Tilemaps::TilemapRenderer);
// Dependencies UnityEngine.Renderer
namespace UnityEngine::Tilemaps {
// Is value type: false
// CS Name: UnityEngine.Tilemaps.TilemapRenderer
class CORDL_TYPE TilemapRenderer : public ::UnityEngine::Renderer {
public:
  // Declarations
  /// @brief Method OnSpriteAtlasRegistered, addr 0x49512d0, size 0x44, virtual false, abstract: false, final false
  inline void OnSpriteAtlasRegistered(::UnityEngine::U2D::SpriteAtlas* atlas);

  /// @brief Method RegisterSpriteAtlasRegistered, addr 0x49511d0, size 0x80, virtual false, abstract: false, final false
  inline void RegisterSpriteAtlasRegistered();

  /// @brief Method UnregisterSpriteAtlasRegistered, addr 0x4951250, size 0x80, virtual false, abstract: false, final false
  inline void UnregisterSpriteAtlasRegistered();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TilemapRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TilemapRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TilemapRenderer(TilemapRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TilemapRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TilemapRenderer(TilemapRenderer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18576 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Tilemaps::TilemapRenderer, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Tilemaps
NEED_NO_BOX(::UnityEngine::Tilemaps::TilemapRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::TilemapRenderer*, "UnityEngine.Tilemaps", "TilemapRenderer");
