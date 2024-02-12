#pragma once
#include "UnityEngine/UI/zzzz__Selectable_impl.hpp"
#include "UnityEngine/zzzz__DrivenRectTransformTracker_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "HMUI/zzzz__Slider2D_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IBeginDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IInitializePotentialDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/UI/zzzz__CanvasUpdate_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/UI/zzzz__ICanvasElement_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::HMUI::Slider2D.get_handleRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::RectTransform> (::HMUI::Slider2D::*)()>(&::HMUI::Slider2D::get_handleRect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b749c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), "get_handleRect",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.set_handleRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)(::UnityEngine::RectTransform*)>(&::HMUI::Slider2D::set_handleRect)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x21b74a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), "set_handleRect", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.set_handleColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)(::UnityEngine::Color)>(&::HMUI::Slider2D::set_handleColor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x21b7664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), "set_handleColor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.get_normalizedValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::HMUI::Slider2D::*)()>(&::HMUI::Slider2D::get_normalizedValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21b7728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), "get_normalizedValue",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.set_normalizedValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)(::UnityEngine::Vector2)>(&::HMUI::Slider2D::set_normalizedValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b7734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), "set_normalizedValue", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.add_normalizedValueDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)(::System::Action_2<::UnityW<::HMUI::Slider2D>, ::UnityEngine::Vector2>*)>(
    &::HMUI::Slider2D::add_normalizedValueDidChangeEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x21b77ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), "add_normalizedValueDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::HMUI::Slider2D>, ::UnityEngine::Vector2>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.remove_normalizedValueDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)(::System::Action_2<::UnityW<::HMUI::Slider2D>, ::UnityEngine::Vector2>*)>(
    &::HMUI::Slider2D::remove_normalizedValueDidChangeEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x21b78a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), "remove_normalizedValueDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::HMUI::Slider2D>, ::UnityEngine::Vector2>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.Rebuild
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)(::UnityEngine::UI::CanvasUpdate)>(&::HMUI::Slider2D::Rebuild)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21b7954;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), 47));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.LayoutComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)()>(&::HMUI::Slider2D::LayoutComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21b7958;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), 48));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.GraphicUpdateComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)()>(&::HMUI::Slider2D::GraphicUpdateComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21b795c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), 49));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)()>(&::HMUI::Slider2D::OnEnable)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x21b7960;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)()>(&::HMUI::Slider2D::OnDisable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x21b79a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.UpdateCachedReferences
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)()>(&::HMUI::Slider2D::UpdateCachedReferences)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x21b752c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), "UpdateCachedReferences",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.SetNormalizedValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)(::UnityEngine::Vector2)>(&::HMUI::Slider2D::SetNormalizedValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b79c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), "SetNormalizedValue", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.SetNormalizedValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)(::UnityEngine::Vector2, bool)>(&::HMUI::Slider2D::SetNormalizedValue)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21b773c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), "SetNormalizedValue", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.OnRectTransformDimensionsChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)()>(&::HMUI::Slider2D::OnRectTransformDimensionsChange)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x21b79d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.UpdateVisuals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)()>(&::HMUI::Slider2D::UpdateVisuals)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x21b7a14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), 50));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.UpdateDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::HMUI::Slider2D::UpdateDrag)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x21b7b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), "UpdateDrag", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.MayDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::Slider2D::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::HMUI::Slider2D::MayDrag)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x21b7dcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), "MayDrag", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.OnBeginDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::HMUI::Slider2D::OnBeginDrag)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x21b7e30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), 51));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.OnDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::HMUI::Slider2D::OnDrag)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x21b7eb0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), 52));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.OnPointerDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::HMUI::Slider2D::OnPointerDown)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x21b7f40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.OnPointerEnter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::HMUI::Slider2D::OnPointerEnter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b7fe0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.DoStateTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)(::UnityEngine::UI::__Selectable__SelectionState, bool)>(
    &::HMUI::Slider2D::DoStateTransition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21b7fe8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.OnInitializePotentialDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::HMUI::Slider2D::OnInitializePotentialDrag)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x21b7ff4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), 53));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Slider2D::*)()>(&::HMUI::Slider2D::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21b800c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Slider2D.UnityEngine_UI_ICanvasElement_get_transform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::HMUI::Slider2D::*)()>(
    &::HMUI::Slider2D::UnityEngine_UI_ICanvasElement_get_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b8064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), "UnityEngine.UI.ICanvasElement.get_transform",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::EventSystems::IBeginDragHandler"
constexpr HMUI::Slider2D::operator ::UnityEngine::EventSystems::IBeginDragHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IBeginDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IBeginDragHandler"
constexpr ::UnityEngine::EventSystems::IBeginDragHandler* HMUI::Slider2D::i___UnityEngine__EventSystems__IBeginDragHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IBeginDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr HMUI::Slider2D::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* HMUI::Slider2D::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IDragHandler"
constexpr HMUI::Slider2D::operator ::UnityEngine::EventSystems::IDragHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IDragHandler"
constexpr ::UnityEngine::EventSystems::IDragHandler* HMUI::Slider2D::i___UnityEngine__EventSystems__IDragHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IInitializePotentialDragHandler"
constexpr HMUI::Slider2D::operator ::UnityEngine::EventSystems::IInitializePotentialDragHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IInitializePotentialDragHandler"
constexpr ::UnityEngine::EventSystems::IInitializePotentialDragHandler* HMUI::Slider2D::i___UnityEngine__EventSystems__IInitializePotentialDragHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UI::ICanvasElement"
constexpr HMUI::Slider2D::operator ::UnityEngine::UI::ICanvasElement*() noexcept {
  return static_cast<::UnityEngine::UI::ICanvasElement*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UI::ICanvasElement"
constexpr ::UnityEngine::UI::ICanvasElement* HMUI::Slider2D::i___UnityEngine__UI__ICanvasElement() noexcept {
  return static_cast<::UnityEngine::UI::ICanvasElement*>(static_cast<void*>(this));
}
constexpr ::UnityW<::UnityEngine::RectTransform>& HMUI::Slider2D::__cordl_internal_get__handleRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handleRect;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& HMUI::Slider2D::__cordl_internal_get__handleRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handleRect;
}
constexpr void HMUI::Slider2D::__cordl_internal_set__handleRect(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____handleRect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector2& HMUI::Slider2D::__cordl_internal_get__normalizedValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalizedValue;
}
constexpr ::UnityEngine::Vector2 const& HMUI::Slider2D::__cordl_internal_get__normalizedValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalizedValue;
}
constexpr void HMUI::Slider2D::__cordl_internal_set__normalizedValue(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalizedValue = value;
}
constexpr ::System::Action_2<::UnityW<::HMUI::Slider2D>, ::UnityEngine::Vector2>*& HMUI::Slider2D::__cordl_internal_get_normalizedValueDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalizedValueDidChangeEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::HMUI::Slider2D>, ::UnityEngine::Vector2>*> const&
HMUI::Slider2D::__cordl_internal_get_normalizedValueDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalizedValueDidChangeEvent;
}
constexpr void HMUI::Slider2D::__cordl_internal_set_normalizedValueDidChangeEvent(::System::Action_2<::UnityW<::HMUI::Slider2D>, ::UnityEngine::Vector2>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___normalizedValueDidChangeEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RectTransform>& HMUI::Slider2D::__cordl_internal_get__containerRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____containerRect;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& HMUI::Slider2D::__cordl_internal_get__containerRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____containerRect;
}
constexpr void HMUI::Slider2D::__cordl_internal_set__containerRect(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____containerRect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Graphic>& HMUI::Slider2D::__cordl_internal_get__handleGraphic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handleGraphic;
}
constexpr ::UnityW<::UnityEngine::UI::Graphic> const& HMUI::Slider2D::__cordl_internal_get__handleGraphic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handleGraphic;
}
constexpr void HMUI::Slider2D::__cordl_internal_set__handleGraphic(::UnityW<::UnityEngine::UI::Graphic> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____handleGraphic)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::DrivenRectTransformTracker& HMUI::Slider2D::__cordl_internal_get__tracker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tracker;
}
constexpr ::UnityEngine::DrivenRectTransformTracker const& HMUI::Slider2D::__cordl_internal_get__tracker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tracker;
}
constexpr void HMUI::Slider2D::__cordl_internal_set__tracker(::UnityEngine::DrivenRectTransformTracker value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tracker = value;
}
inline ::UnityW<::UnityEngine::RectTransform> HMUI::Slider2D::get_handleRect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), "get_handleRect",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>, false>(this, ___internal_method);
}
inline void HMUI::Slider2D::set_handleRect(::UnityEngine::RectTransform* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), "set_handleRect", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::Slider2D::set_handleColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), "set_handleColor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 HMUI::Slider2D::get_normalizedValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), "get_normalizedValue",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline void HMUI::Slider2D::set_normalizedValue(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), "set_normalizedValue", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::Slider2D::add_normalizedValueDidChangeEvent(::System::Action_2<::UnityW<::HMUI::Slider2D>, ::UnityEngine::Vector2>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), "add_normalizedValueDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::HMUI::Slider2D>, ::UnityEngine::Vector2>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::Slider2D::remove_normalizedValueDidChangeEvent(::System::Action_2<::UnityW<::HMUI::Slider2D>, ::UnityEngine::Vector2>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), "remove_normalizedValueDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::HMUI::Slider2D>, ::UnityEngine::Vector2>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::Slider2D::Rebuild(::UnityEngine::UI::CanvasUpdate executing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), 47)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, executing);
}
inline void HMUI::Slider2D::LayoutComplete() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), 48)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::Slider2D::GraphicUpdateComplete() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), 49)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::Slider2D::OnEnable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::Slider2D::OnDisable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::Slider2D::UpdateCachedReferences() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), "UpdateCachedReferences",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::Slider2D::SetNormalizedValue(::UnityEngine::Vector2 input) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), "SetNormalizedValue", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline void HMUI::Slider2D::SetNormalizedValue(::UnityEngine::Vector2 input, bool sendCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), "SetNormalizedValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input, sendCallback);
}
inline void HMUI::Slider2D::OnRectTransformDimensionsChange() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::Slider2D::UpdateVisuals() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), 50)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::Slider2D::UpdateDrag(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), "UpdateDrag", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline bool HMUI::Slider2D::MayDrag(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), "MayDrag", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, eventData);
}
inline void HMUI::Slider2D::OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), 51)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void HMUI::Slider2D::OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), 52)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void HMUI::Slider2D::OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void HMUI::Slider2D::OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void HMUI::Slider2D::DoStateTransition(::UnityEngine::UI::__Selectable__SelectionState state, bool instant) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, instant);
}
inline void HMUI::Slider2D::OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), 53)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline ::HMUI::Slider2D* HMUI::Slider2D::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::Slider2D*>());
}
inline void HMUI::Slider2D::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> HMUI::Slider2D::UnityEngine_UI_ICanvasElement_get_transform() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Slider2D*>::get(), "UnityEngine.UI.ICanvasElement.get_transform",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::Slider2D::Slider2D() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
