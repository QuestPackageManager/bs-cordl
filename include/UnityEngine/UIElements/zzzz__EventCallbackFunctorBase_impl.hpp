#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventCallbackFunctorBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__CallbackPhase_impl.hpp"
#include "UnityEngine/UIElements/zzzz__InvokePolicy_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallbackFunctorBase_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "UnityEngine/UIElements/zzzz__CallbackPhase_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__InvokePolicy_def.hpp"
#include "UnityEngine/UIElements/zzzz__PropagationPhase_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackFunctorBase.get_phase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::CallbackPhase (::UnityEngine::UIElements::EventCallbackFunctorBase::*)()>(
    &::UnityEngine::UIElements::EventCallbackFunctorBase::get_phase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x49ac22c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctorBase*>::get(),
                                                                               "get_phase", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackFunctorBase.get_invokePolicy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::InvokePolicy (::UnityEngine::UIElements::EventCallbackFunctorBase::*)()>(
    &::UnityEngine::UIElements::EventCallbackFunctorBase::get_invokePolicy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x49ac234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctorBase*>::get(),
                                                                               "get_invokePolicy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackFunctorBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventCallbackFunctorBase::*)(
    ::UnityEngine::UIElements::CallbackPhase, ::UnityEngine::UIElements::InvokePolicy)>(&::UnityEngine::UIElements::EventCallbackFunctorBase::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x49ac23c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctorBase*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CallbackPhase>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::InvokePolicy>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackFunctorBase.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventCallbackFunctorBase::*)(
    ::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::PropagationPhase)>(&::UnityEngine::UIElements::EventCallbackFunctorBase::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctorBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctorBase*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackFunctorBase.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::EventCallbackFunctorBase::*)(
    int64_t, ::System::Delegate*, ::UnityEngine::UIElements::CallbackPhase)>(&::UnityEngine::UIElements::EventCallbackFunctorBase::IsEquivalentTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctorBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctorBase*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackFunctorBase.PhaseMatches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::EventCallbackFunctorBase::*)(::UnityEngine::UIElements::PropagationPhase)>(
    &::UnityEngine::UIElements::EventCallbackFunctorBase::PhaseMatches)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x49ac268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctorBase*>::get(), "PhaseMatches", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PropagationPhase>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::CallbackPhase& UnityEngine::UIElements::EventCallbackFunctorBase::__cordl_internal_get__phase_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____phase_k__BackingField;
}
constexpr ::UnityEngine::UIElements::CallbackPhase const& UnityEngine::UIElements::EventCallbackFunctorBase::__cordl_internal_get__phase_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____phase_k__BackingField;
}
constexpr void UnityEngine::UIElements::EventCallbackFunctorBase::__cordl_internal_set__phase_k__BackingField(::UnityEngine::UIElements::CallbackPhase value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____phase_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::InvokePolicy& UnityEngine::UIElements::EventCallbackFunctorBase::__cordl_internal_get__invokePolicy_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____invokePolicy_k__BackingField;
}
constexpr ::UnityEngine::UIElements::InvokePolicy const& UnityEngine::UIElements::EventCallbackFunctorBase::__cordl_internal_get__invokePolicy_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____invokePolicy_k__BackingField;
}
constexpr void UnityEngine::UIElements::EventCallbackFunctorBase::__cordl_internal_set__invokePolicy_k__BackingField(::UnityEngine::UIElements::InvokePolicy value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____invokePolicy_k__BackingField = value;
}
inline ::UnityEngine::UIElements::CallbackPhase UnityEngine::UIElements::EventCallbackFunctorBase::get_phase() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctorBase*>::get(),
                                                                             "get_phase", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::CallbackPhase, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::InvokePolicy UnityEngine::UIElements::EventCallbackFunctorBase::get_invokePolicy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctorBase*>::get(),
                                                                             "get_invokePolicy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::InvokePolicy, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::EventCallbackFunctorBase* UnityEngine::UIElements::EventCallbackFunctorBase::New_ctor(::UnityEngine::UIElements::CallbackPhase phase,
                                                                                                                        ::UnityEngine::UIElements::InvokePolicy invokePolicy) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::EventCallbackFunctorBase*>(phase, invokePolicy));
}
inline void UnityEngine::UIElements::EventCallbackFunctorBase::_ctor(::UnityEngine::UIElements::CallbackPhase phase, ::UnityEngine::UIElements::InvokePolicy invokePolicy) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctorBase*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CallbackPhase>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::InvokePolicy>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, phase, invokePolicy);
}
inline void UnityEngine::UIElements::EventCallbackFunctorBase::Invoke(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::PropagationPhase propagationPhase) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctorBase*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, propagationPhase);
}
inline bool UnityEngine::UIElements::EventCallbackFunctorBase::IsEquivalentTo(int64_t eventTypeId, ::System::Delegate* callback, ::UnityEngine::UIElements::CallbackPhase phase) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctorBase*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, eventTypeId, callback, phase);
}
inline bool UnityEngine::UIElements::EventCallbackFunctorBase::PhaseMatches(::UnityEngine::UIElements::PropagationPhase propagationPhase) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctorBase*>::get(), "PhaseMatches", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PropagationPhase>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, propagationPhase);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::EventCallbackFunctorBase::EventCallbackFunctorBase() {}
