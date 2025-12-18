#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DrawSkyboxPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DrawSkyboxPass_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DrawSkyboxPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData::*)()>(
    &::UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66cc878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Experimental::Rendering::XRPass*& UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData::__cordl_internal_get_xr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xr;
}
constexpr ::UnityEngine::Experimental::Rendering::XRPass* const& UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData::__cordl_internal_get_xr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xr;
}
constexpr void UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData::__cordl_internal_set_xr(::UnityEngine::Experimental::Rendering::XRPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData::__cordl_internal_get_skyRendererListHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skyRendererListHandle;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData::__cordl_internal_get_skyRendererListHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skyRendererListHandle;
}
constexpr void UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData::__cordl_internal_set_skyRendererListHandle(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___skyRendererListHandle = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___material)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData* UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData::DrawSkyboxPass_PassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawSkyboxPass___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DrawSkyboxPass___c::*)()>(
    &::UnityEngine::Rendering::Universal::DrawSkyboxPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66cc8d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawSkyboxPass___c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawSkyboxPass___c._Render_b__7_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DrawSkyboxPass___c::*)(
    ::UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::DrawSkyboxPass___c::_Render_b__7_0)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x66cc8d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawSkyboxPass___c*>::get(), "<Render>b__7_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::DrawSkyboxPass___c::setStaticF___9(::UnityEngine::Rendering::Universal::DrawSkyboxPass___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::DrawSkyboxPass___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawSkyboxPass___c*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::DrawSkyboxPass___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::DrawSkyboxPass___c* UnityEngine::Rendering::Universal::DrawSkyboxPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::DrawSkyboxPass___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawSkyboxPass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::DrawSkyboxPass___c::setStaticF___9__7_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
        value) {
  ::cordl_internals::setStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__7_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawSkyboxPass___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::DrawSkyboxPass___c::getStaticF___9__7_0() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__7_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawSkyboxPass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::DrawSkyboxPass___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawSkyboxPass___c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DrawSkyboxPass___c::_Render_b__7_0(::UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData* data,
                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawSkyboxPass___c*>::get(), "<Render>b__7_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::Universal::DrawSkyboxPass___c* UnityEngine::Rendering::Universal::DrawSkyboxPass___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DrawSkyboxPass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DrawSkyboxPass___c::DrawSkyboxPass___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawSkyboxPass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DrawSkyboxPass::*)(::UnityEngine::Rendering::Universal::RenderPassEvent)>(
    &::UnityEngine::Rendering::Universal::DrawSkyboxPass::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x66cbb68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawSkyboxPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawSkyboxPass.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DrawSkyboxPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::DrawSkyboxPass::Execute)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x66cbbfc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawSkyboxPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawSkyboxPass*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawSkyboxPass.CreateSkyboxRendererList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RendererList (::UnityEngine::Rendering::Universal::DrawSkyboxPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::Universal::UniversalCameraData*)>(&::UnityEngine::Rendering::Universal::DrawSkyboxPass::CreateSkyboxRendererList)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x66cbd34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawSkyboxPass*>::get(), "CreateSkyboxRendererList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawSkyboxPass.CreateSkyBoxRendererList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle (
    ::UnityEngine::Rendering::Universal::DrawSkyboxPass::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
    &::UnityEngine::Rendering::Universal::DrawSkyboxPass::CreateSkyBoxRendererList)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x66cbff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawSkyboxPass*>::get(), "CreateSkyBoxRendererList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawSkyboxPass.ExecutePass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Experimental::Rendering::XRPass*, ::UnityEngine::Rendering::RendererList)>(
        &::UnityEngine::Rendering::Universal::DrawSkyboxPass::ExecutePass)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x66cbed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawSkyboxPass*>::get(), "ExecutePass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RendererList>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawSkyboxPass.InitPassData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DrawSkyboxPass::*)(
    ::ByRef<::UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData*>, ::ByRef<::UnityEngine::Experimental::Rendering::XRPass*>,
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>)>(&::UnityEngine::Rendering::Universal::DrawSkyboxPass::InitPassData)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x66cc164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawSkyboxPass*>::get(), "InitPassData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Experimental::Rendering::XRPass*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawSkyboxPass.Render
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DrawSkyboxPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*, ::UnityEngine::Rendering::ScriptableRenderContext,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Material*)>(
    &::UnityEngine::Rendering::Universal::DrawSkyboxPass::Render)> {
  constexpr static std::size_t size = 0x6dc;
  constexpr static std::size_t addrs = 0x66cc19c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawSkyboxPass*>::get(), "Render", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ContextContainer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::DrawSkyboxPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawSkyboxPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::Rendering::Universal::DrawSkyboxPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                       ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawSkyboxPass*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
inline ::UnityEngine::Rendering::RendererList UnityEngine::Rendering::Universal::DrawSkyboxPass::CreateSkyboxRendererList(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                                                          ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawSkyboxPass*>::get(), "CreateSkyboxRendererList", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RendererList, false>(this, ___internal_method, context, cameraData);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle
UnityEngine::Rendering::Universal::DrawSkyboxPass::CreateSkyBoxRendererList(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                            ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawSkyboxPass*>::get(), "CreateSkyBoxRendererList", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle, false>(this, ___internal_method, renderGraph, cameraData);
}
inline void UnityEngine::Rendering::Universal::DrawSkyboxPass::ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Experimental::Rendering::XRPass* xr,
                                                                           ::UnityEngine::Rendering::RendererList rendererList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawSkyboxPass*>::get(), "ExecutePass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RendererList>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, xr, rendererList);
}
inline void UnityEngine::Rendering::Universal::DrawSkyboxPass::InitPassData(::ByRef<::UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData*> passData,
                                                                            ::ByRef<::UnityEngine::Experimental::Rendering::XRPass*> xr,
                                                                            ::ByRef<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawSkyboxPass*>::get(), "InitPassData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Experimental::Rendering::XRPass*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, passData, xr, handle);
}
inline void UnityEngine::Rendering::Universal::DrawSkyboxPass::Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
                                                                      ::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle colorTarget,
                                                                      ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthTarget, ::UnityEngine::Material* skyboxMaterial) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawSkyboxPass*>::get(), "Render", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ContextContainer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraph, frameData, context, colorTarget, depthTarget, skyboxMaterial);
}
inline ::UnityEngine::Rendering::Universal::DrawSkyboxPass* UnityEngine::Rendering::Universal::DrawSkyboxPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DrawSkyboxPass*>(evt));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DrawSkyboxPass::DrawSkyboxPass() {}
