#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__PrefabProvider_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IPrefabProvider_def.hpp"
//  Writing Method size for method: ::Zenject::PrefabProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::PrefabProvider::*)(::UnityEngine::Object*)>(&::Zenject::PrefabProvider::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2f09c00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabProvider.GetPrefab
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Object> (::Zenject::PrefabProvider::*)()>(&::Zenject::PrefabProvider::GetPrefab)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f09c34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabProvider*>::get(), "GetPrefab",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Zenject::IPrefabProvider"
constexpr Zenject::PrefabProvider::operator ::Zenject::IPrefabProvider*() noexcept {
  return static_cast<::Zenject::IPrefabProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IPrefabProvider"
constexpr ::Zenject::IPrefabProvider* Zenject::PrefabProvider::i___Zenject__IPrefabProvider() noexcept {
  return static_cast<::Zenject::IPrefabProvider*>(static_cast<void*>(this));
}
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____prefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::PrefabProvider* Zenject::PrefabProvider::New_ctor(::UnityEngine::Object* prefab) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::PrefabProvider*>(prefab));
}
inline void Zenject::PrefabProvider::_ctor(::UnityEngine::Object* prefab) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefab);
}
inline ::UnityW<::UnityEngine::Object> Zenject::PrefabProvider::GetPrefab() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabProvider*>::get(), "GetPrefab",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::PrefabProvider::PrefabProvider() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
