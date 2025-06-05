#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRRuntimeSettings.hpp"
#include "GlobalNamespace/zzzz__OVRManager_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__OVRRuntimeSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRRuntimeSettings.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::OVRRuntimeSettings> (*)()>(&::GlobalNamespace::OVRRuntimeSettings::get_Instance)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x4006f7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRuntimeSettings*>::get(), "get_Instance",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRuntimeSettings.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRRuntimeSettings::*)()>(&::GlobalNamespace::OVRRuntimeSettings::OnEnable)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x400712c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRuntimeSettings*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRuntimeSettings.get_HasSetTelemetryEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRRuntimeSettings::*)()>(
    &::GlobalNamespace::OVRRuntimeSettings::get_HasSetTelemetryEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4007178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRuntimeSettings*>::get(),
                                                                               "get_HasSetTelemetryEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRuntimeSettings.get_TelemetryEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRRuntimeSettings::*)()>(&::GlobalNamespace::OVRRuntimeSettings::get_TelemetryEnabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4007180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRuntimeSettings*>::get(),
                                                                               "get_TelemetryEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRuntimeSettings.GetRuntimeSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::OVRRuntimeSettings> (*)()>(&::GlobalNamespace::OVRRuntimeSettings::GetRuntimeSettings)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x4007018;

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
  constexpr static std::size_t addrs = 0x40071a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRuntimeSettings*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRManager_ColorSpace& GlobalNamespace::OVRRuntimeSettings::__cordl_internal_get_colorSpace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorSpace;
}
constexpr ::GlobalNamespace::OVRManager_ColorSpace const& GlobalNamespace::OVRRuntimeSettings::__cordl_internal_get_colorSpace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorSpace;
}
constexpr void GlobalNamespace::OVRRuntimeSettings::__cordl_internal_set_colorSpace(::GlobalNamespace::OVRManager_ColorSpace value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorSpace = value;
}
constexpr bool& GlobalNamespace::OVRRuntimeSettings::__cordl_internal_get_hasSentConsentEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasSentConsentEvent;
}
constexpr bool const& GlobalNamespace::OVRRuntimeSettings::__cordl_internal_get_hasSentConsentEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasSentConsentEvent;
}
constexpr void GlobalNamespace::OVRRuntimeSettings::__cordl_internal_set_hasSentConsentEvent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasSentConsentEvent = value;
}
constexpr bool& GlobalNamespace::OVRRuntimeSettings::__cordl_internal_get_hasSetTelemetryEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasSetTelemetryEnabled;
}
constexpr bool const& GlobalNamespace::OVRRuntimeSettings::__cordl_internal_get_hasSetTelemetryEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasSetTelemetryEnabled;
}
constexpr void GlobalNamespace::OVRRuntimeSettings::__cordl_internal_set_hasSetTelemetryEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasSetTelemetryEnabled = value;
}
constexpr bool& GlobalNamespace::OVRRuntimeSettings::__cordl_internal_get_telemetryEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___telemetryEnabled;
}
constexpr bool const& GlobalNamespace::OVRRuntimeSettings::__cordl_internal_get_telemetryEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___telemetryEnabled;
}
constexpr void GlobalNamespace::OVRRuntimeSettings::__cordl_internal_set_telemetryEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___telemetryEnabled = value;
}
inline void GlobalNamespace::OVRRuntimeSettings::setStaticF__instance(::UnityW<::GlobalNamespace::OVRRuntimeSettings> value) {
  ::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::OVRRuntimeSettings>, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRuntimeSettings*>::get>(
      std::forward<::UnityW<::GlobalNamespace::OVRRuntimeSettings>>(value));
}
inline ::UnityW<::GlobalNamespace::OVRRuntimeSettings> GlobalNamespace::OVRRuntimeSettings::getStaticF__instance() {
  return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::OVRRuntimeSettings>, "_instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRuntimeSettings*>::get>();
}
inline ::UnityW<::GlobalNamespace::OVRRuntimeSettings> GlobalNamespace::OVRRuntimeSettings::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRuntimeSettings*>::get(), "get_Instance",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OVRRuntimeSettings>, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRRuntimeSettings::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRuntimeSettings*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRRuntimeSettings::get_HasSetTelemetryEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRuntimeSettings*>::get(),
                                                                             "get_HasSetTelemetryEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRRuntimeSettings::get_TelemetryEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRuntimeSettings*>::get(),
                                                                             "get_TelemetryEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::OVRRuntimeSettings> GlobalNamespace::OVRRuntimeSettings::GetRuntimeSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRuntimeSettings*>::get(),
                                                                             "GetRuntimeSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OVRRuntimeSettings>, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRRuntimeSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRuntimeSettings*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRRuntimeSettings* GlobalNamespace::OVRRuntimeSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRRuntimeSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRRuntimeSettings::OVRRuntimeSettings() {}
