#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\CapturePass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CapturePass_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__UnsafeGraphContext_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CapturePass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CapturePass_UnsafePassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::CapturePass_UnsafePassData::*)()>(
    &::UnityEngine::Rendering::Universal::CapturePass_UnsafePassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6881b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CapturePass_UnsafePassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::CapturePass_UnsafePassData::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::CapturePass_UnsafePassData::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr void UnityEngine::Rendering::Universal::CapturePass_UnsafePassData::__cordl_internal_set_source(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___source = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*&
UnityEngine::Rendering::Universal::CapturePass_UnsafePassData::__cordl_internal_get_captureActions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___captureActions;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>* const&
UnityEngine::Rendering::Universal::CapturePass_UnsafePassData::__cordl_internal_get_captureActions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___captureActions;
}
constexpr void UnityEngine::Rendering::Universal::CapturePass_UnsafePassData::__cordl_internal_set_captureActions(
    ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___captureActions = value;
}
inline void UnityEngine::Rendering::Universal::CapturePass_UnsafePassData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CapturePass_UnsafePassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::CapturePass_UnsafePassData* UnityEngine::Rendering::Universal::CapturePass_UnsafePassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::CapturePass_UnsafePassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::CapturePass_UnsafePassData::CapturePass_UnsafePassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CapturePass___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::CapturePass___c::*)()>(&::UnityEngine::Rendering::Universal::CapturePass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6881ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CapturePass___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CapturePass___c._RecordRenderGraph_b__4_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::CapturePass___c::*)(::UnityEngine::Rendering::Universal::CapturePass_UnsafePassData*,
                                                                                                                      ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
    &::UnityEngine::Rendering::Universal::CapturePass___c::_RecordRenderGraph_b__4_0)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x6881ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CapturePass___c*>(),
                                                                                           { "<RecordRenderGraph>b__4_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::CapturePass_UnsafePassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::CapturePass___c::setStaticF___9(::UnityEngine::Rendering::Universal::CapturePass___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::CapturePass___c*, "<>9", ::UnityEngine::Rendering::Universal::CapturePass___c*>(
      std::forward<::UnityEngine::Rendering::Universal::CapturePass___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::CapturePass___c* UnityEngine::Rendering::Universal::CapturePass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::CapturePass___c*, "<>9", ::UnityEngine::Rendering::Universal::CapturePass___c*>();
}
inline void UnityEngine::Rendering::Universal::CapturePass___c::setStaticF___9__4_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::CapturePass_UnsafePassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
        value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::CapturePass_UnsafePassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                    "<>9__4_0", ::UnityEngine::Rendering::Universal::CapturePass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::CapturePass_UnsafePassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::CapturePass_UnsafePassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
UnityEngine::Rendering::Universal::CapturePass___c::getStaticF___9__4_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::CapturePass_UnsafePassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                           "<>9__4_0", ::UnityEngine::Rendering::Universal::CapturePass___c*>();
}
inline void UnityEngine::Rendering::Universal::CapturePass___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CapturePass___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::CapturePass___c::_RecordRenderGraph_b__4_0(::UnityEngine::Rendering::Universal::CapturePass_UnsafePassData* data,
                                                                                          ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* unsafeContext) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CapturePass___c*>(),
                                                                                         { "<RecordRenderGraph>b__4_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::CapturePass_UnsafePassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, unsafeContext);
}
inline ::UnityEngine::Rendering::Universal::CapturePass___c* UnityEngine::Rendering::Universal::CapturePass___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::CapturePass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::CapturePass___c::CapturePass___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CapturePass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::CapturePass::*)(::UnityEngine::Rendering::Universal::RenderPassEvent)>(
    &::UnityEngine::Rendering::Universal::CapturePass::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x688135c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CapturePass*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CapturePass.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::CapturePass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::CapturePass::Execute)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x6881424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CapturePass*>(), { ::i2c::class_of<::UnityEngine::Rendering::Universal::CapturePass*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CapturePass.RecordRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::CapturePass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::UnityEngine::Rendering::Universal::CapturePass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x68816c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CapturePass*>(), { ::i2c::class_of<::UnityEngine::Rendering::Universal::CapturePass*>(), 11 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::CapturePass::__cordl_internal_get_m_CameraColorHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraColorHandle;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::CapturePass::__cordl_internal_get_m_CameraColorHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraColorHandle;
}
constexpr void UnityEngine::Rendering::Universal::CapturePass::__cordl_internal_set_m_CameraColorHandle(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CameraColorHandle = value;
}
inline void UnityEngine::Rendering::Universal::CapturePass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CapturePass*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::Rendering::Universal::CapturePass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                    ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::CapturePass*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::CapturePass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                              ::UnityEngine::Rendering::ContextContainer* frameData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::CapturePass*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline ::UnityEngine::Rendering::Universal::CapturePass* UnityEngine::Rendering::Universal::CapturePass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::CapturePass*>(evt));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::CapturePass::CapturePass() {}
