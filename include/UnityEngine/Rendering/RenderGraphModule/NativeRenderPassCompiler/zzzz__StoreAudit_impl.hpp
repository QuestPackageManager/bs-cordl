#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RenderGraphModule\NativeRenderPassCompiler\StoreAudit.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__StoreReason_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__StoreAudit_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__StoreReason_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreAudit._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreAudit::*)(
    ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason, int32_t, ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreAudit::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x67fa264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreAudit>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreAudit::setStaticF_StoreReasonMessages(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "StoreReasonMessages", ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreAudit>(
      std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreAudit::getStaticF_StoreReasonMessages() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "StoreReasonMessages", ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreAudit>();
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreAudit::_ctor(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason setReason,
                                                                                                   int32_t setPassId,
                                                                                                   ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason setMsaaReason,
                                                                                                   int32_t setMsaaPassId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreAudit>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, setReason, setPassId, setMsaaReason, setMsaaPassId);
}
// Ctor Parameters [CppParam { name: "reason", ty: "::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "passId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "msaaReason", ty: "::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "msaaPassId", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreAudit::StoreAudit(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason reason,
                                                                                                        int32_t passId,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason msaaReason,
                                                                                                        int32_t msaaPassId) noexcept {
  this->reason = reason;
  this->passId = passId;
  this->msaaReason = msaaReason;
  this->msaaPassId = msaaPassId;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreAudit::StoreAudit() {}
