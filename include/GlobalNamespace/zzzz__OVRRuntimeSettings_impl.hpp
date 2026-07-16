#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRRuntimeSettings.hpp"
#include "GlobalNamespace/zzzz__OVRHandSkeletonVersion_impl.hpp"
#include "GlobalNamespace/zzzz__OVRManager_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "GlobalNamespace/zzzz__OVRRuntimeAssetsBase_impl.hpp"
#include "GlobalNamespace/zzzz__OVRRuntimeSettings_def.hpp"
#include "GlobalNamespace/zzzz__OVRHandSkeletonVersion_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRRuntimeSettings.get_HandSkeletonVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRHandSkeletonVersion (::GlobalNamespace::OVRRuntimeSettings::*)()>(
    &::GlobalNamespace::OVRRuntimeSettings::get_HandSkeletonVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ebd47c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRuntimeSettings*>(), { "get_HandSkeletonVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRuntimeSettings.set_HandSkeletonVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRRuntimeSettings::*)(::GlobalNamespace::OVRHandSkeletonVersion)>(
    &::GlobalNamespace::OVRRuntimeSettings::set_HandSkeletonVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ebd484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRuntimeSettings*>(),
                                                                                           { "set_HandSkeletonVersion", {}, { ::i2c::type_of<::GlobalNamespace::OVRHandSkeletonVersion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRuntimeSettings.get_Instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::OVRRuntimeSettings> (*)()>(&::GlobalNamespace::OVRRuntimeSettings::get_Instance)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5ebd48c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRuntimeSettings*>(), { "get_Instance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRuntimeSettings.get_RequestsVisualFaceTracking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRRuntimeSettings::*)()>(&::GlobalNamespace::OVRRuntimeSettings::get_RequestsVisualFaceTracking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ebd6a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRuntimeSettings*>(), { "get_RequestsVisualFaceTracking", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRuntimeSettings.set_RequestsVisualFaceTracking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRRuntimeSettings::*)(bool)>(&::GlobalNamespace::OVRRuntimeSettings::set_RequestsVisualFaceTracking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ebd6ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRuntimeSettings*>(), { "set_RequestsVisualFaceTracking", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRuntimeSettings.get_RequestsAudioFaceTracking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRRuntimeSettings::*)()>(&::GlobalNamespace::OVRRuntimeSettings::get_RequestsAudioFaceTracking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ebd6b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRuntimeSettings*>(), { "get_RequestsAudioFaceTracking", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRuntimeSettings.set_RequestsAudioFaceTracking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRRuntimeSettings::*)(bool)>(&::GlobalNamespace::OVRRuntimeSettings::set_RequestsAudioFaceTracking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ebd6bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRuntimeSettings*>(), { "set_RequestsAudioFaceTracking", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRuntimeSettings.get_EnableFaceTrackingVisemesOutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRRuntimeSettings::*)()>(&::GlobalNamespace::OVRRuntimeSettings::get_EnableFaceTrackingVisemesOutput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ebd6c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRuntimeSettings*>(), { "get_EnableFaceTrackingVisemesOutput", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRuntimeSettings.set_EnableFaceTrackingVisemesOutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRRuntimeSettings::*)(bool)>(&::GlobalNamespace::OVRRuntimeSettings::set_EnableFaceTrackingVisemesOutput)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ebd6cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRuntimeSettings*>(), { "set_EnableFaceTrackingVisemesOutput", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRuntimeSettings.get_TelemetryProjectGuid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::OVRRuntimeSettings::*)()>(&::GlobalNamespace::OVRRuntimeSettings::get_TelemetryProjectGuid)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ebd73c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRuntimeSettings*>(), { "get_TelemetryProjectGuid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRuntimeSettings.get_BodyTrackingFidelity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2 (::GlobalNamespace::OVRRuntimeSettings::*)()>(
    &::GlobalNamespace::OVRRuntimeSettings::get_BodyTrackingFidelity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ebd780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRuntimeSettings*>(), { "get_BodyTrackingFidelity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRuntimeSettings.set_BodyTrackingFidelity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRRuntimeSettings::*)(::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2)>(
    &::GlobalNamespace::OVRRuntimeSettings::set_BodyTrackingFidelity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ebd788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRuntimeSettings*>(), { "set_BodyTrackingFidelity", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRuntimeSettings.get_BodyTrackingJointSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_BodyJointSet (::GlobalNamespace::OVRRuntimeSettings::*)()>(
    &::GlobalNamespace::OVRRuntimeSettings::get_BodyTrackingJointSet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ebd790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRuntimeSettings*>(), { "get_BodyTrackingJointSet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRuntimeSettings.set_BodyTrackingJointSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRRuntimeSettings::*)(::GlobalNamespace::OVRPlugin_BodyJointSet)>(
    &::GlobalNamespace::OVRRuntimeSettings::set_BodyTrackingJointSet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ebd798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRuntimeSettings*>(),
                                                                                           { "set_BodyTrackingJointSet", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_BodyJointSet>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRuntimeSettings.GetRuntimeSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::OVRRuntimeSettings> (*)()>(&::GlobalNamespace::OVRRuntimeSettings::GetRuntimeSettings)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5ebd530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRuntimeSettings*>(), { "GetRuntimeSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRuntimeSettings.HandleSettingsCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRRuntimeSettings*)>(&::GlobalNamespace::OVRRuntimeSettings::HandleSettingsCreated)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ebd7a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRuntimeSettings*>(), { "HandleSettingsCreated", {}, { ::i2c::type_of<::GlobalNamespace::OVRRuntimeSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRuntimeSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRRuntimeSettings::*)()>(&::GlobalNamespace::OVRRuntimeSettings::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ebd7a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRuntimeSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRHandSkeletonVersion& GlobalNamespace::OVRRuntimeSettings::__cordl_internal_get_handSkeletonVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handSkeletonVersion;
}
constexpr ::GlobalNamespace::OVRHandSkeletonVersion const& GlobalNamespace::OVRRuntimeSettings::__cordl_internal_get_handSkeletonVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handSkeletonVersion;
}
constexpr void GlobalNamespace::OVRRuntimeSettings::__cordl_internal_set_handSkeletonVersion(::GlobalNamespace::OVRHandSkeletonVersion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___handSkeletonVersion = value;
}
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
constexpr bool& GlobalNamespace::OVRRuntimeSettings::__cordl_internal_get_requestsVisualFaceTracking() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestsVisualFaceTracking;
}
constexpr bool const& GlobalNamespace::OVRRuntimeSettings::__cordl_internal_get_requestsVisualFaceTracking() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestsVisualFaceTracking;
}
constexpr void GlobalNamespace::OVRRuntimeSettings::__cordl_internal_set_requestsVisualFaceTracking(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requestsVisualFaceTracking = value;
}
constexpr bool& GlobalNamespace::OVRRuntimeSettings::__cordl_internal_get_requestsAudioFaceTracking() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestsAudioFaceTracking;
}
constexpr bool const& GlobalNamespace::OVRRuntimeSettings::__cordl_internal_get_requestsAudioFaceTracking() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestsAudioFaceTracking;
}
constexpr void GlobalNamespace::OVRRuntimeSettings::__cordl_internal_set_requestsAudioFaceTracking(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requestsAudioFaceTracking = value;
}
constexpr bool& GlobalNamespace::OVRRuntimeSettings::__cordl_internal_get_enableFaceTrackingVisemesOutput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableFaceTrackingVisemesOutput;
}
constexpr bool const& GlobalNamespace::OVRRuntimeSettings::__cordl_internal_get_enableFaceTrackingVisemesOutput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableFaceTrackingVisemesOutput;
}
constexpr void GlobalNamespace::OVRRuntimeSettings::__cordl_internal_set_enableFaceTrackingVisemesOutput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableFaceTrackingVisemesOutput = value;
}
constexpr ::StringW& GlobalNamespace::OVRRuntimeSettings::__cordl_internal_get_telemetryProjectGuid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___telemetryProjectGuid;
}
constexpr ::StringW const& GlobalNamespace::OVRRuntimeSettings::__cordl_internal_get_telemetryProjectGuid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___telemetryProjectGuid;
}
constexpr void GlobalNamespace::OVRRuntimeSettings::__cordl_internal_set_telemetryProjectGuid(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___telemetryProjectGuid = value;
}
constexpr ::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2& GlobalNamespace::OVRRuntimeSettings::__cordl_internal_get_bodyTrackingFidelity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bodyTrackingFidelity;
}
constexpr ::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2 const& GlobalNamespace::OVRRuntimeSettings::__cordl_internal_get_bodyTrackingFidelity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bodyTrackingFidelity;
}
constexpr void GlobalNamespace::OVRRuntimeSettings::__cordl_internal_set_bodyTrackingFidelity(::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bodyTrackingFidelity = value;
}
constexpr ::GlobalNamespace::OVRPlugin_BodyJointSet& GlobalNamespace::OVRRuntimeSettings::__cordl_internal_get_bodyTrackingJointSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bodyTrackingJointSet;
}
constexpr ::GlobalNamespace::OVRPlugin_BodyJointSet const& GlobalNamespace::OVRRuntimeSettings::__cordl_internal_get_bodyTrackingJointSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bodyTrackingJointSet;
}
constexpr void GlobalNamespace::OVRRuntimeSettings::__cordl_internal_set_bodyTrackingJointSet(::GlobalNamespace::OVRPlugin_BodyJointSet value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bodyTrackingJointSet = value;
}
inline void GlobalNamespace::OVRRuntimeSettings::setStaticF__instance(::UnityW<::GlobalNamespace::OVRRuntimeSettings> value) {
  ::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::OVRRuntimeSettings>, "_instance", ::GlobalNamespace::OVRRuntimeSettings*>(
      std::forward<::UnityW<::GlobalNamespace::OVRRuntimeSettings>>(value));
}
inline ::UnityW<::GlobalNamespace::OVRRuntimeSettings> GlobalNamespace::OVRRuntimeSettings::getStaticF__instance() {
  return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::OVRRuntimeSettings>, "_instance", ::GlobalNamespace::OVRRuntimeSettings*>();
}
inline void GlobalNamespace::OVRRuntimeSettings::setStaticF_NewProjectDefaultSkeletonVersion(::GlobalNamespace::OVRHandSkeletonVersion value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRHandSkeletonVersion, "NewProjectDefaultSkeletonVersion", ::GlobalNamespace::OVRRuntimeSettings*>(
      std::forward<::GlobalNamespace::OVRHandSkeletonVersion>(value));
}
inline ::GlobalNamespace::OVRHandSkeletonVersion GlobalNamespace::OVRRuntimeSettings::getStaticF_NewProjectDefaultSkeletonVersion() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRHandSkeletonVersion, "NewProjectDefaultSkeletonVersion", ::GlobalNamespace::OVRRuntimeSettings*>();
}
inline ::GlobalNamespace::OVRHandSkeletonVersion GlobalNamespace::OVRRuntimeSettings::get_HandSkeletonVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRuntimeSettings*>(), { "get_HandSkeletonVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRHandSkeletonVersion>(this, ___internal_method);
}
inline void GlobalNamespace::OVRRuntimeSettings::set_HandSkeletonVersion(::GlobalNamespace::OVRHandSkeletonVersion value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRuntimeSettings*>(), { "set_HandSkeletonVersion", {}, { ::i2c::type_of<::GlobalNamespace::OVRHandSkeletonVersion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::OVRRuntimeSettings> GlobalNamespace::OVRRuntimeSettings::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRuntimeSettings*>(), { "get_Instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OVRRuntimeSettings>>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRRuntimeSettings::get_RequestsVisualFaceTracking() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRuntimeSettings*>(), { "get_RequestsVisualFaceTracking", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRRuntimeSettings::set_RequestsVisualFaceTracking(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRuntimeSettings*>(), { "set_RequestsVisualFaceTracking", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRRuntimeSettings::get_RequestsAudioFaceTracking() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRuntimeSettings*>(), { "get_RequestsAudioFaceTracking", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRRuntimeSettings::set_RequestsAudioFaceTracking(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRuntimeSettings*>(), { "set_RequestsAudioFaceTracking", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRRuntimeSettings::get_EnableFaceTrackingVisemesOutput() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRuntimeSettings*>(), { "get_EnableFaceTrackingVisemesOutput", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRRuntimeSettings::set_EnableFaceTrackingVisemesOutput(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRuntimeSettings*>(), { "set_EnableFaceTrackingVisemesOutput", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::OVRRuntimeSettings::get_TelemetryProjectGuid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRuntimeSettings*>(), { "get_TelemetryProjectGuid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2 GlobalNamespace::OVRRuntimeSettings::get_BodyTrackingFidelity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRuntimeSettings*>(), { "get_BodyTrackingFidelity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2>(this, ___internal_method);
}
inline void GlobalNamespace::OVRRuntimeSettings::set_BodyTrackingFidelity(::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRuntimeSettings*>(), { "set_BodyTrackingFidelity", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRPlugin_BodyJointSet GlobalNamespace::OVRRuntimeSettings::get_BodyTrackingJointSet() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRuntimeSettings*>(), { "get_BodyTrackingJointSet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_BodyJointSet>(this, ___internal_method);
}
inline void GlobalNamespace::OVRRuntimeSettings::set_BodyTrackingJointSet(::GlobalNamespace::OVRPlugin_BodyJointSet value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRuntimeSettings*>(),
                                                                                         { "set_BodyTrackingJointSet", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_BodyJointSet>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::OVRRuntimeSettings> GlobalNamespace::OVRRuntimeSettings::GetRuntimeSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRuntimeSettings*>(), { "GetRuntimeSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OVRRuntimeSettings>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRRuntimeSettings::HandleSettingsCreated(::GlobalNamespace::OVRRuntimeSettings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRuntimeSettings*>(), { "HandleSettingsCreated", {}, { ::i2c::type_of<::GlobalNamespace::OVRRuntimeSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, settings);
}
inline void GlobalNamespace::OVRRuntimeSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRuntimeSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRRuntimeSettings* GlobalNamespace::OVRRuntimeSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRRuntimeSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRRuntimeSettings::OVRRuntimeSettings() {}
