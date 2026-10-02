#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/FullScreenPassRendererFeature.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPassInput_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__FullScreenPassRendererFeature_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__FullScreenPassRendererFeature_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingLayerUtils_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalResourceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_InjectionPoint::FullScreenPassRendererFeature_InjectionPoint(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_InjectionPoint::FullScreenPassRendererFeature_InjectionPoint() {}
constexpr ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_InjectionPoint
    UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_InjectionPoint::BeforeRenderingTransparents{ static_cast<int32_t>(0x1c2) };
constexpr ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_InjectionPoint
    UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_InjectionPoint::BeforeRenderingPostProcessing{ static_cast<int32_t>(0x226) };
constexpr ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_InjectionPoint
    UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_InjectionPoint::AfterRenderingPostProcessing{ static_cast<int32_t>(0x258) };
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData::*)()>(
    &::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ce8b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle&
UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData::__cordl_internal_get_inputTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData::__cordl_internal_get_inputTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputTexture;
}
constexpr void UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData::__cordl_internal_set_inputTexture(
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inputTexture = value;
}
inline void UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData*
UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData::*)()>(
    &::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ce8b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___material = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData::__cordl_internal_get_passIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passIndex;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData::__cordl_internal_get_passIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passIndex;
}
constexpr void UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData::__cordl_internal_set_passIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___passIndex = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle&
UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData::__cordl_internal_get_inputTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData::__cordl_internal_get_inputTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputTexture;
}
constexpr void UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData::__cordl_internal_set_inputTexture(
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inputTexture = value;
}
inline void UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData*
UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c::*)()>(
    &::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ce8b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c._AddFullscreenRenderPassInputPass_b__11_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c::*)(
    ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c::_AddFullscreenRenderPassInputPass_b__11_0)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6ce8ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c*>(),
                                                             { "<AddFullscreenRenderPassInputPass>b__11_0",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c._AddCopyPassRenderPassFullscreen_b__12_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c::*)(
    ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c::_AddCopyPassRenderPassFullscreen_b__12_0)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6ce8c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c*>(),
                                                             { "<AddCopyPassRenderPassFullscreen>b__12_0",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c::setStaticF___9(
    ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c*, "<>9",
                                    ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c*>(
      std::forward<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c*
UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c*, "<>9",
                                           ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c*>();
}
inline void UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c::setStaticF___9__11_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__11_0", ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c::getStaticF___9__11_0() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData*,
                                                                    ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__11_0", ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c*>();
}
inline void UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c::setStaticF___9__12_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__12_0", ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c::getStaticF___9__12_0() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData*,
                                                                    ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__12_0", ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c*>();
}
inline void UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c::_AddFullscreenRenderPassInputPass_b__11_0(
    ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext rgContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c*>(),
                                                           { "<AddFullscreenRenderPassInputPass>b__11_0",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, rgContext);
}
inline void UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c::_AddCopyPassRenderPassFullscreen_b__12_0(
    ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext rgContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c*>(),
                                                           { "<AddCopyPassRenderPassFullscreen>b__12_0",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, rgContext);
}
inline ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c*
UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c::FullScreenRenderPass_FullScreenPassRendererFeature___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::*)(::StringW)>(
    &::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ce739c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass.SetupMembers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::*)(
    ::UnityEngine::Material*, int32_t, bool, bool)>(&::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::SetupMembers)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6ce7658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass*>(),
                                                { "SetupMembers", {}, { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass.ReAllocate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::*)(::UnityEngine::RenderTextureDescriptor)>(
    &::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::ReAllocate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ce76c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass*>(),
                                                                                           { "ReAllocate", {}, { ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass.ExecuteCopyColorPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::ExecuteCopyColorPass)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6ce76cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass*>(),
                                         { "ExecuteCopyColorPass", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass.ExecuteMainPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Material*, int32_t)>(
    &::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::ExecuteMainPass)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x6ce7750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass*>(),
                                                             { "ExecuteMainPass",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                                 ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass.RecordRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(
    &::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x6ce7934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass.AddFullscreenRenderPassInputPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalResourceData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(
    &::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::AddFullscreenRenderPassInputPass)> {
  constexpr static std::size_t size = 0x944;
  constexpr static std::size_t addrs = 0x6ce7d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass*>(),
                                         { "AddFullscreenRenderPassInputPass",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass.AddCopyPassRenderPassFullscreen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(
    &::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::AddCopyPassRenderPassFullscreen)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x6ce8694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass*>(),
                                         { "AddCopyPassRenderPassFullscreen",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::__cordl_internal_get_m_Material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::__cordl_internal_get_m_Material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Material;
}
constexpr void UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::__cordl_internal_set_m_Material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Material = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::__cordl_internal_get_m_PassIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassIndex;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::__cordl_internal_get_m_PassIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassIndex;
}
constexpr void UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::__cordl_internal_set_m_PassIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PassIndex = value;
}
constexpr bool& UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::__cordl_internal_get_m_FetchActiveColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FetchActiveColor;
}
constexpr bool const& UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::__cordl_internal_get_m_FetchActiveColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FetchActiveColor;
}
constexpr void UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::__cordl_internal_set_m_FetchActiveColor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FetchActiveColor = value;
}
constexpr bool& UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::__cordl_internal_get_m_BindDepthStencilAttachment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindDepthStencilAttachment;
}
constexpr bool const& UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::__cordl_internal_get_m_BindDepthStencilAttachment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindDepthStencilAttachment;
}
constexpr void UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::__cordl_internal_set_m_BindDepthStencilAttachment(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BindDepthStencilAttachment = value;
}
inline void UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::setStaticF_s_SharedPropertyBlock(::UnityEngine::MaterialPropertyBlock* value) {
  ::cordl_internals::setStaticField<::UnityEngine::MaterialPropertyBlock*, "s_SharedPropertyBlock", ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass*>(
      std::forward<::UnityEngine::MaterialPropertyBlock*>(value));
}
inline ::UnityEngine::MaterialPropertyBlock* UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::getStaticF_s_SharedPropertyBlock() {
  return ::cordl_internals::getStaticField<::UnityEngine::MaterialPropertyBlock*, "s_SharedPropertyBlock", ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass*>();
}
inline void UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::_ctor(::StringW passName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, passName);
}
inline void UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::SetupMembers(::UnityEngine::Material* material, int32_t passIndex, bool fetchActiveColor,
                                                                                                                bool bindDepthStencilAttachment) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass*>(),
                                              { "SetupMembers", {}, { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, material, passIndex, fetchActiveColor, bindDepthStencilAttachment);
}
inline void UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::ReAllocate(::UnityEngine::RenderTextureDescriptor desc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass*>(),
                                                                                         { "ReAllocate", {}, { ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, desc);
}
inline void UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::ExecuteCopyColorPass(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                                                        ::UnityEngine::Rendering::RTHandle* sourceTexture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass*>(),
                                       { "ExecuteCopyColorPass", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, sourceTexture);
}
inline void UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::ExecuteMainPass(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                                                   ::UnityEngine::Rendering::RTHandle* sourceTexture, ::UnityEngine::Material* material,
                                                                                                                   int32_t passIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass*>(),
                                                           { "ExecuteMainPass",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                               ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, sourceTexture, material, passIndex);
}
inline void UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                                     ::UnityEngine::Rendering::ContextContainer* frameData) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline void UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::AddFullscreenRenderPassInputPass(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData* resourcesData,
    ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass*>(),
                                       { "AddFullscreenRenderPassInputPass",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, resourcesData, cameraData, source, destination);
}
inline void
UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::AddCopyPassRenderPassFullscreen(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                                       ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source,
                                                                                                                       ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass*>(),
                                       { "AddCopyPassRenderPassFullscreen",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, source, destination);
}
inline ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass*
UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::New_ctor(::StringW passName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass*>(passName));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass::FullScreenPassRendererFeature_FullScreenRenderPass() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_Version::FullScreenPassRendererFeature_Version(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_Version::FullScreenPassRendererFeature_Version() {}
constexpr ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_Version UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_Version::Uninitialised{ static_cast<int32_t>(
    0xffffffff) };
constexpr ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_Version UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_Version::Initial{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_Version UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_Version::AddFetchColorBufferCheckbox{
  static_cast<int32_t>(0x1)
};
constexpr ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_Version UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_Version::Count{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_Version UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_Version::Latest{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::*)()>(
    &::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::Create)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6ce7330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature.RequireRenderingLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::*)(
    bool, bool, ::by_ref<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event>, ::by_ref<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>)>(
    &::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::RequireRenderingLayers)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6ce741c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature.AddRenderPasses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::*)(::UnityEngine::Rendering::Universal::ScriptableRenderer*,
                                                                                                                                    ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(
    &::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::AddRenderPasses)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x6ce7430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature.UpgradeIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::*)()>(
    &::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::UpgradeIfNeeded)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ce766c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature*>(), { "UpgradeIfNeeded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::*)()>(
    &::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6ce7670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature*>(),
                                                                                           { "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::*)()>(
    &::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6ce768c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature*>(),
                                                                                           { "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::*)()>(
    &::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6ce76a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_InjectionPoint& UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::__cordl_internal_get_injectionPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___injectionPoint;
}
constexpr ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_InjectionPoint const&
UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::__cordl_internal_get_injectionPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___injectionPoint;
}
constexpr void
UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::__cordl_internal_set_injectionPoint(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_InjectionPoint value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___injectionPoint = value;
}
constexpr bool& UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::__cordl_internal_get_fetchColorBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fetchColorBuffer;
}
constexpr bool const& UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::__cordl_internal_get_fetchColorBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fetchColorBuffer;
}
constexpr void UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::__cordl_internal_set_fetchColorBuffer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fetchColorBuffer = value;
}
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput& UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::__cordl_internal_get_requirements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requirements;
}
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput const& UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::__cordl_internal_get_requirements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requirements;
}
constexpr void UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::__cordl_internal_set_requirements(::UnityEngine::Rendering::Universal::ScriptableRenderPassInput value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requirements = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::__cordl_internal_get_passMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::__cordl_internal_get_passMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passMaterial;
}
constexpr void UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::__cordl_internal_set_passMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___passMaterial = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::__cordl_internal_get_passIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passIndex;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::__cordl_internal_get_passIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passIndex;
}
constexpr void UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::__cordl_internal_set_passIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___passIndex = value;
}
constexpr bool& UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::__cordl_internal_get_bindDepthStencilAttachment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bindDepthStencilAttachment;
}
constexpr bool const& UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::__cordl_internal_get_bindDepthStencilAttachment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bindDepthStencilAttachment;
}
constexpr void UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::__cordl_internal_set_bindDepthStencilAttachment(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bindDepthStencilAttachment = value;
}
constexpr ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass*&
UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::__cordl_internal_get_m_FullScreenPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FullScreenPass;
}
constexpr ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass* const&
UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::__cordl_internal_get_m_FullScreenPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FullScreenPass;
}
constexpr void UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::__cordl_internal_set_m_FullScreenPass(
    ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FullScreenPass = value;
}
constexpr ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_Version& UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::__cordl_internal_get_m_Version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_Version const& UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::__cordl_internal_get_m_Version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr void UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::__cordl_internal_set_m_Version(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_Version value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Version = value;
}
inline void UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::Create() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::RequireRenderingLayers(bool isDeferred, bool needsGBufferAccurateNormals,
                                                                                                     ::by_ref<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event> atEvent,
                                                                                                     ::by_ref<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize> maskSize) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, isDeferred, needsGBufferAccurateNormals, atEvent, maskSize);
}
inline void UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer,
                                                                                              ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer, renderingData);
}
inline void UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::UpgradeIfNeeded() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature*>(), { "UpgradeIfNeeded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature*>(),
                                                                                         { "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature*>(),
                                                                                         { "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature* UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature::FullScreenPassRendererFeature() {}
