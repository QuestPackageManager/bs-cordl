#pragma once
// IWYU pragma private; include "GlobalNamespace\BpmController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BpmController_def.hpp"
#include "GlobalNamespace/zzzz__BPMChangeBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__BpmController_def.hpp"
#include "GlobalNamespace/zzzz__IBpmController_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BpmController_InitData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BpmController_InitData::*)(float_t)>(&::GlobalNamespace::BpmController_InitData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597db88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BpmController_InitData*>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::BpmController_InitData::__cordl_internal_get_startBpm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startBpm;
}
constexpr float_t const& GlobalNamespace::BpmController_InitData::__cordl_internal_get_startBpm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startBpm;
}
constexpr void GlobalNamespace::BpmController_InitData::__cordl_internal_set_startBpm(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startBpm = value;
}
inline void GlobalNamespace::BpmController_InitData::_ctor(float_t startBpm) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BpmController_InitData*>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startBpm);
}
inline ::GlobalNamespace::BpmController_InitData* GlobalNamespace::BpmController_InitData::New_ctor(float_t startBpm) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BpmController_InitData*>(startBpm));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BpmController_InitData::BpmController_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::BpmController.get_currentBpm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BpmController::*)()>(&::GlobalNamespace::BpmController::get_currentBpm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597da60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BpmController*>(), { "get_currentBpm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BpmController.get_oneBeatDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BpmController::*)()>(&::GlobalNamespace::BpmController::get_oneBeatDuration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x597da68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BpmController*>(), { "get_oneBeatDuration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BpmController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BpmController::*)(::GlobalNamespace::BpmController_InitData*, ::GlobalNamespace::BeatmapCallbacksController*)>(
    &::GlobalNamespace::BpmController::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x597da88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BpmController*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BpmController_InitData*>(), ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BpmController.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BpmController::*)()>(&::GlobalNamespace::BpmController::Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x597db54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BpmController*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BpmController.HandleBpmChangeBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BpmController::*)(::GlobalNamespace::BPMChangeBeatmapEventData*)>(
    &::GlobalNamespace::BpmController::HandleBpmChangeBeatmapEvent)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x597db70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BpmController*>(), { "HandleBpmChangeBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::BPMChangeBeatmapEventData*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::BpmController::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::BpmController::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::BpmController::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCallbacksController = value;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::BpmController::__cordl_internal_get__beatmapDataCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallback;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& GlobalNamespace::BpmController::__cordl_internal_get__beatmapDataCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallback;
}
constexpr void GlobalNamespace::BpmController::__cordl_internal_set__beatmapDataCallback(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapDataCallback = value;
}
constexpr float_t& GlobalNamespace::BpmController::__cordl_internal_get__currentBpm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentBpm;
}
constexpr float_t const& GlobalNamespace::BpmController::__cordl_internal_get__currentBpm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentBpm;
}
constexpr void GlobalNamespace::BpmController::__cordl_internal_set__currentBpm(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentBpm = value;
}
inline float_t GlobalNamespace::BpmController::get_currentBpm() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BpmController*>(), { "get_currentBpm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::BpmController::get_oneBeatDuration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BpmController*>(), { "get_oneBeatDuration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::BpmController::_ctor(::GlobalNamespace::BpmController_InitData* initData, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BpmController*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BpmController_InitData*>(), ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initData, beatmapCallbacksController);
}
inline void GlobalNamespace::BpmController::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BpmController*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BpmController::HandleBpmChangeBeatmapEvent(::GlobalNamespace::BPMChangeBeatmapEventData* bpmChangeBeatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BpmController*>(),
                                                                                         { "HandleBpmChangeBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::BPMChangeBeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bpmChangeBeatmapEventData);
}
inline ::GlobalNamespace::BpmController* GlobalNamespace::BpmController::New_ctor(::GlobalNamespace::BpmController_InitData* initData,
                                                                                  ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BpmController*>(initData, beatmapCallbacksController));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::BpmController::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::BpmController::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IBpmController"
constexpr GlobalNamespace::BpmController::operator ::GlobalNamespace::IBpmController*() noexcept {
  return static_cast<::GlobalNamespace::IBpmController*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBpmController"
constexpr ::GlobalNamespace::IBpmController* GlobalNamespace::BpmController::i___GlobalNamespace__IBpmController() noexcept {
  return static_cast<::GlobalNamespace::IBpmController*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BpmController::BpmController() {}
