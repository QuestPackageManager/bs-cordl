#pragma once
// IWYU pragma private; include "UnityEngine\Experimental\Rendering\XRView.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRView_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRView::*)(
    ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, bool, ::UnityEngine::Rect, ::UnityEngine::Mesh*, int32_t)>(&::UnityEngine::Experimental::Rendering::XRView::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x674c7ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRView>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(),
                                                    ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRView.ComputeEyeCenterUV
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Matrix4x4)>(&::UnityEngine::Experimental::Rendering::XRView::ComputeEyeCenterUV)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x674ca04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRView>(), { "ComputeEyeCenterUV", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Experimental::Rendering::XRView::_ctor(::UnityEngine::Matrix4x4 projMatrix, ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 prevViewMatrix,
                                                                bool isPrevViewMatrixValid, ::UnityEngine::Rect viewport, ::UnityEngine::Mesh* occlusionMesh, int32_t textureArraySlice) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRView>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, projMatrix, viewMatrix, prevViewMatrix, isPrevViewMatrixValid, viewport, occlusionMesh, textureArraySlice);
}
inline ::UnityEngine::Vector2 UnityEngine::Experimental::Rendering::XRView::ComputeEyeCenterUV(::UnityEngine::Matrix4x4 proj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRView>(), { "ComputeEyeCenterUV", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, proj);
}
// Ctor Parameters [CppParam { name: "projMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "viewMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "prevViewMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "viewport", ty: "::UnityEngine::Rect",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "occlusionMesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: Some("{}") }, CppParam { name: "textureArraySlice", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "eyeCenterUV", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "isPrevViewMatrixValid",
// ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::XRView::XRView(::UnityEngine::Matrix4x4 projMatrix, ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 prevViewMatrix,
                                                                 ::UnityEngine::Rect viewport, ::UnityW<::UnityEngine::Mesh> occlusionMesh, int32_t textureArraySlice,
                                                                 ::UnityEngine::Vector2 eyeCenterUV, bool isPrevViewMatrixValid) noexcept {
  this->projMatrix = projMatrix;
  this->viewMatrix = viewMatrix;
  this->prevViewMatrix = prevViewMatrix;
  this->viewport = viewport;
  this->occlusionMesh = occlusionMesh;
  this->textureArraySlice = textureArraySlice;
  this->eyeCenterUV = eyeCenterUV;
  this->isPrevViewMatrixValid = isPrevViewMatrixValid;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::XRView::XRView() {}
