#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IVolumetricCloud.hpp"
#include "UnityEngine/Rendering/zzzz__IVolumetricCloud_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::IVolumetricCloud.IsVolumetricCloudUsable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::IVolumetricCloud::*)()>(&::UnityEngine::Rendering::IVolumetricCloud::IsVolumetricCloudUsable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IVolumetricCloud*>(), { ::i2c::class_of<::UnityEngine::Rendering::IVolumetricCloud*>(), 0 }));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::IVolumetricCloud::IsVolumetricCloudUsable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IVolumetricCloud*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
