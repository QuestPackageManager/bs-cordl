#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapCallbacksController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallback_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__CallbacksInTime_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController_InitData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController_InitData::*)(::GlobalNamespace::IReadonlyBeatmapData*, float_t, bool)>(
    &::GlobalNamespace::BeatmapCallbacksController_InitData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58c3a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController_InitData*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IReadonlyBeatmapData*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IReadonlyBeatmapData*& GlobalNamespace::BeatmapCallbacksController_InitData::__cordl_internal_get_beatmapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapData;
}
constexpr ::GlobalNamespace::IReadonlyBeatmapData* const& GlobalNamespace::BeatmapCallbacksController_InitData::__cordl_internal_get_beatmapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapData;
}
constexpr void GlobalNamespace::BeatmapCallbacksController_InitData::__cordl_internal_set_beatmapData(::GlobalNamespace::IReadonlyBeatmapData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapData = value;
}
constexpr float_t& GlobalNamespace::BeatmapCallbacksController_InitData::__cordl_internal_get_startFilterTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startFilterTime;
}
constexpr float_t const& GlobalNamespace::BeatmapCallbacksController_InitData::__cordl_internal_get_startFilterTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startFilterTime;
}
constexpr void GlobalNamespace::BeatmapCallbacksController_InitData::__cordl_internal_set_startFilterTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startFilterTime = value;
}
constexpr bool& GlobalNamespace::BeatmapCallbacksController_InitData::__cordl_internal_get_shouldKeepReplayState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldKeepReplayState;
}
constexpr bool const& GlobalNamespace::BeatmapCallbacksController_InitData::__cordl_internal_get_shouldKeepReplayState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldKeepReplayState;
}
constexpr void GlobalNamespace::BeatmapCallbacksController_InitData::__cordl_internal_set_shouldKeepReplayState(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shouldKeepReplayState = value;
}
inline void GlobalNamespace::BeatmapCallbacksController_InitData::_ctor(::GlobalNamespace::IReadonlyBeatmapData* beatmapData, float_t startFilterTime, bool shouldKeepReplayState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController_InitData*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IReadonlyBeatmapData*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapData, startFilterTime, shouldKeepReplayState);
}
inline ::GlobalNamespace::BeatmapCallbacksController_InitData* GlobalNamespace::BeatmapCallbacksController_InitData::New_ctor(::GlobalNamespace::IReadonlyBeatmapData* beatmapData,
                                                                                                                              float_t startFilterTime, bool shouldKeepReplayState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapCallbacksController_InitData*>(beatmapData, startFilterTime, shouldKeepReplayState));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapCallbacksController_InitData::BeatmapCallbacksController_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior.CallCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior::*)(
    ::GlobalNamespace::CallbacksInTime*, ::GlobalNamespace::BeatmapDataItem*)>(&::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior::CallCallbacks)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior.Replay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior::*)(
    ::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>*)>(&::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior::Replay)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior*>(), 1 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior::CallCallbacks(::GlobalNamespace::CallbacksInTime* callbacksInTime,
                                                                                              ::GlobalNamespace::BeatmapDataItem* beatmapDataItem) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callbacksInTime, beatmapDataItem);
}
inline void GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior::Replay(::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>* callbacksInTimes) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callbacksInTimes);
}
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehavior.CallCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehavior::*)(
    ::GlobalNamespace::CallbacksInTime*, ::GlobalNamespace::BeatmapDataItem*)>(&::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehavior::CallCallbacks)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58c3a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehavior*>(),
                                                { "CallCallbacks", {}, { ::i2c::type_of<::GlobalNamespace::CallbacksInTime*>(), ::i2c::type_of<::GlobalNamespace::BeatmapDataItem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehavior.Replay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehavior::*)(
    ::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>*)>(&::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehavior::Replay)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58c3acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehavior*>(),
                                                             { "Replay", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehavior._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehavior::*)()>(
    &::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehavior::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58c3ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehavior*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehavior::CallCallbacks(::GlobalNamespace::CallbacksInTime* callbacksInTime, ::GlobalNamespace::BeatmapDataItem* beatmapDataItem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehavior*>(),
                                                           { "CallCallbacks", {}, { ::i2c::type_of<::GlobalNamespace::CallbacksInTime*>(), ::i2c::type_of<::GlobalNamespace::BeatmapDataItem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callbacksInTime, beatmapDataItem);
}
inline void GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehavior::Replay(::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>* callbacksInTimes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehavior*>(),
                                                           { "Replay", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callbacksInTimes);
}
inline void GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehavior::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehavior*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehavior* GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehavior::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehavior*>());
}
/// @brief Convert operator to "::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior"
constexpr GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehavior::operator ::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior*() noexcept {
  return static_cast<::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior"
constexpr ::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior*
GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehavior::i___GlobalNamespace__BeatmapCallbacksController_ICallCallbacksBehavior() noexcept {
  return static_cast<::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehavior::BeatmapCallbacksController_CallCallbacksBehavior() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehaviorWithLastState.CallCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehaviorWithLastState::*)(
    ::GlobalNamespace::CallbacksInTime*, ::GlobalNamespace::BeatmapDataItem*)>(&::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehaviorWithLastState::CallCallbacks)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x58c3ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehaviorWithLastState*>(),
                                                { "CallCallbacks", {}, { ::i2c::type_of<::GlobalNamespace::CallbacksInTime*>(), ::i2c::type_of<::GlobalNamespace::BeatmapDataItem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehaviorWithLastState.Replay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehaviorWithLastState::*)(
    ::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>*)>(&::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehaviorWithLastState::Replay)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x58c3b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehaviorWithLastState*>(),
                                                             { "Replay", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehaviorWithLastState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehaviorWithLastState::*)()>(
    &::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehaviorWithLastState::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x58c3e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehaviorWithLastState*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::GlobalNamespace::BeatmapDataItem*>*&
GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehaviorWithLastState::__cordl_internal_get__replayState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replayState;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::GlobalNamespace::BeatmapDataItem*>* const&
GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehaviorWithLastState::__cordl_internal_get__replayState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replayState;
}
constexpr void GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehaviorWithLastState::__cordl_internal_set__replayState(
    ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::GlobalNamespace::BeatmapDataItem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____replayState = value;
}
inline void GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehaviorWithLastState::CallCallbacks(::GlobalNamespace::CallbacksInTime* callbacksInTime,
                                                                                                          ::GlobalNamespace::BeatmapDataItem* beatmapDataItem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehaviorWithLastState*>(),
                                                           { "CallCallbacks", {}, { ::i2c::type_of<::GlobalNamespace::CallbacksInTime*>(), ::i2c::type_of<::GlobalNamespace::BeatmapDataItem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callbacksInTime, beatmapDataItem);
}
inline void
GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehaviorWithLastState::Replay(::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>* callbacksInTimes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehaviorWithLastState*>(),
                                                           { "Replay", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callbacksInTimes);
}
inline void GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehaviorWithLastState::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehaviorWithLastState*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehaviorWithLastState* GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehaviorWithLastState::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehaviorWithLastState*>());
}
/// @brief Convert operator to "::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior"
constexpr GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehaviorWithLastState::operator ::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior*() noexcept {
  return static_cast<::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior"
constexpr ::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior*
GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehaviorWithLastState::i___GlobalNamespace__BeatmapCallbacksController_ICallCallbacksBehavior() noexcept {
  return static_cast<::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehaviorWithLastState::BeatmapCallbacksController_CallCallbacksBehaviorWithLastState() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.get_sendCallbacksOnBeatmapDataChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapCallbacksController::*)()>(
    &::GlobalNamespace::BeatmapCallbacksController::get_sendCallbacksOnBeatmapDataChange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c1c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController*>(), { "get_sendCallbacksOnBeatmapDataChange", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.set_sendCallbacksOnBeatmapDataChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(bool)>(
    &::GlobalNamespace::BeatmapCallbacksController::set_sendCallbacksOnBeatmapDataChange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c1c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController*>(), { "set_sendCallbacksOnBeatmapDataChange", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.get_songTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeatmapCallbacksController::*)()>(&::GlobalNamespace::BeatmapCallbacksController::get_songTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c1c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController*>(), { "get_songTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.add_willStartProcessingCallbacksThisFrameEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(::System::Action_1<float_t>*)>(
    &::GlobalNamespace::BeatmapCallbacksController::add_willStartProcessingCallbacksThisFrameEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58c1c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController*>(),
                                                             { "add_willStartProcessingCallbacksThisFrameEvent", {}, { ::i2c::type_of<::System::Action_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.remove_willStartProcessingCallbacksThisFrameEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(::System::Action_1<float_t>*)>(
    &::GlobalNamespace::BeatmapCallbacksController::remove_willStartProcessingCallbacksThisFrameEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58c1cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController*>(),
                                                             { "remove_willStartProcessingCallbacksThisFrameEvent", {}, { ::i2c::type_of<::System::Action_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.add_didProcessAllCallbacksThisFrameEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(::System::Action*)>(
    &::GlobalNamespace::BeatmapCallbacksController::add_didProcessAllCallbacksThisFrameEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x58c1db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController*>(),
                                                                                           { "add_didProcessAllCallbacksThisFrameEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.remove_didProcessAllCallbacksThisFrameEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(::System::Action*)>(
    &::GlobalNamespace::BeatmapCallbacksController::remove_didProcessAllCallbacksThisFrameEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x58c1e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController*>(),
                                                                                           { "remove_didProcessAllCallbacksThisFrameEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(::GlobalNamespace::BeatmapCallbacksController_InitData*)>(
    &::GlobalNamespace::BeatmapCallbacksController::_ctor)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x58c1f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController_InitData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)()>(&::GlobalNamespace::BeatmapCallbacksController::Dispose)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x58c2250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.ReplayState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)()>(&::GlobalNamespace::BeatmapCallbacksController::ReplayState)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x58c24b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController*>(), { "ReplayState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.ManualUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(float_t)>(&::GlobalNamespace::BeatmapCallbacksController::ManualUpdate)> {
  constexpr static std::size_t size = 0x780;
  constexpr static std::size_t addrs = 0x58c2560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController*>(), { "ManualUpdate", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.RemoveBeatmapCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(::GlobalNamespace::BeatmapDataCallbackWrapper*)>(
    &::GlobalNamespace::BeatmapCallbacksController::RemoveBeatmapCallback)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x58bf820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController*>(),
                                                                                           { "RemoveBeatmapCallback", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDataCallbackWrapper*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.TriggerBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(::GlobalNamespace::BeatmapEventData*)>(
    &::GlobalNamespace::BeatmapCallbacksController::TriggerBeatmapEvent)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x58c2ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController*>(),
                                                                                           { "TriggerBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.HandleBeatmapEventDataWasInserted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*)>(
        &::GlobalNamespace::BeatmapCallbacksController::HandleBeatmapEventDataWasInserted)> {
  constexpr static std::size_t size = 0x6bc;
  constexpr static std::size_t addrs = 0x58c2e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController*>(),
                            { "HandleBeatmapEventDataWasInserted",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::BeatmapEventData*>(), ::i2c::type_of<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.HandleBeatmapEventDataWillBeRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*)>(
        &::GlobalNamespace::BeatmapCallbacksController::HandleBeatmapEventDataWillBeRemoved)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x58c34d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController*>(),
                            { "HandleBeatmapEventDataWillBeRemoved",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::BeatmapEventData*>(), ::i2c::type_of<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.HandleBeatmapEventDataWasRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(::GlobalNamespace::BeatmapEventData*)>(
    &::GlobalNamespace::BeatmapCallbacksController::HandleBeatmapEventDataWasRemoved)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x58c37d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController*>(),
                                                                                           { "HandleBeatmapEventDataWasRemoved", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapEventData*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<float_t>*& GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get_willStartProcessingCallbacksThisFrameEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___willStartProcessingCallbacksThisFrameEvent;
}
constexpr ::System::Action_1<float_t>* const& GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get_willStartProcessingCallbacksThisFrameEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___willStartProcessingCallbacksThisFrameEvent;
}
constexpr void GlobalNamespace::BeatmapCallbacksController::__cordl_internal_set_willStartProcessingCallbacksThisFrameEvent(::System::Action_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___willStartProcessingCallbacksThisFrameEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get_didProcessAllCallbacksThisFrameEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didProcessAllCallbacksThisFrameEvent;
}
constexpr ::System::Action* const& GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get_didProcessAllCallbacksThisFrameEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didProcessAllCallbacksThisFrameEvent;
}
constexpr void GlobalNamespace::BeatmapCallbacksController::__cordl_internal_set_didProcessAllCallbacksThisFrameEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didProcessAllCallbacksThisFrameEvent = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>*& GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get__callbacksInTimes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callbacksInTimes;
}
constexpr ::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>* const&
GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get__callbacksInTimes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callbacksInTimes;
}
constexpr void GlobalNamespace::BeatmapCallbacksController::__cordl_internal_set__callbacksInTimes(::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____callbacksInTimes = value;
}
constexpr ::GlobalNamespace::IReadonlyBeatmapData*& GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get__beatmapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapData;
}
constexpr ::GlobalNamespace::IReadonlyBeatmapData* const& GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get__beatmapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapData;
}
constexpr void GlobalNamespace::BeatmapCallbacksController::__cordl_internal_set__beatmapData(::GlobalNamespace::IReadonlyBeatmapData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapData = value;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior*& GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get__callCallbacksBehavior() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callCallbacksBehavior;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior* const& GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get__callCallbacksBehavior() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callCallbacksBehavior;
}
constexpr void GlobalNamespace::BeatmapCallbacksController::__cordl_internal_set__callCallbacksBehavior(::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____callCallbacksBehavior = value;
}
constexpr float_t& GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get__startFilterTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startFilterTime;
}
constexpr float_t const& GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get__startFilterTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startFilterTime;
}
constexpr void GlobalNamespace::BeatmapCallbacksController::__cordl_internal_set__startFilterTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startFilterTime = value;
}
constexpr float_t& GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get__prevSongTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevSongTime;
}
constexpr float_t const& GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get__prevSongTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevSongTime;
}
constexpr void GlobalNamespace::BeatmapCallbacksController::__cordl_internal_set__prevSongTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevSongTime = value;
}
constexpr float_t& GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get__songTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTime;
}
constexpr float_t const& GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get__songTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTime;
}
constexpr void GlobalNamespace::BeatmapCallbacksController::__cordl_internal_set__songTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songTime = value;
}
constexpr bool& GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get__sendCallbacksOnBeatmapDataChangeChange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sendCallbacksOnBeatmapDataChangeChange;
}
constexpr bool const& GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get__sendCallbacksOnBeatmapDataChangeChange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sendCallbacksOnBeatmapDataChangeChange;
}
constexpr void GlobalNamespace::BeatmapCallbacksController::__cordl_internal_set__sendCallbacksOnBeatmapDataChangeChange(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sendCallbacksOnBeatmapDataChangeChange = value;
}
constexpr bool& GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get__processingCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____processingCallbacks;
}
constexpr bool const& GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get__processingCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____processingCallbacks;
}
constexpr void GlobalNamespace::BeatmapCallbacksController::__cordl_internal_set__processingCallbacks(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____processingCallbacks = value;
}
inline bool GlobalNamespace::BeatmapCallbacksController::get_sendCallbacksOnBeatmapDataChange() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController*>(), { "get_sendCallbacksOnBeatmapDataChange", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapCallbacksController::set_sendCallbacksOnBeatmapDataChange(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController*>(), { "set_sendCallbacksOnBeatmapDataChange", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::BeatmapCallbacksController::get_songTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController*>(), { "get_songTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapCallbacksController::add_willStartProcessingCallbacksThisFrameEvent(::System::Action_1<float_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController*>(),
                                                           { "add_willStartProcessingCallbacksThisFrameEvent", {}, { ::i2c::type_of<::System::Action_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapCallbacksController::remove_willStartProcessingCallbacksThisFrameEvent(::System::Action_1<float_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController*>(),
                                                           { "remove_willStartProcessingCallbacksThisFrameEvent", {}, { ::i2c::type_of<::System::Action_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapCallbacksController::add_didProcessAllCallbacksThisFrameEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController*>(),
                                                                                         { "add_didProcessAllCallbacksThisFrameEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapCallbacksController::remove_didProcessAllCallbacksThisFrameEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController*>(),
                                                                                         { "remove_didProcessAllCallbacksThisFrameEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapCallbacksController::_ctor(::GlobalNamespace::BeatmapCallbacksController_InitData* initData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController_InitData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initData);
}
inline void GlobalNamespace::BeatmapCallbacksController::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapCallbacksController::ReplayState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController*>(), { "ReplayState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapCallbacksController::ManualUpdate(float_t songTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController*>(), { "ManualUpdate", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, songTime);
}
template <typename T>
inline ::GlobalNamespace::BeatmapDataCallbackWrapper* GlobalNamespace::BeatmapCallbacksController::AddBeatmapCallback(float_t aheadTime, ::GlobalNamespace::BeatmapDataCallback_1<T>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController*>(),
                                              { "AddBeatmapCallback", { ::i2c::class_of<T>() }, { ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::BeatmapDataCallback_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataCallbackWrapper*>(this, ___internal_method, aheadTime, callback);
}
template <typename T> inline ::GlobalNamespace::BeatmapDataCallbackWrapper* GlobalNamespace::BeatmapCallbacksController::AddBeatmapCallback(::GlobalNamespace::BeatmapDataCallback_1<T>* callback) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController*>(),
                                                           { "AddBeatmapCallback", { ::i2c::class_of<T>() }, { ::i2c::type_of<::GlobalNamespace::BeatmapDataCallback_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataCallbackWrapper*>(this, ___internal_method, callback);
}
template <typename T>
inline ::GlobalNamespace::BeatmapDataCallbackWrapper* GlobalNamespace::BeatmapCallbacksController::AddBeatmapCallback(::GlobalNamespace::BeatmapDataCallback_1<T>* callback,
                                                                                                                      ::ArrayW<int32_t> beatmapDataSubtypeIdentifiers) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController*>(),
                                       { "AddBeatmapCallback", { ::i2c::class_of<T>() }, { ::i2c::type_of<::GlobalNamespace::BeatmapDataCallback_1<T>*>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataCallbackWrapper*>(this, ___internal_method, callback, beatmapDataSubtypeIdentifiers);
}
template <typename T>
inline ::GlobalNamespace::BeatmapDataCallbackWrapper* GlobalNamespace::BeatmapCallbacksController::AddBeatmapCallback(float_t aheadTime, ::GlobalNamespace::BeatmapDataCallback_1<T>* callback,
                                                                                                                      ::ArrayW<int32_t> beatmapDataSubtypeIdentifiers) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController*>(),
          { "AddBeatmapCallback", { ::i2c::class_of<T>() }, { ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::BeatmapDataCallback_1<T>*>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataCallbackWrapper*>(this, ___internal_method, aheadTime, callback, beatmapDataSubtypeIdentifiers);
}
inline void GlobalNamespace::BeatmapCallbacksController::RemoveBeatmapCallback(::GlobalNamespace::BeatmapDataCallbackWrapper* callbackWrapper) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController*>(),
                                                                                         { "RemoveBeatmapCallback", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDataCallbackWrapper*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callbackWrapper);
}
inline void GlobalNamespace::BeatmapCallbacksController::TriggerBeatmapEvent(::GlobalNamespace::BeatmapEventData* beatmapEventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController*>(), { "TriggerBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapEventData);
}
inline void GlobalNamespace::BeatmapCallbacksController::HandleBeatmapEventDataWasInserted(::GlobalNamespace::BeatmapEventData* beatmapEventData,
                                                                                           ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController*>(),
                          { "HandleBeatmapEventDataWasInserted",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::BeatmapEventData*>(), ::i2c::type_of<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapEventData, node);
}
inline void GlobalNamespace::BeatmapCallbacksController::HandleBeatmapEventDataWillBeRemoved(::GlobalNamespace::BeatmapEventData* beatmapEventDataToRemove,
                                                                                             ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* nodeToRemove) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController*>(),
                          { "HandleBeatmapEventDataWillBeRemoved",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::BeatmapEventData*>(), ::i2c::type_of<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapEventDataToRemove, nodeToRemove);
}
inline void GlobalNamespace::BeatmapCallbacksController::HandleBeatmapEventDataWasRemoved(::GlobalNamespace::BeatmapEventData* beatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCallbacksController*>(),
                                                                                         { "HandleBeatmapEventDataWasRemoved", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapEventData);
}
inline ::GlobalNamespace::BeatmapCallbacksController* GlobalNamespace::BeatmapCallbacksController::New_ctor(::GlobalNamespace::BeatmapCallbacksController_InitData* initData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapCallbacksController*>(initData));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::BeatmapCallbacksController::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::BeatmapCallbacksController::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapCallbacksController::BeatmapCallbacksController() {}
