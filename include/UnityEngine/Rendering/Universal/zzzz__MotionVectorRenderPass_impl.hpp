#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/MotionVectorRenderPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__MotionVectorRenderPass_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__MotionVectorRenderPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__MotionVectorsPersistentData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawingSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData::*)()>(
    &::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66ceeb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData::__cordl_internal_get_camera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData::__cordl_internal_get_camera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___camera;
}
constexpr void UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData::__cordl_internal_set_camera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___camera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Experimental::Rendering::XRPass*& UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData::__cordl_internal_get_xr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xr;
}
constexpr ::UnityEngine::Experimental::Rendering::XRPass* const& UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData::__cordl_internal_get_xr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xr;
}
constexpr void UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData::__cordl_internal_set_xr(::UnityEngine::Experimental::Rendering::XRPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData::__cordl_internal_get_motionVectorColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___motionVectorColor;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData::__cordl_internal_get_motionVectorColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___motionVectorColor;
}
constexpr void UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData::__cordl_internal_set_motionVectorColor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___motionVectorColor = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData::__cordl_internal_get_motionVectorDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___motionVectorDepth;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData::__cordl_internal_get_motionVectorDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___motionVectorDepth;
}
constexpr void UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData::__cordl_internal_set_motionVectorDepth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___motionVectorDepth = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData::__cordl_internal_get_cameraDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraDepth;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData::__cordl_internal_get_cameraDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraDepth;
}
constexpr void UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData::__cordl_internal_set_cameraDepth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraDepth = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData::__cordl_internal_get_cameraMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData::__cordl_internal_get_cameraMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraMaterial;
}
constexpr void UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData::__cordl_internal_set_cameraMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cameraMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData::__cordl_internal_get_rendererListHdl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererListHdl;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData::__cordl_internal_get_rendererListHdl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererListHdl;
}
constexpr void UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData::__cordl_internal_set_rendererListHdl(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rendererListHdl = value;
}
constexpr ::UnityEngine::Rendering::RendererList& UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData::__cordl_internal_get_rendererList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererList;
}
constexpr ::UnityEngine::Rendering::RendererList const& UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData::__cordl_internal_get_rendererList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererList;
}
constexpr void UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData::__cordl_internal_set_rendererList(::UnityEngine::Rendering::RendererList value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rendererList = value;
}
inline void UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData* UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData::MotionVectorRenderPass_PassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorRenderPass_MotionMatrixPassData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::MotionVectorRenderPass_MotionMatrixPassData::*)()>(
    &::UnityEngine::Rendering::Universal::MotionVectorRenderPass_MotionMatrixPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66d0aa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_MotionMatrixPassData*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*& UnityEngine::Rendering::Universal::MotionVectorRenderPass_MotionMatrixPassData::__cordl_internal_get_motionData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___motionData;
}
constexpr ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData* const&
UnityEngine::Rendering::Universal::MotionVectorRenderPass_MotionMatrixPassData::__cordl_internal_get_motionData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___motionData;
}
constexpr void
UnityEngine::Rendering::Universal::MotionVectorRenderPass_MotionMatrixPassData::__cordl_internal_set_motionData(::UnityEngine::Rendering::Universal::MotionVectorsPersistentData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___motionData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Experimental::Rendering::XRPass*& UnityEngine::Rendering::Universal::MotionVectorRenderPass_MotionMatrixPassData::__cordl_internal_get_xr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xr;
}
constexpr ::UnityEngine::Experimental::Rendering::XRPass* const& UnityEngine::Rendering::Universal::MotionVectorRenderPass_MotionMatrixPassData::__cordl_internal_get_xr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xr;
}
constexpr void UnityEngine::Rendering::Universal::MotionVectorRenderPass_MotionMatrixPassData::__cordl_internal_set_xr(::UnityEngine::Experimental::Rendering::XRPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::MotionVectorRenderPass_MotionMatrixPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_MotionMatrixPassData*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::MotionVectorRenderPass_MotionMatrixPassData* UnityEngine::Rendering::Universal::MotionVectorRenderPass_MotionMatrixPassData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_MotionMatrixPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::MotionVectorRenderPass_MotionMatrixPassData::MotionVectorRenderPass_MotionMatrixPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c::*)()>(
    &::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66d0b00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c._Render_b__23_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c::*)(
    ::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c::_Render_b__23_0)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x66d0b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c*>::get(), "<Render>b__23_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c._SetRenderGraphMotionVectorGlobalMatrices_b__26_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c::*)(
    ::UnityEngine::Rendering::Universal::MotionVectorRenderPass_MotionMatrixPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c::_SetRenderGraphMotionVectorGlobalMatrices_b__26_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x66d0c54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c*>::get(), "<SetRenderGraphMotionVectorGlobalMatrices>b__26_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_MotionMatrixPassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::MotionVectorRenderPass___c::setStaticF___9(::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c* UnityEngine::Rendering::Universal::MotionVectorRenderPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::MotionVectorRenderPass___c::setStaticF___9__23_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__23_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::MotionVectorRenderPass___c::getStaticF___9__23_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__23_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::MotionVectorRenderPass___c::setStaticF___9__26_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_MotionMatrixPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_MotionMatrixPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__26_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_MotionMatrixPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_MotionMatrixPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::MotionVectorRenderPass___c::getStaticF___9__26_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_MotionMatrixPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__26_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::MotionVectorRenderPass___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::MotionVectorRenderPass___c::_Render_b__23_0(::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData* data,
                                                                                           ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c*>::get(), "<Render>b__23_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, context);
}
inline void
UnityEngine::Rendering::Universal::MotionVectorRenderPass___c::_SetRenderGraphMotionVectorGlobalMatrices_b__26_0(::UnityEngine::Rendering::Universal::MotionVectorRenderPass_MotionMatrixPassData* data,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c*>::get(), "<SetRenderGraphMotionVectorGlobalMatrices>b__26_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_MotionMatrixPassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c* UnityEngine::Rendering::Universal::MotionVectorRenderPass___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::MotionVectorRenderPass___c::MotionVectorRenderPass___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorRenderPass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::MotionVectorRenderPass::*)(
    ::UnityEngine::Rendering::Universal::RenderPassEvent, ::UnityEngine::Material*, ::UnityEngine::LayerMask)>(&::UnityEngine::Rendering::Universal::MotionVectorRenderPass::_ctor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x66ced5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorRenderPass.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::MotionVectorRenderPass::*)(
    ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*)>(&::UnityEngine::Rendering::Universal::MotionVectorRenderPass::Setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66ceeb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorRenderPass.Configure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::MotionVectorRenderPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureDescriptor)>(&::UnityEngine::Rendering::Universal::MotionVectorRenderPass::Configure)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x66ceec0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorRenderPass.ExecutePass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData*, ::UnityEngine::Rendering::RendererList)>(
        &::UnityEngine::Rendering::Universal::MotionVectorRenderPass::ExecutePass)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x66cefa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass*>::get(), "ExecutePass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RendererList>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorRenderPass.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::MotionVectorRenderPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::MotionVectorRenderPass::Execute)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x66cf320;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorRenderPass.GetDrawingSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::DrawingSettings (*)(::UnityEngine::Camera*, bool)>(
    &::UnityEngine::Rendering::Universal::MotionVectorRenderPass::GetDrawingSettings)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x66cf74c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass*>::get(), "GetDrawingSettings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorRenderPass.DrawCameraMotionVectors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Experimental::Rendering::XRPass*, ::UnityEngine::Material*)>(
        &::UnityEngine::Rendering::Universal::MotionVectorRenderPass::DrawCameraMotionVectors)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x66cf0bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass*>::get(), "DrawCameraMotionVectors",
                                                 std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorRenderPass.DrawObjectMotionVectors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Experimental::Rendering::XRPass*, ::ByRef<::UnityEngine::Rendering::RendererList>)>(
        &::UnityEngine::Rendering::Universal::MotionVectorRenderPass::DrawObjectMotionVectors)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x66cf268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass*>::get(), "DrawObjectMotionVectors",
                                                 std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RendererList>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorRenderPass.InitPassData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::MotionVectorRenderPass::*)(
    ::ByRef<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData*>, ::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
    &::UnityEngine::Rendering::Universal::MotionVectorRenderPass::InitPassData)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x66cf4f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass*>::get(), "InitPassData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorRenderPass.InitRendererLists
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::MotionVectorRenderPass::*)(
    ::ByRef<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData*>, ::ByRef<::UnityEngine::Rendering::CullingResults>, bool, ::UnityEngine::Rendering::ScriptableRenderContext,
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, bool)>(&::UnityEngine::Rendering::Universal::MotionVectorRenderPass::InitRendererLists)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x66cf53c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass*>::get(), "InitRendererLists", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CullingResults>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorRenderPass.Render
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::MotionVectorRenderPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(&::UnityEngine::Rendering::Universal::MotionVectorRenderPass::Render)> {
  constexpr static std::size_t size = 0xaec;
  constexpr static std::size_t addrs = 0x66cf978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass*>::get(), "Render", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ContextContainer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorRenderPass.SetMotionVectorGlobalMatrices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
    &::UnityEngine::Rendering::Universal::MotionVectorRenderPass::SetMotionVectorGlobalMatrices)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x66d0464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass*>::get(), "SetMotionVectorGlobalMatrices",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorRenderPass.SetRenderGraphMotionVectorGlobalMatrices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
        &::UnityEngine::Rendering::Universal::MotionVectorRenderPass::SetRenderGraphMotionVectorGlobalMatrices)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x66d0530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass*>::get(),
                                    "SetRenderGraphMotionVectorGlobalMatrices", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::MotionVectorRenderPass::__cordl_internal_get_m_Color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Color;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::MotionVectorRenderPass::__cordl_internal_get_m_Color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Color;
}
constexpr void UnityEngine::Rendering::Universal::MotionVectorRenderPass::__cordl_internal_set_m_Color(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Color)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::MotionVectorRenderPass::__cordl_internal_get_m_Depth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Depth;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::MotionVectorRenderPass::__cordl_internal_get_m_Depth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Depth;
}
constexpr void UnityEngine::Rendering::Universal::MotionVectorRenderPass::__cordl_internal_set_m_Depth(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Depth)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::MotionVectorRenderPass::__cordl_internal_get_m_CameraMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::MotionVectorRenderPass::__cordl_internal_get_m_CameraMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraMaterial;
}
constexpr void UnityEngine::Rendering::Universal::MotionVectorRenderPass::__cordl_internal_set_m_CameraMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CameraMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::FilteringSettings& UnityEngine::Rendering::Universal::MotionVectorRenderPass::__cordl_internal_get_m_FilteringSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr ::UnityEngine::Rendering::FilteringSettings const& UnityEngine::Rendering::Universal::MotionVectorRenderPass::__cordl_internal_get_m_FilteringSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr void UnityEngine::Rendering::Universal::MotionVectorRenderPass::__cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FilteringSettings = value;
}
constexpr ::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData*& UnityEngine::Rendering::Universal::MotionVectorRenderPass::__cordl_internal_get_m_PassData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr ::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData* const& UnityEngine::Rendering::Universal::MotionVectorRenderPass::__cordl_internal_get_m_PassData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr void UnityEngine::Rendering::Universal::MotionVectorRenderPass::__cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PassData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::MotionVectorRenderPass::setStaticF_s_ShaderTags(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "s_ShaderTags",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> UnityEngine::Rendering::Universal::MotionVectorRenderPass::getStaticF_s_ShaderTags() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "s_ShaderTags",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::MotionVectorRenderPass::setStaticF_s_CameraDepthTextureID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CameraDepthTextureID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::MotionVectorRenderPass::getStaticF_s_CameraDepthTextureID() {
  return ::cordl_internals::getStaticField<int32_t, "s_CameraDepthTextureID",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::MotionVectorRenderPass::setStaticF_s_SetMotionMatrixProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "s_SetMotionMatrixProfilingSampler",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::MotionVectorRenderPass::getStaticF_s_SetMotionMatrixProfilingSampler() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "s_SetMotionMatrixProfilingSampler",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::MotionVectorRenderPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Material* cameraMaterial,
                                                                             ::UnityEngine::LayerMask opaqueLayerMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, cameraMaterial, opaqueLayerMask);
}
inline void UnityEngine::Rendering::Universal::MotionVectorRenderPass::Setup(::UnityEngine::Rendering::RTHandle* color, ::UnityEngine::Rendering::RTHandle* depth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color, depth);
}
inline void UnityEngine::Rendering::Universal::MotionVectorRenderPass::Configure(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, cameraTextureDescriptor);
}
inline void UnityEngine::Rendering::Universal::MotionVectorRenderPass::ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                   ::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData* passData,
                                                                                   ::UnityEngine::Rendering::RendererList rendererList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass*>::get(), "ExecutePass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RendererList>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, passData, rendererList);
}
inline void UnityEngine::Rendering::Universal::MotionVectorRenderPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                               ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
inline ::UnityEngine::Rendering::DrawingSettings UnityEngine::Rendering::Universal::MotionVectorRenderPass::GetDrawingSettings(::UnityEngine::Camera* camera, bool supportsDynamicBatching) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass*>::get(), "GetDrawingSettings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DrawingSettings, false>(nullptr, ___internal_method, camera, supportsDynamicBatching);
}
inline void UnityEngine::Rendering::Universal::MotionVectorRenderPass::DrawCameraMotionVectors(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Experimental::Rendering::XRPass* xr,
                                                                                               ::UnityEngine::Material* cameraMaterial) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass*>::get(), "DrawCameraMotionVectors", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, xr, cameraMaterial);
}
inline void UnityEngine::Rendering::Universal::MotionVectorRenderPass::DrawObjectMotionVectors(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Experimental::Rendering::XRPass* xr,
                                                                                               ::ByRef<::UnityEngine::Rendering::RendererList> rendererList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass*>::get(), "DrawObjectMotionVectors", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RendererList>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, xr, rendererList);
}
inline void UnityEngine::Rendering::Universal::MotionVectorRenderPass::InitPassData(::ByRef<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData*> passData,
                                                                                    ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass*>::get(), "InitPassData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, passData, cameraData);
}
inline void UnityEngine::Rendering::Universal::MotionVectorRenderPass::InitRendererLists(::ByRef<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData*> passData,
                                                                                         ::ByRef<::UnityEngine::Rendering::CullingResults> cullResults, bool supportsDynamicBatching,
                                                                                         ::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, bool useRenderGraph) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass*>::get(), "InitRendererLists", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::MotionVectorRenderPass_PassData*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CullingResults>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, passData, cullResults, supportsDynamicBatching, context, renderGraph, useRenderGraph);
}
inline void UnityEngine::Rendering::Universal::MotionVectorRenderPass::Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                              ::UnityEngine::Rendering::ContextContainer* frameData,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::TextureHandle cameraDepthTexture,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::TextureHandle motionVectorColor,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::TextureHandle motionVectorDepth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass*>::get(), "Render", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ContextContainer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraph, frameData, cameraDepthTexture, motionVectorColor, motionVectorDepth);
}
inline void UnityEngine::Rendering::Universal::MotionVectorRenderPass::SetMotionVectorGlobalMatrices(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                                     ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass*>::get(), "SetMotionVectorGlobalMatrices",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, cameraData);
}
inline void UnityEngine::Rendering::Universal::MotionVectorRenderPass::SetRenderGraphMotionVectorGlobalMatrices(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                                ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorRenderPass*>::get(),
                                  "SetRenderGraphMotionVectorGlobalMatrices", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, renderGraph, cameraData);
}
inline ::UnityEngine::Rendering::Universal::MotionVectorRenderPass* UnityEngine::Rendering::Universal::MotionVectorRenderPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                                                                        ::UnityEngine::Material* cameraMaterial,
                                                                                                                                        ::UnityEngine::LayerMask opaqueLayerMask) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::MotionVectorRenderPass*>(evt, cameraMaterial, opaqueLayerMask));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::MotionVectorRenderPass::MotionVectorRenderPass() {}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::Rendering::Universal::MotionVectorRenderPass::k_TargetFormat{ static_cast<int32_t>(0x2e) };
