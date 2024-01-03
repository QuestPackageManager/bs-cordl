#pragma once
#include "GlobalNamespace/zzzz__OVRManager_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__OVRRuntimeSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRRuntimeSettings.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRRuntimeSettings* (*)()>(&::GlobalNamespace::OVRRuntimeSettings::get_Instance)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x277f4c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRuntimeSettings*>::get(), "get_Instance",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRuntimeSettings.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRRuntimeSettings::*)()>(&::GlobalNamespace::OVRRuntimeSettings::OnEnable)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x277f670;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRuntimeSettings*>::get(), "OnEnable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRuntimeSettings.get_HasSetTelemetryEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRRuntimeSettings::*)()>(
    &::GlobalNamespace::OVRRuntimeSettings::get_HasSetTelemetryEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x277f6bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRuntimeSettings*>::get(),
                                                                               "get_HasSetTelemetryEnabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRuntimeSettings.get_TelemetryEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRRuntimeSettings::*)()>(&::GlobalNamespace::OVRRuntimeSettings::get_TelemetryEnabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x277f6c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRuntimeSettings*>::get(),
                                                                               "get_TelemetryEnabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRuntimeSettings.GetRuntimeSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRRuntimeSettings* (*)()>(&::GlobalNamespace::OVRRuntimeSettings::GetRuntimeSettings)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x277f55c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRuntimeSettings*>::get(),
                                                                               "GetRuntimeSettings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRuntimeSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRRuntimeSettings::*)()>(&::GlobalNamespace::OVRRuntimeSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x277f6e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRuntimeSettings*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__OVRManager__ColorSpace& GlobalNamespace::OVRRuntimeSettings::__get_colorSpace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorSpace;
}
constexpr ::GlobalNamespace::__OVRManager__ColorSpace const& GlobalNamespace::OVRRuntimeSettings::__get_colorSpace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorSpace;
}
constexpr void GlobalNamespace::OVRRuntimeSettings::__set_colorSpace(::GlobalNamespace::__OVRManager__ColorSpace value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorSpace = value;
}
constexpr bool& GlobalNamespace::OVRRuntimeSettings::__get_hasSentConsentEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasSentConsentEvent;
}
constexpr bool const& GlobalNamespace::OVRRuntimeSettings::__get_hasSentConsentEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasSentConsentEvent;
}
constexpr void GlobalNamespace::OVRRuntimeSettings::__set_hasSentConsentEvent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasSentConsentEvent = value;
}
constexpr bool& GlobalNamespace::OVRRuntimeSettings::__get_hasSetTelemetryEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasSetTelemetryEnabled;
}
constexpr bool const& GlobalNamespace::OVRRuntimeSettings::__get_hasSetTelemetryEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasSetTelemetryEnabled;
}
constexpr void GlobalNamespace::OVRRuntimeSettings::__set_hasSetTelemetryEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasSetTelemetryEnabled = value;
}
constexpr bool& GlobalNamespace::OVRRuntimeSettings::__get_telemetryEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___telemetryEnabled;
}
constexpr bool const& GlobalNamespace::OVRRuntimeSettings::__get_telemetryEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___telemetryEnabled;
}
constexpr void GlobalNamespace::OVRRuntimeSettings::__set_telemetryEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___telemetryEnabled = value;
}
inline void GlobalNamespace::OVRRuntimeSettings::setStaticF__instance(::GlobalNamespace::OVRRuntimeSettings* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRRuntimeSettings*, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRuntimeSettings*>::get>(
      std::forward<::GlobalNamespace::OVRRuntimeSettings*>(value));
}
inline ::GlobalNamespace::OVRRuntimeSettings* GlobalNamespace::OVRRuntimeSettings::getStaticF__instance() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRRuntimeSettings*, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRuntimeSettings*>::get>();
}
inline ::GlobalNamespace::OVRRuntimeSettings* GlobalNamespace::OVRRuntimeSettings::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRuntimeSettings*>::get(), "get_Instance",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRRuntimeSettings*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRRuntimeSettings::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRuntimeSettings*>::get(), "OnEnable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRRuntimeSettings::get_HasSetTelemetryEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRuntimeSettings*>::get(),
                                                                             "get_HasSetTelemetryEnabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRRuntimeSettings::get_TelemetryEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRuntimeSettings*>::get(),
                                                                             "get_TelemetryEnabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRRuntimeSettings* GlobalNamespace::OVRRuntimeSettings::GetRuntimeSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRuntimeSettings*>::get(),
                                                                             "GetRuntimeSettings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRRuntimeSettings*, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRRuntimeSettings* GlobalNamespace::OVRRuntimeSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRRuntimeSettings*>());
}
inline void GlobalNamespace::OVRRuntimeSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRuntimeSettings*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRRuntimeSettings::OVRRuntimeSettings() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
