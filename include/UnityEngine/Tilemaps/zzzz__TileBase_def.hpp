#pragma once
// IWYU pragma private; include "UnityEngine/Tilemaps/TileBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(TileBase)
namespace UnityEngine::Tilemaps {
class ITilemap;
}
namespace UnityEngine::Tilemaps {
struct TileAnimationData;
}
namespace UnityEngine::Tilemaps {
struct TileData;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3Int;
}
// Forward declare root types
namespace UnityEngine::Tilemaps {
class TileBase;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Tilemaps::TileBase);
// Type: UnityEngine.Tilemaps::TileBase
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Tilemaps {
// Is value type: false
// CS Name: ::UnityEngine.Tilemaps::TileBase*
class CORDL_TYPE TileBase : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Method GetTileAnimationData, addr 0x48ef3b0, size 0x8, virtual true, abstract: false, final false
  inline bool GetTileAnimationData(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap, ByRef<::UnityEngine::Tilemaps::TileAnimationData> tileAnimationData);

  /// @brief Method GetTileAnimationDataNoRef, addr 0x48ef3b8, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Tilemaps::TileAnimationData GetTileAnimationDataNoRef(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap);

  /// @brief Method GetTileAnimationDataRef, addr 0x48ef3fc, size 0x28, virtual false, abstract: false, final false
  inline void GetTileAnimationDataRef(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap, ByRef<::UnityEngine::Tilemaps::TileAnimationData> tileAnimationData,
                                      ByRef<bool> hasAnimation);

  /// @brief Method GetTileData, addr 0x48ef360, size 0x4, virtual true, abstract: false, final false
  inline void GetTileData(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap, ByRef<::UnityEngine::Tilemaps::TileData> tileData);

  /// @brief Method GetTileDataNoRef, addr 0x48ef364, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Tilemaps::TileData GetTileDataNoRef(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap);

  static inline ::UnityEngine::Tilemaps::TileBase* New_ctor();

  /// @brief Method RefreshTile, addr 0x48ef348, size 0x18, virtual true, abstract: false, final false
  inline void RefreshTile(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap);

  /// @brief Method StartUp, addr 0x48ef424, size 0x8, virtual true, abstract: false, final false
  inline bool StartUp(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap, ::UnityEngine::GameObject* go);

  /// @brief Method StartUpRef, addr 0x48ef42c, size 0x28, virtual false, abstract: false, final false
  inline void StartUpRef(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap, ::UnityEngine::GameObject* go, ByRef<bool> startUpInvokedByUser);

  /// @brief Method .ctor, addr 0x48ef340, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TileBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TileBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TileBase(TileBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TileBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TileBase(TileBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18479 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Tilemaps::TileBase, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Tilemaps
NEED_NO_BOX(::UnityEngine::Tilemaps::TileBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::TileBase*, "UnityEngine.Tilemaps", "TileBase");
