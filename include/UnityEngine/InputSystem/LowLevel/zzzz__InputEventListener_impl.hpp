#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputEventListener.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventListener_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IObservable_1_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventListener_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x65ab150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState.__ctor_b__2_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState::*)(
    ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState::__ctor_b__2_0)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x65ab1d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState*>(),
                            { "<.ctor>b__2_0", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>&
UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState::__cordl_internal_get_observers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___observers;
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> const&
UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState::__cordl_internal_get_observers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___observers;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState::__cordl_internal_set_observers(
    ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___observers = value;
}
constexpr ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*&
UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState::__cordl_internal_get_onEventDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onEventDelegate;
}
constexpr ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* const&
UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState::__cordl_internal_get_onEventDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onEventDelegate;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState::__cordl_internal_set_onEventDelegate(
    ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onEventDelegate = value;
}
inline void UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState::__ctor_b__2_0(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr,
                                                                                                ::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState*>(),
                          { "<.ctor>b__2_0", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventPtr, device);
}
inline ::UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState* UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState::InputEventListener_ObserverState() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventListener_DisposableObserver.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputEventListener_DisposableObserver::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputEventListener_DisposableObserver::Dispose)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x65ab2d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventListener_DisposableObserver*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventListener_DisposableObserver._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputEventListener_DisposableObserver::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputEventListener_DisposableObserver::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65ab1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventListener_DisposableObserver*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*& UnityEngine::InputSystem::LowLevel::InputEventListener_DisposableObserver::__cordl_internal_get_observer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___observer;
}
constexpr ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* const&
UnityEngine::InputSystem::LowLevel::InputEventListener_DisposableObserver::__cordl_internal_get_observer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___observer;
}
constexpr void
UnityEngine::InputSystem::LowLevel::InputEventListener_DisposableObserver::__cordl_internal_set_observer(::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___observer = value;
}
inline void UnityEngine::InputSystem::LowLevel::InputEventListener_DisposableObserver::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventListener_DisposableObserver*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputEventListener_DisposableObserver::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventListener_DisposableObserver*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::InputEventListener_DisposableObserver* UnityEngine::InputSystem::LowLevel::InputEventListener_DisposableObserver::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::LowLevel::InputEventListener_DisposableObserver*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::LowLevel::InputEventListener_DisposableObserver::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::LowLevel::InputEventListener_DisposableObserver::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventListener_DisposableObserver::InputEventListener_DisposableObserver() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventListener.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventListener (*)(
    ::UnityEngine::InputSystem::LowLevel::InputEventListener, ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*)>(
    &::UnityEngine::InputSystem::LowLevel::InputEventListener::op_Addition)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x65a594c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventListener>(),
                                                { "op_Addition",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventListener>(),
                                                    ::i2c::type_of<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventListener.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventListener (*)(
    ::UnityEngine::InputSystem::LowLevel::InputEventListener, ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*)>(
    &::UnityEngine::InputSystem::LowLevel::InputEventListener::op_Subtraction)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x65a5c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventListener>(),
                                                { "op_Subtraction",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventListener>(),
                                                    ::i2c::type_of<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventListener.Subscribe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IDisposable* (::UnityEngine::InputSystem::LowLevel::InputEventListener::*)(::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*)>(
        &::UnityEngine::InputSystem::LowLevel::InputEventListener::Subscribe)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x65aaff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventListener>(),
                                                             { "Subscribe", {}, { ::i2c::type_of<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::LowLevel::InputEventListener::setStaticF_s_ObserverState(::UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState*, "s_ObserverState", ::UnityEngine::InputSystem::LowLevel::InputEventListener>(
      std::forward<::UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState*>(value));
}
inline ::UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState* UnityEngine::InputSystem::LowLevel::InputEventListener::getStaticF_s_ObserverState() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState*, "s_ObserverState", ::UnityEngine::InputSystem::LowLevel::InputEventListener>();
}
inline ::UnityEngine::InputSystem::LowLevel::InputEventListener
UnityEngine::InputSystem::LowLevel::InputEventListener::op_Addition(::UnityEngine::InputSystem::LowLevel::InputEventListener _,
                                                                    ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventListener>(),
                                              { "op_Addition",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventListener>(),
                                                  ::i2c::type_of<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputEventListener>(nullptr, ___internal_method, _, callback);
}
inline ::UnityEngine::InputSystem::LowLevel::InputEventListener
UnityEngine::InputSystem::LowLevel::InputEventListener::op_Subtraction(::UnityEngine::InputSystem::LowLevel::InputEventListener _,
                                                                       ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventListener>(),
                                              { "op_Subtraction",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventListener>(),
                                                  ::i2c::type_of<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputEventListener>(nullptr, ___internal_method, _, callback);
}
inline ::System::IDisposable* UnityEngine::InputSystem::LowLevel::InputEventListener::Subscribe(::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* observer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventListener>(),
                                                           { "Subscribe", {}, { ::i2c::type_of<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IDisposable*>(*this, ___internal_method, observer);
}
/// @brief Convert operator to "::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
constexpr UnityEngine::InputSystem::LowLevel::InputEventListener::operator ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*() {
  return static_cast<::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
constexpr ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*
UnityEngine::InputSystem::LowLevel::InputEventListener::i___System__IObservable_1___UnityEngine__InputSystem__LowLevel__InputEventPtr_() {
  return static_cast<::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventListener::InputEventListener() {}
