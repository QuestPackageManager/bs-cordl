#pragma once
// IWYU pragma private; include "UnityEngine/U2D/SpriteShapeRenderer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
CORDL_MODULE_EXPORT(SpriteShapeRenderer)
// Forward declare root types
namespace UnityEngine::U2D {
class SpriteShapeRenderer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::U2D::SpriteShapeRenderer);
// Type: UnityEngine.U2D::SpriteShapeRenderer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::U2D {
// Is value type: false
// CS Name: ::UnityEngine.U2D::SpriteShapeRenderer*
class CORDL_TYPE SpriteShapeRenderer : public ::UnityEngine::Renderer {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpriteShapeRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpriteShapeRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpriteShapeRenderer(SpriteShapeRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpriteShapeRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpriteShapeRenderer(SpriteShapeRenderer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::U2D::SpriteShapeRenderer, 0x18>, "Size mismatch!");

} // namespace UnityEngine::U2D
NEED_NO_BOX(::UnityEngine::U2D::SpriteShapeRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::U2D::SpriteShapeRenderer*, "UnityEngine.U2D", "SpriteShapeRenderer");
