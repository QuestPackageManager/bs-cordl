#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RasterGraphContext.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IDerivedRendergraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__InternalRenderGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphDefaultResources_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphObjectPool_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext.get_defaultResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* (
    ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext::*)()>(&::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext::get_defaultResources)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6624bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get(), "get_defaultResources",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext.get_renderGraphPool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* (
    ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext::*)()>(&::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext::get_renderGraphPool)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6624bdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get(), "get_renderGraphPool",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext.FromInternalContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext::*)(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*)>(&::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext::FromInternalContext)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6624bf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get(), "FromInternalContext", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::RasterGraphContext::setStaticF_rastercmd(::UnityEngine::Rendering::RasterCommandBuffer* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RasterCommandBuffer*, "rastercmd",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get>(
      std::forward<::UnityEngine::Rendering::RasterCommandBuffer*>(value));
}
inline ::UnityEngine::Rendering::RasterCommandBuffer* UnityEngine::Rendering::RenderGraphModule::RasterGraphContext::getStaticF_rastercmd() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RasterCommandBuffer*, "rastercmd",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get>();
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* UnityEngine::Rendering::RenderGraphModule::RasterGraphContext::get_defaultResources() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get(), "get_defaultResources",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources*, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* UnityEngine::Rendering::RenderGraphModule::RasterGraphContext::get_renderGraphPool() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get(), "get_renderGraphPool",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RasterGraphContext::FromInternalContext(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get(), "FromInternalContext", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
/// @brief Convert operator to "::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext"
constexpr UnityEngine::Rendering::RenderGraphModule::RasterGraphContext::operator ::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext*() {
  return static_cast<::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext"
constexpr ::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext*
UnityEngine::Rendering::RenderGraphModule::RasterGraphContext::i___UnityEngine__Rendering__RenderGraphModule__IDerivedRendergraphContext() {
  return static_cast<::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "wrappedContext", ty: "::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cmd",
// ty: "::UnityEngine::Rendering::RasterCommandBuffer*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext::RasterGraphContext(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* wrappedContext,
                                                                                              ::UnityEngine::Rendering::RasterCommandBuffer* cmd) noexcept {
  this->wrappedContext = wrappedContext;
  this->cmd = cmd;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext::RasterGraphContext() {}
