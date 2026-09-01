#pragma once
// IWYU pragma private; include "UnityEngine\EventSystems\OVRPhysicsRaycaster.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__OVRPhysicsRaycaster_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__OVRPhysicsRaycaster_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRPhysicsRaycaster___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::OVRPhysicsRaycaster___c::*)()>(&::UnityEngine::EventSystems::OVRPhysicsRaycaster___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e4ee3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRPhysicsRaycaster___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRPhysicsRaycaster___c._Raycast_b__15_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::EventSystems::OVRPhysicsRaycaster___c::*)(::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit)>(
    &::UnityEngine::EventSystems::OVRPhysicsRaycaster___c::_Raycast_b__15_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5e4ee40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRPhysicsRaycaster___c*>(),
                                                             { "<Raycast>b__15_0", {}, { ::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::UnityEngine::RaycastHit>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRPhysicsRaycaster___c._Spherecast_b__16_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::EventSystems::OVRPhysicsRaycaster___c::*)(::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit)>(
    &::UnityEngine::EventSystems::OVRPhysicsRaycaster___c::_Spherecast_b__16_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5e4eea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRPhysicsRaycaster___c*>(),
                                                             { "<Spherecast>b__16_0", {}, { ::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::UnityEngine::RaycastHit>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::EventSystems::OVRPhysicsRaycaster___c::setStaticF___9(::UnityEngine::EventSystems::OVRPhysicsRaycaster___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::OVRPhysicsRaycaster___c*, "<>9", ::UnityEngine::EventSystems::OVRPhysicsRaycaster___c*>(
      std::forward<::UnityEngine::EventSystems::OVRPhysicsRaycaster___c*>(value));
}
inline ::UnityEngine::EventSystems::OVRPhysicsRaycaster___c* UnityEngine::EventSystems::OVRPhysicsRaycaster___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::OVRPhysicsRaycaster___c*, "<>9", ::UnityEngine::EventSystems::OVRPhysicsRaycaster___c*>();
}
inline void UnityEngine::EventSystems::OVRPhysicsRaycaster___c::setStaticF___9__15_0(::System::Comparison_1<::UnityEngine::RaycastHit>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::RaycastHit>*, "<>9__15_0", ::UnityEngine::EventSystems::OVRPhysicsRaycaster___c*>(
      std::forward<::System::Comparison_1<::UnityEngine::RaycastHit>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::RaycastHit>* UnityEngine::EventSystems::OVRPhysicsRaycaster___c::getStaticF___9__15_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::RaycastHit>*, "<>9__15_0", ::UnityEngine::EventSystems::OVRPhysicsRaycaster___c*>();
}
inline void UnityEngine::EventSystems::OVRPhysicsRaycaster___c::setStaticF___9__16_0(::System::Comparison_1<::UnityEngine::RaycastHit>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::RaycastHit>*, "<>9__16_0", ::UnityEngine::EventSystems::OVRPhysicsRaycaster___c*>(
      std::forward<::System::Comparison_1<::UnityEngine::RaycastHit>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::RaycastHit>* UnityEngine::EventSystems::OVRPhysicsRaycaster___c::getStaticF___9__16_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::RaycastHit>*, "<>9__16_0", ::UnityEngine::EventSystems::OVRPhysicsRaycaster___c*>();
}
inline void UnityEngine::EventSystems::OVRPhysicsRaycaster___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRPhysicsRaycaster___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::EventSystems::OVRPhysicsRaycaster___c::_Raycast_b__15_0(::UnityEngine::RaycastHit r1, ::UnityEngine::RaycastHit r2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRPhysicsRaycaster___c*>(),
                                                           { "<Raycast>b__15_0", {}, { ::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::UnityEngine::RaycastHit>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, r1, r2);
}
inline int32_t UnityEngine::EventSystems::OVRPhysicsRaycaster___c::_Spherecast_b__16_0(::UnityEngine::RaycastHit r1, ::UnityEngine::RaycastHit r2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRPhysicsRaycaster___c*>(),
                                                           { "<Spherecast>b__16_0", {}, { ::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::UnityEngine::RaycastHit>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, r1, r2);
}
inline ::UnityEngine::EventSystems::OVRPhysicsRaycaster___c* UnityEngine::EventSystems::OVRPhysicsRaycaster___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::EventSystems::OVRPhysicsRaycaster___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::OVRPhysicsRaycaster___c::OVRPhysicsRaycaster___c() {}
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRPhysicsRaycaster._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::OVRPhysicsRaycaster::*)()>(&::UnityEngine::EventSystems::OVRPhysicsRaycaster::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e4e82c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRPhysicsRaycaster*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRPhysicsRaycaster.get_eventCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::UnityEngine::EventSystems::OVRPhysicsRaycaster::*)()>(
    &::UnityEngine::EventSystems::OVRPhysicsRaycaster::get_eventCamera)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e4e838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRPhysicsRaycaster*>(), { ::i2c::class_of<::UnityEngine::EventSystems::OVRPhysicsRaycaster*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRPhysicsRaycaster.get_depth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::EventSystems::OVRPhysicsRaycaster::*)()>(&::UnityEngine::EventSystems::OVRPhysicsRaycaster::get_depth)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5e4e8a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRPhysicsRaycaster*>(), { ::i2c::class_of<::UnityEngine::EventSystems::OVRPhysicsRaycaster*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRPhysicsRaycaster.get_sortOrderPriority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::EventSystems::OVRPhysicsRaycaster::*)()>(&::UnityEngine::EventSystems::OVRPhysicsRaycaster::get_sortOrderPriority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4e970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRPhysicsRaycaster*>(), { ::i2c::class_of<::UnityEngine::EventSystems::OVRPhysicsRaycaster*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRPhysicsRaycaster.get_finalEventMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::EventSystems::OVRPhysicsRaycaster::*)()>(&::UnityEngine::EventSystems::OVRPhysicsRaycaster::get_finalEventMask)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5e4e978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRPhysicsRaycaster*>(), { "get_finalEventMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRPhysicsRaycaster.get_eventMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::UnityEngine::EventSystems::OVRPhysicsRaycaster::*)()>(
    &::UnityEngine::EventSystems::OVRPhysicsRaycaster::get_eventMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4ea30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRPhysicsRaycaster*>(), { "get_eventMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRPhysicsRaycaster.set_eventMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::OVRPhysicsRaycaster::*)(::UnityEngine::LayerMask)>(
    &::UnityEngine::EventSystems::OVRPhysicsRaycaster::set_eventMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4ea38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRPhysicsRaycaster*>(), { "set_eventMask", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRPhysicsRaycaster.Raycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::OVRPhysicsRaycaster::*)(
    ::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(&::UnityEngine::EventSystems::OVRPhysicsRaycaster::Raycast)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x5e4ea40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRPhysicsRaycaster*>(), { ::i2c::class_of<::UnityEngine::EventSystems::OVRPhysicsRaycaster*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRPhysicsRaycaster.Spherecast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::OVRPhysicsRaycaster::*)(
    ::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*, float_t)>(
    &::UnityEngine::EventSystems::OVRPhysicsRaycaster::Spherecast)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x5e4ccc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRPhysicsRaycaster*>(),
                                                { "Spherecast",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(),
                                                    ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRPhysicsRaycaster.GetScreenPos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::EventSystems::OVRPhysicsRaycaster::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::EventSystems::OVRPhysicsRaycaster::GetScreenPos)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5e4d074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRPhysicsRaycaster*>(), { "GetScreenPos", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::LayerMask& UnityEngine::EventSystems::OVRPhysicsRaycaster::__cordl_internal_get_m_EventMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventMask;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::EventSystems::OVRPhysicsRaycaster::__cordl_internal_get_m_EventMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventMask;
}
constexpr void UnityEngine::EventSystems::OVRPhysicsRaycaster::__cordl_internal_set_m_EventMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EventMask = value;
}
constexpr int32_t& UnityEngine::EventSystems::OVRPhysicsRaycaster::__cordl_internal_get_sortOrder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sortOrder;
}
constexpr int32_t const& UnityEngine::EventSystems::OVRPhysicsRaycaster::__cordl_internal_get_sortOrder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sortOrder;
}
constexpr void UnityEngine::EventSystems::OVRPhysicsRaycaster::__cordl_internal_set_sortOrder(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sortOrder = value;
}
inline void UnityEngine::EventSystems::OVRPhysicsRaycaster::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRPhysicsRaycaster*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Camera> UnityEngine::EventSystems::OVRPhysicsRaycaster::get_eventCamera() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::OVRPhysicsRaycaster*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline int32_t UnityEngine::EventSystems::OVRPhysicsRaycaster::get_depth() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::OVRPhysicsRaycaster*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::EventSystems::OVRPhysicsRaycaster::get_sortOrderPriority() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::OVRPhysicsRaycaster*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::EventSystems::OVRPhysicsRaycaster::get_finalEventMask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRPhysicsRaycaster*>(), { "get_finalEventMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::LayerMask UnityEngine::EventSystems::OVRPhysicsRaycaster::get_eventMask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRPhysicsRaycaster*>(), { "get_eventMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::OVRPhysicsRaycaster::set_eventMask(::UnityEngine::LayerMask value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRPhysicsRaycaster*>(), { "set_eventMask", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::EventSystems::OVRPhysicsRaycaster::Raycast(::UnityEngine::EventSystems::PointerEventData* eventData,
                                                                    ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::OVRPhysicsRaycaster*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData, resultAppendList);
}
inline void UnityEngine::EventSystems::OVRPhysicsRaycaster::Spherecast(::UnityEngine::EventSystems::PointerEventData* eventData,
                                                                       ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList, float_t radius) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRPhysicsRaycaster*>(),
                                                           { "Spherecast",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData, resultAppendList, radius);
}
inline ::UnityEngine::Vector2 UnityEngine::EventSystems::OVRPhysicsRaycaster::GetScreenPos(::UnityEngine::Vector3 worldPosition) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRPhysicsRaycaster*>(), { "GetScreenPos", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, worldPosition);
}
inline ::UnityEngine::EventSystems::OVRPhysicsRaycaster* UnityEngine::EventSystems::OVRPhysicsRaycaster::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::EventSystems::OVRPhysicsRaycaster*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::OVRPhysicsRaycaster::OVRPhysicsRaycaster() {}
