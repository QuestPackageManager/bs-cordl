#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRPassthroughLayer.hpp"
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
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_Settings::*)(
    ::UnityEngine::Texture2D*, ::UnityEngine::Texture2D*, float_t, float_t, float_t, float_t, ::UnityEngine::Gradient*, float_t, bool)>(&::GlobalNamespace::OVRPassthroughLayer_Settings::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ea054c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_Settings>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                             ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Gradient*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRPassthroughLayer_Settings::_ctor(::UnityEngine::Texture2D* colorLutTargetTexture, ::UnityEngine::Texture2D* colorLutSourceTexture, float_t saturation,
                                                                 float_t posterize, float_t brightness, float_t contrast, ::UnityEngine::Gradient* gradient, float_t lutWeight, bool flipLutY) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_Settings>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                           ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Gradient*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, colorLutTargetTexture, colorLutSourceTexture, saturation, posterize, brightness, contrast, gradient, lutWeight, flipLutY);
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_IStyleHandler::*)(::by_ref<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2>)>(
    &::GlobalNamespace::OVRPassthroughLayer_IStyleHandler::ApplyStyleSettings)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_IStyleHandler.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_IStyleHandler::*)(::GlobalNamespace::OVRPassthroughLayer_Settings)>(
    &::GlobalNamespace::OVRPassthroughLayer_IStyleHandler::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_IStyleHandler.get_IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRPassthroughLayer_IStyleHandler::*)()>(&::GlobalNamespace::OVRPassthroughLayer_IStyleHandler::get_IsValid)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_IStyleHandler.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_IStyleHandler::*)()>(&::GlobalNamespace::OVRPassthroughLayer_IStyleHandler::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*>(), 3 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRPassthroughLayer_IStyleHandler::ApplyStyleSettings(::by_ref<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2> style) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, style);
}
inline void GlobalNamespace::OVRPassthroughLayer_IStyleHandler::Update(::GlobalNamespace::OVRPassthroughLayer_Settings settings) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline bool GlobalNamespace::OVRPassthroughLayer_IStyleHandler::get_IsValid() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer_IStyleHandler::Clear() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_StylesHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_StylesHandler::*)()>(&::GlobalNamespace::OVRPassthroughLayer_StylesHandler::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5ea0568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_StylesHandler*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_StylesHandler.SetStyleHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_StylesHandler::*)(::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType)>(
    &::GlobalNamespace::OVRPassthroughLayer_StylesHandler::SetStyleHandler)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5e9e234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_StylesHandler*>(),
                                                             { "SetStyleHandler", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_StylesHandler.GetStyleHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPassthroughLayer_IStyleHandler* (
    ::GlobalNamespace::OVRPassthroughLayer_StylesHandler::*)(::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType)>(&::GlobalNamespace::OVRPassthroughLayer_StylesHandler::GetStyleHandler)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5ea0894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_StylesHandler*>(),
                                                             { "GetStyleHandler", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_StylesHandler.SetColorLutHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_StylesHandler::*)(::GlobalNamespace::OVRPassthroughColorLut*, float_t)>(
    &::GlobalNamespace::OVRPassthroughLayer_StylesHandler::SetColorLutHandler)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e9d958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_StylesHandler*>(),
                                                             { "SetColorLutHandler", {}, { ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_StylesHandler.SetInterpolatedColorLutHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_StylesHandler::*)(
    ::GlobalNamespace::OVRPassthroughColorLut*, ::GlobalNamespace::OVRPassthroughColorLut*, float_t)>(&::GlobalNamespace::OVRPassthroughLayer_StylesHandler::SetInterpolatedColorLutHandler)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e9dad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_StylesHandler*>(),
                            { "SetInterpolatedColorLutHandler",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut*>(), ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_StylesHandler.SetMonoToRgbaHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_StylesHandler::*)(::ArrayW<::UnityEngine::Color>)>(
    &::GlobalNamespace::OVRPassthroughLayer_StylesHandler::SetMonoToRgbaHandler)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5e9d760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_StylesHandler*>(),
                                                                                           { "SetMonoToRgbaHandler", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_StylesHandler.SetMonoToMonoHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_StylesHandler::*)(::ArrayW<uint8_t>)>(
    &::GlobalNamespace::OVRPassthroughLayer_StylesHandler::SetMonoToMonoHandler)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e9dec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_StylesHandler*>(), { "SetMonoToMonoHandler", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
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
  this->____noneHandler = value;
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
  this->____lutHandler = value;
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
  this->____interpolatedLutHandler = value;
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
  this->____monoToRgbaHandler = value;
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
  this->____monoToMonoHandler = value;
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
  this->____bcsHandler = value;
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
constexpr ::ArrayW<uint8_t>& GlobalNamespace::OVRPassthroughLayer_StylesHandler::__cordl_internal_get__colorMapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorMapData;
}
constexpr ::ArrayW<uint8_t> const& GlobalNamespace::OVRPassthroughLayer_StylesHandler::__cordl_internal_get__colorMapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorMapData;
}
constexpr void GlobalNamespace::OVRPassthroughLayer_StylesHandler::__cordl_internal_set__colorMapData(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorMapData = value;
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
  this->___CurrentStyleHandler = value;
}
inline void GlobalNamespace::OVRPassthroughLayer_StylesHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_StylesHandler*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer_StylesHandler::SetStyleHandler(::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_StylesHandler*>(),
                                                           { "SetStyleHandler", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline ::GlobalNamespace::OVRPassthroughLayer_IStyleHandler* GlobalNamespace::OVRPassthroughLayer_StylesHandler::GetStyleHandler(::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_StylesHandler*>(),
                                                           { "GetStyleHandler", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*>(this, ___internal_method, type);
}
inline void GlobalNamespace::OVRPassthroughLayer_StylesHandler::SetColorLutHandler(::GlobalNamespace::OVRPassthroughColorLut* lut, float_t weight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_StylesHandler*>(),
                                                           { "SetColorLutHandler", {}, { ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lut, weight);
}
inline void GlobalNamespace::OVRPassthroughLayer_StylesHandler::SetInterpolatedColorLutHandler(::GlobalNamespace::OVRPassthroughColorLut* lutSource,
                                                                                               ::GlobalNamespace::OVRPassthroughColorLut* lutTarget, float_t weight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_StylesHandler*>(),
                                       { "SetInterpolatedColorLutHandler",
                                         {},
                                         { ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut*>(), ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lutSource, lutTarget, weight);
}
inline void GlobalNamespace::OVRPassthroughLayer_StylesHandler::SetMonoToRgbaHandler(::ArrayW<::UnityEngine::Color> values) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_StylesHandler*>(),
                                                                                         { "SetMonoToRgbaHandler", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, values);
}
inline void GlobalNamespace::OVRPassthroughLayer_StylesHandler::SetMonoToMonoHandler(::ArrayW<uint8_t> values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_StylesHandler*>(), { "SetMonoToMonoHandler", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, values);
}
inline ::GlobalNamespace::OVRPassthroughLayer_StylesHandler* GlobalNamespace::OVRPassthroughLayer_StylesHandler::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRPassthroughLayer_StylesHandler*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPassthroughLayer_StylesHandler::OVRPassthroughLayer_StylesHandler() {}
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler.get_IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler::*)()>(&::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler::get_IsValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ea0a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler*>(), { "get_IsValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler.ApplyStyleSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler::*)(::by_ref<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2>)>(
    &::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler::ApplyStyleSettings)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ea0a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler*>(),
                                                             { "ApplyStyleSettings", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler::*)(::GlobalNamespace::OVRPassthroughLayer_Settings)>(
    &::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ea0a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler*>(),
                                                                                           { "Update", {}, { ::i2c::type_of<::GlobalNamespace::OVRPassthroughLayer_Settings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler::*)()>(&::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler::Clear)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ea0a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler::*)()>(&::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ea0864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler::get_IsValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler*>(), { "get_IsValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler::ApplyStyleSettings(::by_ref<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2> style) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler*>(),
                                                           { "ApplyStyleSettings", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, style);
}
inline void GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler::Update(::GlobalNamespace::OVRPassthroughLayer_Settings settings) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler*>(),
                                                                                         { "Update", {}, { ::i2c::type_of<::GlobalNamespace::OVRPassthroughLayer_Settings>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler* GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler*>());
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::get_MapSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler.get_IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::get_IsValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ea0a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>(), { "get_IsValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::*)(
    ::by_ref<::System::Runtime::InteropServices::GCHandle>, ::ArrayW<uint8_t>)>(&::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ea0a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::by_ref<::System::Runtime::InteropServices::GCHandle>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::*)(::GlobalNamespace::OVRPassthroughLayer_Settings)>(
    &::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ea0a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler.ApplyStyleSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::*)(::by_ref<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2>)>(
    &::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::ApplyStyleSettings)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5ea0a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::Clear)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ea0b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler.AllocateColorMapData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::*)(uint32_t)>(
    &::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::AllocateColorMapData)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5ea0b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler.DeallocateColorMapData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::DeallocateColorMapData)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ea0bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler.WriteColorToColorMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::*)(int32_t, ::by_ref<::UnityEngine::Color>)>(
    &::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::WriteColorToColorMap)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ea0bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>(),
                                                             { "WriteColorToColorMap", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler.WriteFloatToColorMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::*)(int32_t, float_t)>(
    &::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::WriteFloatToColorMap)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ea0c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>(),
                                                                                           { "WriteFloatToColorMap", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler.ComputeBrightnessContrastPosterizeMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, float_t, float_t, float_t)>(
    &::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::ComputeBrightnessContrastPosterizeMap)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5ea0c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>(),
                         { "ComputeBrightnessContrastPosterizeMap", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
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
constexpr ::ArrayW<uint8_t>& GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::__cordl_internal_get__colorMapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorMapData;
}
constexpr ::ArrayW<uint8_t> const& GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::__cordl_internal_get__colorMapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorMapData;
}
constexpr void GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::__cordl_internal_set__colorMapData(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorMapData = value;
}
inline uint32_t GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::get_MapSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::get_IsValid() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>(), { "get_IsValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::_ctor(::by_ref<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler, ::ArrayW<uint8_t> colorMapData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::by_ref<::System::Runtime::InteropServices::GCHandle>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorMapDataHandler, colorMapData);
}
inline void GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::Update(::GlobalNamespace::OVRPassthroughLayer_Settings settings) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::ApplyStyleSettings(::by_ref<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2> style) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, style);
}
inline void GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::AllocateColorMapData(uint32_t size) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size);
}
inline void GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::DeallocateColorMapData() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::WriteColorToColorMap(int32_t colorIndex, ::by_ref<::UnityEngine::Color> color) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>(),
                                                           { "WriteColorToColorMap", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorIndex, color);
}
inline void GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::WriteFloatToColorMap(int32_t index, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>(),
                                                                                         { "WriteFloatToColorMap", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::ComputeBrightnessContrastPosterizeMap(::ArrayW<uint8_t> result, float_t brightness, float_t contrast, float_t posterize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>(),
                          { "ComputeBrightnessContrastPosterizeMap", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, result, brightness, contrast, posterize);
}
inline ::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*
GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler::New_ctor(::by_ref<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler, ::ArrayW<uint8_t> colorMapData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*>(colorMapDataHandler, colorMapData));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::get_MapSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ea0df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::*)(
    ::by_ref<::System::Runtime::InteropServices::GCHandle>, ::ArrayW<uint8_t>)>(&::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ea087c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::by_ref<::System::Runtime::InteropServices::GCHandle>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::*)(::GlobalNamespace::OVRPassthroughLayer_Settings)>(
    &::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::Update)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5ea0e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::*)(::ArrayW<::UnityEngine::Color>)>(
    &::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::Update)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5ea09b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*>(), { "Update", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler.AllocateColorMapData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::*)(uint32_t)>(
    &::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::AllocateColorMapData)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ea0ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler.DeallocateColorMapData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::DeallocateColorMapData)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5ea0f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*>(), 12 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::__cordl_internal_get__tmpColorMapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tmpColorMapData;
}
constexpr ::ArrayW<uint8_t> const& GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::__cordl_internal_get__tmpColorMapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tmpColorMapData;
}
constexpr void GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::__cordl_internal_set__tmpColorMapData(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tmpColorMapData = value;
}
inline uint32_t GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::get_MapSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::_ctor(::by_ref<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler, ::ArrayW<uint8_t> colorMapData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::by_ref<::System::Runtime::InteropServices::GCHandle>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorMapDataHandler, colorMapData);
}
inline void GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::Update(::GlobalNamespace::OVRPassthroughLayer_Settings settings) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::Update(::ArrayW<::UnityEngine::Color> values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*>(), { "Update", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, values);
}
inline void GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::AllocateColorMapData(uint32_t size) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size);
}
inline void GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::DeallocateColorMapData() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*
GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::New_ctor(::by_ref<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler, ::ArrayW<uint8_t> colorMapData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*>(colorMapDataHandler, colorMapData));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler::OVRPassthroughLayer_MonoToRgbaStyleHandler() {}
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler.get_MapSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler::get_MapSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ea0f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler::*)(
    ::by_ref<::System::Runtime::InteropServices::GCHandle>, ::ArrayW<uint8_t>)>(&::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ea0870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::by_ref<::System::Runtime::InteropServices::GCHandle>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler::*)(::GlobalNamespace::OVRPassthroughLayer_Settings)>(
    &::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler::Update)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ea0f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler::*)(::ArrayW<uint8_t>)>(
    &::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler::Update)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ea0a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler*>(), { "Update", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
inline uint32_t GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler::get_MapSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler::_ctor(::by_ref<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler, ::ArrayW<uint8_t> colorMapData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::by_ref<::System::Runtime::InteropServices::GCHandle>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorMapDataHandler, colorMapData);
}
inline void GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler::Update(::GlobalNamespace::OVRPassthroughLayer_Settings settings) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler::Update(::ArrayW<uint8_t> values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler*>(), { "Update", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, values);
}
inline ::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler*
GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler::New_ctor(::by_ref<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler, ::ArrayW<uint8_t> colorMapData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler*>(colorMapDataHandler, colorMapData));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler::OVRPassthroughLayer_MonoToMonoStyleHandler() {}
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler.get_MapSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler::*)()>(&::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler::get_MapSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ea0f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler::*)(::by_ref<::System::Runtime::InteropServices::GCHandle>, ::ArrayW<uint8_t>)>(
    &::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ea0888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::by_ref<::System::Runtime::InteropServices::GCHandle>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler::*)(::GlobalNamespace::OVRPassthroughLayer_Settings)>(
    &::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler::Update)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5ea0f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler*>(), 9 }));
    return ___internal_method;
  }
};
inline uint32_t GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler::get_MapSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler::_ctor(::by_ref<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler, ::ArrayW<uint8_t> colorMapData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::by_ref<::System::Runtime::InteropServices::GCHandle>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorMapDataHandler, colorMapData);
}
inline void GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler::Update(::GlobalNamespace::OVRPassthroughLayer_Settings settings) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline ::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler*
GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler::New_ctor(::by_ref<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler, ::ArrayW<uint8_t> colorMapData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler*>(colorMapDataHandler, colorMapData));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler::OVRPassthroughLayer_BCSStyleHandler() {}
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler.get_Lut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPassthroughColorLut* (::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::get_Lut)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ea1050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>(), { "get_Lut", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler.set_Lut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::*)(::GlobalNamespace::OVRPassthroughColorLut*)>(
    &::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::set_Lut)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ea1058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>(),
                                                                                           { "set_Lut", {}, { ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler.get_Weight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::*)()>(&::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::get_Weight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ea1060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>(), { "get_Weight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler.set_Weight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::*)(float_t)>(
    &::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::set_Weight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ea1068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>(), { "set_Weight", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler.get_IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::*)()>(&::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::get_IsValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ea1070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>(), { "get_IsValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler.set_IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::*)(bool)>(&::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::set_IsValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ea1078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>(), { "set_IsValid", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler.ApplyStyleSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::*)(::by_ref<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2>)>(
    &::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::ApplyStyleSettings)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5ea1080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::*)(::GlobalNamespace::OVRPassthroughLayer_Settings)>(
    &::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::Update)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5ea10a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler.GetColorLutForTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPassthroughColorLut* (
    ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::*)(::UnityEngine::Texture2D*, ::GlobalNamespace::OVRPassthroughColorLut*, ::by_ref<::UnityEngine::Texture2D*>, bool)>(
    &::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::GetColorLutForTexture)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5ea10f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>(),
                                                             { "GetColorLutForTexture",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut*>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Texture2D*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::*)(::GlobalNamespace::OVRPassthroughColorLut*, float_t)>(
    &::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::Update)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ea0974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>(),
                                                             { "Update", {}, { ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::*)()>(&::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::Clear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ea125c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::*)()>(&::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ea0868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>(), { ".ctor", {}, {} })));
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
  this->____currentColorLutSourceTexture = value;
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
  this->____Lut_k__BackingField = value;
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
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>(), { "get_Lut", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPassthroughColorLut*>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::set_Lut(::GlobalNamespace::OVRPassthroughColorLut* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>(),
                                                                                         { "set_Lut", {}, { ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::get_Weight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>(), { "get_Weight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::set_Weight(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>(), { "set_Weight", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::get_IsValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>(), { "get_IsValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::set_IsValid(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>(), { "set_IsValid", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::ApplyStyleSettings(::by_ref<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2> style) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, style);
}
inline void GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::Update(::GlobalNamespace::OVRPassthroughLayer_Settings settings) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline ::GlobalNamespace::OVRPassthroughColorLut* GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::GetColorLutForTexture(::UnityEngine::Texture2D* newTexture,
                                                                                                                              ::GlobalNamespace::OVRPassthroughColorLut* lut,
                                                                                                                              ::by_ref<::UnityEngine::Texture2D*> lastTexture, bool flipY) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>(),
                                                                                         { "GetColorLutForTexture",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut*>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Texture2D*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPassthroughColorLut*>(this, ___internal_method, newTexture, lut, lastTexture, flipY);
}
inline void GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::Update(::GlobalNamespace::OVRPassthroughColorLut* lut, float_t weight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>(),
                                                           { "Update", {}, { ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lut, weight);
}
inline void GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::Clear() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler* GlobalNamespace::OVRPassthroughLayer_ColorLutHandler::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*>());
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPassthroughColorLut* (::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::get_LutTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ea1264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*>(), { "get_LutTarget", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler.set_LutTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::*)(::GlobalNamespace::OVRPassthroughColorLut*)>(
    &::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::set_LutTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ea126c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*>(),
                                                                                           { "set_LutTarget", {}, { ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler.ApplyStyleSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::*)(::by_ref<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2>)>(
    &::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::ApplyStyleSettings)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ea1274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::*)(::GlobalNamespace::OVRPassthroughLayer_Settings)>(
    &::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::Update)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5ea12ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::*)(
    ::GlobalNamespace::OVRPassthroughColorLut*, ::GlobalNamespace::OVRPassthroughColorLut*, float_t)>(&::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::Update)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5ea0994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*>(),
                         { "Update", {}, { ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut*>(), ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::Clear)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ea1324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ea086c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*>(), { ".ctor", {}, {} })));
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
  this->____currentColorLutTargetTexture = value;
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
  this->____LutTarget_k__BackingField = value;
}
inline ::GlobalNamespace::OVRPassthroughColorLut* GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::get_LutTarget() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*>(), { "get_LutTarget", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPassthroughColorLut*>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::set_LutTarget(::GlobalNamespace::OVRPassthroughColorLut* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*>(),
                                                                                         { "set_LutTarget", {}, { ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::ApplyStyleSettings(::by_ref<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2> style) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, style);
}
inline void GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::Update(::GlobalNamespace::OVRPassthroughLayer_Settings settings) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::Update(::GlobalNamespace::OVRPassthroughColorLut* lutSource, ::GlobalNamespace::OVRPassthroughColorLut* lutTarget,
                                                                                     float_t weight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*>(),
                       { "Update", {}, { ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut*>(), ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lutSource, lutTarget, weight);
}
inline void GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::Clear() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler* GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler::OVRPassthroughLayer_InterpolatedColorLutHandler() {}
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e9d398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0._IsSurfaceGeometry_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0::*)(::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition)>(
    &::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0::_IsSurfaceGeometry_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ea1330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0*>(),
                                                             { "<IsSurfaceGeometry>b__0", {}, { ::i2c::type_of<::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition>() } })));
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
  this->___obj = value;
}
inline void GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0::_IsSurfaceGeometry_b__0(::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0*>(),
                                                           { "<IsSurfaceGeometry>b__0", {}, { ::i2c::type_of<::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0* GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0::OVRPassthroughLayer___c__DisplayClass10_0() {}
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0::*)()>(&::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e9d22c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0._RemoveSurfaceGeometry_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0::*)(::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition)>(
    &::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0::_RemoveSurfaceGeometry_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ea13a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0*>(),
                                                             { "<RemoveSurfaceGeometry>b__0", {}, { ::i2c::type_of<::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition>() } })));
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
  this->___obj = value;
}
inline void GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0::_RemoveSurfaceGeometry_b__0(::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0*>(),
                                                           { "<RemoveSurfaceGeometry>b__0", {}, { ::i2c::type_of<::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0* GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0::OVRPassthroughLayer___c__DisplayClass9_0() {}
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.AddSurfaceGeometry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(::UnityEngine::GameObject*, bool)>(
    &::GlobalNamespace::OVRPassthroughLayer::AddSurfaceGeometry)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5e9cd60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(),
                                                                                           { "AddSurfaceGeometry", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.RemoveSurfaceGeometry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::OVRPassthroughLayer::RemoveSurfaceGeometry)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x5e9cf90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "RemoveSurfaceGeometry", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.IsSurfaceGeometry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRPassthroughLayer::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::OVRPassthroughLayer::IsSurfaceGeometry)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5e9d230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "IsSurfaceGeometry", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.get_textureOpacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::get_textureOpacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e9d39c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "get_textureOpacity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.set_textureOpacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(float_t)>(&::GlobalNamespace::OVRPassthroughLayer::set_textureOpacity)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e9d3a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "set_textureOpacity", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.get_edgeRenderingEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::get_edgeRenderingEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e9d3dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "get_edgeRenderingEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.set_edgeRenderingEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(bool)>(&::GlobalNamespace::OVRPassthroughLayer::set_edgeRenderingEnabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e9d3e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "set_edgeRenderingEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.get_edgeColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::get_edgeColor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e9d404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "get_edgeColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.set_edgeColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(::UnityEngine::Color)>(&::GlobalNamespace::OVRPassthroughLayer::set_edgeColor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e9d418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "set_edgeColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.add_PassthroughLayerResumed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(::System::Action*)>(&::GlobalNamespace::OVRPassthroughLayer::add_PassthroughLayerResumed)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5e9d480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "add_PassthroughLayerResumed", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.remove_PassthroughLayerResumed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(::System::Action*)>(&::GlobalNamespace::OVRPassthroughLayer::remove_PassthroughLayerResumed)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5e9d52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "remove_PassthroughLayerResumed", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.SetColorMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(::ArrayW<::UnityEngine::Color>)>(&::GlobalNamespace::OVRPassthroughLayer::SetColorMap)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5e9d5d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "SetColorMap", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.SetColorLut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(::GlobalNamespace::OVRPassthroughColorLut*, float_t)>(
    &::GlobalNamespace::OVRPassthroughLayer::SetColorLut)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5e9d794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(),
                                                             { "SetColorLut", {}, { ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.SetColorLut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(::GlobalNamespace::OVRPassthroughColorLut*, ::GlobalNamespace::OVRPassthroughColorLut*,
                                                                                                        float_t)>(&::GlobalNamespace::OVRPassthroughLayer::SetColorLut)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5e9d9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(),
            { "SetColorLut", {}, { ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut*>(), ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.SetColorMapControls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(
    float_t, float_t, float_t, ::UnityEngine::Gradient*, ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType)>(&::GlobalNamespace::OVRPassthroughLayer::SetColorMapControls)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5e9db38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(),
                                                             { "SetColorMapControls",
                                                               {},
                                                               { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Gradient*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.SetColorMapMonochromatic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::OVRPassthroughLayer::SetColorMapMonochromatic)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5e9de28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "SetColorMapMonochromatic", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.SetBrightnessContrastSaturation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(float_t, float_t, float_t)>(
    &::GlobalNamespace::OVRPassthroughLayer::SetBrightnessContrastSaturation)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5e9df24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(),
                                                             { "SetBrightnessContrastSaturation", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.DisableColorMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::DisableColorMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e9e224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "DisableColorMap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.get_colorMapEditorType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType (::GlobalNamespace::OVRPassthroughLayer::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer::get_colorMapEditorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e9e22c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "get_colorMapEditorType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.set_colorMapEditorType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType)>(
    &::GlobalNamespace::OVRPassthroughLayer::set_colorMapEditorType)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5e9d674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(),
                                                             { "set_colorMapEditorType", {}, { ::i2c::type_of<::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.SetStyleDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::SetStyleDirty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e9e304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "SetStyleDirty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.AddDeferredSurfaceGeometries
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::AddDeferredSurfaceGeometries)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5e9e310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "AddDeferredSurfaceGeometries", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.GetTransformMatrixForPassthroughSurfaceObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::GlobalNamespace::OVRPassthroughLayer::*)(::UnityEngine::Matrix4x4)>(
    &::GlobalNamespace::OVRPassthroughLayer::GetTransformMatrixForPassthroughSurfaceObject)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x5e9e898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(),
                                                                                           { "GetTransformMatrixForPassthroughSurfaceObject", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.CreateAndAddMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRPassthroughLayer::*)(
    ::UnityEngine::GameObject*, ::by_ref<uint64_t>, ::by_ref<uint64_t>, ::by_ref<::UnityEngine::Matrix4x4>)>(&::GlobalNamespace::OVRPassthroughLayer::CreateAndAddMesh)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5e9e5d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(),
                                                                                           { "CreateAndAddMesh",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::by_ref<uint64_t>>(),
                                                                                               ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.DestroySurfaceGeometries
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(bool)>(&::GlobalNamespace::OVRPassthroughLayer::DestroySurfaceGeometries)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x5e9eb7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "DestroySurfaceGeometries", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.UpdateSurfaceGeometryTransforms
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::UpdateSurfaceGeometryTransforms)> {
  constexpr static std::size_t size = 0x5ac;
  constexpr static std::size_t addrs = 0x5e9ee60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "UpdateSurfaceGeometryTransforms", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.UpdateSurfaceGeometryTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(uint64_t, ::UnityEngine::Matrix4x4)>(
    &::GlobalNamespace::OVRPassthroughLayer::UpdateSurfaceGeometryTransform)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5e9f40c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(),
                                                             { "UpdateSurfaceGeometryTransform", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.CreateNeutralColorMapGradient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Gradient* (*)()>(&::GlobalNamespace::OVRPassthroughLayer::CreateNeutralColorMapGradient)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5e9dcdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "CreateNeutralColorMapGradient", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.HasControlsBasedColorMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::HasControlsBasedColorMap)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e9f558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "HasControlsBasedColorMap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.UpdateColorMapFromControls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(bool)>(&::GlobalNamespace::OVRPassthroughLayer::UpdateColorMapFromControls)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x5e9df70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "UpdateColorMapFromControls", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.SyncToOverlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::SyncToOverlay)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x5e9f574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "SyncToOverlay", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.IsUserDefinedAndDoesNotContainSurfaceGeometry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::IsUserDefinedAndDoesNotContainSurfaceGeometry)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5e9f8a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "IsUserDefinedAndDoesNotContainSurfaceGeometry", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.ClampWeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::GlobalNamespace::OVRPassthroughLayer::ClampWeight)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5e9d8a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "ClampWeight", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.get_overlayShape
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVROverlay_OverlayShape (::GlobalNamespace::OVRPassthroughLayer::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer::get_overlayShape)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e9f934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "get_overlayShape", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::Awake)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5e9f948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e9fb2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::LateUpdate)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5e9fb30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.CreateOvrPluginStyleObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2 (::GlobalNamespace::OVRPassthroughLayer::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer::CreateOvrPluginStyleObject)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5e9fca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "CreateOvrPluginStyleObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::OnEnable)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x5e9fddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::OnDisable)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5ea0040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::OnDestroy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ea0170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.OnPassthroughLayerResumed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(int32_t)>(&::GlobalNamespace::OVRPassthroughLayer::OnPassthroughLayerResumed)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5ea0178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "OnPassthroughLayerResumed", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::_ctor)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x5ea0258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { ".ctor", {}, {} })));
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
constexpr ::System::Action*& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_PassthroughLayerResumed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PassthroughLayerResumed;
}
constexpr ::System::Action* const& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_PassthroughLayerResumed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PassthroughLayerResumed;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set_PassthroughLayerResumed(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PassthroughLayerResumed = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::OVRPassthroughLayer>>*& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_passthroughLayerResumed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passthroughLayerResumed;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::OVRPassthroughLayer>>* const& GlobalNamespace::OVRPassthroughLayer::__cordl_internal_get_passthroughLayerResumed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passthroughLayerResumed;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__cordl_internal_set_passthroughLayerResumed(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::OVRPassthroughLayer>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___passthroughLayerResumed = value;
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
  this->___colorMapEditorGradient = value;
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
  this->____colorLutSourceTexture = value;
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
  this->____colorLutTargetTexture = value;
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
  this->___cameraRig = value;
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
  this->___auxGameObject = value;
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
  this->___passthroughOverlay = value;
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
  this->___surfaceGameObjects = value;
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
  this->___deferredSurfaceGameObjects = value;
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
  this->___serializedSurfaceGeometry = value;
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
  this->____stylesHandler = value;
}
inline void GlobalNamespace::OVRPassthroughLayer::setStaticF__editorToColorMapType(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType, ::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType>* value) {
  ::cordl_internals::setStaticField<
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType, ::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType>*, "_editorToColorMapType",
      ::GlobalNamespace::OVRPassthroughLayer*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType, ::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType, ::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType>*
GlobalNamespace::OVRPassthroughLayer::getStaticF__editorToColorMapType() {
  return ::cordl_internals::getStaticField<
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType, ::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType>*, "_editorToColorMapType",
      ::GlobalNamespace::OVRPassthroughLayer*>();
}
inline void GlobalNamespace::OVRPassthroughLayer::setStaticF_colorMapNeutralGradient(::UnityEngine::Gradient* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Gradient*, "colorMapNeutralGradient", ::GlobalNamespace::OVRPassthroughLayer*>(std::forward<::UnityEngine::Gradient*>(value));
}
inline ::UnityEngine::Gradient* GlobalNamespace::OVRPassthroughLayer::getStaticF_colorMapNeutralGradient() {
  return ::cordl_internals::getStaticField<::UnityEngine::Gradient*, "colorMapNeutralGradient", ::GlobalNamespace::OVRPassthroughLayer*>();
}
inline void GlobalNamespace::OVRPassthroughLayer::AddSurfaceGeometry(::UnityEngine::GameObject* obj, bool updateTransform) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(),
                                                                                         { "AddSurfaceGeometry", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, updateTransform);
}
inline void GlobalNamespace::OVRPassthroughLayer::RemoveSurfaceGeometry(::UnityEngine::GameObject* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "RemoveSurfaceGeometry", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline bool GlobalNamespace::OVRPassthroughLayer::IsSurfaceGeometry(::UnityEngine::GameObject* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "IsSurfaceGeometry", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline float_t GlobalNamespace::OVRPassthroughLayer::get_textureOpacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "get_textureOpacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::set_textureOpacity(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "set_textureOpacity", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRPassthroughLayer::get_edgeRenderingEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "get_edgeRenderingEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::set_edgeRenderingEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "set_edgeRenderingEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color GlobalNamespace::OVRPassthroughLayer::get_edgeColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "get_edgeColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::set_edgeColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "set_edgeColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRPassthroughLayer::add_PassthroughLayerResumed(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "add_PassthroughLayerResumed", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRPassthroughLayer::remove_PassthroughLayerResumed(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "remove_PassthroughLayerResumed", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRPassthroughLayer::SetColorMap(::ArrayW<::UnityEngine::Color> values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "SetColorMap", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, values);
}
inline void GlobalNamespace::OVRPassthroughLayer::SetColorLut(::GlobalNamespace::OVRPassthroughColorLut* lut, float_t weight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(),
                                                           { "SetColorLut", {}, { ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lut, weight);
}
inline void GlobalNamespace::OVRPassthroughLayer::SetColorLut(::GlobalNamespace::OVRPassthroughColorLut* lutSource, ::GlobalNamespace::OVRPassthroughColorLut* lutTarget, float_t weight) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(),
          { "SetColorLut", {}, { ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut*>(), ::i2c::type_of<::GlobalNamespace::OVRPassthroughColorLut*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lutSource, lutTarget, weight);
}
inline void GlobalNamespace::OVRPassthroughLayer::SetColorMapControls(float_t contrast, float_t brightness, float_t posterize, ::UnityEngine::Gradient* gradient,
                                                                      ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType colorMapType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(),
                                                           { "SetColorMapControls",
                                                             {},
                                                             { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Gradient*>(),
                                                               ::i2c::type_of<::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contrast, brightness, posterize, gradient, colorMapType);
}
inline void GlobalNamespace::OVRPassthroughLayer::SetColorMapMonochromatic(::ArrayW<uint8_t> values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "SetColorMapMonochromatic", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, values);
}
inline void GlobalNamespace::OVRPassthroughLayer::SetBrightnessContrastSaturation(float_t brightness, float_t contrast, float_t saturation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(),
                                                           { "SetBrightnessContrastSaturation", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, brightness, contrast, saturation);
}
inline void GlobalNamespace::OVRPassthroughLayer::DisableColorMap() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "DisableColorMap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType GlobalNamespace::OVRPassthroughLayer::get_colorMapEditorType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "get_colorMapEditorType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::set_colorMapEditorType(::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(),
                                                           { "set_colorMapEditorType", {}, { ::i2c::type_of<::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRPassthroughLayer::SetStyleDirty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "SetStyleDirty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::AddDeferredSurfaceGeometries() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "AddDeferredSurfaceGeometries", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 GlobalNamespace::OVRPassthroughLayer::GetTransformMatrixForPassthroughSurfaceObject(::UnityEngine::Matrix4x4 worldFromObj) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(),
                                                                                         { "GetTransformMatrixForPassthroughSurfaceObject", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method, worldFromObj);
}
inline bool GlobalNamespace::OVRPassthroughLayer::CreateAndAddMesh(::UnityEngine::GameObject* obj, ::by_ref<uint64_t> meshHandle, ::by_ref<uint64_t> instanceHandle,
                                                                   ::by_ref<::UnityEngine::Matrix4x4> localToWorld) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(),
                                                                                         { "CreateAndAddMesh",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::by_ref<uint64_t>>(),
                                                                                             ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj, meshHandle, instanceHandle, localToWorld);
}
inline void GlobalNamespace::OVRPassthroughLayer::DestroySurfaceGeometries(bool addBackToDeferredQueue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "DestroySurfaceGeometries", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, addBackToDeferredQueue);
}
inline void GlobalNamespace::OVRPassthroughLayer::UpdateSurfaceGeometryTransforms() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "UpdateSurfaceGeometryTransforms", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::UpdateSurfaceGeometryTransform(uint64_t instanceHandle, ::UnityEngine::Matrix4x4 localToWorld) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(),
                                                           { "UpdateSurfaceGeometryTransform", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceHandle, localToWorld);
}
inline ::UnityEngine::Gradient* GlobalNamespace::OVRPassthroughLayer::CreateNeutralColorMapGradient() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "CreateNeutralColorMapGradient", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Gradient*>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRPassthroughLayer::HasControlsBasedColorMap() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "HasControlsBasedColorMap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::UpdateColorMapFromControls(bool forceUpdate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "UpdateColorMapFromControls", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forceUpdate);
}
inline void GlobalNamespace::OVRPassthroughLayer::SyncToOverlay() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "SyncToOverlay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRPassthroughLayer::IsUserDefinedAndDoesNotContainSurfaceGeometry() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "IsUserDefinedAndDoesNotContainSurfaceGeometry", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t GlobalNamespace::OVRPassthroughLayer::ClampWeight(float_t weight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "ClampWeight", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, weight);
}
inline ::GlobalNamespace::OVROverlay_OverlayShape GlobalNamespace::OVRPassthroughLayer::get_overlayShape() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "get_overlayShape", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVROverlay_OverlayShape>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2 GlobalNamespace::OVRPassthroughLayer::CreateOvrPluginStyleObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "CreateOvrPluginStyleObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::OnPassthroughLayerResumed(int32_t layerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { "OnPassthroughLayerResumed", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layerId);
}
inline void GlobalNamespace::OVRPassthroughLayer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRPassthroughLayer* GlobalNamespace::OVRPassthroughLayer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRPassthroughLayer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPassthroughLayer::OVRPassthroughLayer() {}
