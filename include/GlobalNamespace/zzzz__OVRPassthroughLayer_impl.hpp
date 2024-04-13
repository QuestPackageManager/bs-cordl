#pragma once
#include "GlobalNamespace/zzzz__OVROverlay_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPassthroughLayer_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPassthroughLayer_def.hpp"
#include "GlobalNamespace/zzzz__OVRCameraRig_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlay_def.hpp"
#include "GlobalNamespace/zzzz__OVRPassthroughColorLut_def.hpp"
#include "GlobalNamespace/zzzz__OVRPassthroughLayer_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType::__OVRPassthroughLayer__ProjectionSurfaceType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType::__OVRPassthroughLayer__ProjectionSurfaceType() {}
constexpr ::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType::Reconstructed{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType::UserDefined{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType::__OVRPassthroughLayer__ColorMapEditorType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType::__OVRPassthroughLayer__ColorMapEditorType() {}
constexpr ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType::GrayscaleToColor{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType::Controls{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType::Custom{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType::Grayscale{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType::ColorAdjustment{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType::ColorLut{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType::InterpolatedColorLut{ static_cast<int32_t>(0x6) };
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__Settings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__Settings::*)(
    ::UnityEngine::Texture2D*, ::UnityEngine::Texture2D*, float_t, float_t, float_t, float_t, ::UnityEngine::Gradient*, float_t, bool)>(&::GlobalNamespace::__OVRPassthroughLayer__Settings::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a29580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__Settings>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Gradient*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__OVRPassthroughLayer__Settings::_ctor(::UnityEngine::Texture2D* colorLutTargetTexture, ::UnityEngine::Texture2D* colorLutSourceTexture, float_t saturation,
                                                                    float_t posterize, float_t brightness, float_t contrast, ::UnityEngine::Gradient* gradient, float_t lutWeight, bool flipLutY) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__Settings>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 9>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Gradient*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colorLutTargetTexture, colorLutSourceTexture, saturation, posterize, brightness, contrast, gradient, lutWeight,
                                                          flipLutY);
}
// Ctor Parameters [CppParam { name: "colorLutTargetTexture", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "colorLutSourceTexture", ty:
// "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "saturation", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "posterize", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "brightness", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "contrast", ty: "float_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "gradient", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "lutWeight", ty: "float_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "flipLutY", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRPassthroughLayer__Settings::__OVRPassthroughLayer__Settings(::UnityW<::UnityEngine::Texture2D> colorLutTargetTexture,
                                                                                              ::UnityW<::UnityEngine::Texture2D> colorLutSourceTexture, float_t saturation, float_t posterize,
                                                                                              float_t brightness, float_t contrast, ::UnityEngine::Gradient* gradient, float_t lutWeight,
                                                                                              bool flipLutY) noexcept {
  this->colorLutTargetTexture = colorLutTargetTexture;
  this->colorLutSourceTexture = colorLutSourceTexture;
  this->saturation = saturation;
  this->posterize = posterize;
  this->brightness = brightness;
  this->contrast = contrast;
  this->gradient = gradient;
  this->lutWeight = lutWeight;
  this->flipLutY = flipLutY;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRPassthroughLayer__Settings::__OVRPassthroughLayer__Settings() {}
// Ctor Parameters [CppParam { name: "meshHandle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceHandle", ty: "uint64_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "updateTransform", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "localToWorld", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance::__OVRPassthroughLayer__PassthroughMeshInstance(uint64_t meshHandle, uint64_t instanceHandle, bool updateTransform,
                                                                                                                            ::UnityEngine::Matrix4x4 localToWorld) noexcept {
  this->meshHandle = meshHandle;
  this->instanceHandle = instanceHandle;
  this->updateTransform = updateTransform;
  this->localToWorld = localToWorld;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance::__OVRPassthroughLayer__PassthroughMeshInstance() {}
// Ctor Parameters [CppParam { name: "meshFilter", ty: "::UnityW<::UnityEngine::MeshFilter>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "updateTransform", ty: "bool", modifiers:
// "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRPassthroughLayer__SerializedSurfaceGeometry::__OVRPassthroughLayer__SerializedSurfaceGeometry(::UnityW<::UnityEngine::MeshFilter> meshFilter,
                                                                                                                                bool updateTransform) noexcept {
  this->meshFilter = meshFilter;
  this->updateTransform = updateTransform;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRPassthroughLayer__SerializedSurfaceGeometry::__OVRPassthroughLayer__SerializedSurfaceGeometry() {}
// Ctor Parameters [CppParam { name: "gameObject", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "updateTransform", ty: "bool", modifiers:
// "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition::__OVRPassthroughLayer__DeferredPassthroughMeshAddition(::UnityW<::UnityEngine::GameObject> gameObject,
                                                                                                                                            bool updateTransform) noexcept {
  this->gameObject = gameObject;
  this->updateTransform = updateTransform;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition::__OVRPassthroughLayer__DeferredPassthroughMeshAddition() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler.ApplyStyleSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler::*)(
    ByRef<::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle2>)>(&::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler::ApplyStyleSettings)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler::*)(
    ::GlobalNamespace::__OVRPassthroughLayer__Settings)>(&::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler.get_IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler::*)()>(
    &::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler::get_IsValid)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler::*)()>(
    &::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler*>::get(), 3));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__OVRPassthroughLayer__IStyleHandler::ApplyStyleSettings(ByRef<::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle2> style) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, style);
}
inline void GlobalNamespace::__OVRPassthroughLayer__IStyleHandler::Update(::GlobalNamespace::__OVRPassthroughLayer__Settings settings) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings);
}
inline bool GlobalNamespace::__OVRPassthroughLayer__IStyleHandler::get_IsValid() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRPassthroughLayer__IStyleHandler::Clear() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__StylesHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__StylesHandler::*)()>(
    &::GlobalNamespace::__OVRPassthroughLayer__StylesHandler::_ctor)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2a295a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__StylesHandler*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__StylesHandler.SetStyleHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__StylesHandler::*)(
    ::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType)>(&::GlobalNamespace::__OVRPassthroughLayer__StylesHandler::SetStyleHandler)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2a272cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__StylesHandler*>::get(), "SetStyleHandler", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__StylesHandler.GetStyleHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler* (::GlobalNamespace::__OVRPassthroughLayer__StylesHandler::*)(::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType)>(
        &::GlobalNamespace::__OVRPassthroughLayer__StylesHandler::GetStyleHandler)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2a298f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__StylesHandler*>::get(), "GetStyleHandler", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__StylesHandler.SetColorLutHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__StylesHandler::*)(
    ::GlobalNamespace::OVRPassthroughColorLut*, float_t)>(&::GlobalNamespace::__OVRPassthroughLayer__StylesHandler::SetColorLutHandler)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a269a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__StylesHandler*>::get(), "SetColorLutHandler", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__StylesHandler.SetInterpolatedColorLutHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__StylesHandler::*)(
    ::GlobalNamespace::OVRPassthroughColorLut*, ::GlobalNamespace::OVRPassthroughColorLut*, float_t)>(&::GlobalNamespace::__OVRPassthroughLayer__StylesHandler::SetInterpolatedColorLutHandler)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2a26b1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__StylesHandler*>::get(),
                                                 "SetInterpolatedColorLutHandler", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__StylesHandler.SetMonoToRgbaHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__StylesHandler::*)(
    ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>)>(&::GlobalNamespace::__OVRPassthroughLayer__StylesHandler::SetMonoToRgbaHandler)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2a267dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__StylesHandler*>::get(), "SetMonoToRgbaHandler", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__StylesHandler.SetMonoToMonoHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__StylesHandler::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::GlobalNamespace::__OVRPassthroughLayer__StylesHandler::SetMonoToMonoHandler)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2a26f84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__StylesHandler*>::get(), "SetMonoToMonoHandler", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler*& GlobalNamespace::__OVRPassthroughLayer__StylesHandler::__cordl_internal_get__noneHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noneHandler;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler*> const&
GlobalNamespace::__OVRPassthroughLayer__StylesHandler::__cordl_internal_get__noneHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noneHandler;
}
constexpr void GlobalNamespace::__OVRPassthroughLayer__StylesHandler::__cordl_internal_set__noneHandler(::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noneHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler*& GlobalNamespace::__OVRPassthroughLayer__StylesHandler::__cordl_internal_get__lutHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lutHandler;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler*> const&
GlobalNamespace::__OVRPassthroughLayer__StylesHandler::__cordl_internal_get__lutHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lutHandler;
}
constexpr void GlobalNamespace::__OVRPassthroughLayer__StylesHandler::__cordl_internal_set__lutHandler(::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lutHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler*& GlobalNamespace::__OVRPassthroughLayer__StylesHandler::__cordl_internal_get__interpolatedLutHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____interpolatedLutHandler;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler*> const&
GlobalNamespace::__OVRPassthroughLayer__StylesHandler::__cordl_internal_get__interpolatedLutHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____interpolatedLutHandler;
}
constexpr void GlobalNamespace::__OVRPassthroughLayer__StylesHandler::__cordl_internal_set__interpolatedLutHandler(::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____interpolatedLutHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler*& GlobalNamespace::__OVRPassthroughLayer__StylesHandler::__cordl_internal_get__monoToRgbaHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____monoToRgbaHandler;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler*> const&
GlobalNamespace::__OVRPassthroughLayer__StylesHandler::__cordl_internal_get__monoToRgbaHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____monoToRgbaHandler;
}
constexpr void GlobalNamespace::__OVRPassthroughLayer__StylesHandler::__cordl_internal_set__monoToRgbaHandler(::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____monoToRgbaHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler*& GlobalNamespace::__OVRPassthroughLayer__StylesHandler::__cordl_internal_get__monoToMonoHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____monoToMonoHandler;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler*> const&
GlobalNamespace::__OVRPassthroughLayer__StylesHandler::__cordl_internal_get__monoToMonoHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____monoToMonoHandler;
}
constexpr void GlobalNamespace::__OVRPassthroughLayer__StylesHandler::__cordl_internal_set__monoToMonoHandler(::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____monoToMonoHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler*& GlobalNamespace::__OVRPassthroughLayer__StylesHandler::__cordl_internal_get__bcsHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bcsHandler;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler*> const&
GlobalNamespace::__OVRPassthroughLayer__StylesHandler::__cordl_internal_get__bcsHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bcsHandler;
}
constexpr void GlobalNamespace::__OVRPassthroughLayer__StylesHandler::__cordl_internal_set__bcsHandler(::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bcsHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::InteropServices::GCHandle& GlobalNamespace::__OVRPassthroughLayer__StylesHandler::__cordl_internal_get__colorMapDataHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorMapDataHandle;
}
constexpr ::System::Runtime::InteropServices::GCHandle const& GlobalNamespace::__OVRPassthroughLayer__StylesHandler::__cordl_internal_get__colorMapDataHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorMapDataHandle;
}
constexpr void GlobalNamespace::__OVRPassthroughLayer__StylesHandler::__cordl_internal_set__colorMapDataHandle(::System::Runtime::InteropServices::GCHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorMapDataHandle = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::__OVRPassthroughLayer__StylesHandler::__cordl_internal_get__colorMapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorMapData;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::__OVRPassthroughLayer__StylesHandler::__cordl_internal_get__colorMapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorMapData;
}
constexpr void GlobalNamespace::__OVRPassthroughLayer__StylesHandler::__cordl_internal_set__colorMapData(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorMapData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler*& GlobalNamespace::__OVRPassthroughLayer__StylesHandler::__cordl_internal_get_CurrentStyleHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CurrentStyleHandler;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler*> const&
GlobalNamespace::__OVRPassthroughLayer__StylesHandler::__cordl_internal_get_CurrentStyleHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CurrentStyleHandler;
}
constexpr void GlobalNamespace::__OVRPassthroughLayer__StylesHandler::__cordl_internal_set_CurrentStyleHandler(::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CurrentStyleHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__OVRPassthroughLayer__StylesHandler* GlobalNamespace::__OVRPassthroughLayer__StylesHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OVRPassthroughLayer__StylesHandler*>());
}
inline void GlobalNamespace::__OVRPassthroughLayer__StylesHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__StylesHandler*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRPassthroughLayer__StylesHandler::SetStyleHandler(::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__StylesHandler*>::get(), "SetStyleHandler", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline ::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler*
GlobalNamespace::__OVRPassthroughLayer__StylesHandler::GetStyleHandler(::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__StylesHandler*>::get(), "GetStyleHandler", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler*, false>(this, ___internal_method, type);
}
inline void GlobalNamespace::__OVRPassthroughLayer__StylesHandler::SetColorLutHandler(::GlobalNamespace::OVRPassthroughColorLut* lut, float_t weight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__StylesHandler*>::get(), "SetColorLutHandler", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lut, weight);
}
inline void GlobalNamespace::__OVRPassthroughLayer__StylesHandler::SetInterpolatedColorLutHandler(::GlobalNamespace::OVRPassthroughColorLut* lutSource,
                                                                                                  ::GlobalNamespace::OVRPassthroughColorLut* lutTarget, float_t weight) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__StylesHandler*>::get(),
                                               "SetInterpolatedColorLutHandler", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lutSource, lutTarget, weight);
}
inline void GlobalNamespace::__OVRPassthroughLayer__StylesHandler::SetMonoToRgbaHandler(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__StylesHandler*>::get(), "SetMonoToRgbaHandler", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
inline void GlobalNamespace::__OVRPassthroughLayer__StylesHandler::SetMonoToMonoHandler(::ArrayW<uint8_t, ::Array<uint8_t>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__StylesHandler*>::get(), "SetMonoToMonoHandler", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRPassthroughLayer__StylesHandler::__OVRPassthroughLayer__StylesHandler() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler.get_IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler::*)()>(
    &::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler::get_IsValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a29ad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler*>::get(), "get_IsValid",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler.ApplyStyleSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler::*)(
    ByRef<::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle2>)>(&::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler::ApplyStyleSettings)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a29ae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler*>::get(), "ApplyStyleSettings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle2>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler::*)(
    ::GlobalNamespace::__OVRPassthroughLayer__Settings)>(&::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a29ae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPassthroughLayer__Settings>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler::*)()>(
    &::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler::Clear)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a29ae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler*>::get(), "Clear",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler::*)()>(
    &::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a29850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler"
constexpr GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler::operator ::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler*() noexcept {
  return static_cast<::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler"
constexpr ::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler* GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler::i___GlobalNamespace____OVRPassthroughLayer__IStyleHandler() noexcept {
  return static_cast<::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler*>(static_cast<void*>(this));
}
inline bool GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler::get_IsValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler*>::get(),
                                                                             "get_IsValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler::ApplyStyleSettings(ByRef<::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle2> style) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler*>::get(), "ApplyStyleSettings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle2>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, style);
}
inline void GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler::Update(::GlobalNamespace::__OVRPassthroughLayer__Settings settings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPassthroughLayer__Settings>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings);
}
inline void GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler*>::get(),
                                                                             "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler* GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler*>());
}
inline void GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler::__OVRPassthroughLayer__NoneStyleHandler() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler.get_MapSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::*)()>(
    &::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::get_MapSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler.get_IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::*)()>(
    &::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::get_IsValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a29aec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler*>::get(), "get_IsValid",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::*)(
    ByRef<::System::Runtime::InteropServices::GCHandle>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2a29af4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Runtime::InteropServices::GCHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::*)(
    ::GlobalNamespace::__OVRPassthroughLayer__Settings)>(&::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a29b24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler.ApplyStyleSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::*)(
    ByRef<::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle2>)>(&::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::ApplyStyleSettings)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2a29b28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::*)()>(
    &::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::Clear)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a29b90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler*>::get(), "Clear",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler.AllocateColorMapData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::*)(uint32_t)>(
    &::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::AllocateColorMapData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2a29b9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler.DeallocateColorMapData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::*)()>(
    &::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::DeallocateColorMapData)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a29c2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler.WriteColorToColorMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::*)(int32_t, ByRef<::UnityEngine::Color>)>(
    &::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::WriteColorToColorMap)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2a29c54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler*>::get(),
                                                 "WriteColorToColorMap", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Color>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler.WriteFloatToColorMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::*)(int32_t, float_t)>(
    &::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::WriteFloatToColorMap)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2a29ddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler*>::get(), "WriteFloatToColorMap",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler.ComputeBrightnessContrastPosterizeMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, float_t, float_t, float_t)>(
    &::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::ComputeBrightnessContrastPosterizeMap)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2a29e64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler*>::get(), "ComputeBrightnessContrastPosterizeMap",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler"
constexpr GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::operator ::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler*() noexcept {
  return static_cast<::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler"
constexpr ::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler*
GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::i___GlobalNamespace____OVRPassthroughLayer__IStyleHandler() noexcept {
  return static_cast<::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler*>(static_cast<void*>(this));
}
constexpr ::System::Runtime::InteropServices::GCHandle& GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::__cordl_internal_get__colorMapDataHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorMapDataHandle;
}
constexpr ::System::Runtime::InteropServices::GCHandle const& GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::__cordl_internal_get__colorMapDataHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorMapDataHandle;
}
constexpr void GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::__cordl_internal_set__colorMapDataHandle(::System::Runtime::InteropServices::GCHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorMapDataHandle = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::__cordl_internal_get__colorMapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorMapData;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::__cordl_internal_get__colorMapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorMapData;
}
constexpr void GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::__cordl_internal_set__colorMapData(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorMapData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline uint32_t GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::get_MapSize() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::get_IsValid() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler*>::get(), "get_IsValid",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler*
GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::New_ctor(ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler,
                                                                            ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler*>(colorMapDataHandler, colorMapData));
}
inline void GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::_ctor(ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler,
                                                                                     ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Runtime::InteropServices::GCHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colorMapDataHandler, colorMapData);
}
inline void GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::Update(::GlobalNamespace::__OVRPassthroughLayer__Settings settings) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings);
}
inline void GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::ApplyStyleSettings(ByRef<::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle2> style) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, style);
}
inline void GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler*>::get(), "Clear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param size: uint32_t (default: static_cast<uint32_t>(0x900090u))
inline void GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::AllocateColorMapData(uint32_t size) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, size);
}
inline void GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::DeallocateColorMapData() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::WriteColorToColorMap(int32_t colorIndex, ByRef<::UnityEngine::Color> color) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler*>::get(),
                                               "WriteColorToColorMap", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Color>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colorIndex, color);
}
inline void GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::WriteFloatToColorMap(int32_t index, float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler*>::get(), "WriteFloatToColorMap",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
inline void GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::ComputeBrightnessContrastPosterizeMap(::ArrayW<uint8_t, ::Array<uint8_t>*> result, float_t brightness, float_t contrast,
                                                                                                                     float_t posterize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler*>::get(), "ComputeBrightnessContrastPosterizeMap",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, result, brightness, contrast, posterize);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler::__OVRPassthroughLayer__BaseGeneratedStyleHandler() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler.get_MapSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler::*)()>(
    &::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler::get_MapSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a29fd8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler::*)(
    ByRef<::System::Runtime::InteropServices::GCHandle>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2a29898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Runtime::InteropServices::GCHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler::*)(
    ::GlobalNamespace::__OVRPassthroughLayer__Settings)>(&::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler::Update)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2a29fe0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler::*)(
    ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>)>(&::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler::Update)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2a29a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler.AllocateColorMapData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler::*)(uint32_t)>(
    &::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler::AllocateColorMapData)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2a2a09c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler.DeallocateColorMapData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler::*)()>(
    &::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler::DeallocateColorMapData)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2a2a104;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler*>::get(), 12));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler::__cordl_internal_get__tmpColorMapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tmpColorMapData;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler::__cordl_internal_get__tmpColorMapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tmpColorMapData;
}
constexpr void GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler::__cordl_internal_set__tmpColorMapData(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tmpColorMapData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline uint32_t GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler::get_MapSize() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler*
GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler::New_ctor(ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler, ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler*>(colorMapDataHandler, colorMapData));
}
inline void GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler::_ctor(ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler,
                                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Runtime::InteropServices::GCHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colorMapDataHandler, colorMapData);
}
inline void GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler::Update(::GlobalNamespace::__OVRPassthroughLayer__Settings settings) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings);
}
inline void GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler::Update(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
/// @param size: uint32_t (default: static_cast<uint32_t>(0x63460090u))
inline void GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler::AllocateColorMapData(uint32_t size) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, size);
}
inline void GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler::DeallocateColorMapData() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler::__OVRPassthroughLayer__MonoToRgbaStyleHandler() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler.get_MapSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler::*)()>(
    &::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler::get_MapSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2a130;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler::*)(
    ByRef<::System::Runtime::InteropServices::GCHandle>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2a29868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Runtime::InteropServices::GCHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler::*)(
    ::GlobalNamespace::__OVRPassthroughLayer__Settings)>(&::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler::Update)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2a2a138;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler::Update)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2a29a94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
inline uint32_t GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler::get_MapSize() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler*
GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler::New_ctor(ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler, ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler*>(colorMapDataHandler, colorMapData));
}
inline void GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler::_ctor(ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler,
                                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Runtime::InteropServices::GCHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colorMapDataHandler, colorMapData);
}
inline void GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler::Update(::GlobalNamespace::__OVRPassthroughLayer__Settings settings) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings);
}
inline void GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler::Update(::ArrayW<uint8_t, ::Array<uint8_t>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler::__OVRPassthroughLayer__MonoToMonoStyleHandler() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler.get_MapSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler::*)()>(
    &::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler::get_MapSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2a170;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler::*)(
    ByRef<::System::Runtime::InteropServices::GCHandle>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2a298c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Runtime::InteropServices::GCHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler::*)(
    ::GlobalNamespace::__OVRPassthroughLayer__Settings)>(&::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler::Update)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2a2a178;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler*>::get(), 9));
    return ___internal_method;
  }
};
inline uint32_t GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler::get_MapSize() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler*
GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler::New_ctor(ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler, ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler*>(colorMapDataHandler, colorMapData));
}
inline void GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler::_ctor(ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler, ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Runtime::InteropServices::GCHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colorMapDataHandler, colorMapData);
}
inline void GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler::Update(::GlobalNamespace::__OVRPassthroughLayer__Settings settings) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler::__OVRPassthroughLayer__BCSStyleHandler() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler.get_Lut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPassthroughColorLut* (::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::*)()>(
    &::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::get_Lut)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2a1f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler*>::get(), "get_Lut",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler.set_Lut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::*)(::GlobalNamespace::OVRPassthroughColorLut*)>(
    &::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::set_Lut)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2a1f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler*>::get(), "set_Lut", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler.get_Weight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::*)()>(
    &::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::get_Weight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2a200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler*>::get(), "get_Weight",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler.set_Weight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::*)(float_t)>(
    &::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::set_Weight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2a208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler*>::get(), "set_Weight",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler.get_IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::*)()>(
    &::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::get_IsValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2a210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler*>::get(), "get_IsValid",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler.set_IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::*)(bool)>(
    &::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::set_IsValid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a2a218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler*>::get(), "set_IsValid",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler.ApplyStyleSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::*)(
    ByRef<::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle2>)>(&::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::ApplyStyleSettings)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a2a224;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::*)(
    ::GlobalNamespace::__OVRPassthroughLayer__Settings)>(&::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::Update)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2a2a24c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler.GetColorLutForTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPassthroughColorLut* (
    ::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::*)(::UnityEngine::Texture2D*, ::GlobalNamespace::OVRPassthroughColorLut*, ByRef<::UnityEngine::Texture2D*>, bool)>(
    &::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::GetColorLutForTexture)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2a2a2a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler*>::get(), "GetColorLutForTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Texture2D*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::*)(
    ::GlobalNamespace::OVRPassthroughColorLut*, float_t)>(&::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::Update)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a299d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::*)()>(
    &::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::Clear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2a400;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::*)()>(
    &::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a29858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler"
constexpr GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::operator ::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler*() noexcept {
  return static_cast<::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler"
constexpr ::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler* GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::i___GlobalNamespace____OVRPassthroughLayer__IStyleHandler() noexcept {
  return static_cast<::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler*>(static_cast<void*>(this));
}
constexpr bool& GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::__cordl_internal_get__currentFlipLutY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentFlipLutY;
}
constexpr bool const& GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::__cordl_internal_get__currentFlipLutY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentFlipLutY;
}
constexpr void GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::__cordl_internal_set__currentFlipLutY(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentFlipLutY = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::__cordl_internal_get__currentColorLutSourceTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentColorLutSourceTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::__cordl_internal_get__currentColorLutSourceTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentColorLutSourceTexture;
}
constexpr void GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::__cordl_internal_set__currentColorLutSourceTexture(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentColorLutSourceTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRPassthroughColorLut*& GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::__cordl_internal_get__Lut_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Lut_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRPassthroughColorLut*> const&
GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::__cordl_internal_get__Lut_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Lut_k__BackingField;
}
constexpr void GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::__cordl_internal_set__Lut_k__BackingField(::GlobalNamespace::OVRPassthroughColorLut* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Lut_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::__cordl_internal_get__Weight_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Weight_k__BackingField;
}
constexpr float_t const& GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::__cordl_internal_get__Weight_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Weight_k__BackingField;
}
constexpr void GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::__cordl_internal_set__Weight_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Weight_k__BackingField = value;
}
constexpr bool& GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::__cordl_internal_get__IsValid_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsValid_k__BackingField;
}
constexpr bool const& GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::__cordl_internal_get__IsValid_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsValid_k__BackingField;
}
constexpr void GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::__cordl_internal_set__IsValid_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsValid_k__BackingField = value;
}
inline ::GlobalNamespace::OVRPassthroughColorLut* GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::get_Lut() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler*>::get(),
                                                                             "get_Lut", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPassthroughColorLut*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::set_Lut(::GlobalNamespace::OVRPassthroughColorLut* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler*>::get(), "set_Lut", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::get_Weight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler*>::get(),
                                                                             "get_Weight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::set_Weight(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler*>::get(), "set_Weight",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::get_IsValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler*>::get(),
                                                                             "get_IsValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::set_IsValid(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler*>::get(), "set_IsValid",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::ApplyStyleSettings(ByRef<::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle2> style) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, style);
}
inline void GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::Update(::GlobalNamespace::__OVRPassthroughLayer__Settings settings) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings);
}
inline ::GlobalNamespace::OVRPassthroughColorLut* GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::GetColorLutForTexture(::UnityEngine::Texture2D* newTexture,
                                                                                                                                 ::GlobalNamespace::OVRPassthroughColorLut* lut,
                                                                                                                                 ByRef<::UnityEngine::Texture2D*> lastTexture, bool flipY) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler*>::get(), "GetColorLutForTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Texture2D*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPassthroughColorLut*, false>(this, ___internal_method, newTexture, lut, lastTexture, flipY);
}
inline void GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::Update(::GlobalNamespace::OVRPassthroughColorLut* lut, float_t weight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lut, weight);
}
inline void GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::Clear() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler* GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler*>());
}
inline void GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler::__OVRPassthroughLayer__ColorLutHandler() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler.get_LutTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPassthroughColorLut* (
    ::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler::*)()>(&::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler::get_LutTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2a408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler*>::get(), "get_LutTarget",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler.set_LutTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler::*)(
    ::GlobalNamespace::OVRPassthroughColorLut*)>(&::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler::set_LutTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2a410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler*>::get(), "set_LutTarget",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler.ApplyStyleSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler::*)(
    ByRef<::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle2>)>(&::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler::ApplyStyleSettings)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2a2a418;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler::*)(
    ::GlobalNamespace::__OVRPassthroughLayer__Settings)>(&::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler::Update)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2a2a450;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler::*)(
    ::GlobalNamespace::OVRPassthroughColorLut*, ::GlobalNamespace::OVRPassthroughColorLut*, float_t)>(&::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler::Update)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a299f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler::*)()>(
    &::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler::Clear)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a2a4cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler::*)()>(
    &::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a29860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler::__cordl_internal_get__currentColorLutTargetTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentColorLutTargetTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler::__cordl_internal_get__currentColorLutTargetTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentColorLutTargetTexture;
}
constexpr void GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler::__cordl_internal_set__currentColorLutTargetTexture(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentColorLutTargetTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRPassthroughColorLut*& GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler::__cordl_internal_get__LutTarget_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LutTarget_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRPassthroughColorLut*> const&
GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler::__cordl_internal_get__LutTarget_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LutTarget_k__BackingField;
}
constexpr void GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler::__cordl_internal_set__LutTarget_k__BackingField(::GlobalNamespace::OVRPassthroughColorLut* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____LutTarget_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::OVRPassthroughColorLut* GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler::get_LutTarget() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler*>::get(), "get_LutTarget",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPassthroughColorLut*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler::set_LutTarget(::GlobalNamespace::OVRPassthroughColorLut* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler*>::get(), "set_LutTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler::ApplyStyleSettings(ByRef<::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle2> style) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, style);
}
inline void GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler::Update(::GlobalNamespace::__OVRPassthroughLayer__Settings settings) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings);
}
inline void GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler::Update(::GlobalNamespace::OVRPassthroughColorLut* lutSource, ::GlobalNamespace::OVRPassthroughColorLut* lutTarget,
                                                                                        float_t weight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lutSource, lutTarget, weight);
}
inline void GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler::Clear() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler* GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler*>());
}
inline void GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler::__OVRPassthroughLayer__InterpolatedColorLutHandler() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0::*)()>(
    &::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a262f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0._RemoveSurfaceGeometry_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0::*)(
    ::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition)>(&::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0::_RemoveSurfaceGeometry_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2a2a4d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0*>::get(), "<RemoveSurfaceGeometry>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0::__cordl_internal_get_obj() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0::__cordl_internal_get_obj() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj;
}
constexpr void GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0::__cordl_internal_set_obj(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___obj)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0* GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0*>());
}
inline void GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0::_RemoveSurfaceGeometry_b__0(::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0*>::get(), "<RemoveSurfaceGeometry>b__0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0::__OVRPassthroughLayer____c__DisplayClass9_0() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0::*)()>(
    &::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a265ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0._IsSurfaceGeometry_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0::*)(
    ::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition)>(&::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0::_IsSurfaceGeometry_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2a2a544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0*>::get(), "<IsSurfaceGeometry>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0::__cordl_internal_get_obj() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0::__cordl_internal_get_obj() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj;
}
constexpr void GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0::__cordl_internal_set_obj(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___obj)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0* GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0*>());
}
inline void GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0::_IsSurfaceGeometry_b__0(::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0*>::get(), "<IsSurfaceGeometry>b__0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0::__OVRPassthroughLayer____c__DisplayClass10_0() {}
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.AddSurfaceGeometry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(::UnityEngine::GameObject*, bool)>(
    &::GlobalNamespace::OVRPassthroughLayer::AddSurfaceGeometry)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x2a25ef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "AddSurfaceGeometry", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.RemoveSurfaceGeometry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(::UnityEngine::GameObject*)>(
    &::GlobalNamespace::OVRPassthroughLayer::RemoveSurfaceGeometry)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x2a260e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "RemoveSurfaceGeometry", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.IsSurfaceGeometry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRPassthroughLayer::*)(::UnityEngine::GameObject*)>(
    &::GlobalNamespace::OVRPassthroughLayer::IsSurfaceGeometry)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2a26490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "IsSurfaceGeometry", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.get_textureOpacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::get_textureOpacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a265b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                               "get_textureOpacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.set_textureOpacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(float_t)>(
    &::GlobalNamespace::OVRPassthroughLayer::set_textureOpacity)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a265bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "set_textureOpacity",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.get_edgeRenderingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRPassthroughLayer::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer::get_edgeRenderingEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a265d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                               "get_edgeRenderingEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.set_edgeRenderingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(bool)>(
    &::GlobalNamespace::OVRPassthroughLayer::set_edgeRenderingEnabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a265e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "set_edgeRenderingEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.get_edgeColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::OVRPassthroughLayer::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer::get_edgeColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a26600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "get_edgeColor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.set_edgeColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::OVRPassthroughLayer::set_edgeColor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a2660c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "set_edgeColor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.SetColorMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>)>(
    &::GlobalNamespace::OVRPassthroughLayer::SetColorMap)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2a26664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "SetColorMap", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.SetColorLut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(::GlobalNamespace::OVRPassthroughColorLut*, float_t)>(
    &::GlobalNamespace::OVRPassthroughLayer::SetColorLut)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2a26810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "SetColorLut", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.SetColorLut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(
    ::GlobalNamespace::OVRPassthroughColorLut*, ::GlobalNamespace::OVRPassthroughColorLut*, float_t)>(&::GlobalNamespace::OVRPassthroughLayer::SetColorLut)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2a26a00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "SetColorLut", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.SetColorMapControls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(
    float_t, float_t, float_t, ::UnityEngine::Gradient*, ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType)>(&::GlobalNamespace::OVRPassthroughLayer::SetColorMapControls)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2a26b80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "SetColorMapControls", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Gradient*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.SetColorMapMonochromatic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::GlobalNamespace::OVRPassthroughLayer::SetColorMapMonochromatic)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2a26ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "SetColorMapMonochromatic", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.SetBrightnessContrastSaturation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(float_t, float_t, float_t)>(
    &::GlobalNamespace::OVRPassthroughLayer::SetBrightnessContrastSaturation)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2a26fe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "SetBrightnessContrastSaturation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.DisableColorMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::DisableColorMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a272bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                               "DisableColorMap", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.get_colorMapEditorType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType (::GlobalNamespace::OVRPassthroughLayer::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer::get_colorMapEditorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a272c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                               "get_colorMapEditorType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.set_colorMapEditorType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType)>(
    &::GlobalNamespace::OVRPassthroughLayer::set_colorMapEditorType)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2a26704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "set_colorMapEditorType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.SetStyleDirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::SetStyleDirty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a27390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "SetStyleDirty",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.AddDeferredSurfaceGeometries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer::AddDeferredSurfaceGeometries)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x2a2739c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                               "AddDeferredSurfaceGeometries", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.GetTransformMatrixForPassthroughSurfaceObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (::GlobalNamespace::OVRPassthroughLayer::*)(::UnityEngine::Matrix4x4)>(
    &::GlobalNamespace::OVRPassthroughLayer::GetTransformMatrixForPassthroughSurfaceObject)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x2a278a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "GetTransformMatrixForPassthroughSurfaceObject",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.CreateAndAddMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRPassthroughLayer::*)(
    ::UnityEngine::GameObject*, ByRef<uint64_t>, ByRef<uint64_t>, ByRef<::UnityEngine::Matrix4x4>)>(&::GlobalNamespace::OVRPassthroughLayer::CreateAndAddMesh)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x2a275f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "CreateAndAddMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.DestroySurfaceGeometries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(bool)>(
    &::GlobalNamespace::OVRPassthroughLayer::DestroySurfaceGeometries)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x2a27ec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "DestroySurfaceGeometries",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.UpdateSurfaceGeometryTransforms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer::UpdateSurfaceGeometryTransforms)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x2a28144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "UpdateSurfaceGeometryTransforms",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.UpdateSurfaceGeometryTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(uint64_t, ::UnityEngine::Matrix4x4)>(
    &::GlobalNamespace::OVRPassthroughLayer::UpdateSurfaceGeometryTransform)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2a28460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "UpdateSurfaceGeometryTransform", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.CreateNeutralColorMapGradient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Gradient* (*)()>(&::GlobalNamespace::OVRPassthroughLayer::CreateNeutralColorMapGradient)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x2a26d10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                               "CreateNeutralColorMapGradient", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.HasControlsBasedColorMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRPassthroughLayer::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer::HasControlsBasedColorMap)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2a28720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                               "HasControlsBasedColorMap", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.UpdateColorMapFromControls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(bool)>(
    &::GlobalNamespace::OVRPassthroughLayer::UpdateColorMapFromControls)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x2a2702c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "UpdateColorMapFromControls",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.SyncToOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::SyncToOverlay)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x2a28750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "SyncToOverlay",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.ClampWeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t)>(&::GlobalNamespace::OVRPassthroughLayer::ClampWeight)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2a2690c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "ClampWeight", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.get_overlayShape
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVROverlay__OverlayShape (::GlobalNamespace::OVRPassthroughLayer::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer::get_overlayShape)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2a289c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                               "get_overlayShape", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::Awake)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x2a289d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a28c00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::LateUpdate)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2a28c04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "LateUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.CreateOvrPluginStyleObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle2 (::GlobalNamespace::OVRPassthroughLayer::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer::CreateOvrPluginStyleObject)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2a28d74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                               "CreateOvrPluginStyleObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::OnEnable)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2a290dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::OnDisable)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2a29268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::OnDestroy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a29338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::_ctor)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x2a29340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_projectionSurfaceType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___projectionSurfaceType;
}
constexpr ::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType const& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_projectionSurfaceType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___projectionSurfaceType;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set_projectionSurfaceType(::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___projectionSurfaceType = value;
}
constexpr ::GlobalNamespace::__OVROverlay__OverlayType& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_overlayType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overlayType;
}
constexpr ::GlobalNamespace::__OVROverlay__OverlayType const& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_overlayType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overlayType;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set_overlayType(::GlobalNamespace::__OVROverlay__OverlayType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overlayType = value;
}
constexpr int32_t& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_compositionDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compositionDepth;
}
constexpr int32_t const& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_compositionDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compositionDepth;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set_compositionDepth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___compositionDepth = value;
}
constexpr bool& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_hidden() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hidden;
}
constexpr bool const& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_hidden() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hidden;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set_hidden(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hidden = value;
}
constexpr bool& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_overridePerLayerColorScaleAndOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overridePerLayerColorScaleAndOffset;
}
constexpr bool const& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_overridePerLayerColorScaleAndOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overridePerLayerColorScaleAndOffset;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set_overridePerLayerColorScaleAndOffset(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overridePerLayerColorScaleAndOffset = value;
}
constexpr ::UnityEngine::Vector4& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_colorScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorScale;
}
constexpr ::UnityEngine::Vector4 const& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_colorScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorScale;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set_colorScale(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorScale = value;
}
constexpr ::UnityEngine::Vector4& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_colorOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorOffset;
}
constexpr ::UnityEngine::Vector4 const& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_colorOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorOffset;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set_colorOffset(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorOffset = value;
}
constexpr ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_colorMapEditorType_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapEditorType_;
}
constexpr ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType const& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_colorMapEditorType_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapEditorType_;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set_colorMapEditorType_(::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorMapEditorType_ = value;
}
constexpr ::UnityEngine::Gradient*& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_colorMapEditorGradient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapEditorGradient;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Gradient*> const& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_colorMapEditorGradient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapEditorGradient;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set_colorMapEditorGradient(::UnityEngine::Gradient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___colorMapEditorGradient)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_colorMapEditorContrast() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapEditorContrast;
}
constexpr float_t const& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_colorMapEditorContrast() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapEditorContrast;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set_colorMapEditorContrast(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorMapEditorContrast = value;
}
constexpr float_t& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_colorMapEditorBrightness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapEditorBrightness;
}
constexpr float_t const& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_colorMapEditorBrightness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapEditorBrightness;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set_colorMapEditorBrightness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorMapEditorBrightness = value;
}
constexpr float_t& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_colorMapEditorPosterize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapEditorPosterize;
}
constexpr float_t const& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_colorMapEditorPosterize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapEditorPosterize;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set_colorMapEditorPosterize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorMapEditorPosterize = value;
}
constexpr float_t& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_colorMapEditorSaturation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapEditorSaturation;
}
constexpr float_t const& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_colorMapEditorSaturation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapEditorSaturation;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set_colorMapEditorSaturation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorMapEditorSaturation = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get__colorLutSourceTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorLutSourceTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get__colorLutSourceTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorLutSourceTexture;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set__colorLutSourceTexture(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorLutSourceTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get__colorLutTargetTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorLutTargetTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get__colorLutTargetTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorLutTargetTexture;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set__colorLutTargetTexture(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorLutTargetTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get__lutWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lutWeight;
}
constexpr float_t const& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get__lutWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lutWeight;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set__lutWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lutWeight = value;
}
constexpr bool& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get__flipLutY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flipLutY;
}
constexpr bool const& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get__flipLutY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flipLutY;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set__flipLutY(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flipLutY = value;
}
constexpr ::GlobalNamespace::__OVRPassthroughLayer__Settings& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get__settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settings;
}
constexpr ::GlobalNamespace::__OVRPassthroughLayer__Settings const& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get__settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settings;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set__settings(::GlobalNamespace::__OVRPassthroughLayer__Settings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settings = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_cameraRig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraRig;
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_cameraRig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraRig;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set_cameraRig(::UnityW<::GlobalNamespace::OVRCameraRig> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cameraRig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_cameraRigInitialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraRigInitialized;
}
constexpr bool const& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_cameraRigInitialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraRigInitialized;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set_cameraRigInitialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraRigInitialized = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_auxGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___auxGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_auxGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___auxGameObject;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set_auxGameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___auxGameObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OVROverlay>& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_passthroughOverlay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passthroughOverlay;
}
constexpr ::UnityW<::GlobalNamespace::OVROverlay> const& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_passthroughOverlay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passthroughOverlay;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set_passthroughOverlay(::UnityW<::GlobalNamespace::OVROverlay> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___passthroughOverlay)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>*&
GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_surfaceGameObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___surfaceGameObjects;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>*> const&
GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_surfaceGameObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___surfaceGameObjects;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set_surfaceGameObjects(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___surfaceGameObjects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition>*&
GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_deferredSurfaceGameObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deferredSurfaceGameObjects;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition>*> const&
GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_deferredSurfaceGameObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deferredSurfaceGameObjects;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set_deferredSurfaceGameObjects(
    ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___deferredSurfaceGameObjects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__SerializedSurfaceGeometry>*&
GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_serializedSurfaceGeometry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedSurfaceGeometry;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__SerializedSurfaceGeometry>*> const&
GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_serializedSurfaceGeometry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedSurfaceGeometry;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set_serializedSurfaceGeometry(
    ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__SerializedSurfaceGeometry>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serializedSurfaceGeometry)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_textureOpacity_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textureOpacity_;
}
constexpr float_t const& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_textureOpacity_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textureOpacity_;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set_textureOpacity_(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textureOpacity_ = value;
}
constexpr bool& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_edgeRenderingEnabled_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___edgeRenderingEnabled_;
}
constexpr bool const& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_edgeRenderingEnabled_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___edgeRenderingEnabled_;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set_edgeRenderingEnabled_(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___edgeRenderingEnabled_ = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_edgeColor_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___edgeColor_;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_edgeColor_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___edgeColor_;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set_edgeColor_(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___edgeColor_ = value;
}
constexpr ::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_colorMapType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapType;
}
constexpr ::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType const& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_colorMapType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapType;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set_colorMapType(::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorMapType = value;
}
constexpr bool& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_styleDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___styleDirty;
}
constexpr bool const& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_styleDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___styleDirty;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set_styleDirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___styleDirty = value;
}
constexpr ::GlobalNamespace::__OVRPassthroughLayer__StylesHandler*& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get__stylesHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stylesHandler;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRPassthroughLayer__StylesHandler*> const& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get__stylesHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stylesHandler;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set__stylesHandler(::GlobalNamespace::__OVRPassthroughLayer__StylesHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stylesHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OVRPassthroughLayer::setStaticF__editorToColorMapType(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType, ::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType>* value) {
  ::cordl_internals::setStaticField<
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType, ::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType>*,
      "_editorToColorMapType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType, ::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType, ::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType>*
GlobalNamespace::OVRPassthroughLayer::getStaticF__editorToColorMapType() {
  return ::cordl_internals::getStaticField<
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType, ::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType>*,
      "_editorToColorMapType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get>();
}
inline void GlobalNamespace::OVRPassthroughLayer::setStaticF_colorMapNeutralGradient(::UnityEngine::Gradient* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Gradient*, "colorMapNeutralGradient", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get>(
      std::forward<::UnityEngine::Gradient*>(value));
}
inline ::UnityEngine::Gradient* GlobalNamespace::OVRPassthroughLayer::getStaticF_colorMapNeutralGradient() {
  return ::cordl_internals::getStaticField<::UnityEngine::Gradient*, "colorMapNeutralGradient", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get>();
}
/// @param updateTransform: bool (default: false)
inline void GlobalNamespace::OVRPassthroughLayer::AddSurfaceGeometry(::UnityEngine::GameObject* obj, bool updateTransform) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "AddSurfaceGeometry", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, updateTransform);
}
inline void GlobalNamespace::OVRPassthroughLayer::RemoveSurfaceGeometry(::UnityEngine::GameObject* obj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "RemoveSurfaceGeometry", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline bool GlobalNamespace::OVRPassthroughLayer::IsSurfaceGeometry(::UnityEngine::GameObject* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "IsSurfaceGeometry", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline float_t GlobalNamespace::OVRPassthroughLayer::get_textureOpacity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                             "get_textureOpacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::set_textureOpacity(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "set_textureOpacity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRPassthroughLayer::get_edgeRenderingEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                             "get_edgeRenderingEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::set_edgeRenderingEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "set_edgeRenderingEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Color GlobalNamespace::OVRPassthroughLayer::get_edgeColor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "get_edgeColor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::set_edgeColor(::UnityEngine::Color value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "set_edgeColor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRPassthroughLayer::SetColorMap(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> values) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "SetColorMap", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
/// @param weight: float_t (default: 1.0)
inline void GlobalNamespace::OVRPassthroughLayer::SetColorLut(::GlobalNamespace::OVRPassthroughColorLut* lut, float_t weight) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "SetColorLut", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lut, weight);
}
inline void GlobalNamespace::OVRPassthroughLayer::SetColorLut(::GlobalNamespace::OVRPassthroughColorLut* lutSource, ::GlobalNamespace::OVRPassthroughColorLut* lutTarget, float_t weight) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "SetColorLut", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lutSource, lutTarget, weight);
}
/// @param brightness: float_t (default: 0.0)
/// @param posterize: float_t (default: 0.0)
/// @param gradient: ::UnityEngine::Gradient* (default: nullptr)
/// @param colorMapType: ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType (default: static_cast<int32_t>(0x1))
inline void GlobalNamespace::OVRPassthroughLayer::SetColorMapControls(float_t contrast, float_t brightness, float_t posterize, ::UnityEngine::Gradient* gradient,
                                                                      ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType colorMapType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "SetColorMapControls", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Gradient*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, contrast, brightness, posterize, gradient, colorMapType);
}
inline void GlobalNamespace::OVRPassthroughLayer::SetColorMapMonochromatic(::ArrayW<uint8_t, ::Array<uint8_t>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "SetColorMapMonochromatic", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
/// @param brightness: float_t (default: 0.0)
/// @param contrast: float_t (default: 0.0)
/// @param saturation: float_t (default: 0.0)
inline void GlobalNamespace::OVRPassthroughLayer::SetBrightnessContrastSaturation(float_t brightness, float_t contrast, float_t saturation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "SetBrightnessContrastSaturation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, brightness, contrast, saturation);
}
inline void GlobalNamespace::OVRPassthroughLayer::DisableColorMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "DisableColorMap",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType GlobalNamespace::OVRPassthroughLayer::get_colorMapEditorType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                             "get_colorMapEditorType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::set_colorMapEditorType(::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "set_colorMapEditorType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRPassthroughLayer::SetStyleDirty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "SetStyleDirty",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::AddDeferredSurfaceGeometries() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                             "AddDeferredSurfaceGeometries", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 GlobalNamespace::OVRPassthroughLayer::GetTransformMatrixForPassthroughSurfaceObject(::UnityEngine::Matrix4x4 worldFromObj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "GetTransformMatrixForPassthroughSurfaceObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(this, ___internal_method, worldFromObj);
}
inline bool GlobalNamespace::OVRPassthroughLayer::CreateAndAddMesh(::UnityEngine::GameObject* obj, ByRef<uint64_t> meshHandle, ByRef<uint64_t> instanceHandle,
                                                                   ByRef<::UnityEngine::Matrix4x4> localToWorld) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "CreateAndAddMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj, meshHandle, instanceHandle, localToWorld);
}
/// @param addBackToDeferredQueue: bool (default: false)
inline void GlobalNamespace::OVRPassthroughLayer::DestroySurfaceGeometries(bool addBackToDeferredQueue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "DestroySurfaceGeometries",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, addBackToDeferredQueue);
}
inline void GlobalNamespace::OVRPassthroughLayer::UpdateSurfaceGeometryTransforms() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                             "UpdateSurfaceGeometryTransforms", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::UpdateSurfaceGeometryTransform(uint64_t instanceHandle, ::UnityEngine::Matrix4x4 localToWorld) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "UpdateSurfaceGeometryTransform", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instanceHandle, localToWorld);
}
inline ::UnityEngine::Gradient* GlobalNamespace::OVRPassthroughLayer::CreateNeutralColorMapGradient() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                             "CreateNeutralColorMapGradient", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Gradient*, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRPassthroughLayer::HasControlsBasedColorMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                             "HasControlsBasedColorMap", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
/// @param forceUpdate: bool (default: false)
inline void GlobalNamespace::OVRPassthroughLayer::UpdateColorMapFromControls(bool forceUpdate) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "UpdateColorMapFromControls",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, forceUpdate);
}
inline void GlobalNamespace::OVRPassthroughLayer::SyncToOverlay() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "SyncToOverlay",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::OVRPassthroughLayer::ClampWeight(float_t weight) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "ClampWeight",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, weight);
}
inline ::GlobalNamespace::__OVROverlay__OverlayShape GlobalNamespace::OVRPassthroughLayer::get_overlayShape() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "get_overlayShape",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVROverlay__OverlayShape, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "LateUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle2 GlobalNamespace::OVRPassthroughLayer::CreateOvrPluginStyleObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                             "CreateOvrPluginStyleObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle2, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRPassthroughLayer* GlobalNamespace::OVRPassthroughLayer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRPassthroughLayer*>());
}
inline void GlobalNamespace::OVRPassthroughLayer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPassthroughLayer::OVRPassthroughLayer() {}
