#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OcclusionCullingSettings.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionTest_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionCullingSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionTest_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::OcclusionCullingSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::OcclusionCullingSettings::*)(int32_t, ::UnityEngine::Rendering::OcclusionTest)>(
    &::UnityEngine::Rendering::OcclusionCullingSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x665f4a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingSettings>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::OcclusionTest>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::OcclusionCullingSettings::_ctor(int32_t viewInstanceID, ::UnityEngine::Rendering::OcclusionTest occlusionTest) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OcclusionCullingSettings>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::OcclusionTest>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewInstanceID, occlusionTest);
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
