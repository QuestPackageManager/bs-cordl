#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/XRView.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::XRView::*)(
    ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, bool, ::UnityEngine::Rect, ::UnityEngine::Mesh*, int32_t)>(&::UnityEngine::Experimental::Rendering::XRView::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6595644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRView>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRView.ComputeEyeCenterUV
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Experimental::Rendering::XRView::ComputeEyeCenterUV)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x659589c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRView>::get(), "ComputeEyeCenterUV", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Experimental::Rendering::XRView::_ctor(::UnityEngine::Matrix4x4 projMatrix, ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 prevViewMatrix,
                                                                bool isPrevViewMatrixValid, ::UnityEngine::Rect viewport, ::UnityEngine::Mesh* occlusionMesh, int32_t textureArraySlice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRView>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, projMatrix, viewMatrix, prevViewMatrix, isPrevViewMatrixValid, viewport, occlusionMesh, textureArraySlice);
}
inline ::UnityEngine::Vector2 UnityEngine::Experimental::Rendering::XRView::ComputeEyeCenterUV(::UnityEngine::Matrix4x4 proj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRView>::get(), "ComputeEyeCenterUV", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, proj);
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
