#pragma once
// IWYU pragma private; include "GlobalNamespace/LeaderboardTableView.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LeaderboardTableView_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardTableCell_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardTableView_def.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
#include "HMUI/zzzz__TableView_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LeaderboardTableView_ScoreData.get_score
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LeaderboardTableView_ScoreData::*)()>(&::GlobalNamespace::LeaderboardTableView_ScoreData::get_score)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a1dc70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableView_ScoreData*>(), { "get_score", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardTableView_ScoreData.set_score
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardTableView_ScoreData::*)(int32_t)>(&::GlobalNamespace::LeaderboardTableView_ScoreData::set_score)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a1dc78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableView_ScoreData*>(), { "set_score", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardTableView_ScoreData.get_playerName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LeaderboardTableView_ScoreData::*)()>(&::GlobalNamespace::LeaderboardTableView_ScoreData::get_playerName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a1dc80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableView_ScoreData*>(), { "get_playerName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardTableView_ScoreData.set_playerName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardTableView_ScoreData::*)(::StringW)>(&::GlobalNamespace::LeaderboardTableView_ScoreData::set_playerName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a1dc88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableView_ScoreData*>(), { "set_playerName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardTableView_ScoreData.get_rank
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LeaderboardTableView_ScoreData::*)()>(&::GlobalNamespace::LeaderboardTableView_ScoreData::get_rank)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a1dc90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableView_ScoreData*>(), { "get_rank", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardTableView_ScoreData.set_rank
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardTableView_ScoreData::*)(int32_t)>(&::GlobalNamespace::LeaderboardTableView_ScoreData::set_rank)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a1dc98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableView_ScoreData*>(), { "set_rank", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardTableView_ScoreData.get_fullCombo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LeaderboardTableView_ScoreData::*)()>(&::GlobalNamespace::LeaderboardTableView_ScoreData::get_fullCombo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a1dca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableView_ScoreData*>(), { "get_fullCombo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardTableView_ScoreData.set_fullCombo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardTableView_ScoreData::*)(bool)>(&::GlobalNamespace::LeaderboardTableView_ScoreData::set_fullCombo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a1dca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableView_ScoreData*>(), { "set_fullCombo", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardTableView_ScoreData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardTableView_ScoreData::*)(int32_t, ::StringW, int32_t, bool)>(
    &::GlobalNamespace::LeaderboardTableView_ScoreData::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a1dcb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableView_ScoreData*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::LeaderboardTableView_ScoreData::__cordl_internal_get__score_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____score_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::LeaderboardTableView_ScoreData::__cordl_internal_get__score_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____score_k__BackingField;
}
constexpr void GlobalNamespace::LeaderboardTableView_ScoreData::__cordl_internal_set__score_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____score_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::LeaderboardTableView_ScoreData::__cordl_internal_get__playerName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerName_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::LeaderboardTableView_ScoreData::__cordl_internal_get__playerName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerName_k__BackingField;
}
constexpr void GlobalNamespace::LeaderboardTableView_ScoreData::__cordl_internal_set__playerName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerName_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::LeaderboardTableView_ScoreData::__cordl_internal_get__rank_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rank_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::LeaderboardTableView_ScoreData::__cordl_internal_get__rank_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rank_k__BackingField;
}
constexpr void GlobalNamespace::LeaderboardTableView_ScoreData::__cordl_internal_set__rank_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rank_k__BackingField = value;
}
constexpr bool& GlobalNamespace::LeaderboardTableView_ScoreData::__cordl_internal_get__fullCombo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullCombo_k__BackingField;
}
constexpr bool const& GlobalNamespace::LeaderboardTableView_ScoreData::__cordl_internal_get__fullCombo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullCombo_k__BackingField;
}
constexpr void GlobalNamespace::LeaderboardTableView_ScoreData::__cordl_internal_set__fullCombo_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fullCombo_k__BackingField = value;
}
inline int32_t GlobalNamespace::LeaderboardTableView_ScoreData::get_score() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableView_ScoreData*>(), { "get_score", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::LeaderboardTableView_ScoreData::set_score(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableView_ScoreData*>(), { "set_score", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::LeaderboardTableView_ScoreData::get_playerName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableView_ScoreData*>(), { "get_playerName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::LeaderboardTableView_ScoreData::set_playerName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableView_ScoreData*>(), { "set_playerName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::LeaderboardTableView_ScoreData::get_rank() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableView_ScoreData*>(), { "get_rank", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::LeaderboardTableView_ScoreData::set_rank(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableView_ScoreData*>(), { "set_rank", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::LeaderboardTableView_ScoreData::get_fullCombo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableView_ScoreData*>(), { "get_fullCombo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::LeaderboardTableView_ScoreData::set_fullCombo(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableView_ScoreData*>(), { "set_fullCombo", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LeaderboardTableView_ScoreData::_ctor(int32_t score, ::StringW playerName, int32_t rank, bool fullCombo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableView_ScoreData*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, score, playerName, rank, fullCombo);
}
inline ::GlobalNamespace::LeaderboardTableView_ScoreData* GlobalNamespace::LeaderboardTableView_ScoreData::New_ctor(int32_t score, ::StringW playerName, int32_t rank, bool fullCombo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LeaderboardTableView_ScoreData*>(score, playerName, rank, fullCombo));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LeaderboardTableView_ScoreData::LeaderboardTableView_ScoreData() {}
//  Writing Method size for method: ::GlobalNamespace::LeaderboardTableView.CellSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::LeaderboardTableView::*)(int32_t)>(&::GlobalNamespace::LeaderboardTableView::CellSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a1d9b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableView*>(), { "CellSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardTableView.NumberOfCells
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LeaderboardTableView::*)()>(&::GlobalNamespace::LeaderboardTableView::NumberOfCells)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5a1d9bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableView*>(), { "NumberOfCells", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardTableView.CellForIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::TableCell> (::GlobalNamespace::LeaderboardTableView::*)(::HMUI::TableView*, int32_t)>(
    &::GlobalNamespace::LeaderboardTableView::CellForIdx)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5a1da10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableView*>(), { "CellForIdx", {}, { ::i2c::type_of<::HMUI::TableView*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardTableView.SetScores
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardTableView::*)(::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardTableView_ScoreData*>*,
                                                                                                         int32_t)>(&::GlobalNamespace::LeaderboardTableView::SetScores)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5a1dc30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableView*>(),
                            { "SetScores", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardTableView_ScoreData*>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardTableView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardTableView::*)()>(&::GlobalNamespace::LeaderboardTableView::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a1dc64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableView*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LeaderboardTableCell>& GlobalNamespace::LeaderboardTableView::__cordl_internal_get__cellPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellPrefab;
}
constexpr ::UnityW<::GlobalNamespace::LeaderboardTableCell> const& GlobalNamespace::LeaderboardTableView::__cordl_internal_get__cellPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellPrefab;
}
constexpr void GlobalNamespace::LeaderboardTableView::__cordl_internal_set__cellPrefab(::UnityW<::GlobalNamespace::LeaderboardTableCell> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cellPrefab = value;
}
constexpr ::UnityW<::HMUI::TableView>& GlobalNamespace::LeaderboardTableView::__cordl_internal_get__tableView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableView;
}
constexpr ::UnityW<::HMUI::TableView> const& GlobalNamespace::LeaderboardTableView::__cordl_internal_get__tableView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableView;
}
constexpr void GlobalNamespace::LeaderboardTableView::__cordl_internal_set__tableView(::UnityW<::HMUI::TableView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tableView = value;
}
constexpr float_t& GlobalNamespace::LeaderboardTableView::__cordl_internal_get__rowHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowHeight;
}
constexpr float_t const& GlobalNamespace::LeaderboardTableView::__cordl_internal_get__rowHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowHeight;
}
constexpr void GlobalNamespace::LeaderboardTableView::__cordl_internal_set__rowHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rowHeight = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardTableView_ScoreData*>*& GlobalNamespace::LeaderboardTableView::__cordl_internal_get__scores() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scores;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardTableView_ScoreData*>* const& GlobalNamespace::LeaderboardTableView::__cordl_internal_get__scores() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scores;
}
constexpr void GlobalNamespace::LeaderboardTableView::__cordl_internal_set__scores(::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardTableView_ScoreData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scores = value;
}
constexpr int32_t& GlobalNamespace::LeaderboardTableView::__cordl_internal_get__specialScorePos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____specialScorePos;
}
constexpr int32_t const& GlobalNamespace::LeaderboardTableView::__cordl_internal_get__specialScorePos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____specialScorePos;
}
constexpr void GlobalNamespace::LeaderboardTableView::__cordl_internal_set__specialScorePos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____specialScorePos = value;
}
inline float_t GlobalNamespace::LeaderboardTableView::CellSize(int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableView*>(), { "CellSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, idx);
}
inline int32_t GlobalNamespace::LeaderboardTableView::NumberOfCells() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableView*>(), { "NumberOfCells", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::HMUI::TableCell> GlobalNamespace::LeaderboardTableView::CellForIdx(::HMUI::TableView* tableView, int32_t row) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableView*>(), { "CellForIdx", {}, { ::i2c::type_of<::HMUI::TableView*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::TableCell>>(this, ___internal_method, tableView, row);
}
inline void GlobalNamespace::LeaderboardTableView::SetScores(::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardTableView_ScoreData*>* scores, int32_t specialScorePos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableView*>(),
                          { "SetScores", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardTableView_ScoreData*>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scores, specialScorePos);
}
inline void GlobalNamespace::LeaderboardTableView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableView*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LeaderboardTableView* GlobalNamespace::LeaderboardTableView::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LeaderboardTableView*>());
}
/// @brief Convert operator to "::HMUI::TableView_IDataSource"
constexpr GlobalNamespace::LeaderboardTableView::operator ::HMUI::TableView_IDataSource*() noexcept {
  return static_cast<::HMUI::TableView_IDataSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::HMUI::TableView_IDataSource"
constexpr ::HMUI::TableView_IDataSource* GlobalNamespace::LeaderboardTableView::i___HMUI__TableView_IDataSource() noexcept {
  return static_cast<::HMUI::TableView_IDataSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LeaderboardTableView::LeaderboardTableView() {}
