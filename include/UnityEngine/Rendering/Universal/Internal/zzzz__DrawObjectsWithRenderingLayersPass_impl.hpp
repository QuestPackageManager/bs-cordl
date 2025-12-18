#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/DrawObjectsWithRenderingLayersPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DrawObjectsPass_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingLayerUtils_impl.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DrawObjectsWithRenderingLayersPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DrawObjectsPass_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DrawObjectsWithRenderingLayersPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingLayerUtils_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__URPProfileId_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderQueueRange_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__StencilState_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData::*)()>(
        &::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x674b554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData*&
UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData::__cordl_internal_get_basePassData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basePassData;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData* const&
UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData::__cordl_internal_get_basePassData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basePassData;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData::__cordl_internal_set_basePassData(
    ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___basePassData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize&
UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData::__cordl_internal_get_maskSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maskSize;
}
constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize const&
UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData::__cordl_internal_get_maskSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maskSize;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData::__cordl_internal_set_maskSize(
    ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maskSize = value;
}
inline void UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData*
UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x674b5f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c._Render_b__7_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c::*)(
    ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c::_Render_b__7_0)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x674b5fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c*>::get(), "<Render>b__7_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
    return ___internal_method;
  }
};
inline void
UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c::setStaticF___9(::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c* UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c::setStaticF___9__7_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData*,
                                                                    ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__7_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c::getStaticF___9__7_0() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData*,
                                                                    ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__7_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c::_Render_b__7_0(
    ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c*>::get(), "<Render>b__7_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c* UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c::DrawObjectsWithRenderingLayersPass___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::*)(
    ::UnityEngine::Rendering::Universal::URPProfileId, bool, ::UnityEngine::Rendering::Universal::RenderPassEvent, ::UnityEngine::Rendering::RenderQueueRange, ::UnityEngine::LayerMask,
    ::UnityEngine::Rendering::StencilState, int32_t)>(&::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x674a484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::URPProfileId>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderQueueRange>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::StencilState>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::*)(
    ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::Setup)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x674a560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass*>::get(),
                                                 "Setup", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass.Configure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureDescriptor)>(&::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::Configure)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x674a6c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(
    &::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::Execute)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x674a6cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass.Render
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize, uint32_t)>(
    &::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::Render)> {
  constexpr static std::size_t size = 0xdd8;
  constexpr static std::size_t addrs = 0x674a77c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass*>::get(), "Render",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ContextContainer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>&
UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::__cordl_internal_get_m_ColorTargetIndentifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorTargetIndentifiers;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> const&
UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::__cordl_internal_get_m_ColorTargetIndentifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorTargetIndentifiers;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::__cordl_internal_set_m_ColorTargetIndentifiers(
    ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ColorTargetIndentifiers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::__cordl_internal_get_m_DepthTargetIndentifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthTargetIndentifiers;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::__cordl_internal_get_m_DepthTargetIndentifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthTargetIndentifiers;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::__cordl_internal_set_m_DepthTargetIndentifiers(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DepthTargetIndentifiers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::_ctor(::UnityEngine::Rendering::Universal::URPProfileId profilerTag, bool opaque,
                                                                                                   ::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                                   ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask,
                                                                                                   ::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::URPProfileId>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderQueueRange>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::StencilState>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, profilerTag, opaque, evt, renderQueueRange, layerMask, stencilState, stencilReference);
}
inline void UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::Setup(::UnityEngine::Rendering::RTHandle* colorAttachment,
                                                                                                   ::UnityEngine::Rendering::RTHandle* renderingLayersTexture,
                                                                                                   ::UnityEngine::Rendering::RTHandle* depthAttachment) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass*>::get(),
                                               "Setup", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colorAttachment, renderingLayersTexture, depthAttachment);
}
inline void UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::Configure(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                                       ::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, cameraTextureDescriptor);
}
inline void UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                                     ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::Render(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle colorTarget, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle renderingLayersTexture,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthTarget, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle mainShadowsTexture,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle additionalShadowsTexture, ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize maskSize, uint32_t batchLayerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass*>::get(), "Render",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ContextContainer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraph, frameData, colorTarget, renderingLayersTexture, depthTarget, mainShadowsTexture,
                                                          additionalShadowsTexture, maskSize, batchLayerMask);
}
inline ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass* UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::New_ctor(
    ::UnityEngine::Rendering::Universal::URPProfileId profilerTag, bool opaque, ::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::RenderQueueRange renderQueueRange,
    ::UnityEngine::LayerMask layerMask, ::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass*>(profilerTag, opaque, evt, renderQueueRange, layerMask,
                                                                                                                                      stencilState, stencilReference));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::DrawObjectsWithRenderingLayersPass() {}
