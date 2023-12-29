#pragma once
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
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelBuyInfoView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelBuyInfoView);
// Type: ::StandardLevelBuyInfoView
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5905))
// CS Name: ::StandardLevelBuyInfoView*
class CORDL_TYPE StandardLevelBuyInfoView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _text, offset 0x18, size 0x8
  __declspec(property(get = __get__text, put = __set__text))::TMPro::TextMeshProUGUI* _text;

  /// @brief Field _buyLevelButton, offset 0x20, size 0x8
  __declspec(property(get = __get__buyLevelButton, put = __set__buyLevelButton))::UnityEngine::UI::Button* _buyLevelButton;

  /// @brief Field _openPackButton, offset 0x28, size 0x8
  __declspec(property(get = __get__openPackButton, put = __set__openPackButton))::UnityEngine::UI::Button* _openPackButton;

  /// @brief Field _buyPackButton, offset 0x30, size 0x8
  __declspec(property(get = __get__buyPackButton, put = __set__buyPackButton))::UnityEngine::UI::Button* _buyPackButton;

  __declspec(property(get = get_buyLevelButton))::UnityEngine::UI::Button* buyLevelButton;

  __declspec(property(get = get_openPackButton))::UnityEngine::UI::Button* openPackButton;

  __declspec(property(get = get_buyPackButton))::UnityEngine::UI::Button* buyPackButton;

  constexpr ::TMPro::TextMeshProUGUI*& __get__text();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__text() const;

  constexpr void __set__text(::TMPro::TextMeshProUGUI* value);

  constexpr ::UnityEngine::UI::Button*& __get__buyLevelButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__buyLevelButton() const;

  constexpr void __set__buyLevelButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__openPackButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__openPackButton() const;

  constexpr void __set__openPackButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__buyPackButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__buyPackButton() const;

  constexpr void __set__buyPackButton(::UnityEngine::UI::Button* value);

  /// @brief Method get_buyLevelButton addr 0x21a4814 size 0x8 virtual false final false
  inline ::UnityEngine::UI::Button* get_buyLevelButton();

  /// @brief Method get_openPackButton addr 0x21a481c size 0x8 virtual false final false
  inline ::UnityEngine::UI::Button* get_openPackButton();

  /// @brief Method get_buyPackButton addr 0x21a4824 size 0x8 virtual false final false
  inline ::UnityEngine::UI::Button* get_buyPackButton();

  /// @brief Method RefreshView addr 0x21a482c size 0x78 virtual false final false
  inline void RefreshView(::StringW infoText, bool canBuyPack);

  static inline ::GlobalNamespace::StandardLevelBuyInfoView* New_ctor();

  /// @brief Method .ctor addr 0x21a48a4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelBuyInfoView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardLevelBuyInfoView(StandardLevelBuyInfoView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelBuyInfoView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardLevelBuyInfoView(StandardLevelBuyInfoView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelBuyInfoView();

public:
  /// @brief Field _text, offset: 0x18, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____text;

  /// @brief Field _buyLevelButton, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____buyLevelButton;

  /// @brief Field _openPackButton, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____openPackButton;

  /// @brief Field _buyPackButton, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____buyPackButton;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelBuyInfoView, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelBuyInfoView, ____text) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelBuyInfoView, ____buyLevelButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelBuyInfoView, ____openPackButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelBuyInfoView, ____buyPackButton) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardLevelBuyInfoView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelBuyInfoView*, "", "StandardLevelBuyInfoView");
