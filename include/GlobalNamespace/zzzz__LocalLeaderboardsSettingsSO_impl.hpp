#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalLeaderboardsSettingsSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardsSettingsSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsSettingsSO.get_maxNumberOfScoresInLeaderboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::LocalLeaderboardsSettingsSO::*)()>(
    &::GlobalNamespace::LocalLeaderboardsSettingsSO::get_maxNumberOfScoresInLeaderboard)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c4218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsSettingsSO*>::get(), "get_maxNumberOfScoresInLeaderboard",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsSettingsSO.set_maxNumberOfScoresInLeaderboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsSettingsSO::*)(int32_t)>(
    &::GlobalNamespace::LocalLeaderboardsSettingsSO::set_maxNumberOfScoresInLeaderboard)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c4220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsSettingsSO*>::get(), "set_maxNumberOfScoresInLeaderboard",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsSettingsSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsSettingsSO::*)()>(&::GlobalNamespace::LocalLeaderboardsSettingsSO::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26c4228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsSettingsSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::LocalLeaderboardsSettingsSO::__cordl_internal_get__maxNumberOfScoresInLeaderboard() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxNumberOfScoresInLeaderboard;
}
constexpr int32_t const& GlobalNamespace::LocalLeaderboardsSettingsSO::__cordl_internal_get__maxNumberOfScoresInLeaderboard() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxNumberOfScoresInLeaderboard;
}
constexpr void GlobalNamespace::LocalLeaderboardsSettingsSO::__cordl_internal_set__maxNumberOfScoresInLeaderboard(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxNumberOfScoresInLeaderboard = value;
}
inline int32_t GlobalNamespace::LocalLeaderboardsSettingsSO::get_maxNumberOfScoresInLeaderboard() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsSettingsSO*>::get(), "get_maxNumberOfScoresInLeaderboard",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::LocalLeaderboardsSettingsSO::set_maxNumberOfScoresInLeaderboard(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsSettingsSO*>::get(), "set_maxNumberOfScoresInLeaderboard",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::LocalLeaderboardsSettingsSO* GlobalNamespace::LocalLeaderboardsSettingsSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LocalLeaderboardsSettingsSO*>());
}
inline void GlobalNamespace::LocalLeaderboardsSettingsSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsSettingsSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalLeaderboardsSettingsSO::LocalLeaderboardsSettingsSO() {}
