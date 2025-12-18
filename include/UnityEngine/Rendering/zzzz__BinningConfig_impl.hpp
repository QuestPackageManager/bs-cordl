#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BinningConfig.hpp"
#include "UnityEngine/Rendering/zzzz__BinningConfig_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::BinningConfig.get_visibilityConfigCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::BinningConfig::*)()>(
    &::UnityEngine::Rendering::BinningConfig::get_visibilityConfigCount)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x665fb48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BinningConfig>::get(),
                                                                               "get_visibilityConfigCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::BinningConfig::get_visibilityConfigCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BinningConfig>::get(),
                                                                             "get_visibilityConfigCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
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
