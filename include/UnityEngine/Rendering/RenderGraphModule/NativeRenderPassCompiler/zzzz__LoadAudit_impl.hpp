#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RenderGraphModule\NativeRenderPassCompiler\LoadAudit.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__LoadReason_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__LoadAudit_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__LoadReason_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadAudit._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadAudit::*)(
    ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadReason, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadAudit::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67fa0f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadAudit>(),
                                                { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadReason>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadAudit::setStaticF_LoadReasonMessages(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "LoadReasonMessages", ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadAudit>(
      std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadAudit::getStaticF_LoadReasonMessages() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "LoadReasonMessages", ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadAudit>();
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadAudit::_ctor(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadReason setReason,
                                                                                                  int32_t setPassId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadAudit>(),
                                              { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadReason>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, setReason, setPassId);
}
// Ctor Parameters [CppParam { name: "reason", ty: "::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadReason", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "passId", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadAudit::LoadAudit(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadReason reason,
                                                                                                      int32_t passId) noexcept {
  this->reason = reason;
  this->passId = passId;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadAudit::LoadAudit() {}
