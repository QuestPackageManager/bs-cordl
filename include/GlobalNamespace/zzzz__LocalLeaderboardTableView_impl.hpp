#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalLeaderboardTableView.hpp"
#include "GlobalNamespace/zzzz__LeaderboardTableView_impl.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardTableView_def.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardsModel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardTableView.SetScores
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardTableView::*)(
    ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>*, int32_t, int32_t)>(&::GlobalNamespace::LocalLeaderboardTableView::SetScores)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x3b0affc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardTableView*>::get(), "SetScores", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardTableView._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardTableView::*)()>(&::GlobalNamespace::LocalLeaderboardTableView::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3b0b2a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardTableView*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LocalLeaderboardTableView::SetScores(::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>* scores, int32_t specialScorePos,
                                                                  int32_t maxNumberOfCells) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardTableView*>::get(), "SetScores", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scores, specialScorePos, maxNumberOfCells);
}
inline void GlobalNamespace::LocalLeaderboardTableView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardTableView*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalLeaderboardTableView* GlobalNamespace::LocalLeaderboardTableView::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LocalLeaderboardTableView*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalLeaderboardTableView::LocalLeaderboardTableView() {}
