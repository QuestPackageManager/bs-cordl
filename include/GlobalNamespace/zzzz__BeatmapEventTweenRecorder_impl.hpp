#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapEventTweenRecorder.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapEventTweenRecorder::*)(int32_t)>(
    &::GlobalNamespace::BeatmapEventTweenRecorder::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x56fdd18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventTweenRecorder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventTweenRecorder.Begin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapEventTweenRecorder::*)(::GlobalNamespace::BeatmapCallbacksController*)>(
    &::GlobalNamespace::BeatmapEventTweenRecorder::Begin)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56fdd9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventTweenRecorder*>::get(), "Begin", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventTweenRecorder.CaptureFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapEventTweenRecorder::*)()>(
    &::GlobalNamespace::BeatmapEventTweenRecorder::CaptureFrame)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x56fde5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventTweenRecorder*>::get(),
                                                                               "CaptureFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventTweenRecorder.Finish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens, ::Array<::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens>*> (::GlobalNamespace::BeatmapEventTweenRecorder::*)()>(
    &::GlobalNamespace::BeatmapEventTweenRecorder::Finish)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x56fdf00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventTweenRecorder*>::get(), "Finish",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventTweenRecorder.GenerateTableReport
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::ArrayW<::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens, ::Array<::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens>*>)>(
        &::GlobalNamespace::BeatmapEventTweenRecorder::GenerateTableReport)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x56fdfc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventTweenRecorder*>::get(), "GenerateTableReport", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::ArrayW<::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens, ::Array<::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventTweenRecorder.ClearCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapEventTweenRecorder::*)()>(
    &::GlobalNamespace::BeatmapEventTweenRecorder::ClearCallbacks)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x56fdf94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventTweenRecorder*>::get(),
                                                                               "ClearCallbacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventTweenRecorder.SetupCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapEventTweenRecorder::*)(::GlobalNamespace::BeatmapCallbacksController*)>(
    &::GlobalNamespace::BeatmapEventTweenRecorder::SetupCallbacks)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x56fdda0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventTweenRecorder*>::get(), "SetupCallbacks", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventTweenRecorder.HandleBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapEventTweenRecorder::*)(::GlobalNamespace::BeatmapEventData*)>(
    &::GlobalNamespace::BeatmapEventTweenRecorder::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x56fe314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventTweenRecorder*>::get(), "HandleBeatmapEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventData*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____samples)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____callbackController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onBeatmapEventWrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BeatmapEventTweenRecorder::_ctor(int32_t initialFrameCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventTweenRecorder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialFrameCapacity);
}
inline void GlobalNamespace::BeatmapEventTweenRecorder::Begin(::GlobalNamespace::BeatmapCallbacksController* callbackController) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventTweenRecorder*>::get(), "Begin", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callbackController);
}
inline void GlobalNamespace::BeatmapEventTweenRecorder::CaptureFrame() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventTweenRecorder*>::get(),
                                                                             "CaptureFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens, ::Array<::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens>*> GlobalNamespace::BeatmapEventTweenRecorder::Finish() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventTweenRecorder*>::get(), "Finish",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens, ::Array<::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens>*>, false>(
      this, ___internal_method);
}
inline ::StringW GlobalNamespace::BeatmapEventTweenRecorder::GenerateTableReport(
    ::ArrayW<::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens, ::Array<::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens>*> samples) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventTweenRecorder*>::get(), "GenerateTableReport", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::ArrayW<::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens, ::Array<::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, samples);
}
inline void GlobalNamespace::BeatmapEventTweenRecorder::ClearCallbacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventTweenRecorder*>::get(),
                                                                             "ClearCallbacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapEventTweenRecorder::SetupCallbacks(::GlobalNamespace::BeatmapCallbacksController* callbackController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventTweenRecorder*>::get(), "SetupCallbacks", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callbackController);
}
inline void GlobalNamespace::BeatmapEventTweenRecorder::HandleBeatmapEvent(::GlobalNamespace::BeatmapEventData* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventTweenRecorder*>::get(), "HandleBeatmapEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline ::GlobalNamespace::BeatmapEventTweenRecorder* GlobalNamespace::BeatmapEventTweenRecorder::New_ctor(int32_t initialFrameCapacity) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapEventTweenRecorder*>(initialFrameCapacity));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEventTweenRecorder::BeatmapEventTweenRecorder() {}
