#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalLeaderboardTableView.hpp"
#include "GlobalNamespace/zzzz__LeaderboardTableView_impl.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardTableView_def.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardsModel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardTableView.SetScores
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardTableView::*)(
    ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>*, int32_t, int32_t)>(&::GlobalNamespace::LocalLeaderboardTableView::SetScores)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5a1ed2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardTableView*>(),
                                                             { "SetScores",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardTableView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardTableView::*)()>(&::GlobalNamespace::LocalLeaderboardTableView::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a1efd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardTableView*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LocalLeaderboardTableView::SetScores(::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>* scores, int32_t specialScorePos,
                                                                  int32_t maxNumberOfCells) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardTableView*>(),
                                                           { "SetScores",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel_ScoreData*>*>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scores, specialScorePos, maxNumberOfCells);
}
inline void GlobalNamespace::LocalLeaderboardTableView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardTableView*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalLeaderboardTableView* GlobalNamespace::LocalLeaderboardTableView::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalLeaderboardTableView*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalLeaderboardTableView::LocalLeaderboardTableView() {}
