#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/IDerivedRendergraphContext.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IDerivedRendergraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__InternalRenderGraphContext_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext.FromInternalContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext::*)(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*)>(&::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext::FromInternalContext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext*>(), 0 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext::FromInternalContext(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* context) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
