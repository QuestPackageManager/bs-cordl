#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMicrogestureEventSource.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRMicrogestureEventSource_def.hpp"
#include "GlobalNamespace/zzzz__OVRHand_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRMicrogestureEventSource.get_Hand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::OVRHand> (::GlobalNamespace::OVRMicrogestureEventSource::*)()>(
    &::GlobalNamespace::OVRMicrogestureEventSource::get_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e70a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMicrogestureEventSource*>(), { "get_Hand", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMicrogestureEventSource.set_Hand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMicrogestureEventSource::*)(::GlobalNamespace::OVRHand*)>(
    &::GlobalNamespace::OVRMicrogestureEventSource::set_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e70a0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMicrogestureEventSource*>(), { "set_Hand", {}, { ::i2c::type_of<::GlobalNamespace::OVRHand*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMicrogestureEventSource.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMicrogestureEventSource::*)()>(&::GlobalNamespace::OVRMicrogestureEventSource::Update)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5e70a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMicrogestureEventSource*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMicrogestureEventSource.CheckForNewGesture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMicrogestureEventSource::*)(::GlobalNamespace::OVRHand_MicrogestureType)>(
    &::GlobalNamespace::OVRMicrogestureEventSource::CheckForNewGesture)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e70a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMicrogestureEventSource*>(),
                                                                                           { "CheckForNewGesture", {}, { ::i2c::type_of<::GlobalNamespace::OVRHand_MicrogestureType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMicrogestureEventSource._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMicrogestureEventSource::*)()>(&::GlobalNamespace::OVRMicrogestureEventSource::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e70ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMicrogestureEventSource*>(), { ".ctor", {}, {} })));
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
  this->____hand = value;
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
  this->___GestureRecognizedEvent = value;
}
inline ::UnityW<::GlobalNamespace::OVRHand> GlobalNamespace::OVRMicrogestureEventSource::get_Hand() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMicrogestureEventSource*>(), { "get_Hand", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OVRHand>>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMicrogestureEventSource::set_Hand(::GlobalNamespace::OVRHand* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMicrogestureEventSource*>(), { "set_Hand", {}, { ::i2c::type_of<::GlobalNamespace::OVRHand*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRMicrogestureEventSource::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMicrogestureEventSource*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMicrogestureEventSource::CheckForNewGesture(::GlobalNamespace::OVRHand_MicrogestureType gesture) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMicrogestureEventSource*>(),
                                                                                         { "CheckForNewGesture", {}, { ::i2c::type_of<::GlobalNamespace::OVRHand_MicrogestureType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gesture);
}
inline void GlobalNamespace::OVRMicrogestureEventSource::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMicrogestureEventSource*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRMicrogestureEventSource* GlobalNamespace::OVRMicrogestureEventSource::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRMicrogestureEventSource*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRMicrogestureEventSource::OVRMicrogestureEventSource() {}
