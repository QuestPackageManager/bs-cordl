#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FadeOutInstantly_def.hpp"
#include "GlobalNamespace/zzzz__FadeInOutController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FadeOutInstantly.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FadeOutInstantly::*)()>(&::GlobalNamespace::FadeOutInstantly::Start)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2807840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FadeOutInstantly*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FadeOutInstantly._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FadeOutInstantly::*)()>(&::GlobalNamespace::FadeOutInstantly::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x280785c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FadeOutInstantly*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::FadeInOutController*& GlobalNamespace::FadeOutInstantly::__get__fadeInOut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____fadeInOut;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FadeInOutController*> const& GlobalNamespace::FadeOutInstantly::__get__fadeInOut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____fadeInOut;
}
constexpr void GlobalNamespace::FadeOutInstantly::__set__fadeInOut(::GlobalNamespace::FadeInOutController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fadeInOut)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::FadeOutInstantly::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FadeOutInstantly*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::FadeOutInstantly* GlobalNamespace::FadeOutInstantly::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FadeOutInstantly*>());
}
inline void GlobalNamespace::FadeOutInstantly::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FadeOutInstantly*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FadeOutInstantly::FadeOutInstantly() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
