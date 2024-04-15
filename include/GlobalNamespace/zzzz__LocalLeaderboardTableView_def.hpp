#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LeaderboardTableView_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalLeaderboardTableView)
namespace GlobalNamespace {
class __LocalLeaderboardsModel__ScoreData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalLeaderboardTableView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LocalLeaderboardTableView);
// Type: ::LocalLeaderboardTableView
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LocalLeaderboardTableView*
class CORDL_TYPE LocalLeaderboardTableView : public ::GlobalNamespace::LeaderboardTableView {
public:
  // Declarations
  static inline ::GlobalNamespace::LocalLeaderboardTableView* New_ctor();

  /// @brief Method SetScores, addr 0x2574ef8, size 0x28c, virtual false, abstract: false, final false
  inline void SetScores(::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>* scores, int32_t specialScorePos, int32_t maxNumberOfCells);

  /// @brief Method .ctor, addr 0x2575184, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalLeaderboardTableView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardTableView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalLeaderboardTableView(LocalLeaderboardTableView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardTableView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalLeaderboardTableView(LocalLeaderboardTableView const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalLeaderboardTableView, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LocalLeaderboardTableView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalLeaderboardTableView*, "", "LocalLeaderboardTableView");
