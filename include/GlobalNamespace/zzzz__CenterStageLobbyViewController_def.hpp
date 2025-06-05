#pragma once
// IWYU pragma private; include "GlobalNamespace/CenterStageLobbyViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(CenterStageLobbyViewController)
namespace GlobalNamespace {
class BeatmapSelectionView;
}
namespace GlobalNamespace {
class ILevelGameplaySetupData;
}
namespace GlobalNamespace {
class ModifiersSelectionView;
}
// Forward declare root types
namespace GlobalNamespace {
class CenterStageLobbyViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CenterStageLobbyViewController);
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: CenterStageLobbyViewController
class CORDL_TYPE CenterStageLobbyViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _beatmapSelectionView, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapSelectionView, put = __cordl_internal_set__beatmapSelectionView)) ::UnityW<::GlobalNamespace::BeatmapSelectionView> _beatmapSelectionView;

  /// @brief Field _modifiersSelectionView, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__modifiersSelectionView, put = __cordl_internal_set__modifiersSelectionView)) ::UnityW<::GlobalNamespace::ModifiersSelectionView>
      _modifiersSelectionView;

  static inline ::GlobalNamespace::CenterStageLobbyViewController* New_ctor();

  /// @brief Method SetLevelGameplaySetupData, addr 0x3c1edc0, size 0x164, virtual false, abstract: false, final false
  inline void SetLevelGameplaySetupData(::GlobalNamespace::ILevelGameplaySetupData* levelGameplaySetupData);

  constexpr ::UnityW<::GlobalNamespace::BeatmapSelectionView> const& __cordl_internal_get__beatmapSelectionView() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapSelectionView>& __cordl_internal_get__beatmapSelectionView();

  constexpr ::UnityW<::GlobalNamespace::ModifiersSelectionView> const& __cordl_internal_get__modifiersSelectionView() const;

  constexpr ::UnityW<::GlobalNamespace::ModifiersSelectionView>& __cordl_internal_get__modifiersSelectionView();

  constexpr void __cordl_internal_set__beatmapSelectionView(::UnityW<::GlobalNamespace::BeatmapSelectionView> value);

  constexpr void __cordl_internal_set__modifiersSelectionView(::UnityW<::GlobalNamespace::ModifiersSelectionView> value);

  /// @brief Method .ctor, addr 0x3c1ef24, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CenterStageLobbyViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CenterStageLobbyViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CenterStageLobbyViewController(CenterStageLobbyViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CenterStageLobbyViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CenterStageLobbyViewController(CenterStageLobbyViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4926 };

  /// @brief Field _beatmapSelectionView, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapSelectionView> ____beatmapSelectionView;

  /// @brief Field _modifiersSelectionView, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ModifiersSelectionView> ____modifiersSelectionView;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CenterStageLobbyViewController, ____beatmapSelectionView) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CenterStageLobbyViewController, ____modifiersSelectionView) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CenterStageLobbyViewController, 0x88>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CenterStageLobbyViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CenterStageLobbyViewController*, "", "CenterStageLobbyViewController");
