#pragma once
// IWYU pragma private; include "GlobalNamespace/StepValuePicker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StepValuePicker)
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
class StepValuePicker;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StepValuePicker);
// Type: ::StepValuePicker
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::StepValuePicker*
class CORDL_TYPE StepValuePicker : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _decButton, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__decButton, put = __cordl_internal_set__decButton))::UnityW<::UnityEngine::UI::Button> _decButton;

  /// @brief Field _incButton, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__incButton, put = __cordl_internal_set__incButton))::UnityW<::UnityEngine::UI::Button> _incButton;

  /// @brief Field _valueText, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__valueText, put = __cordl_internal_set__valueText))::UnityW<::TMPro::TextMeshProUGUI> _valueText;

  __declspec(property(put = set_decButtonInteractable)) bool decButtonInteractable;

  /// @brief Field decButtonWasPressedEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_decButtonWasPressedEvent, put = __cordl_internal_set_decButtonWasPressedEvent))::System::Action* decButtonWasPressedEvent;

  __declspec(property(put = set_incButtonInteractable)) bool incButtonInteractable;

  /// @brief Field incButtonWasPressedEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_incButtonWasPressedEvent, put = __cordl_internal_set_incButtonWasPressedEvent))::System::Action* incButtonWasPressedEvent;

  __declspec(property(get = get_text, put = set_text))::StringW text;

  /// @brief Method DecButtonPressed, addr 0x2790bd8, size 0x1c, virtual false, abstract: false, final false
  inline void DecButtonPressed();

  /// @brief Method IncButtonPressed, addr 0x2790bbc, size 0x1c, virtual false, abstract: false, final false
  inline void IncButtonPressed();

  static inline ::GlobalNamespace::StepValuePicker* New_ctor();

  /// @brief Method OnDisable, addr 0x2790acc, size 0xf0, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x27909dc, size 0xf0, virtual true, abstract: false, final false
  inline void OnEnable();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__decButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__decButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__incButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__incButton();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__valueText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__valueText();

  constexpr ::System::Action*& __cordl_internal_get_decButtonWasPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_decButtonWasPressedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_incButtonWasPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_incButtonWasPressedEvent() const;

  constexpr void __cordl_internal_set__decButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__incButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__valueText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set_decButtonWasPressedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_incButtonWasPressedEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x2790bf4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_decButtonWasPressedEvent, addr 0x278fdf4, size 0x9c, virtual false, abstract: false, final false
  inline void add_decButtonWasPressedEvent(::System::Action* value);

  /// @brief Method add_incButtonWasPressedEvent, addr 0x278fe90, size 0x9c, virtual false, abstract: false, final false
  inline void add_incButtonWasPressedEvent(::System::Action* value);

  /// @brief Method get_text, addr 0x27909b8, size 0x24, virtual false, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Method remove_decButtonWasPressedEvent, addr 0x2790030, size 0x9c, virtual false, abstract: false, final false
  inline void remove_decButtonWasPressedEvent(::System::Action* value);

  /// @brief Method remove_incButtonWasPressedEvent, addr 0x27900cc, size 0x9c, virtual false, abstract: false, final false
  inline void remove_incButtonWasPressedEvent(::System::Action* value);

  /// @brief Method set_decButtonInteractable, addr 0x278fc84, size 0x20, virtual false, abstract: false, final false
  inline void set_decButtonInteractable(bool value);

  /// @brief Method set_incButtonInteractable, addr 0x278fccc, size 0x20, virtual false, abstract: false, final false
  inline void set_incButtonInteractable(bool value);

  /// @brief Method set_text, addr 0x278fd18, size 0x24, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StepValuePicker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StepValuePicker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StepValuePicker(StepValuePicker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StepValuePicker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StepValuePicker(StepValuePicker const&) = delete;

  /// @brief Field _decButton, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____decButton;

  /// @brief Field _incButton, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____incButton;

  /// @brief Field _valueText, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____valueText;

  /// @brief Field decButtonWasPressedEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___decButtonWasPressedEvent;

  /// @brief Field incButtonWasPressedEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action* ___incButtonWasPressedEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StepValuePicker, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::StepValuePicker, ____decButton) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StepValuePicker, ____incButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StepValuePicker, ____valueText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StepValuePicker, ___decButtonWasPressedEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StepValuePicker, ___incButtonWasPressedEvent) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StepValuePicker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StepValuePicker*, "", "StepValuePicker");
