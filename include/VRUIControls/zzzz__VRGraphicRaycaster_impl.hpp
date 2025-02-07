#pragma once
// IWYU pragma private; include "VRUIControls/VRGraphicRaycaster.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult::*)(
    ::UnityEngine::UI::Graphic*, float_t, ::UnityEngine::Vector3, ::UnityEngine::Vector2)>(&::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4af205c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Graphic*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
inline void VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult::_ctor(::UnityEngine::UI::Graphic* graphic, float_t distance, ::UnityEngine::Vector3 position,
                                                                           ::UnityEngine::Vector2 insideRootCanvasPosition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Graphic*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, graphic, distance, position, insideRootCanvasPosition);
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRGraphicRaycaster___c::*)()>(&::VRUIControls::VRGraphicRaycaster___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4af21ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRGraphicRaycaster___c._RaycastCanvas_b__12_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VRUIControls::VRGraphicRaycaster___c::*)(
    ::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult, ::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult)>(&::VRUIControls::VRGraphicRaycaster___c::_RaycastCanvas_b__12_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x4af21f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster___c*>::get(), "<RaycastCanvas>b__12_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>::get() })));
    return ___internal_method;
  }
};
inline void VRUIControls::VRGraphicRaycaster___c::setStaticF___9(::VRUIControls::VRGraphicRaycaster___c* value) {
  ::cordl_internals::setStaticField<::VRUIControls::VRGraphicRaycaster___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster___c*>::get>(
      std::forward<::VRUIControls::VRGraphicRaycaster___c*>(value));
}
inline ::VRUIControls::VRGraphicRaycaster___c* VRUIControls::VRGraphicRaycaster___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::VRUIControls::VRGraphicRaycaster___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster___c*>::get>();
}
inline void VRUIControls::VRGraphicRaycaster___c::setStaticF___9__12_0(::System::Comparison_1<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>*, "<>9__12_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster___c*>::get>(
      std::forward<::System::Comparison_1<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>*>(value));
}
inline ::System::Comparison_1<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>* VRUIControls::VRGraphicRaycaster___c::getStaticF___9__12_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>*, "<>9__12_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster___c*>::get>();
}
inline void VRUIControls::VRGraphicRaycaster___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t VRUIControls::VRGraphicRaycaster___c::_RaycastCanvas_b__12_0(::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult g1,
                                                                            ::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult g2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster___c*>::get(), "<RaycastCanvas>b__12_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, g1, g2);
}
inline ::VRUIControls::VRGraphicRaycaster___c* VRUIControls::VRGraphicRaycaster___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VRUIControls::VRGraphicRaycaster___c*>());
}
// Ctor Parameters []
constexpr ::VRUIControls::VRGraphicRaycaster___c::VRGraphicRaycaster___c() {}
//  Writing Method size for method: ::VRUIControls::VRGraphicRaycaster.get_eventCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Camera> (::VRUIControls::VRGraphicRaycaster::*)()>(
    &::VRUIControls::VRGraphicRaycaster::get_eventCamera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4af0dcc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRGraphicRaycaster.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRGraphicRaycaster::*)()>(&::VRUIControls::VRGraphicRaycaster::OnEnable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x4af0dd4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRGraphicRaycaster.Raycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRGraphicRaycaster::*)(
    ::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(&::VRUIControls::VRGraphicRaycaster::Raycast)> {
  constexpr static std::size_t size = 0x6c0;
  constexpr static std::size_t addrs = 0x4af0e44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRGraphicRaycaster.RaycastCanvas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Canvas*, ::UnityEngine::Ray, float_t, float_t, ::System::Collections::Generic::List_1<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>*)>(
        &::VRUIControls::VRGraphicRaycaster::RaycastCanvas)> {
  constexpr static std::size_t size = 0xb58;
  constexpr static std::size_t addrs = 0x4af1504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster*>::get(), "RaycastCanvas", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Canvas*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRGraphicRaycaster._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRGraphicRaycaster::*)()>(&::VRUIControls::VRGraphicRaycaster::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x4af2070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____physicsRaycaster)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____canvas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____raycastResults)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
inline ::UnityW<::UnityEngine::Camera> VRUIControls::VRGraphicRaycaster::get_eventCamera() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>, false>(this, ___internal_method);
}
inline void VRUIControls::VRGraphicRaycaster::OnEnable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VRUIControls::VRGraphicRaycaster::Raycast(::UnityEngine::EventSystems::PointerEventData* eventData,
                                                      ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData, resultAppendList);
}
inline void VRUIControls::VRGraphicRaycaster::RaycastCanvas(::UnityEngine::Canvas* canvas, ::UnityEngine::Ray ray, float_t hitDistance, float_t curvedUIRadius,
                                                            ::System::Collections::Generic::List_1<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>* results) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster*>::get(), "RaycastCanvas", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Canvas*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, canvas, ray, hitDistance, curvedUIRadius, results);
}
inline void VRUIControls::VRGraphicRaycaster::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRGraphicRaycaster*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VRUIControls::VRGraphicRaycaster* VRUIControls::VRGraphicRaycaster::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VRUIControls::VRGraphicRaycaster*>());
}
// Ctor Parameters []
constexpr ::VRUIControls::VRGraphicRaycaster::VRGraphicRaycaster() {}
