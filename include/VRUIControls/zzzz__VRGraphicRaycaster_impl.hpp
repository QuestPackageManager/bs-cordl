#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "VRUIControls/zzzz__VRGraphicRaycaster_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "HMUI/zzzz__CurvedCanvasSettingsHelper_def.hpp"
#include "VRUIControls/zzzz__VRGraphicRaycaster_def.hpp"
#include "VRUIControls/zzzz__PhysicsRaycasterWithCache_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult::*)(
    ::UnityEngine::UI::Graphic*, float_t, ::UnityEngine::Vector3, ::UnityEngine::Vector2)>(&::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d4d048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Graphic*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
inline void VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult::_ctor(::UnityEngine::UI::Graphic* graphic, float_t distance, ::UnityEngine::Vector3 position,
                                                                              ::UnityEngine::Vector2 insideRootCanvasPosition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Graphic*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, graphic, distance, position, insideRootCanvasPosition);
}
// Ctor Parameters [CppParam { name: "graphic", ty: "::UnityEngine::UI::Graphic*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "distance", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "insideRootCanvasPosition", ty: "::UnityEngine::Vector2",
// modifiers: "", def_value: Some("{}") }]
constexpr ::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult::__VRGraphicRaycaster__VRGraphicRaycastResult(::UnityEngine::UI::Graphic* graphic, float_t distance,
                                                                                                                     ::UnityEngine::Vector3 position,
                                                                                                                     ::UnityEngine::Vector2 insideRootCanvasPosition) noexcept {
  this->graphic = graphic;
  this->distance = distance;
  this->position = position;
  this->insideRootCanvasPosition = insideRootCanvasPosition;
}
// Ctor Parameters []
constexpr ::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult::__VRGraphicRaycaster__VRGraphicRaycastResult() {}
//  Writing Method size for method: ::VRUIControls::__VRGraphicRaycaster____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::__VRGraphicRaycaster____c::*)()>(&::VRUIControls::__VRGraphicRaycaster____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d4d1e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::__VRGraphicRaycaster____c*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::__VRGraphicRaycaster____c._RaycastCanvas_b__12_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VRUIControls::__VRGraphicRaycaster____c::*)(
    ::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult, ::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult)>(&::VRUIControls::__VRGraphicRaycaster____c::_RaycastCanvas_b__12_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2d4d1ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::__VRGraphicRaycaster____c*>::get(), "<RaycastCanvas>b__12_0", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult>::get() })));
    return ___internal_method;
  }
};
inline void VRUIControls::__VRGraphicRaycaster____c::setStaticF___9(::VRUIControls::__VRGraphicRaycaster____c* value) {
  ::cordl_internals::setStaticField<::VRUIControls::__VRGraphicRaycaster____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::__VRGraphicRaycaster____c*>::get>(
      std::forward<::VRUIControls::__VRGraphicRaycaster____c*>(value));
}
inline ::VRUIControls::__VRGraphicRaycaster____c* VRUIControls::__VRGraphicRaycaster____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::VRUIControls::__VRGraphicRaycaster____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::__VRGraphicRaycaster____c*>::get>();
}
inline void VRUIControls::__VRGraphicRaycaster____c::setStaticF___9__12_0(::System::Comparison_1<::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult>*, "<>9__12_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::__VRGraphicRaycaster____c*>::get>(
      std::forward<::System::Comparison_1<::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult>*>(value));
}
inline ::System::Comparison_1<::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult>* VRUIControls::__VRGraphicRaycaster____c::getStaticF___9__12_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult>*, "<>9__12_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::__VRGraphicRaycaster____c*>::get>();
}
inline ::VRUIControls::__VRGraphicRaycaster____c* VRUIControls::__VRGraphicRaycaster____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::VRUIControls::__VRGraphicRaycaster____c*>());
}
inline void VRUIControls::__VRGraphicRaycaster____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::__VRGraphicRaycaster____c*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t VRUIControls::__VRGraphicRaycaster____c::_RaycastCanvas_b__12_0(::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult g1,
                                                                               ::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult g2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::__VRGraphicRaycaster____c*>::get(), "<RaycastCanvas>b__12_0", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, g1, g2);
}
// Ctor Parameters []
constexpr ::VRUIControls::__VRGraphicRaycaster____c::__VRGraphicRaycaster____c() {}
//  Writing Method size for method: ::VRUIControls::VRGraphicRaycaster.get_eventCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Camera* (::VRUIControls::VRGraphicRaycaster::*)()>(
    &::VRUIControls::VRGraphicRaycaster::get_eventCamera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d4bdf8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRGraphicRaycaster.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRGraphicRaycaster::*)()>(&::VRUIControls::VRGraphicRaycaster::OnEnable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2d4be00;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRGraphicRaycaster.Raycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRGraphicRaycaster::*)(
    ::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(&::VRUIControls::VRGraphicRaycaster::Raycast)> {
  constexpr static std::size_t size = 0x690;
  constexpr static std::size_t addrs = 0x2d4be70;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRGraphicRaycaster.RaycastCanvas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Canvas*, ::UnityEngine::Ray, float_t, float_t, ::System::Collections::Generic::List_1<::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult>*)>(
        &::VRUIControls::VRGraphicRaycaster::RaycastCanvas)> {
  constexpr static std::size_t size = 0xb48;
  constexpr static std::size_t addrs = 0x2d4c500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster*>::get(), "RaycastCanvas", std::vector<Il2CppClass*>{},
            ::std::vector<Il2CppType const*>{
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Canvas*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRGraphicRaycaster._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRGraphicRaycaster::*)()>(&::VRUIControls::VRGraphicRaycaster::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2d4d05c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::LayerMask& VRUIControls::VRGraphicRaycaster::__get__blockingMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blockingMask;
}
constexpr ::UnityEngine::LayerMask const& VRUIControls::VRGraphicRaycaster::__get__blockingMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blockingMask;
}
constexpr void VRUIControls::VRGraphicRaycaster::__set__blockingMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____blockingMask = value;
}
constexpr ::VRUIControls::PhysicsRaycasterWithCache*& VRUIControls::VRGraphicRaycaster::__get__physicsRaycaster() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____physicsRaycaster;
}
constexpr ::cordl_internals::to_const_pointer<::VRUIControls::PhysicsRaycasterWithCache*> const& VRUIControls::VRGraphicRaycaster::__get__physicsRaycaster() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____physicsRaycaster;
}
constexpr void VRUIControls::VRGraphicRaycaster::__set__physicsRaycaster(::VRUIControls::PhysicsRaycasterWithCache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____physicsRaycaster)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Canvas*& VRUIControls::VRGraphicRaycaster::__get__canvas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvas;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Canvas*> const& VRUIControls::VRGraphicRaycaster::__get__canvas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvas;
}
constexpr void VRUIControls::VRGraphicRaycaster::__set__canvas(::UnityEngine::Canvas* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____canvas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult>*& VRUIControls::VRGraphicRaycaster::__get__raycastResults() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____raycastResults;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult>*> const&
VRUIControls::VRGraphicRaycaster::__get__raycastResults() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____raycastResults;
}
constexpr void VRUIControls::VRGraphicRaycaster::__set__raycastResults(::System::Collections::Generic::List_1<::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____raycastResults)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::CurvedCanvasSettingsHelper*& VRUIControls::VRGraphicRaycaster::__get__curvedCanvasSettingsHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curvedCanvasSettingsHelper;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::CurvedCanvasSettingsHelper*> const& VRUIControls::VRGraphicRaycaster::__get__curvedCanvasSettingsHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curvedCanvasSettingsHelper;
}
constexpr void VRUIControls::VRGraphicRaycaster::__set__curvedCanvasSettingsHelper(::HMUI::CurvedCanvasSettingsHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____curvedCanvasSettingsHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VRUIControls::VRGraphicRaycaster::setStaticF__ray2DCircleIntersectionDistances(::ArrayW<float_t, ::Array<float_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<float_t, ::Array<float_t>*>, "_ray2DCircleIntersectionDistances",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster*>::get>(std::forward<::ArrayW<float_t, ::Array<float_t>*>>(value));
}
inline ::ArrayW<float_t, ::Array<float_t>*> VRUIControls::VRGraphicRaycaster::getStaticF__ray2DCircleIntersectionDistances() {
  return ::cordl_internals::getStaticField<::ArrayW<float_t, ::Array<float_t>*>, "_ray2DCircleIntersectionDistances",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster*>::get>();
}
inline ::UnityEngine::Camera* VRUIControls::VRGraphicRaycaster::get_eventCamera() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster*>::get(), "get_eventCamera",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Camera*, false>(this, ___internal_method);
}
inline void VRUIControls::VRGraphicRaycaster::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster*>::get(), "OnEnable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VRUIControls::VRGraphicRaycaster::Raycast(::UnityEngine::EventSystems::PointerEventData* eventData,
                                                      ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster*>::get(), "Raycast", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData, resultAppendList);
}
inline void VRUIControls::VRGraphicRaycaster::RaycastCanvas(::UnityEngine::Canvas* canvas, ::UnityEngine::Ray ray, float_t hitDistance, float_t curvedUIRadius,
                                                            ::System::Collections::Generic::List_1<::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult>* results) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster*>::get(), "RaycastCanvas", std::vector<Il2CppClass*>{},
          ::std::vector<Il2CppType const*>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Canvas*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, canvas, ray, hitDistance, curvedUIRadius, results);
}
inline ::VRUIControls::VRGraphicRaycaster* VRUIControls::VRGraphicRaycaster::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::VRUIControls::VRGraphicRaycaster*>());
}
inline void VRUIControls::VRGraphicRaycaster::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::VRUIControls::VRGraphicRaycaster::VRGraphicRaycaster() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
