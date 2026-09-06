#pragma once
// IWYU pragma private; include "UnityEngine/Tilemaps/Tilemap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GridLayout_def.hpp"
CORDL_MODULE_EXPORT(Tilemap)
// Forward declare root types
namespace UnityEngine::Tilemaps {
class Tilemap;
}
// Write type traits
MARK_REF_T(::UnityEngine::Tilemaps::Tilemap*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Tilemaps::Tilemap*, "UnityEngine.Tilemaps", "Tilemap");
// [NativeHeader("Modules/Grid/Public/Grid.h")]
// [NativeHeader("Runtime/Graphics/SpriteFrame.h")]
// [NativeHeader("Modules/Tilemap/Public/TilemapTile.h")]
// [NativeHeader("Modules/Tilemap/Public/TilemapMarshalling.h")]
// [RequireComponent(typeof(UnityEngine.Transform))]
// [NativeType(Header = "Modules/Tilemap/Public/Tilemap.h")]
// [NativeHeader("Modules/Grid/Public/GridMarshalling.h")]
// Dependencies UnityEngine.GridLayout
namespace UnityEngine::Tilemaps {
// Is value type: false
// CS Name: UnityEngine.Tilemaps.Tilemap
class CORDL_TYPE Tilemap : public ::UnityEngine::GridLayout {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tilemap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Tilemap", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Tilemap(Tilemap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Tilemap", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Tilemap(Tilemap const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23417 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Tilemaps::Tilemap) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Tilemaps
