#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\Internal\CopyColorPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Downsampling_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__CopyColorPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__CopyColorPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Downsampling_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68faeec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData::__cordl_internal_set_source(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___source = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData::__cordl_internal_get_destination() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destination;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData::__cordl_internal_get_destination() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destination;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData::__cordl_internal_set_destination(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destination = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData::__cordl_internal_get_useProceduralBlit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useProceduralBlit;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData::__cordl_internal_get_useProceduralBlit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useProceduralBlit;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData::__cordl_internal_set_useProceduralBlit(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useProceduralBlit = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData::__cordl_internal_get_samplingMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___samplingMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData::__cordl_internal_get_samplingMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___samplingMaterial;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData::__cordl_internal_set_samplingMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___samplingMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData::__cordl_internal_get_copyColorMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___copyColorMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData::__cordl_internal_get_copyColorMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___copyColorMaterial;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData::__cordl_internal_set_copyColorMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___copyColorMaterial = value;
}
constexpr ::UnityEngine::Rendering::Universal::Downsampling& UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData::__cordl_internal_get_downsamplingMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___downsamplingMethod;
}
constexpr ::UnityEngine::Rendering::Universal::Downsampling const& UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData::__cordl_internal_get_downsamplingMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___downsamplingMethod;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData::__cordl_internal_set_downsamplingMethod(::UnityEngine::Rendering::Universal::Downsampling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___downsamplingMethod = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData::__cordl_internal_get_sampleOffsetShaderHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sampleOffsetShaderHandle;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData::__cordl_internal_get_sampleOffsetShaderHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sampleOffsetShaderHandle;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData::__cordl_internal_set_sampleOffsetShaderHandle(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sampleOffsetShaderHandle = value;
}
inline void UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData* UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData::CopyColorPass_PassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68fbe90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c._RenderInternal_b__23_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c::*)(
    ::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c::_RenderInternal_b__23_0)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x68fbe94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c*>(),
                                                                                           { "<RenderInternal>b__23_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::Internal::CopyColorPass___c::setStaticF___9(::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c*, "<>9", ::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c*>(
      std::forward<::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c* UnityEngine::Rendering::Universal::Internal::CopyColorPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c*, "<>9", ::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c*>();
}
inline void UnityEngine::Rendering::Universal::Internal::CopyColorPass___c::setStaticF___9__23_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__23_0", ::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::Internal::CopyColorPass___c::getStaticF___9__23_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__23_0", ::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c*>();
}
inline void UnityEngine::Rendering::Universal::Internal::CopyColorPass___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyColorPass___c::_RenderInternal_b__23_0(::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData* data,
                                                                                                    ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c*>(),
                                                                                         { "<RenderInternal>b__23_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c* UnityEngine::Rendering::Universal::Internal::CopyColorPass___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c::CopyColorPass___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyColorPass.get_source
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::Internal::CopyColorPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::CopyColorPass::get_source)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68fad74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass*>(), { "get_source", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyColorPass.set_source
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyColorPass::*)(::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::Internal::CopyColorPass::set_source)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68fad7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass*>(),
                                                                                           { "set_source", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyColorPass.get_destination
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::Internal::CopyColorPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::CopyColorPass::get_destination)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68fad84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass*>(), { "get_destination", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyColorPass.set_destination
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyColorPass::*)(::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::Internal::CopyColorPass::set_destination)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68fad8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass*>(),
                                                                                           { "set_destination", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyColorPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyColorPass::*)(
    ::UnityEngine::Rendering::Universal::RenderPassEvent, ::UnityEngine::Material*, ::UnityEngine::Material*, ::StringW)>(&::UnityEngine::Rendering::Universal::Internal::CopyColorPass::_ctor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x68fad94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::UnityEngine::Material*>(),
                                                                 ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyColorPass.ConfigureDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::Universal::Downsampling, ::by_ref<::UnityEngine::RenderTextureDescriptor>,
                                                                ::by_ref<::UnityEngine::FilterMode>)>(&::UnityEngine::Rendering::Universal::Internal::CopyColorPass::ConfigureDescriptor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x68faef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass*>(),
                                                             { "ConfigureDescriptor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::Universal::Downsampling>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(), ::i2c::type_of<::by_ref<::UnityEngine::FilterMode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyColorPass.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyColorPass::*)(
    ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::Universal::RenderTargetHandle, ::UnityEngine::Rendering::Universal::Downsampling)>(
    &::UnityEngine::Rendering::Universal::Internal::CopyColorPass::Setup)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x68faf44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass*>(),
                                                { "Setup",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::Universal::Downsampling>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyColorPass.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyColorPass::*)(::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*,
                                                                                                                              ::UnityEngine::Rendering::Universal::Downsampling)>(
    &::UnityEngine::Rendering::Universal::Internal::CopyColorPass::Setup)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x68faf90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass*>(),
                                                             { "Setup",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::Universal::Downsampling>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyColorPass.OnCameraSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyColorPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Internal::CopyColorPass::OnCameraSetup)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x68faf9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyColorPass.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyColorPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Internal::CopyColorPass::Execute)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x68faff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyColorPass.ExecutePass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData*,
                                                                ::UnityEngine::Rendering::RTHandle*, bool)>(&::UnityEngine::Rendering::Universal::Internal::CopyColorPass::ExecutePass)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x68fb1f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass*>(),
                                         { "ExecutePass",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData*>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyColorPass.Render
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::Universal::Internal::CopyColorPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::UnityEngine::Rendering::Universal::Downsampling)>(&::UnityEngine::Rendering::Universal::Internal::CopyColorPass::Render)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x68fb590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass*>(),
                            { "Render",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::Downsampling>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyColorPass.RenderToExistingTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyColorPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::UnityEngine::Rendering::Universal::Downsampling)>(
    &::UnityEngine::Rendering::Universal::Internal::CopyColorPass::RenderToExistingTexture)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x68fbd88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass*>(),
                            { "RenderToExistingTexture",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::Downsampling>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyColorPass.RenderInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyColorPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, bool)>(&::UnityEngine::Rendering::Universal::Internal::CopyColorPass::RenderInternal)> {
  constexpr static std::size_t size = 0x64c;
  constexpr static std::size_t addrs = 0x68fb73c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass*>(),
                            { "RenderInternal",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::CopyColorPass::__cordl_internal_get_m_SampleOffsetShaderHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SampleOffsetShaderHandle;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::CopyColorPass::__cordl_internal_get_m_SampleOffsetShaderHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SampleOffsetShaderHandle;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyColorPass::__cordl_internal_set_m_SampleOffsetShaderHandle(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SampleOffsetShaderHandle = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::Internal::CopyColorPass::__cordl_internal_get_m_SamplingMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SamplingMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::Internal::CopyColorPass::__cordl_internal_get_m_SamplingMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SamplingMaterial;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyColorPass::__cordl_internal_set_m_SamplingMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SamplingMaterial = value;
}
constexpr ::UnityEngine::Rendering::Universal::Downsampling& UnityEngine::Rendering::Universal::Internal::CopyColorPass::__cordl_internal_get_m_DownsamplingMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DownsamplingMethod;
}
constexpr ::UnityEngine::Rendering::Universal::Downsampling const& UnityEngine::Rendering::Universal::Internal::CopyColorPass::__cordl_internal_get_m_DownsamplingMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DownsamplingMethod;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyColorPass::__cordl_internal_set_m_DownsamplingMethod(::UnityEngine::Rendering::Universal::Downsampling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DownsamplingMethod = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::Internal::CopyColorPass::__cordl_internal_get_m_CopyColorMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyColorMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::Internal::CopyColorPass::__cordl_internal_get_m_CopyColorMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyColorMaterial;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyColorPass::__cordl_internal_set_m_CopyColorMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CopyColorMaterial = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::Internal::CopyColorPass::__cordl_internal_get__source_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____source_k__BackingField;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::Internal::CopyColorPass::__cordl_internal_get__source_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____source_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyColorPass::__cordl_internal_set__source_k__BackingField(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____source_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::Internal::CopyColorPass::__cordl_internal_get__destination_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destination_k__BackingField;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::Internal::CopyColorPass::__cordl_internal_get__destination_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destination_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyColorPass::__cordl_internal_set__destination_k__BackingField(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____destination_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData*& UnityEngine::Rendering::Universal::Internal::CopyColorPass::__cordl_internal_get_m_PassData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData* const& UnityEngine::Rendering::Universal::Internal::CopyColorPass::__cordl_internal_get_m_PassData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyColorPass::__cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PassData = value;
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::Internal::CopyColorPass::get_source() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass*>(), { "get_source", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyColorPass::set_source(::UnityEngine::Rendering::RTHandle* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass*>(),
                                                                                         { "set_source", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::Internal::CopyColorPass::get_destination() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass*>(), { "get_destination", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyColorPass::set_destination(::UnityEngine::Rendering::RTHandle* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass*>(),
                                                                                         { "set_destination", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyColorPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Material* samplingMaterial,
                                                                              ::UnityEngine::Material* copyColorMaterial, ::StringW customPassName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::UnityEngine::Material*>(),
                                                               ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, samplingMaterial, copyColorMaterial, customPassName);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyColorPass::ConfigureDescriptor(::UnityEngine::Rendering::Universal::Downsampling downsamplingMethod,
                                                                                            ::by_ref<::UnityEngine::RenderTextureDescriptor> descriptor,
                                                                                            ::by_ref<::UnityEngine::FilterMode> filterMode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass*>(),
                                                           { "ConfigureDescriptor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::Downsampling>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::FilterMode>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, downsamplingMethod, descriptor, filterMode);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyColorPass::Setup(::UnityEngine::Rendering::RenderTargetIdentifier source,
                                                                              ::UnityEngine::Rendering::Universal::RenderTargetHandle destination,
                                                                              ::UnityEngine::Rendering::Universal::Downsampling downsampling) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass*>(),
                                              { "Setup",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::Universal::Downsampling>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, destination, downsampling);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyColorPass::Setup(::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rendering::RTHandle* destination,
                                                                              ::UnityEngine::Rendering::Universal::Downsampling downsampling) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass*>(),
                                                           { "Setup",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::Downsampling>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, destination, downsampling);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyColorPass::OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                      ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, renderingData);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyColorPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyColorPass::ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                    ::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData* passData,
                                                                                    ::UnityEngine::Rendering::RTHandle* source, bool useDrawProceduralBlit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass*>(),
                                       { "ExecutePass",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, passData, source, useDrawProceduralBlit);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::Universal::Internal::CopyColorPass::Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
                                                                   ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination,
                                                                   ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                                                                   ::UnityEngine::Rendering::Universal::Downsampling downsampling) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass*>(),
                          { "Render",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::Downsampling>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, renderGraph, frameData, destination, source, downsampling);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyColorPass::RenderToExistingTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                ::UnityEngine::Rendering::ContextContainer* frameData,
                                                                                                ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination,
                                                                                                ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                                                                                                ::UnityEngine::Rendering::Universal::Downsampling downsampling) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass*>(),
                          { "RenderToExistingTexture",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::Downsampling>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData, destination, source, downsampling);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyColorPass::RenderInternal(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                       ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination,
                                                                                       ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source, bool useProceduralBlit) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyColorPass*>(),
                          { "RenderInternal",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, destination, source, useProceduralBlit);
}
inline ::UnityEngine::Rendering::Universal::Internal::CopyColorPass* UnityEngine::Rendering::Universal::Internal::CopyColorPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                                                                          ::UnityEngine::Material* samplingMaterial,
                                                                                                                                          ::UnityEngine::Material* copyColorMaterial,
                                                                                                                                          ::StringW customPassName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::Internal::CopyColorPass*>(evt, samplingMaterial, copyColorMaterial, customPassName));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyColorPass::CopyColorPass() {}
