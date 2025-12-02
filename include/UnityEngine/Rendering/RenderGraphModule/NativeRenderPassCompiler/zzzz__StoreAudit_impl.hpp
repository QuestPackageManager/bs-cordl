#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/StoreAudit.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__StoreReason_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__StoreAudit_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__StoreReason_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreAudit._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreAudit::*)(
    ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason, int32_t, ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreAudit::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65db570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreAudit>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreAudit::setStaticF_StoreReasonMessages(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "StoreReasonMessages",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreAudit>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreAudit::getStaticF_StoreReasonMessages() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "StoreReasonMessages",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreAudit>::get>();
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreAudit::_ctor(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason setReason,
                                                                                                   int32_t setPassId,
                                                                                                   ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason setMsaaReason,
                                                                                                   int32_t setMsaaPassId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreAudit>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, setReason, setPassId, setMsaaReason, setMsaaPassId);
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
