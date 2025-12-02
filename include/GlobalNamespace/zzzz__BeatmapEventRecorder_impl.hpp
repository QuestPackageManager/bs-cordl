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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapEventRecorder::*)(int32_t)>(&::GlobalNamespace::BeatmapEventRecorder::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x56fd208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventRecorder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventRecorder.Begin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapEventRecorder::*)(::GlobalNamespace::BeatmapCallbacksController*)>(
    &::GlobalNamespace::BeatmapEventRecorder::Begin)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56fd28c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventRecorder*>::get(), "Begin", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventRecorder.CaptureFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapEventRecorder::*)()>(&::GlobalNamespace::BeatmapEventRecorder::CaptureFrame)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x56fd34c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventRecorder*>::get(), "CaptureFrame",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventRecorder.Finish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::GlobalNamespace::BeatmapEventRecorder_EventCounts, ::Array<::GlobalNamespace::BeatmapEventRecorder_EventCounts>*> (::GlobalNamespace::BeatmapEventRecorder::*)()>(
        &::GlobalNamespace::BeatmapEventRecorder::Finish)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x56fd438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventRecorder*>::get(), "Finish",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventRecorder.GenerateTableReport
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(
    ::ArrayW<::GlobalNamespace::BeatmapEventRecorder_EventCounts, ::Array<::GlobalNamespace::BeatmapEventRecorder_EventCounts>*>)>(&::GlobalNamespace::BeatmapEventRecorder::GenerateTableReport)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0x56fd50c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventRecorder*>::get(), "GenerateTableReport", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::ArrayW<::GlobalNamespace::BeatmapEventRecorder_EventCounts, ::Array<::GlobalNamespace::BeatmapEventRecorder_EventCounts>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventRecorder.ClearCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapEventRecorder::*)()>(&::GlobalNamespace::BeatmapEventRecorder::ClearCallbacks)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x56fd4dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventRecorder*>::get(),
                                                                               "ClearCallbacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventRecorder.SetupCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapEventRecorder::*)(::GlobalNamespace::BeatmapCallbacksController*)>(
    &::GlobalNamespace::BeatmapEventRecorder::SetupCallbacks)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x56fd290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventRecorder*>::get(), "SetupCallbacks", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventRecorder.HandleBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapEventRecorder::*)(::GlobalNamespace::BeatmapEventData*)>(
    &::GlobalNamespace::BeatmapEventRecorder::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x56fda4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventRecorder*>::get(), "HandleBeatmapEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventData*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____samples)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____callbackController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onBeatmapEventWrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BeatmapEventRecorder::_ctor(int32_t initialFrameCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventRecorder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialFrameCapacity);
}
inline void GlobalNamespace::BeatmapEventRecorder::Begin(::GlobalNamespace::BeatmapCallbacksController* callbackController) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventRecorder*>::get(), "Begin", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callbackController);
}
inline void GlobalNamespace::BeatmapEventRecorder::CaptureFrame() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventRecorder*>::get(), "CaptureFrame",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::BeatmapEventRecorder_EventCounts, ::Array<::GlobalNamespace::BeatmapEventRecorder_EventCounts>*> GlobalNamespace::BeatmapEventRecorder::Finish() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventRecorder*>::get(), "Finish",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::BeatmapEventRecorder_EventCounts, ::Array<::GlobalNamespace::BeatmapEventRecorder_EventCounts>*>, false>(this,
                                                                                                                                                                                  ___internal_method);
}
inline ::StringW
GlobalNamespace::BeatmapEventRecorder::GenerateTableReport(::ArrayW<::GlobalNamespace::BeatmapEventRecorder_EventCounts, ::Array<::GlobalNamespace::BeatmapEventRecorder_EventCounts>*> samples) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventRecorder*>::get(), "GenerateTableReport", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::ArrayW<::GlobalNamespace::BeatmapEventRecorder_EventCounts, ::Array<::GlobalNamespace::BeatmapEventRecorder_EventCounts>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, samples);
}
inline void GlobalNamespace::BeatmapEventRecorder::ClearCallbacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventRecorder*>::get(), "ClearCallbacks",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapEventRecorder::SetupCallbacks(::GlobalNamespace::BeatmapCallbacksController* callbackController) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventRecorder*>::get(), "SetupCallbacks", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callbackController);
}
inline void GlobalNamespace::BeatmapEventRecorder::HandleBeatmapEvent(::GlobalNamespace::BeatmapEventData* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventRecorder*>::get(), "HandleBeatmapEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline ::GlobalNamespace::BeatmapEventRecorder* GlobalNamespace::BeatmapEventRecorder::New_ctor(int32_t initialFrameCapacity) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapEventRecorder*>(initialFrameCapacity));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEventRecorder::BeatmapEventRecorder() {}
