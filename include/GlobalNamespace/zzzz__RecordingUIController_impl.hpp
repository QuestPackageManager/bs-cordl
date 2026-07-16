#pragma once
// IWYU pragma private; include "GlobalNamespace/RecordingUIController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RecordingUIController_def.hpp"
#include "GlobalNamespace/zzzz__RecordingUIController_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RecordingUIController_InitData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecordingUIController_InitData::*)(bool)>(&::GlobalNamespace::RecordingUIController_InitData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59a700c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingUIController_InitData*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::RecordingUIController_InitData::__cordl_internal_get_recordingEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordingEnabled;
}
constexpr bool const& GlobalNamespace::RecordingUIController_InitData::__cordl_internal_get_recordingEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordingEnabled;
}
constexpr void GlobalNamespace::RecordingUIController_InitData::__cordl_internal_set_recordingEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recordingEnabled = value;
}
inline void GlobalNamespace::RecordingUIController_InitData::_ctor(bool recordingEnabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingUIController_InitData*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, recordingEnabled);
}
inline ::GlobalNamespace::RecordingUIController_InitData* GlobalNamespace::RecordingUIController_InitData::New_ctor(bool recordingEnabled) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RecordingUIController_InitData*>(recordingEnabled));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RecordingUIController_InitData::RecordingUIController_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::RecordingUIController.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecordingUIController::*)()>(&::GlobalNamespace::RecordingUIController::Init)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x59a6ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingUIController*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingUIController.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecordingUIController::*)()>(&::GlobalNamespace::RecordingUIController::Update)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x59a6f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingUIController*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingUIController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecordingUIController::*)()>(&::GlobalNamespace::RecordingUIController::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59a7000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingUIController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::RecordingUIController::__cordl_internal_get__circle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____circle;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::RecordingUIController::__cordl_internal_get__circle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____circle;
}
constexpr void GlobalNamespace::RecordingUIController::__cordl_internal_set__circle(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____circle = value;
}
constexpr float_t& GlobalNamespace::RecordingUIController::__cordl_internal_get__updateTimeSpan() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateTimeSpan;
}
constexpr float_t const& GlobalNamespace::RecordingUIController::__cordl_internal_get__updateTimeSpan() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateTimeSpan;
}
constexpr void GlobalNamespace::RecordingUIController::__cordl_internal_set__updateTimeSpan(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____updateTimeSpan = value;
}
constexpr ::GlobalNamespace::RecordingUIController_InitData*& GlobalNamespace::RecordingUIController::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::GlobalNamespace::RecordingUIController_InitData* const& GlobalNamespace::RecordingUIController::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::RecordingUIController::__cordl_internal_set__initData(::GlobalNamespace::RecordingUIController_InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initData = value;
}
constexpr float_t& GlobalNamespace::RecordingUIController::__cordl_internal_get__lastUpdateTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastUpdateTime;
}
constexpr float_t const& GlobalNamespace::RecordingUIController::__cordl_internal_get__lastUpdateTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastUpdateTime;
}
constexpr void GlobalNamespace::RecordingUIController::__cordl_internal_set__lastUpdateTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastUpdateTime = value;
}
inline void GlobalNamespace::RecordingUIController::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingUIController*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RecordingUIController::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingUIController*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RecordingUIController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingUIController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RecordingUIController* GlobalNamespace::RecordingUIController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RecordingUIController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RecordingUIController::RecordingUIController() {}
