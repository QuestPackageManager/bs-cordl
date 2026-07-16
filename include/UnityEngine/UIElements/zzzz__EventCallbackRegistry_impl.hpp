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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList (*)(::UnityEngine::UIElements::TrickleDown)>(
    &::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::Create)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6d95da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList>(),
                                                                                           { "Create", {}, { ::i2c::type_of<::UnityEngine::UIElements::TrickleDown>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList.GetCallbackListForWriting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventCallbackList* (::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::*)()>(
    &::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::GetCallbackListForWriting)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6d95e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList>(), { "GetCallbackListForWriting", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList.GetCallbackListForReading
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventCallbackList* (::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::*)()>(
    &::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::GetCallbackListForReading)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6d95f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList>(), { "GetCallbackListForReading", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList.UnregisterCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::*)(int64_t, ::System::Delegate*)>(
    &::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::UnregisterCallback)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6d95f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList>(),
                                                                                           { "UnregisterCallback", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Delegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::*)(
    ::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::BaseVisualElementPanel*, ::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::Invoke)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x6d960dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList>(),
                                                             { "Invoke",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::*)()>(
    &::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::BeginInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6d962e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList>(), { "BeginInvoke", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::*)()>(
    &::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::EndInvoke)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x6d962f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList>(), { "EndInvoke", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList
UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::Create(::UnityEngine::UIElements::TrickleDown useTrickleDown) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList>(),
                                                                                         { "Create", {}, { ::i2c::type_of<::UnityEngine::UIElements::TrickleDown>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList>(nullptr, ___internal_method, useTrickleDown);
}
inline ::UnityEngine::UIElements::EventCallbackList* UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::GetCallbackListForWriting() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList>(), { "GetCallbackListForWriting", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventCallbackList*>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::EventCallbackList* UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::GetCallbackListForReading() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList>(), { "GetCallbackListForReading", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventCallbackList*>(*this, ___internal_method);
}
inline bool UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::UnregisterCallback(int64_t eventTypeId, ::System::Delegate* callback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList>(),
                                                                                         { "UnregisterCallback", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Delegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, eventTypeId, callback);
}
inline void UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::Invoke(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                                                       ::UnityEngine::UIElements::VisualElement* target) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList>(),
                                                           { "Invoke",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, evt, panel, target);
}
inline void UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::BeginInvoke() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList>(), { "BeginInvoke", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList::EndInvoke() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList>(), { "EndInvoke", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventCallbackList* (*)(::UnityEngine::UIElements::EventCallbackList*)>(
    &::UnityEngine::UIElements::EventCallbackRegistry::GetCallbackList)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6d95c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry*>(),
                                                                                           { "GetCallbackList", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventCallbackList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackRegistry.ReleaseCallbackList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::EventCallbackList*)>(&::UnityEngine::UIElements::EventCallbackRegistry::ReleaseCallbackList)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6d95cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry*>(),
                                                                                           { "ReleaseCallbackList", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventCallbackList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackRegistry.GetDynamicCallbackList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList> (::UnityEngine::UIElements::EventCallbackRegistry::*)(
    ::UnityEngine::UIElements::TrickleDown)>(&::UnityEngine::UIElements::EventCallbackRegistry::GetDynamicCallbackList)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6d95d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry*>(),
                                                                                           { "GetDynamicCallbackList", {}, { ::i2c::type_of<::UnityEngine::UIElements::TrickleDown>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackRegistry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::EventCallbackRegistry::*)()>(&::UnityEngine::UIElements::EventCallbackRegistry::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6d95d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry*>(), { ".ctor", {}, {} })));
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
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::EventCallbackListPool*, "s_ListPool", ::UnityEngine::UIElements::EventCallbackRegistry*>(
      std::forward<::UnityEngine::UIElements::EventCallbackListPool*>(value));
}
inline ::UnityEngine::UIElements::EventCallbackListPool* UnityEngine::UIElements::EventCallbackRegistry::getStaticF_s_ListPool() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::EventCallbackListPool*, "s_ListPool", ::UnityEngine::UIElements::EventCallbackRegistry*>();
}
inline ::UnityEngine::UIElements::EventCallbackList* UnityEngine::UIElements::EventCallbackRegistry::GetCallbackList(::UnityEngine::UIElements::EventCallbackList* initializer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry*>(),
                                                                                         { "GetCallbackList", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventCallbackList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventCallbackList*>(nullptr, ___internal_method, initializer);
}
inline void UnityEngine::UIElements::EventCallbackRegistry::ReleaseCallbackList(::UnityEngine::UIElements::EventCallbackList* toRelease) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry*>(),
                                                                                         { "ReleaseCallbackList", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventCallbackList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, toRelease);
}
inline ::by_ref<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList>
UnityEngine::UIElements::EventCallbackRegistry::GetDynamicCallbackList(::UnityEngine::UIElements::TrickleDown useTrickleDown) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry*>(),
                                                                                         { "GetDynamicCallbackList", {}, { ::i2c::type_of<::UnityEngine::UIElements::TrickleDown>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList>>(this, ___internal_method, useTrickleDown);
}
template <typename TEventType>
inline void UnityEngine::UIElements::EventCallbackRegistry::RegisterCallback(::UnityEngine::UIElements::EventCallback_1<TEventType>* callback, ::UnityEngine::UIElements::TrickleDown useTrickleDown,
                                                                             ::UnityEngine::UIElements::InvokePolicy invokePolicy) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry*>(),
                                                           { "RegisterCallback",
                                                             { ::i2c::class_of<TEventType>() },
                                                             { ::i2c::type_of<::UnityEngine::UIElements::EventCallback_1<TEventType>*>(), ::i2c::type_of<::UnityEngine::UIElements::TrickleDown>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::InvokePolicy>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TEventType>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, useTrickleDown, invokePolicy);
}
template <typename TEventType, typename TCallbackArgs>
inline void UnityEngine::UIElements::EventCallbackRegistry::RegisterCallback(::UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>* callback, TCallbackArgs userArgs,
                                                                             ::UnityEngine::UIElements::TrickleDown useTrickleDown, ::UnityEngine::UIElements::InvokePolicy invokePolicy) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry*>(),
                                                           { "RegisterCallback",
                                                             { ::i2c::class_of<TEventType>(), ::i2c::class_of<TCallbackArgs>() },
                                                             { ::i2c::type_of<::UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>*>(), ::i2c::type_of<TCallbackArgs>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::TrickleDown>(), ::i2c::type_of<::UnityEngine::UIElements::InvokePolicy>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TEventType>(), ::i2c::class_of<TCallbackArgs>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, userArgs, useTrickleDown, invokePolicy);
}
template <typename TEventType>
inline bool UnityEngine::UIElements::EventCallbackRegistry::UnregisterCallback(::UnityEngine::UIElements::EventCallback_1<TEventType>* callback,
                                                                               ::UnityEngine::UIElements::TrickleDown useTrickleDown) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry*>(),
                                              { "UnregisterCallback",
                                                { ::i2c::class_of<TEventType>() },
                                                { ::i2c::type_of<::UnityEngine::UIElements::EventCallback_1<TEventType>*>(), ::i2c::type_of<::UnityEngine::UIElements::TrickleDown>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TEventType>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callback, useTrickleDown);
}
template <typename TEventType, typename TCallbackArgs>
inline bool UnityEngine::UIElements::EventCallbackRegistry::UnregisterCallback(::UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>* callback,
                                                                               ::UnityEngine::UIElements::TrickleDown useTrickleDown) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry*>(),
                                       { "UnregisterCallback",
                                         { ::i2c::class_of<TEventType>(), ::i2c::class_of<TCallbackArgs>() },
                                         { ::i2c::type_of<::UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>*>(), ::i2c::type_of<::UnityEngine::UIElements::TrickleDown>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TEventType>(), ::i2c::class_of<TCallbackArgs>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callback, useTrickleDown);
}
inline void UnityEngine::UIElements::EventCallbackRegistry::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::EventCallbackRegistry* UnityEngine::UIElements::EventCallbackRegistry::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::EventCallbackRegistry*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::EventCallbackRegistry::EventCallbackRegistry() {}
