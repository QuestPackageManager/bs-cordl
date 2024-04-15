#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__PrefabProviderResource_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IPrefabProvider_def.hpp"
//  Writing Method size for method: ::Zenject::PrefabProviderResource._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::PrefabProviderResource::*)(::StringW)>(&::Zenject::PrefabProviderResource::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3458b6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabProviderResource*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabProviderResource.GetPrefab
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Object> (::Zenject::PrefabProviderResource::*)()>(
    &::Zenject::PrefabProviderResource::GetPrefab)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3458b94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabProviderResource*>::get(), "GetPrefab",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Zenject::IPrefabProvider"
constexpr Zenject::PrefabProviderResource::operator ::Zenject::IPrefabProvider*() noexcept {
  return static_cast<::Zenject::IPrefabProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IPrefabProvider"
constexpr ::Zenject::IPrefabProvider* Zenject::PrefabProviderResource::i___Zenject__IPrefabProvider() noexcept {
  return static_cast<::Zenject::IPrefabProvider*>(static_cast<void*>(this));
}
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resourcePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::PrefabProviderResource* Zenject::PrefabProviderResource::New_ctor(::StringW resourcePath) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::PrefabProviderResource*>(resourcePath));
}
inline void Zenject::PrefabProviderResource::_ctor(::StringW resourcePath) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabProviderResource*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resourcePath);
}
inline ::UnityW<::UnityEngine::Object> Zenject::PrefabProviderResource::GetPrefab() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabProviderResource*>::get(), "GetPrefab",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::PrefabProviderResource::PrefabProviderResource() {}
