#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(CenterStageLobbyViewController)
namespace GlobalNamespace {
class ModifiersSelectionView;
}
namespace GlobalNamespace {
class ILevelGameplaySetupData;
}
namespace GlobalNamespace {
class BeatmapSelectionView;
}
// Forward declare root types
namespace GlobalNamespace {
class CenterStageLobbyViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CenterStageLobbyViewController);
// Type: ::CenterStageLobbyViewController
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13722))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5808))
// CS Name: ::CenterStageLobbyViewController*
class CORDL_TYPE CenterStageLobbyViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _beatmapSelectionView, offset 0x70, size 0x8
  __declspec(property(get = __get__beatmapSelectionView, put = __set__beatmapSelectionView))::GlobalNamespace::BeatmapSelectionView* _beatmapSelectionView;

  /// @brief Field _modifiersSelectionView, offset 0x78, size 0x8
  __declspec(property(get = __get__modifiersSelectionView, put = __set__modifiersSelectionView))::GlobalNamespace::ModifiersSelectionView* _modifiersSelectionView;

  constexpr ::GlobalNamespace::BeatmapSelectionView*& __get__beatmapSelectionView();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapSelectionView*> const& __get__beatmapSelectionView() const;

  constexpr void __set__beatmapSelectionView(::GlobalNamespace::BeatmapSelectionView* value);

  constexpr ::GlobalNamespace::ModifiersSelectionView*& __get__modifiersSelectionView();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ModifiersSelectionView*> const& __get__modifiersSelectionView() const;

  constexpr void __set__modifiersSelectionView(::GlobalNamespace::ModifiersSelectionView* value);

  /// @brief Method SetLevelGameplaySetupData addr 0x2189e08 size 0x13c virtual false final false
  inline void SetLevelGameplaySetupData(::GlobalNamespace::ILevelGameplaySetupData* levelGameplaySetupData);

  static inline ::GlobalNamespace::CenterStageLobbyViewController* New_ctor();

  /// @brief Method .ctor addr 0x2189f44 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CenterStageLobbyViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CenterStageLobbyViewController(CenterStageLobbyViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CenterStageLobbyViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CenterStageLobbyViewController(CenterStageLobbyViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CenterStageLobbyViewController();

public:
  /// @brief Field _beatmapSelectionView, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapSelectionView* ____beatmapSelectionView;

  /// @brief Field _modifiersSelectionView, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::ModifiersSelectionView* ____modifiersSelectionView;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CenterStageLobbyViewController, 0x80>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CenterStageLobbyViewController, ____beatmapSelectionView) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CenterStageLobbyViewController, ____modifiersSelectionView) == 0x78, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CenterStageLobbyViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CenterStageLobbyViewController*, "", "CenterStageLobbyViewController");
