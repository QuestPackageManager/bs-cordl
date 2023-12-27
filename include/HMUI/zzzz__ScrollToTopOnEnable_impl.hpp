#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__ScrollToTopOnEnable_def.hpp"
#include "HMUI/zzzz__ScrollView_def.hpp"
//  Writing Method size for method: ::HMUI::ScrollToTopOnEnable.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollToTopOnEnable::*)()>(&::HMUI::ScrollToTopOnEnable::OnEnable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2142df0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollToTopOnEnable*>::get(), "OnEnable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollToTopOnEnable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollToTopOnEnable::*)()>(&::HMUI::ScrollToTopOnEnable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2142ed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollToTopOnEnable*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::HMUI::ScrollView*& HMUI::ScrollToTopOnEnable::__get__scrollView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____scrollView;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ScrollView*> const& HMUI::ScrollToTopOnEnable::__get__scrollView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____scrollView;
}
constexpr void HMUI::ScrollToTopOnEnable::__set__scrollView(::HMUI::ScrollView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scrollView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HMUI::ScrollToTopOnEnable::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollToTopOnEnable*>::get(), "OnEnable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::ScrollToTopOnEnable* HMUI::ScrollToTopOnEnable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HMUI::ScrollToTopOnEnable*>());
}
inline void HMUI::ScrollToTopOnEnable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollToTopOnEnable*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::ScrollToTopOnEnable::ScrollToTopOnEnable() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
