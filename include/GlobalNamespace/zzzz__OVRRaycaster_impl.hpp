#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRRaycaster.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UI/zzzz__GraphicRaycaster_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OVRRaycaster_def.hpp"
#include "GlobalNamespace/zzzz__OVRRayTransformer_def.hpp"
#include "GlobalNamespace/zzzz__OVRRaycaster_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "graphic", ty: "::UnityW<::UnityEngine::UI::Graphic>", modifiers: "", def_value: Some("{}") }, CppParam { name: "worldPos", ty: "::UnityEngine::Vector3",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "fromMouse", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRRaycaster_RaycastHit::OVRRaycaster_RaycastHit(::UnityW<::UnityEngine::UI::Graphic> graphic, ::UnityEngine::Vector3 worldPos, bool fromMouse) noexcept {
  this->graphic = graphic;
  this->worldPos = worldPos;
  this->fromMouse = fromMouse;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRRaycaster_RaycastHit::OVRRaycaster_RaycastHit() {}
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRRaycaster___c::*)()>(&::GlobalNamespace::OVRRaycaster___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f09914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRaycaster___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster___c._GraphicRaycast_b__20_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRRaycaster___c::*)(::GlobalNamespace::OVRRaycaster_RaycastHit, ::GlobalNamespace::OVRRaycaster_RaycastHit)>(
    &::GlobalNamespace::OVRRaycaster___c::_GraphicRaycast_b__20_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f09918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRaycaster___c*>(),
                            { "<GraphicRaycast>b__20_0", {}, { ::i2c::type_of<::GlobalNamespace::OVRRaycaster_RaycastHit>(), ::i2c::type_of<::GlobalNamespace::OVRRaycaster_RaycastHit>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRRaycaster___c::setStaticF___9(::GlobalNamespace::OVRRaycaster___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRRaycaster___c*, "<>9", ::GlobalNamespace::OVRRaycaster___c*>(std::forward<::GlobalNamespace::OVRRaycaster___c*>(value));
}
inline ::GlobalNamespace::OVRRaycaster___c* GlobalNamespace::OVRRaycaster___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRRaycaster___c*, "<>9", ::GlobalNamespace::OVRRaycaster___c*>();
}
inline void GlobalNamespace::OVRRaycaster___c::setStaticF___9__20_0(::System::Comparison_1<::GlobalNamespace::OVRRaycaster_RaycastHit>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::GlobalNamespace::OVRRaycaster_RaycastHit>*, "<>9__20_0", ::GlobalNamespace::OVRRaycaster___c*>(
      std::forward<::System::Comparison_1<::GlobalNamespace::OVRRaycaster_RaycastHit>*>(value));
}
inline ::System::Comparison_1<::GlobalNamespace::OVRRaycaster_RaycastHit>* GlobalNamespace::OVRRaycaster___c::getStaticF___9__20_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::GlobalNamespace::OVRRaycaster_RaycastHit>*, "<>9__20_0", ::GlobalNamespace::OVRRaycaster___c*>();
}
inline void GlobalNamespace::OVRRaycaster___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRaycaster___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::OVRRaycaster___c::_GraphicRaycast_b__20_0(::GlobalNamespace::OVRRaycaster_RaycastHit g1, ::GlobalNamespace::OVRRaycaster_RaycastHit g2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRaycaster___c*>(),
                          { "<GraphicRaycast>b__20_0", {}, { ::i2c::type_of<::GlobalNamespace::OVRRaycaster_RaycastHit>(), ::i2c::type_of<::GlobalNamespace::OVRRaycaster_RaycastHit>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, g1, g2);
}
inline ::GlobalNamespace::OVRRaycaster___c* GlobalNamespace::OVRRaycaster___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRRaycaster___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRRaycaster___c::OVRRaycaster___c() {}
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRRaycaster::*)()>(&::GlobalNamespace::OVRRaycaster::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f07da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRaycaster*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.get_canvas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Canvas> (::GlobalNamespace::OVRRaycaster::*)()>(&::GlobalNamespace::OVRRaycaster::get_canvas)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f07e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRaycaster*>(), { "get_canvas", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.get_rayTransformer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::OVRRayTransformer> (::GlobalNamespace::OVRRaycaster::*)()>(&::GlobalNamespace::OVRRaycaster::get_rayTransformer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f07f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRaycaster*>(), { "get_rayTransformer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.get_eventCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::GlobalNamespace::OVRRaycaster::*)()>(&::GlobalNamespace::OVRRaycaster::get_eventCamera)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f07f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRaycaster*>(), { ::i2c::class_of<::GlobalNamespace::OVRRaycaster*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.get_sortOrderPriority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRRaycaster::*)()>(&::GlobalNamespace::OVRRaycaster::get_sortOrderPriority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f07f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRaycaster*>(), { ::i2c::class_of<::GlobalNamespace::OVRRaycaster*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRRaycaster::*)()>(&::GlobalNamespace::OVRRaycaster::Start)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5f07f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRaycaster*>(), { ::i2c::class_of<::GlobalNamespace::OVRRaycaster*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.Raycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRRaycaster::*)(
    ::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*, ::UnityEngine::Ray, bool, bool)>(
    &::GlobalNamespace::OVRRaycaster::Raycast)> {
  constexpr static std::size_t size = 0x634;
  constexpr static std::size_t addrs = 0x5f080a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRaycaster*>(), { "Raycast",
                                                                                                {},
                                                                                                { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(),
                                                                                                  ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>(),
                                                                                                  ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.Raycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRRaycaster::*)(
    ::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(&::GlobalNamespace::OVRRaycaster::Raycast)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f08d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRaycaster*>(), { ::i2c::class_of<::GlobalNamespace::OVRRaycaster*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.RaycastOnRaycastableGraphics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::OVRRaycaster::*)(::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(
        &::GlobalNamespace::OVRRaycaster::RaycastOnRaycastableGraphics)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f08db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRaycaster*>(), { "RaycastOnRaycastableGraphics",
                                                                                   {},
                                                                                   { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(),
                                                                                     ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.RaycastPointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRRaycaster::*)(
    ::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(&::GlobalNamespace::OVRRaycaster::RaycastPointer)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x5f08e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRaycaster*>(), { "RaycastPointer",
                                                                                   {},
                                                                                   { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(),
                                                                                     ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.GraphicRaycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRRaycaster::*)(::UnityEngine::Canvas*, ::GlobalNamespace::OVRRayTransformer*, ::UnityEngine::Ray,
                                                                                                 ::System::Collections::Generic::List_1<::GlobalNamespace::OVRRaycaster_RaycastHit>*, bool)>(
    &::GlobalNamespace::OVRRaycaster::GraphicRaycast)> {
  constexpr static std::size_t size = 0x684;
  constexpr static std::size_t addrs = 0x5f086d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRaycaster*>(),
                                                { "GraphicRaycast",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Canvas*>(), ::i2c::type_of<::GlobalNamespace::OVRRayTransformer*>(), ::i2c::type_of<::UnityEngine::Ray>(),
                                                    ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRRaycaster_RaycastHit>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.GetScreenPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::OVRRaycaster::*)(::UnityEngine::EventSystems::RaycastResult)>(
    &::GlobalNamespace::OVRRaycaster::GetScreenPosition)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f0958c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRaycaster*>(), { "GetScreenPosition", {}, { ::i2c::type_of<::UnityEngine::EventSystems::RaycastResult>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.RayIntersectsRectTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::RectTransform*, ::UnityEngine::Ray, ::by_ref<::UnityEngine::Vector3>)>(
    &::GlobalNamespace::OVRRaycaster::RayIntersectsRectTransform)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x5f090fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::OVRRaycaster*>(),
            { "RayIntersectsRectTransform", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.IsFocussed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRRaycaster::*)()>(&::GlobalNamespace::OVRRaycaster::IsFocussed)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5f095c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRaycaster*>(), { ::i2c::class_of<::GlobalNamespace::OVRRaycaster*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.OnPointerEnter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRRaycaster::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::GlobalNamespace::OVRRaycaster::OnPointerEnter)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5f096e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRaycaster*>(), { ::i2c::class_of<::GlobalNamespace::OVRRaycaster*>(), 24 }));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRRaycaster::__cordl_internal_get_pointer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pointer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRRaycaster::__cordl_internal_get_pointer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pointer;
}
constexpr void GlobalNamespace::OVRRaycaster::__cordl_internal_set_pointer(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pointer = value;
}
constexpr int32_t& GlobalNamespace::OVRRaycaster::__cordl_internal_get_sortOrder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sortOrder;
}
constexpr int32_t const& GlobalNamespace::OVRRaycaster::__cordl_internal_get_sortOrder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sortOrder;
}
constexpr void GlobalNamespace::OVRRaycaster::__cordl_internal_set_sortOrder(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sortOrder = value;
}
constexpr ::UnityW<::UnityEngine::Canvas>& GlobalNamespace::OVRRaycaster::__cordl_internal_get_m_Canvas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Canvas;
}
constexpr ::UnityW<::UnityEngine::Canvas> const& GlobalNamespace::OVRRaycaster::__cordl_internal_get_m_Canvas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Canvas;
}
constexpr void GlobalNamespace::OVRRaycaster::__cordl_internal_set_m_Canvas(::UnityW<::UnityEngine::Canvas> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Canvas = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRRayTransformer>& GlobalNamespace::OVRRaycaster::__cordl_internal_get_m_RayTransformer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RayTransformer;
}
constexpr ::UnityW<::GlobalNamespace::OVRRayTransformer> const& GlobalNamespace::OVRRaycaster::__cordl_internal_get_m_RayTransformer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RayTransformer;
}
constexpr void GlobalNamespace::OVRRaycaster::__cordl_internal_set_m_RayTransformer(::UnityW<::GlobalNamespace::OVRRayTransformer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RayTransformer = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRRaycaster_RaycastHit>*& GlobalNamespace::OVRRaycaster::__cordl_internal_get_m_RaycastResults() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastResults;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRRaycaster_RaycastHit>* const& GlobalNamespace::OVRRaycaster::__cordl_internal_get_m_RaycastResults() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastResults;
}
constexpr void GlobalNamespace::OVRRaycaster::__cordl_internal_set_m_RaycastResults(::System::Collections::Generic::List_1<::GlobalNamespace::OVRRaycaster_RaycastHit>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RaycastResults = value;
}
inline void GlobalNamespace::OVRRaycaster::setStaticF_s_SortedGraphics(::System::Collections::Generic::List_1<::GlobalNamespace::OVRRaycaster_RaycastHit>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::OVRRaycaster_RaycastHit>*, "s_SortedGraphics", ::GlobalNamespace::OVRRaycaster*>(
      std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::OVRRaycaster_RaycastHit>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::OVRRaycaster_RaycastHit>* GlobalNamespace::OVRRaycaster::getStaticF_s_SortedGraphics() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::OVRRaycaster_RaycastHit>*, "s_SortedGraphics", ::GlobalNamespace::OVRRaycaster*>();
}
inline void GlobalNamespace::OVRRaycaster::setStaticF__corners(::ArrayW<::UnityEngine::Vector3> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3>, "_corners", ::GlobalNamespace::OVRRaycaster*>(std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3> GlobalNamespace::OVRRaycaster::getStaticF__corners() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3>, "_corners", ::GlobalNamespace::OVRRaycaster*>();
}
inline void GlobalNamespace::OVRRaycaster::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRaycaster*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Canvas> GlobalNamespace::OVRRaycaster::get_canvas() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRaycaster*>(), { "get_canvas", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Canvas>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::OVRRayTransformer> GlobalNamespace::OVRRaycaster::get_rayTransformer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRaycaster*>(), { "get_rayTransformer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OVRRayTransformer>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Camera> GlobalNamespace::OVRRaycaster::get_eventCamera() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRRaycaster*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline int32_t GlobalNamespace::OVRRaycaster::get_sortOrderPriority() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRRaycaster*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRRaycaster::Start() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRRaycaster*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRRaycaster::Raycast(::UnityEngine::EventSystems::PointerEventData* eventData,
                                                   ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList, ::UnityEngine::Ray ray, bool checkForBlocking,
                                                   bool checkOnlyRaycastable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRaycaster*>(), { "Raycast",
                                                                                              {},
                                                                                              { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(),
                                                                                                ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>(),
                                                                                                ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData, resultAppendList, ray, checkForBlocking, checkOnlyRaycastable);
}
inline void GlobalNamespace::OVRRaycaster::Raycast(::UnityEngine::EventSystems::PointerEventData* eventData,
                                                   ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRRaycaster*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData, resultAppendList);
}
inline void GlobalNamespace::OVRRaycaster::RaycastOnRaycastableGraphics(::UnityEngine::EventSystems::PointerEventData* eventData,
                                                                        ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRaycaster*>(), { "RaycastOnRaycastableGraphics",
                                                                                 {},
                                                                                 { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(),
                                                                                   ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData, resultAppendList);
}
inline void GlobalNamespace::OVRRaycaster::RaycastPointer(::UnityEngine::EventSystems::PointerEventData* eventData,
                                                          ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRaycaster*>(), { "RaycastPointer",
                                                                                 {},
                                                                                 { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(),
                                                                                   ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData, resultAppendList);
}
inline void GlobalNamespace::OVRRaycaster::GraphicRaycast(::UnityEngine::Canvas* canvas, ::GlobalNamespace::OVRRayTransformer* rayTransformer, ::UnityEngine::Ray ray,
                                                          ::System::Collections::Generic::List_1<::GlobalNamespace::OVRRaycaster_RaycastHit>* results, bool checkOnlyRaycastableGraphics) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRaycaster*>(),
                                                           { "GraphicRaycast",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Canvas*>(), ::i2c::type_of<::GlobalNamespace::OVRRayTransformer*>(), ::i2c::type_of<::UnityEngine::Ray>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRRaycaster_RaycastHit>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, canvas, rayTransformer, ray, results, checkOnlyRaycastableGraphics);
}
inline ::UnityEngine::Vector2 GlobalNamespace::OVRRaycaster::GetScreenPosition(::UnityEngine::EventSystems::RaycastResult raycastResult) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRaycaster*>(), { "GetScreenPosition", {}, { ::i2c::type_of<::UnityEngine::EventSystems::RaycastResult>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, raycastResult);
}
inline bool GlobalNamespace::OVRRaycaster::RayIntersectsRectTransform(::UnityEngine::RectTransform* rectTransform, ::UnityEngine::Ray ray, ::by_ref<::UnityEngine::Vector3> worldPos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::OVRRaycaster*>(),
          { "RayIntersectsRectTransform", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rectTransform, ray, worldPos);
}
inline bool GlobalNamespace::OVRRaycaster::IsFocussed() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRRaycaster*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRRaycaster::OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* e) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRRaycaster*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline ::GlobalNamespace::OVRRaycaster* GlobalNamespace::OVRRaycaster::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRRaycaster*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr GlobalNamespace::OVRRaycaster::operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* GlobalNamespace::OVRRaycaster::i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr GlobalNamespace::OVRRaycaster::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* GlobalNamespace::OVRRaycaster::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRRaycaster::OVRRaycaster() {}
