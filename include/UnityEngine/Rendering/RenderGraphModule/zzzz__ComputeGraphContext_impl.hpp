#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/ComputeGraphContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ComputeGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IDerivedRendergraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__InternalRenderGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphDefaultResources_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphObjectPool_def.hpp"
#include "UnityEngine/Rendering/zzzz__ComputeCommandBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext.get_defaultResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* (
    ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext::*)()>(&::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext::get_defaultResources)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6624d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>::get(),
                                                 "get_defaultResources", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext.get_renderGraphPool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* (
    ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext::*)()>(&::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext::get_renderGraphPool)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6624d20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>::get(),
                                                 "get_renderGraphPool", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext.FromInternalContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext::*)(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*)>(&::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext::FromInternalContext)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6624d38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>::get(), "FromInternalContext",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6624ddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*& UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext::__cordl_internal_get_wrappedContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wrappedContext;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* const& UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext::__cordl_internal_get_wrappedContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wrappedContext;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext::__cordl_internal_set_wrappedContext(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___wrappedContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::ComputeCommandBuffer*& UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext::__cordl_internal_get_cmd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cmd;
}
constexpr ::UnityEngine::Rendering::ComputeCommandBuffer* const& UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext::__cordl_internal_get_cmd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cmd;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext::__cordl_internal_set_cmd(::UnityEngine::Rendering::ComputeCommandBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cmd)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext::setStaticF_computecmd(::UnityEngine::Rendering::ComputeCommandBuffer* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ComputeCommandBuffer*, "computecmd",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>::get>(
      std::forward<::UnityEngine::Rendering::ComputeCommandBuffer*>(value));
}
inline ::UnityEngine::Rendering::ComputeCommandBuffer* UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext::getStaticF_computecmd() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ComputeCommandBuffer*, "computecmd",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>::get>();
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext::get_defaultResources() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>::get(), "get_defaultResources",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources*, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext::get_renderGraphPool() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>::get(), "get_renderGraphPool",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext::FromInternalContext(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>::get(), "FromInternalContext", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext* UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext"
constexpr UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext::operator ::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext*() noexcept {
  return static_cast<::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext"
constexpr ::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext*
UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext::i___UnityEngine__Rendering__RenderGraphModule__IDerivedRendergraphContext() noexcept {
  return static_cast<::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext::ComputeGraphContext() {}
