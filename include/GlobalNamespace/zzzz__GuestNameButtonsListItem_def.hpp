#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GuestNameButtonsListItem)
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Button;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class GuestNameButtonsListItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GuestNameButtonsListItem);
// Type: ::GuestNameButtonsListItem
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5624))
// CS Name: ::GuestNameButtonsListItem*
class CORDL_TYPE GuestNameButtonsListItem : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _nameText, offset 0x18, size 0x8
  __declspec(property(get = __get__nameText, put = __set__nameText))::TMPro::TextMeshProUGUI* _nameText;

  /// @brief Field _button, offset 0x20, size 0x8
  __declspec(property(get = __get__button, put = __set__button))::UnityEngine::UI::Button* _button;

  /// @brief Field _buttonPressed, offset 0x28, size 0x8
  __declspec(property(get = __get__buttonPressed, put = __set__buttonPressed))::System::Action* _buttonPressed;

  __declspec(property(put = set_nameText))::StringW nameText;

  __declspec(property(put = set_buttonPressed))::System::Action* buttonPressed;

  constexpr ::TMPro::TextMeshProUGUI*& __get__nameText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__nameText() const;

  constexpr void __set__nameText(::TMPro::TextMeshProUGUI* value);

  constexpr ::UnityEngine::UI::Button*& __get__button();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__button() const;

  constexpr void __set__button(::UnityEngine::UI::Button* value);

  constexpr ::System::Action*& __get__buttonPressed();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get__buttonPressed() const;

  constexpr void __set__buttonPressed(::System::Action* value);

  /// @brief Method set_nameText addr 0x21595bc size 0x24 virtual false final false
  inline void set_nameText(::StringW value);

  /// @brief Method set_buttonPressed addr 0x21595e0 size 0x8 virtual false final false
  inline void set_buttonPressed(::System::Action* value);

  /// @brief Method Awake addr 0x21595e8 size 0x94 virtual false final false
  inline void Awake();

  static inline ::GlobalNamespace::GuestNameButtonsListItem* New_ctor();

  /// @brief Method .ctor addr 0x215967c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <Awake>b__7_0 addr 0x2159684 size 0x1c virtual false final false
  inline void _Awake_b__7_0();

  // Ctor Parameters [CppParam { name: "", ty: "GuestNameButtonsListItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GuestNameButtonsListItem(GuestNameButtonsListItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GuestNameButtonsListItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GuestNameButtonsListItem(GuestNameButtonsListItem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GuestNameButtonsListItem();

public:
  /// @brief Field _nameText, offset: 0x18, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____nameText;

  /// @brief Field _button, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____button;

  /// @brief Field _buttonPressed, offset: 0x28, size: 0x8, def value: None
  ::System::Action* ____buttonPressed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GuestNameButtonsListItem, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GuestNameButtonsListItem, ____nameText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GuestNameButtonsListItem, ____button) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GuestNameButtonsListItem, ____buttonPressed) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GuestNameButtonsListItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GuestNameButtonsListItem*, "", "GuestNameButtonsListItem");
