#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ProbeVolumeDebugPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ProbeVolumeDebugPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ComputeGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ProbeVolumeDebugPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::*)()>(
    &::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66e9db8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::__cordl_internal_get_computeShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___computeShader;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::__cordl_internal_get_computeShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___computeShader;
}
constexpr void UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::__cordl_internal_set_computeShader(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___computeShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::BufferHandle& UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::__cordl_internal_get_resultBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resultBuffer;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::BufferHandle const& UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::__cordl_internal_get_resultBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resultBuffer;
}
constexpr void UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::__cordl_internal_set_resultBuffer(::UnityEngine::Rendering::RenderGraphModule::BufferHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resultBuffer = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::__cordl_internal_get_clickCoordinates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clickCoordinates;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::__cordl_internal_get_clickCoordinates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clickCoordinates;
}
constexpr void UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::__cordl_internal_set_clickCoordinates(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clickCoordinates = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::__cordl_internal_get_depthBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthBuffer;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::__cordl_internal_get_depthBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthBuffer;
}
constexpr void UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::__cordl_internal_set_depthBuffer(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depthBuffer = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::__cordl_internal_get_normalBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalBuffer;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::__cordl_internal_get_normalBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalBuffer;
}
constexpr void UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::__cordl_internal_set_normalBuffer(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___normalBuffer = value;
}
inline void UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData* UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::ProbeVolumeDebugPass_WriteApvData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c::*)()>(
    &::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66e9e10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c._Render_b__7_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c::*)(
    ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*)>(
    &::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c::_Render_b__7_0)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x66e9e14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c*>::get(), "<Render>b__7_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c::setStaticF___9(::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c* UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c::setStaticF___9__7_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*,
                                    "<>9__7_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*
UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c::getStaticF___9__7_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*,
                                           "<>9__7_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c::_Render_b__7_0(::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData* data,
                                                                                        ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext* ctx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c*>::get(), "<Render>b__7_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, ctx);
}
inline ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c* UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c::ProbeVolumeDebugPass___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass::*)(
    ::UnityEngine::Rendering::Universal::RenderPassEvent, ::UnityEngine::ComputeShader*)>(&::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x66e9394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass::*)(
    ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*)>(&::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass::Setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66e9464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass::Execute)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x66e946c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass.Render
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(&::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass::Render)> {
  constexpr static std::size_t size = 0x604;
  constexpr static std::size_t addrs = 0x66e97b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass*>::get(), "Render", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ContextContainer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::Universal::ProbeVolumeDebugPass::__cordl_internal_get_m_ComputeShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ComputeShader;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::Universal::ProbeVolumeDebugPass::__cordl_internal_get_m_ComputeShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ComputeShader;
}
constexpr void UnityEngine::Rendering::Universal::ProbeVolumeDebugPass::__cordl_internal_set_m_ComputeShader(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ComputeShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::ProbeVolumeDebugPass::__cordl_internal_get_m_DepthTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthTexture;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::ProbeVolumeDebugPass::__cordl_internal_get_m_DepthTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthTexture;
}
constexpr void UnityEngine::Rendering::Universal::ProbeVolumeDebugPass::__cordl_internal_set_m_DepthTexture(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DepthTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::ProbeVolumeDebugPass::__cordl_internal_get_m_NormalTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NormalTexture;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::ProbeVolumeDebugPass::__cordl_internal_get_m_NormalTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NormalTexture;
}
constexpr void UnityEngine::Rendering::Universal::ProbeVolumeDebugPass::__cordl_internal_set_m_NormalTexture(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_NormalTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::ProbeVolumeDebugPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::ComputeShader* computeShader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, computeShader);
}
inline void UnityEngine::Rendering::Universal::ProbeVolumeDebugPass::Setup(::UnityEngine::Rendering::RTHandle* depthBuffer, ::UnityEngine::Rendering::RTHandle* normalBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, depthBuffer, normalBuffer);
}
inline void UnityEngine::Rendering::Universal::ProbeVolumeDebugPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                             ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::ProbeVolumeDebugPass::Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                            ::UnityEngine::Rendering::ContextContainer* frameData,
                                                                            ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthPyramidBuffer,
                                                                            ::UnityEngine::Rendering::RenderGraphModule::TextureHandle normalBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass*>::get(), "Render", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ContextContainer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraph, frameData, depthPyramidBuffer, normalBuffer);
}
inline ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass* UnityEngine::Rendering::Universal::ProbeVolumeDebugPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                                                                    ::UnityEngine::ComputeShader* computeShader) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass*>(evt, computeShader));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass::ProbeVolumeDebugPass() {}
