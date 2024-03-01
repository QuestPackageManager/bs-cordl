#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ITilemap)
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
// Type: UnityEngine.Tilemaps::ITilemap
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Tilemaps {
// Is value type: false
// CS Name: ::UnityEngine.Tilemaps::ITilemap*
class CORDL_TYPE ITilemap : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_AddToList, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AddToList, put = __cordl_internal_set_m_AddToList)) bool m_AddToList;

  /// @brief Field m_RefreshCount, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RefreshCount, put = __cordl_internal_set_m_RefreshCount)) int32_t m_RefreshCount;

  /// @brief Field m_RefreshPos, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_m_RefreshPos, put = __cordl_internal_set_m_RefreshPos))::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int> m_RefreshPos;

  /// @brief Field m_Tilemap, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Tilemap, put = __cordl_internal_set_m_Tilemap))::UnityW<::UnityEngine::Tilemaps::Tilemap> m_Tilemap;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance))::UnityEngine::Tilemaps::ITilemap* s_Instance;

  /// @brief Method CreateInstance, addr 0x2e5b3c8, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::Tilemaps::ITilemap* CreateInstance();

  /// @brief Method FindAllRefreshPositions, addr 0x2e5b438, size 0x318, virtual false, abstract: false, final false
  static inline void FindAllRefreshPositions(::UnityEngine::Tilemaps::ITilemap* tilemap, int32_t count, void* oldTilesIntPtr, void* newTilesIntPtr, void* positionsIntPtr);

  /// @brief Method GetAllTileData, addr 0x2e5b750, size 0x1f8, virtual false, abstract: false, final false
  static inline void GetAllTileData(::UnityEngine::Tilemaps::ITilemap* tilemap, int32_t count, void* tilesIntPtr, void* positionsIntPtr, void* outTileDataIntPtr);

  static inline ::UnityEngine::Tilemaps::ITilemap* New_ctor();

  /// @brief Method RefreshTile, addr 0x2e5b17c, size 0x164, virtual false, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x2e5b3c0, size 0x8, virtual false, abstract: false, final false
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
static_assert(::cordl_internals::size_check_v<::UnityEngine::Tilemaps::ITilemap, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::ITilemap, ___m_Tilemap) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::ITilemap, ___m_AddToList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::ITilemap, ___m_RefreshCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::ITilemap, ___m_RefreshPos) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::Tilemaps
NEED_NO_BOX(::UnityEngine::Tilemaps::ITilemap);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::ITilemap*, "UnityEngine.Tilemaps", "ITilemap");
