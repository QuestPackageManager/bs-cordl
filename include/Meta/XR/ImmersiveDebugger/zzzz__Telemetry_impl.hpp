#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Telemetry.hpp"
#include "GlobalNamespace/zzzz__OVRTelemetryMarker_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__Telemetry_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__DebugManager_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__IDebugManager_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Button_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Panel_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceCache_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__Telemetry_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Telemetry_MarkerId::Telemetry_MarkerId() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::ImmersiveDebugger::Telemetry_State::Telemetry_State(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Telemetry_State::Telemetry_State() {}
constexpr ::Meta::XR::ImmersiveDebugger::Telemetry_State Meta::XR::ImmersiveDebugger::Telemetry_State::OnStart{ static_cast<int32_t>(0x0) };
constexpr ::Meta::XR::ImmersiveDebugger::Telemetry_State Meta::XR::ImmersiveDebugger::Telemetry_State::OnFocusLost{ static_cast<int32_t>(0x1) };
constexpr ::Meta::XR::ImmersiveDebugger::Telemetry_State Meta::XR::ImmersiveDebugger::Telemetry_State::OnDisable{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::ImmersiveDebugger::Telemetry_Method::Telemetry_Method(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Telemetry_Method::Telemetry_Method() {}
constexpr ::Meta::XR::ImmersiveDebugger::Telemetry_Method Meta::XR::ImmersiveDebugger::Telemetry_Method::Attributes{ static_cast<int32_t>(0x0) };
constexpr ::Meta::XR::ImmersiveDebugger::Telemetry_Method Meta::XR::ImmersiveDebugger::Telemetry_Method::DebugInspector{ static_cast<int32_t>(0x1) };
constexpr ::Meta::XR::ImmersiveDebugger::Telemetry_Method Meta::XR::ImmersiveDebugger::Telemetry_Method::Hierarchy{ static_cast<int32_t>(0x2) };
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Telemetry_AnnotationType::Telemetry_AnnotationType() {}
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker* (*)(::Meta::XR::ImmersiveDebugger::Telemetry_Method,
                                                                               ::System::Collections::Generic::IEnumerable_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>*,
                                                                               ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*, ::Meta::XR::ImmersiveDebugger::Manager::DebugManager*)>(
        &::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker::Init)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x582db98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Telemetry_Method>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker::*)(
    ::Meta::XR::ImmersiveDebugger::Telemetry_Method, ::System::Collections::Generic::IEnumerable_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>*,
    ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*)>(&::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker::_ctor)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x582dcc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Telemetry_Method>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker.OnStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker::*)()>(
    &::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker::OnStart)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x582de74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker*>::get(), "OnStart",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker.OnFocusLost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker::*)()>(
    &::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker::OnFocusLost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x582e8bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker*>::get(), "OnFocusLost",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker::*)()>(
    &::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker::OnDisable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x582e8c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker*>::get(), "OnDisable",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker.SendStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker::*)()>(
    &::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker::SendStart)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x582dea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker*>::get(), "SendStart",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker.SendComponentTracked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker::*)(::Meta::XR::ImmersiveDebugger::Telemetry_State)>(
    &::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker::SendComponentTracked)> {
  constexpr static std::size_t size = 0x9f4;
  constexpr static std::size_t addrs = 0x582dec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker*>::get(), "SendComponentTracked", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Telemetry_State>::get() })));
    return ___internal_method;
  }
};
constexpr ::Meta::XR::ImmersiveDebugger::Telemetry_Method& Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker::__cordl_internal_get__method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____method;
}
constexpr ::Meta::XR::ImmersiveDebugger::Telemetry_Method const& Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker::__cordl_internal_get__method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____method;
}
constexpr void Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker::__cordl_internal_set__method(::Meta::XR::ImmersiveDebugger::Telemetry_Method value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____method = value;
}
constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*& Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker::__cordl_internal_get__cache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cache;
}
constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* const& Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker::__cordl_internal_get__cache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cache;
}
constexpr void Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker::__cordl_internal_set__cache(::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IEnumerable_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>*&
Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker::__cordl_internal_get__managers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____managers;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>* const&
Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker::__cordl_internal_get__managers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____managers;
}
constexpr void
Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker::__cordl_internal_set__managers(::System::Collections::Generic::IEnumerable_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____managers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRTelemetryMarker& Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker::__cordl_internal_get__runTelemetryMarker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____runTelemetryMarker;
}
constexpr ::GlobalNamespace::OVRTelemetryMarker const& Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker::__cordl_internal_get__runTelemetryMarker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____runTelemetryMarker;
}
constexpr void Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker::__cordl_internal_set__runTelemetryMarker(::GlobalNamespace::OVRTelemetryMarker value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____runTelemetryMarker = value;
}
inline ::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker*
Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker::Init(::Meta::XR::ImmersiveDebugger::Telemetry_Method method,
                                                              ::System::Collections::Generic::IEnumerable_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>* managers,
                                                              ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* cache, ::Meta::XR::ImmersiveDebugger::Manager::DebugManager* debugManager) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Telemetry_Method>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker*, false>(nullptr, ___internal_method, method, managers, cache, debugManager);
}
inline void Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker::_ctor(::Meta::XR::ImmersiveDebugger::Telemetry_Method method,
                                                                           ::System::Collections::Generic::IEnumerable_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>* managers,
                                                                           ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* cache) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Telemetry_Method>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, method, managers, cache);
}
inline void Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker::OnStart() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker*>::get(),
                                                                             "OnStart", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker::OnFocusLost() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker*>::get(),
                                                                             "OnFocusLost", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker*>::get(),
                                                                             "OnDisable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker::SendStart() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker*>::get(),
                                                                             "SendStart", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker::SendComponentTracked(::Meta::XR::ImmersiveDebugger::Telemetry_State state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker*>::get(), "SendComponentTracked", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Telemetry_State>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline ::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker*
Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker::New_ctor(::Meta::XR::ImmersiveDebugger::Telemetry_Method method,
                                                                  ::System::Collections::Generic::IEnumerable_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>* managers,
                                                                  ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* cache) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker*>(method, managers, cache));
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker::Telemetry_TelemetryTracker() {}
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Telemetry.GetTypeHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Type*)>(&::Meta::XR::ImmersiveDebugger::Telemetry::GetTypeHash)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x582d290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Telemetry*>::get(), "GetTypeHash", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Telemetry.IsTypeCustom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&::Meta::XR::ImmersiveDebugger::Telemetry::IsTypeCustom)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x582d2f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Telemetry*>::get(), "IsTypeCustom", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Telemetry.OnPanelActiveStateChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*)>(
    &::Meta::XR::ImmersiveDebugger::Telemetry::OnPanelActiveStateChanged)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x582d484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Telemetry*>::get(), "OnPanelActiveStateChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Telemetry.OnButtonClicked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Button*)>(
    &::Meta::XR::ImmersiveDebugger::Telemetry::OnButtonClicked)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x582d650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Telemetry*>::get(), "OnButtonClicked", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Button*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Telemetry.FetchPanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel> (*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*)>(&::Meta::XR::ImmersiveDebugger::Telemetry::FetchPanel)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x582d904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Telemetry*>::get(), "FetchPanel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::ImmersiveDebugger::Telemetry::setStaticF_NonCustomAssemblies(::System::Collections::Generic::List_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::StringW>*, "NonCustomAssemblies",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Telemetry*>::get>(
      std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::List_1<::StringW>* Meta::XR::ImmersiveDebugger::Telemetry::getStaticF_NonCustomAssemblies() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::StringW>*, "NonCustomAssemblies",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Telemetry*>::get>();
}
inline ::StringW Meta::XR::ImmersiveDebugger::Telemetry::GetTypeHash(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Telemetry*>::get(), "GetTypeHash", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, type);
}
inline bool Meta::XR::ImmersiveDebugger::Telemetry::IsTypeCustom(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Telemetry*>::get(), "IsTypeCustom", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type);
}
inline void Meta::XR::ImmersiveDebugger::Telemetry::OnPanelActiveStateChanged(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel* panel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Telemetry*>::get(), "OnPanelActiveStateChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, panel);
}
inline void Meta::XR::ImmersiveDebugger::Telemetry::OnButtonClicked(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Button* button) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Telemetry*>::get(), "OnButtonClicked", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Button*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, button);
}
inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel>
Meta::XR::ImmersiveDebugger::Telemetry::FetchPanel(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* controller) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Telemetry*>::get(), "FetchPanel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel>, false>(nullptr, ___internal_method, controller);
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Telemetry::Telemetry() {}
