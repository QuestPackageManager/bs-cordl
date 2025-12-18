#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventCallbackFunctorBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__InvokePolicy_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallbackFunctorBase_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/UIElements/zzzz__CallbackEventHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__TrickleDown_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackFunctorBase.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventCallbackFunctorBase::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::EventCallbackFunctorBase::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctorBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctorBase*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackFunctorBase.UnregisterCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventCallbackFunctorBase::*)(
    ::UnityEngine::UIElements::CallbackEventHandler*, ::UnityEngine::UIElements::TrickleDown)>(&::UnityEngine::UIElements::EventCallbackFunctorBase::UnregisterCallback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctorBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctorBase*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackFunctorBase.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventCallbackFunctorBase::*)()>(
    &::UnityEngine::UIElements::EventCallbackFunctorBase::Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctorBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctorBase*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackFunctorBase.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::EventCallbackFunctorBase::*)(int64_t, ::System::Delegate*)>(
    &::UnityEngine::UIElements::EventCallbackFunctorBase::IsEquivalentTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctorBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctorBase*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackFunctorBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventCallbackFunctorBase::*)()>(
    &::UnityEngine::UIElements::EventCallbackFunctorBase::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bcd164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctorBase*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int64_t& UnityEngine::UIElements::EventCallbackFunctorBase::__cordl_internal_get_eventTypeId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventTypeId;
}
constexpr int64_t const& UnityEngine::UIElements::EventCallbackFunctorBase::__cordl_internal_get_eventTypeId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventTypeId;
}
constexpr void UnityEngine::UIElements::EventCallbackFunctorBase::__cordl_internal_set_eventTypeId(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___eventTypeId = value;
}
constexpr ::UnityEngine::UIElements::InvokePolicy& UnityEngine::UIElements::EventCallbackFunctorBase::__cordl_internal_get_invokePolicy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invokePolicy;
}
constexpr ::UnityEngine::UIElements::InvokePolicy const& UnityEngine::UIElements::EventCallbackFunctorBase::__cordl_internal_get_invokePolicy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invokePolicy;
}
constexpr void UnityEngine::UIElements::EventCallbackFunctorBase::__cordl_internal_set_invokePolicy(::UnityEngine::UIElements::InvokePolicy value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___invokePolicy = value;
}
inline void UnityEngine::UIElements::EventCallbackFunctorBase::Invoke(::UnityEngine::UIElements::EventBase* evt) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctorBase*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::EventCallbackFunctorBase::UnregisterCallback(::UnityEngine::UIElements::CallbackEventHandler* target, ::UnityEngine::UIElements::TrickleDown useTrickleDown) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctorBase*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target, useTrickleDown);
}
inline void UnityEngine::UIElements::EventCallbackFunctorBase::Dispose() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctorBase*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::EventCallbackFunctorBase::IsEquivalentTo(int64_t eventTypeId, ::System::Delegate* callback) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctorBase*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, eventTypeId, callback);
}
inline void UnityEngine::UIElements::EventCallbackFunctorBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctorBase*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::EventCallbackFunctorBase* UnityEngine::UIElements::EventCallbackFunctorBase::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::EventCallbackFunctorBase*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::EventCallbackFunctorBase::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::EventCallbackFunctorBase::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::EventCallbackFunctorBase::EventCallbackFunctorBase() {}
