#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMonoscopic.hpp"
#include "GlobalNamespace/zzzz__OVRInput_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRMonoscopic_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRMonoscopic.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRMonoscopic::*)()>(&::GlobalNamespace::OVRMonoscopic::Update)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x403cbb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMonoscopic*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMonoscopic._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRMonoscopic::*)()>(&::GlobalNamespace::OVRMonoscopic::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x403cca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMonoscopic*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRMonoscopic::__cordl_internal_get_toggleButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toggleButton;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRMonoscopic::__cordl_internal_get_toggleButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toggleButton;
}
constexpr void GlobalNamespace::OVRMonoscopic::__cordl_internal_set_toggleButton(::GlobalNamespace::OVRInput_RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___toggleButton = value;
}
constexpr bool& GlobalNamespace::OVRMonoscopic::__cordl_internal_get_monoscopic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___monoscopic;
}
constexpr bool const& GlobalNamespace::OVRMonoscopic::__cordl_internal_get_monoscopic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___monoscopic;
}
constexpr void GlobalNamespace::OVRMonoscopic::__cordl_internal_set_monoscopic(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___monoscopic = value;
}
inline void GlobalNamespace::OVRMonoscopic::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMonoscopic*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMonoscopic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMonoscopic*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRMonoscopic* GlobalNamespace::OVRMonoscopic::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRMonoscopic*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRMonoscopic::OVRMonoscopic() {}
