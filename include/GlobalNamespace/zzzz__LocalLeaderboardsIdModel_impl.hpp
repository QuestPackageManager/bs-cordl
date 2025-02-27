#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalLeaderboardsIdModel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardsIdModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsIdModel.GetLocalLeaderboardID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ByRef<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::LocalLeaderboardsIdModel::GetLocalLeaderboardID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2705000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsIdModel*>::get(), "GetLocalLeaderboardID", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsIdModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsIdModel::*)()>(&::GlobalNamespace::LocalLeaderboardsIdModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2705008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsIdModel*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::LocalLeaderboardsIdModel::GetLocalLeaderboardID(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsIdModel*>::get(), "GetLocalLeaderboardID", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, beatmapKey);
}
inline void GlobalNamespace::LocalLeaderboardsIdModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsIdModel*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalLeaderboardsIdModel* GlobalNamespace::LocalLeaderboardsIdModel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LocalLeaderboardsIdModel*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalLeaderboardsIdModel::LocalLeaderboardsIdModel() {}
