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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardNavigationManipulator::*)(
    ::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*>*)>(&::UnityEngine::UIElements::KeyboardNavigationManipulator::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4a3b0a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardNavigationManipulator.RegisterCallbacksOnTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardNavigationManipulator::*)()>(
    &::UnityEngine::UIElements::KeyboardNavigationManipulator::RegisterCallbacksOnTarget)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x4a3b0d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardNavigationManipulator.UnregisterCallbacksFromTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardNavigationManipulator::*)()>(
    &::UnityEngine::UIElements::KeyboardNavigationManipulator::UnregisterCallbacksFromTarget)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x4a3b2e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardNavigationManipulator.OnKeyDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardNavigationManipulator::*)(::UnityEngine::UIElements::KeyDownEvent*)>(
    &::UnityEngine::UIElements::KeyboardNavigationManipulator::OnKeyDown)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x4a3b4e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), "OnKeyDown", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyDownEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardNavigationManipulator.OnNavigationCancel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardNavigationManipulator::*)(
    ::UnityEngine::UIElements::NavigationCancelEvent*)>(&::UnityEngine::UIElements::KeyboardNavigationManipulator::OnNavigationCancel)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4a3b614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), "OnNavigationCancel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::NavigationCancelEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardNavigationManipulator.OnNavigationSubmit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardNavigationManipulator::*)(
    ::UnityEngine::UIElements::NavigationSubmitEvent*)>(&::UnityEngine::UIElements::KeyboardNavigationManipulator::OnNavigationSubmit)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4a3b638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), "OnNavigationSubmit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::NavigationSubmitEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardNavigationManipulator.OnNavigationMove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardNavigationManipulator::*)(::UnityEngine::UIElements::NavigationMoveEvent*)>(
    &::UnityEngine::UIElements::KeyboardNavigationManipulator::OnNavigationMove)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x4a3b65c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), "OnNavigationMove", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::NavigationMoveEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardNavigationManipulator.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardNavigationManipulator::*)(
    ::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*)>(&::UnityEngine::UIElements::KeyboardNavigationManipulator::Invoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x4a3b5f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), "Invoke", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyboardNavigationOperation>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardNavigationManipulator._OnKeyDown_g__GetOperation_4_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::KeyboardNavigationOperation (*)(
    ::ByRef<::UnityEngine::UIElements::KeyboardNavigationManipulator___c__DisplayClass4_0>)>(&::UnityEngine::UIElements::KeyboardNavigationManipulator::_OnKeyDown_g__GetOperation_4_0)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x4a3b530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), "<OnKeyDown>g__GetOperation|4_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::KeyboardNavigationManipulator___c__DisplayClass4_0>>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Action)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::KeyboardNavigationManipulator::_ctor(::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*>* action) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action);
}
inline void UnityEngine::UIElements::KeyboardNavigationManipulator::RegisterCallbacksOnTarget() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::KeyboardNavigationManipulator::UnregisterCallbacksFromTarget() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::KeyboardNavigationManipulator::OnKeyDown(::UnityEngine::UIElements::KeyDownEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), "OnKeyDown", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyDownEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::KeyboardNavigationManipulator::OnNavigationCancel(::UnityEngine::UIElements::NavigationCancelEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), "OnNavigationCancel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::NavigationCancelEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::KeyboardNavigationManipulator::OnNavigationSubmit(::UnityEngine::UIElements::NavigationSubmitEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), "OnNavigationSubmit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::NavigationSubmitEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::KeyboardNavigationManipulator::OnNavigationMove(::UnityEngine::UIElements::NavigationMoveEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), "OnNavigationMove", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::NavigationMoveEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::KeyboardNavigationManipulator::Invoke(::UnityEngine::UIElements::KeyboardNavigationOperation operation, ::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), "Invoke", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyboardNavigationOperation>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, operation, evt);
}
inline ::UnityEngine::UIElements::KeyboardNavigationOperation UnityEngine::UIElements::KeyboardNavigationManipulator::_OnKeyDown_g__GetOperation_4_0(
    ::ByRef<::UnityEngine::UIElements::KeyboardNavigationManipulator___c__DisplayClass4_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), "<OnKeyDown>g__GetOperation|4_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::KeyboardNavigationManipulator___c__DisplayClass4_0>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::KeyboardNavigationOperation, false>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::UIElements::KeyboardNavigationManipulator*
UnityEngine::UIElements::KeyboardNavigationManipulator::New_ctor(::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*>* action) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::KeyboardNavigationManipulator*>(action));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::KeyboardNavigationManipulator::KeyboardNavigationManipulator() {}
