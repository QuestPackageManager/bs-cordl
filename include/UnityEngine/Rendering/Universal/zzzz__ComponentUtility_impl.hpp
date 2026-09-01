#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\ComponentUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ComponentUtility_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ComponentUtility.IsUniversalCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Camera*)>(&::UnityEngine::Rendering::Universal::ComponentUtility::IsUniversalCamera)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x683ce9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ComponentUtility*>(), { "IsUniversalCamera", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ComponentUtility.IsUniversalLight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Light*)>(&::UnityEngine::Rendering::Universal::ComponentUtility::IsUniversalLight)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x683cf30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ComponentUtility*>(), { "IsUniversalLight", {}, { ::i2c::type_of<::UnityEngine::Light*>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::Universal::ComponentUtility::IsUniversalCamera(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ComponentUtility*>(), { "IsUniversalCamera", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, camera);
}
inline bool UnityEngine::Rendering::Universal::ComponentUtility::IsUniversalLight(::UnityEngine::Light* light) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ComponentUtility*>(), { "IsUniversalLight", {}, { ::i2c::type_of<::UnityEngine::Light*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, light);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ComponentUtility::ComponentUtility() {}
