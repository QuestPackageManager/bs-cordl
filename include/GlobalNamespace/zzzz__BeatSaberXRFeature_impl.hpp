#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatSaberXRFeature.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_impl.hpp"
#include "GlobalNamespace/zzzz__BeatSaberXRFeature_def.hpp"
#include "GlobalNamespace/zzzz__BeatSaberXRFeature_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatSaberXRFeature_SessionState::BeatSaberXRFeature_SessionState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatSaberXRFeature_SessionState::BeatSaberXRFeature_SessionState() {}
constexpr ::GlobalNamespace::BeatSaberXRFeature_SessionState GlobalNamespace::BeatSaberXRFeature_SessionState::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::BeatSaberXRFeature_SessionState GlobalNamespace::BeatSaberXRFeature_SessionState::Idle{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::BeatSaberXRFeature_SessionState GlobalNamespace::BeatSaberXRFeature_SessionState::Ready{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::BeatSaberXRFeature_SessionState GlobalNamespace::BeatSaberXRFeature_SessionState::Synchronized{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::BeatSaberXRFeature_SessionState GlobalNamespace::BeatSaberXRFeature_SessionState::Visible{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::BeatSaberXRFeature_SessionState GlobalNamespace::BeatSaberXRFeature_SessionState::Focused{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::BeatSaberXRFeature_SessionState GlobalNamespace::BeatSaberXRFeature_SessionState::Stopping{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::BeatSaberXRFeature_SessionState GlobalNamespace::BeatSaberXRFeature_SessionState::Pending{ static_cast<int32_t>(0x7) };
constexpr ::GlobalNamespace::BeatSaberXRFeature_SessionState GlobalNamespace::BeatSaberXRFeature_SessionState::Exiting{ static_cast<int32_t>(0x8) };
//  Writing Method size for method: ::GlobalNamespace::BeatSaberXRFeature.get_currentSessionState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatSaberXRFeature_SessionState (::GlobalNamespace::BeatSaberXRFeature::*)()>(
    &::GlobalNamespace::BeatSaberXRFeature::get_currentSessionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x563fd50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberXRFeature*>::get(),
                                                                               "get_currentSessionState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberXRFeature.set_currentSessionState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatSaberXRFeature::*)(::GlobalNamespace::BeatSaberXRFeature_SessionState)>(
    &::GlobalNamespace::BeatSaberXRFeature::set_currentSessionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x563fd58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberXRFeature*>::get(), "set_currentSessionState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatSaberXRFeature_SessionState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberXRFeature.add_sessionStateChangedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::BeatSaberXRFeature::*)(::System::Action_2<::GlobalNamespace::BeatSaberXRFeature_SessionState, ::GlobalNamespace::BeatSaberXRFeature_SessionState>*)>(
        &::GlobalNamespace::BeatSaberXRFeature::add_sessionStateChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x563fd60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberXRFeature*>::get(), "add_sessionStateChangedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_2<::GlobalNamespace::BeatSaberXRFeature_SessionState, ::GlobalNamespace::BeatSaberXRFeature_SessionState>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberXRFeature.remove_sessionStateChangedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::BeatSaberXRFeature::*)(::System::Action_2<::GlobalNamespace::BeatSaberXRFeature_SessionState, ::GlobalNamespace::BeatSaberXRFeature_SessionState>*)>(
        &::GlobalNamespace::BeatSaberXRFeature::remove_sessionStateChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x563fe20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberXRFeature*>::get(), "remove_sessionStateChangedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_2<::GlobalNamespace::BeatSaberXRFeature_SessionState, ::GlobalNamespace::BeatSaberXRFeature_SessionState>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberXRFeature.OnSessionStateChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatSaberXRFeature::*)(int32_t, int32_t)>(
    &::GlobalNamespace::BeatSaberXRFeature::OnSessionStateChange)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x563fee0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberXRFeature*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberXRFeature*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberXRFeature._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatSaberXRFeature::*)()>(&::GlobalNamespace::BeatSaberXRFeature::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x563ff00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberXRFeature*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatSaberXRFeature_SessionState& GlobalNamespace::BeatSaberXRFeature::__cordl_internal_get__currentSessionState_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentSessionState_k__BackingField;
}
constexpr ::GlobalNamespace::BeatSaberXRFeature_SessionState const& GlobalNamespace::BeatSaberXRFeature::__cordl_internal_get__currentSessionState_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentSessionState_k__BackingField;
}
constexpr void GlobalNamespace::BeatSaberXRFeature::__cordl_internal_set__currentSessionState_k__BackingField(::GlobalNamespace::BeatSaberXRFeature_SessionState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentSessionState_k__BackingField = value;
}
constexpr ::System::Action_2<::GlobalNamespace::BeatSaberXRFeature_SessionState, ::GlobalNamespace::BeatSaberXRFeature_SessionState>*&
GlobalNamespace::BeatSaberXRFeature::__cordl_internal_get_sessionStateChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sessionStateChangedEvent;
}
constexpr ::System::Action_2<::GlobalNamespace::BeatSaberXRFeature_SessionState, ::GlobalNamespace::BeatSaberXRFeature_SessionState>* const&
GlobalNamespace::BeatSaberXRFeature::__cordl_internal_get_sessionStateChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sessionStateChangedEvent;
}
constexpr void GlobalNamespace::BeatSaberXRFeature::__cordl_internal_set_sessionStateChangedEvent(
    ::System::Action_2<::GlobalNamespace::BeatSaberXRFeature_SessionState, ::GlobalNamespace::BeatSaberXRFeature_SessionState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sessionStateChangedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::BeatSaberXRFeature_SessionState GlobalNamespace::BeatSaberXRFeature::get_currentSessionState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberXRFeature*>::get(),
                                                                             "get_currentSessionState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatSaberXRFeature_SessionState, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatSaberXRFeature::set_currentSessionState(::GlobalNamespace::BeatSaberXRFeature_SessionState value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberXRFeature*>::get(), "set_currentSessionState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatSaberXRFeature_SessionState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void
GlobalNamespace::BeatSaberXRFeature::add_sessionStateChangedEvent(::System::Action_2<::GlobalNamespace::BeatSaberXRFeature_SessionState, ::GlobalNamespace::BeatSaberXRFeature_SessionState>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberXRFeature*>::get(), "add_sessionStateChangedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_2<::GlobalNamespace::BeatSaberXRFeature_SessionState, ::GlobalNamespace::BeatSaberXRFeature_SessionState>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatSaberXRFeature::remove_sessionStateChangedEvent(
    ::System::Action_2<::GlobalNamespace::BeatSaberXRFeature_SessionState, ::GlobalNamespace::BeatSaberXRFeature_SessionState>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberXRFeature*>::get(), "remove_sessionStateChangedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_2<::GlobalNamespace::BeatSaberXRFeature_SessionState, ::GlobalNamespace::BeatSaberXRFeature_SessionState>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatSaberXRFeature::OnSessionStateChange(int32_t oldState, int32_t newState) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberXRFeature*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldState, newState);
}
inline void GlobalNamespace::BeatSaberXRFeature::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberXRFeature*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatSaberXRFeature* GlobalNamespace::BeatSaberXRFeature::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatSaberXRFeature*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatSaberXRFeature::BeatSaberXRFeature() {}
