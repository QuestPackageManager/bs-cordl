#pragma once
// IWYU pragma private; include "VRUIControls\VRGraphicRaycaster.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "VRUIControls/zzzz__VRGraphicRaycaster_def.hpp"
#include "HMUI/zzzz__CurvedCanvasSettingsHelper_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VRUIControls/zzzz__PhysicsRaycasterWithCache_def.hpp"
#include "VRUIControls/zzzz__VRGraphicRaycaster_def.hpp"
//  Writing Method size for method: ::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult::*)(
    ::UnityEngine::UI::Graphic*, float_t, ::UnityEngine::Vector3, ::UnityEngine::Vector2)>(&::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e3c190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>(),
            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UI::Graphic*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
inline void VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult::_ctor(::UnityEngine::UI::Graphic* graphic, float_t distance, ::UnityEngine::Vector3 position,
                                                                           ::UnityEngine::Vector2 insideRootCanvasPosition) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>(),
          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UI::Graphic*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, graphic, distance, position, insideRootCanvasPosition);
}
// Ctor Parameters [CppParam { name: "graphic", ty: "::UnityW<::UnityEngine::UI::Graphic>", modifiers: "", def_value: Some("{}") }, CppParam { name: "distance", ty: "float_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "insideRootCanvasPosition", ty:
// "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }]
constexpr ::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult::VRGraphicRaycaster_VRGraphicRaycastResult(::UnityW<::UnityEngine::UI::Graphic> graphic, float_t distance,
                                                                                                               ::UnityEngine::Vector3 position,
                                                                                                               ::UnityEngine::Vector2 insideRootCanvasPosition) noexcept {
  this->graphic = graphic;
  this->distance = distance;
  this->position = position;
  this->insideRootCanvasPosition = insideRootCanvasPosition;
}
// Ctor Parameters []
constexpr ::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult::VRGraphicRaycaster_VRGraphicRaycastResult() {}
//  Writing Method size for method: ::VRUIControls::VRGraphicRaycaster___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRGraphicRaycaster___c::*)()>(&::VRUIControls::VRGraphicRaycaster___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e3c310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRGraphicRaycaster___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRGraphicRaycaster___c._RaycastCanvas_b__12_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::VRUIControls::VRGraphicRaycaster___c::*)(
    ::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult, ::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult)>(&::VRUIControls::VRGraphicRaycaster___c::_RaycastCanvas_b__12_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6e3c314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRGraphicRaycaster___c*>(), { "<RaycastCanvas>b__12_0",
                                                                                                              {},
                                                                                                              { ::i2c::type_of<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>(),
                                                                                                                ::i2c::type_of<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>() } })));
    return ___internal_method;
  }
};
inline void VRUIControls::VRGraphicRaycaster___c::setStaticF___9(::VRUIControls::VRGraphicRaycaster___c* value) {
  ::cordl_internals::setStaticField<::VRUIControls::VRGraphicRaycaster___c*, "<>9", ::VRUIControls::VRGraphicRaycaster___c*>(std::forward<::VRUIControls::VRGraphicRaycaster___c*>(value));
}
inline ::VRUIControls::VRGraphicRaycaster___c* VRUIControls::VRGraphicRaycaster___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::VRUIControls::VRGraphicRaycaster___c*, "<>9", ::VRUIControls::VRGraphicRaycaster___c*>();
}
inline void VRUIControls::VRGraphicRaycaster___c::setStaticF___9__12_0(::System::Comparison_1<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>*, "<>9__12_0", ::VRUIControls::VRGraphicRaycaster___c*>(
      std::forward<::System::Comparison_1<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>*>(value));
}
inline ::System::Comparison_1<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>* VRUIControls::VRGraphicRaycaster___c::getStaticF___9__12_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>*, "<>9__12_0", ::VRUIControls::VRGraphicRaycaster___c*>();
}
inline void VRUIControls::VRGraphicRaycaster___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRGraphicRaycaster___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t VRUIControls::VRGraphicRaycaster___c::_RaycastCanvas_b__12_0(::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult g1,
                                                                            ::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult g2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRGraphicRaycaster___c*>(), { "<RaycastCanvas>b__12_0",
                                                                                                            {},
                                                                                                            { ::i2c::type_of<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>(),
                                                                                                              ::i2c::type_of<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, g1, g2);
}
inline ::VRUIControls::VRGraphicRaycaster___c* VRUIControls::VRGraphicRaycaster___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VRUIControls::VRGraphicRaycaster___c*>());
}
// Ctor Parameters []
constexpr ::VRUIControls::VRGraphicRaycaster___c::VRGraphicRaycaster___c() {}
//  Writing Method size for method: ::VRUIControls::VRGraphicRaycaster.get_eventCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::VRUIControls::VRGraphicRaycaster::*)()>(&::VRUIControls::VRGraphicRaycaster::get_eventCamera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3af24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::VRUIControls::VRGraphicRaycaster*>(), { ::i2c::class_of<::VRUIControls::VRGraphicRaycaster*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRGraphicRaycaster.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRGraphicRaycaster::*)()>(&::VRUIControls::VRGraphicRaycaster::OnEnable)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e3af2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::VRUIControls::VRGraphicRaycaster*>(), { ::i2c::class_of<::VRUIControls::VRGraphicRaycaster*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRGraphicRaycaster.Raycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRGraphicRaycaster::*)(
    ::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(&::VRUIControls::VRGraphicRaycaster::Raycast)> {
  constexpr static std::size_t size = 0x638;
  constexpr static std::size_t addrs = 0x6e3afa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::VRUIControls::VRGraphicRaycaster*>(), { ::i2c::class_of<::VRUIControls::VRGraphicRaycaster*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRGraphicRaycaster.RaycastCanvas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::Canvas*, ::UnityEngine::Ray, float_t, float_t, ::System::Collections::Generic::List_1<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>*)>(
        &::VRUIControls::VRGraphicRaycaster::RaycastCanvas)> {
  constexpr static std::size_t size = 0xbb0;
  constexpr static std::size_t addrs = 0x6e3b5e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRGraphicRaycaster*>(),
                                                             { "RaycastCanvas",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Canvas*>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRGraphicRaycaster._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRGraphicRaycaster::*)()>(&::VRUIControls::VRGraphicRaycaster::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6e3c1a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRGraphicRaycaster*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::LayerMask& VRUIControls::VRGraphicRaycaster::__cordl_internal_get__blockingMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blockingMask;
}
constexpr ::UnityEngine::LayerMask const& VRUIControls::VRGraphicRaycaster::__cordl_internal_get__blockingMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blockingMask;
}
constexpr void VRUIControls::VRGraphicRaycaster::__cordl_internal_set__blockingMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____blockingMask = value;
}
constexpr ::VRUIControls::PhysicsRaycasterWithCache*& VRUIControls::VRGraphicRaycaster::__cordl_internal_get__physicsRaycaster() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____physicsRaycaster;
}
constexpr ::VRUIControls::PhysicsRaycasterWithCache* const& VRUIControls::VRGraphicRaycaster::__cordl_internal_get__physicsRaycaster() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____physicsRaycaster;
}
constexpr void VRUIControls::VRGraphicRaycaster::__cordl_internal_set__physicsRaycaster(::VRUIControls::PhysicsRaycasterWithCache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____physicsRaycaster = value;
}
constexpr ::UnityW<::UnityEngine::Canvas>& VRUIControls::VRGraphicRaycaster::__cordl_internal_get__canvas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvas;
}
constexpr ::UnityW<::UnityEngine::Canvas> const& VRUIControls::VRGraphicRaycaster::__cordl_internal_get__canvas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvas;
}
constexpr void VRUIControls::VRGraphicRaycaster::__cordl_internal_set__canvas(::UnityW<::UnityEngine::Canvas> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____canvas = value;
}
constexpr ::System::Collections::Generic::List_1<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>*& VRUIControls::VRGraphicRaycaster::__cordl_internal_get__raycastResults() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____raycastResults;
}
constexpr ::System::Collections::Generic::List_1<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>* const& VRUIControls::VRGraphicRaycaster::__cordl_internal_get__raycastResults() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____raycastResults;
}
constexpr void VRUIControls::VRGraphicRaycaster::__cordl_internal_set__raycastResults(::System::Collections::Generic::List_1<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____raycastResults = value;
}
constexpr ::HMUI::CurvedCanvasSettingsHelper*& VRUIControls::VRGraphicRaycaster::__cordl_internal_get__curvedCanvasSettingsHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curvedCanvasSettingsHelper;
}
constexpr ::HMUI::CurvedCanvasSettingsHelper* const& VRUIControls::VRGraphicRaycaster::__cordl_internal_get__curvedCanvasSettingsHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curvedCanvasSettingsHelper;
}
constexpr void VRUIControls::VRGraphicRaycaster::__cordl_internal_set__curvedCanvasSettingsHelper(::HMUI::CurvedCanvasSettingsHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____curvedCanvasSettingsHelper = value;
}
inline void VRUIControls::VRGraphicRaycaster::setStaticF__ray2DCircleIntersectionDistances(::ArrayW<float_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<float_t>, "_ray2DCircleIntersectionDistances", ::VRUIControls::VRGraphicRaycaster*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> VRUIControls::VRGraphicRaycaster::getStaticF__ray2DCircleIntersectionDistances() {
  return ::cordl_internals::getStaticField<::ArrayW<float_t>, "_ray2DCircleIntersectionDistances", ::VRUIControls::VRGraphicRaycaster*>();
}
inline ::UnityW<::UnityEngine::Camera> VRUIControls::VRGraphicRaycaster::get_eventCamera() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::VRUIControls::VRGraphicRaycaster*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline void VRUIControls::VRGraphicRaycaster::OnEnable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::VRUIControls::VRGraphicRaycaster*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void VRUIControls::VRGraphicRaycaster::Raycast(::UnityEngine::EventSystems::PointerEventData* eventData,
                                                      ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::VRUIControls::VRGraphicRaycaster*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData, resultAppendList);
}
inline void VRUIControls::VRGraphicRaycaster::RaycastCanvas(::UnityEngine::Canvas* canvas, ::UnityEngine::Ray ray, float_t hitDistance, float_t curvedUIRadius,
                                                            ::System::Collections::Generic::List_1<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>* results) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRGraphicRaycaster*>(),
                                                           { "RaycastCanvas",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Canvas*>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, canvas, ray, hitDistance, curvedUIRadius, results);
}
inline void VRUIControls::VRGraphicRaycaster::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRGraphicRaycaster*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::VRUIControls::VRGraphicRaycaster* VRUIControls::VRGraphicRaycaster::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VRUIControls::VRGraphicRaycaster*>());
}
// Ctor Parameters []
constexpr ::VRUIControls::VRGraphicRaycaster::VRGraphicRaycaster() {}
