#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BinningConfig.hpp"
#include "UnityEngine/Rendering/zzzz__BinningConfig_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::BinningConfig.get_visibilityConfigCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::BinningConfig::*)()>(&::UnityEngine::Rendering::BinningConfig::get_visibilityConfigCount)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6811498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BinningConfig>(), { "get_visibilityConfigCount", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::BinningConfig::get_visibilityConfigCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BinningConfig>(), { "get_visibilityConfigCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "viewCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "supportsCrossFade", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "supportsMotionCheck", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BinningConfig::BinningConfig(int32_t viewCount, bool supportsCrossFade, bool supportsMotionCheck) noexcept {
  this->viewCount = viewCount;
  this->supportsCrossFade = supportsCrossFade;
  this->supportsMotionCheck = supportsMotionCheck;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BinningConfig::BinningConfig() {}
