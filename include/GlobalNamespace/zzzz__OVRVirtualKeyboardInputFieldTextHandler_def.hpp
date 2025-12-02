#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRVirtualKeyboardInputFieldTextHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRVirtualKeyboard_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OVRVirtualKeyboardInputFieldTextHandler)
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::UI {
class InputField;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRVirtualKeyboardInputFieldTextHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRVirtualKeyboardInputFieldTextHandler);
// Dependencies OVRVirtualKeyboard::AbstractTextHandler
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRVirtualKeyboardInputFieldTextHandler
class CORDL_TYPE OVRVirtualKeyboardInputFieldTextHandler : public ::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler {
public:
  // Declarations
  __declspec(property(get = get_InputField, put = set_InputField)) ::UnityW<::UnityEngine::UI::InputField> InputField;

  __declspec(property(get = get_IsFocused)) bool IsFocused;

  __declspec(property(get = get_OnTextChanged, put = set_OnTextChanged)) ::System::Action_1<::StringW>* OnTextChanged;

  __declspec(property(get = get_SubmitOnEnter)) bool SubmitOnEnter;

  __declspec(property(get = get_Text)) ::StringW Text;

  /// @brief Field <OnTextChanged>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__OnTextChanged_k__BackingField,
                      put = __cordl_internal_set__OnTextChanged_k__BackingField)) ::System::Action_1<::StringW>* _OnTextChanged_k__BackingField;

  /// @brief Field _isSelected, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__isSelected, put = __cordl_internal_set__isSelected)) bool _isSelected;

  /// @brief Field inputField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_inputField, put = __cordl_internal_set_inputField)) ::UnityW<::UnityEngine::UI::InputField> inputField;

  /// @brief Method AppendText, addr 0x5cd8650, size 0xac, virtual true, abstract: false, final false
  inline void AppendText(::StringW s);

  /// @brief Method ApplyBackspace, addr 0x5cd86fc, size 0xe8, virtual true, abstract: false, final false
  inline void ApplyBackspace();

  /// @brief Method MoveTextEnd, addr 0x5cd87e4, size 0x88, virtual true, abstract: false, final false
  inline void MoveTextEnd();

  static inline ::GlobalNamespace::OVRVirtualKeyboardInputFieldTextHandler* New_ctor();

  /// @brief Method ProxyOnValueChanged, addr 0x5cd8964, size 0x44, virtual false, abstract: false, final false
  inline void ProxyOnValueChanged(::StringW arg0);

  /// @brief Method Start, addr 0x5cd886c, size 0xf8, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Submit, addr 0x5cd85a8, size 0xa8, virtual true, abstract: false, final false
  inline void Submit();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get__OnTextChanged_k__BackingField() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get__OnTextChanged_k__BackingField();

  constexpr bool const& __cordl_internal_get__isSelected() const;

  constexpr bool& __cordl_internal_get__isSelected();

  constexpr ::UnityW<::UnityEngine::UI::InputField> const& __cordl_internal_get_inputField() const;

  constexpr ::UnityW<::UnityEngine::UI::InputField>& __cordl_internal_get_inputField();

  constexpr void __cordl_internal_set__OnTextChanged_k__BackingField(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set__isSelected(bool value);

  constexpr void __cordl_internal_set_inputField(::UnityW<::UnityEngine::UI::InputField> value);

  /// @brief Method .ctor, addr 0x5cd89a8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_InputField, addr 0x5cd83f4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::InputField> get_InputField();

  /// @brief Method get_IsFocused, addr 0x5cd8520, size 0x88, virtual true, abstract: false, final false
  inline bool get_IsFocused();

  /// @brief Method get_OnTextChanged, addr 0x5cd83fc, size 0x8, virtual true, abstract: false, final false
  inline ::System::Action_1<::StringW>* get_OnTextChanged();

  /// @brief Method get_SubmitOnEnter, addr 0x5cd8498, size 0x88, virtual true, abstract: false, final false
  inline bool get_SubmitOnEnter();

  /// @brief Method get_Text, addr 0x5cd840c, size 0x8c, virtual true, abstract: false, final false
  inline ::StringW get_Text();

  /// @brief Method set_InputField, addr 0x5cd1448, size 0x1f4, virtual false, abstract: false, final false
  inline void set_InputField(::UnityEngine::UI::InputField* value);

  /// @brief Method set_OnTextChanged, addr 0x5cd8404, size 0x8, virtual true, abstract: false, final false
  inline void set_OnTextChanged(::System::Action_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRVirtualKeyboardInputFieldTextHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboardInputFieldTextHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRVirtualKeyboardInputFieldTextHandler(OVRVirtualKeyboardInputFieldTextHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboardInputFieldTextHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRVirtualKeyboardInputFieldTextHandler(OVRVirtualKeyboardInputFieldTextHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7794 };

  /// @brief Field inputField, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::InputField> ___inputField;

  /// @brief Field _isSelected, offset: 0x28, size: 0x1, def value: None
  bool ____isSelected;

  /// @brief Field <OnTextChanged>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ____OnTextChanged_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardInputFieldTextHandler, ___inputField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardInputFieldTextHandler, ____isSelected) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardInputFieldTextHandler, ____OnTextChanged_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRVirtualKeyboardInputFieldTextHandler, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboardInputFieldTextHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboardInputFieldTextHandler*, "", "OVRVirtualKeyboardInputFieldTextHandler");
