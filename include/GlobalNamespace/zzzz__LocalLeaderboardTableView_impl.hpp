#pragma once
#include "GlobalNamespace/zzzz__LeaderboardTableView_impl.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardTableView_def.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardsModel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardTableView.SetScores
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardTableView::*)(
    ::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>*, int32_t, int32_t)>(&::GlobalNamespace::LocalLeaderboardTableView::SetScores)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x22e731c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardTableView*>::get(), "SetScores", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardTableView._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardTableView::*)()>(&::GlobalNamespace::LocalLeaderboardTableView::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22e75a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardTableView*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LocalLeaderboardTableView::SetScores(::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>* scores, int32_t specialScorePos,
                                                                  int32_t maxNumberOfCells) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardTableView*>::get(), "SetScores", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scores, specialScorePos, maxNumberOfCells);
}
inline ::GlobalNamespace::LocalLeaderboardTableView* GlobalNamespace::LocalLeaderboardTableView::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LocalLeaderboardTableView*>());
}
inline void GlobalNamespace::LocalLeaderboardTableView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardTableView*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalLeaderboardTableView::LocalLeaderboardTableView() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
