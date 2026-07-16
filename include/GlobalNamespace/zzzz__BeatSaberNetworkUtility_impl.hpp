#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatSaberNetworkUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatSaberNetworkUtility_def.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatSaberNetworkUtility.GetHashedUserId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::GlobalNamespace::AuthenticationToken_PlatformType)>(&::GlobalNamespace::BeatSaberNetworkUtility::GetHashedUserId)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x32a70b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberNetworkUtility*>(),
                                                             { "GetHashedUserId", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::AuthenticationToken_PlatformType>() } })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::BeatSaberNetworkUtility::GetHashedUserId(::StringW userId, ::GlobalNamespace::AuthenticationToken_PlatformType platform) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberNetworkUtility*>(),
                                                           { "GetHashedUserId", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::AuthenticationToken_PlatformType>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, userId, platform);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatSaberNetworkUtility::BeatSaberNetworkUtility() {}
