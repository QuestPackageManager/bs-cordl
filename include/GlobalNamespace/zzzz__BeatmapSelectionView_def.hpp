#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BeatmapSelectionView)
namespace GlobalNamespace {
class PreviewDifficultyBeatmap;
}
namespace GlobalNamespace {
class LevelBar;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapSelectionView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapSelectionView);
// Type: ::BeatmapSelectionView
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5772))
// CS Name: ::BeatmapSelectionView*
class CORDL_TYPE BeatmapSelectionView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _levelBar, offset 0x18, size 0x8
  __declspec(property(get = __get__levelBar, put = __set__levelBar))::GlobalNamespace::LevelBar* _levelBar;

  /// @brief Field _noLevelText, offset 0x20, size 0x8
  __declspec(property(get = __get__noLevelText, put = __set__noLevelText))::TMPro::TextMeshProUGUI* _noLevelText;

  constexpr ::GlobalNamespace::LevelBar*& __get__levelBar();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelBar*> const& __get__levelBar() const;

  constexpr void __set__levelBar(::GlobalNamespace::LevelBar* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__noLevelText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__noLevelText() const;

  constexpr void __set__noLevelText(::TMPro::TextMeshProUGUI* value);

  /// @brief Method SetBeatmap addr 0x22df98c size 0xa0 virtual true final false
  inline void SetBeatmap(::GlobalNamespace::PreviewDifficultyBeatmap* beatmapLevel);

  static inline ::GlobalNamespace::BeatmapSelectionView* New_ctor();

  /// @brief Method .ctor addr 0x22dfa58 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapSelectionView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapSelectionView(BeatmapSelectionView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapSelectionView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapSelectionView(BeatmapSelectionView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapSelectionView();

public:
  /// @brief Field _levelBar, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::LevelBar* ____levelBar;

  /// @brief Field _noLevelText, offset: 0x20, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____noLevelText;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapSelectionView, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapSelectionView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapSelectionView*, "", "BeatmapSelectionView");
