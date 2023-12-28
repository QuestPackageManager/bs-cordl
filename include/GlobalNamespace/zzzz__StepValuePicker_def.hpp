#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StepValuePicker)
namespace UnityEngine::UI {
class Button;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace System {
class Action;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16154))
// CS Name: ::StepValuePicker*
class CORDL_TYPE StepValuePicker : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _decButton, offset 0x18, size 0x8
  __declspec(property(get = __get__decButton, put = __set__decButton))::UnityEngine::UI::Button* _decButton;

  /// @brief Field _incButton, offset 0x20, size 0x8
  __declspec(property(get = __get__incButton, put = __set__incButton))::UnityEngine::UI::Button* _incButton;

  /// @brief Field _valueText, offset 0x28, size 0x8
  __declspec(property(get = __get__valueText, put = __set__valueText))::TMPro::TextMeshProUGUI* _valueText;

  /// @brief Field decButtonWasPressedEvent, offset 0x30, size 0x8
  __declspec(property(get = __get_decButtonWasPressedEvent, put = __set_decButtonWasPressedEvent))::System::Action* decButtonWasPressedEvent;

  /// @brief Field incButtonWasPressedEvent, offset 0x38, size 0x8
  __declspec(property(get = __get_incButtonWasPressedEvent, put = __set_incButtonWasPressedEvent))::System::Action* incButtonWasPressedEvent;

  __declspec(property(get = get_text, put = set_text))::StringW text;

  __declspec(property(put = set_decButtonInteractable)) bool decButtonInteractable;

  __declspec(property(put = set_incButtonInteractable)) bool incButtonInteractable;

  constexpr ::UnityEngine::UI::Button*& __get__decButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__decButton() const;

  constexpr void __set__decButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__incButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__incButton() const;

  constexpr void __set__incButton(::UnityEngine::UI::Button* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__valueText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__valueText() const;

  constexpr void __set__valueText(::TMPro::TextMeshProUGUI* value);

  constexpr ::System::Action*& __get_decButtonWasPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_decButtonWasPressedEvent() const;

  constexpr void __set_decButtonWasPressedEvent(::System::Action* value);

  constexpr ::System::Action*& __get_incButtonWasPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_incButtonWasPressedEvent() const;

  constexpr void __set_incButtonWasPressedEvent(::System::Action* value);

  /// @brief Method add_decButtonWasPressedEvent addr 0x23e4b90 size 0x9c virtual false final false
  inline void add_decButtonWasPressedEvent(::System::Action* value);

  /// @brief Method remove_decButtonWasPressedEvent addr 0x23e4dcc size 0x9c virtual false final false
  inline void remove_decButtonWasPressedEvent(::System::Action* value);

  /// @brief Method add_incButtonWasPressedEvent addr 0x23e4c2c size 0x9c virtual false final false
  inline void add_incButtonWasPressedEvent(::System::Action* value);

  /// @brief Method remove_incButtonWasPressedEvent addr 0x23e4e68 size 0x9c virtual false final false
  inline void remove_incButtonWasPressedEvent(::System::Action* value);

  /// @brief Method get_text addr 0x23e5740 size 0x24 virtual false final false
  inline ::StringW get_text();

  /// @brief Method set_text addr 0x23e4ab4 size 0x24 virtual false final false
  inline void set_text(::StringW value);

  /// @brief Method set_decButtonInteractable addr 0x23e4a20 size 0x20 virtual false final false
  inline void set_decButtonInteractable(bool value);

  /// @brief Method set_incButtonInteractable addr 0x23e4a68 size 0x20 virtual false final false
  inline void set_incButtonInteractable(bool value);

  /// @brief Method OnEnable addr 0x23e5764 size 0xf0 virtual true final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x23e5854 size 0xf0 virtual false final false
  inline void OnDisable();

  /// @brief Method IncButtonPressed addr 0x23e5944 size 0x1c virtual false final false
  inline void IncButtonPressed();

  /// @brief Method DecButtonPressed addr 0x23e5960 size 0x1c virtual false final false
  inline void DecButtonPressed();

  static inline ::GlobalNamespace::StepValuePicker* New_ctor();

  /// @brief Method .ctor addr 0x23e597c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "StepValuePicker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StepValuePicker(StepValuePicker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StepValuePicker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StepValuePicker(StepValuePicker const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StepValuePicker();

public:
  /// @brief Field _decButton, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____decButton;

  /// @brief Field _incButton, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____incButton;

  /// @brief Field _valueText, offset: 0x28, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____valueText;

  /// @brief Field decButtonWasPressedEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___decButtonWasPressedEvent;

  /// @brief Field incButtonWasPressedEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action* ___incButtonWasPressedEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StepValuePicker, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StepValuePicker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StepValuePicker*, "", "StepValuePicker");
