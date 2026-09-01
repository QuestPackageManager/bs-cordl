#pragma once
// IWYU pragma private; include "GlobalNamespace\ShowTextOnGameEventController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ShowTextOnGameEventController_def.hpp"
#include "GlobalNamespace/zzzz__ShowTextOnGameEventController_def.hpp"
#include "GlobalNamespace/zzzz__Signal_def.hpp"
#include "GlobalNamespace/zzzz__TextFadeTransitions_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::*)(::GlobalNamespace::TextFadeTransitions*)>(
    &::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::Init)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x59eca3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*>(),
                                                                                           { "Init", {}, { ::i2c::type_of<::GlobalNamespace::TextFadeTransitions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding.Deinit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::*)()>(
    &::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::Deinit)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x59ecb34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*>(), { "Deinit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding.HandleGameEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::*)()>(
    &::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::HandleGameEvent)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59ecbc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*>(), { "HandleGameEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::*)()>(
    &::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59ecc7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::Signal>& GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::__cordl_internal_get__signal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signal;
}
constexpr ::UnityW<::GlobalNamespace::Signal> const& GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::__cordl_internal_get__signal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signal;
}
constexpr void GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::__cordl_internal_set__signal(::UnityW<::GlobalNamespace::Signal> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____signal = value;
}
constexpr float_t& GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::__cordl_internal_get__delay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delay;
}
constexpr float_t const& GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::__cordl_internal_get__delay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delay;
}
constexpr void GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::__cordl_internal_set__delay(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____delay = value;
}
constexpr ::StringW& GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::__cordl_internal_get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::StringW const& GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::__cordl_internal_get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::__cordl_internal_set__text(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____text = value;
}
constexpr ::UnityW<::GlobalNamespace::TextFadeTransitions>& GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::__cordl_internal_get__textFadeTransitions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textFadeTransitions;
}
constexpr ::UnityW<::GlobalNamespace::TextFadeTransitions> const& GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::__cordl_internal_get__textFadeTransitions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textFadeTransitions;
}
constexpr void GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::__cordl_internal_set__textFadeTransitions(::UnityW<::GlobalNamespace::TextFadeTransitions> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____textFadeTransitions = value;
}
inline void GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::Init(::GlobalNamespace::TextFadeTransitions* textFadeTransitions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*>(),
                                                                                         { "Init", {}, { ::i2c::type_of<::GlobalNamespace::TextFadeTransitions*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textFadeTransitions);
}
inline void GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::Deinit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*>(), { "Deinit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::HandleGameEvent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*>(), { "HandleGameEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding* GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::ShowTextOnGameEventController_EventTextBinding() {}
//  Writing Method size for method: ::GlobalNamespace::ShowTextOnGameEventController.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ShowTextOnGameEventController::*)()>(&::GlobalNamespace::ShowTextOnGameEventController::Awake)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x59ec9dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShowTextOnGameEventController*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShowTextOnGameEventController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ShowTextOnGameEventController::*)()>(&::GlobalNamespace::ShowTextOnGameEventController::OnDestroy)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x59ecae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShowTextOnGameEventController*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShowTextOnGameEventController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ShowTextOnGameEventController::*)()>(&::GlobalNamespace::ShowTextOnGameEventController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59ecbc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShowTextOnGameEventController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TextFadeTransitions>& GlobalNamespace::ShowTextOnGameEventController::__cordl_internal_get__textFadeTransitions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textFadeTransitions;
}
constexpr ::UnityW<::GlobalNamespace::TextFadeTransitions> const& GlobalNamespace::ShowTextOnGameEventController::__cordl_internal_get__textFadeTransitions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textFadeTransitions;
}
constexpr void GlobalNamespace::ShowTextOnGameEventController::__cordl_internal_set__textFadeTransitions(::UnityW<::GlobalNamespace::TextFadeTransitions> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____textFadeTransitions = value;
}
constexpr ::ArrayW<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*>& GlobalNamespace::ShowTextOnGameEventController::__cordl_internal_get__eventTextBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventTextBindings;
}
constexpr ::ArrayW<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*> const& GlobalNamespace::ShowTextOnGameEventController::__cordl_internal_get__eventTextBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventTextBindings;
}
constexpr void GlobalNamespace::ShowTextOnGameEventController::__cordl_internal_set__eventTextBindings(::ArrayW<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventTextBindings = value;
}
inline void GlobalNamespace::ShowTextOnGameEventController::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShowTextOnGameEventController*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ShowTextOnGameEventController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShowTextOnGameEventController*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ShowTextOnGameEventController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShowTextOnGameEventController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ShowTextOnGameEventController* GlobalNamespace::ShowTextOnGameEventController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ShowTextOnGameEventController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ShowTextOnGameEventController::ShowTextOnGameEventController() {}
