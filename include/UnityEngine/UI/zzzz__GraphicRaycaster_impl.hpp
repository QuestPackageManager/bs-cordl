#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_impl.hpp"
#include "UnityEngine/UI/zzzz__GraphicRaycaster_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/UI/zzzz__GraphicRaycaster_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "UnityEngine/UI/zzzz__GraphicRaycaster_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::__GraphicRaycaster__BlockingObjects::__GraphicRaycaster__BlockingObjects(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::__GraphicRaycaster__BlockingObjects::__GraphicRaycaster__BlockingObjects() {}
constexpr ::UnityEngine::UI::__GraphicRaycaster__BlockingObjects UnityEngine::UI::__GraphicRaycaster__BlockingObjects::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::__GraphicRaycaster__BlockingObjects UnityEngine::UI::__GraphicRaycaster__BlockingObjects::TwoD{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UI::__GraphicRaycaster__BlockingObjects UnityEngine::UI::__GraphicRaycaster__BlockingObjects::ThreeD{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UI::__GraphicRaycaster__BlockingObjects UnityEngine::UI::__GraphicRaycaster__BlockingObjects::All{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::UnityEngine::UI::__GraphicRaycaster____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::__GraphicRaycaster____c::*)()>(&::UnityEngine::UI::__GraphicRaycaster____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d60938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__GraphicRaycaster____c*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::__GraphicRaycaster____c._Raycast_b__27_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UI::__GraphicRaycaster____c::*)(::UnityEngine::UI::Graphic*, ::UnityEngine::UI::Graphic*)>(
    &::UnityEngine::UI::__GraphicRaycaster____c::_Raycast_b__27_0)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2d60940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__GraphicRaycaster____c*>::get(), "<Raycast>b__27_0", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Graphic*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Graphic*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::__GraphicRaycaster____c::setStaticF___9(::UnityEngine::UI::__GraphicRaycaster____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UI::__GraphicRaycaster____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__GraphicRaycaster____c*>::get>(
      std::forward<::UnityEngine::UI::__GraphicRaycaster____c*>(value));
}
inline ::UnityEngine::UI::__GraphicRaycaster____c* UnityEngine::UI::__GraphicRaycaster____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UI::__GraphicRaycaster____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__GraphicRaycaster____c*>::get>();
}
inline void UnityEngine::UI::__GraphicRaycaster____c::setStaticF___9__27_0(::System::Comparison_1<::UnityEngine::UI::Graphic*>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::UI::Graphic*>*, "<>9__27_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__GraphicRaycaster____c*>::get>(
      std::forward<::System::Comparison_1<::UnityEngine::UI::Graphic*>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::UI::Graphic*>* UnityEngine::UI::__GraphicRaycaster____c::getStaticF___9__27_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::UI::Graphic*>*, "<>9__27_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__GraphicRaycaster____c*>::get>();
}
inline ::UnityEngine::UI::__GraphicRaycaster____c* UnityEngine::UI::__GraphicRaycaster____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UI::__GraphicRaycaster____c*>());
}
inline void UnityEngine::UI::__GraphicRaycaster____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__GraphicRaycaster____c*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::UI::__GraphicRaycaster____c::_Raycast_b__27_0(::UnityEngine::UI::Graphic* g1, ::UnityEngine::UI::Graphic* g2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__GraphicRaycaster____c*>::get(), "<Raycast>b__27_0", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Graphic*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Graphic*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, g1, g2);
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::__GraphicRaycaster____c::__GraphicRaycaster____c() {}
//  Writing Method size for method: ::UnityEngine::UI::GraphicRaycaster.get_sortOrderPriority
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UI::GraphicRaycaster::*)()>(&::UnityEngine::UI::GraphicRaycaster::get_sortOrderPriority)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2d5f2e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GraphicRaycaster*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GraphicRaycaster*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GraphicRaycaster.get_renderOrderPriority
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UI::GraphicRaycaster::*)()>(&::UnityEngine::UI::GraphicRaycaster::get_renderOrderPriority)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2d5f3bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GraphicRaycaster*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GraphicRaycaster*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GraphicRaycaster.get_ignoreReversedGraphics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::GraphicRaycaster::*)()>(&::UnityEngine::UI::GraphicRaycaster::get_ignoreReversedGraphics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d5f410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GraphicRaycaster*>::get(),
                                                                               "get_ignoreReversedGraphics", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GraphicRaycaster.set_ignoreReversedGraphics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::GraphicRaycaster::*)(bool)>(
    &::UnityEngine::UI::GraphicRaycaster::set_ignoreReversedGraphics)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d5f418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GraphicRaycaster*>::get(), "set_ignoreReversedGraphics",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GraphicRaycaster.get_blockingObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::__GraphicRaycaster__BlockingObjects (::UnityEngine::UI::GraphicRaycaster::*)()>(
    &::UnityEngine::UI::GraphicRaycaster::get_blockingObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d5f424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GraphicRaycaster*>::get(),
                                                                               "get_blockingObjects", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GraphicRaycaster.set_blockingObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::GraphicRaycaster::*)(::UnityEngine::UI::__GraphicRaycaster__BlockingObjects)>(
    &::UnityEngine::UI::GraphicRaycaster::set_blockingObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d5f42c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GraphicRaycaster*>::get(), "set_blockingObjects", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__GraphicRaycaster__BlockingObjects>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GraphicRaycaster.get_blockingMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (::UnityEngine::UI::GraphicRaycaster::*)()>(
    &::UnityEngine::UI::GraphicRaycaster::get_blockingMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d5f434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GraphicRaycaster*>::get(), "get_blockingMask",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GraphicRaycaster.set_blockingMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::GraphicRaycaster::*)(::UnityEngine::LayerMask)>(
    &::UnityEngine::UI::GraphicRaycaster::set_blockingMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d5f43c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GraphicRaycaster*>::get(), "set_blockingMask", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GraphicRaycaster._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::GraphicRaycaster::*)()>(&::UnityEngine::UI::GraphicRaycaster::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2d5f444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GraphicRaycaster*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GraphicRaycaster.get_canvas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Canvas* (::UnityEngine::UI::GraphicRaycaster::*)()>(
    &::UnityEngine::UI::GraphicRaycaster::get_canvas)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2d5f328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GraphicRaycaster*>::get(), "get_canvas",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GraphicRaycaster.Raycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::GraphicRaycaster::*)(
    ::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(&::UnityEngine::UI::GraphicRaycaster::Raycast)> {
  constexpr static std::size_t size = 0xc7c;
  constexpr static std::size_t addrs = 0x2d5f4d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GraphicRaycaster*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GraphicRaycaster*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GraphicRaycaster.get_eventCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Camera* (::UnityEngine::UI::GraphicRaycaster::*)()>(
    &::UnityEngine::UI::GraphicRaycaster::get_eventCamera)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2d60780;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GraphicRaycaster*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GraphicRaycaster*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GraphicRaycaster.Raycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Canvas*, ::UnityEngine::Camera*, ::UnityEngine::Vector2, ::System::Collections::Generic::IList_1<::UnityEngine::UI::Graphic*>*,
                         ::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>*)>(&::UnityEngine::UI::GraphicRaycaster::Raycast)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x2d60210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GraphicRaycaster*>::get(), "Raycast", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Canvas*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::UI::Graphic*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>*>::get() })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::UI::GraphicRaycaster::__get_m_IgnoreReversedGraphics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IgnoreReversedGraphics;
}
constexpr bool const& UnityEngine::UI::GraphicRaycaster::__get_m_IgnoreReversedGraphics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IgnoreReversedGraphics;
}
constexpr void UnityEngine::UI::GraphicRaycaster::__set_m_IgnoreReversedGraphics(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IgnoreReversedGraphics = value;
}
constexpr ::UnityEngine::UI::__GraphicRaycaster__BlockingObjects& UnityEngine::UI::GraphicRaycaster::__get_m_BlockingObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlockingObjects;
}
constexpr ::UnityEngine::UI::__GraphicRaycaster__BlockingObjects const& UnityEngine::UI::GraphicRaycaster::__get_m_BlockingObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlockingObjects;
}
constexpr void UnityEngine::UI::GraphicRaycaster::__set_m_BlockingObjects(::UnityEngine::UI::__GraphicRaycaster__BlockingObjects value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BlockingObjects = value;
}
constexpr ::UnityEngine::LayerMask& UnityEngine::UI::GraphicRaycaster::__get_m_BlockingMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlockingMask;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::UI::GraphicRaycaster::__get_m_BlockingMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlockingMask;
}
constexpr void UnityEngine::UI::GraphicRaycaster::__set_m_BlockingMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BlockingMask = value;
}
constexpr ::UnityEngine::Canvas*& UnityEngine::UI::GraphicRaycaster::__get_m_Canvas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Canvas;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Canvas*> const& UnityEngine::UI::GraphicRaycaster::__get_m_Canvas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Canvas;
}
constexpr void UnityEngine::UI::GraphicRaycaster::__set_m_Canvas(::UnityEngine::Canvas* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Canvas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>*& UnityEngine::UI::GraphicRaycaster::__get_m_RaycastResults() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastResults;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>*> const& UnityEngine::UI::GraphicRaycaster::__get_m_RaycastResults() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastResults;
}
constexpr void UnityEngine::UI::GraphicRaycaster::__set_m_RaycastResults(::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RaycastResults)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UI::GraphicRaycaster::setStaticF_s_SortedGraphics(::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>*, "s_SortedGraphics",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GraphicRaycaster*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>* UnityEngine::UI::GraphicRaycaster::getStaticF_s_SortedGraphics() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>*, "s_SortedGraphics",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GraphicRaycaster*>::get>();
}
inline int32_t UnityEngine::UI::GraphicRaycaster::get_sortOrderPriority() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GraphicRaycaster*>::get(),
                                                                             "get_sortOrderPriority", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::UI::GraphicRaycaster::get_renderOrderPriority() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GraphicRaycaster*>::get(),
                                                                             "get_renderOrderPriority", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::UI::GraphicRaycaster::get_ignoreReversedGraphics() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GraphicRaycaster*>::get(),
                                                                             "get_ignoreReversedGraphics", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UI::GraphicRaycaster::set_ignoreReversedGraphics(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GraphicRaycaster*>::get(), "set_ignoreReversedGraphics",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::__GraphicRaycaster__BlockingObjects UnityEngine::UI::GraphicRaycaster::get_blockingObjects() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GraphicRaycaster*>::get(), "get_blockingObjects",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::__GraphicRaycaster__BlockingObjects, false>(this, ___internal_method);
}
inline void UnityEngine::UI::GraphicRaycaster::set_blockingObjects(::UnityEngine::UI::__GraphicRaycaster__BlockingObjects value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GraphicRaycaster*>::get(), "set_blockingObjects", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__GraphicRaycaster__BlockingObjects>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask UnityEngine::UI::GraphicRaycaster::get_blockingMask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GraphicRaycaster*>::get(), "get_blockingMask",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask, false>(this, ___internal_method);
}
inline void UnityEngine::UI::GraphicRaycaster::set_blockingMask(::UnityEngine::LayerMask value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GraphicRaycaster*>::get(), "set_blockingMask", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::GraphicRaycaster* UnityEngine::UI::GraphicRaycaster::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UI::GraphicRaycaster*>());
}
inline void UnityEngine::UI::GraphicRaycaster::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GraphicRaycaster*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Canvas* UnityEngine::UI::GraphicRaycaster::get_canvas() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GraphicRaycaster*>::get(), "get_canvas",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Canvas*, false>(this, ___internal_method);
}
inline void UnityEngine::UI::GraphicRaycaster::Raycast(::UnityEngine::EventSystems::PointerEventData* eventData,
                                                       ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GraphicRaycaster*>::get(), "Raycast", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData, resultAppendList);
}
inline ::UnityEngine::Camera* UnityEngine::UI::GraphicRaycaster::get_eventCamera() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GraphicRaycaster*>::get(), "get_eventCamera",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Camera*, false>(this, ___internal_method);
}
inline void UnityEngine::UI::GraphicRaycaster::Raycast(::UnityEngine::Canvas* canvas, ::UnityEngine::Camera* eventCamera, ::UnityEngine::Vector2 pointerPosition,
                                                       ::System::Collections::Generic::IList_1<::UnityEngine::UI::Graphic*>* foundGraphics,
                                                       ::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>* results) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GraphicRaycaster*>::get(), "Raycast", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Canvas*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::UI::Graphic*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, canvas, eventCamera, pointerPosition, foundGraphics, results);
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::GraphicRaycaster::GraphicRaycaster() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
