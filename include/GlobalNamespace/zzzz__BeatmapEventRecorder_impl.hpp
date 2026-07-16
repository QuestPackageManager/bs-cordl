#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapEventRecorder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventRecorder_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventRecorder_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "bpm", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "jumpSpeed", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "basic", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "boost", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "translation", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "fx", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapEventRecorder_EventCounts::BeatmapEventRecorder_EventCounts(int32_t bpm, int32_t jumpSpeed, int32_t basic, int32_t boost, int32_t color, int32_t rotation,
                                                                                                int32_t translation, int32_t fx) noexcept {
  this->bpm = bpm;
  this->jumpSpeed = jumpSpeed;
  this->basic = basic;
  this->boost = boost;
  this->color = color;
  this->rotation = rotation;
  this->translation = translation;
  this->fx = fx;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEventRecorder_EventCounts::BeatmapEventRecorder_EventCounts() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventRecorder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEventRecorder::*)(int32_t)>(&::GlobalNamespace::BeatmapEventRecorder::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x58eb278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventRecorder*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventRecorder.Begin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEventRecorder::*)(::GlobalNamespace::BeatmapCallbacksController*)>(
    &::GlobalNamespace::BeatmapEventRecorder::Begin)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58eb2fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventRecorder*>(), { "Begin", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventRecorder.CaptureFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEventRecorder::*)()>(&::GlobalNamespace::BeatmapEventRecorder::CaptureFrame)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x58eb3bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventRecorder*>(), { "CaptureFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventRecorder.Finish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::BeatmapEventRecorder_EventCounts> (::GlobalNamespace::BeatmapEventRecorder::*)()>(
    &::GlobalNamespace::BeatmapEventRecorder::Finish)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x58eb4a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventRecorder*>(), { "Finish", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventRecorder.GenerateTableReport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<::GlobalNamespace::BeatmapEventRecorder_EventCounts>)>(&::GlobalNamespace::BeatmapEventRecorder::GenerateTableReport)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0x58eb57c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventRecorder*>(),
                                                             { "GenerateTableReport", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::BeatmapEventRecorder_EventCounts>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventRecorder.ClearCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEventRecorder::*)()>(&::GlobalNamespace::BeatmapEventRecorder::ClearCallbacks)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x58eb54c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventRecorder*>(), { "ClearCallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventRecorder.SetupCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEventRecorder::*)(::GlobalNamespace::BeatmapCallbacksController*)>(
    &::GlobalNamespace::BeatmapEventRecorder::SetupCallbacks)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x58eb300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventRecorder*>(), { "SetupCallbacks", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventRecorder.HandleBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEventRecorder::*)(::GlobalNamespace::BeatmapEventData*)>(
    &::GlobalNamespace::BeatmapEventRecorder::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x58ebabc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventRecorder*>(), { "HandleBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapEventData*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventRecorder_EventCounts>*& GlobalNamespace::BeatmapEventRecorder::__cordl_internal_get__samples() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____samples;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventRecorder_EventCounts>* const& GlobalNamespace::BeatmapEventRecorder::__cordl_internal_get__samples() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____samples;
}
constexpr void GlobalNamespace::BeatmapEventRecorder::__cordl_internal_set__samples(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventRecorder_EventCounts>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____samples = value;
}
constexpr ::GlobalNamespace::BeatmapEventRecorder_EventCounts& GlobalNamespace::BeatmapEventRecorder::__cordl_internal_get__currentCounts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentCounts;
}
constexpr ::GlobalNamespace::BeatmapEventRecorder_EventCounts const& GlobalNamespace::BeatmapEventRecorder::__cordl_internal_get__currentCounts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentCounts;
}
constexpr void GlobalNamespace::BeatmapEventRecorder::__cordl_internal_set__currentCounts(::GlobalNamespace::BeatmapEventRecorder_EventCounts value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentCounts = value;
}
constexpr ::GlobalNamespace::BeatmapEventRecorder_EventCounts& GlobalNamespace::BeatmapEventRecorder::__cordl_internal_get__delayedCounts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delayedCounts;
}
constexpr ::GlobalNamespace::BeatmapEventRecorder_EventCounts const& GlobalNamespace::BeatmapEventRecorder::__cordl_internal_get__delayedCounts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delayedCounts;
}
constexpr void GlobalNamespace::BeatmapEventRecorder::__cordl_internal_set__delayedCounts(::GlobalNamespace::BeatmapEventRecorder_EventCounts value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____delayedCounts = value;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::BeatmapEventRecorder::__cordl_internal_get__callbackController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callbackController;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::BeatmapEventRecorder::__cordl_internal_get__callbackController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callbackController;
}
constexpr void GlobalNamespace::BeatmapEventRecorder::__cordl_internal_set__callbackController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____callbackController = value;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::BeatmapEventRecorder::__cordl_internal_get__onBeatmapEventWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onBeatmapEventWrapper;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& GlobalNamespace::BeatmapEventRecorder::__cordl_internal_get__onBeatmapEventWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onBeatmapEventWrapper;
}
constexpr void GlobalNamespace::BeatmapEventRecorder::__cordl_internal_set__onBeatmapEventWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onBeatmapEventWrapper = value;
}
inline void GlobalNamespace::BeatmapEventRecorder::_ctor(int32_t initialFrameCapacity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventRecorder*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialFrameCapacity);
}
inline void GlobalNamespace::BeatmapEventRecorder::Begin(::GlobalNamespace::BeatmapCallbacksController* callbackController) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventRecorder*>(), { "Begin", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callbackController);
}
inline void GlobalNamespace::BeatmapEventRecorder::CaptureFrame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventRecorder*>(), { "CaptureFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::BeatmapEventRecorder_EventCounts> GlobalNamespace::BeatmapEventRecorder::Finish() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventRecorder*>(), { "Finish", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::BeatmapEventRecorder_EventCounts>>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::BeatmapEventRecorder::GenerateTableReport(::ArrayW<::GlobalNamespace::BeatmapEventRecorder_EventCounts> samples) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventRecorder*>(),
                                                           { "GenerateTableReport", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::BeatmapEventRecorder_EventCounts>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, samples);
}
inline void GlobalNamespace::BeatmapEventRecorder::ClearCallbacks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventRecorder*>(), { "ClearCallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapEventRecorder::SetupCallbacks(::GlobalNamespace::BeatmapCallbacksController* callbackController) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventRecorder*>(), { "SetupCallbacks", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callbackController);
}
inline void GlobalNamespace::BeatmapEventRecorder::HandleBeatmapEvent(::GlobalNamespace::BeatmapEventData* data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventRecorder*>(), { "HandleBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::GlobalNamespace::BeatmapEventRecorder* GlobalNamespace::BeatmapEventRecorder::New_ctor(int32_t initialFrameCapacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapEventRecorder*>(initialFrameCapacity));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEventRecorder::BeatmapEventRecorder() {}
