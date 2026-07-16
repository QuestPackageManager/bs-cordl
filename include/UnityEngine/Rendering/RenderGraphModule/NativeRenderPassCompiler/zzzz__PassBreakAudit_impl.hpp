#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/PassBreakAudit.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__PassBreakReason_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__PassBreakAudit_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__PassBreakReason_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit::*)(
    ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakReason, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67f4bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit>(),
                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakReason>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit::setStaticF_BreakReasonMessages(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "BreakReasonMessages", ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit>(
      std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit::getStaticF_BreakReasonMessages() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "BreakReasonMessages", ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit>();
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit::_ctor(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakReason reason,
                                                                                                       int32_t breakPass) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit>(),
                                       { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakReason>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reason, breakPass);
}
// Ctor Parameters [CppParam { name: "reason", ty: "::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakReason", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "breakPass", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit::PassBreakAudit(
    ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakReason reason, int32_t breakPass) noexcept {
  this->reason = reason;
  this->breakPass = breakPass;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit::PassBreakAudit() {}
