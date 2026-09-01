#pragma once
// IWYU pragma private; include "GlobalNamespace\DelayedMenuButtonTrigger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__DelayedMenuButtonTrigger_def.hpp"
#include "GlobalNamespace/zzzz__IMenuButtonTrigger_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "Zenject/zzzz__ITickable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DelayedMenuButtonTrigger.add_menuButtonTriggeredEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DelayedMenuButtonTrigger::*)(::System::Action*)>(
    &::GlobalNamespace::DelayedMenuButtonTrigger::add_menuButtonTriggeredEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x327e864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DelayedMenuButtonTrigger*>(), { "add_menuButtonTriggeredEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelayedMenuButtonTrigger.remove_menuButtonTriggeredEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DelayedMenuButtonTrigger::*)(::System::Action*)>(
    &::GlobalNamespace::DelayedMenuButtonTrigger::remove_menuButtonTriggeredEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x327e910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DelayedMenuButtonTrigger*>(), { "remove_menuButtonTriggeredEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelayedMenuButtonTrigger.Tick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DelayedMenuButtonTrigger::*)()>(&::GlobalNamespace::DelayedMenuButtonTrigger::Tick)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x327e9bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DelayedMenuButtonTrigger*>(), { "Tick", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelayedMenuButtonTrigger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DelayedMenuButtonTrigger::*)()>(&::GlobalNamespace::DelayedMenuButtonTrigger::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x327eae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DelayedMenuButtonTrigger*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::DelayedMenuButtonTrigger::__cordl_internal_get__pressDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressDuration;
}
constexpr float_t const& GlobalNamespace::DelayedMenuButtonTrigger::__cordl_internal_get__pressDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressDuration;
}
constexpr void GlobalNamespace::DelayedMenuButtonTrigger::__cordl_internal_set__pressDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pressDuration = value;
}
constexpr ::GlobalNamespace::IVRPlatformHelper*& GlobalNamespace::DelayedMenuButtonTrigger::__cordl_internal_get__vrPlatformHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr ::GlobalNamespace::IVRPlatformHelper* const& GlobalNamespace::DelayedMenuButtonTrigger::__cordl_internal_get__vrPlatformHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr void GlobalNamespace::DelayedMenuButtonTrigger::__cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____vrPlatformHelper = value;
}
constexpr ::System::Action*& GlobalNamespace::DelayedMenuButtonTrigger::__cordl_internal_get_menuButtonTriggeredEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___menuButtonTriggeredEvent;
}
constexpr ::System::Action* const& GlobalNamespace::DelayedMenuButtonTrigger::__cordl_internal_get_menuButtonTriggeredEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___menuButtonTriggeredEvent;
}
constexpr void GlobalNamespace::DelayedMenuButtonTrigger::__cordl_internal_set_menuButtonTriggeredEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___menuButtonTriggeredEvent = value;
}
constexpr float_t& GlobalNamespace::DelayedMenuButtonTrigger::__cordl_internal_get__timer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timer;
}
constexpr float_t const& GlobalNamespace::DelayedMenuButtonTrigger::__cordl_internal_get__timer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timer;
}
constexpr void GlobalNamespace::DelayedMenuButtonTrigger::__cordl_internal_set__timer(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timer = value;
}
constexpr bool& GlobalNamespace::DelayedMenuButtonTrigger::__cordl_internal_get__waitingForButtonRelease() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____waitingForButtonRelease;
}
constexpr bool const& GlobalNamespace::DelayedMenuButtonTrigger::__cordl_internal_get__waitingForButtonRelease() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____waitingForButtonRelease;
}
constexpr void GlobalNamespace::DelayedMenuButtonTrigger::__cordl_internal_set__waitingForButtonRelease(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____waitingForButtonRelease = value;
}
inline void GlobalNamespace::DelayedMenuButtonTrigger::add_menuButtonTriggeredEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DelayedMenuButtonTrigger*>(), { "add_menuButtonTriggeredEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::DelayedMenuButtonTrigger::remove_menuButtonTriggeredEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DelayedMenuButtonTrigger*>(), { "remove_menuButtonTriggeredEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::DelayedMenuButtonTrigger::Tick() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DelayedMenuButtonTrigger*>(), { "Tick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DelayedMenuButtonTrigger::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DelayedMenuButtonTrigger*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DelayedMenuButtonTrigger* GlobalNamespace::DelayedMenuButtonTrigger::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DelayedMenuButtonTrigger*>());
}
/// @brief Convert operator to "::Zenject::ITickable"
constexpr GlobalNamespace::DelayedMenuButtonTrigger::operator ::Zenject::ITickable*() noexcept {
  return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::ITickable"
constexpr ::Zenject::ITickable* GlobalNamespace::DelayedMenuButtonTrigger::i___Zenject__ITickable() noexcept {
  return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IMenuButtonTrigger"
constexpr GlobalNamespace::DelayedMenuButtonTrigger::operator ::GlobalNamespace::IMenuButtonTrigger*() noexcept {
  return static_cast<::GlobalNamespace::IMenuButtonTrigger*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IMenuButtonTrigger"
constexpr ::GlobalNamespace::IMenuButtonTrigger* GlobalNamespace::DelayedMenuButtonTrigger::i___GlobalNamespace__IMenuButtonTrigger() noexcept {
  return static_cast<::GlobalNamespace::IMenuButtonTrigger*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DelayedMenuButtonTrigger::DelayedMenuButtonTrigger() {}
