#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventCallbackRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallbackRegistry_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallbackListPool_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallbackList_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallback_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__InvokePolicy_def.hpp"
#include "UnityEngine/UIElements/zzzz__PropagationPhase_def.hpp"
#include "UnityEngine/UIElements/zzzz__TrickleDown_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackRegistry.GetCallbackList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventCallbackList* (*)(::UnityEngine::UIElements::EventCallbackList*)>(
    &::UnityEngine::UIElements::EventCallbackRegistry::GetCallbackList)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x35a049c;

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
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x35a0504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry*>::get(), "ReleaseCallbackList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventCallbackList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackRegistry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventCallbackRegistry::*)()>(
    &::UnityEngine::UIElements::EventCallbackRegistry::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x35a056c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackRegistry.GetCallbackListForWriting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventCallbackList* (::UnityEngine::UIElements::EventCallbackRegistry::*)()>(
    &::UnityEngine::UIElements::EventCallbackRegistry::GetCallbackListForWriting)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x35a0588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry*>::get(),
                                                                               "GetCallbackListForWriting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackRegistry.GetCallbackListForReading
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventCallbackList* (::UnityEngine::UIElements::EventCallbackRegistry::*)()>(
    &::UnityEngine::UIElements::EventCallbackRegistry::GetCallbackListForReading)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x35a0638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry*>::get(),
                                                                               "GetCallbackListForReading", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackRegistry.UnregisterCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::EventCallbackRegistry::*)(
    int64_t, ::System::Delegate*, ::UnityEngine::UIElements::TrickleDown)>(&::UnityEngine::UIElements::EventCallbackRegistry::UnregisterCallback)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x35a0654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry*>::get(), "UnregisterCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TrickleDown>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackRegistry.InvokeCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventCallbackRegistry::*)(
    ::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::PropagationPhase)>(&::UnityEngine::UIElements::EventCallbackRegistry::InvokeCallbacks)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x35a06a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry*>::get(), "InvokeCallbacks", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PropagationPhase>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackRegistry.HasTrickleDownHandlers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::EventCallbackRegistry::*)()>(
    &::UnityEngine::UIElements::EventCallbackRegistry::HasTrickleDownHandlers)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x35a0858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry*>::get(),
                                                                               "HasTrickleDownHandlers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackRegistry.HasBubbleHandlers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::EventCallbackRegistry::*)()>(
    &::UnityEngine::UIElements::EventCallbackRegistry::HasBubbleHandlers)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x35a0878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry*>::get(),
                                                                               "HasBubbleHandlers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::EventCallbackList*& UnityEngine::UIElements::EventCallbackRegistry::__cordl_internal_get_m_Callbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Callbacks;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::EventCallbackList*> const& UnityEngine::UIElements::EventCallbackRegistry::__cordl_internal_get_m_Callbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Callbacks;
}
constexpr void UnityEngine::UIElements::EventCallbackRegistry::__cordl_internal_set_m_Callbacks(::UnityEngine::UIElements::EventCallbackList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Callbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::EventCallbackList*& UnityEngine::UIElements::EventCallbackRegistry::__cordl_internal_get_m_TemporaryCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TemporaryCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::EventCallbackList*> const& UnityEngine::UIElements::EventCallbackRegistry::__cordl_internal_get_m_TemporaryCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TemporaryCallbacks;
}
constexpr void UnityEngine::UIElements::EventCallbackRegistry::__cordl_internal_set_m_TemporaryCallbacks(::UnityEngine::UIElements::EventCallbackList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TemporaryCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::UIElements::EventCallbackRegistry::__cordl_internal_get_m_IsInvoking() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsInvoking;
}
constexpr int32_t const& UnityEngine::UIElements::EventCallbackRegistry::__cordl_internal_get_m_IsInvoking() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsInvoking;
}
constexpr void UnityEngine::UIElements::EventCallbackRegistry::__cordl_internal_set_m_IsInvoking(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsInvoking = value;
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
/// @param initializer: ::UnityEngine::UIElements::EventCallbackList* (default: nullptr)
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
inline ::UnityEngine::UIElements::EventCallbackRegistry* UnityEngine::UIElements::EventCallbackRegistry::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::EventCallbackRegistry*>());
}
inline void UnityEngine::UIElements::EventCallbackRegistry::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::EventCallbackList* UnityEngine::UIElements::EventCallbackRegistry::GetCallbackListForWriting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry*>::get(),
                                                                             "GetCallbackListForWriting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventCallbackList*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::EventCallbackList* UnityEngine::UIElements::EventCallbackRegistry::GetCallbackListForReading() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry*>::get(),
                                                                             "GetCallbackListForReading", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventCallbackList*, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::EventCallbackRegistry::UnregisterCallback(int64_t eventTypeId, ::System::Delegate* callback, ::UnityEngine::UIElements::TrickleDown useTrickleDown) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry*>::get(), "UnregisterCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TrickleDown>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, eventTypeId, callback, useTrickleDown);
}
/// @param useTrickleDown: ::UnityEngine::UIElements::TrickleDown (default: static_cast<int32_t>(0x0))
/// @param invokePolicy: ::UnityEngine::UIElements::InvokePolicy (default: static_cast<int32_t>(0x0))
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
/// @param useTrickleDown: ::UnityEngine::UIElements::TrickleDown (default: static_cast<int32_t>(0x0))
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
inline void UnityEngine::UIElements::EventCallbackRegistry::InvokeCallbacks(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::PropagationPhase propagationPhase) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry*>::get(), "InvokeCallbacks", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PropagationPhase>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, propagationPhase);
}
inline bool UnityEngine::UIElements::EventCallbackRegistry::HasTrickleDownHandlers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry*>::get(),
                                                                             "HasTrickleDownHandlers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::EventCallbackRegistry::HasBubbleHandlers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackRegistry*>::get(),
                                                                             "HasBubbleHandlers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::EventCallbackRegistry::EventCallbackRegistry() {}
