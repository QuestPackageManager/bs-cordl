#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/LowLevel/AndroidSensorCapabilities.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidSensorType_impl.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidSensorCapabilities_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities.ToJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities::*)()>(
    &::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities::ToJson)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x63f66cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities>::get(), "ToJson",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities.FromJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities (*)(::StringW)>(
    &::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities::FromJson)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x63f6730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities>::get(), "FromJson",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities::*)()>(
    &::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities::ToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x63f67c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities>::get(), 3));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities::ToJson() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities>::get(), "ToJson",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities::FromJson(::StringW json) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities>::get(), "FromJson",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities, false>(nullptr, ___internal_method, json);
}
inline ::StringW UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "sensorType", ty: "::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities::AndroidSensorCapabilities(::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType sensorType) noexcept {
  this->sensorType = sensorType;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities::AndroidSensorCapabilities() {}
