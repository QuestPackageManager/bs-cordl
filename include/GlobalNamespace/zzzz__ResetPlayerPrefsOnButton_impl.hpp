#pragma once
#include "UnityEngine/zzzz__KeyCode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ResetPlayerPrefsOnButton_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ResetPlayerPrefsOnButton.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ResetPlayerPrefsOnButton::*)()>(&::GlobalNamespace::ResetPlayerPrefsOnButton::Update)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1f9873c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetPlayerPrefsOnButton*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResetPlayerPrefsOnButton._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ResetPlayerPrefsOnButton::*)()>(&::GlobalNamespace::ResetPlayerPrefsOnButton::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1f98764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetPlayerPrefsOnButton*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::KeyCode& GlobalNamespace::ResetPlayerPrefsOnButton::__get__keyCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyCode;
}
constexpr ::UnityEngine::KeyCode const& GlobalNamespace::ResetPlayerPrefsOnButton::__get__keyCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyCode;
}
constexpr void GlobalNamespace::ResetPlayerPrefsOnButton::__set__keyCode(::UnityEngine::KeyCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____keyCode = value;
}
inline void GlobalNamespace::ResetPlayerPrefsOnButton::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetPlayerPrefsOnButton*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ResetPlayerPrefsOnButton* GlobalNamespace::ResetPlayerPrefsOnButton::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ResetPlayerPrefsOnButton*>());
}
inline void GlobalNamespace::ResetPlayerPrefsOnButton::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetPlayerPrefsOnButton*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ResetPlayerPrefsOnButton::ResetPlayerPrefsOnButton() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
