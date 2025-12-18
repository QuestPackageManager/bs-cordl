#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ComponentUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ComponentUtility_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ComponentUtility.IsUniversalCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Camera*)>(&::UnityEngine::Rendering::Universal::ComponentUtility::IsUniversalCamera)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6684888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ComponentUtility*>::get(), "IsUniversalCamera", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ComponentUtility.IsUniversalLight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Light*)>(&::UnityEngine::Rendering::Universal::ComponentUtility::IsUniversalLight)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x668491c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ComponentUtility*>::get(), "IsUniversalLight", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Light*>::get() })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::Universal::ComponentUtility::IsUniversalCamera(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ComponentUtility*>::get(), "IsUniversalCamera", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, camera);
}
inline bool UnityEngine::Rendering::Universal::ComponentUtility::IsUniversalLight(::UnityEngine::Light* light) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ComponentUtility*>::get(), "IsUniversalLight",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Light*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, light);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ComponentUtility::ComponentUtility() {}
