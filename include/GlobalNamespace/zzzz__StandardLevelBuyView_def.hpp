#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(StandardLevelBuyView)
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class LevelBar;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelBuyView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelBuyView);
// Type: ::StandardLevelBuyView
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5813))
// CS Name: ::StandardLevelBuyView*
class CORDL_TYPE StandardLevelBuyView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _levelBar, offset 0x18, size 0x8
  __declspec(property(get = __get__levelBar, put = __set__levelBar))::GlobalNamespace::LevelBar* _levelBar;

  /// @brief Field _buyButton, offset 0x20, size 0x8
  __declspec(property(get = __get__buyButton, put = __set__buyButton))::UnityEngine::UI::Button* _buyButton;

  __declspec(property(get = get_buyButton))::UnityEngine::UI::Button* buyButton;

  constexpr ::GlobalNamespace::LevelBar*& __get__levelBar();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelBar*> const& __get__levelBar() const;

  constexpr void __set__levelBar(::GlobalNamespace::LevelBar* value);

  constexpr ::UnityEngine::UI::Button*& __get__buyButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__buyButton() const;

  constexpr void __set__buyButton(::UnityEngine::UI::Button* value);

  /// @brief Method get_buyButton, addr 0x22e9aa8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::Button* get_buyButton();

  /// @brief Method SetContent, addr 0x22e9ab0, size 0x1c, virtual false, abstract: false, final false
  inline void SetContent(::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel);

  static inline ::GlobalNamespace::StandardLevelBuyView* New_ctor();

  /// @brief Method .ctor, addr 0x22e9acc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelBuyView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardLevelBuyView(StandardLevelBuyView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelBuyView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardLevelBuyView(StandardLevelBuyView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelBuyView();

public:
  /// @brief Field _levelBar, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::LevelBar* ____levelBar;

  /// @brief Field _buyButton, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____buyButton;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelBuyView, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelBuyView, ____levelBar) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelBuyView, ____buyButton) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardLevelBuyView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelBuyView*, "", "StandardLevelBuyView");
