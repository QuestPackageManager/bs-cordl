#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/CameraTypeUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraTypeUtility_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraRenderType_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraTypeUtility.GetName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Rendering::Universal::CameraRenderType)>(&::UnityEngine::Rendering::Universal::CameraTypeUtility::GetName)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x68c2c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraTypeUtility*>(),
                                                                                           { "GetName", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::CameraRenderType>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::CameraTypeUtility::setStaticF_s_CameraTypeNames(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_CameraTypeNames", ::UnityEngine::Rendering::Universal::CameraTypeUtility*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> UnityEngine::Rendering::Universal::CameraTypeUtility::getStaticF_s_CameraTypeNames() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_CameraTypeNames", ::UnityEngine::Rendering::Universal::CameraTypeUtility*>();
}
inline ::StringW UnityEngine::Rendering::Universal::CameraTypeUtility::GetName(::UnityEngine::Rendering::Universal::CameraRenderType type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraTypeUtility*>(),
                                                                                         { "GetName", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::CameraRenderType>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::CameraTypeUtility::CameraTypeUtility() {}
