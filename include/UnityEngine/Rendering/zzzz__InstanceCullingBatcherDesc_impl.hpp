#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceCullingBatcherDesc.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceCullingBatcherDesc_def.hpp"
#include "UnityEngine/Rendering/zzzz__OnCullingCompleteCallback_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcherDesc.NewDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::InstanceCullingBatcherDesc (*)()>(
    &::UnityEngine::Rendering::InstanceCullingBatcherDesc::NewDefault)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65fd0e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCullingBatcherDesc>::get(),
                                                                               "NewDefault", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::InstanceCullingBatcherDesc UnityEngine::Rendering::InstanceCullingBatcherDesc::NewDefault() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCullingBatcherDesc>::get(),
                                                                             "NewDefault", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::InstanceCullingBatcherDesc, false>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "onCompleteCallback", ty: "::UnityEngine::Rendering::OnCullingCompleteCallback*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceCullingBatcherDesc::InstanceCullingBatcherDesc(::UnityEngine::Rendering::OnCullingCompleteCallback* onCompleteCallback) noexcept {
  this->onCompleteCallback = onCompleteCallback;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceCullingBatcherDesc::InstanceCullingBatcherDesc() {}
