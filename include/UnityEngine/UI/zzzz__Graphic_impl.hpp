#pragma once
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "UnityEngine/UI/CoroutineTween/zzzz__ColorTween_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UI/zzzz__VertexHelper_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/UI/zzzz__CanvasUpdate_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/UI/CoroutineTween/zzzz__TweenRunner_1_def.hpp"
#include "UnityEngine/zzzz__CanvasRenderer_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__UIVertex_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/UI/zzzz__ICanvasElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::Graphic.get_defaultGraphicMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)()>(&::UnityEngine::UI::Graphic::get_defaultGraphicMaterial)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2d5b8d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "get_defaultGraphicMaterial",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.get_color
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::get_color)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d5b9ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.set_color
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)(::UnityEngine::Color)>(&::UnityEngine::UI::Graphic::set_color)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2d5b9b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.get_raycastTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::get_raycastTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d5b9f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.set_raycastTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)(bool)>(&::UnityEngine::UI::Graphic::set_raycastTarget)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2d5b9f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.get_raycastPadding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::get_raycastPadding)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d5beb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "get_raycastPadding",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.set_raycastPadding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)(::UnityEngine::Vector4)>(&::UnityEngine::UI::Graphic::set_raycastPadding)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d5bebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "set_raycastPadding", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.get_useLegacyMeshGeneration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::get_useLegacyMeshGeneration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d5bec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                               "get_useLegacyMeshGeneration", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.set_useLegacyMeshGeneration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)(bool)>(&::UnityEngine::UI::Graphic::set_useLegacyMeshGeneration)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d5bed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "set_useLegacyMeshGeneration", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2d5bedc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.SetAllDirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::SetAllDirty)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2d5bf8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.SetLayoutDirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::SetLayoutDirty)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2d5c0cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.SetVerticesDirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::SetVerticesDirty)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2d5c1c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.SetMaterialDirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::SetMaterialDirty)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2d5c258;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.SetRaycastDirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::SetRaycastDirty)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2d5bffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "SetRaycastDirty",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.OnRectTransformDimensionsChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::OnRectTransformDimensionsChange)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2d5c2ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.OnBeforeTransformParentChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::OnBeforeTransformParentChanged)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2d5c398;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.OnTransformParentChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::OnTransformParentChanged)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2d5c5c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.get_depth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::get_depth)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d5c9d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "get_depth",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.get_rectTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform* (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::get_rectTransform)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2d5c16c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "get_rectTransform",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.get_canvas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Canvas* (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::get_canvas)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2d5bacc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "get_canvas",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.CacheCanvas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::CacheCanvas)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2d5c674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "CacheCanvas",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.get_canvasRenderer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::CanvasRenderer* (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::get_canvasRenderer)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2d5c9f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "get_canvasRenderer",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.get_defaultMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::get_defaultMaterial)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2d5ca84;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.get_material
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::get_material)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2d5cad0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.set_material
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)(::UnityEngine::Material*)>(&::UnityEngine::UI::Graphic::set_material)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2d5cb58;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.get_materialForRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::get_materialForRendering)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2d5cbf0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.get_mainTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture* (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::get_mainTexture)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2d5ce14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::OnEnable)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2d5ce6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::OnDisable)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2d5cf9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::OnDestroy)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2d5d0e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.OnCanvasHierarchyChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::OnCanvasHierarchyChanged)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2d5d38c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.OnCullingChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::OnCullingChanged)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2d5d4c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.Rebuild
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)(::UnityEngine::UI::CanvasUpdate)>(&::UnityEngine::UI::Graphic::Rebuild)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2d5d550;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.LayoutComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::LayoutComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d5d634;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.GraphicUpdateComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::GraphicUpdateComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d5d638;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 39));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.UpdateMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::UpdateMaterial)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2d5d63c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.UpdateGeometry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::UpdateGeometry)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2d5d6f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 41));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.DoMeshGeneration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::DoMeshGeneration)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x2d5daa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "DoMeshGeneration",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.DoLegacyMeshGeneration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::DoLegacyMeshGeneration)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x2d5d704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "DoLegacyMeshGeneration",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.get_workerMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh* (*)()>(&::UnityEngine::UI::Graphic::get_workerMesh)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2d5de78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "get_workerMesh",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.OnFillVBO
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*)>(
    &::UnityEngine::UI::Graphic::OnFillVBO)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d5dfb4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 42));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.OnPopulateMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)(::UnityEngine::Mesh*)>(&::UnityEngine::UI::Graphic::OnPopulateMesh)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2d5dfb8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 43));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.OnPopulateMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)(::UnityEngine::UI::VertexHelper*)>(
    &::UnityEngine::UI::Graphic::OnPopulateMesh)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x2d5e050;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 44));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.OnDidApplyAnimationProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::OnDidApplyAnimationProperties)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2d5e608;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.SetNativeSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::SetNativeSize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d5e618;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 45));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.Raycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::Graphic::*)(::UnityEngine::Vector2, ::UnityEngine::Camera*)>(
    &::UnityEngine::UI::Graphic::Raycast)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x2d5e61c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 46));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.PixelAdjustPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UI::Graphic::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::UI::Graphic::PixelAdjustPoint)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2d5eaa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "PixelAdjustPoint", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.GetPixelAdjustedRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::GetPixelAdjustedRect)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2d5e4dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "GetPixelAdjustedRect",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.CrossFadeColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)(::UnityEngine::Color, float_t, bool, bool)>(
    &::UnityEngine::UI::Graphic::CrossFadeColor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d5ebe8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 47));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.CrossFadeColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)(::UnityEngine::Color, float_t, bool, bool, bool)>(
    &::UnityEngine::UI::Graphic::CrossFadeColor)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x2d5ec04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 48));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.CreateColorFromAlpha
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)(float_t)>(&::UnityEngine::UI::Graphic::CreateColorFromAlpha)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d5ee98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "CreateColorFromAlpha", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.CrossFadeAlpha
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)(float_t, float_t, bool)>(&::UnityEngine::UI::Graphic::CrossFadeAlpha)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2d5eeac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 49));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.RegisterDirtyLayoutCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)(::UnityEngine::Events::UnityAction*)>(
    &::UnityEngine::UI::Graphic::RegisterDirtyLayoutCallback)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2d5ef48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "RegisterDirtyLayoutCallback", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.UnregisterDirtyLayoutCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)(::UnityEngine::Events::UnityAction*)>(
    &::UnityEngine::UI::Graphic::UnregisterDirtyLayoutCallback)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2d5efc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "UnregisterDirtyLayoutCallback", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.RegisterDirtyVerticesCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)(::UnityEngine::Events::UnityAction*)>(
    &::UnityEngine::UI::Graphic::RegisterDirtyVerticesCallback)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2d5f048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "RegisterDirtyVerticesCallback", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.UnregisterDirtyVerticesCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)(::UnityEngine::Events::UnityAction*)>(
    &::UnityEngine::UI::Graphic::UnregisterDirtyVerticesCallback)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2d5f0c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "UnregisterDirtyVerticesCallback", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.RegisterDirtyMaterialCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)(::UnityEngine::Events::UnityAction*)>(
    &::UnityEngine::UI::Graphic::RegisterDirtyMaterialCallback)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2d5f148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "RegisterDirtyMaterialCallback", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.UnregisterDirtyMaterialCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Graphic::*)(::UnityEngine::Events::UnityAction*)>(
    &::UnityEngine::UI::Graphic::UnregisterDirtyMaterialCallback)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2d5f1c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "UnregisterDirtyMaterialCallback", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.UnityEngine_UI_ICanvasElement_get_transform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (::UnityEngine::UI::Graphic::*)()>(
    &::UnityEngine::UI::Graphic::UnityEngine_UI_ICanvasElement_get_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d5f2d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                               "UnityEngine.UI.ICanvasElement.get_transform", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::UI::ICanvasElement"
constexpr UnityEngine::UI::Graphic::operator ::UnityEngine::UI::ICanvasElement*() noexcept {
  return static_cast<::UnityEngine::UI::ICanvasElement*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::Material*& UnityEngine::UI::Graphic::__get_m_Material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Material;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& UnityEngine::UI::Graphic::__get_m_Material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Material;
}
constexpr void UnityEngine::UI::Graphic::__set_m_Material(::UnityEngine::Material* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Material)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& UnityEngine::UI::Graphic::__get_m_Color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Color;
}
constexpr ::UnityEngine::Color const& UnityEngine::UI::Graphic::__get_m_Color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Color;
}
constexpr void UnityEngine::UI::Graphic::__set_m_Color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Color = value;
}
constexpr bool& UnityEngine::UI::Graphic::__get_m_SkipLayoutUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SkipLayoutUpdate;
}
constexpr bool const& UnityEngine::UI::Graphic::__get_m_SkipLayoutUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SkipLayoutUpdate;
}
constexpr void UnityEngine::UI::Graphic::__set_m_SkipLayoutUpdate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SkipLayoutUpdate = value;
}
constexpr bool& UnityEngine::UI::Graphic::__get_m_SkipMaterialUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SkipMaterialUpdate;
}
constexpr bool const& UnityEngine::UI::Graphic::__get_m_SkipMaterialUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SkipMaterialUpdate;
}
constexpr void UnityEngine::UI::Graphic::__set_m_SkipMaterialUpdate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SkipMaterialUpdate = value;
}
constexpr bool& UnityEngine::UI::Graphic::__get_m_RaycastTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastTarget;
}
constexpr bool const& UnityEngine::UI::Graphic::__get_m_RaycastTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastTarget;
}
constexpr void UnityEngine::UI::Graphic::__set_m_RaycastTarget(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RaycastTarget = value;
}
constexpr bool& UnityEngine::UI::Graphic::__get_m_RaycastTargetCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastTargetCache;
}
constexpr bool const& UnityEngine::UI::Graphic::__get_m_RaycastTargetCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastTargetCache;
}
constexpr void UnityEngine::UI::Graphic::__set_m_RaycastTargetCache(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RaycastTargetCache = value;
}
constexpr ::UnityEngine::Vector4& UnityEngine::UI::Graphic::__get_m_RaycastPadding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastPadding;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::UI::Graphic::__get_m_RaycastPadding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastPadding;
}
constexpr void UnityEngine::UI::Graphic::__set_m_RaycastPadding(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RaycastPadding = value;
}
constexpr ::UnityEngine::RectTransform*& UnityEngine::UI::Graphic::__get_m_RectTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RectTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& UnityEngine::UI::Graphic::__get_m_RectTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RectTransform;
}
constexpr void UnityEngine::UI::Graphic::__set_m_RectTransform(::UnityEngine::RectTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RectTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::CanvasRenderer*& UnityEngine::UI::Graphic::__get_m_CanvasRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CanvasRenderer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasRenderer*> const& UnityEngine::UI::Graphic::__get_m_CanvasRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CanvasRenderer;
}
constexpr void UnityEngine::UI::Graphic::__set_m_CanvasRenderer(::UnityEngine::CanvasRenderer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CanvasRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Canvas*& UnityEngine::UI::Graphic::__get_m_Canvas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Canvas;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Canvas*> const& UnityEngine::UI::Graphic::__get_m_Canvas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Canvas;
}
constexpr void UnityEngine::UI::Graphic::__set_m_Canvas(::UnityEngine::Canvas* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Canvas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UI::Graphic::__get_m_VertsDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VertsDirty;
}
constexpr bool const& UnityEngine::UI::Graphic::__get_m_VertsDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VertsDirty;
}
constexpr void UnityEngine::UI::Graphic::__set_m_VertsDirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VertsDirty = value;
}
constexpr bool& UnityEngine::UI::Graphic::__get_m_MaterialDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaterialDirty;
}
constexpr bool const& UnityEngine::UI::Graphic::__get_m_MaterialDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaterialDirty;
}
constexpr void UnityEngine::UI::Graphic::__set_m_MaterialDirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaterialDirty = value;
}
constexpr ::UnityEngine::Events::UnityAction*& UnityEngine::UI::Graphic::__get_m_OnDirtyLayoutCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnDirtyLayoutCallback;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction*> const& UnityEngine::UI::Graphic::__get_m_OnDirtyLayoutCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnDirtyLayoutCallback;
}
constexpr void UnityEngine::UI::Graphic::__set_m_OnDirtyLayoutCallback(::UnityEngine::Events::UnityAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnDirtyLayoutCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Events::UnityAction*& UnityEngine::UI::Graphic::__get_m_OnDirtyVertsCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnDirtyVertsCallback;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction*> const& UnityEngine::UI::Graphic::__get_m_OnDirtyVertsCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnDirtyVertsCallback;
}
constexpr void UnityEngine::UI::Graphic::__set_m_OnDirtyVertsCallback(::UnityEngine::Events::UnityAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnDirtyVertsCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Events::UnityAction*& UnityEngine::UI::Graphic::__get_m_OnDirtyMaterialCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnDirtyMaterialCallback;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction*> const& UnityEngine::UI::Graphic::__get_m_OnDirtyMaterialCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnDirtyMaterialCallback;
}
constexpr void UnityEngine::UI::Graphic::__set_m_OnDirtyMaterialCallback(::UnityEngine::Events::UnityAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnDirtyMaterialCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Mesh*& UnityEngine::UI::Graphic::__get_m_CachedMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedMesh;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> const& UnityEngine::UI::Graphic::__get_m_CachedMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedMesh;
}
constexpr void UnityEngine::UI::Graphic::__set_m_CachedMesh(::UnityEngine::Mesh* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CachedMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>& UnityEngine::UI::Graphic::__get_m_CachedUvs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedUvs;
}
constexpr ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> const& UnityEngine::UI::Graphic::__get_m_CachedUvs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedUvs;
}
constexpr void UnityEngine::UI::Graphic::__set_m_CachedUvs(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CachedUvs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::CoroutineTween::TweenRunner_1<::UnityEngine::UI::CoroutineTween::ColorTween>*& UnityEngine::UI::Graphic::__get_m_ColorTweenRunner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorTweenRunner;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::CoroutineTween::TweenRunner_1<::UnityEngine::UI::CoroutineTween::ColorTween>*> const&
UnityEngine::UI::Graphic::__get_m_ColorTweenRunner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorTweenRunner;
}
constexpr void UnityEngine::UI::Graphic::__set_m_ColorTweenRunner(::UnityEngine::UI::CoroutineTween::TweenRunner_1<::UnityEngine::UI::CoroutineTween::ColorTween>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ColorTweenRunner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UI::Graphic::__get__useLegacyMeshGeneration_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useLegacyMeshGeneration_k__BackingField;
}
constexpr bool const& UnityEngine::UI::Graphic::__get__useLegacyMeshGeneration_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useLegacyMeshGeneration_k__BackingField;
}
constexpr void UnityEngine::UI::Graphic::__set__useLegacyMeshGeneration_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useLegacyMeshGeneration_k__BackingField = value;
}
inline void UnityEngine::UI::Graphic::setStaticF_s_DefaultUI(::UnityEngine::Material* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Material*, "s_DefaultUI", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get>(
      std::forward<::UnityEngine::Material*>(value));
}
inline ::UnityEngine::Material* UnityEngine::UI::Graphic::getStaticF_s_DefaultUI() {
  return ::cordl_internals::getStaticField<::UnityEngine::Material*, "s_DefaultUI", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get>();
}
inline void UnityEngine::UI::Graphic::setStaticF_s_WhiteTexture(::UnityEngine::Texture2D* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Texture2D*, "s_WhiteTexture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get>(
      std::forward<::UnityEngine::Texture2D*>(value));
}
inline ::UnityEngine::Texture2D* UnityEngine::UI::Graphic::getStaticF_s_WhiteTexture() {
  return ::cordl_internals::getStaticField<::UnityEngine::Texture2D*, "s_WhiteTexture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get>();
}
inline void UnityEngine::UI::Graphic::setStaticF_s_Mesh(::UnityEngine::Mesh* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Mesh*, "s_Mesh", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get>(
      std::forward<::UnityEngine::Mesh*>(value));
}
inline ::UnityEngine::Mesh* UnityEngine::UI::Graphic::getStaticF_s_Mesh() {
  return ::cordl_internals::getStaticField<::UnityEngine::Mesh*, "s_Mesh", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get>();
}
inline void UnityEngine::UI::Graphic::setStaticF_s_VertexHelper(::UnityEngine::UI::VertexHelper* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UI::VertexHelper*, "s_VertexHelper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get>(
      std::forward<::UnityEngine::UI::VertexHelper*>(value));
}
inline ::UnityEngine::UI::VertexHelper* UnityEngine::UI::Graphic::getStaticF_s_VertexHelper() {
  return ::cordl_internals::getStaticField<::UnityEngine::UI::VertexHelper*, "s_VertexHelper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get>();
}
inline ::UnityEngine::Material* UnityEngine::UI::Graphic::get_defaultGraphicMaterial() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "get_defaultGraphicMaterial",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Color UnityEngine::UI::Graphic::get_color() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::set_color(::UnityEngine::Color value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::Graphic::get_raycastTarget() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::set_raycastTarget(bool value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector4 UnityEngine::UI::Graphic::get_raycastPadding() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "get_raycastPadding",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::set_raycastPadding(::UnityEngine::Vector4 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "set_raycastPadding", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::Graphic::get_useLegacyMeshGeneration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "get_useLegacyMeshGeneration",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::set_useLegacyMeshGeneration(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "set_useLegacyMeshGeneration", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::Graphic* UnityEngine::UI::Graphic::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UI::Graphic*>());
}
inline void UnityEngine::UI::Graphic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::SetAllDirty() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::SetLayoutDirty() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::SetVerticesDirty() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::SetMaterialDirty() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::SetRaycastDirty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "SetRaycastDirty",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::OnRectTransformDimensionsChange() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::OnBeforeTransformParentChanged() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::OnTransformParentChanged() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::UI::Graphic::get_depth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "get_depth",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::RectTransform* UnityEngine::UI::Graphic::get_rectTransform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "get_rectTransform",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectTransform*, false>(this, ___internal_method);
}
inline ::UnityEngine::Canvas* UnityEngine::UI::Graphic::get_canvas() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "get_canvas",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Canvas*, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::CacheCanvas() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "CacheCanvas",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::CanvasRenderer* UnityEngine::UI::Graphic::get_canvasRenderer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "get_canvasRenderer",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::CanvasRenderer*, false>(this, ___internal_method);
}
inline ::UnityEngine::Material* UnityEngine::UI::Graphic::get_defaultMaterial() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material*, false>(this, ___internal_method);
}
inline ::UnityEngine::Material* UnityEngine::UI::Graphic::get_material() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material*, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::set_material(::UnityEngine::Material* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Material* UnityEngine::UI::Graphic::get_materialForRendering() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material*, false>(this, ___internal_method);
}
inline ::UnityEngine::Texture* UnityEngine::UI::Graphic::get_mainTexture() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Texture*, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::OnEnable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::OnDisable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::OnCanvasHierarchyChanged() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::OnCullingChanged() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::Rebuild(::UnityEngine::UI::CanvasUpdate update) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, update);
}
inline void UnityEngine::UI::Graphic::LayoutComplete() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::GraphicUpdateComplete() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 39)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::UpdateMaterial() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 40)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::UpdateGeometry() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 41)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::DoMeshGeneration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "DoMeshGeneration",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::DoLegacyMeshGeneration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "DoLegacyMeshGeneration",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Mesh* UnityEngine::UI::Graphic::get_workerMesh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "get_workerMesh",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Mesh*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::UI::Graphic::OnFillVBO(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* vbo) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 42)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vbo);
}
inline void UnityEngine::UI::Graphic::OnPopulateMesh(::UnityEngine::Mesh* m) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 43)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, m);
}
inline void UnityEngine::UI::Graphic::OnPopulateMesh(::UnityEngine::UI::VertexHelper* vh) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 44)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vh);
}
inline void UnityEngine::UI::Graphic::OnDidApplyAnimationProperties() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::SetNativeSize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 45)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::UI::Graphic::Raycast(::UnityEngine::Vector2 sp, ::UnityEngine::Camera* eventCamera) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 46)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, sp, eventCamera);
}
inline ::UnityEngine::Vector2 UnityEngine::UI::Graphic::PixelAdjustPoint(::UnityEngine::Vector2 point) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "PixelAdjustPoint", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, point);
}
inline ::UnityEngine::Rect UnityEngine::UI::Graphic::GetPixelAdjustedRect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "GetPixelAdjustedRect",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::CrossFadeColor(::UnityEngine::Color targetColor, float_t duration, bool ignoreTimeScale, bool useAlpha) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 47)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targetColor, duration, ignoreTimeScale, useAlpha);
}
inline void UnityEngine::UI::Graphic::CrossFadeColor(::UnityEngine::Color targetColor, float_t duration, bool ignoreTimeScale, bool useAlpha, bool useRGB) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 48)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targetColor, duration, ignoreTimeScale, useAlpha, useRGB);
}
inline ::UnityEngine::Color UnityEngine::UI::Graphic::CreateColorFromAlpha(float_t alpha) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "CreateColorFromAlpha", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(nullptr, ___internal_method, alpha);
}
inline void UnityEngine::UI::Graphic::CrossFadeAlpha(float_t alpha, float_t duration, bool ignoreTimeScale) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), 49)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, alpha, duration, ignoreTimeScale);
}
inline void UnityEngine::UI::Graphic::RegisterDirtyLayoutCallback(::UnityEngine::Events::UnityAction* action) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "RegisterDirtyLayoutCallback", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action);
}
inline void UnityEngine::UI::Graphic::UnregisterDirtyLayoutCallback(::UnityEngine::Events::UnityAction* action) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "UnregisterDirtyLayoutCallback", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action);
}
inline void UnityEngine::UI::Graphic::RegisterDirtyVerticesCallback(::UnityEngine::Events::UnityAction* action) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "RegisterDirtyVerticesCallback", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action);
}
inline void UnityEngine::UI::Graphic::UnregisterDirtyVerticesCallback(::UnityEngine::Events::UnityAction* action) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "UnregisterDirtyVerticesCallback", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action);
}
inline void UnityEngine::UI::Graphic::RegisterDirtyMaterialCallback(::UnityEngine::Events::UnityAction* action) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "RegisterDirtyMaterialCallback", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action);
}
inline void UnityEngine::UI::Graphic::UnregisterDirtyMaterialCallback(::UnityEngine::Events::UnityAction* action) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(), "UnregisterDirtyMaterialCallback", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action);
}
inline ::UnityEngine::Transform* UnityEngine::UI::Graphic::UnityEngine_UI_ICanvasElement_get_transform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Graphic*>::get(),
                                                                             "UnityEngine.UI.ICanvasElement.get_transform", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Graphic::Graphic() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
