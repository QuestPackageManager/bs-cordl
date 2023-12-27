#pragma once
#include "GlobalNamespace/zzzz__OVRInput_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRMonoscopic_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRMonoscopic.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRMonoscopic::*)()>(&::GlobalNamespace::OVRMonoscopic::Update)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x27b469c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMonoscopic*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMonoscopic._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRMonoscopic::*)()>(&::GlobalNamespace::OVRMonoscopic::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x27b478c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMonoscopic*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::OVRMonoscopic::__get_toggleButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___toggleButton;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::OVRMonoscopic::__get_toggleButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___toggleButton;
}
constexpr void GlobalNamespace::OVRMonoscopic::__set_toggleButton(::GlobalNamespace::__OVRInput__RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___toggleButton = value;
}
constexpr bool& GlobalNamespace::OVRMonoscopic::__get_monoscopic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___monoscopic;
}
constexpr bool const& GlobalNamespace::OVRMonoscopic::__get_monoscopic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___monoscopic;
}
constexpr void GlobalNamespace::OVRMonoscopic::__set_monoscopic(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___monoscopic = value;
}
inline void GlobalNamespace::OVRMonoscopic::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMonoscopic*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRMonoscopic* GlobalNamespace::OVRMonoscopic::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRMonoscopic*>());
}
inline void GlobalNamespace::OVRMonoscopic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMonoscopic*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRMonoscopic::OVRMonoscopic() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
