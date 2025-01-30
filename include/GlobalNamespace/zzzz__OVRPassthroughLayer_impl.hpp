#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPassthroughLayer.hpp"
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
constexpr ::GlobalNamespace::OVRPassthroughLayer_ProjectionSurfaceType::OVRPassthroughLayer_ProjectionSurfaceType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPassthroughLayer_ProjectionSurfaceType::OVRPassthroughLayer_ProjectionSurfaceType() {}
constexpr ::GlobalNamespace::OVRPassthroughLayer_ProjectionSurfaceType GlobalNamespace::OVRPassthroughLayer_ProjectionSurfaceType::Reconstructed{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRPassthroughLayer_ProjectionSurfaceType GlobalNamespace::OVRPassthroughLayer_ProjectionSurfaceType::UserDefined{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType::OVRPassthroughLayer_ColorMapEditorType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType::OVRPassthroughLayer_ColorMapEditorType() {}
constexpr ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType::GrayscaleToColor{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType::Controls{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType::Custom{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType::Grayscale{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType::ColorAdjustment{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType::ColorLut{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType::InterpolatedColorLut{ static_cast<int32_t>(0x6) };
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_Settings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_Settings::*)(
    ::UnityEngine::Texture2D*, ::UnityEngine::Texture2D*, float_t, float_t, float_t, float_t, ::UnityEngine::Gradient*, float_t, bool)>(&::GlobalNamespace::OVRPassthroughLayer_Settings::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3fdc9dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_Settings>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 9>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Gradient*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRPassthroughLayer_Settings::_ctor(::UnityEngine::Texture2D* colorLutTargetTexture, ::UnityEngine::Texture2D* colorLutSourceTexture, float_t saturation,
                                                                 float_t posterize, float_t brightness, float_t contrast, ::UnityEngine::Gradient* gradient, float_t lutWeight, bool flipLutY) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_Settings>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 9>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Gradient*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colorLutTargetTexture, colorLutSourceTexture, saturation, posterize, brightness, contrast, gradient, lutWeight,
                                                          flipLutY);
}
// Ctor Parameters [CppParam { name: "colorLutTargetTexture", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: Some("{}") }, CppParam { name: "colorLutSourceTexture", ty:
// "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: Some("{}") }, CppParam { name: "saturation", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "posterize", ty:
// "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "brightness", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "contrast", ty: "float_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "gradient", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "lutWeight", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "flipLutY", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRPassthroughLayer_Settings::OVRPassthroughLayer_Settings(::UnityW<::UnityEngine::Texture2D> colorLutTargetTexture,
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
constexpr ::GlobalNamespace::OVRPassthroughLayer_Settings::OVRPassthroughLayer_Settings() {}
// Ctor Parameters [CppParam { name: "meshHandle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceHandle", ty: "uint64_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "updateTransform", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "localToWorld", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRPassthroughLayer_PassthroughMeshInstance::OVRPassthroughLayer_PassthroughMeshInstance(uint64_t meshHandle, uint64_t instanceHandle, bool updateTransform,
                                                                                                                      ::UnityEngine::Matrix4x4 localToWorld) noexcept {
  this->meshHandle = meshHandle;
  this->instanceHandle = instanceHandle;
  this->updateTransform = updateTransform;
  this->localToWorld = localToWorld;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPassthroughLayer_PassthroughMeshInstance::OVRPassthroughLayer_PassthroughMeshInstance() {}
// Ctor Parameters [CppParam { name: "meshFilter", ty: "::UnityW<::UnityEngine::MeshFilter>", modifiers: "", def_value: Some("{}") }, CppParam { name: "updateTransform", ty: "bool", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRPassthroughLayer_SerializedSurfaceGeometry::OVRPassthroughLayer_SerializedSurfaceGeometry(::UnityW<::UnityEngine::MeshFilter> meshFilter,
                                                                                                                          bool updateTransform) noexcept {
  this->meshFilter = meshFilter;
  this->updateTransform = updateTransform;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPassthroughLayer_SerializedSurfaceGeometry::OVRPassthroughLayer_SerializedSurfaceGeometry() {}
// Ctor Parameters [CppParam { name: "gameObject", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}") }, CppParam { name: "updateTransform", ty: "bool", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition::OVRPassthroughLayer_DeferredPassthroughMeshAddition(::UnityW<::UnityEngine::GameObject> gameObject,
                                                                                                                                      bool updateTransform) noexcept {
  this->gameObject = gameObject;
  this->updateTransform = updateTransform;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition::OVRPassthroughLayer_DeferredPassthroughMeshAddition() {}
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_IStyleHandler.ApplyStyleSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_IStyleHandler::*)(
    ::ByRef<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2>)>(&::GlobalNamespace::OVRPassthroughLayer_IStyleHandler::ApplyStyleSettings)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_IStyleHandler.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_IStyleHandler::*)(::GlobalNamespace::OVRPassthroughLayer_Settings)>(
    &::GlobalNamespace::OVRPassthroughLayer_IStyleHandler::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_IStyleHandler.get_IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRPassthroughLayer_IStyleHandler::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer_IStyleHandler::get_IsValid)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_IStyleHandler.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_IStyleHandler::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer_IStyleHandler::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*>::get(), 3));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRPassthroughLayer_IStyleHandler::ApplyStyleSettings(::ByRef<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2> style) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, style);
}
inline void GlobalNamespace::OVRPassthroughLayer_IStyleHandler::Update(::GlobalNamespace::OVRPassthroughLayer_Settings settings) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings);
}
inline bool GlobalNamespace::OVRPassthroughLayer_IStyleHandler::get_IsValid() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer_IStyleHandler::Clear() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_StylesHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_StylesHandler::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer_StylesHandler::_ctor)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x3fdc9fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_StylesHandler*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_StylesHandler.SetStyleHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_StylesHandler::*)(
    ::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType)>(&::GlobalNamespace::OVRPassthroughLayer_StylesHandler::SetStyleHandler)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3fda7d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_StylesHandler*>::get(), "SetStyleHandler", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_StylesHandler.GetStyleHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPassthroughLayer_IStyleHandler* (
    ::GlobalNamespace::OVRPassthroughLayer_StylesHandler::*)(::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType)>(&::GlobalNamespace::OVRPassthroughLayer_StylesHandler::GetStyleHandler)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3fdcd48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_StylesHandler*>::get(), "GetStyleHandler", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_StylesHandler.SetColorLutHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_StylesHandler::*)(::GlobalNamespace::OVRPassthroughColorLut*, float_t)>(
    &::GlobalNamespace::OVRPassthroughLayer_StylesHandler::SetColorLutHandler)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3fd9e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_StylesHandler*>::get(), "SetColorLutHandler", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_StylesHandler.SetInterpolatedColorLutHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_StylesHandler::*)(
    ::GlobalNamespace::OVRPassthroughColorLut*, ::GlobalNamespace::OVRPassthroughColorLut*, float_t)>(&::GlobalNamespace::OVRPassthroughLayer_StylesHandler::SetInterpolatedColorLutHandler)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3fda004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_StylesHandler*>::get(), "SetInterpolatedColorLutHandler",
                                                 std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_StylesHandler.SetMonoToRgbaHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_StylesHandler::*)(
    ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>)>(&::GlobalNamespace::OVRPassthroughLayer_StylesHandler::SetMonoToRgbaHandler)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3fd9cc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_StylesHandler*>::get(), "SetMonoToRgbaHandler", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_StylesHandler.SetMonoToMonoHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_StylesHandler::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::GlobalNamespace::OVRPassthroughLayer_StylesHandler::SetMonoToMonoHandler)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3fda470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_StylesHandler*>::get(), "SetMonoToMonoHandler", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler*& GlobalNamespace::OVRPassthroughLayer_StylesHandler::__cordl_internal_get__noneHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noneHandler;
}
constexpr ::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler* const& GlobalNamespace::OVRPassthroughLayer_StylesHandler::__cordl_internal_get__noneHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noneHandler;
}
constexpr void GlobalNamespace::OVRPassthroughLayer_StylesHandler::__cordl_internal_set__noneHandler(::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noneHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*& GlobalNamespace::OVRPassthroughLayer_StylesHandler::__cordl_internal_get__lutHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lutHandler;
}
constexpr ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler* const& GlobalNamespace::OVRPassthroughLayer_StylesHandler::__cordl_internal_get__lutHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lutHandler;
}
constexpr void GlobalNamespace::OVRPassthroughLayer_StylesHandler::__cordl_internal_set__lutHandler(::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lutHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*& GlobalNamespace::OVRPassthroughLayer_StylesHandler::__cordl_internal_get__interpolatedLutHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____interpolatedLutHandler;
}
constexpr ::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler* const& GlobalNamespace::OVRPassthroughLayer_StylesHandler::__cordl_internal_get__interpolatedLutHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____interpolatedLutHandler;
}
constexpr void GlobalNamespace::OVRPassthroughLayer_StylesHandler::__cordl_internal_set__interpolatedLutHandler(::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____interpolatedLutHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*& GlobalNamespace::OVRPassthroughLayer_StylesHandler::__cordl_internal_get__monoToRgbaHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____monoToRgbaHandler;
}
constexpr ::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler* const& GlobalNamespace::OVRPassthroughLayer_StylesHandler::__cordl_internal_get__monoToRgbaHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____monoToRgbaHandler;
}
constexpr void GlobalNamespace::OVRPassthroughLayer_StylesHandler::__cordl_internal_set__monoToRgbaHandler(::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____monoToRgbaHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler*& GlobalNamespace::OVRPassthroughLayer_StylesHandler::__cordl_internal_get__monoToMonoHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____monoToMonoHandler;
}
constexpr ::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler* const& GlobalNamespace::OVRPassthroughLayer_StylesHandler::__cordl_internal_get__monoToMonoHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____monoToMonoHandler;
}
constexpr void GlobalNamespace::OVRPassthroughLayer_StylesHandler::__cordl_internal_set__monoToMonoHandler(::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____monoToMonoHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler*& GlobalNamespace::OVRPassthroughLayer_StylesHandler::__cordl_internal_get__bcsHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bcsHandler;
}
constexpr ::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler* const& GlobalNamespace::OVRPassthroughLayer_StylesHandler::__cordl_internal_get__bcsHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bcsHandler;
}
constexpr void GlobalNamespace::OVRPassthroughLayer_StylesHandler::__cordl_internal_set__bcsHandler(::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bcsHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::InteropServices::GCHandle& GlobalNamespace::OVRPassthroughLayer_StylesHandler::__cordl_internal_get__colorMapDataHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorMapDataHandle;
}
constexpr ::System::Runtime::InteropServices::GCHandle const& GlobalNamespace::OVRPassthroughLayer_StylesHandler::__cordl_internal_get__colorMapDataHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorMapDataHandle;
}
constexpr void GlobalNamespace::OVRPassthroughLayer_StylesHandler::__cordl_internal_set__colorMapDataHandle(::System::Runtime::InteropServices::GCHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorMapDataHandle = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::OVRPassthroughLayer_StylesHandler::__cordl_internal_get__colorMapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorMapData;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::OVRPassthroughLayer_StylesHandler::__cordl_internal_get__colorMapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorMapData;
}
constexpr void GlobalNamespace::OVRPassthroughLayer_StylesHandler::__cordl_internal_set__colorMapData(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorMapData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*& GlobalNamespace::OVRPassthroughLayer_StylesHandler::__cordl_internal_get_CurrentStyleHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CurrentStyleHandler;
}
constexpr ::GlobalNamespace::OVRPassthroughLayer_IStyleHandler* const& GlobalNamespace::OVRPassthroughLayer_StylesHandler::__cordl_internal_get_CurrentStyleHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CurrentStyleHandler;
}
constexpr void GlobalNamespace::OVRPassthroughLayer_StylesHandler::__cordl_internal_set_CurrentStyleHandler(::GlobalNamespace::OVRPassthroughLayer_IStyleHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CurrentStyleHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OVRPassthroughLayer_StylesHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_StylesHandler*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer_StylesHandler::SetStyleHandler(::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_StylesHandler*>::get(), "SetStyleHandler", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline ::GlobalNamespace::OVRPassthroughLayer_IStyleHandler* GlobalNamespace::OVRPassthroughLayer_StylesHandler::GetStyleHandler(::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_StylesHandler*>::get(), "GetStyleHandler", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*, false>(this, ___internal_method, type);
}
inline void GlobalNamespace::OVRPassthroughLayer_StylesHandler::SetColorLutHandler(::GlobalNamespace::OVRPassthroughColorLut* lut, float_t weight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_StylesHandler*>::get(), "SetColorLutHandler", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lut, weight);
}
inline void GlobalNamespace::OVRPassthroughLayer_StylesHandler::SetInterpolatedColorLutHandler(::GlobalNamespace::OVRPassthroughColorLut* lutSource,
                                                                                               ::GlobalNamespace::OVRPassthroughColorLut* lutTarget, float_t weight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_StylesHandler*>::get(), "SetInterpolatedColorLutHandler", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lutSource, lutTarget, weight);
}
inline void GlobalNamespace::OVRPassthroughLayer_StylesHandler::SetMonoToRgbaHandler(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_StylesHandler*>::get(), "SetMonoToRgbaHandler", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
inline void GlobalNamespace::OVRPassthroughLayer_StylesHandler::SetMonoToMonoHandler(::ArrayW<uint8_t, ::Array<uint8_t>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_StylesHandler*>::get(), "SetMonoToMonoHandler", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
inline ::GlobalNamespace::OVRPassthroughLayer_StylesHandler* GlobalNamespace::OVRPassthroughLayer_StylesHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRPassthroughLayer_StylesHandler*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPassthroughLayer_StylesHandler::OVRPassthroughLayer_StylesHandler() {}
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler.get_IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler::get_IsValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fdcf20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler*>::get(),
                                                                               "get_IsValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler.ApplyStyleSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler::*)(
    ::ByRef<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2>)>(&::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler::ApplyStyleSettings)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3fdcf28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler*>::get(), "ApplyStyleSettings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler::*)(::GlobalNamespace::OVRPassthroughLayer_Settings)>(
    &::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3fdcf2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughLayer_Settings>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler::Clear)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3fdcf30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler*>::get(),
                                                                               "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fdcca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler::get_IsValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler*>::get(),
                                                                             "get_IsValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler::ApplyStyleSettings(::ByRef<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2> style) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler*>::get(), "ApplyStyleSettings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, style);
}
inline void GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler::Update(::GlobalNamespace::OVRPassthroughLayer_Settings settings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughLayer_Settings>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings);
}
inline void GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler*>::get(),
                                                                             "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler* GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler*>());
}
/// @brief Convert operator to "::GlobalNamespace::OVRPassthroughLayer_IStyleHandler"
constexpr GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler::operator ::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*() noexcept {
  return static_cast<::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::OVRPassthroughLayer_IStyleHandler"
constexpr ::GlobalNamespace::OVRPassthroughLayer_IStyleHandler* GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler::i___GlobalNamespace__OVRPassthroughLayer_IStyleHandler() noexcept {
  return static_cast<::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler::OVRPassthroughLayer_NoneStyleHandler() {}
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler.get_MapSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::get_MapSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler.get_IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::get_IsValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fdcf34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>::get(), "get_IsValid",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::*)(
    ::ByRef<::System::Runtime::InteropServices::GCHandle>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3fdcf3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Runtime::InteropServices::GCHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::*)(
    ::GlobalNamespace::OVRPassthroughLayer_Settings)>(&::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3fdcf6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler.ApplyStyleSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::*)(
    ::ByRef<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2>)>(&::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::ApplyStyleSettings)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3fdcf70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::Clear)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3fdcfd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>::get(), "Clear",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler.AllocateColorMapData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::*)(uint32_t)>(
    &::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::AllocateColorMapData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3fdcfe4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler.DeallocateColorMapData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::DeallocateColorMapData)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3fdd074;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler.WriteColorToColorMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::*)(int32_t, ::ByRef<::UnityEngine::Color>)>(
    &::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::WriteColorToColorMap)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3fdd09c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>::get(),
                                                 "WriteColorToColorMap", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Color>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler.WriteFloatToColorMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::*)(int32_t, float_t)>(
    &::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::WriteFloatToColorMap)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3fdd108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>::get(), "WriteFloatToColorMap",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler.ComputeBrightnessContrastPosterizeMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, float_t, float_t, float_t)>(
    &::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::ComputeBrightnessContrastPosterizeMap)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x3fdd140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>::get(), "ComputeBrightnessContrastPosterizeMap",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::GCHandle& GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::__cordl_internal_get__colorMapDataHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorMapDataHandle;
}
constexpr ::System::Runtime::InteropServices::GCHandle const& GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::__cordl_internal_get__colorMapDataHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorMapDataHandle;
}
constexpr void GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::__cordl_internal_set__colorMapDataHandle(::System::Runtime::InteropServices::GCHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorMapDataHandle = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::__cordl_internal_get__colorMapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorMapData;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::__cordl_internal_get__colorMapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorMapData;
}
constexpr void GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::__cordl_internal_set__colorMapData(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorMapData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline uint32_t GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::get_MapSize() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::get_IsValid() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>::get(), "get_IsValid",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::_ctor(::ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler,
                                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Runtime::InteropServices::GCHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colorMapDataHandler, colorMapData);
}
inline void GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::Update(::GlobalNamespace::OVRPassthroughLayer_Settings settings) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings);
}
inline void GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::ApplyStyleSettings(::ByRef<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2> style) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, style);
}
inline void GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>::get(), "Clear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::AllocateColorMapData(uint32_t size) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, size);
}
inline void GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::DeallocateColorMapData() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::WriteColorToColorMap(int32_t colorIndex, ::ByRef<::UnityEngine::Color> color) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>::get(), "WriteColorToColorMap",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Color>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colorIndex, color);
}
inline void GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::WriteFloatToColorMap(int32_t index, float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>::get(), "WriteFloatToColorMap",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
inline void GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::ComputeBrightnessContrastPosterizeMap(::ArrayW<uint8_t, ::Array<uint8_t>*> result, float_t brightness, float_t contrast,
                                                                                                                  float_t posterize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>::get(), "ComputeBrightnessContrastPosterizeMap",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, result, brightness, contrast, posterize);
}
inline ::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*
GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::New_ctor(::ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler, ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>(colorMapDataHandler, colorMapData));
}
/// @brief Convert operator to "::GlobalNamespace::OVRPassthroughLayer_IStyleHandler"
constexpr GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::operator ::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*() noexcept {
  return static_cast<::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::OVRPassthroughLayer_IStyleHandler"
constexpr ::GlobalNamespace::OVRPassthroughLayer_IStyleHandler* GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::i___GlobalNamespace__OVRPassthroughLayer_IStyleHandler() noexcept {
  return static_cast<::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::OVRPassthroughLayer_BaseGeneratedStyleHandler() {}
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler.get_MapSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::get_MapSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fdd2c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::*)(
    ::ByRef<::System::Runtime::InteropServices::GCHandle>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3fdcce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Runtime::InteropServices::GCHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::*)(
    ::GlobalNamespace::OVRPassthroughLayer_Settings)>(&::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::Update)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3fdd2c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::*)(
    ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>)>(&::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::Update)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3fdce68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler.AllocateColorMapData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::*)(uint32_t)>(
    &::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::AllocateColorMapData)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3fdd384;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler.DeallocateColorMapData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::DeallocateColorMapData)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3fdd3ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*>::get(), 12));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::__cordl_internal_get__tmpColorMapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tmpColorMapData;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::__cordl_internal_get__tmpColorMapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tmpColorMapData;
}
constexpr void GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::__cordl_internal_set__tmpColorMapData(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tmpColorMapData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline uint32_t GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::get_MapSize() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::_ctor(::ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler,
                                                                               ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Runtime::InteropServices::GCHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colorMapDataHandler, colorMapData);
}
inline void GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::Update(::GlobalNamespace::OVRPassthroughLayer_Settings settings) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings);
}
inline void GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::Update(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
inline void GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::AllocateColorMapData(uint32_t size) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, size);
}
inline void GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::DeallocateColorMapData() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*
GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::New_ctor(::ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler, ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*>(colorMapDataHandler, colorMapData));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::OVRPassthroughLayer_MonoToRgbaStyleHandler() {}
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler.get_MapSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler::get_MapSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fdd418;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler::*)(
    ::ByRef<::System::Runtime::InteropServices::GCHandle>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3fdccb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Runtime::InteropServices::GCHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler::*)(
    ::GlobalNamespace::OVRPassthroughLayer_Settings)>(&::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler::Update)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3fdd420;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler::Update)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3fdcedc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
inline uint32_t GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler::get_MapSize() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler::_ctor(::ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler,
                                                                               ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Runtime::InteropServices::GCHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colorMapDataHandler, colorMapData);
}
inline void GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler::Update(::GlobalNamespace::OVRPassthroughLayer_Settings settings) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings);
}
inline void GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler::Update(::ArrayW<uint8_t, ::Array<uint8_t>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
inline ::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler*
GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler::New_ctor(::ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler, ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler*>(colorMapDataHandler, colorMapData));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler::OVRPassthroughLayer_MonoToMonoStyleHandler() {}
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler.get_MapSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler::get_MapSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fdd458;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler::*)(
    ::ByRef<::System::Runtime::InteropServices::GCHandle>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3fdcd18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Runtime::InteropServices::GCHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler::*)(::GlobalNamespace::OVRPassthroughLayer_Settings)>(
    &::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler::Update)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3fdd460;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler*>::get(), 9));
    return ___internal_method;
  }
};
inline uint32_t GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler::get_MapSize() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler::_ctor(::ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler, ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Runtime::InteropServices::GCHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colorMapDataHandler, colorMapData);
}
inline void GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler::Update(::GlobalNamespace::OVRPassthroughLayer_Settings settings) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings);
}
inline ::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler* GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler::New_ctor(::ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler,
                                                                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler*>(colorMapDataHandler, colorMapData));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler::OVRPassthroughLayer_BCSStyleHandler() {}
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler.get_Lut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPassthroughColorLut* (::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::get_Lut)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fdd514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>::get(),
                                                                               "get_Lut", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler.set_Lut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::*)(::GlobalNamespace::OVRPassthroughColorLut*)>(
    &::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::set_Lut)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fdd51c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>::get(), "set_Lut", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler.get_Weight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::get_Weight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fdd524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>::get(),
                                                                               "get_Weight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler.set_Weight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::*)(float_t)>(
    &::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::set_Weight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fdd52c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>::get(), "set_Weight",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler.get_IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::get_IsValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fdd534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>::get(),
                                                                               "get_IsValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler.set_IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::*)(bool)>(
    &::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::set_IsValid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3fdd53c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>::get(), "set_IsValid",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler.ApplyStyleSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::*)(
    ::ByRef<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2>)>(&::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::ApplyStyleSettings)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3fdd548;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::*)(::GlobalNamespace::OVRPassthroughLayer_Settings)>(
    &::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::Update)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3fdd570;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler.GetColorLutForTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPassthroughColorLut* (
    ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::*)(::UnityEngine::Texture2D*, ::GlobalNamespace::OVRPassthroughColorLut*, ::ByRef<::UnityEngine::Texture2D*>, bool)>(
    &::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::GetColorLutForTexture)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x3fdd5c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>::get(), "GetColorLutForTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Texture2D*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::*)(
    ::GlobalNamespace::OVRPassthroughColorLut*, float_t)>(&::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::Update)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3fdce20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::Clear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fdd718;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fdcca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::__cordl_internal_get__currentFlipLutY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentFlipLutY;
}
constexpr bool const& GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::__cordl_internal_get__currentFlipLutY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentFlipLutY;
}
constexpr void GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::__cordl_internal_set__currentFlipLutY(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentFlipLutY = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::__cordl_internal_get__currentColorLutSourceTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentColorLutSourceTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::__cordl_internal_get__currentColorLutSourceTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentColorLutSourceTexture;
}
constexpr void GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::__cordl_internal_set__currentColorLutSourceTexture(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentColorLutSourceTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRPassthroughColorLut*& GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::__cordl_internal_get__Lut_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Lut_k__BackingField;
}
constexpr ::GlobalNamespace::OVRPassthroughColorLut* const& GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::__cordl_internal_get__Lut_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Lut_k__BackingField;
}
constexpr void GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::__cordl_internal_set__Lut_k__BackingField(::GlobalNamespace::OVRPassthroughColorLut* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Lut_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::__cordl_internal_get__Weight_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Weight_k__BackingField;
}
constexpr float_t const& GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::__cordl_internal_get__Weight_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Weight_k__BackingField;
}
constexpr void GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::__cordl_internal_set__Weight_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Weight_k__BackingField = value;
}
constexpr bool& GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::__cordl_internal_get__IsValid_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsValid_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::__cordl_internal_get__IsValid_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsValid_k__BackingField;
}
constexpr void GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::__cordl_internal_set__IsValid_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsValid_k__BackingField = value;
}
inline ::GlobalNamespace::OVRPassthroughColorLut* GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::get_Lut() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>::get(),
                                                                             "get_Lut", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPassthroughColorLut*, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::set_Lut(::GlobalNamespace::OVRPassthroughColorLut* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>::get(), "set_Lut", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::get_Weight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>::get(),
                                                                             "get_Weight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::set_Weight(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>::get(), "set_Weight",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::get_IsValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>::get(),
                                                                             "get_IsValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::set_IsValid(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>::get(), "set_IsValid",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::ApplyStyleSettings(::ByRef<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2> style) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, style);
}
inline void GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::Update(::GlobalNamespace::OVRPassthroughLayer_Settings settings) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings);
}
inline ::GlobalNamespace::OVRPassthroughColorLut* GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::GetColorLutForTexture(::UnityEngine::Texture2D* newTexture,
                                                                                                                              ::GlobalNamespace::OVRPassthroughColorLut* lut,
                                                                                                                              ::ByRef<::UnityEngine::Texture2D*> lastTexture, bool flipY) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>::get(), "GetColorLutForTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Texture2D*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPassthroughColorLut*, false>(this, ___internal_method, newTexture, lut, lastTexture, flipY);
}
inline void GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::Update(::GlobalNamespace::OVRPassthroughColorLut* lut, float_t weight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lut, weight);
}
inline void GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::Clear() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler* GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>());
}
/// @brief Convert operator to "::GlobalNamespace::OVRPassthroughLayer_IStyleHandler"
constexpr GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::operator ::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*() noexcept {
  return static_cast<::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::OVRPassthroughLayer_IStyleHandler"
constexpr ::GlobalNamespace::OVRPassthroughLayer_IStyleHandler* GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::i___GlobalNamespace__OVRPassthroughLayer_IStyleHandler() noexcept {
  return static_cast<::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::OVRPassthroughLayer_ColorLutHandler() {}
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler.get_LutTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPassthroughColorLut* (::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::get_LutTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fdd720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*>::get(), "get_LutTarget",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler.set_LutTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::*)(
    ::GlobalNamespace::OVRPassthroughColorLut*)>(&::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::set_LutTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fdd728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*>::get(), "set_LutTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler.ApplyStyleSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::*)(
    ::ByRef<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2>)>(&::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::ApplyStyleSettings)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3fdd730;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::*)(
    ::GlobalNamespace::OVRPassthroughLayer_Settings)>(&::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::Update)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3fdd768;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::*)(
    ::GlobalNamespace::OVRPassthroughColorLut*, ::GlobalNamespace::OVRPassthroughColorLut*, float_t)>(&::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::Update)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3fdce40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::Clear)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3fdd7e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fdccb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::__cordl_internal_get__currentColorLutTargetTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentColorLutTargetTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::__cordl_internal_get__currentColorLutTargetTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentColorLutTargetTexture;
}
constexpr void GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::__cordl_internal_set__currentColorLutTargetTexture(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentColorLutTargetTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRPassthroughColorLut*& GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::__cordl_internal_get__LutTarget_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LutTarget_k__BackingField;
}
constexpr ::GlobalNamespace::OVRPassthroughColorLut* const& GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::__cordl_internal_get__LutTarget_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LutTarget_k__BackingField;
}
constexpr void GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::__cordl_internal_set__LutTarget_k__BackingField(::GlobalNamespace::OVRPassthroughColorLut* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____LutTarget_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::OVRPassthroughColorLut* GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::get_LutTarget() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*>::get(), "get_LutTarget",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPassthroughColorLut*, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::set_LutTarget(::GlobalNamespace::OVRPassthroughColorLut* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*>::get(), "set_LutTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::ApplyStyleSettings(::ByRef<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2> style) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, style);
}
inline void GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::Update(::GlobalNamespace::OVRPassthroughLayer_Settings settings) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings);
}
inline void GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::Update(::GlobalNamespace::OVRPassthroughColorLut* lutSource, ::GlobalNamespace::OVRPassthroughColorLut* lutTarget,
                                                                                     float_t weight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughColorLut*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lutSource, lutTarget, weight);
}
inline void GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::Clear() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler* GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::OVRPassthroughLayer_InterpolatedColorLutHandler() {}
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fd9a84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0._IsSurfaceGeometry_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0::*)(
    ::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition)>(&::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0::_IsSurfaceGeometry_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3fdd7f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0*>::get(), "<IsSurfaceGeometry>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0::__cordl_internal_get_obj() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0::__cordl_internal_get_obj() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj;
}
constexpr void GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0::__cordl_internal_set_obj(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___obj)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0::_IsSurfaceGeometry_b__0(::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0*>::get(), "<IsSurfaceGeometry>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline ::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0* GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0::OVRPassthroughLayer___c__DisplayClass10_0() {}
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fd97d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0._RemoveSurfaceGeometry_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0::*)(
    ::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition)>(&::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0::_RemoveSurfaceGeometry_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3fdd85c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0*>::get(), "<RemoveSurfaceGeometry>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0::__cordl_internal_get_obj() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0::__cordl_internal_get_obj() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj;
}
constexpr void GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0::__cordl_internal_set_obj(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___obj)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0::_RemoveSurfaceGeometry_b__0(::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0*>::get(), "<RemoveSurfaceGeometry>b__0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline ::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0* GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0::OVRPassthroughLayer___c__DisplayClass9_0() {}
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.AddSurfaceGeometry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(::UnityEngine::GameObject*, bool)>(
    &::GlobalNamespace::OVRPassthroughLayer::AddSurfaceGeometry)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x3fd93bc;

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
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x3fd95b4;

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
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3fd996c;

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
  constexpr static std::size_t addrs = 0x3fd9a8c;

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
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3fd9a94;

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
  constexpr static std::size_t addrs = 0x3fd9ab4;

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
  constexpr static std::size_t addrs = 0x3fd9abc;

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
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3fd9adc;

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
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3fd9aec;

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
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3fd9b4c;

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
  constexpr static std::size_t addrs = 0x3fd9cf4;

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
  constexpr static std::size_t addrs = 0x3fd9ee8;

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
    float_t, float_t, float_t, ::UnityEngine::Gradient*, ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType)>(&::GlobalNamespace::OVRPassthroughLayer::SetColorMapControls)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x3fda068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "SetColorMapControls", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Gradient*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.SetColorMapMonochromatic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::GlobalNamespace::OVRPassthroughLayer::SetColorMapMonochromatic)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3fda3d0;

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
  constexpr static std::size_t addrs = 0x3fda4cc;

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
  constexpr static std::size_t addrs = 0x3fda7c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                               "DisableColorMap", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.get_colorMapEditorType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType (::GlobalNamespace::OVRPassthroughLayer::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer::get_colorMapEditorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fda7cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                               "get_colorMapEditorType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.set_colorMapEditorType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType)>(
    &::GlobalNamespace::OVRPassthroughLayer::set_colorMapEditorType)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3fd9be8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "set_colorMapEditorType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.SetStyleDirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::SetStyleDirty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3fda898;

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
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x3fda8a4;

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
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x3fdada8;

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
    ::UnityEngine::GameObject*, ::ByRef<uint64_t>, ::ByRef<uint64_t>, ::ByRef<::UnityEngine::Matrix4x4>)>(&::GlobalNamespace::OVRPassthroughLayer::CreateAndAddMesh)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x3fdaaec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "CreateAndAddMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Matrix4x4>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.DestroySurfaceGeometries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(bool)>(
    &::GlobalNamespace::OVRPassthroughLayer::DestroySurfaceGeometries)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x3fdb38c;

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
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x3fdb608;

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
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x3fdb908;

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
  constexpr static std::size_t addrs = 0x3fda200;

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
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3fdbbb8;

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
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x3fda518;

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
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x3fdbbe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "SyncToOverlay",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.ClampWeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t)>(&::GlobalNamespace::OVRPassthroughLayer::ClampWeight)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3fd9df0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "ClampWeight", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.get_overlayShape
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVROverlay_OverlayShape (::GlobalNamespace::OVRPassthroughLayer::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer::get_overlayShape)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3fdbe5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                               "get_overlayShape", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::Awake)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x3fdbe70;

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
  constexpr static std::size_t addrs = 0x3fdc094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::LateUpdate)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x3fdc098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "LateUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.CreateOvrPluginStyleObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2 (::GlobalNamespace::OVRPassthroughLayer::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer::CreateOvrPluginStyleObject)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x3fdc200;

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
  constexpr static std::size_t addrs = 0x3fdc53c;

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
  constexpr static std::size_t addrs = 0x3fdc6c8;

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
  constexpr static std::size_t addrs = 0x3fdc798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::_ctor)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x3fdc7a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRPassthroughLayer_ProjectionSurfaceType& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_projectionSurfaceType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___projectionSurfaceType;
}
constexpr ::GlobalNamespace::OVRPassthroughLayer_ProjectionSurfaceType const& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_projectionSurfaceType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___projectionSurfaceType;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set_projectionSurfaceType(::GlobalNamespace::OVRPassthroughLayer_ProjectionSurfaceType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___projectionSurfaceType = value;
}
constexpr ::GlobalNamespace::OVROverlay_OverlayType& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_overlayType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overlayType;
}
constexpr ::GlobalNamespace::OVROverlay_OverlayType const& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_overlayType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overlayType;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set_overlayType(::GlobalNamespace::OVROverlay_OverlayType value) {
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
constexpr ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_colorMapEditorType_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapEditorType_;
}
constexpr ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType const& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_colorMapEditorType_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapEditorType_;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set_colorMapEditorType_(::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorMapEditorType_ = value;
}
constexpr ::UnityEngine::Gradient*& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_colorMapEditorGradient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapEditorGradient;
}
constexpr ::UnityEngine::Gradient* const& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_colorMapEditorGradient() const {
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
constexpr ::GlobalNamespace::OVRPassthroughLayer_Settings& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get__settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settings;
}
constexpr ::GlobalNamespace::OVRPassthroughLayer_Settings const& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get__settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settings;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set__settings(::GlobalNamespace::OVRPassthroughLayer_Settings value) {
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
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::OVRPassthroughLayer_PassthroughMeshInstance>*&
GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_surfaceGameObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___surfaceGameObjects;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::OVRPassthroughLayer_PassthroughMeshInstance>* const&
GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_surfaceGameObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___surfaceGameObjects;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set_surfaceGameObjects(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::OVRPassthroughLayer_PassthroughMeshInstance>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___surfaceGameObjects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition>*&
GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_deferredSurfaceGameObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deferredSurfaceGameObjects;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition>* const&
GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_deferredSurfaceGameObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deferredSurfaceGameObjects;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set_deferredSurfaceGameObjects(
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___deferredSurfaceGameObjects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRPassthroughLayer_SerializedSurfaceGeometry>*&
GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_serializedSurfaceGeometry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedSurfaceGeometry;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRPassthroughLayer_SerializedSurfaceGeometry>* const&
GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_serializedSurfaceGeometry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedSurfaceGeometry;
}
constexpr void
GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set_serializedSurfaceGeometry(::System::Collections::Generic::List_1<::GlobalNamespace::OVRPassthroughLayer_SerializedSurfaceGeometry>* value) {
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
constexpr ::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_colorMapType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapType;
}
constexpr ::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType const& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_colorMapType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapType;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set_colorMapType(::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType value) {
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
constexpr ::GlobalNamespace::OVRPassthroughLayer_StylesHandler*& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get__stylesHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stylesHandler;
}
constexpr ::GlobalNamespace::OVRPassthroughLayer_StylesHandler* const& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get__stylesHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stylesHandler;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set__stylesHandler(::GlobalNamespace::OVRPassthroughLayer_StylesHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stylesHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OVRPassthroughLayer::setStaticF__editorToColorMapType(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType, ::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType>* value) {
  ::cordl_internals::setStaticField<
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType, ::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType>*, "_editorToColorMapType",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType, ::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType, ::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType>*
GlobalNamespace::OVRPassthroughLayer::getStaticF__editorToColorMapType() {
  return ::cordl_internals::getStaticField<
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType, ::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType>*, "_editorToColorMapType",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get>();
}
inline void GlobalNamespace::OVRPassthroughLayer::setStaticF_colorMapNeutralGradient(::UnityEngine::Gradient* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Gradient*, "colorMapNeutralGradient", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get>(
      std::forward<::UnityEngine::Gradient*>(value));
}
inline ::UnityEngine::Gradient* GlobalNamespace::OVRPassthroughLayer::getStaticF_colorMapNeutralGradient() {
  return ::cordl_internals::getStaticField<::UnityEngine::Gradient*, "colorMapNeutralGradient", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get>();
}
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
inline void GlobalNamespace::OVRPassthroughLayer::SetColorMapControls(float_t contrast, float_t brightness, float_t posterize, ::UnityEngine::Gradient* gradient,
                                                                      ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType colorMapType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "SetColorMapControls", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Gradient*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, contrast, brightness, posterize, gradient, colorMapType);
}
inline void GlobalNamespace::OVRPassthroughLayer::SetColorMapMonochromatic(::ArrayW<uint8_t, ::Array<uint8_t>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "SetColorMapMonochromatic", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
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
inline ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType GlobalNamespace::OVRPassthroughLayer::get_colorMapEditorType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                             "get_colorMapEditorType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::set_colorMapEditorType(::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "set_colorMapEditorType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType>::get() })));
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
inline bool GlobalNamespace::OVRPassthroughLayer::CreateAndAddMesh(::UnityEngine::GameObject* obj, ::ByRef<uint64_t> meshHandle, ::ByRef<uint64_t> instanceHandle,
                                                                   ::ByRef<::UnityEngine::Matrix4x4> localToWorld) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "CreateAndAddMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Matrix4x4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj, meshHandle, instanceHandle, localToWorld);
}
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
inline ::GlobalNamespace::OVROverlay_OverlayShape GlobalNamespace::OVRPassthroughLayer::get_overlayShape() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "get_overlayShape",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVROverlay_OverlayShape, false>(this, ___internal_method);
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
inline ::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2 GlobalNamespace::OVRPassthroughLayer::CreateOvrPluginStyleObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                             "CreateOvrPluginStyleObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2, false>(this, ___internal_method);
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
inline void GlobalNamespace::OVRPassthroughLayer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRPassthroughLayer* GlobalNamespace::OVRPassthroughLayer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRPassthroughLayer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPassthroughLayer::OVRPassthroughLayer() {}
