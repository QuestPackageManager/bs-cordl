#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSampledEventSender.hpp"
#include "GlobalNamespace/zzzz__OVRTelemetryMarker_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSampledEventSender_def.hpp"
#include "GlobalNamespace/zzzz__OVRTelemetryMarker_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRSampledEventSender._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSampledEventSender::*)(
    int32_t, float_t, ::System::Func_2<::GlobalNamespace::OVRTelemetryMarker, ::GlobalNamespace::OVRTelemetryMarker>*)>(&::GlobalNamespace::OVRSampledEventSender::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d2fd0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSampledEventSender*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::GlobalNamespace::OVRTelemetryMarker, ::GlobalNamespace::OVRTelemetryMarker>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSampledEventSender.Send
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSampledEventSender::*)()>(&::GlobalNamespace::OVRSampledEventSender::Send)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5d2fd1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSampledEventSender*>::get(), "Send",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSampledEventSender.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSampledEventSender::*)()>(&::GlobalNamespace::OVRSampledEventSender::Start)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5d2fe90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSampledEventSender*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSampledEventSender.ShouldSendEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float_t)>(&::GlobalNamespace::OVRSampledEventSender::ShouldSendEvent)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5d2ff9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSampledEventSender*>::get(), "ShouldSendEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRTelemetryMarker& GlobalNamespace::OVRSampledEventSender::__cordl_internal_get__marker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____marker;
}
constexpr ::GlobalNamespace::OVRTelemetryMarker const& GlobalNamespace::OVRSampledEventSender::__cordl_internal_get__marker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____marker;
}
constexpr void GlobalNamespace::OVRSampledEventSender::__cordl_internal_set__marker(::GlobalNamespace::OVRTelemetryMarker value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____marker = value;
}
constexpr bool& GlobalNamespace::OVRSampledEventSender::__cordl_internal_get__shouldSend() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldSend;
}
constexpr bool const& GlobalNamespace::OVRSampledEventSender::__cordl_internal_get__shouldSend() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldSend;
}
constexpr void GlobalNamespace::OVRSampledEventSender::__cordl_internal_set__shouldSend(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shouldSend = value;
}
constexpr float_t& GlobalNamespace::OVRSampledEventSender::__cordl_internal_get__recordChance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordChance;
}
constexpr float_t const& GlobalNamespace::OVRSampledEventSender::__cordl_internal_get__recordChance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordChance;
}
constexpr void GlobalNamespace::OVRSampledEventSender::__cordl_internal_set__recordChance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____recordChance = value;
}
constexpr int32_t& GlobalNamespace::OVRSampledEventSender::__cordl_internal_get__markerId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____markerId;
}
constexpr int32_t const& GlobalNamespace::OVRSampledEventSender::__cordl_internal_get__markerId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____markerId;
}
constexpr void GlobalNamespace::OVRSampledEventSender::__cordl_internal_set__markerId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____markerId = value;
}
constexpr ::System::Func_2<::GlobalNamespace::OVRTelemetryMarker, ::GlobalNamespace::OVRTelemetryMarker>*& GlobalNamespace::OVRSampledEventSender::__cordl_internal_get__addAnnotationsFunc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____addAnnotationsFunc;
}
constexpr ::System::Func_2<::GlobalNamespace::OVRTelemetryMarker, ::GlobalNamespace::OVRTelemetryMarker>* const&
GlobalNamespace::OVRSampledEventSender::__cordl_internal_get__addAnnotationsFunc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____addAnnotationsFunc;
}
constexpr void GlobalNamespace::OVRSampledEventSender::__cordl_internal_set__addAnnotationsFunc(::System::Func_2<::GlobalNamespace::OVRTelemetryMarker, ::GlobalNamespace::OVRTelemetryMarker>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____addAnnotationsFunc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OVRSampledEventSender::_ctor(int32_t markerId, float_t recordRecordChance,
                                                          ::System::Func_2<::GlobalNamespace::OVRTelemetryMarker, ::GlobalNamespace::OVRTelemetryMarker>* addAnnotationsFunc) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSampledEventSender*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 3>{
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::GlobalNamespace::OVRTelemetryMarker, ::GlobalNamespace::OVRTelemetryMarker>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, markerId, recordRecordChance, addAnnotationsFunc);
}
inline void GlobalNamespace::OVRSampledEventSender::Send() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSampledEventSender*>::get(), "Send",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSampledEventSender::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSampledEventSender*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSampledEventSender::ShouldSendEvent(float_t chance) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSampledEventSender*>::get(), "ShouldSendEvent",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, chance);
}
inline ::GlobalNamespace::OVRSampledEventSender*
GlobalNamespace::OVRSampledEventSender::New_ctor(int32_t markerId, float_t recordRecordChance,
                                                 ::System::Func_2<::GlobalNamespace::OVRTelemetryMarker, ::GlobalNamespace::OVRTelemetryMarker>* addAnnotationsFunc) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRSampledEventSender*>(markerId, recordRecordChance, addAnnotationsFunc));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSampledEventSender::OVRSampledEventSender() {}
