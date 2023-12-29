#pragma once
#include "UnityEngine/UIElements/zzzz__Manipulator_impl.hpp"
#include "UnityEngine/UIElements/zzzz__KeyboardNavigationManipulator_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyboardNavigationOperation_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyboardNavigationManipulator_def.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationSubmitEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationMoveEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationCancelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyDownEvent_def.hpp"
// Ctor Parameters [CppParam { name: "evt", ty: "::UnityEngine::UIElements::KeyDownEvent*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass5_0::__KeyboardNavigationManipulator____c__DisplayClass5_0(
    ::UnityEngine::UIElements::KeyDownEvent* evt) noexcept {
  this->evt = evt;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass5_0::__KeyboardNavigationManipulator____c__DisplayClass5_0() {}
// Ctor Parameters [CppParam { name: "evt", ty: "::UnityEngine::UIElements::KeyDownEvent*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass6_0::__KeyboardNavigationManipulator____c__DisplayClass6_0(
    ::UnityEngine::UIElements::KeyDownEvent* evt) noexcept {
  this->evt = evt;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass6_0::__KeyboardNavigationManipulator____c__DisplayClass6_0() {}
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardNavigationManipulator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardNavigationManipulator::*)(
    ::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*>*)>(&::UnityEngine::UIElements::KeyboardNavigationManipulator::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2c5c6c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardNavigationManipulator.RegisterCallbacksOnTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardNavigationManipulator::*)()>(
    &::UnityEngine::UIElements::KeyboardNavigationManipulator::RegisterCallbacksOnTarget)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2c5c6ec;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2c5c940;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2c5cb94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), "OnKeyDown", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyDownEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardNavigationManipulator.OnRuntimeKeyDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardNavigationManipulator::*)(::UnityEngine::UIElements::KeyDownEvent*)>(
    &::UnityEngine::UIElements::KeyboardNavigationManipulator::OnRuntimeKeyDown)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2c5ccc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), "OnRuntimeKeyDown", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyDownEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardNavigationManipulator.OnEditorKeyDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardNavigationManipulator::*)(::UnityEngine::UIElements::KeyDownEvent*)>(
    &::UnityEngine::UIElements::KeyboardNavigationManipulator::OnEditorKeyDown)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2c5cc7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), "OnEditorKeyDown", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyDownEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardNavigationManipulator.OnNavigationCancel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardNavigationManipulator::*)(
    ::UnityEngine::UIElements::NavigationCancelEvent*)>(&::UnityEngine::UIElements::KeyboardNavigationManipulator::OnNavigationCancel)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2c5cee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), "OnNavigationCancel", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::NavigationCancelEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardNavigationManipulator.OnNavigationSubmit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardNavigationManipulator::*)(
    ::UnityEngine::UIElements::NavigationSubmitEvent*)>(&::UnityEngine::UIElements::KeyboardNavigationManipulator::OnNavigationSubmit)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2c5cf08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), "OnNavigationSubmit", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::NavigationSubmitEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardNavigationManipulator.OnNavigationMove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardNavigationManipulator::*)(::UnityEngine::UIElements::NavigationMoveEvent*)>(
    &::UnityEngine::UIElements::KeyboardNavigationManipulator::OnNavigationMove)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2c5cf2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), "OnNavigationMove", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::NavigationMoveEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardNavigationManipulator.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardNavigationManipulator::*)(
    ::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*)>(&::UnityEngine::UIElements::KeyboardNavigationManipulator::Invoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2c5cdd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), "Invoke", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyboardNavigationOperation>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardNavigationManipulator._OnRuntimeKeyDown_g__GetOperation_5_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::KeyboardNavigationOperation (*)(
    ByRef<::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass5_0>)>(&::UnityEngine::UIElements::KeyboardNavigationManipulator::_OnRuntimeKeyDown_g__GetOperation_5_0)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2c5cd14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), "<OnRuntimeKeyDown>g__GetOperation|5_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass5_0>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardNavigationManipulator._OnEditorKeyDown_g__GetOperation_6_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::KeyboardNavigationOperation (*)(
    ByRef<::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass6_0>)>(&::UnityEngine::UIElements::KeyboardNavigationManipulator::_OnEditorKeyDown_g__GetOperation_6_0)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2c5cdf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), "<OnEditorKeyDown>g__GetOperation|6_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass6_0>>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*>*& UnityEngine::UIElements::KeyboardNavigationManipulator::__get_m_Action() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Action;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*>*> const&
UnityEngine::UIElements::KeyboardNavigationManipulator::__get_m_Action() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Action;
}
constexpr void
UnityEngine::UIElements::KeyboardNavigationManipulator::__set_m_Action(::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Action)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::UIElements::KeyboardNavigationManipulator*
UnityEngine::UIElements::KeyboardNavigationManipulator::New_ctor(::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*>* action) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::KeyboardNavigationManipulator*>(action));
}
inline void UnityEngine::UIElements::KeyboardNavigationManipulator::_ctor(::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*>* action) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action);
}
inline void UnityEngine::UIElements::KeyboardNavigationManipulator::RegisterCallbacksOnTarget() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(),
                                                                             "RegisterCallbacksOnTarget", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::KeyboardNavigationManipulator::UnregisterCallbacksFromTarget() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(),
                                                                             "UnregisterCallbacksFromTarget", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::KeyboardNavigationManipulator::OnKeyDown(::UnityEngine::UIElements::KeyDownEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), "OnKeyDown", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyDownEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::KeyboardNavigationManipulator::OnRuntimeKeyDown(::UnityEngine::UIElements::KeyDownEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), "OnRuntimeKeyDown", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyDownEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::KeyboardNavigationManipulator::OnEditorKeyDown(::UnityEngine::UIElements::KeyDownEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), "OnEditorKeyDown", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyDownEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::KeyboardNavigationManipulator::OnNavigationCancel(::UnityEngine::UIElements::NavigationCancelEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), "OnNavigationCancel", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::NavigationCancelEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::KeyboardNavigationManipulator::OnNavigationSubmit(::UnityEngine::UIElements::NavigationSubmitEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), "OnNavigationSubmit", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::NavigationSubmitEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::KeyboardNavigationManipulator::OnNavigationMove(::UnityEngine::UIElements::NavigationMoveEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), "OnNavigationMove", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::NavigationMoveEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::KeyboardNavigationManipulator::Invoke(::UnityEngine::UIElements::KeyboardNavigationOperation operation, ::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), "Invoke", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyboardNavigationOperation>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, operation, evt);
}
inline ::UnityEngine::UIElements::KeyboardNavigationOperation UnityEngine::UIElements::KeyboardNavigationManipulator::_OnRuntimeKeyDown_g__GetOperation_5_0(
    ByRef<::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass5_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), "<OnRuntimeKeyDown>g__GetOperation|5_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass5_0>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::KeyboardNavigationOperation, false>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::UIElements::KeyboardNavigationOperation UnityEngine::UIElements::KeyboardNavigationManipulator::_OnEditorKeyDown_g__GetOperation_6_0(
    ByRef<::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass6_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardNavigationManipulator*>::get(), "<OnEditorKeyDown>g__GetOperation|6_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass6_0>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::KeyboardNavigationOperation, false>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::KeyboardNavigationManipulator::KeyboardNavigationManipulator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
