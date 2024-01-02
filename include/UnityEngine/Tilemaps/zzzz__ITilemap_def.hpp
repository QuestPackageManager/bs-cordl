#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ITilemap)
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine::Tilemaps {
class Tilemap;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 754 }),
// TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10247))} Self: TypeDefinitionIndex(TypeDefinitionIndex(15948)) CS Name: ::UnityEngine.Tilemaps::ITilemap*
class CORDL_TYPE ITilemap : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Tilemap, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Tilemap, put = __set_m_Tilemap))::UnityEngine::Tilemaps::Tilemap* m_Tilemap;

  /// @brief Field m_AddToList, offset 0x18, size 0x1
  __declspec(property(get = __get_m_AddToList, put = __set_m_AddToList)) bool m_AddToList;

  /// @brief Field m_RefreshCount, offset 0x1c, size 0x4
  __declspec(property(get = __get_m_RefreshCount, put = __set_m_RefreshCount)) int32_t m_RefreshCount;

  /// @brief Field m_RefreshPos, offset 0x20, size 0x10
  __declspec(property(get = __get_m_RefreshPos, put = __set_m_RefreshPos))::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int> m_RefreshPos;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance))::UnityEngine::Tilemaps::ITilemap* s_Instance;

  constexpr ::UnityEngine::Tilemaps::Tilemap*& __get_m_Tilemap();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Tilemaps::Tilemap*> const& __get_m_Tilemap() const;

  constexpr void __set_m_Tilemap(::UnityEngine::Tilemaps::Tilemap* value);

  constexpr bool& __get_m_AddToList();

  constexpr bool const& __get_m_AddToList() const;

  constexpr void __set_m_AddToList(bool value);

  constexpr int32_t& __get_m_RefreshCount();

  constexpr int32_t const& __get_m_RefreshCount() const;

  constexpr void __set_m_RefreshCount(int32_t value);

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>& __get_m_RefreshPos();

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int> const& __get_m_RefreshPos() const;

  constexpr void __set_m_RefreshPos(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int> value);

  static inline void setStaticF_s_Instance(::UnityEngine::Tilemaps::ITilemap* value);

  static inline ::UnityEngine::Tilemaps::ITilemap* getStaticF_s_Instance();

  static inline ::UnityEngine::Tilemaps::ITilemap* New_ctor();

  /// @brief Method .ctor, addr 0x2d508b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method RefreshTile, addr 0x2d5066c, size 0x164, virtual false, abstract: false, final false
  inline void RefreshTile(::UnityEngine::Vector3Int position);

  /// @brief Method CreateInstance, addr 0x2d508b8, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::Tilemaps::ITilemap* CreateInstance();

  /// @brief Method FindAllRefreshPositions, addr 0x2d50928, size 0x318, virtual false, abstract: false, final false
  static inline void FindAllRefreshPositions(::UnityEngine::Tilemaps::ITilemap* tilemap, int32_t count, void* oldTilesIntPtr, void* newTilesIntPtr, void* positionsIntPtr);

  /// @brief Method GetAllTileData, addr 0x2d50c40, size 0x1f8, virtual false, abstract: false, final false
  static inline void GetAllTileData(::UnityEngine::Tilemaps::ITilemap* tilemap, int32_t count, void* tilesIntPtr, void* positionsIntPtr, void* outTileDataIntPtr);

  // Ctor Parameters [CppParam { name: "", ty: "ITilemap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITilemap(ITilemap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITilemap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITilemap(ITilemap const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ITilemap();

public:
  /// @brief Field m_Tilemap, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Tilemaps::Tilemap* ___m_Tilemap;

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
