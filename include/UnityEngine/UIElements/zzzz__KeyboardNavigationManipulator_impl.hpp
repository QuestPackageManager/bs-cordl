#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/KeyboardNavigationManipulator.hpp"
#include "UnityEngine/UIElements/zzzz__Manipulator_impl.hpp"
#include "UnityEngine/UIElements/zzzz__KeyboardNavigationManipulator_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyDownEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyboardNavigationManipulator_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyboardNavigationOperation_def.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationCancelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationMoveEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationSubmitEvent_def.hpp"
// Ctor Parameters [CppParam { name: "evt", ty: "::UnityEngine::UIElements::KeyDownEvent*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::KeyboardNavigationManipulator___c__DisplayClass4_0::KeyboardNavigationManipulator___c__DisplayClass4_0(::UnityEngine::UIElements::KeyDownEvent* evt) noexcept {
  this->evt = evt;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::KeyboardNavigationManipulator___c__DisplayClass4_0::KeyboardNavigationManipulator___c__DisplayClass4_0() {}
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardNavigationManipulator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::KeyboardNavigationManipulator::*)(
    ::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*>*)>(&::UnityEngine::UIElements::KeyboardNavigationManipulator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6db25d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardNavigationManipulator*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardNavigationManipulator.RegisterCallbacksOnTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::KeyboardNavigationManipulator::*)()>(
    &::UnityEngine::UIElements::KeyboardNavigationManipulator::RegisterCallbacksOnTarget)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x6db25dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardNavigationManipulator*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::KeyboardNavigationManipulator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardNavigationManipulator.UnregisterCallbacksFromTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::KeyboardNavigationManipulator::*)()>(
    &::UnityEngine::UIElements::KeyboardNavigationManipulator::UnregisterCallbacksFromTarget)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x6db2810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardNavigationManipulator*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::KeyboardNavigationManipulator*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardNavigationManipulator.OnKeyDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::KeyboardNavigationManipulator::*)(::UnityEngine::UIElements::KeyDownEvent*)>(
    &::UnityEngine::UIElements::KeyboardNavigationManipulator::OnKeyDown)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6db2a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardNavigationManipulator*>(),
                                                                                           { "OnKeyDown", {}, { ::i2c::type_of<::UnityEngine::UIElements::KeyDownEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardNavigationManipulator.OnNavigationCancel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::KeyboardNavigationManipulator::*)(::UnityEngine::UIElements::NavigationCancelEvent*)>(
    &::UnityEngine::UIElements::KeyboardNavigationManipulator::OnNavigationCancel)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6db2b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardNavigationManipulator*>(),
                                                                                           { "OnNavigationCancel", {}, { ::i2c::type_of<::UnityEngine::UIElements::NavigationCancelEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardNavigationManipulator.OnNavigationSubmit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::KeyboardNavigationManipulator::*)(::UnityEngine::UIElements::NavigationSubmitEvent*)>(
    &::UnityEngine::UIElements::KeyboardNavigationManipulator::OnNavigationSubmit)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6db2bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardNavigationManipulator*>(),
                                                                                           { "OnNavigationSubmit", {}, { ::i2c::type_of<::UnityEngine::UIElements::NavigationSubmitEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardNavigationManipulator.OnNavigationMove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::KeyboardNavigationManipulator::*)(::UnityEngine::UIElements::NavigationMoveEvent*)>(
    &::UnityEngine::UIElements::KeyboardNavigationManipulator::OnNavigationMove)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6db2be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardNavigationManipulator*>(),
                                                                                           { "OnNavigationMove", {}, { ::i2c::type_of<::UnityEngine::UIElements::NavigationMoveEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardNavigationManipulator.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::KeyboardNavigationManipulator::*)(
    ::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*)>(&::UnityEngine::UIElements::KeyboardNavigationManipulator::Invoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6db2b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardNavigationManipulator*>(),
                                         { "Invoke", {}, { ::i2c::type_of<::UnityEngine::UIElements::KeyboardNavigationOperation>(), ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardNavigationManipulator._OnKeyDown_g__GetOperation_4_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::KeyboardNavigationOperation (*)(
    ::by_ref<::UnityEngine::UIElements::KeyboardNavigationManipulator___c__DisplayClass4_0>)>(&::UnityEngine::UIElements::KeyboardNavigationManipulator::_OnKeyDown_g__GetOperation_4_0)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6db2a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardNavigationManipulator*>(),
                                         { "<OnKeyDown>g__GetOperation|4_0", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::KeyboardNavigationManipulator___c__DisplayClass4_0>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*>*&
UnityEngine::UIElements::KeyboardNavigationManipulator::__cordl_internal_get_m_Action() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Action;
}
constexpr ::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*>* const&
UnityEngine::UIElements::KeyboardNavigationManipulator::__cordl_internal_get_m_Action() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Action;
}
constexpr void UnityEngine::UIElements::KeyboardNavigationManipulator::__cordl_internal_set_m_Action(
    ::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Action = value;
}
inline void UnityEngine::UIElements::KeyboardNavigationManipulator::_ctor(::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*>* action) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardNavigationManipulator*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void UnityEngine::UIElements::KeyboardNavigationManipulator::RegisterCallbacksOnTarget() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::KeyboardNavigationManipulator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::KeyboardNavigationManipulator::UnregisterCallbacksFromTarget() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::KeyboardNavigationManipulator*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::KeyboardNavigationManipulator::OnKeyDown(::UnityEngine::UIElements::KeyDownEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardNavigationManipulator*>(),
                                                                                         { "OnKeyDown", {}, { ::i2c::type_of<::UnityEngine::UIElements::KeyDownEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::KeyboardNavigationManipulator::OnNavigationCancel(::UnityEngine::UIElements::NavigationCancelEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardNavigationManipulator*>(),
                                                                                         { "OnNavigationCancel", {}, { ::i2c::type_of<::UnityEngine::UIElements::NavigationCancelEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::KeyboardNavigationManipulator::OnNavigationSubmit(::UnityEngine::UIElements::NavigationSubmitEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardNavigationManipulator*>(),
                                                                                         { "OnNavigationSubmit", {}, { ::i2c::type_of<::UnityEngine::UIElements::NavigationSubmitEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::KeyboardNavigationManipulator::OnNavigationMove(::UnityEngine::UIElements::NavigationMoveEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardNavigationManipulator*>(),
                                                                                         { "OnNavigationMove", {}, { ::i2c::type_of<::UnityEngine::UIElements::NavigationMoveEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::KeyboardNavigationManipulator::Invoke(::UnityEngine::UIElements::KeyboardNavigationOperation operation, ::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardNavigationManipulator*>(),
                                       { "Invoke", {}, { ::i2c::type_of<::UnityEngine::UIElements::KeyboardNavigationOperation>(), ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operation, evt);
}
inline ::UnityEngine::UIElements::KeyboardNavigationOperation UnityEngine::UIElements::KeyboardNavigationManipulator::_OnKeyDown_g__GetOperation_4_0(
    ::by_ref<::UnityEngine::UIElements::KeyboardNavigationManipulator___c__DisplayClass4_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardNavigationManipulator*>(),
                                       { "<OnKeyDown>g__GetOperation|4_0", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::KeyboardNavigationManipulator___c__DisplayClass4_0>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::KeyboardNavigationOperation>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::UIElements::KeyboardNavigationManipulator*
UnityEngine::UIElements::KeyboardNavigationManipulator::New_ctor(::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*>* action) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::KeyboardNavigationManipulator*>(action));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::KeyboardNavigationManipulator::KeyboardNavigationManipulator() {}
