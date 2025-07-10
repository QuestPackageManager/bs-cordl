#pragma once
// IWYU pragma private; include "GlobalNamespace/StandardLevelBuyInfoView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StandardLevelBuyInfoView)
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelBuyInfoView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelBuyInfoView);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: StandardLevelBuyInfoView
class CORDL_TYPE StandardLevelBuyInfoView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _buyLevelButton, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__buyLevelButton, put = __cordl_internal_set__buyLevelButton)) ::UnityW<::UnityEngine::UI::Button> _buyLevelButton;

  /// @brief Field _buyPackButton, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__buyPackButton, put = __cordl_internal_set__buyPackButton)) ::UnityW<::UnityEngine::UI::Button> _buyPackButton;

  /// @brief Field _openPackButton, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__openPackButton, put = __cordl_internal_set__openPackButton)) ::UnityW<::UnityEngine::UI::Button> _openPackButton;

  /// @brief Field _steamMessageGameObject, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__steamMessageGameObject, put = __cordl_internal_set__steamMessageGameObject)) ::UnityW<::UnityEngine::GameObject> _steamMessageGameObject;

  /// @brief Field _text, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text)) ::UnityW<::TMPro::TextMeshProUGUI> _text;

  __declspec(property(get = get_buyLevelButton)) ::UnityW<::UnityEngine::UI::Button> buyLevelButton;

  __declspec(property(get = get_buyPackButton)) ::UnityW<::UnityEngine::UI::Button> buyPackButton;

  __declspec(property(get = get_openPackButton)) ::UnityW<::UnityEngine::UI::Button> openPackButton;

  static inline ::GlobalNamespace::StandardLevelBuyInfoView* New_ctor();

  /// @brief Method RefreshView, addr 0x3b072b0, size 0x98, virtual false, abstract: false, final false
  inline void RefreshView(::StringW infoText, bool canBuyPack);

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__buyLevelButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__buyLevelButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__buyPackButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__buyPackButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__openPackButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__openPackButton();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__steamMessageGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__steamMessageGameObject();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__text() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__text();

  constexpr void __cordl_internal_set__buyLevelButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__buyPackButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__openPackButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__steamMessageGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x3b07348, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_buyLevelButton, addr 0x3b07298, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Button> get_buyLevelButton();

  /// @brief Method get_buyPackButton, addr 0x3b072a8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Button> get_buyPackButton();

  /// @brief Method get_openPackButton, addr 0x3b072a0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Button> get_openPackButton();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelBuyInfoView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelBuyInfoView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardLevelBuyInfoView(StandardLevelBuyInfoView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelBuyInfoView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardLevelBuyInfoView(StandardLevelBuyInfoView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5008 };

  /// @brief Field _text, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____text;

  /// @brief Field _buyLevelButton, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____buyLevelButton;

  /// @brief Field _openPackButton, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____openPackButton;

  /// @brief Field _buyPackButton, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____buyPackButton;

  /// @brief Field _steamMessageGameObject, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____steamMessageGameObject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandardLevelBuyInfoView, ____text) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelBuyInfoView, ____buyLevelButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelBuyInfoView, ____openPackButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelBuyInfoView, ____buyPackButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelBuyInfoView, ____steamMessageGameObject) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelBuyInfoView, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardLevelBuyInfoView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelBuyInfoView*, "", "StandardLevelBuyInfoView");
