#pragma once
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
struct TerrainTileCoord;
}
namespace UnityEngine::TerrainUtils {
class __TerrainMap____c__DisplayClass3_0;
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
class __TerrainMap____c__DisplayClass3_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TerrainUtils::TerrainMap);
MARK_REF_PTR_T(::UnityEngine::TerrainUtils::__TerrainMap____c__DisplayClass3_0);
// Type: ::<>c__DisplayClass3_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::TerrainUtils {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15478))
// CS Name: ::TerrainMap::<>c__DisplayClass3_0*
class CORDL_TYPE __TerrainMap____c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field groupID, offset 0x10, size 0x4
  __declspec(property(get = __get_groupID, put = __set_groupID)) int32_t groupID;

  constexpr int32_t& __get_groupID();

  constexpr int32_t const& __get_groupID() const;

  constexpr void __set_groupID(int32_t value);

  static inline ::UnityEngine::TerrainUtils::__TerrainMap____c__DisplayClass3_0* New_ctor();

  /// @brief Method .ctor, addr 0x2d1ebac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <CreateFromPlacement>b__0, addr 0x2d1faf4, size 0x58, virtual false, abstract: false, final false
  inline bool _CreateFromPlacement_b__0(::UnityEngine::Terrain* x);

  // Ctor Parameters [CppParam { name: "", ty: "__TerrainMap____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TerrainMap____c__DisplayClass3_0(__TerrainMap____c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TerrainMap____c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TerrainMap____c__DisplayClass3_0(__TerrainMap____c__DisplayClass3_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TerrainMap____c__DisplayClass3_0();

public:
  /// @brief Field groupID, offset: 0x10, size: 0x4, def value: None
  int32_t ___groupID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TerrainUtils::__TerrainMap____c__DisplayClass3_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TerrainUtils::__TerrainMap____c__DisplayClass3_0, ___groupID) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::TerrainUtils
// Type: UnityEngine.TerrainUtils::TerrainMap
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::TerrainUtils {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(15476)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15479))
// CS Name: ::UnityEngine.TerrainUtils::TerrainMap*
class CORDL_TYPE TerrainMap : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass3_0 = ::UnityEngine::TerrainUtils::__TerrainMap____c__DisplayClass3_0;

  /// @brief Field m_patchSize, offset 0x10, size 0xc
  __declspec(property(get = __get_m_patchSize, put = __set_m_patchSize))::UnityEngine::Vector3 m_patchSize;

  /// @brief Field m_errorCode, offset 0x1c, size 0x4
  __declspec(property(get = __get_m_errorCode, put = __set_m_errorCode))::UnityEngine::TerrainUtils::TerrainMapStatusCode m_errorCode;

  /// @brief Field m_terrainTiles, offset 0x20, size 0x8
  __declspec(property(get = __get_m_terrainTiles,
                      put = __set_m_terrainTiles))::System::Collections::Generic::Dictionary_2<::UnityEngine::TerrainUtils::TerrainTileCoord, ::UnityEngine::Terrain*>* m_terrainTiles;

  __declspec(property(get = get_terrainTiles))::System::Collections::Generic::Dictionary_2<::UnityEngine::TerrainUtils::TerrainTileCoord, ::UnityEngine::Terrain*>* terrainTiles;

  constexpr ::UnityEngine::Vector3& __get_m_patchSize();

  constexpr ::UnityEngine::Vector3 const& __get_m_patchSize() const;

  constexpr void __set_m_patchSize(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::TerrainUtils::TerrainMapStatusCode& __get_m_errorCode();

  constexpr ::UnityEngine::TerrainUtils::TerrainMapStatusCode const& __get_m_errorCode() const;

  constexpr void __set_m_errorCode(::UnityEngine::TerrainUtils::TerrainMapStatusCode value);

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::TerrainUtils::TerrainTileCoord, ::UnityEngine::Terrain*>*& __get_m_terrainTiles();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::TerrainUtils::TerrainTileCoord, ::UnityEngine::Terrain*>*> const&
  __get_m_terrainTiles() const;

  constexpr void __set_m_terrainTiles(::System::Collections::Generic::Dictionary_2<::UnityEngine::TerrainUtils::TerrainTileCoord, ::UnityEngine::Terrain*>* value);

  /// @brief Method GetTerrain, addr 0x2d1e884, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::Terrain* GetTerrain(int32_t tileX, int32_t tileZ);

  /// @brief Method CreateFromPlacement, addr 0x2d1e8fc, size 0x2b0, virtual false, abstract: false, final false
  static inline ::UnityEngine::TerrainUtils::TerrainMap* CreateFromPlacement(::UnityEngine::Terrain* originTerrain, ::System::Predicate_1<::UnityEngine::Terrain*>* filter, bool fullValidation);

  /// @brief Method CreateFromPlacement, addr 0x2d1ebb4, size 0x3e0, virtual false, abstract: false, final false
  static inline ::UnityEngine::TerrainUtils::TerrainMap* CreateFromPlacement(::UnityEngine::Vector2 gridOrigin, ::UnityEngine::Vector2 gridSize, ::System::Predicate_1<::UnityEngine::Terrain*>* filter,
                                                                             bool fullValidation);

  /// @brief Method get_terrainTiles, addr 0x2d1f290, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::TerrainUtils::TerrainTileCoord, ::UnityEngine::Terrain*>* get_terrainTiles();

  static inline ::UnityEngine::TerrainUtils::TerrainMap* New_ctor();

  /// @brief Method .ctor, addr 0x2d1ef94, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method AddTerrainInternal, addr 0x2d1f298, size 0x128, virtual false, abstract: false, final false
  inline void AddTerrainInternal(int32_t x, int32_t z, ::UnityEngine::Terrain* terrain);

  /// @brief Method TryToAddTerrain, addr 0x2d1f018, size 0x114, virtual false, abstract: false, final false
  inline bool TryToAddTerrain(int32_t tileX, int32_t tileZ, ::UnityEngine::Terrain* terrain);

  /// @brief Method ValidateTerrain, addr 0x2d1f3c0, size 0x734, virtual false, abstract: false, final false
  inline void ValidateTerrain(int32_t tileX, int32_t tileZ);

  /// @brief Method Validate, addr 0x2d1f12c, size 0x164, virtual false, abstract: false, final false
  inline ::UnityEngine::TerrainUtils::TerrainMapStatusCode Validate();

  // Ctor Parameters [CppParam { name: "", ty: "TerrainMap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TerrainMap(TerrainMap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TerrainMap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TerrainMap(TerrainMap const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TerrainMap();

public:
  /// @brief Field m_patchSize, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_patchSize;

  /// @brief Field m_errorCode, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::TerrainUtils::TerrainMapStatusCode ___m_errorCode;

  /// @brief Field m_terrainTiles, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::TerrainUtils::TerrainTileCoord, ::UnityEngine::Terrain*>* ___m_terrainTiles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TerrainUtils::TerrainMap, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TerrainUtils::TerrainMap, ___m_patchSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TerrainUtils::TerrainMap, ___m_errorCode) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TerrainUtils::TerrainMap, ___m_terrainTiles) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::TerrainUtils
NEED_NO_BOX(::UnityEngine::TerrainUtils::TerrainMap);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainUtils::TerrainMap*, "UnityEngine.TerrainUtils", "TerrainMap");
NEED_NO_BOX(::UnityEngine::TerrainUtils::__TerrainMap____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainUtils::__TerrainMap____c__DisplayClass3_0*, "UnityEngine.TerrainUtils", "TerrainMap/<>c__DisplayClass3_0");
