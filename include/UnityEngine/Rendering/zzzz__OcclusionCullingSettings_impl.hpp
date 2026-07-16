#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OcclusionCullingSettings.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionTest_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionCullingSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionTest_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::OcclusionCullingSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::OcclusionCullingSettings::*)(int32_t, ::UnityEngine::Rendering::OcclusionTest)>(
    &::UnityEngine::Rendering::OcclusionCullingSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6810df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OcclusionCullingSettings>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::OcclusionTest>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::OcclusionCullingSettings::_ctor(int32_t viewInstanceID, ::UnityEngine::Rendering::OcclusionTest occlusionTest) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OcclusionCullingSettings>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::OcclusionTest>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, viewInstanceID, occlusionTest);
}
// Ctor Parameters [CppParam { name: "viewInstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "occlusionTest", ty: "::UnityEngine::Rendering::OcclusionTest",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceMultiplier", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::OcclusionCullingSettings::OcclusionCullingSettings(int32_t viewInstanceID, ::UnityEngine::Rendering::OcclusionTest occlusionTest,
                                                                                       int32_t instanceMultiplier) noexcept {
  this->viewInstanceID = viewInstanceID;
  this->occlusionTest = occlusionTest;
  this->instanceMultiplier = instanceMultiplier;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OcclusionCullingSettings::OcclusionCullingSettings() {}
