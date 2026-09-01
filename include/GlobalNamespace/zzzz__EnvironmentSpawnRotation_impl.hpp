#pragma once
// IWYU pragma private; include "GlobalNamespace\EnvironmentSpawnRotation.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentSpawnRotation_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectData_def.hpp"
#include "GlobalNamespace/zzzz__TimeHelper_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnvironmentSpawnRotation.get_targetRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::EnvironmentSpawnRotation::*)()>(&::GlobalNamespace::EnvironmentSpawnRotation::get_targetRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59a49ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentSpawnRotation*>(), { "get_targetRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentSpawnRotation.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnvironmentSpawnRotation::*)()>(&::GlobalNamespace::EnvironmentSpawnRotation::OnEnable)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x59a49b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentSpawnRotation*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentSpawnRotation.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnvironmentSpawnRotation::*)()>(&::GlobalNamespace::EnvironmentSpawnRotation::OnDisable)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x59a4a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentSpawnRotation*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentSpawnRotation.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnvironmentSpawnRotation::*)()>(&::GlobalNamespace::EnvironmentSpawnRotation::Start)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x59a4a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentSpawnRotation*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentSpawnRotation.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnvironmentSpawnRotation::*)()>(&::GlobalNamespace::EnvironmentSpawnRotation::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59a4c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentSpawnRotation*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentSpawnRotation.HandleSpawnRotationBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnvironmentSpawnRotation::*)(::GlobalNamespace::BeatmapObjectData*)>(
    &::GlobalNamespace::EnvironmentSpawnRotation::HandleSpawnRotationBeatmapEvent)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x59a4c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentSpawnRotation*>(),
                                                                                           { "HandleSpawnRotationBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapObjectData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentSpawnRotation.FixedUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnvironmentSpawnRotation::*)()>(&::GlobalNamespace::EnvironmentSpawnRotation::FixedUpdate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x59a4d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentSpawnRotation*>(), { "FixedUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentSpawnRotation.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnvironmentSpawnRotation::*)()>(&::GlobalNamespace::EnvironmentSpawnRotation::LateUpdate)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x59a4d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentSpawnRotation*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentSpawnRotation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnvironmentSpawnRotation::*)()>(&::GlobalNamespace::EnvironmentSpawnRotation::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59a4ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentSpawnRotation*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::EnvironmentSpawnRotation::__cordl_internal_get__aheadTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____aheadTime;
}
constexpr float_t const& GlobalNamespace::EnvironmentSpawnRotation::__cordl_internal_get__aheadTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____aheadTime;
}
constexpr void GlobalNamespace::EnvironmentSpawnRotation::__cordl_internal_set__aheadTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____aheadTime = value;
}
constexpr float_t& GlobalNamespace::EnvironmentSpawnRotation::__cordl_internal_get__smooth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smooth;
}
constexpr float_t const& GlobalNamespace::EnvironmentSpawnRotation::__cordl_internal_get__smooth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smooth;
}
constexpr void GlobalNamespace::EnvironmentSpawnRotation::__cordl_internal_set__smooth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____smooth = value;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::EnvironmentSpawnRotation::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::EnvironmentSpawnRotation::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::EnvironmentSpawnRotation::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCallbacksController = value;
}
constexpr ::UnityW<::GlobalNamespace::TimeHelper>& GlobalNamespace::EnvironmentSpawnRotation::__cordl_internal_get__timeHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeHelper;
}
constexpr ::UnityW<::GlobalNamespace::TimeHelper> const& GlobalNamespace::EnvironmentSpawnRotation::__cordl_internal_get__timeHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeHelper;
}
constexpr void GlobalNamespace::EnvironmentSpawnRotation::__cordl_internal_set__timeHelper(::UnityW<::GlobalNamespace::TimeHelper> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeHelper = value;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::EnvironmentSpawnRotation::__cordl_internal_get__beatmapDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& GlobalNamespace::EnvironmentSpawnRotation::__cordl_internal_get__beatmapDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr void GlobalNamespace::EnvironmentSpawnRotation::__cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapDataCallbackWrapper = value;
}
constexpr float_t& GlobalNamespace::EnvironmentSpawnRotation::__cordl_internal_get__currentRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentRotation;
}
constexpr float_t const& GlobalNamespace::EnvironmentSpawnRotation::__cordl_internal_get__currentRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentRotation;
}
constexpr void GlobalNamespace::EnvironmentSpawnRotation::__cordl_internal_set__currentRotation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentRotation = value;
}
constexpr float_t& GlobalNamespace::EnvironmentSpawnRotation::__cordl_internal_get__prevRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevRotation;
}
constexpr float_t const& GlobalNamespace::EnvironmentSpawnRotation::__cordl_internal_get__prevRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevRotation;
}
constexpr void GlobalNamespace::EnvironmentSpawnRotation::__cordl_internal_set__prevRotation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevRotation = value;
}
constexpr float_t& GlobalNamespace::EnvironmentSpawnRotation::__cordl_internal_get__targetRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetRotation;
}
constexpr float_t const& GlobalNamespace::EnvironmentSpawnRotation::__cordl_internal_get__targetRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetRotation;
}
constexpr void GlobalNamespace::EnvironmentSpawnRotation::__cordl_internal_set__targetRotation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targetRotation = value;
}
inline void GlobalNamespace::EnvironmentSpawnRotation::setStaticF__spawnRotationID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_spawnRotationID", ::GlobalNamespace::EnvironmentSpawnRotation*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::EnvironmentSpawnRotation::getStaticF__spawnRotationID() {
  return ::cordl_internals::getStaticField<int32_t, "_spawnRotationID", ::GlobalNamespace::EnvironmentSpawnRotation*>();
}
inline void GlobalNamespace::EnvironmentSpawnRotation::setStaticF__numberOfActiveEnvironmentSpawnRotationObjects(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_numberOfActiveEnvironmentSpawnRotationObjects", ::GlobalNamespace::EnvironmentSpawnRotation*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::EnvironmentSpawnRotation::getStaticF__numberOfActiveEnvironmentSpawnRotationObjects() {
  return ::cordl_internals::getStaticField<int32_t, "_numberOfActiveEnvironmentSpawnRotationObjects", ::GlobalNamespace::EnvironmentSpawnRotation*>();
}
inline float_t GlobalNamespace::EnvironmentSpawnRotation::get_targetRotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentSpawnRotation*>(), { "get_targetRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::EnvironmentSpawnRotation::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentSpawnRotation*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EnvironmentSpawnRotation::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentSpawnRotation*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EnvironmentSpawnRotation::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentSpawnRotation*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EnvironmentSpawnRotation::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentSpawnRotation*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EnvironmentSpawnRotation::HandleSpawnRotationBeatmapEvent(::GlobalNamespace::BeatmapObjectData* data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentSpawnRotation*>(),
                                                                                         { "HandleSpawnRotationBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapObjectData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::EnvironmentSpawnRotation::FixedUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentSpawnRotation*>(), { "FixedUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EnvironmentSpawnRotation::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentSpawnRotation*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EnvironmentSpawnRotation::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentSpawnRotation*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentSpawnRotation* GlobalNamespace::EnvironmentSpawnRotation::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EnvironmentSpawnRotation*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentSpawnRotation::EnvironmentSpawnRotation() {}
