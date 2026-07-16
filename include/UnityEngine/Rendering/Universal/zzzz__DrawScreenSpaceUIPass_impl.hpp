#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DrawScreenSpaceUIPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DrawScreenSpaceUIPass_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__UnsafeGraphContext_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DrawScreenSpaceUIPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__UnsafeCommandBuffer_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData::*)()>(
    &::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x687c6b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData::__cordl_internal_get_rendererList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererList;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData::__cordl_internal_get_rendererList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererList;
}
constexpr void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData::__cordl_internal_set_rendererList(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rendererList = value;
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData* UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData::DrawScreenSpaceUIPass_PassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData::*)()>(
    &::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x687e33c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData::__cordl_internal_get_rendererList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererList;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData::__cordl_internal_get_rendererList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererList;
}
constexpr void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData::__cordl_internal_set_rendererList(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rendererList = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData::__cordl_internal_get_colorTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorTarget;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData::__cordl_internal_get_colorTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorTarget;
}
constexpr void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData::__cordl_internal_set_colorTarget(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorTarget = value;
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData* UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData::DrawScreenSpaceUIPass_UnsafePassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::*)()>(
    &::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x687e394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c._RenderOffscreen_b__17_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::*)(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*,
                                                                                                                                ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::_RenderOffscreen_b__17_0)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x687e398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>(),
                                                                                           { "<RenderOffscreen>b__17_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c._RenderOffscreen_b__17_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::*)(
    ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
    &::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::_RenderOffscreen_b__17_1)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x687e440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>(),
                                                                                           { "<RenderOffscreen>b__17_1",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c._RenderOverlay_b__18_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::*)(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*,
                                                                                                                                ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::_RenderOverlay_b__18_0)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x687e560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>(),
                                                                                           { "<RenderOverlay>b__18_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c._RenderOverlay_b__18_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::*)(
    ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
    &::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::_RenderOverlay_b__18_1)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x687e608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>(),
                                                                                           { "<RenderOverlay>b__18_1",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::setStaticF___9(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*, "<>9", ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>(
      std::forward<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c* UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*, "<>9", ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>();
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::setStaticF___9__17_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__17_0", ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::getStaticF___9__17_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__17_0", ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>();
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::setStaticF___9__17_1(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                    "<>9__17_1", ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::getStaticF___9__17_1() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                           "<>9__17_1", ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>();
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::setStaticF___9__18_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__18_0", ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::getStaticF___9__18_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__18_0", ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>();
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::setStaticF___9__18_1(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                    "<>9__18_1", ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::getStaticF___9__18_1() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                           "<>9__18_1", ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>();
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::_RenderOffscreen_b__17_0(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData* data,
                                                                                                   ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>(),
                                                                                         { "<RenderOffscreen>b__17_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::_RenderOffscreen_b__17_1(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData* data,
                                                                                                   ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>(),
                                                                                         { "<RenderOffscreen>b__17_1",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::_RenderOverlay_b__18_0(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData* data,
                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>(),
                                                                                         { "<RenderOverlay>b__18_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::_RenderOverlay_b__18_1(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData* data,
                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>(),
                                                                                         { "<RenderOverlay>b__18_1",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c* UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::DrawScreenSpaceUIPass___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::*)(::UnityEngine::Rendering::Universal::RenderPassEvent, bool)>(
    &::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x687c5f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass.ConfigureColorDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::RenderTextureDescriptor>, int32_t, int32_t)>(
    &::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::ConfigureColorDescriptor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x687c6bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>(),
                            { "ConfigureColorDescriptor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass.ConfigureDepthDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::RenderTextureDescriptor>, ::UnityEngine::Experimental::Rendering::GraphicsFormat, int32_t, int32_t)>(
    &::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::ConfigureDepthDescriptor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x687c6f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>(),
                                                             { "ConfigureDepthDescriptor",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(),
                                                                 ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass.ExecutePass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*,
                                                                ::UnityEngine::Rendering::RendererList)>(&::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::ExecutePass)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x687c730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>(),
                                         { "ExecutePass",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::RendererList>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass.ExecutePass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::UnsafeCommandBuffer*, ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*,
                                                                ::UnityEngine::Rendering::RendererList)>(&::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::ExecutePass)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x687c768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>(),
                                                                                           { "ExecutePass",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::UnsafeCommandBuffer*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RendererList>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::*)()>(&::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x687c7a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::*)(
    ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Experimental::Rendering::GraphicsFormat)>(&::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::Setup)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x687c7d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>(),
                         { "Setup", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass.OnCameraSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::OnCameraSetup)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x687c964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::Execute)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x687cb74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass.RenderOffscreen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*, ::UnityEngine::Experimental::Rendering::GraphicsFormat,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(&::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::RenderOffscreen)> {
  constexpr static std::size_t size = 0xc2c;
  constexpr static std::size_t addrs = 0x687cd1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>(),
                            { "RenderOffscreen",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(),
                                ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass.RenderOverlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(&::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::RenderOverlay)> {
  constexpr static std::size_t size = 0x950;
  constexpr static std::size_t addrs = 0x687d948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>(),
                                                { "RenderOverlay",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*& UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::__cordl_internal_get_m_PassData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData* const& UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::__cordl_internal_get_m_PassData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::__cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PassData = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::__cordl_internal_get_m_ColorTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorTarget;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::__cordl_internal_get_m_ColorTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorTarget;
}
constexpr void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::__cordl_internal_set_m_ColorTarget(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ColorTarget = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::__cordl_internal_get_m_DepthTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthTarget;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::__cordl_internal_get_m_DepthTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthTarget;
}
constexpr void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::__cordl_internal_set_m_DepthTarget(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DepthTarget = value;
}
constexpr bool& UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::__cordl_internal_get_m_RenderOffscreen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderOffscreen;
}
constexpr bool const& UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::__cordl_internal_get_m_RenderOffscreen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderOffscreen;
}
constexpr void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::__cordl_internal_set_m_RenderOffscreen(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderOffscreen = value;
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::setStaticF_s_CameraDepthTextureID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CameraDepthTextureID", ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::getStaticF_s_CameraDepthTextureID() {
  return ::cordl_internals::getStaticField<int32_t, "s_CameraDepthTextureID", ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>();
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::setStaticF_s_CameraOpaqueTextureID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CameraOpaqueTextureID", ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::getStaticF_s_CameraOpaqueTextureID() {
  return ::cordl_internals::getStaticField<int32_t, "s_CameraOpaqueTextureID", ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>();
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, bool renderOffscreen) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, renderOffscreen);
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::ConfigureColorDescriptor(::by_ref<::UnityEngine::RenderTextureDescriptor> descriptor, int32_t cameraWidth, int32_t cameraHeight) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>(),
                          { "ConfigureColorDescriptor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, descriptor, cameraWidth, cameraHeight);
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::ConfigureDepthDescriptor(::by_ref<::UnityEngine::RenderTextureDescriptor> descriptor,
                                                                                               ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat, int32_t cameraWidth,
                                                                                               int32_t cameraHeight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>(),
                                                           { "ConfigureDepthDescriptor",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(),
                                                               ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, descriptor, depthStencilFormat, cameraWidth, cameraHeight);
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* commandBuffer,
                                                                                  ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData* passData,
                                                                                  ::UnityEngine::Rendering::RendererList rendererList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>(),
                                       { "ExecutePass",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::RendererList>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, commandBuffer, passData, rendererList);
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::ExecutePass(::UnityEngine::Rendering::UnsafeCommandBuffer* commandBuffer,
                                                                                  ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData* passData,
                                                                                  ::UnityEngine::Rendering::RendererList rendererList) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>(),
                                                                                         { "ExecutePass",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::UnsafeCommandBuffer*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RendererList>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, commandBuffer, passData, rendererList);
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::Setup(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                            ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>(),
                          { "Setup", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraData, depthStencilFormat);
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                    ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, renderingData);
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                              ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::RenderOffscreen(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                      ::UnityEngine::Rendering::ContextContainer* frameData,
                                                                                      ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat,
                                                                                      ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> output) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>(),
                          { "RenderOffscreen",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(),
                              ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData, depthStencilFormat, output);
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::RenderOverlay(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                    ::UnityEngine::Rendering::ContextContainer* frameData,
                                                                                    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> colorBuffer,
                                                                                    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> depthBuffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>(),
                                              { "RenderOverlay",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData, colorBuffer, depthBuffer);
}
inline ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass* UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                                                                      bool renderOffscreen) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>(evt, renderOffscreen));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::DrawScreenSpaceUIPass() {}
