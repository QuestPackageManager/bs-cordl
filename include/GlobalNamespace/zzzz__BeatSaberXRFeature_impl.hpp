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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatSaberXRFeature_SessionState (::GlobalNamespace::BeatSaberXRFeature::*)()>(
    &::GlobalNamespace::BeatSaberXRFeature::get_currentSessionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x585c18c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberXRFeature*>(), { "get_currentSessionState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberXRFeature.set_currentSessionState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberXRFeature::*)(::GlobalNamespace::BeatSaberXRFeature_SessionState)>(
    &::GlobalNamespace::BeatSaberXRFeature::set_currentSessionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x585c194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberXRFeature*>(), { "set_currentSessionState", {}, { ::i2c::type_of<::GlobalNamespace::BeatSaberXRFeature_SessionState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberXRFeature.add_sessionStateChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::BeatSaberXRFeature::*)(::System::Action_2<::GlobalNamespace::BeatSaberXRFeature_SessionState, ::GlobalNamespace::BeatSaberXRFeature_SessionState>*)>(
        &::GlobalNamespace::BeatSaberXRFeature::add_sessionStateChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x585c19c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberXRFeature*>(),
                                         { "add_sessionStateChangedEvent",
                                           {},
                                           { ::i2c::type_of<::System::Action_2<::GlobalNamespace::BeatSaberXRFeature_SessionState, ::GlobalNamespace::BeatSaberXRFeature_SessionState>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberXRFeature.remove_sessionStateChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::BeatSaberXRFeature::*)(::System::Action_2<::GlobalNamespace::BeatSaberXRFeature_SessionState, ::GlobalNamespace::BeatSaberXRFeature_SessionState>*)>(
        &::GlobalNamespace::BeatSaberXRFeature::remove_sessionStateChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x585c25c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberXRFeature*>(),
                                         { "remove_sessionStateChangedEvent",
                                           {},
                                           { ::i2c::type_of<::System::Action_2<::GlobalNamespace::BeatSaberXRFeature_SessionState, ::GlobalNamespace::BeatSaberXRFeature_SessionState>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberXRFeature.OnSessionStateChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberXRFeature::*)(int32_t, int32_t)>(&::GlobalNamespace::BeatSaberXRFeature::OnSessionStateChange)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x585c31c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberXRFeature*>(), { ::i2c::class_of<::GlobalNamespace::BeatSaberXRFeature*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberXRFeature._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberXRFeature::*)()>(&::GlobalNamespace::BeatSaberXRFeature::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x585c33c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberXRFeature*>(), { ".ctor", {}, {} })));
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
  this->___sessionStateChangedEvent = value;
}
inline ::GlobalNamespace::BeatSaberXRFeature_SessionState GlobalNamespace::BeatSaberXRFeature::get_currentSessionState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberXRFeature*>(), { "get_currentSessionState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatSaberXRFeature_SessionState>(this, ___internal_method);
}
inline void GlobalNamespace::BeatSaberXRFeature::set_currentSessionState(::GlobalNamespace::BeatSaberXRFeature_SessionState value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberXRFeature*>(),
                                                                                         { "set_currentSessionState", {}, { ::i2c::type_of<::GlobalNamespace::BeatSaberXRFeature_SessionState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void
GlobalNamespace::BeatSaberXRFeature::add_sessionStateChangedEvent(::System::Action_2<::GlobalNamespace::BeatSaberXRFeature_SessionState, ::GlobalNamespace::BeatSaberXRFeature_SessionState>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::BeatSaberXRFeature*>(),
          { "add_sessionStateChangedEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::BeatSaberXRFeature_SessionState, ::GlobalNamespace::BeatSaberXRFeature_SessionState>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatSaberXRFeature::remove_sessionStateChangedEvent(
    ::System::Action_2<::GlobalNamespace::BeatSaberXRFeature_SessionState, ::GlobalNamespace::BeatSaberXRFeature_SessionState>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberXRFeature*>(),
                                              { "remove_sessionStateChangedEvent",
                                                {},
                                                { ::i2c::type_of<::System::Action_2<::GlobalNamespace::BeatSaberXRFeature_SessionState, ::GlobalNamespace::BeatSaberXRFeature_SessionState>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatSaberXRFeature::OnSessionStateChange(int32_t oldState, int32_t newState) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatSaberXRFeature*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldState, newState);
}
inline void GlobalNamespace::BeatSaberXRFeature::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberXRFeature*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatSaberXRFeature* GlobalNamespace::BeatSaberXRFeature::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatSaberXRFeature*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatSaberXRFeature::BeatSaberXRFeature() {}
