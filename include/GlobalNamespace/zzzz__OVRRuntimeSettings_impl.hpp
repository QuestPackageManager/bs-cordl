#pragma once
#include "GlobalNamespace/zzzz__OVRManager_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__OVRRuntimeSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRRuntimeSettings.GetRuntimeSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::OVRRuntimeSettings> (*)()>(&::GlobalNamespace::OVRRuntimeSettings::GetRuntimeSettings)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x279d7f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRuntimeSettings*>::get(),
                                                                               "GetRuntimeSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRuntimeSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRRuntimeSettings::*)()>(&::GlobalNamespace::OVRRuntimeSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x279d908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRuntimeSettings*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__OVRManager__ColorSpace& GlobalNamespace::OVRRuntimeSettings::__cordl_internal_get_colorSpace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorSpace;
}
constexpr ::GlobalNamespace::__OVRManager__ColorSpace const& GlobalNamespace::OVRRuntimeSettings::__cordl_internal_get_colorSpace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorSpace;
}
constexpr void GlobalNamespace::OVRRuntimeSettings::__cordl_internal_set_colorSpace(::GlobalNamespace::__OVRManager__ColorSpace value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorSpace = value;
}
inline ::UnityW<::GlobalNamespace::OVRRuntimeSettings> GlobalNamespace::OVRRuntimeSettings::GetRuntimeSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRuntimeSettings*>::get(),
                                                                             "GetRuntimeSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OVRRuntimeSettings>, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRRuntimeSettings* GlobalNamespace::OVRRuntimeSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRRuntimeSettings*>());
}
inline void GlobalNamespace::OVRRuntimeSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRuntimeSettings*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRRuntimeSettings::OVRRuntimeSettings() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
