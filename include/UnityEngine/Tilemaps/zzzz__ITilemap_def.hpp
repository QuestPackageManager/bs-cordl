#pragma once
// IWYU pragma private; include "UnityEngine/Tilemaps/ITilemap.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ITilemap)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Tilemaps {
class Tilemap;
}
namespace UnityEngine {
struct Vector3Int;
}
// Forward declare root types
namespace UnityEngine::Tilemaps {
class ITilemap;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Tilemaps::ITilemap);
// Dependencies System.Object, Unity.Collections.NativeArray`1<T>, UnityEngine.Vector3Int
namespace UnityEngine::Tilemaps {
// Is value type: false
// CS Name: UnityEngine.Tilemaps.ITilemap
class CORDL_TYPE ITilemap : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_AddToList, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AddToList, put = __cordl_internal_set_m_AddToList)) bool m_AddToList;

  /// @brief Field m_RefreshCount, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RefreshCount, put = __cordl_internal_set_m_RefreshCount)) int32_t m_RefreshCount;

  /// @brief Field m_RefreshPos, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_m_RefreshPos, put = __cordl_internal_set_m_RefreshPos)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int> m_RefreshPos;

  /// @brief Field m_Tilemap, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Tilemap, put = __cordl_internal_set_m_Tilemap)) ::UnityW<::UnityEngine::Tilemaps::Tilemap> m_Tilemap;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance)) ::UnityEngine::Tilemaps::ITilemap* s_Instance;

  /// @brief Method CreateInstance, addr 0x4962018, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::Tilemaps::ITilemap* CreateInstance();

  /// @brief Method FindAllRefreshPositions, addr 0x4962080, size 0x308, virtual false, abstract: false, final false
  static inline void FindAllRefreshPositions(::UnityEngine::Tilemaps::ITilemap* tilemap, int32_t count, ::System::IntPtr oldTilesIntPtr, ::System::IntPtr newTilesIntPtr,
                                             ::System::IntPtr positionsIntPtr);

  /// @brief Method GetAllTileData, addr 0x49623dc, size 0x1f8, virtual false, abstract: false, final false
  static inline void GetAllTileData(::UnityEngine::Tilemaps::ITilemap* tilemap, int32_t count, ::System::IntPtr tilesIntPtr, ::System::IntPtr positionsIntPtr, ::System::IntPtr outTileDataIntPtr);

  static inline ::UnityEngine::Tilemaps::ITilemap* New_ctor();

  /// @brief Method RefreshTile, addr 0x4961e70, size 0x154, virtual false, abstract: false, final false
  inline void RefreshTile(::UnityEngine::Vector3Int position);

  constexpr bool const& __cordl_internal_get_m_AddToList() const;

  constexpr bool& __cordl_internal_get_m_AddToList();

  constexpr int32_t const& __cordl_internal_get_m_RefreshCount() const;

  constexpr int32_t& __cordl_internal_get_m_RefreshCount();

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int> const& __cordl_internal_get_m_RefreshPos() const;

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>& __cordl_internal_get_m_RefreshPos();

  constexpr ::UnityW<::UnityEngine::Tilemaps::Tilemap> const& __cordl_internal_get_m_Tilemap() const;

  constexpr ::UnityW<::UnityEngine::Tilemaps::Tilemap>& __cordl_internal_get_m_Tilemap();

  constexpr void __cordl_internal_set_m_AddToList(bool value);

  constexpr void __cordl_internal_set_m_RefreshCount(int32_t value);

  constexpr void __cordl_internal_set_m_RefreshPos(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int> value);

  constexpr void __cordl_internal_set_m_Tilemap(::UnityW<::UnityEngine::Tilemaps::Tilemap> value);

  /// @brief Method .ctor, addr 0x4961e68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Tilemaps::ITilemap* getStaticF_s_Instance();

  static inline void setStaticF_s_Instance(::UnityEngine::Tilemaps::ITilemap* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ITilemap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ITilemap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITilemap(ITilemap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITilemap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITilemap(ITilemap const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18566 };

  /// @brief Field m_Tilemap, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Tilemaps::Tilemap> ___m_Tilemap;

  /// @brief Field m_AddToList, offset: 0x18, size: 0x1, def value: None
  bool ___m_AddToList;

  /// @brief Field m_RefreshCount, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_RefreshCount;

  /// @brief Field m_RefreshPos, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int> ___m_RefreshPos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Tilemaps::ITilemap, ___m_Tilemap) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::ITilemap, ___m_AddToList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::ITilemap, ___m_RefreshCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::ITilemap, ___m_RefreshPos) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Tilemaps::ITilemap, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Tilemaps
NEED_NO_BOX(::UnityEngine::Tilemaps::ITilemap);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::ITilemap*, "UnityEngine.Tilemaps", "ITilemap");
