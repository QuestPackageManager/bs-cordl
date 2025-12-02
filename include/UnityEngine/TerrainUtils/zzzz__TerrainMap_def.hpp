#pragma once
// IWYU pragma private; include "UnityEngine/TerrainUtils/TerrainMap.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/TerrainUtils/zzzz__TerrainMapStatusCode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TerrainMap)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace UnityEngine::TerrainUtils {
struct TerrainMapStatusCode;
}
namespace UnityEngine::TerrainUtils {
class TerrainMap___c__DisplayClass3_0;
}
namespace UnityEngine::TerrainUtils {
struct TerrainTileCoord;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::TerrainUtils {
class TerrainMap;
}
namespace UnityEngine::TerrainUtils {
class TerrainMap___c__DisplayClass3_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TerrainUtils::TerrainMap);
MARK_REF_PTR_T(::UnityEngine::TerrainUtils::TerrainMap___c__DisplayClass3_0);
// Dependencies System.Object
namespace UnityEngine::TerrainUtils {
// Is value type: false
// CS Name: UnityEngine.TerrainUtils.TerrainMap/<>c__DisplayClass3_0
class CORDL_TYPE TerrainMap___c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field groupID, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_groupID, put = __cordl_internal_set_groupID)) int32_t groupID;

  static inline ::UnityEngine::TerrainUtils::TerrainMap___c__DisplayClass3_0* New_ctor();

  /// @brief Method <CreateFromPlacement>b__0, addr 0x6987014, size 0x2c, virtual false, abstract: false, final false
  inline bool _CreateFromPlacement_b__0(::UnityEngine::Terrain* x);

  constexpr int32_t const& __cordl_internal_get_groupID() const;

  constexpr int32_t& __cordl_internal_get_groupID();

  constexpr void __cordl_internal_set_groupID(int32_t value);

  /// @brief Method .ctor, addr 0x69860ec, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TerrainMap___c__DisplayClass3_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TerrainMap___c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TerrainMap___c__DisplayClass3_0(TerrainMap___c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TerrainMap___c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TerrainMap___c__DisplayClass3_0(TerrainMap___c__DisplayClass3_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22397 };

  /// @brief Field groupID, offset: 0x10, size: 0x4, def value: None
  int32_t ___groupID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TerrainUtils::TerrainMap___c__DisplayClass3_0, ___groupID) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TerrainUtils::TerrainMap___c__DisplayClass3_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::TerrainUtils
// Dependencies System.Object, UnityEngine.TerrainUtils.TerrainMapStatusCode, UnityEngine.Vector3
namespace UnityEngine::TerrainUtils {
// Is value type: false
// CS Name: UnityEngine.TerrainUtils.TerrainMap
class CORDL_TYPE TerrainMap : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass3_0 = ::UnityEngine::TerrainUtils::TerrainMap___c__DisplayClass3_0;

  /// @brief Field m_errorCode, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_errorCode, put = __cordl_internal_set_m_errorCode)) ::UnityEngine::TerrainUtils::TerrainMapStatusCode m_errorCode;

  /// @brief Field m_patchSize, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get_m_patchSize, put = __cordl_internal_set_m_patchSize)) ::UnityEngine::Vector3 m_patchSize;

  /// @brief Field m_terrainTiles, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_terrainTiles,
      put = __cordl_internal_set_m_terrainTiles)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::TerrainUtils::TerrainTileCoord, ::UnityW<::UnityEngine::Terrain>>* m_terrainTiles;

  __declspec(property(get = get_terrainTiles)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::TerrainUtils::TerrainTileCoord, ::UnityW<::UnityEngine::Terrain>>* terrainTiles;

  /// @brief Method AddTerrainInternal, addr 0x69867b4, size 0x130, virtual false, abstract: false, final false
  inline void AddTerrainInternal(int32_t x, int32_t z, ::UnityEngine::Terrain* terrain);

  /// @brief Method CreateFromPlacement, addr 0x69860f0, size 0x3dc, virtual false, abstract: false, final false
  static inline ::UnityEngine::TerrainUtils::TerrainMap* CreateFromPlacement(::UnityEngine::Vector2 gridOrigin, ::UnityEngine::Vector2 gridSize,
                                                                             ::System::Predicate_1<::UnityW<::UnityEngine::Terrain>>* filter, bool fullValidation);

  /// @brief Method CreateFromPlacement, addr 0x6985ec0, size 0x22c, virtual false, abstract: false, final false
  static inline ::UnityEngine::TerrainUtils::TerrainMap* CreateFromPlacement(::UnityEngine::Terrain* originTerrain, ::System::Predicate_1<::UnityW<::UnityEngine::Terrain>>* filter,
                                                                             bool fullValidation);

  /// @brief Method GetTerrain, addr 0x6985e3c, size 0x84, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Terrain> GetTerrain(int32_t tileX, int32_t tileZ);

  static inline ::UnityEngine::TerrainUtils::TerrainMap* New_ctor();

  /// @brief Method TryToAddTerrain, addr 0x6986568, size 0x118, virtual false, abstract: false, final false
  inline bool TryToAddTerrain(int32_t tileX, int32_t tileZ, ::UnityEngine::Terrain* terrain);

  /// @brief Method Validate, addr 0x6986680, size 0x12c, virtual false, abstract: false, final false
  inline ::UnityEngine::TerrainUtils::TerrainMapStatusCode Validate();

  /// @brief Method ValidateTerrain, addr 0x69868e4, size 0x730, virtual false, abstract: false, final false
  inline void ValidateTerrain(int32_t tileX, int32_t tileZ);

  constexpr ::UnityEngine::TerrainUtils::TerrainMapStatusCode const& __cordl_internal_get_m_errorCode() const;

  constexpr ::UnityEngine::TerrainUtils::TerrainMapStatusCode& __cordl_internal_get_m_errorCode();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_patchSize() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_patchSize();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::TerrainUtils::TerrainTileCoord, ::UnityW<::UnityEngine::Terrain>>* const& __cordl_internal_get_m_terrainTiles() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::TerrainUtils::TerrainTileCoord, ::UnityW<::UnityEngine::Terrain>>*& __cordl_internal_get_m_terrainTiles();

  constexpr void __cordl_internal_set_m_errorCode(::UnityEngine::TerrainUtils::TerrainMapStatusCode value);

  constexpr void __cordl_internal_set_m_patchSize(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_terrainTiles(::System::Collections::Generic::Dictionary_2<::UnityEngine::TerrainUtils::TerrainTileCoord, ::UnityW<::UnityEngine::Terrain>>* value);

  /// @brief Method .ctor, addr 0x69864cc, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_terrainTiles, addr 0x69867ac, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::TerrainUtils::TerrainTileCoord, ::UnityW<::UnityEngine::Terrain>>* get_terrainTiles();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TerrainMap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TerrainMap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TerrainMap(TerrainMap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TerrainMap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TerrainMap(TerrainMap const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22398 };

  /// @brief Field m_patchSize, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_patchSize;

  /// @brief Field m_errorCode, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::TerrainUtils::TerrainMapStatusCode ___m_errorCode;

  /// @brief Field m_terrainTiles, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::TerrainUtils::TerrainTileCoord, ::UnityW<::UnityEngine::Terrain>>* ___m_terrainTiles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TerrainUtils::TerrainMap, ___m_patchSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TerrainUtils::TerrainMap, ___m_errorCode) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TerrainUtils::TerrainMap, ___m_terrainTiles) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TerrainUtils::TerrainMap, 0x28>, "Size mismatch!");

} // namespace UnityEngine::TerrainUtils
NEED_NO_BOX(::UnityEngine::TerrainUtils::TerrainMap);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainUtils::TerrainMap*, "UnityEngine.TerrainUtils", "TerrainMap");
NEED_NO_BOX(::UnityEngine::TerrainUtils::TerrainMap___c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainUtils::TerrainMap___c__DisplayClass3_0*, "UnityEngine.TerrainUtils", "TerrainMap/<>c__DisplayClass3_0");
