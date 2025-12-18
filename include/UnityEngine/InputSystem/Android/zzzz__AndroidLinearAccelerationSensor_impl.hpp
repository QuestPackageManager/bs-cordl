#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/AndroidLinearAccelerationSensor.hpp"
#include "UnityEngine/InputSystem/zzzz__LinearAccelerationSensor_impl.hpp"
#include "UnityEngine/InputSystem/Android/zzzz__AndroidLinearAccelerationSensor_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor::*)()>(
    &::UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x63f53a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor* UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor::AndroidLinearAccelerationSensor() {}
