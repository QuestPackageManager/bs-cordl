#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DisableComponentOnNonSteam_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DisableComponentOnNonSteam.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DisableComponentOnNonSteam::*)()>(&::GlobalNamespace::DisableComponentOnNonSteam::Awake)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x226c460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableComponentOnNonSteam*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DisableComponentOnNonSteam._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DisableComponentOnNonSteam::*)()>(&::GlobalNamespace::DisableComponentOnNonSteam::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226c480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableComponentOnNonSteam*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::MonoBehaviour*& GlobalNamespace::DisableComponentOnNonSteam::__get__component() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____component;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MonoBehaviour*> const& GlobalNamespace::DisableComponentOnNonSteam::__get__component() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____component;
}
constexpr void GlobalNamespace::DisableComponentOnNonSteam::__set__component(::UnityEngine::MonoBehaviour* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____component)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::DisableComponentOnNonSteam::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableComponentOnNonSteam*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DisableComponentOnNonSteam* GlobalNamespace::DisableComponentOnNonSteam::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DisableComponentOnNonSteam*>());
}
inline void GlobalNamespace::DisableComponentOnNonSteam::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableComponentOnNonSteam*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DisableComponentOnNonSteam::DisableComponentOnNonSteam() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
