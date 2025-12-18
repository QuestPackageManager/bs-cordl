#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SpeedTreeWindManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SpeedTreeWindManager_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Rendering/zzzz__SpeedTreeWindParamsBufferIterator_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::SpeedTreeWindManager.UpdateWindAndWriteBufferWindParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::ReadOnlySpan_1<int32_t>, ::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator, bool)>(
    &::UnityEngine::Rendering::SpeedTreeWindManager::UpdateWindAndWriteBufferWindParams)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x69f065c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SpeedTreeWindManager*>::get(), "UpdateWindAndWriteBufferWindParams", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SpeedTreeWindManager.UpdateWindAndWriteBufferWindParams_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>, ::ByRef<::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator>, bool)>(
        &::UnityEngine::Rendering::SpeedTreeWindManager::UpdateWindAndWriteBufferWindParams_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x69f0714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SpeedTreeWindManager*>::get(), "UpdateWindAndWriteBufferWindParams_Injected",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::SpeedTreeWindManager::UpdateWindAndWriteBufferWindParams(::System::ReadOnlySpan_1<int32_t> renderersID,
                                                                                             ::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator windParams, bool history) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SpeedTreeWindManager*>::get(), "UpdateWindAndWriteBufferWindParams", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, renderersID, windParams, history);
}
inline void UnityEngine::Rendering::SpeedTreeWindManager::UpdateWindAndWriteBufferWindParams_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> renderersID,
                                                                                                      ::ByRef<::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator> windParams, bool history) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SpeedTreeWindManager*>::get(), "UpdateWindAndWriteBufferWindParams_Injected",
                                 std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, renderersID, windParams, history);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SpeedTreeWindManager::SpeedTreeWindManager() {}
