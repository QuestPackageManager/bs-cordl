#pragma once
// IWYU pragma private; include "Zenject\PrefabProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__PrefabProvider_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IPrefabProvider_def.hpp"
//  Writing Method size for method: ::Zenject::PrefabProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::PrefabProvider::*)(::UnityEngine::Object*)>(&::Zenject::PrefabProvider::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6e890c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabProvider*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabProvider.GetPrefab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::Zenject::PrefabProvider::*)()>(&::Zenject::PrefabProvider::GetPrefab)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e890f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabProvider*>(), { "GetPrefab", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Zenject::PrefabProvider::__cordl_internal_get__prefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefab;
}
constexpr ::UnityW<::UnityEngine::Object> const& Zenject::PrefabProvider::__cordl_internal_get__prefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefab;
}
constexpr void Zenject::PrefabProvider::__cordl_internal_set__prefab(::UnityW<::UnityEngine::Object> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prefab = value;
}
inline void Zenject::PrefabProvider::_ctor(::UnityEngine::Object* prefab) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabProvider*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefab);
}
inline ::UnityW<::UnityEngine::Object> Zenject::PrefabProvider::GetPrefab() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabProvider*>(), { "GetPrefab", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
inline ::Zenject::PrefabProvider* Zenject::PrefabProvider::New_ctor(::UnityEngine::Object* prefab) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::PrefabProvider*>(prefab));
}
/// @brief Convert operator to "::Zenject::IPrefabProvider"
constexpr Zenject::PrefabProvider::operator ::Zenject::IPrefabProvider*() noexcept {
  return static_cast<::Zenject::IPrefabProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IPrefabProvider"
constexpr ::Zenject::IPrefabProvider* Zenject::PrefabProvider::i___Zenject__IPrefabProvider() noexcept {
  return static_cast<::Zenject::IPrefabProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Zenject::PrefabProvider::PrefabProvider() {}
