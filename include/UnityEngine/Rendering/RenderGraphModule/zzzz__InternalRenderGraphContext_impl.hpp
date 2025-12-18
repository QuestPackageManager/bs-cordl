#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/InternalRenderGraphContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__InternalRenderGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphDefaultResources_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphObjectPool_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6624b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::ScriptableRenderContext& UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext::__cordl_internal_get_renderContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderContext;
}
constexpr ::UnityEngine::Rendering::ScriptableRenderContext const& UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext::__cordl_internal_get_renderContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderContext;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext::__cordl_internal_set_renderContext(::UnityEngine::Rendering::ScriptableRenderContext value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderContext = value;
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext::__cordl_internal_get_cmd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cmd;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext::__cordl_internal_get_cmd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cmd;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext::__cordl_internal_set_cmd(::UnityEngine::Rendering::CommandBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cmd)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool*& UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext::__cordl_internal_get_renderGraphPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderGraphPool;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* const&
UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext::__cordl_internal_get_renderGraphPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderGraphPool;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext::__cordl_internal_set_renderGraphPool(::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___renderGraphPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources*& UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext::__cordl_internal_get_defaultResources() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultResources;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* const&
UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext::__cordl_internal_get_defaultResources() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultResources;
}
constexpr void
UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext::__cordl_internal_set_defaultResources(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___defaultResources)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*& UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext::__cordl_internal_get_executingPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___executingPass;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* const& UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext::__cordl_internal_get_executingPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___executingPass;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext::__cordl_internal_set_executingPass(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___executingPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext::__cordl_internal_get_contextlessTesting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contextlessTesting;
}
constexpr bool const& UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext::__cordl_internal_get_contextlessTesting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contextlessTesting;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext::__cordl_internal_set_contextlessTesting(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contextlessTesting = value;
}
inline void UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext::InternalRenderGraphContext() {}
