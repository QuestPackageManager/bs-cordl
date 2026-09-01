#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapEventTweenRecorder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventTweenRecorder_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventTweenRecorder_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "color", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "translation", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fx", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens::BeatmapEventTweenRecorder_EventTweens(int32_t color, int32_t rotation, int32_t translation, int32_t fx) noexcept {
  this->color = color;
  this->rotation = rotation;
  this->translation = translation;
  this->fx = fx;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens::BeatmapEventTweenRecorder_EventTweens() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventTweenRecorder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEventTweenRecorder::*)(int32_t)>(&::GlobalNamespace::BeatmapEventTweenRecorder::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x58ed928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventTweenRecorder*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventTweenRecorder.Begin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEventTweenRecorder::*)(::GlobalNamespace::BeatmapCallbacksController*)>(
    &::GlobalNamespace::BeatmapEventTweenRecorder::Begin)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58ed9ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventTweenRecorder*>(), { "Begin", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventTweenRecorder.CaptureFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEventTweenRecorder::*)()>(&::GlobalNamespace::BeatmapEventTweenRecorder::CaptureFrame)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x58eda6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventTweenRecorder*>(), { "CaptureFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventTweenRecorder.Finish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens> (::GlobalNamespace::BeatmapEventTweenRecorder::*)()>(
    &::GlobalNamespace::BeatmapEventTweenRecorder::Finish)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x58edb10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventTweenRecorder*>(), { "Finish", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventTweenRecorder.GenerateTableReport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens>)>(
    &::GlobalNamespace::BeatmapEventTweenRecorder::GenerateTableReport)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x58edbd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventTweenRecorder*>(),
                                                             { "GenerateTableReport", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventTweenRecorder.ClearCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEventTweenRecorder::*)()>(&::GlobalNamespace::BeatmapEventTweenRecorder::ClearCallbacks)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x58edba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventTweenRecorder*>(), { "ClearCallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventTweenRecorder.SetupCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEventTweenRecorder::*)(::GlobalNamespace::BeatmapCallbacksController*)>(
    &::GlobalNamespace::BeatmapEventTweenRecorder::SetupCallbacks)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x58ed9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventTweenRecorder*>(),
                                                                                           { "SetupCallbacks", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventTweenRecorder.HandleBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEventTweenRecorder::*)(::GlobalNamespace::BeatmapEventData*)>(
    &::GlobalNamespace::BeatmapEventTweenRecorder::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x58edf24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventTweenRecorder*>(), { "HandleBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapEventData*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens>*& GlobalNamespace::BeatmapEventTweenRecorder::__cordl_internal_get__samples() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____samples;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens>* const& GlobalNamespace::BeatmapEventTweenRecorder::__cordl_internal_get__samples() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____samples;
}
constexpr void GlobalNamespace::BeatmapEventTweenRecorder::__cordl_internal_set__samples(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____samples = value;
}
constexpr ::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens& GlobalNamespace::BeatmapEventTweenRecorder::__cordl_internal_get__activeTweens() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeTweens;
}
constexpr ::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens const& GlobalNamespace::BeatmapEventTweenRecorder::__cordl_internal_get__activeTweens() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeTweens;
}
constexpr void GlobalNamespace::BeatmapEventTweenRecorder::__cordl_internal_set__activeTweens(::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activeTweens = value;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::BeatmapEventTweenRecorder::__cordl_internal_get__callbackController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callbackController;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::BeatmapEventTweenRecorder::__cordl_internal_get__callbackController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callbackController;
}
constexpr void GlobalNamespace::BeatmapEventTweenRecorder::__cordl_internal_set__callbackController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____callbackController = value;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::BeatmapEventTweenRecorder::__cordl_internal_get__onBeatmapEventWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onBeatmapEventWrapper;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& GlobalNamespace::BeatmapEventTweenRecorder::__cordl_internal_get__onBeatmapEventWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onBeatmapEventWrapper;
}
constexpr void GlobalNamespace::BeatmapEventTweenRecorder::__cordl_internal_set__onBeatmapEventWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onBeatmapEventWrapper = value;
}
inline void GlobalNamespace::BeatmapEventTweenRecorder::_ctor(int32_t initialFrameCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventTweenRecorder*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialFrameCapacity);
}
inline void GlobalNamespace::BeatmapEventTweenRecorder::Begin(::GlobalNamespace::BeatmapCallbacksController* callbackController) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventTweenRecorder*>(), { "Begin", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callbackController);
}
inline void GlobalNamespace::BeatmapEventTweenRecorder::CaptureFrame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventTweenRecorder*>(), { "CaptureFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens> GlobalNamespace::BeatmapEventTweenRecorder::Finish() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventTweenRecorder*>(), { "Finish", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens>>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::BeatmapEventTweenRecorder::GenerateTableReport(::ArrayW<::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens> samples) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventTweenRecorder*>(),
                                                           { "GenerateTableReport", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, samples);
}
inline void GlobalNamespace::BeatmapEventTweenRecorder::ClearCallbacks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventTweenRecorder*>(), { "ClearCallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapEventTweenRecorder::SetupCallbacks(::GlobalNamespace::BeatmapCallbacksController* callbackController) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventTweenRecorder*>(),
                                                                                         { "SetupCallbacks", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callbackController);
}
inline void GlobalNamespace::BeatmapEventTweenRecorder::HandleBeatmapEvent(::GlobalNamespace::BeatmapEventData* data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventTweenRecorder*>(), { "HandleBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::GlobalNamespace::BeatmapEventTweenRecorder* GlobalNamespace::BeatmapEventTweenRecorder::New_ctor(int32_t initialFrameCapacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapEventTweenRecorder*>(initialFrameCapacity));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEventTweenRecorder::BeatmapEventTweenRecorder() {}
