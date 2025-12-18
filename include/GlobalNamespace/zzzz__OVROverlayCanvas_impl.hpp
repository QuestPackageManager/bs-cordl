#pragma once
// IWYU pragma private; include "GlobalNamespace/OVROverlayCanvas.hpp"
#include "GlobalNamespace/zzzz__OVRRayTransformer_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__OVROverlayCanvas_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlayCanvas_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlayMeshGenerator_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlay_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVROverlayCanvas_DrawMode::OVROverlayCanvas_DrawMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVROverlayCanvas_DrawMode::OVROverlayCanvas_DrawMode() {}
constexpr ::GlobalNamespace::OVROverlayCanvas_DrawMode GlobalNamespace::OVROverlayCanvas_DrawMode::Opaque{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVROverlayCanvas_DrawMode GlobalNamespace::OVROverlayCanvas_DrawMode::OpaqueWithClip{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVROverlayCanvas_DrawMode GlobalNamespace::OVROverlayCanvas_DrawMode::TransparentDefaultAlpha{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVROverlayCanvas_DrawMode GlobalNamespace::OVROverlayCanvas_DrawMode::TransparentCorrectAlpha{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::OVROverlayCanvas_DrawMode GlobalNamespace::OVROverlayCanvas_DrawMode::AlphaToMask{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVROverlayCanvas_CanvasShape::OVROverlayCanvas_CanvasShape(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVROverlayCanvas_CanvasShape::OVROverlayCanvas_CanvasShape() {}
constexpr ::GlobalNamespace::OVROverlayCanvas_CanvasShape GlobalNamespace::OVROverlayCanvas_CanvasShape::Flat{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVROverlayCanvas_CanvasShape GlobalNamespace::OVROverlayCanvas_CanvasShape::Curved{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.get_overlayEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::get_overlayEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cca3c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get(),
                                                                               "get_overlayEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.set_overlayEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayCanvas::*)(bool)>(&::GlobalNamespace::OVROverlayCanvas::set_overlayEnabled)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5cca3cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get(), "set_overlayEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::Start)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x5cca4d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.InitializeRenderTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::InitializeRenderTexture)> {
  constexpr static std::size_t size = 0x9a0;
  constexpr static std::size_t addrs = 0x5cca97c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get(),
                                                                               "InitializeRenderTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::OnDestroy)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5ccb31c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::OnEnable)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5ccb400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::OnDisable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ccb4fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.ShouldRender
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::ShouldRender)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x5ccb598;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::Update)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5ccb8ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::LateUpdate)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5ccc5bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get(), "LateUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.OnValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::OnValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ccc654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get(), "OnValidate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.ApplyViewportScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::ApplyViewportScale)> {
  constexpr static std::size_t size = 0xa0c;
  constexpr static std::size_t addrs = 0x5ccb8e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get(),
                                                                               "ApplyViewportScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.RenderCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::RenderCamera)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x5ccc2f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get(), "RenderCamera",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.CalculateCurveViewBillboardMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (::GlobalNamespace::OVROverlayCanvas::*)(::UnityEngine::Camera*)>(
    &::GlobalNamespace::OVROverlayCanvas::CalculateCurveViewBillboardMatrix)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x5ccc658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get(), "CalculateCurveViewBillboardMatrix", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.TransformRay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Ray (::GlobalNamespace::OVROverlayCanvas::*)(::UnityEngine::Ray)>(
    &::GlobalNamespace::OVROverlayCanvas::TransformRay)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x5ccc980;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.LineCircleIntersection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, ::ByRef<float_t>)>(
    &::GlobalNamespace::OVROverlayCanvas::LineCircleIntersection)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5cccc6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get(), "LineCircleIntersection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5cccd38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__rectTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__rectTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rectTransform;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rectTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Canvas>& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__canvas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvas;
}
constexpr ::UnityW<::UnityEngine::Canvas> const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__canvas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvas;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__canvas(::UnityW<::UnityEngine::Canvas> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____canvas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__camera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__camera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____camera;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__camera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____camera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OVROverlay>& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__overlay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overlay;
}
constexpr ::UnityW<::GlobalNamespace::OVROverlay> const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__overlay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overlay;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__overlay(::UnityW<::GlobalNamespace::OVROverlay> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____overlay)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__meshRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__meshRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshRenderer;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__meshRenderer(::UnityW<::UnityEngine::MeshRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____meshRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OVROverlayMeshGenerator>& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__meshGenerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshGenerator;
}
constexpr ::UnityW<::GlobalNamespace::OVROverlayMeshGenerator> const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__meshGenerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshGenerator;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__meshGenerator(::UnityW<::GlobalNamespace::OVROverlayMeshGenerator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____meshGenerator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__renderTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__renderTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderTexture;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__renderTexture(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renderTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__imposterMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____imposterMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__imposterMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____imposterMaterial;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__imposterMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____imposterMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__optimalResolutionInitialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optimalResolutionInitialized;
}
constexpr bool const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__optimalResolutionInitialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optimalResolutionInitialized;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__optimalResolutionInitialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____optimalResolutionInitialized = value;
}
constexpr float_t& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__optimalResolutionWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optimalResolutionWidth;
}
constexpr float_t const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__optimalResolutionWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optimalResolutionWidth;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__optimalResolutionWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____optimalResolutionWidth = value;
}
constexpr float_t& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__optimalResolutionHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optimalResolutionHeight;
}
constexpr float_t const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__optimalResolutionHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optimalResolutionHeight;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__optimalResolutionHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____optimalResolutionHeight = value;
}
constexpr int32_t& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__lastPixelWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastPixelWidth;
}
constexpr int32_t const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__lastPixelWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastPixelWidth;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__lastPixelWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastPixelWidth = value;
}
constexpr int32_t& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__lastPixelHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastPixelHeight;
}
constexpr int32_t const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__lastPixelHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastPixelHeight;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__lastPixelHeight(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastPixelHeight = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__imposterTextureOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____imposterTextureOffset;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__imposterTextureOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____imposterTextureOffset;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__imposterTextureOffset(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____imposterTextureOffset = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__imposterTextureScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____imposterTextureScale;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__imposterTextureScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____imposterTextureScale;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__imposterTextureScale(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____imposterTextureScale = value;
}
constexpr bool& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__hasRenderedFirstFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasRenderedFirstFrame;
}
constexpr bool const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__hasRenderedFirstFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasRenderedFirstFrame;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__hasRenderedFirstFrame(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasRenderedFirstFrame = value;
}
constexpr bool& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__useTempRT() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useTempRT;
}
constexpr bool const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__useTempRT() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useTempRT;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__useTempRT(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useTempRT = value;
}
constexpr bool& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__scaleViewport() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scaleViewport;
}
constexpr bool const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__scaleViewport() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scaleViewport;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__scaleViewport(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scaleViewport = value;
}
constexpr int32_t& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_maxTextureSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxTextureSize;
}
constexpr int32_t const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_maxTextureSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxTextureSize;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set_maxTextureSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxTextureSize = value;
}
constexpr int32_t& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_renderInterval() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderInterval;
}
constexpr int32_t const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_renderInterval() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderInterval;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set_renderInterval(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderInterval = value;
}
constexpr int32_t& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_renderIntervalFrameOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderIntervalFrameOffset;
}
constexpr int32_t const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_renderIntervalFrameOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderIntervalFrameOffset;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set_renderIntervalFrameOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderIntervalFrameOffset = value;
}
constexpr bool& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_expensive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expensive;
}
constexpr bool const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_expensive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expensive;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set_expensive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___expensive = value;
}
constexpr int32_t& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_layer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layer;
}
constexpr int32_t const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_layer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layer;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set_layer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___layer = value;
}
constexpr ::GlobalNamespace::OVROverlayCanvas_DrawMode& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_opacity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___opacity;
}
constexpr ::GlobalNamespace::OVROverlayCanvas_DrawMode const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_opacity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___opacity;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set_opacity(::GlobalNamespace::OVROverlayCanvas_DrawMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___opacity = value;
}
constexpr ::GlobalNamespace::OVROverlayCanvas_CanvasShape& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_shape() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shape;
}
constexpr ::GlobalNamespace::OVROverlayCanvas_CanvasShape const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_shape() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shape;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set_shape(::GlobalNamespace::OVROverlayCanvas_CanvasShape value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shape = value;
}
constexpr float_t& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_curveRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curveRadius;
}
constexpr float_t const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_curveRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curveRadius;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set_curveRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curveRadius = value;
}
constexpr bool& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_overlapMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overlapMask;
}
constexpr bool const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_overlapMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overlapMask;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set_overlapMask(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overlapMask = value;
}
constexpr bool& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__overlayEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overlayEnabled;
}
constexpr bool const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__overlayEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overlayEnabled;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__overlayEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overlayEnabled = value;
}
inline void GlobalNamespace::OVROverlayCanvas::setStaticF__FrustumPlanes(::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*>, "_FrustumPlanes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get>(
      std::forward<::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*>>(value));
}
inline ::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> GlobalNamespace::OVROverlayCanvas::getStaticF__FrustumPlanes() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*>, "_FrustumPlanes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get>();
}
inline void GlobalNamespace::OVROverlayCanvas::setStaticF__Corners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, "_Corners",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get>(
      std::forward<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> GlobalNamespace::OVROverlayCanvas::getStaticF__Corners() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, "_Corners",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get>();
}
inline bool GlobalNamespace::OVROverlayCanvas::get_overlayEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get(), "get_overlayEnabled",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayCanvas::set_overlayEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get(), "set_overlayEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVROverlayCanvas::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayCanvas::InitializeRenderTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get(),
                                                                             "InitializeRenderTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayCanvas::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayCanvas::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayCanvas::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVROverlayCanvas::ShouldRender() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayCanvas::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayCanvas::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get(), "LateUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayCanvas::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get(), "OnValidate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayCanvas::ApplyViewportScale() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get(), "ApplyViewportScale",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayCanvas::RenderCamera() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get(), "RenderCamera",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 GlobalNamespace::OVROverlayCanvas::CalculateCurveViewBillboardMatrix(::UnityEngine::Camera* mainCamera) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get(), "CalculateCurveViewBillboardMatrix", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(this, ___internal_method, mainCamera);
}
inline ::UnityEngine::Ray GlobalNamespace::OVROverlayCanvas::TransformRay(::UnityEngine::Ray ray) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ray, false>(this, ___internal_method, ray);
}
inline bool GlobalNamespace::OVROverlayCanvas::LineCircleIntersection(::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 dp, ::UnityEngine::Vector2 center, float_t radius, ::ByRef<float_t> distance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get(), "LineCircleIntersection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, p1, dp, center, radius, distance);
}
inline void GlobalNamespace::OVROverlayCanvas::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayCanvas*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVROverlayCanvas* GlobalNamespace::OVROverlayCanvas::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVROverlayCanvas*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVROverlayCanvas::OVROverlayCanvas() {}
