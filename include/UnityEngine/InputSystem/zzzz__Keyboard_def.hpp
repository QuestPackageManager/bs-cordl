#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IMECompositionString_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Keyboard)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::InputSystem::Controls {
class KeyControl;
}
namespace UnityEngine::InputSystem::LowLevel {
class ITextInputReceiver;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::InputSystem {
struct Key;
}
namespace UnityEngine::InputSystem::Controls {
class AnyKeyControl;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct IMECompositionString;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class Keyboard;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Keyboard);
// Type: UnityEngine.InputSystem::Keyboard
// SizeInfo { instance_size: 448, native_size: -1, calculated_instance_size: 448, calculated_native_size: 448, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2323), inst: 324 }), TypeDefinitionIndex(TypeDefinitionIndex(6239)),
// TypeDefinitionIndex(TypeDefinitionIndex(6529)), TypeDefinitionIndex(TypeDefinitionIndex(2323)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6669), inst: 3862 }),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6669), inst: 3863 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2323), inst: 292 }),
// TypeDefinitionIndex(TypeDefinitionIndex(6669))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6243)) CS Name: ::UnityEngine.InputSystem::Keyboard*
class CORDL_TYPE Keyboard : public ::UnityEngine::InputSystem::InputDevice {
public:
  // Declarations
  /// @brief Field <anyKey>k__BackingField, offset 0x158, size 0x8
  __declspec(property(get = __get__anyKey_k__BackingField, put = __set__anyKey_k__BackingField))::UnityEngine::InputSystem::Controls::AnyKeyControl* _anyKey_k__BackingField;

  /// @brief Field <shiftKey>k__BackingField, offset 0x160, size 0x8
  __declspec(property(get = __get__shiftKey_k__BackingField, put = __set__shiftKey_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _shiftKey_k__BackingField;

  /// @brief Field <ctrlKey>k__BackingField, offset 0x168, size 0x8
  __declspec(property(get = __get__ctrlKey_k__BackingField, put = __set__ctrlKey_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _ctrlKey_k__BackingField;

  /// @brief Field <altKey>k__BackingField, offset 0x170, size 0x8
  __declspec(property(get = __get__altKey_k__BackingField, put = __set__altKey_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _altKey_k__BackingField;

  /// @brief Field <imeSelected>k__BackingField, offset 0x178, size 0x8
  __declspec(property(get = __get__imeSelected_k__BackingField, put = __set__imeSelected_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _imeSelected_k__BackingField;

  /// @brief Field m_TextInputListeners, offset 0x180, size 0x18
  __declspec(property(get = __get_m_TextInputListeners, put = __set_m_TextInputListeners))::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Action_1<char16_t>*> m_TextInputListeners;

  /// @brief Field m_KeyboardLayoutName, offset 0x198, size 0x8
  __declspec(property(get = __get_m_KeyboardLayoutName, put = __set_m_KeyboardLayoutName))::StringW m_KeyboardLayoutName;

  /// @brief Field m_Keys, offset 0x1a0, size 0x8
  __declspec(property(get = __get_m_Keys, put = __set_m_Keys))::ArrayW<::UnityEngine::InputSystem::Controls::KeyControl*, ::Array<::UnityEngine::InputSystem::Controls::KeyControl*>*> m_Keys;

  /// @brief Field m_ImeCompositionListeners, offset 0x1a8, size 0x18
  __declspec(property(get = __get_m_ImeCompositionListeners, put = __set_m_ImeCompositionListeners))::UnityEngine::InputSystem::Utilities::InlinedArray_1<
      ::System::Action_1<::UnityEngine::InputSystem::LowLevel::IMECompositionString>*> m_ImeCompositionListeners;

  /// @brief Field <current>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__current_k__BackingField, put = setStaticF__current_k__BackingField))::UnityEngine::InputSystem::Keyboard* _current_k__BackingField;

  __declspec(property(get = get_keyboardLayout, put = set_keyboardLayout))::StringW keyboardLayout;

  __declspec(property(get = get_anyKey, put = set_anyKey))::UnityEngine::InputSystem::Controls::AnyKeyControl* anyKey;

  __declspec(property(get = get_spaceKey))::UnityEngine::InputSystem::Controls::KeyControl* spaceKey;

  __declspec(property(get = get_enterKey))::UnityEngine::InputSystem::Controls::KeyControl* enterKey;

  __declspec(property(get = get_tabKey))::UnityEngine::InputSystem::Controls::KeyControl* tabKey;

  __declspec(property(get = get_backquoteKey))::UnityEngine::InputSystem::Controls::KeyControl* backquoteKey;

  __declspec(property(get = get_quoteKey))::UnityEngine::InputSystem::Controls::KeyControl* quoteKey;

  __declspec(property(get = get_semicolonKey))::UnityEngine::InputSystem::Controls::KeyControl* semicolonKey;

  __declspec(property(get = get_commaKey))::UnityEngine::InputSystem::Controls::KeyControl* commaKey;

  __declspec(property(get = get_periodKey))::UnityEngine::InputSystem::Controls::KeyControl* periodKey;

  __declspec(property(get = get_slashKey))::UnityEngine::InputSystem::Controls::KeyControl* slashKey;

  __declspec(property(get = get_backslashKey))::UnityEngine::InputSystem::Controls::KeyControl* backslashKey;

  __declspec(property(get = get_leftBracketKey))::UnityEngine::InputSystem::Controls::KeyControl* leftBracketKey;

  __declspec(property(get = get_rightBracketKey))::UnityEngine::InputSystem::Controls::KeyControl* rightBracketKey;

  __declspec(property(get = get_minusKey))::UnityEngine::InputSystem::Controls::KeyControl* minusKey;

  __declspec(property(get = get_equalsKey))::UnityEngine::InputSystem::Controls::KeyControl* equalsKey;

  __declspec(property(get = get_aKey))::UnityEngine::InputSystem::Controls::KeyControl* aKey;

  __declspec(property(get = get_bKey))::UnityEngine::InputSystem::Controls::KeyControl* bKey;

  __declspec(property(get = get_cKey))::UnityEngine::InputSystem::Controls::KeyControl* cKey;

  __declspec(property(get = get_dKey))::UnityEngine::InputSystem::Controls::KeyControl* dKey;

  __declspec(property(get = get_eKey))::UnityEngine::InputSystem::Controls::KeyControl* eKey;

  __declspec(property(get = get_fKey))::UnityEngine::InputSystem::Controls::KeyControl* fKey;

  __declspec(property(get = get_gKey))::UnityEngine::InputSystem::Controls::KeyControl* gKey;

  __declspec(property(get = get_hKey))::UnityEngine::InputSystem::Controls::KeyControl* hKey;

  __declspec(property(get = get_iKey))::UnityEngine::InputSystem::Controls::KeyControl* iKey;

  __declspec(property(get = get_jKey))::UnityEngine::InputSystem::Controls::KeyControl* jKey;

  __declspec(property(get = get_kKey))::UnityEngine::InputSystem::Controls::KeyControl* kKey;

  __declspec(property(get = get_lKey))::UnityEngine::InputSystem::Controls::KeyControl* lKey;

  __declspec(property(get = get_mKey))::UnityEngine::InputSystem::Controls::KeyControl* mKey;

  __declspec(property(get = get_nKey))::UnityEngine::InputSystem::Controls::KeyControl* nKey;

  __declspec(property(get = get_oKey))::UnityEngine::InputSystem::Controls::KeyControl* oKey;

  __declspec(property(get = get_pKey))::UnityEngine::InputSystem::Controls::KeyControl* pKey;

  __declspec(property(get = get_qKey))::UnityEngine::InputSystem::Controls::KeyControl* qKey;

  __declspec(property(get = get_rKey))::UnityEngine::InputSystem::Controls::KeyControl* rKey;

  __declspec(property(get = get_sKey))::UnityEngine::InputSystem::Controls::KeyControl* sKey;

  __declspec(property(get = get_tKey))::UnityEngine::InputSystem::Controls::KeyControl* tKey;

  __declspec(property(get = get_uKey))::UnityEngine::InputSystem::Controls::KeyControl* uKey;

  __declspec(property(get = get_vKey))::UnityEngine::InputSystem::Controls::KeyControl* vKey;

  __declspec(property(get = get_wKey))::UnityEngine::InputSystem::Controls::KeyControl* wKey;

  __declspec(property(get = get_xKey))::UnityEngine::InputSystem::Controls::KeyControl* xKey;

  __declspec(property(get = get_yKey))::UnityEngine::InputSystem::Controls::KeyControl* yKey;

  __declspec(property(get = get_zKey))::UnityEngine::InputSystem::Controls::KeyControl* zKey;

  __declspec(property(get = get_digit1Key))::UnityEngine::InputSystem::Controls::KeyControl* digit1Key;

  __declspec(property(get = get_digit2Key))::UnityEngine::InputSystem::Controls::KeyControl* digit2Key;

  __declspec(property(get = get_digit3Key))::UnityEngine::InputSystem::Controls::KeyControl* digit3Key;

  __declspec(property(get = get_digit4Key))::UnityEngine::InputSystem::Controls::KeyControl* digit4Key;

  __declspec(property(get = get_digit5Key))::UnityEngine::InputSystem::Controls::KeyControl* digit5Key;

  __declspec(property(get = get_digit6Key))::UnityEngine::InputSystem::Controls::KeyControl* digit6Key;

  __declspec(property(get = get_digit7Key))::UnityEngine::InputSystem::Controls::KeyControl* digit7Key;

  __declspec(property(get = get_digit8Key))::UnityEngine::InputSystem::Controls::KeyControl* digit8Key;

  __declspec(property(get = get_digit9Key))::UnityEngine::InputSystem::Controls::KeyControl* digit9Key;

  __declspec(property(get = get_digit0Key))::UnityEngine::InputSystem::Controls::KeyControl* digit0Key;

  __declspec(property(get = get_leftShiftKey))::UnityEngine::InputSystem::Controls::KeyControl* leftShiftKey;

  __declspec(property(get = get_rightShiftKey))::UnityEngine::InputSystem::Controls::KeyControl* rightShiftKey;

  __declspec(property(get = get_leftAltKey))::UnityEngine::InputSystem::Controls::KeyControl* leftAltKey;

  __declspec(property(get = get_rightAltKey))::UnityEngine::InputSystem::Controls::KeyControl* rightAltKey;

  __declspec(property(get = get_leftCtrlKey))::UnityEngine::InputSystem::Controls::KeyControl* leftCtrlKey;

  __declspec(property(get = get_rightCtrlKey))::UnityEngine::InputSystem::Controls::KeyControl* rightCtrlKey;

  __declspec(property(get = get_leftMetaKey))::UnityEngine::InputSystem::Controls::KeyControl* leftMetaKey;

  __declspec(property(get = get_rightMetaKey))::UnityEngine::InputSystem::Controls::KeyControl* rightMetaKey;

  __declspec(property(get = get_leftWindowsKey))::UnityEngine::InputSystem::Controls::KeyControl* leftWindowsKey;

  __declspec(property(get = get_rightWindowsKey))::UnityEngine::InputSystem::Controls::KeyControl* rightWindowsKey;

  __declspec(property(get = get_leftAppleKey))::UnityEngine::InputSystem::Controls::KeyControl* leftAppleKey;

  __declspec(property(get = get_rightAppleKey))::UnityEngine::InputSystem::Controls::KeyControl* rightAppleKey;

  __declspec(property(get = get_leftCommandKey))::UnityEngine::InputSystem::Controls::KeyControl* leftCommandKey;

  __declspec(property(get = get_rightCommandKey))::UnityEngine::InputSystem::Controls::KeyControl* rightCommandKey;

  __declspec(property(get = get_contextMenuKey))::UnityEngine::InputSystem::Controls::KeyControl* contextMenuKey;

  __declspec(property(get = get_escapeKey))::UnityEngine::InputSystem::Controls::KeyControl* escapeKey;

  __declspec(property(get = get_leftArrowKey))::UnityEngine::InputSystem::Controls::KeyControl* leftArrowKey;

  __declspec(property(get = get_rightArrowKey))::UnityEngine::InputSystem::Controls::KeyControl* rightArrowKey;

  __declspec(property(get = get_upArrowKey))::UnityEngine::InputSystem::Controls::KeyControl* upArrowKey;

  __declspec(property(get = get_downArrowKey))::UnityEngine::InputSystem::Controls::KeyControl* downArrowKey;

  __declspec(property(get = get_backspaceKey))::UnityEngine::InputSystem::Controls::KeyControl* backspaceKey;

  __declspec(property(get = get_pageDownKey))::UnityEngine::InputSystem::Controls::KeyControl* pageDownKey;

  __declspec(property(get = get_pageUpKey))::UnityEngine::InputSystem::Controls::KeyControl* pageUpKey;

  __declspec(property(get = get_homeKey))::UnityEngine::InputSystem::Controls::KeyControl* homeKey;

  __declspec(property(get = get_endKey))::UnityEngine::InputSystem::Controls::KeyControl* endKey;

  __declspec(property(get = get_insertKey))::UnityEngine::InputSystem::Controls::KeyControl* insertKey;

  __declspec(property(get = get_deleteKey))::UnityEngine::InputSystem::Controls::KeyControl* deleteKey;

  __declspec(property(get = get_capsLockKey))::UnityEngine::InputSystem::Controls::KeyControl* capsLockKey;

  __declspec(property(get = get_scrollLockKey))::UnityEngine::InputSystem::Controls::KeyControl* scrollLockKey;

  __declspec(property(get = get_numLockKey))::UnityEngine::InputSystem::Controls::KeyControl* numLockKey;

  __declspec(property(get = get_printScreenKey))::UnityEngine::InputSystem::Controls::KeyControl* printScreenKey;

  __declspec(property(get = get_pauseKey))::UnityEngine::InputSystem::Controls::KeyControl* pauseKey;

  __declspec(property(get = get_numpadEnterKey))::UnityEngine::InputSystem::Controls::KeyControl* numpadEnterKey;

  __declspec(property(get = get_numpadDivideKey))::UnityEngine::InputSystem::Controls::KeyControl* numpadDivideKey;

  __declspec(property(get = get_numpadMultiplyKey))::UnityEngine::InputSystem::Controls::KeyControl* numpadMultiplyKey;

  __declspec(property(get = get_numpadMinusKey))::UnityEngine::InputSystem::Controls::KeyControl* numpadMinusKey;

  __declspec(property(get = get_numpadPlusKey))::UnityEngine::InputSystem::Controls::KeyControl* numpadPlusKey;

  __declspec(property(get = get_numpadPeriodKey))::UnityEngine::InputSystem::Controls::KeyControl* numpadPeriodKey;

  __declspec(property(get = get_numpadEqualsKey))::UnityEngine::InputSystem::Controls::KeyControl* numpadEqualsKey;

  __declspec(property(get = get_numpad0Key))::UnityEngine::InputSystem::Controls::KeyControl* numpad0Key;

  __declspec(property(get = get_numpad1Key))::UnityEngine::InputSystem::Controls::KeyControl* numpad1Key;

  __declspec(property(get = get_numpad2Key))::UnityEngine::InputSystem::Controls::KeyControl* numpad2Key;

  __declspec(property(get = get_numpad3Key))::UnityEngine::InputSystem::Controls::KeyControl* numpad3Key;

  __declspec(property(get = get_numpad4Key))::UnityEngine::InputSystem::Controls::KeyControl* numpad4Key;

  __declspec(property(get = get_numpad5Key))::UnityEngine::InputSystem::Controls::KeyControl* numpad5Key;

  __declspec(property(get = get_numpad6Key))::UnityEngine::InputSystem::Controls::KeyControl* numpad6Key;

  __declspec(property(get = get_numpad7Key))::UnityEngine::InputSystem::Controls::KeyControl* numpad7Key;

  __declspec(property(get = get_numpad8Key))::UnityEngine::InputSystem::Controls::KeyControl* numpad8Key;

  __declspec(property(get = get_numpad9Key))::UnityEngine::InputSystem::Controls::KeyControl* numpad9Key;

  __declspec(property(get = get_f1Key))::UnityEngine::InputSystem::Controls::KeyControl* f1Key;

  __declspec(property(get = get_f2Key))::UnityEngine::InputSystem::Controls::KeyControl* f2Key;

  __declspec(property(get = get_f3Key))::UnityEngine::InputSystem::Controls::KeyControl* f3Key;

  __declspec(property(get = get_f4Key))::UnityEngine::InputSystem::Controls::KeyControl* f4Key;

  __declspec(property(get = get_f5Key))::UnityEngine::InputSystem::Controls::KeyControl* f5Key;

  __declspec(property(get = get_f6Key))::UnityEngine::InputSystem::Controls::KeyControl* f6Key;

  __declspec(property(get = get_f7Key))::UnityEngine::InputSystem::Controls::KeyControl* f7Key;

  __declspec(property(get = get_f8Key))::UnityEngine::InputSystem::Controls::KeyControl* f8Key;

  __declspec(property(get = get_f9Key))::UnityEngine::InputSystem::Controls::KeyControl* f9Key;

  __declspec(property(get = get_f10Key))::UnityEngine::InputSystem::Controls::KeyControl* f10Key;

  __declspec(property(get = get_f11Key))::UnityEngine::InputSystem::Controls::KeyControl* f11Key;

  __declspec(property(get = get_f12Key))::UnityEngine::InputSystem::Controls::KeyControl* f12Key;

  __declspec(property(get = get_oem1Key))::UnityEngine::InputSystem::Controls::KeyControl* oem1Key;

  __declspec(property(get = get_oem2Key))::UnityEngine::InputSystem::Controls::KeyControl* oem2Key;

  __declspec(property(get = get_oem3Key))::UnityEngine::InputSystem::Controls::KeyControl* oem3Key;

  __declspec(property(get = get_oem4Key))::UnityEngine::InputSystem::Controls::KeyControl* oem4Key;

  __declspec(property(get = get_oem5Key))::UnityEngine::InputSystem::Controls::KeyControl* oem5Key;

  __declspec(property(get = get_shiftKey, put = set_shiftKey))::UnityEngine::InputSystem::Controls::ButtonControl* shiftKey;

  __declspec(property(get = get_ctrlKey, put = set_ctrlKey))::UnityEngine::InputSystem::Controls::ButtonControl* ctrlKey;

  __declspec(property(get = get_altKey, put = set_altKey))::UnityEngine::InputSystem::Controls::ButtonControl* altKey;

  __declspec(property(get = get_imeSelected, put = set_imeSelected))::UnityEngine::InputSystem::Controls::ButtonControl* imeSelected;

  __declspec(property(get = get_Item))::UnityEngine::InputSystem::Controls::KeyControl* Item[];

  __declspec(property(get = get_allKeys))::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::KeyControl*> allKeys;

  __declspec(property(get = get_keys, put = set_keys))::ArrayW<::UnityEngine::InputSystem::Controls::KeyControl*, ::Array<::UnityEngine::InputSystem::Controls::KeyControl*>*> keys;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::ITextInputReceiver"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::ITextInputReceiver*() noexcept;

  constexpr ::UnityEngine::InputSystem::Controls::AnyKeyControl*& __get__anyKey_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AnyKeyControl*> const& __get__anyKey_k__BackingField() const;

  constexpr void __set__anyKey_k__BackingField(::UnityEngine::InputSystem::Controls::AnyKeyControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__shiftKey_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__shiftKey_k__BackingField() const;

  constexpr void __set__shiftKey_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__ctrlKey_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__ctrlKey_k__BackingField() const;

  constexpr void __set__ctrlKey_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__altKey_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__altKey_k__BackingField() const;

  constexpr void __set__altKey_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__imeSelected_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__imeSelected_k__BackingField() const;

  constexpr void __set__imeSelected_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Action_1<char16_t>*>& __get_m_TextInputListeners();

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Action_1<char16_t>*> const& __get_m_TextInputListeners() const;

  constexpr void __set_m_TextInputListeners(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Action_1<char16_t>*> value);

  constexpr ::StringW& __get_m_KeyboardLayoutName();

  constexpr ::StringW const& __get_m_KeyboardLayoutName() const;

  constexpr void __set_m_KeyboardLayoutName(::StringW value);

  constexpr ::ArrayW<::UnityEngine::InputSystem::Controls::KeyControl*, ::Array<::UnityEngine::InputSystem::Controls::KeyControl*>*>& __get_m_Keys();

  constexpr ::ArrayW<::UnityEngine::InputSystem::Controls::KeyControl*, ::Array<::UnityEngine::InputSystem::Controls::KeyControl*>*> const& __get_m_Keys() const;

  constexpr void __set_m_Keys(::ArrayW<::UnityEngine::InputSystem::Controls::KeyControl*, ::Array<::UnityEngine::InputSystem::Controls::KeyControl*>*> value);

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Action_1<::UnityEngine::InputSystem::LowLevel::IMECompositionString>*>& __get_m_ImeCompositionListeners();

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Action_1<::UnityEngine::InputSystem::LowLevel::IMECompositionString>*> const& __get_m_ImeCompositionListeners() const;

  constexpr void __set_m_ImeCompositionListeners(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Action_1<::UnityEngine::InputSystem::LowLevel::IMECompositionString>*> value);

  static inline void setStaticF__current_k__BackingField(::UnityEngine::InputSystem::Keyboard* value);

  static inline ::UnityEngine::InputSystem::Keyboard* getStaticF__current_k__BackingField();

  /// @brief Method add_onTextInput, addr 0x2a6c0a8, size 0xe4, virtual false, abstract: false, final false
  inline void add_onTextInput(::System::Action_1<char16_t>* value);

  /// @brief Method remove_onTextInput, addr 0x2a6c18c, size 0x58, virtual false, abstract: false, final false
  inline void remove_onTextInput(::System::Action_1<char16_t>* value);

  /// @brief Method add_onIMECompositionChange, addr 0x2a6c1e4, size 0xe8, virtual false, abstract: false, final false
  inline void add_onIMECompositionChange(::System::Action_1<::UnityEngine::InputSystem::LowLevel::IMECompositionString>* value);

  /// @brief Method remove_onIMECompositionChange, addr 0x2a6c2cc, size 0x58, virtual false, abstract: false, final false
  inline void remove_onIMECompositionChange(::System::Action_1<::UnityEngine::InputSystem::LowLevel::IMECompositionString>* value);

  /// @brief Method SetIMEEnabled, addr 0x2a6c324, size 0x78, virtual false, abstract: false, final false
  inline void SetIMEEnabled(bool enabled);

  /// @brief Method SetIMECursorPosition, addr 0x2a6c39c, size 0xa4, virtual false, abstract: false, final false
  inline void SetIMECursorPosition(::UnityEngine::Vector2 position);

  /// @brief Method get_keyboardLayout, addr 0x2a6c440, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW get_keyboardLayout();

  /// @brief Method set_keyboardLayout, addr 0x2a6c47c, size 0x8, virtual false, abstract: false, final false
  inline void set_keyboardLayout(::StringW value);

  /// @brief Method get_anyKey, addr 0x2a6c484, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AnyKeyControl* get_anyKey();

  /// @brief Method set_anyKey, addr 0x2a6c48c, size 0x8, virtual false, abstract: false, final false
  inline void set_anyKey(::UnityEngine::InputSystem::Controls::AnyKeyControl* value);

  /// @brief Method get_spaceKey, addr 0x2a6c494, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_spaceKey();

  /// @brief Method get_enterKey, addr 0x2a6c524, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_enterKey();

  /// @brief Method get_tabKey, addr 0x2a6c52c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_tabKey();

  /// @brief Method get_backquoteKey, addr 0x2a6c534, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_backquoteKey();

  /// @brief Method get_quoteKey, addr 0x2a6c53c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_quoteKey();

  /// @brief Method get_semicolonKey, addr 0x2a6c544, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_semicolonKey();

  /// @brief Method get_commaKey, addr 0x2a6c54c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_commaKey();

  /// @brief Method get_periodKey, addr 0x2a6c554, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_periodKey();

  /// @brief Method get_slashKey, addr 0x2a6c55c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_slashKey();

  /// @brief Method get_backslashKey, addr 0x2a6c564, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_backslashKey();

  /// @brief Method get_leftBracketKey, addr 0x2a6c56c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_leftBracketKey();

  /// @brief Method get_rightBracketKey, addr 0x2a6c574, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_rightBracketKey();

  /// @brief Method get_minusKey, addr 0x2a6c57c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_minusKey();

  /// @brief Method get_equalsKey, addr 0x2a6c584, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_equalsKey();

  /// @brief Method get_aKey, addr 0x2a6c58c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_aKey();

  /// @brief Method get_bKey, addr 0x2a6c594, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_bKey();

  /// @brief Method get_cKey, addr 0x2a6c59c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_cKey();

  /// @brief Method get_dKey, addr 0x2a6c5a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_dKey();

  /// @brief Method get_eKey, addr 0x2a6c5ac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_eKey();

  /// @brief Method get_fKey, addr 0x2a6c5b4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_fKey();

  /// @brief Method get_gKey, addr 0x2a6c5bc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_gKey();

  /// @brief Method get_hKey, addr 0x2a6c5c4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_hKey();

  /// @brief Method get_iKey, addr 0x2a6c5cc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_iKey();

  /// @brief Method get_jKey, addr 0x2a6c5d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_jKey();

  /// @brief Method get_kKey, addr 0x2a6c5dc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_kKey();

  /// @brief Method get_lKey, addr 0x2a6c5e4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_lKey();

  /// @brief Method get_mKey, addr 0x2a6c5ec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_mKey();

  /// @brief Method get_nKey, addr 0x2a6c5f4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_nKey();

  /// @brief Method get_oKey, addr 0x2a6c5fc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_oKey();

  /// @brief Method get_pKey, addr 0x2a6c604, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_pKey();

  /// @brief Method get_qKey, addr 0x2a6c60c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_qKey();

  /// @brief Method get_rKey, addr 0x2a6c614, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_rKey();

  /// @brief Method get_sKey, addr 0x2a6c61c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_sKey();

  /// @brief Method get_tKey, addr 0x2a6c624, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_tKey();

  /// @brief Method get_uKey, addr 0x2a6c62c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_uKey();

  /// @brief Method get_vKey, addr 0x2a6c634, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_vKey();

  /// @brief Method get_wKey, addr 0x2a6c63c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_wKey();

  /// @brief Method get_xKey, addr 0x2a6c644, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_xKey();

  /// @brief Method get_yKey, addr 0x2a6c64c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_yKey();

  /// @brief Method get_zKey, addr 0x2a6c654, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_zKey();

  /// @brief Method get_digit1Key, addr 0x2a6c65c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_digit1Key();

  /// @brief Method get_digit2Key, addr 0x2a6c664, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_digit2Key();

  /// @brief Method get_digit3Key, addr 0x2a6c66c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_digit3Key();

  /// @brief Method get_digit4Key, addr 0x2a6c674, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_digit4Key();

  /// @brief Method get_digit5Key, addr 0x2a6c67c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_digit5Key();

  /// @brief Method get_digit6Key, addr 0x2a6c684, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_digit6Key();

  /// @brief Method get_digit7Key, addr 0x2a6c68c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_digit7Key();

  /// @brief Method get_digit8Key, addr 0x2a6c694, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_digit8Key();

  /// @brief Method get_digit9Key, addr 0x2a6c69c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_digit9Key();

  /// @brief Method get_digit0Key, addr 0x2a6c6a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_digit0Key();

  /// @brief Method get_leftShiftKey, addr 0x2a6c6ac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_leftShiftKey();

  /// @brief Method get_rightShiftKey, addr 0x2a6c6b4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_rightShiftKey();

  /// @brief Method get_leftAltKey, addr 0x2a6c6bc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_leftAltKey();

  /// @brief Method get_rightAltKey, addr 0x2a6c6c4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_rightAltKey();

  /// @brief Method get_leftCtrlKey, addr 0x2a6c6cc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_leftCtrlKey();

  /// @brief Method get_rightCtrlKey, addr 0x2a6c6d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_rightCtrlKey();

  /// @brief Method get_leftMetaKey, addr 0x2a6c6dc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_leftMetaKey();

  /// @brief Method get_rightMetaKey, addr 0x2a6c6e4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_rightMetaKey();

  /// @brief Method get_leftWindowsKey, addr 0x2a6c6ec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_leftWindowsKey();

  /// @brief Method get_rightWindowsKey, addr 0x2a6c6f4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_rightWindowsKey();

  /// @brief Method get_leftAppleKey, addr 0x2a6c6fc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_leftAppleKey();

  /// @brief Method get_rightAppleKey, addr 0x2a6c704, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_rightAppleKey();

  /// @brief Method get_leftCommandKey, addr 0x2a6c70c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_leftCommandKey();

  /// @brief Method get_rightCommandKey, addr 0x2a6c714, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_rightCommandKey();

  /// @brief Method get_contextMenuKey, addr 0x2a6c71c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_contextMenuKey();

  /// @brief Method get_escapeKey, addr 0x2a6c724, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_escapeKey();

  /// @brief Method get_leftArrowKey, addr 0x2a6c72c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_leftArrowKey();

  /// @brief Method get_rightArrowKey, addr 0x2a6c734, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_rightArrowKey();

  /// @brief Method get_upArrowKey, addr 0x2a6c73c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_upArrowKey();

  /// @brief Method get_downArrowKey, addr 0x2a6c744, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_downArrowKey();

  /// @brief Method get_backspaceKey, addr 0x2a6c74c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_backspaceKey();

  /// @brief Method get_pageDownKey, addr 0x2a6c754, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_pageDownKey();

  /// @brief Method get_pageUpKey, addr 0x2a6c75c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_pageUpKey();

  /// @brief Method get_homeKey, addr 0x2a6c764, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_homeKey();

  /// @brief Method get_endKey, addr 0x2a6c76c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_endKey();

  /// @brief Method get_insertKey, addr 0x2a6c774, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_insertKey();

  /// @brief Method get_deleteKey, addr 0x2a6c77c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_deleteKey();

  /// @brief Method get_capsLockKey, addr 0x2a6c784, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_capsLockKey();

  /// @brief Method get_scrollLockKey, addr 0x2a6c78c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_scrollLockKey();

  /// @brief Method get_numLockKey, addr 0x2a6c794, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_numLockKey();

  /// @brief Method get_printScreenKey, addr 0x2a6c79c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_printScreenKey();

  /// @brief Method get_pauseKey, addr 0x2a6c7a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_pauseKey();

  /// @brief Method get_numpadEnterKey, addr 0x2a6c7ac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_numpadEnterKey();

  /// @brief Method get_numpadDivideKey, addr 0x2a6c7b4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_numpadDivideKey();

  /// @brief Method get_numpadMultiplyKey, addr 0x2a6c7bc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_numpadMultiplyKey();

  /// @brief Method get_numpadMinusKey, addr 0x2a6c7c4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_numpadMinusKey();

  /// @brief Method get_numpadPlusKey, addr 0x2a6c7cc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_numpadPlusKey();

  /// @brief Method get_numpadPeriodKey, addr 0x2a6c7d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_numpadPeriodKey();

  /// @brief Method get_numpadEqualsKey, addr 0x2a6c7dc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_numpadEqualsKey();

  /// @brief Method get_numpad0Key, addr 0x2a6c7e4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_numpad0Key();

  /// @brief Method get_numpad1Key, addr 0x2a6c7ec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_numpad1Key();

  /// @brief Method get_numpad2Key, addr 0x2a6c7f4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_numpad2Key();

  /// @brief Method get_numpad3Key, addr 0x2a6c7fc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_numpad3Key();

  /// @brief Method get_numpad4Key, addr 0x2a6c804, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_numpad4Key();

  /// @brief Method get_numpad5Key, addr 0x2a6c80c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_numpad5Key();

  /// @brief Method get_numpad6Key, addr 0x2a6c814, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_numpad6Key();

  /// @brief Method get_numpad7Key, addr 0x2a6c81c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_numpad7Key();

  /// @brief Method get_numpad8Key, addr 0x2a6c824, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_numpad8Key();

  /// @brief Method get_numpad9Key, addr 0x2a6c82c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_numpad9Key();

  /// @brief Method get_f1Key, addr 0x2a6c834, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_f1Key();

  /// @brief Method get_f2Key, addr 0x2a6c83c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_f2Key();

  /// @brief Method get_f3Key, addr 0x2a6c844, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_f3Key();

  /// @brief Method get_f4Key, addr 0x2a6c84c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_f4Key();

  /// @brief Method get_f5Key, addr 0x2a6c854, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_f5Key();

  /// @brief Method get_f6Key, addr 0x2a6c85c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_f6Key();

  /// @brief Method get_f7Key, addr 0x2a6c864, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_f7Key();

  /// @brief Method get_f8Key, addr 0x2a6c86c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_f8Key();

  /// @brief Method get_f9Key, addr 0x2a6c874, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_f9Key();

  /// @brief Method get_f10Key, addr 0x2a6c87c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_f10Key();

  /// @brief Method get_f11Key, addr 0x2a6c884, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_f11Key();

  /// @brief Method get_f12Key, addr 0x2a6c88c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_f12Key();

  /// @brief Method get_oem1Key, addr 0x2a6c894, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_oem1Key();

  /// @brief Method get_oem2Key, addr 0x2a6c89c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_oem2Key();

  /// @brief Method get_oem3Key, addr 0x2a6c8a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_oem3Key();

  /// @brief Method get_oem4Key, addr 0x2a6c8ac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_oem4Key();

  /// @brief Method get_oem5Key, addr 0x2a6c8b4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_oem5Key();

  /// @brief Method get_shiftKey, addr 0x2a6c8bc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_shiftKey();

  /// @brief Method set_shiftKey, addr 0x2a6c8c4, size 0x8, virtual false, abstract: false, final false
  inline void set_shiftKey(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_ctrlKey, addr 0x2a6c8cc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_ctrlKey();

  /// @brief Method set_ctrlKey, addr 0x2a6c8d4, size 0x8, virtual false, abstract: false, final false
  inline void set_ctrlKey(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_altKey, addr 0x2a6c8dc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_altKey();

  /// @brief Method set_altKey, addr 0x2a6c8e4, size 0x8, virtual false, abstract: false, final false
  inline void set_altKey(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_imeSelected, addr 0x2a6c8ec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_imeSelected();

  /// @brief Method set_imeSelected, addr 0x2a6c8f4, size 0x8, virtual false, abstract: false, final false
  inline void set_imeSelected(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_Item, addr 0x2a6c49c, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* get_Item(::UnityEngine::InputSystem::Key key);

  /// @brief Method get_allKeys, addr 0x2a6c8fc, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::KeyControl*> get_allKeys();

  /// @brief Method get_current, addr 0x2a6c95c, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Keyboard* get_current();

  /// @brief Method set_current, addr 0x2a6c9a4, size 0x4c, virtual false, abstract: false, final false
  static inline void set_current(::UnityEngine::InputSystem::Keyboard* value);

  /// @brief Method MakeCurrent, addr 0x2a6c9f0, size 0x4c, virtual true, abstract: false, final false
  inline void MakeCurrent();

  /// @brief Method OnRemoved, addr 0x2a6ca3c, size 0x7c, virtual true, abstract: false, final false
  inline void OnRemoved();

  /// @brief Method FinishSetup, addr 0x2a6cab8, size 0x1dbc, virtual true, abstract: false, final false
  inline void FinishSetup();

  /// @brief Method RefreshConfiguration, addr 0x2a6e874, size 0xc4, virtual true, abstract: false, final false
  inline void RefreshConfiguration();

  /// @brief Method OnTextInput, addr 0x2a6e938, size 0xa0, virtual true, abstract: false, final true
  inline void OnTextInput(char16_t character);

  /// @brief Method FindKeyOnCurrentKeyboardLayout, addr 0x2a6e9d8, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::KeyControl* FindKeyOnCurrentKeyboardLayout(::StringW displayName);

  /// @brief Method OnIMECompositionChanged, addr 0x2a6eaa4, size 0xfc, virtual true, abstract: false, final true
  inline void OnIMECompositionChanged(::UnityEngine::InputSystem::LowLevel::IMECompositionString compositionString);

  /// @brief Method get_keys, addr 0x2a6eba0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::InputSystem::Controls::KeyControl*, ::Array<::UnityEngine::InputSystem::Controls::KeyControl*>*> get_keys();

  /// @brief Method set_keys, addr 0x2a6eba8, size 0x8, virtual false, abstract: false, final false
  inline void set_keys(::ArrayW<::UnityEngine::InputSystem::Controls::KeyControl*, ::Array<::UnityEngine::InputSystem::Controls::KeyControl*>*> value);

  static inline ::UnityEngine::InputSystem::Keyboard* New_ctor();

  /// @brief Method .ctor, addr 0x2a6ebb0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Keyboard", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Keyboard(Keyboard&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Keyboard", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Keyboard(Keyboard const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Keyboard();

public:
  /// @brief Field <anyKey>k__BackingField, offset: 0x158, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AnyKeyControl* ____anyKey_k__BackingField;

  /// @brief Field <shiftKey>k__BackingField, offset: 0x160, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____shiftKey_k__BackingField;

  /// @brief Field <ctrlKey>k__BackingField, offset: 0x168, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____ctrlKey_k__BackingField;

  /// @brief Field <altKey>k__BackingField, offset: 0x170, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____altKey_k__BackingField;

  /// @brief Field <imeSelected>k__BackingField, offset: 0x178, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____imeSelected_k__BackingField;

  /// @brief Field m_TextInputListeners, offset: 0x180, size: 0x18, def value: None
  ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Action_1<char16_t>*> ___m_TextInputListeners;

  /// @brief Field m_KeyboardLayoutName, offset: 0x198, size: 0x8, def value: None
  ::StringW ___m_KeyboardLayoutName;

  /// @brief Field m_Keys, offset: 0x1a0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::Controls::KeyControl*, ::Array<::UnityEngine::InputSystem::Controls::KeyControl*>*> ___m_Keys;

  /// @brief Field m_ImeCompositionListeners, offset: 0x1a8, size: 0x18, def value: None
  ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Action_1<::UnityEngine::InputSystem::LowLevel::IMECompositionString>*> ___m_ImeCompositionListeners;

  /// @brief Field KeyCount offset 0xffffffff size 0x4
  static constexpr int32_t KeyCount{ static_cast<int32_t>(0x6e) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Keyboard, 0x1c0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Keyboard, ____anyKey_k__BackingField) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Keyboard, ____shiftKey_k__BackingField) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Keyboard, ____ctrlKey_k__BackingField) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Keyboard, ____altKey_k__BackingField) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Keyboard, ____imeSelected_k__BackingField) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Keyboard, ___m_TextInputListeners) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Keyboard, ___m_KeyboardLayoutName) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Keyboard, ___m_Keys) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Keyboard, ___m_ImeCompositionListeners) == 0x1a8, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::Keyboard);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Keyboard*, "UnityEngine.InputSystem", "Keyboard");
