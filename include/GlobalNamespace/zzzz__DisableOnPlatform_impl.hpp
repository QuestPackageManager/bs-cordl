#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DisableOnPlatform_def.hpp"
#include "UnityEngine/zzzz__RuntimePlatform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DisableOnPlatform.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DisableOnPlatform::*)()>(&::GlobalNamespace::DisableOnPlatform::Awake)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x226c564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableOnPlatform*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DisableOnPlatform._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DisableOnPlatform::*)()>(&::GlobalNamespace::DisableOnPlatform::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226c5fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableOnPlatform*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::RuntimePlatform, ::Array<::UnityEngine::RuntimePlatform>*>& GlobalNamespace::DisableOnPlatform::__get__disabledPlatforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledPlatforms;
}
constexpr ::ArrayW<::UnityEngine::RuntimePlatform, ::Array<::UnityEngine::RuntimePlatform>*> const& GlobalNamespace::DisableOnPlatform::__get__disabledPlatforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledPlatforms;
}
constexpr void GlobalNamespace::DisableOnPlatform::__set__disabledPlatforms(::ArrayW<::UnityEngine::RuntimePlatform, ::Array<::UnityEngine::RuntimePlatform>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____disabledPlatforms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::DisableOnPlatform::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableOnPlatform*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DisableOnPlatform* GlobalNamespace::DisableOnPlatform::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DisableOnPlatform*>());
}
inline void GlobalNamespace::DisableOnPlatform::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableOnPlatform*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DisableOnPlatform::DisableOnPlatform() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
