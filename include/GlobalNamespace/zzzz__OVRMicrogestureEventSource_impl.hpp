#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMicrogestureEventSource.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRMicrogestureEventSource_def.hpp"
#include "GlobalNamespace/zzzz__OVRHand_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRMicrogestureEventSource.get_Hand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::OVRHand> (::GlobalNamespace::OVRMicrogestureEventSource::*)()>(
    &::GlobalNamespace::OVRMicrogestureEventSource::get_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c5dc90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMicrogestureEventSource*>::get(),
                                                                               "get_Hand", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMicrogestureEventSource.set_Hand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRMicrogestureEventSource::*)(::GlobalNamespace::OVRHand*)>(
    &::GlobalNamespace::OVRMicrogestureEventSource::set_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c5dc98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMicrogestureEventSource*>::get(), "set_Hand", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRHand*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMicrogestureEventSource.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRMicrogestureEventSource::*)()>(&::GlobalNamespace::OVRMicrogestureEventSource::Update)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5c5dca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMicrogestureEventSource*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMicrogestureEventSource.CheckForNewGesture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRMicrogestureEventSource::*)(::GlobalNamespace::OVRHand_MicrogestureType)>(
    &::GlobalNamespace::OVRMicrogestureEventSource::CheckForNewGesture)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c5dce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMicrogestureEventSource*>::get(), "CheckForNewGesture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRHand_MicrogestureType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMicrogestureEventSource._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRMicrogestureEventSource::*)()>(&::GlobalNamespace::OVRMicrogestureEventSource::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c5dd50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMicrogestureEventSource*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::OVRHand>& GlobalNamespace::OVRMicrogestureEventSource::__cordl_internal_get__hand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hand;
}
constexpr ::UnityW<::GlobalNamespace::OVRHand> const& GlobalNamespace::OVRMicrogestureEventSource::__cordl_internal_get__hand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hand;
}
constexpr void GlobalNamespace::OVRMicrogestureEventSource::__cordl_internal_set__hand(::UnityW<::GlobalNamespace::OVRHand> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hand)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRHand_MicrogestureType>*& GlobalNamespace::OVRMicrogestureEventSource::__cordl_internal_get_GestureRecognizedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GestureRecognizedEvent;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRHand_MicrogestureType>* const& GlobalNamespace::OVRMicrogestureEventSource::__cordl_internal_get_GestureRecognizedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GestureRecognizedEvent;
}
constexpr void GlobalNamespace::OVRMicrogestureEventSource::__cordl_internal_set_GestureRecognizedEvent(::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRHand_MicrogestureType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___GestureRecognizedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::GlobalNamespace::OVRHand> GlobalNamespace::OVRMicrogestureEventSource::get_Hand() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMicrogestureEventSource*>::get(), "get_Hand",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OVRHand>, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMicrogestureEventSource::set_Hand(::GlobalNamespace::OVRHand* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMicrogestureEventSource*>::get(), "set_Hand", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRHand*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRMicrogestureEventSource::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMicrogestureEventSource*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMicrogestureEventSource::CheckForNewGesture(::GlobalNamespace::OVRHand_MicrogestureType gesture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMicrogestureEventSource*>::get(), "CheckForNewGesture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRHand_MicrogestureType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gesture);
}
inline void GlobalNamespace::OVRMicrogestureEventSource::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMicrogestureEventSource*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRMicrogestureEventSource* GlobalNamespace::OVRMicrogestureEventSource::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRMicrogestureEventSource*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRMicrogestureEventSource::OVRMicrogestureEventSource() {}
