#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/CopyDepthPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__CopyDepthPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__CopyDepthPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalResourceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass_ShaderConstants::setStaticF__CameraDepthAttachment(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_CameraDepthAttachment",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::CopyDepthPass_ShaderConstants::getStaticF__CameraDepthAttachment() {
  return ::cordl_internals::getStaticField<int32_t, "_CameraDepthAttachment",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass_ShaderConstants::setStaticF__CameraDepthTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_CameraDepthTexture",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::CopyDepthPass_ShaderConstants::getStaticF__CameraDepthTexture() {
  return ::cordl_internals::getStaticField<int32_t, "_CameraDepthTexture",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass_ShaderConstants::setStaticF__ZWriteShaderHandle(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ZWriteShaderHandle",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::CopyDepthPass_ShaderConstants::getStaticF__ZWriteShaderHandle() {
  return ::cordl_internals::getStaticField<int32_t, "_ZWriteShaderHandle",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_ShaderConstants*>::get>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_ShaderConstants::CopyDepthPass_ShaderConstants() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6743c34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_set_source(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___source = value;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_get_cameraData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_get_cameraData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cameraData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_get_copyDepthMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___copyDepthMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_get_copyDepthMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___copyDepthMaterial;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_set_copyDepthMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___copyDepthMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_get_msaaSamples() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___msaaSamples;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_get_msaaSamples() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___msaaSamples;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_set_msaaSamples(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___msaaSamples = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_get_copyResolvedDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___copyResolvedDepth;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_get_copyResolvedDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___copyResolvedDepth;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_set_copyResolvedDepth(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___copyResolvedDepth = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_get_copyToDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___copyToDepth;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_get_copyToDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___copyToDepth;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_set_copyToDepth(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___copyToDepth = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_get_isDstBackbuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDstBackbuffer;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_get_isDstBackbuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDstBackbuffer;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_set_isDstBackbuffer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isDstBackbuffer = value;
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData* UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::CopyDepthPass_PassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67450a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c._Render_b__38_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c::*)(
    ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c::_Render_b__38_0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x67450a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c*>::get(), "<Render>b__38_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c::setStaticF___9(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c* UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c::setStaticF___9__38_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__38_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c::getStaticF___9__38_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__38_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c::_Render_b__38_0(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData* data,
                                                                                            ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c*>::get(), "<Render>b__38_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c* UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c::CopyDepthPass___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.get_source
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::get_source)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67439f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), "get_source",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.set_source
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)(::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::set_source)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67439fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), "set_source", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.get_destination
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::get_destination)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6743a04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), "get_destination",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.set_destination
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)(::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::set_destination)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6743a0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), "set_destination", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.get_MssaSamples
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::get_MssaSamples)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6743a14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), "get_MssaSamples",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.set_MssaSamples
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::set_MssaSamples)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6743a1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), "set_MssaSamples",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.get_CopyToDepth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::get_CopyToDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6743a24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), "get_CopyToDepth",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.set_CopyToDepth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::set_CopyToDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6743a2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), "set_CopyToDepth",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.get_CopyToDepthXR
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::get_CopyToDepthXR)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6743a34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), "get_CopyToDepthXR",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.set_CopyToDepthXR
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::set_CopyToDepthXR)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6743a3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), "set_CopyToDepthXR",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.get_CopyToBackbuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::get_CopyToBackbuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6743a44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), "get_CopyToBackbuffer",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.set_CopyToBackbuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::set_CopyToBackbuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6743a4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), "set_CopyToBackbuffer",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)(
    ::UnityEngine::Rendering::Universal::RenderPassEvent, ::UnityEngine::Shader*, bool, bool, bool, ::StringW)>(&::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::_ctor)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x6743a54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)(
    ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*)>(&::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::Setup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6743c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6743c48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.OnCameraSetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::OnCameraSetup)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6743ca8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::Execute)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x6743ce0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.ExecutePass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*, ::UnityEngine::Rendering::RTHandle*)>(
        &::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::ExecutePass)> {
  constexpr static std::size_t size = 0x618;
  constexpr static std::size_t addrs = 0x6743ec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), "ExecutePass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.OnCameraCleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::OnCameraCleanup)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x67444d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.Render
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, bool, ::StringW)>(&::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::Render)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6744594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), "Render", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ContextContainer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.Render
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle,
    ::UnityEngine::Rendering::Universal::UniversalResourceData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, bool, ::StringW)>(
    &::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::Render)> {
  constexpr static std::size_t size = 0x8e8;
  constexpr static std::size_t addrs = 0x674468c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), "Render", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalResourceData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get__source_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____source_k__BackingField;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get__source_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____source_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_set__source_k__BackingField(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____source_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get__destination_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destination_k__BackingField;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get__destination_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destination_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_set__destination_k__BackingField(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____destination_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get__MssaSamples_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MssaSamples_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get__MssaSamples_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MssaSamples_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_set__MssaSamples_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MssaSamples_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get__CopyToDepth_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CopyToDepth_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get__CopyToDepth_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CopyToDepth_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_set__CopyToDepth_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CopyToDepth_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get__CopyToDepthXR_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CopyToDepthXR_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get__CopyToDepthXR_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CopyToDepthXR_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_set__CopyToDepthXR_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CopyToDepthXR_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get__CopyToBackbuffer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CopyToBackbuffer_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get__CopyToBackbuffer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CopyToBackbuffer_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_set__CopyToBackbuffer_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CopyToBackbuffer_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get_m_CopyDepthMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyDepthMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get_m_CopyDepthMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyDepthMaterial;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_set_m_CopyDepthMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CopyDepthMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get_m_CopyResolvedDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyResolvedDepth;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get_m_CopyResolvedDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyResolvedDepth;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_set_m_CopyResolvedDepth(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CopyResolvedDepth = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get_m_ShouldClear() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShouldClear;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get_m_ShouldClear() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShouldClear;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_set_m_ShouldClear(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShouldClear = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get_m_PassData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData* const& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get_m_PassData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PassData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::Internal::CopyDepthPass::get_source() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), "get_source",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::set_source(::UnityEngine::Rendering::RTHandle* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), "set_source", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::Internal::CopyDepthPass::get_destination() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), "get_destination",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::set_destination(::UnityEngine::Rendering::RTHandle* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), "set_destination", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::CopyDepthPass::get_MssaSamples() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), "get_MssaSamples",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::set_MssaSamples(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), "set_MssaSamples",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Internal::CopyDepthPass::get_CopyToDepth() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), "get_CopyToDepth",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::set_CopyToDepth(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), "set_CopyToDepth",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Internal::CopyDepthPass::get_CopyToDepthXR() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), "get_CopyToDepthXR",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::set_CopyToDepthXR(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), "set_CopyToDepthXR",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Internal::CopyDepthPass::get_CopyToBackbuffer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), "get_CopyToBackbuffer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::set_CopyToBackbuffer(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), "set_CopyToBackbuffer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Shader* copyDepthShader, bool shouldClear,
                                                                              bool copyToDepth, bool copyResolvedDepth, ::StringW customPassName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, copyDepthShader, shouldClear, copyToDepth, copyResolvedDepth, customPassName);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::Setup(::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rendering::RTHandle* destination) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, destination);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                      ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, renderingData);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                    ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData* passData,
                                                                                    ::UnityEngine::Rendering::RTHandle* source) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), "ExecutePass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, passData, source);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                               ::UnityEngine::Rendering::ContextContainer* frameData,
                                                                               ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination,
                                                                               ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source, bool bindAsCameraDepth, ::StringW passName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), "Render", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ContextContainer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraph, frameData, destination, source, bindAsCameraDepth, passName);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                               ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination,
                                                                               ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source,
                                                                               ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                                                                               ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, bool bindAsCameraDepth, ::StringW passName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>::get(), "Render", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalResourceData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraph, destination, source, resourceData, cameraData, bindAsCameraDepth, passName);
}
inline ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* UnityEngine::Rendering::Universal::Internal::CopyDepthPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                                                                          ::UnityEngine::Shader* copyDepthShader, bool shouldClear,
                                                                                                                                          bool copyToDepth, bool copyResolvedDepth,
                                                                                                                                          ::StringW customPassName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(evt, copyDepthShader, shouldClear, copyToDepth, copyResolvedDepth, customPassName));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::CopyDepthPass() {}
