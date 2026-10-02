#pragma once
// IWYU pragma private; include "GlobalNamespace/OverdrawComputePass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "GlobalNamespace/zzzz__OverdrawComputePass_def.hpp"
#include "GlobalNamespace/zzzz__OverdrawComputePass_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__UnsafeGraphContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OverdrawComputePass_PassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OverdrawComputePass_PassData::*)()>(&::GlobalNamespace::OverdrawComputePass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6367940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OverdrawComputePass_PassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& GlobalNamespace::OverdrawComputePass_PassData::__cordl_internal_get_colorTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& GlobalNamespace::OverdrawComputePass_PassData::__cordl_internal_get_colorTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorTexture;
}
constexpr void GlobalNamespace::OverdrawComputePass_PassData::__cordl_internal_set_colorTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorTexture = value;
}
constexpr int32_t& GlobalNamespace::OverdrawComputePass_PassData::__cordl_internal_get_width() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___width;
}
constexpr int32_t const& GlobalNamespace::OverdrawComputePass_PassData::__cordl_internal_get_width() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___width;
}
constexpr void GlobalNamespace::OverdrawComputePass_PassData::__cordl_internal_set_width(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___width = value;
}
constexpr int32_t& GlobalNamespace::OverdrawComputePass_PassData::__cordl_internal_get_height() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___height;
}
constexpr int32_t const& GlobalNamespace::OverdrawComputePass_PassData::__cordl_internal_get_height() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___height;
}
constexpr void GlobalNamespace::OverdrawComputePass_PassData::__cordl_internal_set_height(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___height = value;
}
constexpr ::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>*&
GlobalNamespace::OverdrawComputePass_PassData::__cordl_internal_get_recordOverdrawCompute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordOverdrawCompute;
}
constexpr ::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>* const&
GlobalNamespace::OverdrawComputePass_PassData::__cordl_internal_get_recordOverdrawCompute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordOverdrawCompute;
}
constexpr void GlobalNamespace::OverdrawComputePass_PassData::__cordl_internal_set_recordOverdrawCompute(
    ::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recordOverdrawCompute = value;
}
inline void GlobalNamespace::OverdrawComputePass_PassData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OverdrawComputePass_PassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OverdrawComputePass_PassData* GlobalNamespace::OverdrawComputePass_PassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OverdrawComputePass_PassData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OverdrawComputePass_PassData::OverdrawComputePass_PassData() {}
//  Writing Method size for method: ::GlobalNamespace::OverdrawComputePass___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OverdrawComputePass___c::*)()>(&::GlobalNamespace::OverdrawComputePass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6367998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OverdrawComputePass___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OverdrawComputePass___c._RecordRenderGraph_b__4_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OverdrawComputePass___c::*)(
    ::GlobalNamespace::OverdrawComputePass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(&::GlobalNamespace::OverdrawComputePass___c::_RecordRenderGraph_b__4_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x636799c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OverdrawComputePass___c*>(),
                            { "<RecordRenderGraph>b__4_0",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::OverdrawComputePass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OverdrawComputePass___c::setStaticF___9(::GlobalNamespace::OverdrawComputePass___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OverdrawComputePass___c*, "<>9", ::GlobalNamespace::OverdrawComputePass___c*>(std::forward<::GlobalNamespace::OverdrawComputePass___c*>(value));
}
inline ::GlobalNamespace::OverdrawComputePass___c* GlobalNamespace::OverdrawComputePass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OverdrawComputePass___c*, "<>9", ::GlobalNamespace::OverdrawComputePass___c*>();
}
inline void GlobalNamespace::OverdrawComputePass___c::setStaticF___9__4_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::OverdrawComputePass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value) {
  ::cordl_internals::setStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::OverdrawComputePass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*, "<>9__4_0",
      ::GlobalNamespace::OverdrawComputePass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::OverdrawComputePass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(
          value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::OverdrawComputePass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
GlobalNamespace::OverdrawComputePass___c::getStaticF___9__4_0() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::OverdrawComputePass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*, "<>9__4_0",
      ::GlobalNamespace::OverdrawComputePass___c*>();
}
inline void GlobalNamespace::OverdrawComputePass___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OverdrawComputePass___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OverdrawComputePass___c::_RecordRenderGraph_b__4_0(::GlobalNamespace::OverdrawComputePass_PassData* data,
                                                                                ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OverdrawComputePass___c*>(),
                          { "<RecordRenderGraph>b__4_0",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::OverdrawComputePass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::GlobalNamespace::OverdrawComputePass___c* GlobalNamespace::OverdrawComputePass___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OverdrawComputePass___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OverdrawComputePass___c::OverdrawComputePass___c() {}
//  Writing Method size for method: ::GlobalNamespace::OverdrawComputePass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OverdrawComputePass::*)()>(&::GlobalNamespace::OverdrawComputePass::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x63671c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OverdrawComputePass*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OverdrawComputePass.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OverdrawComputePass::*)(
    ::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>*)>(&::GlobalNamespace::OverdrawComputePass::Setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x636728c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OverdrawComputePass*>(),
                                         { "Setup", {}, { ::i2c::type_of<::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OverdrawComputePass.RecordRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OverdrawComputePass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::GlobalNamespace::OverdrawComputePass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x5bc;
  constexpr static std::size_t addrs = 0x6367294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OverdrawComputePass*>(), { ::i2c::class_of<::GlobalNamespace::OverdrawComputePass*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OverdrawComputePass.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OverdrawComputePass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
    &::GlobalNamespace::OverdrawComputePass::Execute)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6367850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::OverdrawComputePass*>(),
            { "Execute", {}, { ::i2c::type_of<::GlobalNamespace::OverdrawComputePass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>*&
GlobalNamespace::OverdrawComputePass::__cordl_internal_get__recordOverdrawCompute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordOverdrawCompute;
}
constexpr ::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>* const&
GlobalNamespace::OverdrawComputePass::__cordl_internal_get__recordOverdrawCompute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordOverdrawCompute;
}
constexpr void GlobalNamespace::OverdrawComputePass::__cordl_internal_set__recordOverdrawCompute(
    ::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____recordOverdrawCompute = value;
}
inline void GlobalNamespace::OverdrawComputePass::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OverdrawComputePass*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OverdrawComputePass::Setup(::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>* recordOverdrawCompute) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OverdrawComputePass*>(),
                                       { "Setup", {}, { ::i2c::type_of<::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, recordOverdrawCompute);
}
inline void GlobalNamespace::OverdrawComputePass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OverdrawComputePass*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline void GlobalNamespace::OverdrawComputePass::Execute(::GlobalNamespace::OverdrawComputePass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::OverdrawComputePass*>(),
                       { "Execute", {}, { ::i2c::type_of<::GlobalNamespace::OverdrawComputePass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, context);
}
inline ::GlobalNamespace::OverdrawComputePass* GlobalNamespace::OverdrawComputePass::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OverdrawComputePass*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OverdrawComputePass::OverdrawComputePass() {}
