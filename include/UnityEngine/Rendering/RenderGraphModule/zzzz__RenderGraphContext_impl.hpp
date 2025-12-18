#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphContext.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IDerivedRendergraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__InternalRenderGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphDefaultResources_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphObjectPool_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext.FromInternalContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::*)(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::FromInternalContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6624b74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>::get(), "FromInternalContext", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext.get_renderContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ScriptableRenderContext (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::*)()>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::get_renderContext)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6624b7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>::get(), "get_renderContext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext.get_cmd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::CommandBuffer* (::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::get_cmd)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6624b30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>::get(), "get_cmd",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext.get_renderGraphPool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::*)()>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::get_renderGraphPool)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6624b94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>::get(), "get_renderGraphPool",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext.get_defaultResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::*)()>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::get_defaultResources)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6624bac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>::get(), "get_defaultResources",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::FromInternalContext(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>::get(), "FromInternalContext", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline ::UnityEngine::Rendering::ScriptableRenderContext UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::get_renderContext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>::get(), "get_renderContext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ScriptableRenderContext, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::CommandBuffer* UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::get_cmd() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>::get(), "get_cmd",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CommandBuffer*, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::get_renderGraphPool() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>::get(), "get_renderGraphPool",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool*, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::get_defaultResources() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>::get(), "get_defaultResources",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources*, false>(this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext"
constexpr UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::operator ::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext*() {
  return static_cast<::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext"
constexpr ::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext*
UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::i___UnityEngine__Rendering__RenderGraphModule__IDerivedRendergraphContext() {
  return static_cast<::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "wrappedContext", ty: "::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::RenderGraphContext(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* wrappedContext) noexcept {
  this->wrappedContext = wrappedContext;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::RenderGraphContext() {}
