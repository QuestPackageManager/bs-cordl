#pragma once
#include "UnityEngine/InputSystem/zzzz__MagneticFieldSensor_impl.hpp"
#include "UnityEngine/InputSystem/Android/zzzz__AndroidMagneticFieldSensor_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::AndroidMagneticFieldSensor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Android::AndroidMagneticFieldSensor::*)()>(
    &::UnityEngine::InputSystem::Android::AndroidMagneticFieldSensor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ae59d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::AndroidMagneticFieldSensor*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::Android::AndroidMagneticFieldSensor* UnityEngine::InputSystem::Android::AndroidMagneticFieldSensor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Android::AndroidMagneticFieldSensor*>());
}
inline void UnityEngine::InputSystem::Android::AndroidMagneticFieldSensor::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::AndroidMagneticFieldSensor*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::AndroidMagneticFieldSensor::AndroidMagneticFieldSensor() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
