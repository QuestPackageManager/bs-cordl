#pragma once
// IWYU pragma private; include "UnityEngine/UI/RectMask2D.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
#include "UnityEngine/UI/zzzz__IClipper_impl.hpp"
#include "UnityEngine/zzzz__ICanvasRaycastFilter_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/UI/zzzz__RectMask2D_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UI/zzzz__IClippable_def.hpp"
#include "UnityEngine/UI/zzzz__MaskableGraphic_def.hpp"
#include "UnityEngine/UI/zzzz__RectangularVertexClipper_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::RectMask2D.get_padding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (::UnityEngine::UI::RectMask2D::*)()>(&::UnityEngine::UI::RectMask2D::get_padding)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4ac20b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), "get_padding",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::RectMask2D.set_padding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::RectMask2D::*)(::UnityEngine::Vector4)>(&::UnityEngine::UI::RectMask2D::set_padding)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4ac20bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), "set_padding", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::RectMask2D.get_softness
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2Int (::UnityEngine::UI::RectMask2D::*)()>(&::UnityEngine::UI::RectMask2D::get_softness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ac20cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), "get_softness",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::RectMask2D.set_softness
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::RectMask2D::*)(::UnityEngine::Vector2Int)>(&::UnityEngine::UI::RectMask2D::set_softness)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x4ac20d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), "set_softness", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::RectMask2D.get_Canvas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Canvas> (::UnityEngine::UI::RectMask2D::*)()>(&::UnityEngine::UI::RectMask2D::get_Canvas)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x4ac20ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), "get_Canvas",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::RectMask2D.get_canvasRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (::UnityEngine::UI::RectMask2D::*)()>(&::UnityEngine::UI::RectMask2D::get_canvasRect)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4ac224c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), "get_canvasRect",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::RectMask2D.get_rectTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::RectTransform> (::UnityEngine::UI::RectMask2D::*)()>(
    &::UnityEngine::UI::RectMask2D::get_rectTransform)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x4ac2290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), "get_rectTransform",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::RectMask2D._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::RectMask2D::*)()>(&::UnityEngine::UI::RectMask2D::_ctor)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x4ac22e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::RectMask2D.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::RectMask2D::*)()>(&::UnityEngine::UI::RectMask2D::OnEnable)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x4ac244c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::RectMask2D.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::RectMask2D::*)()>(&::UnityEngine::UI::RectMask2D::OnDisable)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x4ac2480;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::RectMask2D.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::RectMask2D::*)()>(&::UnityEngine::UI::RectMask2D::OnDestroy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4ac2550;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::RectMask2D.IsRaycastLocationValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::RectMask2D::*)(::UnityEngine::Vector2, ::UnityEngine::Camera*)>(
    &::UnityEngine::UI::RectMask2D::IsRaycastLocationValid)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x4ac2570;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::RectMask2D.get_rootCanvasRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (::UnityEngine::UI::RectMask2D::*)()>(&::UnityEngine::UI::RectMask2D::get_rootCanvasRect)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x4ac264c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), "get_rootCanvasRect",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::RectMask2D.PerformClipping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::RectMask2D::*)()>(&::UnityEngine::UI::RectMask2D::PerformClipping)> {
  constexpr static std::size_t size = 0x81c;
  constexpr static std::size_t addrs = 0x4ac2748;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::RectMask2D.UpdateClipSoftness
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::RectMask2D::*)()>(&::UnityEngine::UI::RectMask2D::UpdateClipSoftness)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x4ac2f64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::RectMask2D.AddClippable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::RectMask2D::*)(::UnityEngine::UI::IClippable*)>(
    &::UnityEngine::UI::RectMask2D::AddClippable)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x4ac325c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), "AddClippable", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::IClippable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::RectMask2D.RemoveClippable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::RectMask2D::*)(::UnityEngine::UI::IClippable*)>(
    &::UnityEngine::UI::RectMask2D::RemoveClippable)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x4ac3370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), "RemoveClippable", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::IClippable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::RectMask2D.OnTransformParentChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::RectMask2D::*)()>(&::UnityEngine::UI::RectMask2D::OnTransformParentChanged)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4ac3510;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::RectMask2D.OnCanvasHierarchyChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::RectMask2D::*)()>(&::UnityEngine::UI::RectMask2D::OnCanvasHierarchyChanged)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4ac3534;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), 15));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UI::RectangularVertexClipper*& UnityEngine::UI::RectMask2D::__cordl_internal_get_m_VertexClipper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VertexClipper;
}
constexpr ::UnityEngine::UI::RectangularVertexClipper* const& UnityEngine::UI::RectMask2D::__cordl_internal_get_m_VertexClipper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VertexClipper;
}
constexpr void UnityEngine::UI::RectMask2D::__cordl_internal_set_m_VertexClipper(::UnityEngine::UI::RectangularVertexClipper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_VertexClipper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RectTransform>& UnityEngine::UI::RectMask2D::__cordl_internal_get_m_RectTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& UnityEngine::UI::RectMask2D::__cordl_internal_get_m_RectTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RectTransform;
}
constexpr void UnityEngine::UI::RectMask2D::__cordl_internal_set_m_RectTransform(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RectTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UI::MaskableGraphic>>*& UnityEngine::UI::RectMask2D::__cordl_internal_get_m_MaskableTargets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaskableTargets;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UI::MaskableGraphic>>* const& UnityEngine::UI::RectMask2D::__cordl_internal_get_m_MaskableTargets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaskableTargets;
}
constexpr void UnityEngine::UI::RectMask2D::__cordl_internal_set_m_MaskableTargets(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UI::MaskableGraphic>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MaskableTargets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UI::IClippable*>*& UnityEngine::UI::RectMask2D::__cordl_internal_get_m_ClipTargets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClipTargets;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UI::IClippable*>* const& UnityEngine::UI::RectMask2D::__cordl_internal_get_m_ClipTargets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClipTargets;
}
constexpr void UnityEngine::UI::RectMask2D::__cordl_internal_set_m_ClipTargets(::System::Collections::Generic::HashSet_1<::UnityEngine::UI::IClippable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ClipTargets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UI::RectMask2D::__cordl_internal_get_m_ShouldRecalculateClipRects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShouldRecalculateClipRects;
}
constexpr bool const& UnityEngine::UI::RectMask2D::__cordl_internal_get_m_ShouldRecalculateClipRects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShouldRecalculateClipRects;
}
constexpr void UnityEngine::UI::RectMask2D::__cordl_internal_set_m_ShouldRecalculateClipRects(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShouldRecalculateClipRects = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::RectMask2D>>*& UnityEngine::UI::RectMask2D::__cordl_internal_get_m_Clippers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Clippers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::RectMask2D>>* const& UnityEngine::UI::RectMask2D::__cordl_internal_get_m_Clippers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Clippers;
}
constexpr void UnityEngine::UI::RectMask2D::__cordl_internal_set_m_Clippers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::RectMask2D>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Clippers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rect& UnityEngine::UI::RectMask2D::__cordl_internal_get_m_LastClipRectCanvasSpace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastClipRectCanvasSpace;
}
constexpr ::UnityEngine::Rect const& UnityEngine::UI::RectMask2D::__cordl_internal_get_m_LastClipRectCanvasSpace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastClipRectCanvasSpace;
}
constexpr void UnityEngine::UI::RectMask2D::__cordl_internal_set_m_LastClipRectCanvasSpace(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastClipRectCanvasSpace = value;
}
constexpr bool& UnityEngine::UI::RectMask2D::__cordl_internal_get_m_ForceClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForceClip;
}
constexpr bool const& UnityEngine::UI::RectMask2D::__cordl_internal_get_m_ForceClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForceClip;
}
constexpr void UnityEngine::UI::RectMask2D::__cordl_internal_set_m_ForceClip(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ForceClip = value;
}
constexpr ::UnityEngine::Vector4& UnityEngine::UI::RectMask2D::__cordl_internal_get_m_Padding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Padding;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::UI::RectMask2D::__cordl_internal_get_m_Padding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Padding;
}
constexpr void UnityEngine::UI::RectMask2D::__cordl_internal_set_m_Padding(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Padding = value;
}
constexpr ::UnityEngine::Vector2Int& UnityEngine::UI::RectMask2D::__cordl_internal_get_m_Softness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Softness;
}
constexpr ::UnityEngine::Vector2Int const& UnityEngine::UI::RectMask2D::__cordl_internal_get_m_Softness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Softness;
}
constexpr void UnityEngine::UI::RectMask2D::__cordl_internal_set_m_Softness(::UnityEngine::Vector2Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Softness = value;
}
constexpr ::UnityW<::UnityEngine::Canvas>& UnityEngine::UI::RectMask2D::__cordl_internal_get_m_Canvas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Canvas;
}
constexpr ::UnityW<::UnityEngine::Canvas> const& UnityEngine::UI::RectMask2D::__cordl_internal_get_m_Canvas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Canvas;
}
constexpr void UnityEngine::UI::RectMask2D::__cordl_internal_set_m_Canvas(::UnityW<::UnityEngine::Canvas> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Canvas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& UnityEngine::UI::RectMask2D::__cordl_internal_get_m_Corners() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Corners;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& UnityEngine::UI::RectMask2D::__cordl_internal_get_m_Corners() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Corners;
}
constexpr void UnityEngine::UI::RectMask2D::__cordl_internal_set_m_Corners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Corners)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Vector4 UnityEngine::UI::RectMask2D::get_padding() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), "get_padding",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(this, ___internal_method);
}
inline void UnityEngine::UI::RectMask2D::set_padding(::UnityEngine::Vector4 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), "set_padding", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2Int UnityEngine::UI::RectMask2D::get_softness() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), "get_softness",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int, false>(this, ___internal_method);
}
inline void UnityEngine::UI::RectMask2D::set_softness(::UnityEngine::Vector2Int value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), "set_softness", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Canvas> UnityEngine::UI::RectMask2D::get_Canvas() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), "get_Canvas",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Canvas>, false>(this, ___internal_method);
}
inline ::UnityEngine::Rect UnityEngine::UI::RectMask2D::get_canvasRect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), "get_canvasRect",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RectTransform> UnityEngine::UI::RectMask2D::get_rectTransform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), "get_rectTransform",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>, false>(this, ___internal_method);
}
inline void UnityEngine::UI::RectMask2D::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::RectMask2D::OnEnable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::RectMask2D::OnDisable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::RectMask2D::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::UI::RectMask2D::IsRaycastLocationValid(::UnityEngine::Vector2 sp, ::UnityEngine::Camera* eventCamera) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, sp, eventCamera);
}
inline ::UnityEngine::Rect UnityEngine::UI::RectMask2D::get_rootCanvasRect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), "get_rootCanvasRect",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(this, ___internal_method);
}
inline void UnityEngine::UI::RectMask2D::PerformClipping() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::RectMask2D::UpdateClipSoftness() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::RectMask2D::AddClippable(::UnityEngine::UI::IClippable* clippable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), "AddClippable", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::IClippable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clippable);
}
inline void UnityEngine::UI::RectMask2D::RemoveClippable(::UnityEngine::UI::IClippable* clippable) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), "RemoveClippable", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::IClippable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clippable);
}
inline void UnityEngine::UI::RectMask2D::OnTransformParentChanged() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::RectMask2D::OnCanvasHierarchyChanged() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::RectMask2D*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UI::RectMask2D* UnityEngine::UI::RectMask2D::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UI::RectMask2D*>());
}
/// @brief Convert operator to "::UnityEngine::UI::IClipper"
constexpr UnityEngine::UI::RectMask2D::operator ::UnityEngine::UI::IClipper*() noexcept {
  return static_cast<::UnityEngine::UI::IClipper*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UI::IClipper"
constexpr ::UnityEngine::UI::IClipper* UnityEngine::UI::RectMask2D::i___UnityEngine__UI__IClipper() noexcept {
  return static_cast<::UnityEngine::UI::IClipper*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ICanvasRaycastFilter"
constexpr UnityEngine::UI::RectMask2D::operator ::UnityEngine::ICanvasRaycastFilter*() noexcept {
  return static_cast<::UnityEngine::ICanvasRaycastFilter*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ICanvasRaycastFilter"
constexpr ::UnityEngine::ICanvasRaycastFilter* UnityEngine::UI::RectMask2D::i___UnityEngine__ICanvasRaycastFilter() noexcept {
  return static_cast<::UnityEngine::ICanvasRaycastFilter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::RectMask2D::RectMask2D() {}
