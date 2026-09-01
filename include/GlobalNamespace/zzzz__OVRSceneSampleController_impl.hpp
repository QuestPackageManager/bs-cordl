#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRSceneSampleController.hpp"
#include "UnityEngine/zzzz__KeyCode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSceneSampleController_def.hpp"
#include "GlobalNamespace/zzzz__OVRCameraRig_def.hpp"
#include "GlobalNamespace/zzzz__OVRGridCube_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlayerController_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRSceneSampleController.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneSampleController::*)()>(&::GlobalNamespace::OVRSceneSampleController::Awake)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5f0cdd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneSampleController*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneSampleController.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneSampleController::*)()>(&::GlobalNamespace::OVRSceneSampleController::Start)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5f0cfa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneSampleController*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneSampleController.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneSampleController::*)()>(&::GlobalNamespace::OVRSceneSampleController::Update)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5f0d0cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneSampleController*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneSampleController.UpdateVisionMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneSampleController::*)()>(&::GlobalNamespace::OVRSceneSampleController::UpdateVisionMode)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5f0d318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneSampleController*>(), { "UpdateVisionMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneSampleController.UpdateSpeedAndRotationScaleMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneSampleController::*)()>(&::GlobalNamespace::OVRSceneSampleController::UpdateSpeedAndRotationScaleMultiplier)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5f0d408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneSampleController*>(), { "UpdateSpeedAndRotationScaleMultiplier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneSampleController.UpdateRecenterPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneSampleController::*)()>(&::GlobalNamespace::OVRSceneSampleController::UpdateRecenterPose)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5f0d240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneSampleController*>(), { "UpdateRecenterPose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneSampleController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneSampleController::*)()>(&::GlobalNamespace::OVRSceneSampleController::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f0d520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneSampleController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::KeyCode& GlobalNamespace::OVRSceneSampleController::__cordl_internal_get_quitKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quitKey;
}
constexpr ::UnityEngine::KeyCode const& GlobalNamespace::OVRSceneSampleController::__cordl_internal_get_quitKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quitKey;
}
constexpr void GlobalNamespace::OVRSceneSampleController::__cordl_internal_set_quitKey(::UnityEngine::KeyCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___quitKey = value;
}
constexpr ::UnityW<::UnityEngine::Texture>& GlobalNamespace::OVRSceneSampleController::__cordl_internal_get_fadeInTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fadeInTexture;
}
constexpr ::UnityW<::UnityEngine::Texture> const& GlobalNamespace::OVRSceneSampleController::__cordl_internal_get_fadeInTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fadeInTexture;
}
constexpr void GlobalNamespace::OVRSceneSampleController::__cordl_internal_set_fadeInTexture(::UnityW<::UnityEngine::Texture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fadeInTexture = value;
}
constexpr float_t& GlobalNamespace::OVRSceneSampleController::__cordl_internal_get_speedRotationIncrement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___speedRotationIncrement;
}
constexpr float_t const& GlobalNamespace::OVRSceneSampleController::__cordl_internal_get_speedRotationIncrement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___speedRotationIncrement;
}
constexpr void GlobalNamespace::OVRSceneSampleController::__cordl_internal_set_speedRotationIncrement(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___speedRotationIncrement = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRPlayerController>& GlobalNamespace::OVRSceneSampleController::__cordl_internal_get_playerController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerController;
}
constexpr ::UnityW<::GlobalNamespace::OVRPlayerController> const& GlobalNamespace::OVRSceneSampleController::__cordl_internal_get_playerController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerController;
}
constexpr void GlobalNamespace::OVRSceneSampleController::__cordl_internal_set_playerController(::UnityW<::GlobalNamespace::OVRPlayerController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerController = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& GlobalNamespace::OVRSceneSampleController::__cordl_internal_get_cameraController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraController;
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& GlobalNamespace::OVRSceneSampleController::__cordl_internal_get_cameraController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraController;
}
constexpr void GlobalNamespace::OVRSceneSampleController::__cordl_internal_set_cameraController(::UnityW<::GlobalNamespace::OVRCameraRig> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraController = value;
}
constexpr ::StringW& GlobalNamespace::OVRSceneSampleController::__cordl_internal_get_layerName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerName;
}
constexpr ::StringW const& GlobalNamespace::OVRSceneSampleController::__cordl_internal_get_layerName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerName;
}
constexpr void GlobalNamespace::OVRSceneSampleController::__cordl_internal_set_layerName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___layerName = value;
}
constexpr bool& GlobalNamespace::OVRSceneSampleController::__cordl_internal_get_visionMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___visionMode;
}
constexpr bool const& GlobalNamespace::OVRSceneSampleController::__cordl_internal_get_visionMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___visionMode;
}
constexpr void GlobalNamespace::OVRSceneSampleController::__cordl_internal_set_visionMode(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___visionMode = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRGridCube>& GlobalNamespace::OVRSceneSampleController::__cordl_internal_get_gridCube() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gridCube;
}
constexpr ::UnityW<::GlobalNamespace::OVRGridCube> const& GlobalNamespace::OVRSceneSampleController::__cordl_internal_get_gridCube() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gridCube;
}
constexpr void GlobalNamespace::OVRSceneSampleController::__cordl_internal_set_gridCube(::UnityW<::GlobalNamespace::OVRGridCube> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gridCube = value;
}
inline void GlobalNamespace::OVRSceneSampleController::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneSampleController*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneSampleController::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneSampleController*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneSampleController::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneSampleController*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneSampleController::UpdateVisionMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneSampleController*>(), { "UpdateVisionMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneSampleController::UpdateSpeedAndRotationScaleMultiplier() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneSampleController*>(), { "UpdateSpeedAndRotationScaleMultiplier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneSampleController::UpdateRecenterPose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneSampleController*>(), { "UpdateRecenterPose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneSampleController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneSampleController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSceneSampleController* GlobalNamespace::OVRSceneSampleController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRSceneSampleController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneSampleController::OVRSceneSampleController() {}
