#pragma once
// IWYU pragma private; include "Zenject/PrefabProviderResource.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__PrefabProviderResource_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IPrefabProvider_def.hpp"
//  Writing Method size for method: ::Zenject::PrefabProviderResource._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::PrefabProviderResource::*)(::StringW)>(&::Zenject::PrefabProviderResource::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e85b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabProviderResource*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabProviderResource.GetPrefab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::Zenject::PrefabProviderResource::*)()>(&::Zenject::PrefabProviderResource::GetPrefab)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6e85b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabProviderResource*>(), { "GetPrefab", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& Zenject::PrefabProviderResource::__cordl_internal_get__resourcePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resourcePath;
}
constexpr ::StringW const& Zenject::PrefabProviderResource::__cordl_internal_get__resourcePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resourcePath;
}
constexpr void Zenject::PrefabProviderResource::__cordl_internal_set__resourcePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____resourcePath = value;
}
inline void Zenject::PrefabProviderResource::_ctor(::StringW resourcePath) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabProviderResource*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resourcePath);
}
inline ::UnityW<::UnityEngine::Object> Zenject::PrefabProviderResource::GetPrefab() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabProviderResource*>(), { "GetPrefab", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
inline ::Zenject::PrefabProviderResource* Zenject::PrefabProviderResource::New_ctor(::StringW resourcePath) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::PrefabProviderResource*>(resourcePath));
}
/// @brief Convert operator to "::Zenject::IPrefabProvider"
constexpr Zenject::PrefabProviderResource::operator ::Zenject::IPrefabProvider*() noexcept {
  return static_cast<::Zenject::IPrefabProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IPrefabProvider"
constexpr ::Zenject::IPrefabProvider* Zenject::PrefabProviderResource::i___Zenject__IPrefabProvider() noexcept {
  return static_cast<::Zenject::IPrefabProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Zenject::PrefabProviderResource::PrefabProviderResource() {}
