#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/PlatformMappingService.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AddressableAssets/zzzz__PlatformMappingService_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AddressablesPlatform_def.hpp"
#include "UnityEngine/zzzz__RuntimePlatform_def.hpp"
//  Writing Method size for method: ::UnityEngine::AddressableAssets::PlatformMappingService.GetAddressablesPlatformInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AddressableAssets::AddressablesPlatform (*)(::UnityEngine::RuntimePlatform)>(
    &::UnityEngine::AddressableAssets::PlatformMappingService::GetAddressablesPlatformInternal)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x4493f3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::PlatformMappingService*>::get(), "GetAddressablesPlatformInternal",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RuntimePlatform>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::PlatformMappingService.GetAddressablesPlatformPathInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::RuntimePlatform)>(
    &::UnityEngine::AddressableAssets::PlatformMappingService::GetAddressablesPlatformPathInternal)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x4494010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::PlatformMappingService*>::get(), "GetAddressablesPlatformPathInternal",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RuntimePlatform>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::PlatformMappingService.GetPlatform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AddressableAssets::AddressablesPlatform (*)()>(
    &::UnityEngine::AddressableAssets::PlatformMappingService::GetPlatform)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4494130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::PlatformMappingService*>::get(),
                                                                               "GetPlatform", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::PlatformMappingService.GetPlatformPathSubFolder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::UnityEngine::AddressableAssets::PlatformMappingService::GetPlatformPathSubFolder)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x44880b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::PlatformMappingService*>::get(),
                                                                               "GetPlatformPathSubFolder", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::PlatformMappingService._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::PlatformMappingService::*)()>(
    &::UnityEngine::AddressableAssets::PlatformMappingService::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44941b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::PlatformMappingService*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::AddressableAssets::PlatformMappingService::setStaticF_s_RuntimeTargetMapping(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::RuntimePlatform, ::UnityEngine::AddressableAssets::AddressablesPlatform>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::RuntimePlatform, ::UnityEngine::AddressableAssets::AddressablesPlatform>*, "s_RuntimeTargetMapping",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::PlatformMappingService*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::RuntimePlatform, ::UnityEngine::AddressableAssets::AddressablesPlatform>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::RuntimePlatform, ::UnityEngine::AddressableAssets::AddressablesPlatform>*
UnityEngine::AddressableAssets::PlatformMappingService::getStaticF_s_RuntimeTargetMapping() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::RuntimePlatform, ::UnityEngine::AddressableAssets::AddressablesPlatform>*,
                                           "s_RuntimeTargetMapping", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::PlatformMappingService*>::get>();
}
inline ::UnityEngine::AddressableAssets::AddressablesPlatform UnityEngine::AddressableAssets::PlatformMappingService::GetAddressablesPlatformInternal(::UnityEngine::RuntimePlatform platform) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::PlatformMappingService*>::get(), "GetAddressablesPlatformInternal",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RuntimePlatform>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AddressableAssets::AddressablesPlatform, false>(nullptr, ___internal_method, platform);
}
inline ::StringW UnityEngine::AddressableAssets::PlatformMappingService::GetAddressablesPlatformPathInternal(::UnityEngine::RuntimePlatform platform) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::PlatformMappingService*>::get(), "GetAddressablesPlatformPathInternal",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RuntimePlatform>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, platform);
}
inline ::UnityEngine::AddressableAssets::AddressablesPlatform UnityEngine::AddressableAssets::PlatformMappingService::GetPlatform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::PlatformMappingService*>::get(),
                                                                             "GetPlatform", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AddressableAssets::AddressablesPlatform, false>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::AddressableAssets::PlatformMappingService::GetPlatformPathSubFolder() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::PlatformMappingService*>::get(),
                                                                             "GetPlatformPathSubFolder", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::AddressableAssets::PlatformMappingService* UnityEngine::AddressableAssets::PlatformMappingService::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::AddressableAssets::PlatformMappingService*>());
}
inline void UnityEngine::AddressableAssets::PlatformMappingService::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::PlatformMappingService*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::PlatformMappingService::PlatformMappingService() {}
