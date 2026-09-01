#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RenderersBatchersContextDesc.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceNumInfo_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderersBatchersContextDesc_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContextDesc.NewDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderersBatchersContextDesc (*)()>(&::UnityEngine::Rendering::RenderersBatchersContextDesc::NewDefault)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6836c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderersBatchersContextDesc>(), { "NewDefault", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::RenderersBatchersContextDesc UnityEngine::Rendering::RenderersBatchersContextDesc::NewDefault() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderersBatchersContextDesc>(), { "NewDefault", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderersBatchersContextDesc>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "instanceNumInfo", ty: "::UnityEngine::Rendering::InstanceNumInfo", modifiers: "", def_value: Some("{}") }, CppParam { name: "supportDitheringCrossFade", ty:
// "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "enableBoundingSpheresInstanceData", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "smallMeshScreenPercentage", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "enableCullerDebugStats", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderersBatchersContextDesc::RenderersBatchersContextDesc(::UnityEngine::Rendering::InstanceNumInfo instanceNumInfo, bool supportDitheringCrossFade,
                                                                                               bool enableBoundingSpheresInstanceData, float_t smallMeshScreenPercentage,
                                                                                               bool enableCullerDebugStats) noexcept {
  this->instanceNumInfo = instanceNumInfo;
  this->supportDitheringCrossFade = supportDitheringCrossFade;
  this->enableBoundingSpheresInstanceData = enableBoundingSpheresInstanceData;
  this->smallMeshScreenPercentage = smallMeshScreenPercentage;
  this->enableCullerDebugStats = enableCullerDebugStats;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderersBatchersContextDesc::RenderersBatchersContextDesc() {}
