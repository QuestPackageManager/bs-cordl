#pragma once
// IWYU pragma private; include "GlobalNamespace/GuestNameButtonsListItem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GuestNameButtonsListItem)
namespace System {
class Action;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class GuestNameButtonsListItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GuestNameButtonsListItem);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GuestNameButtonsListItem
class CORDL_TYPE GuestNameButtonsListItem : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _button, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__button, put = __cordl_internal_set__button)) ::UnityW<::UnityEngine::UI::Button> _button;

  /// @brief Field _buttonPressed, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonPressed, put = __cordl_internal_set__buttonPressed)) ::System::Action* _buttonPressed;

  /// @brief Field _nameText, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__nameText, put = __cordl_internal_set__nameText)) ::UnityW<::TMPro::TextMeshProUGUI> _nameText;

  __declspec(property(put = set_buttonPressed)) ::System::Action* buttonPressed;

  __declspec(property(put = set_nameText)) ::StringW nameText;

  /// @brief Method Awake, addr 0x3c09dc4, size 0x90, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::GuestNameButtonsListItem* New_ctor();

  /// @brief Method <Awake>b__7_0, addr 0x3c09e5c, size 0x1c, virtual false, abstract: false, final false
  inline void _Awake_b__7_0();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__button() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__button();

  constexpr ::System::Action* const& __cordl_internal_get__buttonPressed() const;

  constexpr ::System::Action*& __cordl_internal_get__buttonPressed();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__nameText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__nameText();

  constexpr void __cordl_internal_set__button(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__buttonPressed(::System::Action* value);

  constexpr void __cordl_internal_set__nameText(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x3c09e54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_buttonPressed, addr 0x3c09dbc, size 0x8, virtual false, abstract: false, final false
  inline void set_buttonPressed(::System::Action* value);

  /// @brief Method set_nameText, addr 0x3c09d98, size 0x24, virtual false, abstract: false, final false
  inline void set_nameText(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GuestNameButtonsListItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GuestNameButtonsListItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GuestNameButtonsListItem(GuestNameButtonsListItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GuestNameButtonsListItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GuestNameButtonsListItem(GuestNameButtonsListItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4809 };

  /// @brief Field _nameText, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____nameText;

  /// @brief Field _button, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____button;

  /// @brief Field _buttonPressed, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ____buttonPressed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GuestNameButtonsListItem, ____nameText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GuestNameButtonsListItem, ____button) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GuestNameButtonsListItem, ____buttonPressed) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GuestNameButtonsListItem, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GuestNameButtonsListItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GuestNameButtonsListItem*, "", "GuestNameButtonsListItem");
