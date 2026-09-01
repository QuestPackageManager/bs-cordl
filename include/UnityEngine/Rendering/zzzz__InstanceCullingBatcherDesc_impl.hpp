#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\InstanceCullingBatcherDesc.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceCullingBatcherDesc_def.hpp"
#include "UnityEngine/Rendering/zzzz__OnCullingCompleteCallback_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcherDesc.NewDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::InstanceCullingBatcherDesc (*)()>(&::UnityEngine::Rendering::InstanceCullingBatcherDesc::NewDefault)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x681bdd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherDesc>(), { "NewDefault", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::InstanceCullingBatcherDesc UnityEngine::Rendering::InstanceCullingBatcherDesc::NewDefault() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcherDesc>(), { "NewDefault", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::InstanceCullingBatcherDesc>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "onCompleteCallback", ty: "::UnityEngine::Rendering::OnCullingCompleteCallback*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceCullingBatcherDesc::InstanceCullingBatcherDesc(::UnityEngine::Rendering::OnCullingCompleteCallback* onCompleteCallback) noexcept {
  this->onCompleteCallback = onCompleteCallback;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceCullingBatcherDesc::InstanceCullingBatcherDesc() {}
