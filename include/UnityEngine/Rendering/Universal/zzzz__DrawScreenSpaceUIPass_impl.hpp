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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData::*)()>(
    &::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66c9af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData* UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData::DrawScreenSpaceUIPass_PassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData::*)()>(
    &::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66cb77c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData* UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData::DrawScreenSpaceUIPass_UnsafePassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::*)()>(
    &::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66cb7d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c._RenderOffscreen_b__17_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::*)(
    ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::_RenderOffscreen_b__17_0)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x66cb7d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>::get(), "<RenderOffscreen>b__17_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c._RenderOffscreen_b__17_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::*)(
    ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
    &::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::_RenderOffscreen_b__17_1)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x66cb880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>::get(), "<RenderOffscreen>b__17_1",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c._RenderOverlay_b__18_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::*)(
    ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::_RenderOverlay_b__18_0)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x66cb9a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>::get(), "<RenderOverlay>b__18_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c._RenderOverlay_b__18_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::*)(
    ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
    &::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::_RenderOverlay_b__18_1)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x66cba48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>::get(), "<RenderOverlay>b__18_1",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::setStaticF___9(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c* UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::setStaticF___9__17_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__17_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::getStaticF___9__17_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__17_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::setStaticF___9__17_1(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                    "<>9__17_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::getStaticF___9__17_1() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                           "<>9__17_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::setStaticF___9__18_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__18_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::getStaticF___9__18_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__18_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::setStaticF___9__18_1(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                    "<>9__18_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::getStaticF___9__18_1() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                           "<>9__18_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::_RenderOffscreen_b__17_0(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData* data,
                                                                                                   ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>::get(), "<RenderOffscreen>b__17_0",
                                 std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::_RenderOffscreen_b__17_1(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData* data,
                                                                                                   ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>::get(), "<RenderOffscreen>b__17_1",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::_RenderOverlay_b__18_0(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData* data,
                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>::get(), "<RenderOverlay>b__18_0",
                                 std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::_RenderOverlay_b__18_1(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData* data,
                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>::get(), "<RenderOverlay>b__18_1",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c* UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c::DrawScreenSpaceUIPass___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::*)(
    ::UnityEngine::Rendering::Universal::RenderPassEvent, bool)>(&::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x66c9a30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass.ConfigureColorDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::UnityEngine::RenderTextureDescriptor>, int32_t, int32_t)>(
    &::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::ConfigureColorDescriptor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x66c9afc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>::get(), "ConfigureColorDescriptor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RenderTextureDescriptor>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass.ConfigureDepthDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::UnityEngine::RenderTextureDescriptor>, ::UnityEngine::Experimental::Rendering::GraphicsFormat,
                                                                                           int32_t, int32_t)>(&::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::ConfigureDepthDescriptor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x66c9b30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>::get(), "ConfigureDepthDescriptor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RenderTextureDescriptor>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass.ExecutePass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*, ::UnityEngine::Rendering::RendererList)>(
        &::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::ExecutePass)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x66c9b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>::get(), "ExecutePass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RendererList>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass.ExecutePass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::UnsafeCommandBuffer*, ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*, ::UnityEngine::Rendering::RendererList)>(
        &::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::ExecutePass)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x66c9ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>::get(), "ExecutePass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RendererList>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::*)()>(
    &::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x66c9be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::*)(
    ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Experimental::Rendering::GraphicsFormat)>(&::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::Setup)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x66c9c14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass.OnCameraSetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::OnCameraSetup)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x66c9da4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::Execute)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x66c9fb4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass.RenderOffscreen
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*, ::UnityEngine::Experimental::Rendering::GraphicsFormat,
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(&::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::RenderOffscreen)> {
  constexpr static std::size_t size = 0xc2c;
  constexpr static std::size_t addrs = 0x66ca15c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>::get(), "RenderOffscreen", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ContextContainer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass.RenderOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(&::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::RenderOverlay)> {
  constexpr static std::size_t size = 0x950;
  constexpr static std::size_t addrs = 0x66cad88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>::get(), "RenderOverlay", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ContextContainer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PassData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ColorTarget)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DepthTarget)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  ::cordl_internals::setStaticField<int32_t, "s_CameraDepthTextureID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::getStaticF_s_CameraDepthTextureID() {
  return ::cordl_internals::getStaticField<int32_t, "s_CameraDepthTextureID",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::setStaticF_s_CameraOpaqueTextureID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CameraOpaqueTextureID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::getStaticF_s_CameraOpaqueTextureID() {
  return ::cordl_internals::getStaticField<int32_t, "s_CameraOpaqueTextureID",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, bool renderOffscreen) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, renderOffscreen);
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::ConfigureColorDescriptor(::ByRef<::UnityEngine::RenderTextureDescriptor> descriptor, int32_t cameraWidth, int32_t cameraHeight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>::get(), "ConfigureColorDescriptor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RenderTextureDescriptor>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, descriptor, cameraWidth, cameraHeight);
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::ConfigureDepthDescriptor(::ByRef<::UnityEngine::RenderTextureDescriptor> descriptor,
                                                                                               ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat, int32_t cameraWidth,
                                                                                               int32_t cameraHeight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>::get(), "ConfigureDepthDescriptor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RenderTextureDescriptor>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, descriptor, depthStencilFormat, cameraWidth, cameraHeight);
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* commandBuffer,
                                                                                  ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData* passData,
                                                                                  ::UnityEngine::Rendering::RendererList rendererList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>::get(), "ExecutePass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RendererList>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, commandBuffer, passData, rendererList);
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::ExecutePass(::UnityEngine::Rendering::UnsafeCommandBuffer* commandBuffer,
                                                                                  ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData* passData,
                                                                                  ::UnityEngine::Rendering::RendererList rendererList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>::get(), "ExecutePass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RendererList>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, commandBuffer, passData, rendererList);
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::Setup(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                            ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cameraData, depthStencilFormat);
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                    ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, renderingData);
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                              ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::RenderOffscreen(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                      ::UnityEngine::Rendering::ContextContainer* frameData,
                                                                                      ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat,
                                                                                      ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> output) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>::get(), "RenderOffscreen", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ContextContainer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraph, frameData, depthStencilFormat, output);
}
inline void UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::RenderOverlay(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                    ::UnityEngine::Rendering::ContextContainer* frameData,
                                                                                    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> colorBuffer,
                                                                                    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> depthBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>::get(), "RenderOverlay", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ContextContainer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraph, frameData, colorBuffer, depthBuffer);
}
inline ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass* UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                                                                      bool renderOffscreen) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*>(evt, renderOffscreen));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass::DrawScreenSpaceUIPass() {}
