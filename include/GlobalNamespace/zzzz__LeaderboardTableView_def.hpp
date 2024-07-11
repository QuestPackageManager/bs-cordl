#pragma once
// IWYU pragma private; include "GlobalNamespace/LeaderboardTableView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LeaderboardTableView)
namespace GlobalNamespace {
class LeaderboardTableCell;
}
namespace GlobalNamespace {
class __LeaderboardTableView__ScoreData;
}
namespace HMUI {
class TableCell;
}
namespace HMUI {
class TableView;
}
namespace HMUI {
class __TableView__IDataSource;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LeaderboardTableView;
}
namespace GlobalNamespace {
class __LeaderboardTableView__ScoreData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LeaderboardTableView);
MARK_REF_PTR_T(::GlobalNamespace::__LeaderboardTableView__ScoreData);
// Type: ::ScoreData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 37, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LeaderboardTableView::ScoreData*
class CORDL_TYPE __LeaderboardTableView__ScoreData : public ::System::Object {
public:
  // Declarations
  /// @brief Field <fullCombo>k__BackingField, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__fullCombo_k__BackingField, put = __cordl_internal_set__fullCombo_k__BackingField)) bool _fullCombo_k__BackingField;

  /// @brief Field <playerName>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__playerName_k__BackingField, put = __cordl_internal_set__playerName_k__BackingField))::StringW _playerName_k__BackingField;

  /// @brief Field <rank>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__rank_k__BackingField, put = __cordl_internal_set__rank_k__BackingField)) int32_t _rank_k__BackingField;

  /// @brief Field <score>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__score_k__BackingField, put = __cordl_internal_set__score_k__BackingField)) int32_t _score_k__BackingField;

  __declspec(property(get = get_fullCombo, put = set_fullCombo)) bool fullCombo;

  __declspec(property(get = get_playerName, put = set_playerName))::StringW playerName;

  __declspec(property(get = get_rank, put = set_rank)) int32_t rank;

  __declspec(property(get = get_score, put = set_score)) int32_t score;

  static inline ::GlobalNamespace::__LeaderboardTableView__ScoreData* New_ctor(int32_t score, ::StringW playerName, int32_t rank, bool fullCombo);

  constexpr bool const& __cordl_internal_get__fullCombo_k__BackingField() const;

  constexpr bool& __cordl_internal_get__fullCombo_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__playerName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__playerName_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__rank_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__rank_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__score_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__score_k__BackingField();

  constexpr void __cordl_internal_set__fullCombo_k__BackingField(bool value);

  constexpr void __cordl_internal_set__playerName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__rank_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__score_k__BackingField(int32_t value);

  /// @brief Method .ctor, addr 0x2697e38, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(int32_t score, ::StringW playerName, int32_t rank, bool fullCombo);

  /// @brief Method get_fullCombo, addr 0x2697e24, size 0x8, virtual false, abstract: false, final false
  inline bool get_fullCombo();

  /// @brief Method get_playerName, addr 0x2697e04, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_playerName();

  /// @brief Method get_rank, addr 0x2697e14, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_rank();

  /// @brief Method get_score, addr 0x2697df4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_score();

  /// @brief Method set_fullCombo, addr 0x2697e2c, size 0xc, virtual false, abstract: false, final false
  inline void set_fullCombo(bool value);

  /// @brief Method set_playerName, addr 0x2697e0c, size 0x8, virtual false, abstract: false, final false
  inline void set_playerName(::StringW value);

  /// @brief Method set_rank, addr 0x2697e1c, size 0x8, virtual false, abstract: false, final false
  inline void set_rank(int32_t value);

  /// @brief Method set_score, addr 0x2697dfc, size 0x8, virtual false, abstract: false, final false
  inline void set_score(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LeaderboardTableView__ScoreData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LeaderboardTableView__ScoreData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LeaderboardTableView__ScoreData(__LeaderboardTableView__ScoreData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LeaderboardTableView__ScoreData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LeaderboardTableView__ScoreData(__LeaderboardTableView__ScoreData const&) = delete;

  /// @brief Field <score>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____score_k__BackingField;

  /// @brief Field <playerName>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____playerName_k__BackingField;

  /// @brief Field <rank>k__BackingField, offset: 0x20, size: 0x4, def value: None
  int32_t ____rank_k__BackingField;

  /// @brief Field <fullCombo>k__BackingField, offset: 0x24, size: 0x1, def value: None
  bool ____fullCombo_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LeaderboardTableView__ScoreData, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardTableView__ScoreData, ____score_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardTableView__ScoreData, ____playerName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardTableView__ScoreData, ____rank_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardTableView__ScoreData, ____fullCombo_k__BackingField) == 0x24, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LeaderboardTableView
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LeaderboardTableView*
class CORDL_TYPE LeaderboardTableView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using ScoreData = ::GlobalNamespace::__LeaderboardTableView__ScoreData;

  /// @brief Field _cellPrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__cellPrefab, put = __cordl_internal_set__cellPrefab))::UnityW<::GlobalNamespace::LeaderboardTableCell> _cellPrefab;

  /// @brief Field _rowHeight, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__rowHeight, put = __cordl_internal_set__rowHeight)) float_t _rowHeight;

  /// @brief Field _scores, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__scores, put = __cordl_internal_set__scores))::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardTableView__ScoreData*>* _scores;

  /// @brief Field _specialScorePos, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__specialScorePos, put = __cordl_internal_set__specialScorePos)) int32_t _specialScorePos;

  /// @brief Field _tableView, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__tableView, put = __cordl_internal_set__tableView))::UnityW<::HMUI::TableView> _tableView;

  /// @brief Convert operator to "::HMUI::__TableView__IDataSource"
  constexpr operator ::HMUI::__TableView__IDataSource*() noexcept;

  /// @brief Method CellForIdx, addr 0x2697bc4, size 0x1f0, virtual true, abstract: false, final true
  inline ::UnityW<::HMUI::TableCell> CellForIdx(::HMUI::TableView* tableView, int32_t row);

  /// @brief Method CellSize, addr 0x2697b70, size 0x8, virtual true, abstract: false, final true
  inline float_t CellSize();

  static inline ::GlobalNamespace::LeaderboardTableView* New_ctor();

  /// @brief Method NumberOfCells, addr 0x2697b78, size 0x4c, virtual true, abstract: false, final true
  inline int32_t NumberOfCells();

  /// @brief Method SetScores, addr 0x2697db4, size 0x30, virtual false, abstract: false, final false
  inline void SetScores(::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardTableView__ScoreData*>* scores, int32_t specialScorePos);

  constexpr ::UnityW<::GlobalNamespace::LeaderboardTableCell> const& __cordl_internal_get__cellPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::LeaderboardTableCell>& __cordl_internal_get__cellPrefab();

  constexpr float_t const& __cordl_internal_get__rowHeight() const;

  constexpr float_t& __cordl_internal_get__rowHeight();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardTableView__ScoreData*>*& __cordl_internal_get__scores();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardTableView__ScoreData*>*> const& __cordl_internal_get__scores() const;

  constexpr int32_t const& __cordl_internal_get__specialScorePos() const;

  constexpr int32_t& __cordl_internal_get__specialScorePos();

  constexpr ::UnityW<::HMUI::TableView> const& __cordl_internal_get__tableView() const;

  constexpr ::UnityW<::HMUI::TableView>& __cordl_internal_get__tableView();

  constexpr void __cordl_internal_set__cellPrefab(::UnityW<::GlobalNamespace::LeaderboardTableCell> value);

  constexpr void __cordl_internal_set__rowHeight(float_t value);

  constexpr void __cordl_internal_set__scores(::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardTableView__ScoreData*>* value);

  constexpr void __cordl_internal_set__specialScorePos(int32_t value);

  constexpr void __cordl_internal_set__tableView(::UnityW<::HMUI::TableView> value);

  /// @brief Method .ctor, addr 0x2697de4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::HMUI::__TableView__IDataSource"
  constexpr ::HMUI::__TableView__IDataSource* i___HMUI____TableView__IDataSource() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardTableView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardTableView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaderboardTableView(LeaderboardTableView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardTableView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaderboardTableView(LeaderboardTableView const&) = delete;

  /// @brief Field _tableView, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::HMUI::TableView> ____tableView;

  /// @brief Field _cellPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LeaderboardTableCell> ____cellPrefab;

  /// @brief Field _rowHeight, offset: 0x28, size: 0x4, def value: None
  float_t ____rowHeight;

  /// @brief Field _scores, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardTableView__ScoreData*>* ____scores;

  /// @brief Field _specialScorePos, offset: 0x38, size: 0x4, def value: None
  int32_t ____specialScorePos;

  /// @brief Field kCellIdentifier offset 0xffffffff size 0x8
  static constexpr ::ConstString kCellIdentifier{ u"Cell" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LeaderboardTableView, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardTableView, ____tableView) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardTableView, ____cellPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardTableView, ____rowHeight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardTableView, ____scores) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardTableView, ____specialScorePos) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LeaderboardTableView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardTableView*, "", "LeaderboardTableView");
NEED_NO_BOX(::GlobalNamespace::__LeaderboardTableView__ScoreData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LeaderboardTableView__ScoreData*, "", "LeaderboardTableView/ScoreData");
