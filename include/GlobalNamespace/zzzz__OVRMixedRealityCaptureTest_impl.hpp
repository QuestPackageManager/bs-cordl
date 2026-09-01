#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRMixedRealityCaptureTest.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRMixedRealityCaptureTest_def.hpp"
#include "GlobalNamespace/zzzz__OVRMixedRealityCaptureTest_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRMixedRealityCaptureTest_CameraMode::OVRMixedRealityCaptureTest_CameraMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRMixedRealityCaptureTest_CameraMode::OVRMixedRealityCaptureTest_CameraMode() {}
constexpr ::GlobalNamespace::OVRMixedRealityCaptureTest_CameraMode GlobalNamespace::OVRMixedRealityCaptureTest_CameraMode::Normal{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRMixedRealityCaptureTest_CameraMode GlobalNamespace::OVRMixedRealityCaptureTest_CameraMode::OverrideFov{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRMixedRealityCaptureTest_CameraMode GlobalNamespace::OVRMixedRealityCaptureTest_CameraMode::ThirdPerson{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureTest.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureTest::*)()>(&::GlobalNamespace::OVRMixedRealityCaptureTest::Start)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5f03d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureTest*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureTest.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureTest::*)()>(&::GlobalNamespace::OVRMixedRealityCaptureTest::Initialize)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5f03df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureTest*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureTest.UpdateDefaultExternalCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureTest::*)()>(&::GlobalNamespace::OVRMixedRealityCaptureTest::UpdateDefaultExternalCamera)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x5f0400c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureTest*>(), { "UpdateDefaultExternalCamera", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureTest.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureTest::*)()>(&::GlobalNamespace::OVRMixedRealityCaptureTest::Update)> {
  constexpr static std::size_t size = 0x6e8;
  constexpr static std::size_t addrs = 0x5f04470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureTest*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureTest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureTest::*)()>(&::GlobalNamespace::OVRMixedRealityCaptureTest::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f04b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureTest*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::OVRMixedRealityCaptureTest::__cordl_internal_get_inited() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inited;
}
constexpr bool const& GlobalNamespace::OVRMixedRealityCaptureTest::__cordl_internal_get_inited() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inited;
}
constexpr void GlobalNamespace::OVRMixedRealityCaptureTest::__cordl_internal_set_inited(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inited = value;
}
constexpr ::GlobalNamespace::OVRMixedRealityCaptureTest_CameraMode& GlobalNamespace::OVRMixedRealityCaptureTest::__cordl_internal_get_currentMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentMode;
}
constexpr ::GlobalNamespace::OVRMixedRealityCaptureTest_CameraMode const& GlobalNamespace::OVRMixedRealityCaptureTest::__cordl_internal_get_currentMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentMode;
}
constexpr void GlobalNamespace::OVRMixedRealityCaptureTest::__cordl_internal_set_currentMode(::GlobalNamespace::OVRMixedRealityCaptureTest_CameraMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentMode = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::OVRMixedRealityCaptureTest::__cordl_internal_get_defaultExternalCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultExternalCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::OVRMixedRealityCaptureTest::__cordl_internal_get_defaultExternalCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultExternalCamera;
}
constexpr void GlobalNamespace::OVRMixedRealityCaptureTest::__cordl_internal_set_defaultExternalCamera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultExternalCamera = value;
}
constexpr ::GlobalNamespace::OVRPlugin_Fovf& GlobalNamespace::OVRMixedRealityCaptureTest::__cordl_internal_get_defaultFov() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultFov;
}
constexpr ::GlobalNamespace::OVRPlugin_Fovf const& GlobalNamespace::OVRMixedRealityCaptureTest::__cordl_internal_get_defaultFov() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultFov;
}
constexpr void GlobalNamespace::OVRMixedRealityCaptureTest::__cordl_internal_set_defaultFov(::GlobalNamespace::OVRPlugin_Fovf value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultFov = value;
}
inline void GlobalNamespace::OVRMixedRealityCaptureTest::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureTest*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMixedRealityCaptureTest::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureTest*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMixedRealityCaptureTest::UpdateDefaultExternalCamera() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureTest*>(), { "UpdateDefaultExternalCamera", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMixedRealityCaptureTest::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureTest*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMixedRealityCaptureTest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureTest*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRMixedRealityCaptureTest* GlobalNamespace::OVRMixedRealityCaptureTest::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRMixedRealityCaptureTest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRMixedRealityCaptureTest::OVRMixedRealityCaptureTest() {}
