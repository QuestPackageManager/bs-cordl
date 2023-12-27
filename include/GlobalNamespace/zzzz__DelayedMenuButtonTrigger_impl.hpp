#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__DelayedMenuButtonTrigger_def.hpp"
#include "Zenject/zzzz__ITickable_def.hpp"
#include "GlobalNamespace/zzzz__IMenuButtonTrigger_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DelayedMenuButtonTrigger.add_menuButtonTriggeredEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelayedMenuButtonTrigger::*)(::System::Action*)>(
    &::GlobalNamespace::DelayedMenuButtonTrigger::add_menuButtonTriggeredEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23c3e2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelayedMenuButtonTrigger*>::get(), "add_menuButtonTriggeredEvent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelayedMenuButtonTrigger.remove_menuButtonTriggeredEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelayedMenuButtonTrigger::*)(::System::Action*)>(
    &::GlobalNamespace::DelayedMenuButtonTrigger::remove_menuButtonTriggeredEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23c3ec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelayedMenuButtonTrigger*>::get(), "remove_menuButtonTriggeredEvent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelayedMenuButtonTrigger.Tick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelayedMenuButtonTrigger::*)()>(&::GlobalNamespace::DelayedMenuButtonTrigger::Tick)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x23c3f64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelayedMenuButtonTrigger*>::get(), "Tick",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelayedMenuButtonTrigger._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelayedMenuButtonTrigger::*)()>(&::GlobalNamespace::DelayedMenuButtonTrigger::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x23c4074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelayedMenuButtonTrigger*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Zenject::ITickable"
constexpr GlobalNamespace::DelayedMenuButtonTrigger::operator ::Zenject::ITickable*() noexcept {
  return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IMenuButtonTrigger"
constexpr GlobalNamespace::DelayedMenuButtonTrigger::operator ::GlobalNamespace::IMenuButtonTrigger*() noexcept {
  return static_cast<::GlobalNamespace::IMenuButtonTrigger*>(static_cast<void*>(this));
}
constexpr ::System::Action*& GlobalNamespace::DelayedMenuButtonTrigger::__get_menuButtonTriggeredEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___menuButtonTriggeredEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::DelayedMenuButtonTrigger::__get_menuButtonTriggeredEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___menuButtonTriggeredEvent;
}
constexpr void GlobalNamespace::DelayedMenuButtonTrigger::__set_menuButtonTriggeredEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___menuButtonTriggeredEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::DelayedMenuButtonTrigger::__get__pressDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____pressDuration;
}
constexpr float_t const& GlobalNamespace::DelayedMenuButtonTrigger::__get__pressDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____pressDuration;
}
constexpr void GlobalNamespace::DelayedMenuButtonTrigger::__set__pressDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____pressDuration = value;
}
constexpr float_t& GlobalNamespace::DelayedMenuButtonTrigger::__get__timer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____timer;
}
constexpr float_t const& GlobalNamespace::DelayedMenuButtonTrigger::__get__timer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____timer;
}
constexpr void GlobalNamespace::DelayedMenuButtonTrigger::__set__timer(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____timer = value;
}
constexpr bool& GlobalNamespace::DelayedMenuButtonTrigger::__get__waitingForButtonRelease() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____waitingForButtonRelease;
}
constexpr bool const& GlobalNamespace::DelayedMenuButtonTrigger::__get__waitingForButtonRelease() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____waitingForButtonRelease;
}
constexpr void GlobalNamespace::DelayedMenuButtonTrigger::__set__waitingForButtonRelease(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____waitingForButtonRelease = value;
}
constexpr ::GlobalNamespace::IVRPlatformHelper*& GlobalNamespace::DelayedMenuButtonTrigger::__get__vrPlatformHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____vrPlatformHelper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& GlobalNamespace::DelayedMenuButtonTrigger::__get__vrPlatformHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____vrPlatformHelper;
}
constexpr void GlobalNamespace::DelayedMenuButtonTrigger::__set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vrPlatformHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::DelayedMenuButtonTrigger::add_menuButtonTriggeredEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelayedMenuButtonTrigger*>::get(), "add_menuButtonTriggeredEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::DelayedMenuButtonTrigger::remove_menuButtonTriggeredEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelayedMenuButtonTrigger*>::get(), "remove_menuButtonTriggeredEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::DelayedMenuButtonTrigger::Tick() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelayedMenuButtonTrigger*>::get(), "Tick",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DelayedMenuButtonTrigger* GlobalNamespace::DelayedMenuButtonTrigger::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DelayedMenuButtonTrigger*>());
}
inline void GlobalNamespace::DelayedMenuButtonTrigger::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelayedMenuButtonTrigger*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DelayedMenuButtonTrigger::DelayedMenuButtonTrigger() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
