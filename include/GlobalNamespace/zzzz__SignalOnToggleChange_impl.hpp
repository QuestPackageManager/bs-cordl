#pragma once
// IWYU pragma private; include "GlobalNamespace\SignalOnToggleChange.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SignalOnToggleChange_def.hpp"
#include "GlobalNamespace/zzzz__Signal_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SignalOnToggleChange.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SignalOnToggleChange::*)()>(&::GlobalNamespace::SignalOnToggleChange::Start)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5858fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SignalOnToggleChange*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SignalOnToggleChange.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SignalOnToggleChange::*)()>(&::GlobalNamespace::SignalOnToggleChange::OnDestroy)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5859090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SignalOnToggleChange*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SignalOnToggleChange.RaiseSignal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SignalOnToggleChange::*)(bool)>(&::GlobalNamespace::SignalOnToggleChange::RaiseSignal)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58591c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SignalOnToggleChange*>(), { "RaiseSignal", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SignalOnToggleChange._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SignalOnToggleChange::*)()>(&::GlobalNamespace::SignalOnToggleChange::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58591dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SignalOnToggleChange*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::Signal>& GlobalNamespace::SignalOnToggleChange::__cordl_internal_get__toggleValueChangeSignal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleValueChangeSignal;
}
constexpr ::UnityW<::GlobalNamespace::Signal> const& GlobalNamespace::SignalOnToggleChange::__cordl_internal_get__toggleValueChangeSignal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleValueChangeSignal;
}
constexpr void GlobalNamespace::SignalOnToggleChange::__cordl_internal_set__toggleValueChangeSignal(::UnityW<::GlobalNamespace::Signal> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____toggleValueChangeSignal = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::SignalOnToggleChange::__cordl_internal_get__toggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::SignalOnToggleChange::__cordl_internal_get__toggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggle;
}
constexpr void GlobalNamespace::SignalOnToggleChange::__cordl_internal_set__toggle(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____toggle = value;
}
inline void GlobalNamespace::SignalOnToggleChange::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SignalOnToggleChange*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SignalOnToggleChange::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SignalOnToggleChange*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SignalOnToggleChange::RaiseSignal(bool newValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SignalOnToggleChange*>(), { "RaiseSignal", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
inline void GlobalNamespace::SignalOnToggleChange::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SignalOnToggleChange*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SignalOnToggleChange* GlobalNamespace::SignalOnToggleChange::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SignalOnToggleChange*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SignalOnToggleChange::SignalOnToggleChange() {}
