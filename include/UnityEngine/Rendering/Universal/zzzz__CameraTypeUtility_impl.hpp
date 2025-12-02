#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/CameraTypeUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraTypeUtility_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraRenderType_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraTypeUtility.GetName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::Rendering::Universal::CameraRenderType)>(
    &::UnityEngine::Rendering::Universal::CameraTypeUtility::GetName)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x66a8508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraTypeUtility*>::get(), "GetName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::CameraRenderType>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::CameraTypeUtility::setStaticF_s_CameraTypeNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "s_CameraTypeNames",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraTypeUtility*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> UnityEngine::Rendering::Universal::CameraTypeUtility::getStaticF_s_CameraTypeNames() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "s_CameraTypeNames",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraTypeUtility*>::get>();
}
inline ::StringW UnityEngine::Rendering::Universal::CameraTypeUtility::GetName(::UnityEngine::Rendering::Universal::CameraRenderType type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraTypeUtility*>::get(), "GetName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::CameraRenderType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::CameraTypeUtility::CameraTypeUtility() {}
