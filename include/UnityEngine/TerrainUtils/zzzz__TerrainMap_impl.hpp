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
//  Writing Method size for method: ::UnityEngine::TerrainUtils::__TerrainMap____c__DisplayClass3_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TerrainUtils::__TerrainMap____c__DisplayClass3_0::*)()>(
    &::UnityEngine::TerrainUtils::__TerrainMap____c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48a3e54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::__TerrainMap____c__DisplayClass3_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainUtils::__TerrainMap____c__DisplayClass3_0._CreateFromPlacement_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TerrainUtils::__TerrainMap____c__DisplayClass3_0::*)(::UnityEngine::Terrain*)>(
    &::UnityEngine::TerrainUtils::__TerrainMap____c__DisplayClass3_0::_CreateFromPlacement_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x48a4dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::__TerrainMap____c__DisplayClass3_0*>::get(), "<CreateFromPlacement>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Terrain*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::TerrainUtils::__TerrainMap____c__DisplayClass3_0::__cordl_internal_get_groupID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupID;
}
constexpr int32_t const& UnityEngine::TerrainUtils::__TerrainMap____c__DisplayClass3_0::__cordl_internal_get_groupID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupID;
}
constexpr void UnityEngine::TerrainUtils::__TerrainMap____c__DisplayClass3_0::__cordl_internal_set_groupID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___groupID = value;
}
inline ::UnityEngine::TerrainUtils::__TerrainMap____c__DisplayClass3_0* UnityEngine::TerrainUtils::__TerrainMap____c__DisplayClass3_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::TerrainUtils::__TerrainMap____c__DisplayClass3_0*>());
}
inline void UnityEngine::TerrainUtils::__TerrainMap____c__DisplayClass3_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::__TerrainMap____c__DisplayClass3_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::TerrainUtils::__TerrainMap____c__DisplayClass3_0::_CreateFromPlacement_b__0(::UnityEngine::Terrain* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::__TerrainMap____c__DisplayClass3_0*>::get(), "<CreateFromPlacement>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Terrain*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::UnityEngine::TerrainUtils::__TerrainMap____c__DisplayClass3_0::__TerrainMap____c__DisplayClass3_0() {}
//  Writing Method size for method: ::UnityEngine::TerrainUtils::TerrainMap.GetTerrain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Terrain> (::UnityEngine::TerrainUtils::TerrainMap::*)(int32_t, int32_t)>(
    &::UnityEngine::TerrainUtils::TerrainMap::GetTerrain)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x48a3b30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::TerrainMap*>::get(), "GetTerrain", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainUtils::TerrainMap.CreateFromPlacement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::TerrainUtils::TerrainMap* (*)(::UnityEngine::Terrain*, ::System::Predicate_1<::UnityW<::UnityEngine::Terrain>>*, bool)>(
        &::UnityEngine::TerrainUtils::TerrainMap::CreateFromPlacement)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x48a3ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::TerrainMap*>::get(), "CreateFromPlacement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Terrain*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Predicate_1<::UnityW<::UnityEngine::Terrain>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainUtils::TerrainMap.CreateFromPlacement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::TerrainUtils::TerrainMap* (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Predicate_1<::UnityW<::UnityEngine::Terrain>>*, bool)>(
        &::UnityEngine::TerrainUtils::TerrainMap::CreateFromPlacement)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x48a3e5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::TerrainMap*>::get(), "CreateFromPlacement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Predicate_1<::UnityW<::UnityEngine::Terrain>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainUtils::TerrainMap.get_terrainTiles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::Dictionary_2<::UnityEngine::TerrainUtils::TerrainTileCoord, ::UnityW<::UnityEngine::Terrain>>* (::UnityEngine::TerrainUtils::TerrainMap::*)()>(
        &::UnityEngine::TerrainUtils::TerrainMap::get_terrainTiles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48a4540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::TerrainMap*>::get(),
                                                                               "get_terrainTiles", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainUtils::TerrainMap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TerrainUtils::TerrainMap::*)()>(&::UnityEngine::TerrainUtils::TerrainMap::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x48a4244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::TerrainMap*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainUtils::TerrainMap.AddTerrainInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TerrainUtils::TerrainMap::*)(int32_t, int32_t, ::UnityEngine::Terrain*)>(
    &::UnityEngine::TerrainUtils::TerrainMap::AddTerrainInternal)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x48a4548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::TerrainMap*>::get(), "AddTerrainInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Terrain*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainUtils::TerrainMap.TryToAddTerrain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TerrainUtils::TerrainMap::*)(int32_t, int32_t, ::UnityEngine::Terrain*)>(
    &::UnityEngine::TerrainUtils::TerrainMap::TryToAddTerrain)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x48a42c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::TerrainMap*>::get(), "TryToAddTerrain", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Terrain*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainUtils::TerrainMap.ValidateTerrain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TerrainUtils::TerrainMap::*)(int32_t, int32_t)>(
    &::UnityEngine::TerrainUtils::TerrainMap::ValidateTerrain)> {
  constexpr static std::size_t size = 0x77c;
  constexpr static std::size_t addrs = 0x48a4670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::TerrainMap*>::get(), "ValidateTerrain", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainUtils::TerrainMap.Validate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TerrainUtils::TerrainMapStatusCode (::UnityEngine::TerrainUtils::TerrainMap::*)()>(
    &::UnityEngine::TerrainUtils::TerrainMap::Validate)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x48a43dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::TerrainMap*>::get(), "Validate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::TerrainUtils::TerrainTileCoord, ::UnityW<::UnityEngine::Terrain>>*> const&
UnityEngine::TerrainUtils::TerrainMap::__cordl_internal_get_m_terrainTiles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_terrainTiles;
}
constexpr void UnityEngine::TerrainUtils::TerrainMap::__cordl_internal_set_m_terrainTiles(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::TerrainUtils::TerrainTileCoord, ::UnityW<::UnityEngine::Terrain>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_terrainTiles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::UnityEngine::Terrain> UnityEngine::TerrainUtils::TerrainMap::GetTerrain(int32_t tileX, int32_t tileZ) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::TerrainMap*>::get(), "GetTerrain", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Terrain>, false>(this, ___internal_method, tileX, tileZ);
}
/// @param filter: ::System::Predicate_1<::UnityW<::UnityEngine::Terrain>>* (default: nullptr)
/// @param fullValidation: bool (default: true)
inline ::UnityEngine::TerrainUtils::TerrainMap* UnityEngine::TerrainUtils::TerrainMap::CreateFromPlacement(::UnityEngine::Terrain* originTerrain,
                                                                                                           ::System::Predicate_1<::UnityW<::UnityEngine::Terrain>>* filter, bool fullValidation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::TerrainMap*>::get(), "CreateFromPlacement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Terrain*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Predicate_1<::UnityW<::UnityEngine::Terrain>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TerrainUtils::TerrainMap*, false>(nullptr, ___internal_method, originTerrain, filter, fullValidation);
}
/// @param filter: ::System::Predicate_1<::UnityW<::UnityEngine::Terrain>>* (default: nullptr)
/// @param fullValidation: bool (default: true)
inline ::UnityEngine::TerrainUtils::TerrainMap* UnityEngine::TerrainUtils::TerrainMap::CreateFromPlacement(::UnityEngine::Vector2 gridOrigin, ::UnityEngine::Vector2 gridSize,
                                                                                                           ::System::Predicate_1<::UnityW<::UnityEngine::Terrain>>* filter, bool fullValidation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::TerrainMap*>::get(), "CreateFromPlacement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Predicate_1<::UnityW<::UnityEngine::Terrain>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TerrainUtils::TerrainMap*, false>(nullptr, ___internal_method, gridOrigin, gridSize, filter, fullValidation);
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::TerrainUtils::TerrainTileCoord, ::UnityW<::UnityEngine::Terrain>>* UnityEngine::TerrainUtils::TerrainMap::get_terrainTiles() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::TerrainMap*>::get(),
                                                                             "get_terrainTiles", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityEngine::TerrainUtils::TerrainTileCoord, ::UnityW<::UnityEngine::Terrain>>*, false>(this,
                                                                                                                                                                                    ___internal_method);
}
inline ::UnityEngine::TerrainUtils::TerrainMap* UnityEngine::TerrainUtils::TerrainMap::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::TerrainUtils::TerrainMap*>());
}
inline void UnityEngine::TerrainUtils::TerrainMap::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::TerrainMap*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TerrainUtils::TerrainMap::AddTerrainInternal(int32_t x, int32_t z, ::UnityEngine::Terrain* terrain) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::TerrainMap*>::get(), "AddTerrainInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Terrain*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x, z, terrain);
}
inline bool UnityEngine::TerrainUtils::TerrainMap::TryToAddTerrain(int32_t tileX, int32_t tileZ, ::UnityEngine::Terrain* terrain) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::TerrainMap*>::get(), "TryToAddTerrain", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Terrain*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, tileX, tileZ, terrain);
}
inline void UnityEngine::TerrainUtils::TerrainMap::ValidateTerrain(int32_t tileX, int32_t tileZ) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::TerrainMap*>::get(), "ValidateTerrain", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tileX, tileZ);
}
inline ::UnityEngine::TerrainUtils::TerrainMapStatusCode UnityEngine::TerrainUtils::TerrainMap::Validate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::TerrainMap*>::get(), "Validate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TerrainUtils::TerrainMapStatusCode, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::TerrainUtils::TerrainMap::TerrainMap() {}
