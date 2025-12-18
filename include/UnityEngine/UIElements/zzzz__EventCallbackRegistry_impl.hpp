#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventCallbackRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TrickleDown_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallbackRegistry_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallbackFunctorBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallbackListPool_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallbackList_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallbackRegistry_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallback_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallback_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__InvokePolicy_def.hpp"
#include "UnityEngine/UIElements/zzzz__TrickleDown_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList (*)(::UnityEngine::UIElements::TrickleDown)>(
    &::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::Create)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6bcda68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TrickleDown>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList.GetCallbackListForWriting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventCallbackList* (
    ::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::*)()>(&::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::GetCallbackListForWriting)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6bcdb54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList>::get(),
                                                 "GetCallbackListForWriting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList.GetCallbackListForReading
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventCallbackList* (
    ::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::*)()>(&::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::GetCallbackListForReading)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6bcdc34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList>::get(),
                                                 "GetCallbackListForReading", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList.UnregisterCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::*)(int64_t, ::System::Delegate*)>(
    &::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::UnregisterCallback)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6bcdc4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList>::get(),
                                                 "UnregisterCallback", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::*)(
    ::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::BaseVisualElementPanel*, ::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::Invoke)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x6bcdda4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList>::get(), "Invoke", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseVisualElementPanel*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::*)()>(
    &::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::BeginInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6bcdfac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList>::get(), "BeginInvoke",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::*)()>(
    &::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::EndInvoke)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x6bcdfbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList>::get(), "EndInvoke",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList
UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::Create(::UnityEngine::UIElements::TrickleDown useTrickleDown) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TrickleDown>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList, false>(nullptr, ___internal_method, useTrickleDown);
}
inline ::UnityEngine::UIElements::EventCallbackList* UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::GetCallbackListForWriting() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList>::get(),
                                               "GetCallbackListForWriting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventCallbackList*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::EventCallbackList* UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::GetCallbackListForReading() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList>::get(),
                                               "GetCallbackListForReading", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventCallbackList*, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::UnregisterCallback(int64_t eventTypeId, ::System::Delegate* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList>::get(), "UnregisterCallback",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, eventTypeId, callback);
}
inline void UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::Invoke(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                                                       ::UnityEngine::UIElements::VisualElement* target) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList>::get(), "Invoke", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseVisualElementPanel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, panel, target);
}
inline void UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::BeginInvoke() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList>::get(), "BeginInvoke",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::EndInvoke() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList>::get(), "EndInvoke",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_UseTrickleDown", ty: "::UnityEngine::UIElements::TrickleDown", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Callbacks", ty:
// "::UnityEngine::UIElements::EventCallbackList*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TemporaryCallbacks", ty: "::UnityEngine::UIElements::EventCallbackList*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_UnregisteredCallbacksDuringInvoke", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::EventCallbackFunctorBase*>*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_IsInvoking", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::EventCallbackRegistry_DynamicCallbackList(
    ::UnityEngine::UIElements::TrickleDown m_UseTrickleDown, ::UnityEngine::UIElements::EventCallbackList* m_Callbacks, ::UnityEngine::UIElements::EventCallbackList* m_TemporaryCallbacks,
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::EventCallbackFunctorBase*>* m_UnregisteredCallbacksDuringInvoke, int32_t m_IsInvoking) noexcept {
  this->m_UseTrickleDown = m_UseTrickleDown;
  this->m_Callbacks = m_Callbacks;
  this->m_TemporaryCallbacks = m_TemporaryCallbacks;
  this->m_UnregisteredCallbacksDuringInvoke = m_UnregisteredCallbacksDuringInvoke;
  this->m_IsInvoking = m_IsInvoking;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::EventCallbackRegistry_DynamicCallbackList() {}
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackRegistry.GetCallbackList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventCallbackList* (*)(::UnityEngine::UIElements::EventCallbackList*)>(
    &::UnityEngine::UIElements::EventCallbackRegistry::GetCallbackList)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6bcd924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry*>::get(), "GetCallbackList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventCallbackList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackRegistry.ReleaseCallbackList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::EventCallbackList*)>(
    &::UnityEngine::UIElements::EventCallbackRegistry::ReleaseCallbackList)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6bcd990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry*>::get(), "ReleaseCallbackList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventCallbackList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackRegistry.GetDynamicCallbackList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList> (
    ::UnityEngine::UIElements::EventCallbackRegistry::*)(::UnityEngine::UIElements::TrickleDown)>(&::UnityEngine::UIElements::EventCallbackRegistry::GetDynamicCallbackList)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6bcd9fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry*>::get(), "GetDynamicCallbackList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TrickleDown>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackRegistry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventCallbackRegistry::*)()>(
    &::UnityEngine::UIElements::EventCallbackRegistry::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6bcda10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList& UnityEngine::UIElements::EventCallbackRegistry::__cordl_internal_get_m_TrickleDownCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrickleDownCallbacks;
}
constexpr ::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList const& UnityEngine::UIElements::EventCallbackRegistry::__cordl_internal_get_m_TrickleDownCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrickleDownCallbacks;
}
constexpr void UnityEngine::UIElements::EventCallbackRegistry::__cordl_internal_set_m_TrickleDownCallbacks(::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TrickleDownCallbacks = value;
}
constexpr ::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList& UnityEngine::UIElements::EventCallbackRegistry::__cordl_internal_get_m_BubbleUpCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BubbleUpCallbacks;
}
constexpr ::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList const& UnityEngine::UIElements::EventCallbackRegistry::__cordl_internal_get_m_BubbleUpCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BubbleUpCallbacks;
}
constexpr void UnityEngine::UIElements::EventCallbackRegistry::__cordl_internal_set_m_BubbleUpCallbacks(::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BubbleUpCallbacks = value;
}
inline void UnityEngine::UIElements::EventCallbackRegistry::setStaticF_s_ListPool(::UnityEngine::UIElements::EventCallbackListPool* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::EventCallbackListPool*, "s_ListPool",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry*>::get>(
      std::forward<::UnityEngine::UIElements::EventCallbackListPool*>(value));
}
inline ::UnityEngine::UIElements::EventCallbackListPool* UnityEngine::UIElements::EventCallbackRegistry::getStaticF_s_ListPool() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::EventCallbackListPool*, "s_ListPool",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry*>::get>();
}
inline ::UnityEngine::UIElements::EventCallbackList* UnityEngine::UIElements::EventCallbackRegistry::GetCallbackList(::UnityEngine::UIElements::EventCallbackList* initializer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry*>::get(), "GetCallbackList", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventCallbackList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventCallbackList*, false>(nullptr, ___internal_method, initializer);
}
inline void UnityEngine::UIElements::EventCallbackRegistry::ReleaseCallbackList(::UnityEngine::UIElements::EventCallbackList* toRelease) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry*>::get(), "ReleaseCallbackList", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventCallbackList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, toRelease);
}
inline ::ByRef<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList>
UnityEngine::UIElements::EventCallbackRegistry::GetDynamicCallbackList(::UnityEngine::UIElements::TrickleDown useTrickleDown) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry*>::get(), "GetDynamicCallbackList", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TrickleDown>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList>, false>(this, ___internal_method, useTrickleDown);
}
template <typename TEventType>
inline void UnityEngine::UIElements::EventCallbackRegistry::RegisterCallback(::UnityEngine::UIElements::EventCallback_1<TEventType>* callback, ::UnityEngine::UIElements::TrickleDown useTrickleDown,
                                                                             ::UnityEngine::UIElements::InvokePolicy invokePolicy) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry*>::get(), "RegisterCallback",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEventType>::get() },
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventCallback_1<TEventType>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TrickleDown>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::InvokePolicy>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEventType>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, useTrickleDown, invokePolicy);
}
template <typename TEventType, typename TCallbackArgs>
inline void UnityEngine::UIElements::EventCallbackRegistry::RegisterCallback(::UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>* callback, TCallbackArgs userArgs,
                                                                             ::UnityEngine::UIElements::TrickleDown useTrickleDown, ::UnityEngine::UIElements::InvokePolicy invokePolicy) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry*>::get(), "RegisterCallback",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TCallbackArgs>::get() },
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TCallbackArgs>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TrickleDown>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::InvokePolicy>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEventType>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TCallbackArgs>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, userArgs, useTrickleDown, invokePolicy);
}
template <typename TEventType>
inline bool UnityEngine::UIElements::EventCallbackRegistry::UnregisterCallback(::UnityEngine::UIElements::EventCallback_1<TEventType>* callback,
                                                                               ::UnityEngine::UIElements::TrickleDown useTrickleDown) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry*>::get(), "UnregisterCallback",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEventType>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventCallback_1<TEventType>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TrickleDown>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEventType>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, callback, useTrickleDown);
}
template <typename TEventType, typename TCallbackArgs>
inline bool UnityEngine::UIElements::EventCallbackRegistry::UnregisterCallback(::UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>* callback,
                                                                               ::UnityEngine::UIElements::TrickleDown useTrickleDown) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry*>::get(), "UnregisterCallback",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TCallbackArgs>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TrickleDown>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEventType>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TCallbackArgs>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, callback, useTrickleDown);
}
inline void UnityEngine::UIElements::EventCallbackRegistry::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::EventCallbackRegistry* UnityEngine::UIElements::EventCallbackRegistry::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::EventCallbackRegistry*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::EventCallbackRegistry::EventCallbackRegistry() {}
