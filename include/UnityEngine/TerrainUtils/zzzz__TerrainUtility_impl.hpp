#pragma once
// IWYU pragma private; include "UnityEngine/TerrainUtils/TerrainUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TerrainUtils/zzzz__TerrainUtility_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/TerrainUtils/zzzz__TerrainMap_def.hpp"
#include "UnityEngine/TerrainUtils/zzzz__TerrainUtility_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
//  Writing Method size for method: ::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_0::*)()>(
    &::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bb85bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_0::__cordl_internal_get_onlyAutoConnectedTerrains() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onlyAutoConnectedTerrains;
}
constexpr bool const& UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_0::__cordl_internal_get_onlyAutoConnectedTerrains() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onlyAutoConnectedTerrains;
}
constexpr void UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_0::__cordl_internal_set_onlyAutoConnectedTerrains(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onlyAutoConnectedTerrains = value;
}
inline void UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_0* UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_0::TerrainUtility___c__DisplayClass2_0() {}
//  Writing Method size for method: ::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_1::*)()>(
    &::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bb85c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_1*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_1._CollectTerrains_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_1::*)(::UnityEngine::Terrain*)>(
    &::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_1::_CollectTerrains_b__0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6bb8920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_1*>(),
                                                                                           { "<CollectTerrains>b__0", {}, { ::i2c::type_of<::UnityEngine::Terrain*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Terrain>& UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_1::__cordl_internal_get_t() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr ::UnityW<::UnityEngine::Terrain> const& UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_1::__cordl_internal_get_t() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr void UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_1::__cordl_internal_set_t(::UnityW<::UnityEngine::Terrain> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___t = value;
}
constexpr ::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_0*& UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_1::__cordl_internal_get_CS$__8__locals1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr ::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_0* const& UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_1::__cordl_internal_get_CS$__8__locals1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr void UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_1::__cordl_internal_set_CS$__8__locals1(::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CS$__8__locals1 = value;
}
inline void UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_1*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_1::_CollectTerrains_b__0(::UnityEngine::Terrain* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_1*>(),
                                                                                         { "<CollectTerrains>b__0", {}, { ::i2c::type_of<::UnityEngine::Terrain*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_1* UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_1::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_1*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_1::TerrainUtility___c__DisplayClass2_1() {}
//  Writing Method size for method: ::UnityEngine::TerrainUtils::TerrainUtility.ValidTerrainsExist
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::TerrainUtils::TerrainUtility::ValidTerrainsExist)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6bb81fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainUtils::TerrainUtility*>(), { "ValidTerrainsExist", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainUtils::TerrainUtility.ClearConnectivity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::TerrainUtils::TerrainUtility::ClearConnectivity)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6bb825c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainUtils::TerrainUtility*>(), { "ClearConnectivity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainUtils::TerrainUtility.CollectTerrains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TerrainUtils::TerrainMap*>* (*)(bool)>(
    &::UnityEngine::TerrainUtils::TerrainUtility::CollectTerrains)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x6bb8300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainUtils::TerrainUtility*>(), { "CollectTerrains", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainUtils::TerrainUtility.AutoConnect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::TerrainUtils::TerrainUtility::AutoConnect)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x6bb85c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainUtils::TerrainUtility*>(), { "AutoConnect", {}, {} })));
    return ___internal_method;
  }
};
inline bool UnityEngine::TerrainUtils::TerrainUtility::ValidTerrainsExist() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainUtils::TerrainUtility*>(), { "ValidTerrainsExist", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::TerrainUtils::TerrainUtility::ClearConnectivity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainUtils::TerrainUtility*>(), { "ClearConnectivity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TerrainUtils::TerrainMap*>* UnityEngine::TerrainUtils::TerrainUtility::CollectTerrains(bool onlyAutoConnectedTerrains) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainUtils::TerrainUtility*>(), { "CollectTerrains", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TerrainUtils::TerrainMap*>*>(nullptr, ___internal_method, onlyAutoConnectedTerrains);
}
inline void UnityEngine::TerrainUtils::TerrainUtility::AutoConnect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainUtils::TerrainUtility*>(), { "AutoConnect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::TerrainUtils::TerrainUtility::TerrainUtility() {}
