#pragma once
// IWYU pragma private; include "UnityEngine/UI/Graphic.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_def.hpp"
#include "UnityEngine/UI/CoroutineTween/zzzz__ColorTween_def.hpp"
#include "UnityEngine/UI/CoroutineTween/zzzz__TweenRunner_1_def.hpp"
#include "UnityEngine/UI/zzzz__CanvasUpdate_def.hpp"
#include "UnityEngine/UI/zzzz__ICanvasElement_def.hpp"
#include "UnityEngine/UI/zzzz__VertexHelper_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__CanvasRenderer_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__UIVertex_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::Graphic.get_defaultGraphicMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)()>(&::UnityEngine::UI::Graphic::get_defaultGraphicMaterial)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6c206c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "get_defaultGraphicMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.get_color
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::get_color)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c207a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.set_color
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)(::UnityEngine::Color)>(&::UnityEngine::UI::Graphic::set_color)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6c207b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.get_raycastTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::get_raycastTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c207fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.set_raycastTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)(bool)>(&::UnityEngine::UI::Graphic::set_raycastTarget)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6c20804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.get_raycastPadding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::get_raycastPadding)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c20d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "get_raycastPadding", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.set_raycastPadding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)(::UnityEngine::Vector4)>(&::UnityEngine::UI::Graphic::set_raycastPadding)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c20d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "set_raycastPadding", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.get_useLegacyMeshGeneration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::get_useLegacyMeshGeneration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c20d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "get_useLegacyMeshGeneration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.set_useLegacyMeshGeneration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)(bool)>(&::UnityEngine::UI::Graphic::set_useLegacyMeshGeneration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c20d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "set_useLegacyMeshGeneration", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6c20d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.SetAllDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::SetAllDirty)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6c20e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.SetLayoutDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::SetLayoutDirty)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6c20f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.SetVerticesDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::SetVerticesDirty)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6c21050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.SetMaterialDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::SetMaterialDirty)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6c210e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.SetRaycastDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::SetRaycastDirty)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6c20e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "SetRaycastDirty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.OnRectTransformDimensionsChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::OnRectTransformDimensionsChange)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6c21180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.OnBeforeTransformParentChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::OnBeforeTransformParentChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6c21230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.OnTransformParentChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::OnTransformParentChanged)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6c214a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.get_depth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::get_depth)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6c21910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "get_depth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.get_rectTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RectTransform> (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::get_rectTransform)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6c20ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "get_rectTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.get_canvas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Canvas> (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::get_canvas)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6c208e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "get_canvas", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.CacheCanvas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::CacheCanvas)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x6c21550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "CacheCanvas", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.get_canvasRenderer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::CanvasRenderer> (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::get_canvasRenderer)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6c2192c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "get_canvasRenderer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.get_defaultMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::get_defaultMaterial)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6c219c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.get_material
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::get_material)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6c21a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.set_material
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)(::UnityEngine::Material*)>(&::UnityEngine::UI::Graphic::set_material)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6c21aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.get_materialForRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::get_materialForRendering)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x6c21b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.get_mainTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::get_mainTexture)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6c21d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::OnEnable)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6c21d7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::OnDisable)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6c21ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::OnDestroy)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6c22188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.OnCanvasHierarchyChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::OnCanvasHierarchyChanged)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6c22288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.OnCullingChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::OnCullingChanged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6c223bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.Rebuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)(::UnityEngine::UI::CanvasUpdate)>(&::UnityEngine::UI::Graphic::Rebuild)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6c2244c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.LayoutComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::LayoutComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c22534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.GraphicUpdateComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::GraphicUpdateComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c22538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.UpdateMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::UpdateMaterial)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6c2253c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.UpdateGeometry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::UpdateGeometry)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6c225f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.DoMeshGeneration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::DoMeshGeneration)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x6c22980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "DoMeshGeneration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.DoLegacyMeshGeneration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::DoLegacyMeshGeneration)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x6c22604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "DoLegacyMeshGeneration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.get_workerMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)()>(&::UnityEngine::UI::Graphic::get_workerMesh)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6c22d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "get_workerMesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.OnFillVBO
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*)>(
    &::UnityEngine::UI::Graphic::OnFillVBO)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c22e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.OnPopulateMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)(::UnityEngine::Mesh*)>(&::UnityEngine::UI::Graphic::OnPopulateMesh)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6c22e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.OnPopulateMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)(::UnityEngine::UI::VertexHelper*)>(&::UnityEngine::UI::Graphic::OnPopulateMesh)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6c22efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.OnDidApplyAnimationProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::OnDidApplyAnimationProperties)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6c2318c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.SetNativeSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::SetNativeSize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c2319c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.Raycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::Graphic::*)(::UnityEngine::Vector2, ::UnityEngine::Camera*)>(&::UnityEngine::UI::Graphic::Raycast)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x6c231a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.PixelAdjustPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UI::Graphic::*)(::UnityEngine::Vector2)>(&::UnityEngine::UI::Graphic::PixelAdjustPoint)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6c23648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "PixelAdjustPoint", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.GetPixelAdjustedRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::UnityEngine::UI::Graphic::*)()>(&::UnityEngine::UI::Graphic::GetPixelAdjustedRect)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6c23058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "GetPixelAdjustedRect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.CrossFadeColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)(::UnityEngine::Color, float_t, bool, bool)>(&::UnityEngine::UI::Graphic::CrossFadeColor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c23790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.CrossFadeColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)(::UnityEngine::Color, float_t, bool, bool, bool)>(&::UnityEngine::UI::Graphic::CrossFadeColor)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x6c237a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.CreateColorFromAlpha
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(float_t)>(&::UnityEngine::UI::Graphic::CreateColorFromAlpha)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c23aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "CreateColorFromAlpha", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.CrossFadeAlpha
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)(float_t, float_t, bool)>(&::UnityEngine::UI::Graphic::CrossFadeAlpha)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6c23abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 49 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.RegisterDirtyLayoutCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)(::UnityEngine::Events::UnityAction*)>(&::UnityEngine::UI::Graphic::RegisterDirtyLayoutCallback)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6c23b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "RegisterDirtyLayoutCallback", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.UnregisterDirtyLayoutCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)(::UnityEngine::Events::UnityAction*)>(&::UnityEngine::UI::Graphic::UnregisterDirtyLayoutCallback)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6c23be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "UnregisterDirtyLayoutCallback", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.RegisterDirtyVerticesCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)(::UnityEngine::Events::UnityAction*)>(&::UnityEngine::UI::Graphic::RegisterDirtyVerticesCallback)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6c23c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "RegisterDirtyVerticesCallback", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.UnregisterDirtyVerticesCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)(::UnityEngine::Events::UnityAction*)>(&::UnityEngine::UI::Graphic::UnregisterDirtyVerticesCallback)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6c23d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "UnregisterDirtyVerticesCallback", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.RegisterDirtyMaterialCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)(::UnityEngine::Events::UnityAction*)>(&::UnityEngine::UI::Graphic::RegisterDirtyMaterialCallback)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6c23d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "RegisterDirtyMaterialCallback", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.UnregisterDirtyMaterialCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Graphic::*)(::UnityEngine::Events::UnityAction*)>(&::UnityEngine::UI::Graphic::UnregisterDirtyMaterialCallback)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6c23e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "UnregisterDirtyMaterialCallback", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Graphic.UnityEngine_UI_ICanvasElement_get_transform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::UI::Graphic::*)()>(
    &::UnityEngine::UI::Graphic::UnityEngine_UI_ICanvasElement_get_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c23f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "UnityEngine.UI.ICanvasElement.get_transform", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::UI::Graphic::__cordl_internal_get_m_Material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::UI::Graphic::__cordl_internal_get_m_Material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Material;
}
constexpr void UnityEngine::UI::Graphic::__cordl_internal_set_m_Material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Material = value;
}
constexpr ::UnityEngine::Color& UnityEngine::UI::Graphic::__cordl_internal_get_m_Color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Color;
}
constexpr ::UnityEngine::Color const& UnityEngine::UI::Graphic::__cordl_internal_get_m_Color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Color;
}
constexpr void UnityEngine::UI::Graphic::__cordl_internal_set_m_Color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Color = value;
}
constexpr bool& UnityEngine::UI::Graphic::__cordl_internal_get_m_SkipLayoutUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SkipLayoutUpdate;
}
constexpr bool const& UnityEngine::UI::Graphic::__cordl_internal_get_m_SkipLayoutUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SkipLayoutUpdate;
}
constexpr void UnityEngine::UI::Graphic::__cordl_internal_set_m_SkipLayoutUpdate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SkipLayoutUpdate = value;
}
constexpr bool& UnityEngine::UI::Graphic::__cordl_internal_get_m_SkipMaterialUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SkipMaterialUpdate;
}
constexpr bool const& UnityEngine::UI::Graphic::__cordl_internal_get_m_SkipMaterialUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SkipMaterialUpdate;
}
constexpr void UnityEngine::UI::Graphic::__cordl_internal_set_m_SkipMaterialUpdate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SkipMaterialUpdate = value;
}
constexpr bool& UnityEngine::UI::Graphic::__cordl_internal_get_m_RaycastTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastTarget;
}
constexpr bool const& UnityEngine::UI::Graphic::__cordl_internal_get_m_RaycastTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastTarget;
}
constexpr void UnityEngine::UI::Graphic::__cordl_internal_set_m_RaycastTarget(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RaycastTarget = value;
}
constexpr bool& UnityEngine::UI::Graphic::__cordl_internal_get_m_RaycastTargetCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastTargetCache;
}
constexpr bool const& UnityEngine::UI::Graphic::__cordl_internal_get_m_RaycastTargetCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastTargetCache;
}
constexpr void UnityEngine::UI::Graphic::__cordl_internal_set_m_RaycastTargetCache(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RaycastTargetCache = value;
}
constexpr ::UnityEngine::Vector4& UnityEngine::UI::Graphic::__cordl_internal_get_m_RaycastPadding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastPadding;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::UI::Graphic::__cordl_internal_get_m_RaycastPadding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastPadding;
}
constexpr void UnityEngine::UI::Graphic::__cordl_internal_set_m_RaycastPadding(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RaycastPadding = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& UnityEngine::UI::Graphic::__cordl_internal_get_m_RectTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& UnityEngine::UI::Graphic::__cordl_internal_get_m_RectTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RectTransform;
}
constexpr void UnityEngine::UI::Graphic::__cordl_internal_set_m_RectTransform(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RectTransform = value;
}
constexpr ::UnityW<::UnityEngine::CanvasRenderer>& UnityEngine::UI::Graphic::__cordl_internal_get_m_CanvasRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CanvasRenderer;
}
constexpr ::UnityW<::UnityEngine::CanvasRenderer> const& UnityEngine::UI::Graphic::__cordl_internal_get_m_CanvasRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CanvasRenderer;
}
constexpr void UnityEngine::UI::Graphic::__cordl_internal_set_m_CanvasRenderer(::UnityW<::UnityEngine::CanvasRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CanvasRenderer = value;
}
constexpr ::UnityW<::UnityEngine::Canvas>& UnityEngine::UI::Graphic::__cordl_internal_get_m_Canvas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Canvas;
}
constexpr ::UnityW<::UnityEngine::Canvas> const& UnityEngine::UI::Graphic::__cordl_internal_get_m_Canvas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Canvas;
}
constexpr void UnityEngine::UI::Graphic::__cordl_internal_set_m_Canvas(::UnityW<::UnityEngine::Canvas> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Canvas = value;
}
constexpr bool& UnityEngine::UI::Graphic::__cordl_internal_get_m_VertsDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VertsDirty;
}
constexpr bool const& UnityEngine::UI::Graphic::__cordl_internal_get_m_VertsDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VertsDirty;
}
constexpr void UnityEngine::UI::Graphic::__cordl_internal_set_m_VertsDirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VertsDirty = value;
}
constexpr bool& UnityEngine::UI::Graphic::__cordl_internal_get_m_MaterialDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaterialDirty;
}
constexpr bool const& UnityEngine::UI::Graphic::__cordl_internal_get_m_MaterialDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaterialDirty;
}
constexpr void UnityEngine::UI::Graphic::__cordl_internal_set_m_MaterialDirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaterialDirty = value;
}
constexpr ::UnityEngine::Events::UnityAction*& UnityEngine::UI::Graphic::__cordl_internal_get_m_OnDirtyLayoutCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnDirtyLayoutCallback;
}
constexpr ::UnityEngine::Events::UnityAction* const& UnityEngine::UI::Graphic::__cordl_internal_get_m_OnDirtyLayoutCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnDirtyLayoutCallback;
}
constexpr void UnityEngine::UI::Graphic::__cordl_internal_set_m_OnDirtyLayoutCallback(::UnityEngine::Events::UnityAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnDirtyLayoutCallback = value;
}
constexpr ::UnityEngine::Events::UnityAction*& UnityEngine::UI::Graphic::__cordl_internal_get_m_OnDirtyVertsCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnDirtyVertsCallback;
}
constexpr ::UnityEngine::Events::UnityAction* const& UnityEngine::UI::Graphic::__cordl_internal_get_m_OnDirtyVertsCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnDirtyVertsCallback;
}
constexpr void UnityEngine::UI::Graphic::__cordl_internal_set_m_OnDirtyVertsCallback(::UnityEngine::Events::UnityAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnDirtyVertsCallback = value;
}
constexpr ::UnityEngine::Events::UnityAction*& UnityEngine::UI::Graphic::__cordl_internal_get_m_OnDirtyMaterialCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnDirtyMaterialCallback;
}
constexpr ::UnityEngine::Events::UnityAction* const& UnityEngine::UI::Graphic::__cordl_internal_get_m_OnDirtyMaterialCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnDirtyMaterialCallback;
}
constexpr void UnityEngine::UI::Graphic::__cordl_internal_set_m_OnDirtyMaterialCallback(::UnityEngine::Events::UnityAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnDirtyMaterialCallback = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& UnityEngine::UI::Graphic::__cordl_internal_get_m_CachedMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& UnityEngine::UI::Graphic::__cordl_internal_get_m_CachedMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedMesh;
}
constexpr void UnityEngine::UI::Graphic::__cordl_internal_set_m_CachedMesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CachedMesh = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& UnityEngine::UI::Graphic::__cordl_internal_get_m_CachedUvs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedUvs;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& UnityEngine::UI::Graphic::__cordl_internal_get_m_CachedUvs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedUvs;
}
constexpr void UnityEngine::UI::Graphic::__cordl_internal_set_m_CachedUvs(::ArrayW<::UnityEngine::Vector2> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CachedUvs = value;
}
constexpr ::UnityEngine::UI::CoroutineTween::TweenRunner_1<::UnityEngine::UI::CoroutineTween::ColorTween>*& UnityEngine::UI::Graphic::__cordl_internal_get_m_ColorTweenRunner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorTweenRunner;
}
constexpr ::UnityEngine::UI::CoroutineTween::TweenRunner_1<::UnityEngine::UI::CoroutineTween::ColorTween>* const& UnityEngine::UI::Graphic::__cordl_internal_get_m_ColorTweenRunner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorTweenRunner;
}
constexpr void UnityEngine::UI::Graphic::__cordl_internal_set_m_ColorTweenRunner(::UnityEngine::UI::CoroutineTween::TweenRunner_1<::UnityEngine::UI::CoroutineTween::ColorTween>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ColorTweenRunner = value;
}
constexpr bool& UnityEngine::UI::Graphic::__cordl_internal_get__useLegacyMeshGeneration_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useLegacyMeshGeneration_k__BackingField;
}
constexpr bool const& UnityEngine::UI::Graphic::__cordl_internal_get__useLegacyMeshGeneration_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useLegacyMeshGeneration_k__BackingField;
}
constexpr void UnityEngine::UI::Graphic::__cordl_internal_set__useLegacyMeshGeneration_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useLegacyMeshGeneration_k__BackingField = value;
}
inline void UnityEngine::UI::Graphic::setStaticF_s_DefaultUI(::UnityW<::UnityEngine::Material> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "s_DefaultUI", ::UnityEngine::UI::Graphic*>(std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::UI::Graphic::getStaticF_s_DefaultUI() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "s_DefaultUI", ::UnityEngine::UI::Graphic*>();
}
inline void UnityEngine::UI::Graphic::setStaticF_s_WhiteTexture(::UnityW<::UnityEngine::Texture2D> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture2D>, "s_WhiteTexture", ::UnityEngine::UI::Graphic*>(std::forward<::UnityW<::UnityEngine::Texture2D>>(value));
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::UI::Graphic::getStaticF_s_WhiteTexture() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture2D>, "s_WhiteTexture", ::UnityEngine::UI::Graphic*>();
}
inline void UnityEngine::UI::Graphic::setStaticF_s_Mesh(::UnityW<::UnityEngine::Mesh> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Mesh>, "s_Mesh", ::UnityEngine::UI::Graphic*>(std::forward<::UnityW<::UnityEngine::Mesh>>(value));
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::UI::Graphic::getStaticF_s_Mesh() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Mesh>, "s_Mesh", ::UnityEngine::UI::Graphic*>();
}
inline void UnityEngine::UI::Graphic::setStaticF_s_VertexHelper(::UnityEngine::UI::VertexHelper* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UI::VertexHelper*, "s_VertexHelper", ::UnityEngine::UI::Graphic*>(std::forward<::UnityEngine::UI::VertexHelper*>(value));
}
inline ::UnityEngine::UI::VertexHelper* UnityEngine::UI::Graphic::getStaticF_s_VertexHelper() {
  return ::cordl_internals::getStaticField<::UnityEngine::UI::VertexHelper*, "s_VertexHelper", ::UnityEngine::UI::Graphic*>();
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::UI::Graphic::get_defaultGraphicMaterial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "get_defaultGraphicMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method);
}
inline ::UnityEngine::Color UnityEngine::UI::Graphic::get_color() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::set_color(::UnityEngine::Color value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::Graphic::get_raycastTarget() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::set_raycastTarget(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector4 UnityEngine::UI::Graphic::get_raycastPadding() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "get_raycastPadding", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::set_raycastPadding(::UnityEngine::Vector4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "set_raycastPadding", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::Graphic::get_useLegacyMeshGeneration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "get_useLegacyMeshGeneration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::set_useLegacyMeshGeneration(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "set_useLegacyMeshGeneration", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UI::Graphic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::SetAllDirty() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::SetLayoutDirty() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::SetVerticesDirty() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::SetMaterialDirty() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::SetRaycastDirty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "SetRaycastDirty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::OnRectTransformDimensionsChange() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::OnBeforeTransformParentChanged() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::OnTransformParentChanged() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::UI::Graphic::get_depth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "get_depth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RectTransform> UnityEngine::UI::Graphic::get_rectTransform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "get_rectTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Canvas> UnityEngine::UI::Graphic::get_canvas() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "get_canvas", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Canvas>>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::CacheCanvas() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "CacheCanvas", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::CanvasRenderer> UnityEngine::UI::Graphic::get_canvasRenderer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "get_canvasRenderer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::CanvasRenderer>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::UI::Graphic::get_defaultMaterial() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::UI::Graphic::get_material() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::set_material(::UnityEngine::Material* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::UI::Graphic::get_materialForRendering() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::UI::Graphic::get_mainTexture() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::OnEnable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::OnDisable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::OnCanvasHierarchyChanged() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::OnCullingChanged() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::Rebuild(::UnityEngine::UI::CanvasUpdate update) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, update);
}
inline void UnityEngine::UI::Graphic::LayoutComplete() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::GraphicUpdateComplete() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::UpdateMaterial() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::UpdateGeometry() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::DoMeshGeneration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "DoMeshGeneration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::DoLegacyMeshGeneration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "DoLegacyMeshGeneration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::UI::Graphic::get_workerMesh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "get_workerMesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method);
}
inline void UnityEngine::UI::Graphic::OnFillVBO(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* vbo) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vbo);
}
inline void UnityEngine::UI::Graphic::OnPopulateMesh(::UnityEngine::Mesh* m) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, m);
}
inline void UnityEngine::UI::Graphic::OnPopulateMesh(::UnityEngine::UI::VertexHelper* vh) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vh);
}
inline void UnityEngine::UI::Graphic::OnDidApplyAnimationProperties() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::SetNativeSize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UI::Graphic::Raycast(::UnityEngine::Vector2 sp, ::UnityEngine::Camera* eventCamera) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sp, eventCamera);
}
inline ::UnityEngine::Vector2 UnityEngine::UI::Graphic::PixelAdjustPoint(::UnityEngine::Vector2 point) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "PixelAdjustPoint", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, point);
}
inline ::UnityEngine::Rect UnityEngine::UI::Graphic::GetPixelAdjustedRect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "GetPixelAdjustedRect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline void UnityEngine::UI::Graphic::CrossFadeColor(::UnityEngine::Color targetColor, float_t duration, bool ignoreTimeScale, bool useAlpha) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetColor, duration, ignoreTimeScale, useAlpha);
}
inline void UnityEngine::UI::Graphic::CrossFadeColor(::UnityEngine::Color targetColor, float_t duration, bool ignoreTimeScale, bool useAlpha, bool useRGB) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetColor, duration, ignoreTimeScale, useAlpha, useRGB);
}
inline ::UnityEngine::Color UnityEngine::UI::Graphic::CreateColorFromAlpha(float_t alpha) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "CreateColorFromAlpha", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, alpha);
}
inline void UnityEngine::UI::Graphic::CrossFadeAlpha(float_t alpha, float_t duration, bool ignoreTimeScale) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Graphic*>(), 49 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alpha, duration, ignoreTimeScale);
}
inline void UnityEngine::UI::Graphic::RegisterDirtyLayoutCallback(::UnityEngine::Events::UnityAction* action) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "RegisterDirtyLayoutCallback", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void UnityEngine::UI::Graphic::UnregisterDirtyLayoutCallback(::UnityEngine::Events::UnityAction* action) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "UnregisterDirtyLayoutCallback", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void UnityEngine::UI::Graphic::RegisterDirtyVerticesCallback(::UnityEngine::Events::UnityAction* action) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "RegisterDirtyVerticesCallback", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void UnityEngine::UI::Graphic::UnregisterDirtyVerticesCallback(::UnityEngine::Events::UnityAction* action) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "UnregisterDirtyVerticesCallback", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void UnityEngine::UI::Graphic::RegisterDirtyMaterialCallback(::UnityEngine::Events::UnityAction* action) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "RegisterDirtyMaterialCallback", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void UnityEngine::UI::Graphic::UnregisterDirtyMaterialCallback(::UnityEngine::Events::UnityAction* action) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "UnregisterDirtyMaterialCallback", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::UI::Graphic::UnityEngine_UI_ICanvasElement_get_transform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Graphic*>(), { "UnityEngine.UI.ICanvasElement.get_transform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityEngine::UI::Graphic* UnityEngine::UI::Graphic::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::Graphic*>());
}
/// @brief Convert operator to "::UnityEngine::UI::ICanvasElement"
constexpr UnityEngine::UI::Graphic::operator ::UnityEngine::UI::ICanvasElement*() noexcept {
  return static_cast<::UnityEngine::UI::ICanvasElement*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UI::ICanvasElement"
constexpr ::UnityEngine::UI::ICanvasElement* UnityEngine::UI::Graphic::i___UnityEngine__UI__ICanvasElement() noexcept {
  return static_cast<::UnityEngine::UI::ICanvasElement*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Graphic::Graphic() {}
