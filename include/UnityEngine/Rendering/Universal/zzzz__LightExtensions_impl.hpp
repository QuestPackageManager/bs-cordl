#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/LightExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightExtensions_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalAdditionalLightData_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightExtensions.GetUniversalAdditionalLightData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData> (*)(::UnityEngine::Light*)>(
    &::UnityEngine::Rendering::Universal::LightExtensions::GetUniversalAdditionalLightData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x68c3d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::LightExtensions*>(),
                                                                                           { "GetUniversalAdditionalLightData", {}, { ::i2c::type_of<::UnityEngine::Light*>() } })));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData> UnityEngine::Rendering::Universal::LightExtensions::GetUniversalAdditionalLightData(::UnityEngine::Light* light) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::LightExtensions*>(),
                                                                                         { "GetUniversalAdditionalLightData", {}, { ::i2c::type_of<::UnityEngine::Light*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData>>(nullptr, ___internal_method, light);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LightExtensions::LightExtensions() {}
