#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/XROcclusionMeshPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__XROcclusionMeshPass_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__XROcclusionMeshPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData::*)()>(
    &::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66f24b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Experimental::Rendering::XRPass*& UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData::__cordl_internal_get_xr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xr;
}
constexpr ::UnityEngine::Experimental::Rendering::XRPass* const& UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData::__cordl_internal_get_xr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xr;
}
constexpr void UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData::__cordl_internal_set_xr(::UnityEngine::Experimental::Rendering::XRPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData::__cordl_internal_get_cameraColorAttachment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraColorAttachment;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData::__cordl_internal_get_cameraColorAttachment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraColorAttachment;
}
constexpr void UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData::__cordl_internal_set_cameraColorAttachment(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraColorAttachment = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData::__cordl_internal_get_cameraDepthAttachment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraDepthAttachment;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData::__cordl_internal_get_cameraDepthAttachment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraDepthAttachment;
}
constexpr void UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData::__cordl_internal_set_cameraDepthAttachment(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraDepthAttachment = value;
}
constexpr bool& UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData::__cordl_internal_get_isActiveTargetBackBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isActiveTargetBackBuffer;
}
constexpr bool const& UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData::__cordl_internal_get_isActiveTargetBackBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isActiveTargetBackBuffer;
}
constexpr void UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData::__cordl_internal_set_isActiveTargetBackBuffer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isActiveTargetBackBuffer = value;
}
inline void UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData* UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData::XROcclusionMeshPass_PassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c::*)()>(
    &::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66f2cf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c._Render_b__6_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c::*)(
    ::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c::_Render_b__6_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66f2cf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c*>::get(), "<Render>b__6_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::XROcclusionMeshPass___c::setStaticF___9(::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c* UnityEngine::Rendering::Universal::XROcclusionMeshPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::XROcclusionMeshPass___c::setStaticF___9__6_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
        value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__6_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::XROcclusionMeshPass___c::getStaticF___9__6_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__6_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::XROcclusionMeshPass___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::XROcclusionMeshPass___c::_Render_b__6_0(::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData* data,
                                                                                       ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c*>::get(), "<Render>b__6_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c* UnityEngine::Rendering::Universal::XROcclusionMeshPass___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c::XROcclusionMeshPass___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XROcclusionMeshPass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::XROcclusionMeshPass::*)(
    ::UnityEngine::Rendering::Universal::RenderPassEvent)>(&::UnityEngine::Rendering::Universal::XROcclusionMeshPass::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x66f23c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XROcclusionMeshPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XROcclusionMeshPass.ExecutePass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData*)>(&::UnityEngine::Rendering::Universal::XROcclusionMeshPass::ExecutePass)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x66f24bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XROcclusionMeshPass*>::get(), "ExecutePass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XROcclusionMeshPass.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::XROcclusionMeshPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::XROcclusionMeshPass::Execute)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x66f2550;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XROcclusionMeshPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XROcclusionMeshPass*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XROcclusionMeshPass.Render
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::XROcclusionMeshPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(&::UnityEngine::Rendering::Universal::XROcclusionMeshPass::Render)> {
  constexpr static std::size_t size = 0x6a0;
  constexpr static std::size_t addrs = 0x66f2600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XROcclusionMeshPass*>::get(), "Render", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ContextContainer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData*& UnityEngine::Rendering::Universal::XROcclusionMeshPass::__cordl_internal_get_m_PassData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr ::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData* const& UnityEngine::Rendering::Universal::XROcclusionMeshPass::__cordl_internal_get_m_PassData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr void UnityEngine::Rendering::Universal::XROcclusionMeshPass::__cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PassData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Rendering::Universal::XROcclusionMeshPass::__cordl_internal_get_m_IsActiveTargetBackBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsActiveTargetBackBuffer;
}
constexpr bool const& UnityEngine::Rendering::Universal::XROcclusionMeshPass::__cordl_internal_get_m_IsActiveTargetBackBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsActiveTargetBackBuffer;
}
constexpr void UnityEngine::Rendering::Universal::XROcclusionMeshPass::__cordl_internal_set_m_IsActiveTargetBackBuffer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsActiveTargetBackBuffer = value;
}
inline void UnityEngine::Rendering::Universal::XROcclusionMeshPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XROcclusionMeshPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::Rendering::Universal::XROcclusionMeshPass::ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                ::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XROcclusionMeshPass*>::get(), "ExecutePass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, data);
}
inline void UnityEngine::Rendering::Universal::XROcclusionMeshPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                            ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XROcclusionMeshPass*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::XROcclusionMeshPass::Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
                                                                           ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> cameraColorAttachment,
                                                                           ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> cameraDepthAttachment) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XROcclusionMeshPass*>::get(), "Render", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ContextContainer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraph, frameData, cameraColorAttachment, cameraDepthAttachment);
}
inline ::UnityEngine::Rendering::Universal::XROcclusionMeshPass* UnityEngine::Rendering::Universal::XROcclusionMeshPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::XROcclusionMeshPass*>(evt));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::XROcclusionMeshPass::XROcclusionMeshPass() {}
