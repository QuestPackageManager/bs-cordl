#pragma once
// IWYU pragma private; include "GlobalNamespace\PlayerNameEqualityComparer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerNameEqualityComparer_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerNameEqualityComparer.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerNameEqualityComparer::*)(
    ::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*, ::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*)>(&::GlobalNamespace::PlayerNameEqualityComparer::Equals)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3756a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::PlayerNameEqualityComparer*>(),
            { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>(), ::i2c::type_of<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNameEqualityComparer.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PlayerNameEqualityComparer::*)(::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*)>(
    &::GlobalNamespace::PlayerNameEqualityComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3756aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerNameEqualityComparer*>(),
                                                             { "GetHashCode", {}, { ::i2c::type_of<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNameEqualityComparer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNameEqualityComparer::*)()>(&::GlobalNamespace::PlayerNameEqualityComparer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3756acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerNameEqualityComparer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::PlayerNameEqualityComparer::Equals(::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore* x, ::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore* y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::PlayerNameEqualityComparer*>(),
          { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>(), ::i2c::type_of<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y);
}
inline int32_t GlobalNamespace::PlayerNameEqualityComparer::GetHashCode(::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore* obj) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerNameEqualityComparer*>(),
                                                                                         { "GetHashCode", {}, { ::i2c::type_of<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void GlobalNamespace::PlayerNameEqualityComparer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerNameEqualityComparer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerNameEqualityComparer* GlobalNamespace::PlayerNameEqualityComparer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerNameEqualityComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>"
constexpr GlobalNamespace::PlayerNameEqualityComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>*
GlobalNamespace::PlayerNameEqualityComparer::i___System__Collections__Generic__IEqualityComparer_1___GlobalNamespace__PlatformLeaderboardsModel_LeaderboardScore__() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerNameEqualityComparer::PlayerNameEqualityComparer() {}
