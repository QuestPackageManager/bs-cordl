#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RTHandleStaticHelpers.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandleStaticHelpers_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleStaticHelpers.SetRTHandleStaticWrapper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::RenderTargetIdentifier)>(
    &::UnityEngine::Rendering::RTHandleStaticHelpers::SetRTHandleStaticWrapper)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x658c1a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RTHandleStaticHelpers>::get(), "SetRTHandleStaticWrapper", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleStaticHelpers.SetRTHandleUserManagedWrapper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::UnityEngine::Rendering::RTHandle*>, ::UnityEngine::Rendering::RenderTargetIdentifier)>(
    &::UnityEngine::Rendering::RTHandleStaticHelpers::SetRTHandleUserManagedWrapper)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x658c310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RTHandleStaticHelpers>::get(), "SetRTHandleUserManagedWrapper", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RTHandle*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RTHandleStaticHelpers::setStaticF_s_RTHandleWrapper(::UnityEngine::Rendering::RTHandle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RTHandle*, "s_RTHandleWrapper",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RTHandleStaticHelpers>::get>(
      std::forward<::UnityEngine::Rendering::RTHandle*>(value));
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::RTHandleStaticHelpers::getStaticF_s_RTHandleWrapper() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RTHandle*, "s_RTHandleWrapper",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RTHandleStaticHelpers>::get>();
}
inline void UnityEngine::Rendering::RTHandleStaticHelpers::SetRTHandleStaticWrapper(::UnityEngine::Rendering::RenderTargetIdentifier rtId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RTHandleStaticHelpers>::get(), "SetRTHandleStaticWrapper", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rtId);
}
inline void UnityEngine::Rendering::RTHandleStaticHelpers::SetRTHandleUserManagedWrapper(::ByRef<::UnityEngine::Rendering::RTHandle*> rtWrapper,
                                                                                         ::UnityEngine::Rendering::RenderTargetIdentifier rtId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RTHandleStaticHelpers>::get(), "SetRTHandleUserManagedWrapper", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RTHandle*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rtWrapper, rtId);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RTHandleStaticHelpers::RTHandleStaticHelpers() {}
