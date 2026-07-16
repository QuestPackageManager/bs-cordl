#pragma once
// IWYU pragma private; include "UnityEngine/TerrainUtils/TerrainMap.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TerrainUtils/zzzz__TerrainMapStatusCode_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/TerrainUtils/zzzz__TerrainMap_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/TerrainUtils/zzzz__TerrainMapStatusCode_def.hpp"
#include "UnityEngine/TerrainUtils/zzzz__TerrainMap_def.hpp"
#include "UnityEngine/TerrainUtils/zzzz__TerrainTileCoord_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::TerrainUtils::TerrainMap___c__DisplayClass3_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TerrainUtils::TerrainMap___c__DisplayClass3_0::*)()>(
    &::UnityEngine::TerrainUtils::TerrainMap___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bb72a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainUtils::TerrainMap___c__DisplayClass3_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainUtils::TerrainMap___c__DisplayClass3_0._CreateFromPlacement_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TerrainUtils::TerrainMap___c__DisplayClass3_0::*)(::UnityEngine::Terrain*)>(
    &::UnityEngine::TerrainUtils::TerrainMap___c__DisplayClass3_0::_CreateFromPlacement_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6bb81d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainUtils::TerrainMap___c__DisplayClass3_0*>(),
                                                                                           { "<CreateFromPlacement>b__0", {}, { ::i2c::type_of<::UnityEngine::Terrain*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::TerrainUtils::TerrainMap___c__DisplayClass3_0::__cordl_internal_get_groupID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupID;
}
constexpr int32_t const& UnityEngine::TerrainUtils::TerrainMap___c__DisplayClass3_0::__cordl_internal_get_groupID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupID;
}
constexpr void UnityEngine::TerrainUtils::TerrainMap___c__DisplayClass3_0::__cordl_internal_set_groupID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___groupID = value;
}
inline void UnityEngine::TerrainUtils::TerrainMap___c__DisplayClass3_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainUtils::TerrainMap___c__DisplayClass3_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::TerrainUtils::TerrainMap___c__DisplayClass3_0::_CreateFromPlacement_b__0(::UnityEngine::Terrain* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainUtils::TerrainMap___c__DisplayClass3_0*>(),
                                                                                         { "<CreateFromPlacement>b__0", {}, { ::i2c::type_of<::UnityEngine::Terrain*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityEngine::TerrainUtils::TerrainMap___c__DisplayClass3_0* UnityEngine::TerrainUtils::TerrainMap___c__DisplayClass3_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TerrainUtils::TerrainMap___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::TerrainUtils::TerrainMap___c__DisplayClass3_0::TerrainMap___c__DisplayClass3_0() {}
//  Writing Method size for method: ::UnityEngine::TerrainUtils::TerrainMap.GetTerrain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Terrain> (::UnityEngine::TerrainUtils::TerrainMap::*)(int32_t, int32_t)>(
    &::UnityEngine::TerrainUtils::TerrainMap::GetTerrain)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6bb6ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainUtils::TerrainMap*>(), { "GetTerrain", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainUtils::TerrainMap.CreateFromPlacement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TerrainUtils::TerrainMap* (*)(::UnityEngine::Terrain*, ::System::Predicate_1<::UnityW<::UnityEngine::Terrain>>*, bool)>(
    &::UnityEngine::TerrainUtils::TerrainMap::CreateFromPlacement)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x6bb707c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::TerrainUtils::TerrainMap*>(),
            { "CreateFromPlacement", {}, { ::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Predicate_1<::UnityW<::UnityEngine::Terrain>>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainUtils::TerrainMap.CreateFromPlacement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::TerrainUtils::TerrainMap* (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Predicate_1<::UnityW<::UnityEngine::Terrain>>*, bool)>(
        &::UnityEngine::TerrainUtils::TerrainMap::CreateFromPlacement)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x6bb72ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainUtils::TerrainMap*>(), { "CreateFromPlacement",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                                             ::i2c::type_of<::System::Predicate_1<::UnityW<::UnityEngine::Terrain>>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainUtils::TerrainMap.get_terrainTiles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::UnityEngine::TerrainUtils::TerrainTileCoord, ::UnityW<::UnityEngine::Terrain>>* (
    ::UnityEngine::TerrainUtils::TerrainMap::*)()>(&::UnityEngine::TerrainUtils::TerrainMap::get_terrainTiles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb7968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainUtils::TerrainMap*>(), { "get_terrainTiles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainUtils::TerrainMap._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TerrainUtils::TerrainMap::*)()>(&::UnityEngine::TerrainUtils::TerrainMap::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6bb7688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainUtils::TerrainMap*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainUtils::TerrainMap.AddTerrainInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TerrainUtils::TerrainMap::*)(int32_t, int32_t, ::UnityEngine::Terrain*)>(
    &::UnityEngine::TerrainUtils::TerrainMap::AddTerrainInternal)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6bb7970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainUtils::TerrainMap*>(),
                                                             { "AddTerrainInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Terrain*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainUtils::TerrainMap.TryToAddTerrain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TerrainUtils::TerrainMap::*)(int32_t, int32_t, ::UnityEngine::Terrain*)>(
    &::UnityEngine::TerrainUtils::TerrainMap::TryToAddTerrain)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6bb7724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainUtils::TerrainMap*>(),
                                                             { "TryToAddTerrain", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Terrain*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainUtils::TerrainMap.ValidateTerrain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TerrainUtils::TerrainMap::*)(int32_t, int32_t)>(&::UnityEngine::TerrainUtils::TerrainMap::ValidateTerrain)> {
  constexpr static std::size_t size = 0x730;
  constexpr static std::size_t addrs = 0x6bb7aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainUtils::TerrainMap*>(), { "ValidateTerrain", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainUtils::TerrainMap.Validate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TerrainUtils::TerrainMapStatusCode (::UnityEngine::TerrainUtils::TerrainMap::*)()>(
    &::UnityEngine::TerrainUtils::TerrainMap::Validate)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6bb783c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainUtils::TerrainMap*>(), { "Validate", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& UnityEngine::TerrainUtils::TerrainMap::__cordl_internal_get_m_patchSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_patchSize;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::TerrainUtils::TerrainMap::__cordl_internal_get_m_patchSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_patchSize;
}
constexpr void UnityEngine::TerrainUtils::TerrainMap::__cordl_internal_set_m_patchSize(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_patchSize = value;
}
constexpr ::UnityEngine::TerrainUtils::TerrainMapStatusCode& UnityEngine::TerrainUtils::TerrainMap::__cordl_internal_get_m_errorCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_errorCode;
}
constexpr ::UnityEngine::TerrainUtils::TerrainMapStatusCode const& UnityEngine::TerrainUtils::TerrainMap::__cordl_internal_get_m_errorCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_errorCode;
}
constexpr void UnityEngine::TerrainUtils::TerrainMap::__cordl_internal_set_m_errorCode(::UnityEngine::TerrainUtils::TerrainMapStatusCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_errorCode = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::TerrainUtils::TerrainTileCoord, ::UnityW<::UnityEngine::Terrain>>*&
UnityEngine::TerrainUtils::TerrainMap::__cordl_internal_get_m_terrainTiles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_terrainTiles;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::TerrainUtils::TerrainTileCoord, ::UnityW<::UnityEngine::Terrain>>* const&
UnityEngine::TerrainUtils::TerrainMap::__cordl_internal_get_m_terrainTiles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_terrainTiles;
}
constexpr void UnityEngine::TerrainUtils::TerrainMap::__cordl_internal_set_m_terrainTiles(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::TerrainUtils::TerrainTileCoord, ::UnityW<::UnityEngine::Terrain>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_terrainTiles = value;
}
inline ::UnityW<::UnityEngine::Terrain> UnityEngine::TerrainUtils::TerrainMap::GetTerrain(int32_t tileX, int32_t tileZ) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainUtils::TerrainMap*>(), { "GetTerrain", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Terrain>>(this, ___internal_method, tileX, tileZ);
}
inline ::UnityEngine::TerrainUtils::TerrainMap* UnityEngine::TerrainUtils::TerrainMap::CreateFromPlacement(::UnityEngine::Terrain* originTerrain,
                                                                                                           ::System::Predicate_1<::UnityW<::UnityEngine::Terrain>>* filter, bool fullValidation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::TerrainUtils::TerrainMap*>(),
          { "CreateFromPlacement", {}, { ::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Predicate_1<::UnityW<::UnityEngine::Terrain>>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TerrainUtils::TerrainMap*>(nullptr, ___internal_method, originTerrain, filter, fullValidation);
}
inline ::UnityEngine::TerrainUtils::TerrainMap* UnityEngine::TerrainUtils::TerrainMap::CreateFromPlacement(::UnityEngine::Vector2 gridOrigin, ::UnityEngine::Vector2 gridSize,
                                                                                                           ::System::Predicate_1<::UnityW<::UnityEngine::Terrain>>* filter, bool fullValidation) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainUtils::TerrainMap*>(),
                                                                                         { "CreateFromPlacement",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                                             ::i2c::type_of<::System::Predicate_1<::UnityW<::UnityEngine::Terrain>>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TerrainUtils::TerrainMap*>(nullptr, ___internal_method, gridOrigin, gridSize, filter, fullValidation);
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::TerrainUtils::TerrainTileCoord, ::UnityW<::UnityEngine::Terrain>>* UnityEngine::TerrainUtils::TerrainMap::get_terrainTiles() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainUtils::TerrainMap*>(), { "get_terrainTiles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityEngine::TerrainUtils::TerrainTileCoord, ::UnityW<::UnityEngine::Terrain>>*>(this, ___internal_method);
}
inline void UnityEngine::TerrainUtils::TerrainMap::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainUtils::TerrainMap*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TerrainUtils::TerrainMap::AddTerrainInternal(int32_t x, int32_t z, ::UnityEngine::Terrain* terrain) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainUtils::TerrainMap*>(),
                                                           { "AddTerrainInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Terrain*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, z, terrain);
}
inline bool UnityEngine::TerrainUtils::TerrainMap::TryToAddTerrain(int32_t tileX, int32_t tileZ, ::UnityEngine::Terrain* terrain) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainUtils::TerrainMap*>(),
                                                           { "TryToAddTerrain", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Terrain*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tileX, tileZ, terrain);
}
inline void UnityEngine::TerrainUtils::TerrainMap::ValidateTerrain(int32_t tileX, int32_t tileZ) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainUtils::TerrainMap*>(), { "ValidateTerrain", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tileX, tileZ);
}
inline ::UnityEngine::TerrainUtils::TerrainMapStatusCode UnityEngine::TerrainUtils::TerrainMap::Validate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainUtils::TerrainMap*>(), { "Validate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TerrainUtils::TerrainMapStatusCode>(this, ___internal_method);
}
inline ::UnityEngine::TerrainUtils::TerrainMap* UnityEngine::TerrainUtils::TerrainMap::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TerrainUtils::TerrainMap*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::TerrainUtils::TerrainMap::TerrainMap() {}
