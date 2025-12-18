#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/UnsafeGraphContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__UnsafeGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IDerivedRendergraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__InternalRenderGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphDefaultResources_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphObjectPool_def.hpp"
#include "UnityEngine/Rendering/zzzz__UnsafeCommandBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext.get_defaultResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* (
    ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::*)()>(&::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::get_defaultResources)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6624e50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>::get(),
                                                 "get_defaultResources", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext.get_renderGraphPool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* (
    ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::*)()>(&::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::get_renderGraphPool)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6624e68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>::get(), "get_renderGraphPool",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext.FromInternalContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::*)(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*)>(&::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::FromInternalContext)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6624e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>::get(), "FromInternalContext",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6624f24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*& UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::__cordl_internal_get_wrappedContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wrappedContext;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* const& UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::__cordl_internal_get_wrappedContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wrappedContext;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::__cordl_internal_set_wrappedContext(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___wrappedContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::UnsafeCommandBuffer*& UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::__cordl_internal_get_cmd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cmd;
}
constexpr ::UnityEngine::Rendering::UnsafeCommandBuffer* const& UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::__cordl_internal_get_cmd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cmd;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::__cordl_internal_set_cmd(::UnityEngine::Rendering::UnsafeCommandBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cmd)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::setStaticF_unsCmd(::UnityEngine::Rendering::UnsafeCommandBuffer* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::UnsafeCommandBuffer*, "unsCmd",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>::get>(
      std::forward<::UnityEngine::Rendering::UnsafeCommandBuffer*>(value));
}
inline ::UnityEngine::Rendering::UnsafeCommandBuffer* UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::getStaticF_unsCmd() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::UnsafeCommandBuffer*, "unsCmd",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>::get>();
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::get_defaultResources() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>::get(), "get_defaultResources",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources*, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::get_renderGraphPool() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>::get(), "get_renderGraphPool",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::FromInternalContext(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>::get(), "FromInternalContext", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext"
constexpr UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::operator ::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext*() noexcept {
  return static_cast<::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext"
constexpr ::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext*
UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::i___UnityEngine__Rendering__RenderGraphModule__IDerivedRendergraphContext() noexcept {
  return static_cast<::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::UnsafeGraphContext() {}
