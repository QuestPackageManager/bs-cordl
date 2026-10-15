#pragma once
// IWYU pragma private; include "GlobalNamespace/AlwaysOwnedMockPlayerEntitlementResolver.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AlwaysOwnedMockPlayerEntitlementResolver_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementsStatus_def.hpp"
#include "GlobalNamespace/zzzz__IMockPlayerEntitlementResolver_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AlwaysOwnedMockPlayerEntitlementResolver.GetLevelEntitlementStatusAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementsStatus>* (
    ::GlobalNamespace::AlwaysOwnedMockPlayerEntitlementResolver::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::AlwaysOwnedMockPlayerEntitlementResolver::GetLevelEntitlementStatusAsync)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ed6a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlwaysOwnedMockPlayerEntitlementResolver*>(),
                                                             { "GetLevelEntitlementStatusAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlwaysOwnedMockPlayerEntitlementResolver._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AlwaysOwnedMockPlayerEntitlementResolver::*)()>(&::GlobalNamespace::AlwaysOwnedMockPlayerEntitlementResolver::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ed6ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlwaysOwnedMockPlayerEntitlementResolver*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementsStatus>*
GlobalNamespace::AlwaysOwnedMockPlayerEntitlementResolver::GetLevelEntitlementStatusAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlwaysOwnedMockPlayerEntitlementResolver*>(),
                                                           { "GetLevelEntitlementStatusAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementsStatus>*>(this, ___internal_method, levelId, cancellationToken);
}
inline void GlobalNamespace::AlwaysOwnedMockPlayerEntitlementResolver::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlwaysOwnedMockPlayerEntitlementResolver*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AlwaysOwnedMockPlayerEntitlementResolver* GlobalNamespace::AlwaysOwnedMockPlayerEntitlementResolver::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AlwaysOwnedMockPlayerEntitlementResolver*>());
}
/// @brief Convert operator to "::GlobalNamespace::IMockPlayerEntitlementResolver"
constexpr GlobalNamespace::AlwaysOwnedMockPlayerEntitlementResolver::operator ::GlobalNamespace::IMockPlayerEntitlementResolver*() noexcept {
  return static_cast<::GlobalNamespace::IMockPlayerEntitlementResolver*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IMockPlayerEntitlementResolver"
constexpr ::GlobalNamespace::IMockPlayerEntitlementResolver* GlobalNamespace::AlwaysOwnedMockPlayerEntitlementResolver::i___GlobalNamespace__IMockPlayerEntitlementResolver() noexcept {
  return static_cast<::GlobalNamespace::IMockPlayerEntitlementResolver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AlwaysOwnedMockPlayerEntitlementResolver::AlwaysOwnedMockPlayerEntitlementResolver() {}
