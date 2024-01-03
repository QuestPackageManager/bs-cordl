#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DisableIfNotPlatform_def.hpp"
#include "UnityEngine/zzzz__RuntimePlatform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DisableIfNotPlatform.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DisableIfNotPlatform::*)()>(&::GlobalNamespace::DisableIfNotPlatform::Awake)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x226c488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableIfNotPlatform*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DisableIfNotPlatform._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DisableIfNotPlatform::*)()>(&::GlobalNamespace::DisableIfNotPlatform::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226c520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableIfNotPlatform*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::RuntimePlatform, ::Array<::UnityEngine::RuntimePlatform>*>& GlobalNamespace::DisableIfNotPlatform::__get__whitelistPlatforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____whitelistPlatforms;
}
constexpr ::ArrayW<::UnityEngine::RuntimePlatform, ::Array<::UnityEngine::RuntimePlatform>*> const& GlobalNamespace::DisableIfNotPlatform::__get__whitelistPlatforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____whitelistPlatforms;
}
constexpr void GlobalNamespace::DisableIfNotPlatform::__set__whitelistPlatforms(::ArrayW<::UnityEngine::RuntimePlatform, ::Array<::UnityEngine::RuntimePlatform>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____whitelistPlatforms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::DisableIfNotPlatform::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableIfNotPlatform*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DisableIfNotPlatform* GlobalNamespace::DisableIfNotPlatform::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DisableIfNotPlatform*>());
}
inline void GlobalNamespace::DisableIfNotPlatform::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableIfNotPlatform*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DisableIfNotPlatform::DisableIfNotPlatform() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
