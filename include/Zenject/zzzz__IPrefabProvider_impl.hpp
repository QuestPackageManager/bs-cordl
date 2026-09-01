#pragma once
// IWYU pragma private; include "Zenject\IPrefabProvider.hpp"
#include "Zenject/zzzz__IPrefabProvider_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Zenject::IPrefabProvider.GetPrefab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::Zenject::IPrefabProvider::*)()>(&::Zenject::IPrefabProvider::GetPrefab)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::IPrefabProvider*>(), { ::i2c::class_of<::Zenject::IPrefabProvider*>(), 0 }));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Object> Zenject::IPrefabProvider::GetPrefab() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IPrefabProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
