#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CustomLevelLoader_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceT_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomLevelLoader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CustomLevelLoader::*)()>(&::GlobalNamespace::CustomLevelLoader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1265890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomLevelLoader*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*& GlobalNamespace::CustomLevelLoader::__cordl_internal_get__defaultEnvironmentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultEnvironmentInfo;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*> const&
GlobalNamespace::CustomLevelLoader::__cordl_internal_get__defaultEnvironmentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultEnvironmentInfo;
}
constexpr void
GlobalNamespace::CustomLevelLoader::__cordl_internal_set__defaultEnvironmentInfo(::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultEnvironmentInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*&
GlobalNamespace::CustomLevelLoader::__cordl_internal_get__defaultAllDirectionsEnvironmentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultAllDirectionsEnvironmentInfo;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*> const&
GlobalNamespace::CustomLevelLoader::__cordl_internal_get__defaultAllDirectionsEnvironmentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultAllDirectionsEnvironmentInfo;
}
constexpr void GlobalNamespace::CustomLevelLoader::__cordl_internal_set__defaultAllDirectionsEnvironmentInfo(
    ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultAllDirectionsEnvironmentInfo)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::CustomLevelLoader* GlobalNamespace::CustomLevelLoader::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CustomLevelLoader*>());
}
inline void GlobalNamespace::CustomLevelLoader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomLevelLoader*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomLevelLoader::CustomLevelLoader() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
