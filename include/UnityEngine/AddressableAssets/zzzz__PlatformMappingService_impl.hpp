#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/PlatformMappingService.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AddressableAssets/zzzz__PlatformMappingService_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AddressablesPlatform_def.hpp"
#include "UnityEngine/zzzz__RuntimePlatform_def.hpp"
//  Writing Method size for method: ::UnityEngine::AddressableAssets::PlatformMappingService.GetAddressablesPlatformInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AddressableAssets::AddressablesPlatform (*)(::UnityEngine::RuntimePlatform)>(
    &::UnityEngine::AddressableAssets::PlatformMappingService::GetAddressablesPlatformInternal)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x645f284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::PlatformMappingService*>(),
                                                                                           { "GetAddressablesPlatformInternal", {}, { ::i2c::type_of<::UnityEngine::RuntimePlatform>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::PlatformMappingService.GetAddressablesPlatformPathInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::RuntimePlatform)>(&::UnityEngine::AddressableAssets::PlatformMappingService::GetAddressablesPlatformPathInternal)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x645f370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::PlatformMappingService*>(),
                                                                                           { "GetAddressablesPlatformPathInternal", {}, { ::i2c::type_of<::UnityEngine::RuntimePlatform>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::PlatformMappingService.GetPlatformPathSubFolder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::AddressableAssets::PlatformMappingService::GetPlatformPathSubFolder)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6452608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::PlatformMappingService*>(), { "GetPlatformPathSubFolder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::PlatformMappingService._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::PlatformMappingService::*)()>(&::UnityEngine::AddressableAssets::PlatformMappingService::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x645f4b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::PlatformMappingService*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::AddressableAssets::PlatformMappingService::setStaticF_s_RuntimeTargetMapping(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::RuntimePlatform, ::UnityEngine::AddressableAssets::AddressablesPlatform>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::RuntimePlatform, ::UnityEngine::AddressableAssets::AddressablesPlatform>*, "s_RuntimeTargetMapping",
                                    ::UnityEngine::AddressableAssets::PlatformMappingService*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::RuntimePlatform, ::UnityEngine::AddressableAssets::AddressablesPlatform>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::RuntimePlatform, ::UnityEngine::AddressableAssets::AddressablesPlatform>*
UnityEngine::AddressableAssets::PlatformMappingService::getStaticF_s_RuntimeTargetMapping() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::RuntimePlatform, ::UnityEngine::AddressableAssets::AddressablesPlatform>*,
                                           "s_RuntimeTargetMapping", ::UnityEngine::AddressableAssets::PlatformMappingService*>();
}
inline ::UnityEngine::AddressableAssets::AddressablesPlatform UnityEngine::AddressableAssets::PlatformMappingService::GetAddressablesPlatformInternal(::UnityEngine::RuntimePlatform platform) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::PlatformMappingService*>(),
                                                                                         { "GetAddressablesPlatformInternal", {}, { ::i2c::type_of<::UnityEngine::RuntimePlatform>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AddressableAssets::AddressablesPlatform>(nullptr, ___internal_method, platform);
}
inline ::StringW UnityEngine::AddressableAssets::PlatformMappingService::GetAddressablesPlatformPathInternal(::UnityEngine::RuntimePlatform platform) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::PlatformMappingService*>(),
                                                                                         { "GetAddressablesPlatformPathInternal", {}, { ::i2c::type_of<::UnityEngine::RuntimePlatform>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, platform);
}
inline ::StringW UnityEngine::AddressableAssets::PlatformMappingService::GetPlatformPathSubFolder() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::PlatformMappingService*>(), { "GetPlatformPathSubFolder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void UnityEngine::AddressableAssets::PlatformMappingService::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::PlatformMappingService*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AddressableAssets::PlatformMappingService* UnityEngine::AddressableAssets::PlatformMappingService::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::PlatformMappingService*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::PlatformMappingService::PlatformMappingService() {}
