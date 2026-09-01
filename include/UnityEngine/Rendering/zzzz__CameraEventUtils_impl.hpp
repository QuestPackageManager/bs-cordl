#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\CameraEventUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CameraEventUtils_def.hpp"
#include "UnityEngine/Rendering/zzzz__CameraEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::CameraEventUtils.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::CameraEvent)>(&::UnityEngine::Rendering::CameraEventUtils::IsValid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b08e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CameraEventUtils*>(), { "IsValid", {}, { ::i2c::type_of<::UnityEngine::Rendering::CameraEvent>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::CameraEventUtils::IsValid(::UnityEngine::Rendering::CameraEvent value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CameraEventUtils*>(), { "IsValid", {}, { ::i2c::type_of<::UnityEngine::Rendering::CameraEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CameraEventUtils::CameraEventUtils() {}
