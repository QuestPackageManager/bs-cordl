#pragma once
// IWYU pragma private; include "BGNet\Core\IPlatformAccessTokenFetcher.hpp"
#include "BGNet/Core/zzzz__IPlatformAccessTokenFetcher_def.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::BGNet::Core::IPlatformAccessTokenFetcher.GetXPlatformAccessToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>* (
    ::BGNet::Core::IPlatformAccessTokenFetcher::*)(::System::Threading::CancellationToken, bool)>(&::BGNet::Core::IPlatformAccessTokenFetcher::GetXPlatformAccessToken)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGNet::Core::IPlatformAccessTokenFetcher*>(), { ::i2c::class_of<::BGNet::Core::IPlatformAccessTokenFetcher*>(), 0 }));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>*
BGNet::Core::IPlatformAccessTokenFetcher::GetXPlatformAccessToken(::System::Threading::CancellationToken cancellationToken, bool skipCache) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGNet::Core::IPlatformAccessTokenFetcher*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>*>(this, ___internal_method, cancellationToken, skipCache);
}
