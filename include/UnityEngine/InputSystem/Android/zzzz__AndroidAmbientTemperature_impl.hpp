#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/AndroidAmbientTemperature.hpp"
#include "UnityEngine/InputSystem/zzzz__AmbientTemperatureSensor_impl.hpp"
#include "UnityEngine/InputSystem/Android/zzzz__AndroidAmbientTemperature_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::AndroidAmbientTemperature._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Android::AndroidAmbientTemperature::*)()>(
    &::UnityEngine::InputSystem::Android::AndroidAmbientTemperature::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4605a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::AndroidAmbientTemperature*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Android::AndroidAmbientTemperature::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::AndroidAmbientTemperature*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Android::AndroidAmbientTemperature* UnityEngine::InputSystem::Android::AndroidAmbientTemperature::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Android::AndroidAmbientTemperature*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::AndroidAmbientTemperature::AndroidAmbientTemperature() {}
