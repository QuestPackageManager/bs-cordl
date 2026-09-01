#pragma once
// IWYU pragma private; include "UnityEngine\EventSystems\PhysicsRaycaster.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__PhysicsRaycaster_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PhysicsRaycaster_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
//  Writing Method size for method: ::UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer::*)(::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit)>(
    &::UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer::Compare)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e244a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer*>(),
                                                             { "Compare", {}, { ::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::UnityEngine::RaycastHit>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer::*)()>(
    &::UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e2450c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer::setStaticF_instance(::UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer*, "instance", ::UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer*>(
      std::forward<::UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer*>(value));
}
inline ::UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer* UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer::getStaticF_instance() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer*, "instance", ::UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer*>();
}
inline int32_t UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer::Compare(::UnityEngine::RaycastHit x, ::UnityEngine::RaycastHit y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer*>(),
                                                           { "Compare", {}, { ::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::UnityEngine::RaycastHit>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline void UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer* UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>"
constexpr UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer::operator ::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>*() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>*
UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer::i___System__Collections__Generic__IComparer_1___UnityEngine__RaycastHit_() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer::PhysicsRaycaster_RaycastHitComparer() {}
//  Writing Method size for method: ::UnityEngine::EventSystems::PhysicsRaycaster._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PhysicsRaycaster::*)()>(&::UnityEngine::EventSystems::PhysicsRaycaster::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e23560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PhysicsRaycaster*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PhysicsRaycaster.get_eventCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::UnityEngine::EventSystems::PhysicsRaycaster::*)()>(
    &::UnityEngine::EventSystems::PhysicsRaycaster::get_eventCamera)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6e23f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PhysicsRaycaster*>(), { ::i2c::class_of<::UnityEngine::EventSystems::PhysicsRaycaster*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PhysicsRaycaster.get_depth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::EventSystems::PhysicsRaycaster::*)()>(&::UnityEngine::EventSystems::PhysicsRaycaster::get_depth)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6e2404c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PhysicsRaycaster*>(), { ::i2c::class_of<::UnityEngine::EventSystems::PhysicsRaycaster*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PhysicsRaycaster.get_finalEventMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::EventSystems::PhysicsRaycaster::*)()>(&::UnityEngine::EventSystems::PhysicsRaycaster::get_finalEventMask)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6e23ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PhysicsRaycaster*>(), { "get_finalEventMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PhysicsRaycaster.get_eventMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::UnityEngine::EventSystems::PhysicsRaycaster::*)()>(&::UnityEngine::EventSystems::PhysicsRaycaster::get_eventMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e24114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PhysicsRaycaster*>(), { "get_eventMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PhysicsRaycaster.set_eventMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PhysicsRaycaster::*)(::UnityEngine::LayerMask)>(
    &::UnityEngine::EventSystems::PhysicsRaycaster::set_eventMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e2411c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PhysicsRaycaster*>(), { "set_eventMask", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PhysicsRaycaster.get_maxRayIntersections
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::EventSystems::PhysicsRaycaster::*)()>(&::UnityEngine::EventSystems::PhysicsRaycaster::get_maxRayIntersections)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e24124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PhysicsRaycaster*>(), { "get_maxRayIntersections", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PhysicsRaycaster.set_maxRayIntersections
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PhysicsRaycaster::*)(int32_t)>(&::UnityEngine::EventSystems::PhysicsRaycaster::set_maxRayIntersections)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e2412c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PhysicsRaycaster*>(), { "set_maxRayIntersections", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PhysicsRaycaster.ComputeRayAndDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::PhysicsRaycaster::*)(
    ::UnityEngine::EventSystems::PointerEventData*, ::by_ref<::UnityEngine::Ray>, ::by_ref<int32_t>, ::by_ref<float_t>)>(&::UnityEngine::EventSystems::PhysicsRaycaster::ComputeRayAndDistance)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x6e23bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PhysicsRaycaster*>(),
                                                             { "ComputeRayAndDistance",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Ray>>(),
                                                                 ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PhysicsRaycaster.Raycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PhysicsRaycaster::*)(
    ::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(&::UnityEngine::EventSystems::PhysicsRaycaster::Raycast)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x6e24134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PhysicsRaycaster*>(), { ::i2c::class_of<::UnityEngine::EventSystems::PhysicsRaycaster*>(), 17 }));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& UnityEngine::EventSystems::PhysicsRaycaster::__cordl_internal_get_m_EventCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& UnityEngine::EventSystems::PhysicsRaycaster::__cordl_internal_get_m_EventCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventCamera;
}
constexpr void UnityEngine::EventSystems::PhysicsRaycaster::__cordl_internal_set_m_EventCamera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EventCamera = value;
}
constexpr ::UnityEngine::LayerMask& UnityEngine::EventSystems::PhysicsRaycaster::__cordl_internal_get_m_EventMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventMask;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::EventSystems::PhysicsRaycaster::__cordl_internal_get_m_EventMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventMask;
}
constexpr void UnityEngine::EventSystems::PhysicsRaycaster::__cordl_internal_set_m_EventMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EventMask = value;
}
constexpr int32_t& UnityEngine::EventSystems::PhysicsRaycaster::__cordl_internal_get_m_MaxRayIntersections() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxRayIntersections;
}
constexpr int32_t const& UnityEngine::EventSystems::PhysicsRaycaster::__cordl_internal_get_m_MaxRayIntersections() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxRayIntersections;
}
constexpr void UnityEngine::EventSystems::PhysicsRaycaster::__cordl_internal_set_m_MaxRayIntersections(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxRayIntersections = value;
}
constexpr int32_t& UnityEngine::EventSystems::PhysicsRaycaster::__cordl_internal_get_m_LastMaxRayIntersections() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastMaxRayIntersections;
}
constexpr int32_t const& UnityEngine::EventSystems::PhysicsRaycaster::__cordl_internal_get_m_LastMaxRayIntersections() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastMaxRayIntersections;
}
constexpr void UnityEngine::EventSystems::PhysicsRaycaster::__cordl_internal_set_m_LastMaxRayIntersections(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastMaxRayIntersections = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& UnityEngine::EventSystems::PhysicsRaycaster::__cordl_internal_get_m_Hits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Hits;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& UnityEngine::EventSystems::PhysicsRaycaster::__cordl_internal_get_m_Hits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Hits;
}
constexpr void UnityEngine::EventSystems::PhysicsRaycaster::__cordl_internal_set_m_Hits(::ArrayW<::UnityEngine::RaycastHit> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Hits = value;
}
inline void UnityEngine::EventSystems::PhysicsRaycaster::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PhysicsRaycaster*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Camera> UnityEngine::EventSystems::PhysicsRaycaster::get_eventCamera() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::PhysicsRaycaster*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline int32_t UnityEngine::EventSystems::PhysicsRaycaster::get_depth() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::PhysicsRaycaster*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::EventSystems::PhysicsRaycaster::get_finalEventMask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PhysicsRaycaster*>(), { "get_finalEventMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::LayerMask UnityEngine::EventSystems::PhysicsRaycaster::get_eventMask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PhysicsRaycaster*>(), { "get_eventMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PhysicsRaycaster::set_eventMask(::UnityEngine::LayerMask value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PhysicsRaycaster*>(), { "set_eventMask", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::EventSystems::PhysicsRaycaster::get_maxRayIntersections() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PhysicsRaycaster*>(), { "get_maxRayIntersections", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PhysicsRaycaster::set_maxRayIntersections(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PhysicsRaycaster*>(), { "set_maxRayIntersections", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::EventSystems::PhysicsRaycaster::ComputeRayAndDistance(::UnityEngine::EventSystems::PointerEventData* eventData, ::by_ref<::UnityEngine::Ray> ray,
                                                                               ::by_ref<int32_t> eventDisplayIndex, ::by_ref<float_t> distanceToClipPlane) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PhysicsRaycaster*>(),
                                                           { "ComputeRayAndDistance",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Ray>>(),
                                                               ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, eventData, ray, eventDisplayIndex, distanceToClipPlane);
}
inline void UnityEngine::EventSystems::PhysicsRaycaster::Raycast(::UnityEngine::EventSystems::PointerEventData* eventData,
                                                                 ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::PhysicsRaycaster*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData, resultAppendList);
}
inline ::UnityEngine::EventSystems::PhysicsRaycaster* UnityEngine::EventSystems::PhysicsRaycaster::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::EventSystems::PhysicsRaycaster*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::PhysicsRaycaster::PhysicsRaycaster() {}
