#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/WorldDocumentRaycaster.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_impl.hpp"
#include "UnityEngine/UIElements/zzzz__WorldDocumentRaycaster_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/UIElements/zzzz__PhysicsDocumentPicker_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::WorldDocumentRaycaster.get_eventCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::UnityEngine::UIElements::WorldDocumentRaycaster::*)()>(
    &::UnityEngine::UIElements::WorldDocumentRaycaster::get_eventCamera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72b288c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WorldDocumentRaycaster*>(), { ::i2c::class_of<::UnityEngine::UIElements::WorldDocumentRaycaster*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::WorldDocumentRaycaster.get_camera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::UnityEngine::UIElements::WorldDocumentRaycaster::*)()>(
    &::UnityEngine::UIElements::WorldDocumentRaycaster::get_camera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72b2894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WorldDocumentRaycaster*>(), { "get_camera", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::WorldDocumentRaycaster.set_camera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::WorldDocumentRaycaster::*)(::UnityEngine::Camera*)>(
    &::UnityEngine::UIElements::WorldDocumentRaycaster::set_camera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72b289c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WorldDocumentRaycaster*>(), { "set_camera", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::WorldDocumentRaycaster.Raycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::WorldDocumentRaycaster::*)(
    ::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(
    &::UnityEngine::UIElements::WorldDocumentRaycaster::Raycast)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x72b28a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WorldDocumentRaycaster*>(), { ::i2c::class_of<::UnityEngine::UIElements::WorldDocumentRaycaster*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::WorldDocumentRaycaster.GetWorldRay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::WorldDocumentRaycaster::*)(
    ::UnityEngine::EventSystems::PointerEventData*, ::by_ref<::UnityEngine::Ray>, ::by_ref<float_t>, ::by_ref<int32_t>)>(&::UnityEngine::UIElements::WorldDocumentRaycaster::GetWorldRay)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x72b2de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WorldDocumentRaycaster*>(), { ::i2c::class_of<::UnityEngine::UIElements::WorldDocumentRaycaster*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::WorldDocumentRaycaster._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::WorldDocumentRaycaster::*)()>(&::UnityEngine::UIElements::WorldDocumentRaycaster::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x72b2f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WorldDocumentRaycaster*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& UnityEngine::UIElements::WorldDocumentRaycaster::__cordl_internal_get_m_EventCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& UnityEngine::UIElements::WorldDocumentRaycaster::__cordl_internal_get_m_EventCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventCamera;
}
constexpr void UnityEngine::UIElements::WorldDocumentRaycaster::__cordl_internal_set_m_EventCamera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EventCamera = value;
}
inline void UnityEngine::UIElements::WorldDocumentRaycaster::setStaticF_worldPicker(::UnityEngine::UIElements::PhysicsDocumentPicker* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::PhysicsDocumentPicker*, "worldPicker", ::UnityEngine::UIElements::WorldDocumentRaycaster*>(
      std::forward<::UnityEngine::UIElements::PhysicsDocumentPicker*>(value));
}
inline ::UnityEngine::UIElements::PhysicsDocumentPicker* UnityEngine::UIElements::WorldDocumentRaycaster::getStaticF_worldPicker() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::PhysicsDocumentPicker*, "worldPicker", ::UnityEngine::UIElements::WorldDocumentRaycaster*>();
}
inline ::UnityW<::UnityEngine::Camera> UnityEngine::UIElements::WorldDocumentRaycaster::get_eventCamera() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::WorldDocumentRaycaster*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Camera> UnityEngine::UIElements::WorldDocumentRaycaster::get_camera() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WorldDocumentRaycaster*>(), { "get_camera", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::WorldDocumentRaycaster::set_camera(::UnityEngine::Camera* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WorldDocumentRaycaster*>(), { "set_camera", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::WorldDocumentRaycaster::Raycast(::UnityEngine::EventSystems::PointerEventData* eventData,
                                                                     ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::WorldDocumentRaycaster*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData, resultAppendList);
}
inline bool UnityEngine::UIElements::WorldDocumentRaycaster::GetWorldRay(::UnityEngine::EventSystems::PointerEventData* eventData, ::by_ref<::UnityEngine::Ray> worldRay, ::by_ref<float_t> maxDistance,
                                                                         ::by_ref<int32_t> layerMask) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::WorldDocumentRaycaster*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, eventData, worldRay, maxDistance, layerMask);
}
inline void UnityEngine::UIElements::WorldDocumentRaycaster::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WorldDocumentRaycaster*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::WorldDocumentRaycaster* UnityEngine::UIElements::WorldDocumentRaycaster::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::WorldDocumentRaycaster*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::WorldDocumentRaycaster::WorldDocumentRaycaster() {}
