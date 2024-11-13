#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerNameEqualityComparer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerNameEqualityComparer_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerNameEqualityComparer.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PlayerNameEqualityComparer::*)(
    ::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*, ::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*)>(&::GlobalNamespace::PlayerNameEqualityComparer::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x26cb540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerNameEqualityComparer*>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNameEqualityComparer.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::PlayerNameEqualityComparer::*)(
    ::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*)>(&::GlobalNamespace::PlayerNameEqualityComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26cb560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerNameEqualityComparer*>::get(), "GetHashCode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNameEqualityComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerNameEqualityComparer::*)()>(&::GlobalNamespace::PlayerNameEqualityComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26cb584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerNameEqualityComparer*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>"
constexpr GlobalNamespace::PlayerNameEqualityComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>*
GlobalNamespace::PlayerNameEqualityComparer::i___System__Collections__Generic__IEqualityComparer_1___GlobalNamespace____PlatformLeaderboardsModel__LeaderboardScore__() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>*>(static_cast<void*>(this));
}
inline bool GlobalNamespace::PlayerNameEqualityComparer::Equals(::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore* x,
                                                                ::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore* y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerNameEqualityComparer*>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x, y);
}
inline int32_t GlobalNamespace::PlayerNameEqualityComparer::GetHashCode(::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore* obj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerNameEqualityComparer*>::get(), "GetHashCode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj);
}
inline ::GlobalNamespace::PlayerNameEqualityComparer* GlobalNamespace::PlayerNameEqualityComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerNameEqualityComparer*>());
}
inline void GlobalNamespace::PlayerNameEqualityComparer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerNameEqualityComparer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerNameEqualityComparer::PlayerNameEqualityComparer() {}
