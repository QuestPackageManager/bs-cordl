#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/XRMirrorView.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRMirrorView_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRMirrorView.RenderMirrorView
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*, ::UnityEngine::Material*, Il2CppObject*)>(
    &::UnityEngine::Experimental::Rendering::XRMirrorView::RenderMirrorView)> {
  constexpr static std::size_t size = 0xe9c;
  constexpr static std::size_t addrs = 0x65906ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRMirrorView*>::get(), "RenderMirrorView", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Experimental::Rendering::XRMirrorView::setStaticF_s_MirrorViewMaterialProperty(::UnityEngine::MaterialPropertyBlock* value) {
  ::cordl_internals::setStaticField<::UnityEngine::MaterialPropertyBlock*, "s_MirrorViewMaterialProperty",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRMirrorView*>::get>(
      std::forward<::UnityEngine::MaterialPropertyBlock*>(value));
}
inline ::UnityEngine::MaterialPropertyBlock* UnityEngine::Experimental::Rendering::XRMirrorView::getStaticF_s_MirrorViewMaterialProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::MaterialPropertyBlock*, "s_MirrorViewMaterialProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRMirrorView*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRMirrorView::setStaticF_k_MirrorViewProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "k_MirrorViewProfilingSampler",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRMirrorView*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Experimental::Rendering::XRMirrorView::getStaticF_k_MirrorViewProfilingSampler() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "k_MirrorViewProfilingSampler",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRMirrorView*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRMirrorView::setStaticF_k_SourceTex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_SourceTex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRMirrorView*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Experimental::Rendering::XRMirrorView::getStaticF_k_SourceTex() {
  return ::cordl_internals::getStaticField<int32_t, "k_SourceTex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRMirrorView*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRMirrorView::setStaticF_k_SourceTexArraySlice(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_SourceTexArraySlice", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRMirrorView*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Experimental::Rendering::XRMirrorView::getStaticF_k_SourceTexArraySlice() {
  return ::cordl_internals::getStaticField<int32_t, "k_SourceTexArraySlice", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRMirrorView*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRMirrorView::setStaticF_k_ScaleBias(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_ScaleBias", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRMirrorView*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Experimental::Rendering::XRMirrorView::getStaticF_k_ScaleBias() {
  return ::cordl_internals::getStaticField<int32_t, "k_ScaleBias", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRMirrorView*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRMirrorView::setStaticF_k_ScaleBiasRt(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_ScaleBiasRt", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRMirrorView*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Experimental::Rendering::XRMirrorView::getStaticF_k_ScaleBiasRt() {
  return ::cordl_internals::getStaticField<int32_t, "k_ScaleBiasRt", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRMirrorView*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRMirrorView::setStaticF_k_SRGBRead(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_SRGBRead", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRMirrorView*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Experimental::Rendering::XRMirrorView::getStaticF_k_SRGBRead() {
  return ::cordl_internals::getStaticField<int32_t, "k_SRGBRead", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRMirrorView*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRMirrorView::setStaticF_k_SRGBWrite(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_SRGBWrite", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRMirrorView*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Experimental::Rendering::XRMirrorView::getStaticF_k_SRGBWrite() {
  return ::cordl_internals::getStaticField<int32_t, "k_SRGBWrite", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRMirrorView*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRMirrorView::setStaticF_k_MaxNits(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_MaxNits", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRMirrorView*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Experimental::Rendering::XRMirrorView::getStaticF_k_MaxNits() {
  return ::cordl_internals::getStaticField<int32_t, "k_MaxNits", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRMirrorView*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRMirrorView::setStaticF_k_SourceMaxNits(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_SourceMaxNits", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRMirrorView*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Experimental::Rendering::XRMirrorView::getStaticF_k_SourceMaxNits() {
  return ::cordl_internals::getStaticField<int32_t, "k_SourceMaxNits", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRMirrorView*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRMirrorView::setStaticF_k_SourceHDREncoding(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_SourceHDREncoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRMirrorView*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Experimental::Rendering::XRMirrorView::getStaticF_k_SourceHDREncoding() {
  return ::cordl_internals::getStaticField<int32_t, "k_SourceHDREncoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRMirrorView*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRMirrorView::setStaticF_k_ColorTransform(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_ColorTransform", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRMirrorView*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Experimental::Rendering::XRMirrorView::getStaticF_k_ColorTransform() {
  return ::cordl_internals::getStaticField<int32_t, "k_ColorTransform", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRMirrorView*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRMirrorView::RenderMirrorView(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Camera* camera, ::UnityEngine::Material* mat,
                                                                                 Il2CppObject* display) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRMirrorView*>::get(), "RenderMirrorView", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, camera, mat, display);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::XRMirrorView::XRMirrorView() {}
