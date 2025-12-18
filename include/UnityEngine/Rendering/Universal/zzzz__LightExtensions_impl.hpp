#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/LightExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightExtensions_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalAdditionalLightData_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightExtensions.GetUniversalAdditionalLightData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData> (*)(::UnityEngine::Light*)>(
    &::UnityEngine::Rendering::Universal::LightExtensions::GetUniversalAdditionalLightData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x671116c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightExtensions*>::get(), "GetUniversalAdditionalLightData",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Light*>::get() })));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData> UnityEngine::Rendering::Universal::LightExtensions::GetUniversalAdditionalLightData(::UnityEngine::Light* light) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightExtensions*>::get(), "GetUniversalAdditionalLightData",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Light*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData>, false>(nullptr, ___internal_method, light);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LightExtensions::LightExtensions() {}
