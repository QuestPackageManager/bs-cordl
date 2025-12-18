#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/DepthOnlyPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_impl.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DepthOnlyPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DepthOnlyPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalLightData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderQueueRange_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererListParams_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67476e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData::__cordl_internal_get_rendererList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererList;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData::__cordl_internal_get_rendererList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererList;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData::__cordl_internal_set_rendererList(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rendererList = value;
}
inline void UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData* UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData::DepthOnlyPass_PassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6748558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c._Render_b__20_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c::*)(
    ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c::_Render_b__20_0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x674855c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c*>::get(), "<Render>b__20_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c::setStaticF___9(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c* UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c::setStaticF___9__20_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__20_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c::getStaticF___9__20_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__20_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c::_Render_b__20_0(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData* data,
                                                                                            ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c*>::get(), "<Render>b__20_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c* UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c::DepthOnlyPass___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass.get_destination
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::get_destination)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x674751c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*>::get(), "get_destination",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass.set_destination
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::*)(::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::set_destination)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6747524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*>::get(), "set_destination", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass.get_shaderTagId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ShaderTagId (::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::get_shaderTagId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x674752c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*>::get(), "get_shaderTagId",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass.set_shaderTagId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::*)(::UnityEngine::Rendering::ShaderTagId)>(
    &::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::set_shaderTagId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6747534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*>::get(), "set_shaderTagId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ShaderTagId>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::*)(
    ::UnityEngine::Rendering::Universal::RenderPassEvent, ::UnityEngine::Rendering::RenderQueueRange, ::UnityEngine::LayerMask)>(
    &::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::_ctor)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x674753c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderQueueRange>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::*)(
    ::UnityEngine::RenderTextureDescriptor, ::UnityEngine::Rendering::RTHandle*)>(&::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::Setup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x67476e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureDescriptor>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass.OnCameraSetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::OnCameraSetup)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x67476f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass.ExecutePass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::RendererList)>(
    &::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::ExecutePass)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x67477b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*>::get(), "ExecutePass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RendererList>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::Execute)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x6747868;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass.InitRendererListParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RendererListParams (::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::*)(
    ::UnityEngine::Rendering::Universal::UniversalRenderingData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::Universal::UniversalLightData*)>(
    &::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::InitRendererListParams)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6747a64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*>::get(), "InitRendererListParams",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalRenderingData*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass.Render
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, uint32_t, bool)>(
    &::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::Render)> {
  constexpr static std::size_t size = 0x888;
  constexpr static std::size_t addrs = 0x6747bd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*>::get(), "Render", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ContextContainer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::__cordl_internal_get__destination_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destination_k__BackingField;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::__cordl_internal_get__destination_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destination_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::__cordl_internal_set__destination_k__BackingField(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____destination_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::__cordl_internal_get_depthStencilFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthStencilFormat;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::__cordl_internal_get_depthStencilFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthStencilFormat;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::__cordl_internal_set_depthStencilFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depthStencilFormat = value;
}
constexpr ::UnityEngine::Rendering::ShaderTagId& UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::__cordl_internal_get__shaderTagId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shaderTagId_k__BackingField;
}
constexpr ::UnityEngine::Rendering::ShaderTagId const& UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::__cordl_internal_get__shaderTagId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shaderTagId_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::__cordl_internal_set__shaderTagId_k__BackingField(::UnityEngine::Rendering::ShaderTagId value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shaderTagId_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData*& UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::__cordl_internal_get_m_PassData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData* const& UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::__cordl_internal_get_m_PassData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::__cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PassData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::FilteringSettings& UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::__cordl_internal_get_m_FilteringSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr ::UnityEngine::Rendering::FilteringSettings const& UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::__cordl_internal_get_m_FilteringSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::__cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FilteringSettings = value;
}
inline void UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::setStaticF_k_ShaderTagId(::UnityEngine::Rendering::ShaderTagId value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ShaderTagId, "k_ShaderTagId",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*>::get>(
      std::forward<::UnityEngine::Rendering::ShaderTagId>(value));
}
inline ::UnityEngine::Rendering::ShaderTagId UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::getStaticF_k_ShaderTagId() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ShaderTagId, "k_ShaderTagId",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::setStaticF_s_CameraDepthTextureID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CameraDepthTextureID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::getStaticF_s_CameraDepthTextureID() {
  return ::cordl_internals::getStaticField<int32_t, "s_CameraDepthTextureID",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*>::get>();
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::get_destination() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*>::get(), "get_destination",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::set_destination(::UnityEngine::Rendering::RTHandle* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*>::get(), "set_destination", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::ShaderTagId UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::get_shaderTagId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*>::get(), "get_shaderTagId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ShaderTagId, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::set_shaderTagId(::UnityEngine::Rendering::ShaderTagId value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*>::get(), "set_shaderTagId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ShaderTagId>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::RenderQueueRange renderQueueRange,
                                                                              ::UnityEngine::LayerMask layerMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderQueueRange>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, renderQueueRange, layerMask);
}
inline void UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::Setup(::UnityEngine::RenderTextureDescriptor baseDescriptor, ::UnityEngine::Rendering::RTHandle* depthAttachmentHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureDescriptor>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseDescriptor, depthAttachmentHandle);
}
inline void UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                      ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, renderingData);
}
inline void UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::RendererList rendererList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*>::get(), "ExecutePass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RendererList>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, rendererList);
}
inline void UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
inline ::UnityEngine::Rendering::RendererListParams
UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::InitRendererListParams(::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData,
                                                                                   ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                   ::UnityEngine::Rendering::Universal::UniversalLightData* lightData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*>::get(), "InitRendererListParams", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalRenderingData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RendererListParams, false>(this, ___internal_method, renderingData, cameraData, lightData);
}
inline void UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                               ::UnityEngine::Rendering::ContextContainer* frameData,
                                                                               ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> cameraDepthTexture, uint32_t batchLayerMask,
                                                                               bool setGlobalDepth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*>::get(), "Render", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ContextContainer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraph, frameData, cameraDepthTexture, batchLayerMask, setGlobalDepth);
}
inline ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass* UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                                                                          ::UnityEngine::Rendering::RenderQueueRange renderQueueRange,
                                                                                                                                          ::UnityEngine::LayerMask layerMask) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*>(evt, renderQueueRange, layerMask));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass::DepthOnlyPass() {}
