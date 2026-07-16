#pragma once
// IWYU pragma private; include "GlobalNamespace/InstantMenuButtonTrigger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__InstantMenuButtonTrigger_def.hpp"
#include "GlobalNamespace/zzzz__IMenuButtonTrigger_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "Zenject/zzzz__ITickable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InstantMenuButtonTrigger.add_menuButtonTriggeredEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InstantMenuButtonTrigger::*)(::System::Action*)>(
    &::GlobalNamespace::InstantMenuButtonTrigger::add_menuButtonTriggeredEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x327da9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InstantMenuButtonTrigger*>(), { "add_menuButtonTriggeredEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InstantMenuButtonTrigger.remove_menuButtonTriggeredEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InstantMenuButtonTrigger::*)(::System::Action*)>(
    &::GlobalNamespace::InstantMenuButtonTrigger::remove_menuButtonTriggeredEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x327db48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InstantMenuButtonTrigger*>(), { "remove_menuButtonTriggeredEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InstantMenuButtonTrigger.Tick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InstantMenuButtonTrigger::*)()>(&::GlobalNamespace::InstantMenuButtonTrigger::Tick)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x327dbf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InstantMenuButtonTrigger*>(), { "Tick", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InstantMenuButtonTrigger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InstantMenuButtonTrigger::*)()>(&::GlobalNamespace::InstantMenuButtonTrigger::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x327dcc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InstantMenuButtonTrigger*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IVRPlatformHelper*& GlobalNamespace::InstantMenuButtonTrigger::__cordl_internal_get__vrPlatformHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr ::GlobalNamespace::IVRPlatformHelper* const& GlobalNamespace::InstantMenuButtonTrigger::__cordl_internal_get__vrPlatformHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr void GlobalNamespace::InstantMenuButtonTrigger::__cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____vrPlatformHelper = value;
}
constexpr ::System::Action*& GlobalNamespace::InstantMenuButtonTrigger::__cordl_internal_get_menuButtonTriggeredEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___menuButtonTriggeredEvent;
}
constexpr ::System::Action* const& GlobalNamespace::InstantMenuButtonTrigger::__cordl_internal_get_menuButtonTriggeredEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___menuButtonTriggeredEvent;
}
constexpr void GlobalNamespace::InstantMenuButtonTrigger::__cordl_internal_set_menuButtonTriggeredEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___menuButtonTriggeredEvent = value;
}
inline void GlobalNamespace::InstantMenuButtonTrigger::add_menuButtonTriggeredEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InstantMenuButtonTrigger*>(), { "add_menuButtonTriggeredEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::InstantMenuButtonTrigger::remove_menuButtonTriggeredEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InstantMenuButtonTrigger*>(), { "remove_menuButtonTriggeredEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::InstantMenuButtonTrigger::Tick() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InstantMenuButtonTrigger*>(), { "Tick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::InstantMenuButtonTrigger::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InstantMenuButtonTrigger*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::InstantMenuButtonTrigger* GlobalNamespace::InstantMenuButtonTrigger::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::InstantMenuButtonTrigger*>());
}
/// @brief Convert operator to "::Zenject::ITickable"
constexpr GlobalNamespace::InstantMenuButtonTrigger::operator ::Zenject::ITickable*() noexcept {
  return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::ITickable"
constexpr ::Zenject::ITickable* GlobalNamespace::InstantMenuButtonTrigger::i___Zenject__ITickable() noexcept {
  return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IMenuButtonTrigger"
constexpr GlobalNamespace::InstantMenuButtonTrigger::operator ::GlobalNamespace::IMenuButtonTrigger*() noexcept {
  return static_cast<::GlobalNamespace::IMenuButtonTrigger*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IMenuButtonTrigger"
constexpr ::GlobalNamespace::IMenuButtonTrigger* GlobalNamespace::InstantMenuButtonTrigger::i___GlobalNamespace__IMenuButtonTrigger() noexcept {
  return static_cast<::GlobalNamespace::IMenuButtonTrigger*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InstantMenuButtonTrigger::InstantMenuButtonTrigger() {}
