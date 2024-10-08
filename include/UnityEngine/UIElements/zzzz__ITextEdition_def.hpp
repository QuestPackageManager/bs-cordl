#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ITextEdition.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ITextEdition)
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine {
struct TouchScreenKeyboardType;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ITextEdition;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ITextEdition);
// Type: UnityEngine.UIElements::ITextEdition
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::ITextEdition*
class CORDL_TYPE ITextEdition {
public:
  // Declarations
  __declspec(property(get = get_AcceptCharacter, put = set_AcceptCharacter)) ::System::Func_2<char16_t, bool>* AcceptCharacter;

  __declspec(property(get = get_MoveFocusToCompositeRoot, put = set_MoveFocusToCompositeRoot)) ::System::Action* MoveFocusToCompositeRoot;

  __declspec(property(get = get_UpdateScrollOffset, put = set_UpdateScrollOffset)) ::System::Action_1<bool>* UpdateScrollOffset;

  __declspec(property(get = get_UpdateTextFromValue, put = set_UpdateTextFromValue)) ::System::Action* UpdateTextFromValue;

  __declspec(property(get = get_UpdateValueFromText, put = set_UpdateValueFromText)) ::System::Action* UpdateValueFromText;

  __declspec(property(get = get_autoCorrection, put = set_autoCorrection)) bool autoCorrection;

  __declspec(property(get = get_hideMobileInput, put = set_hideMobileInput)) bool hideMobileInput;

  __declspec(property(get = get_isDelayed, put = set_isDelayed)) bool isDelayed;

  __declspec(property(get = get_isPassword, put = set_isPassword)) bool isPassword;

  __declspec(property(get = get_isReadOnly, put = set_isReadOnly)) bool isReadOnly;

  __declspec(property(get = get_keyboardType, put = set_keyboardType)) ::UnityEngine::TouchScreenKeyboardType keyboardType;

  __declspec(property(put = set_maskChar)) char16_t maskChar;

  __declspec(property(get = get_maxLength, put = set_maxLength)) int32_t maxLength;

  __declspec(property(get = get_multiline, put = set_multiline)) bool multiline;

  /// @brief Method CullString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW CullString(::StringW s);

  /// @brief Method RestoreValueAndText, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RestoreValueAndText();

  /// @brief Method SaveValueAndText, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SaveValueAndText();

  /// @brief Method UpdateText, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UpdateText(::StringW value);

  /// @brief Method get_AcceptCharacter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Func_2<char16_t, bool>* get_AcceptCharacter();

  /// @brief Method get_MoveFocusToCompositeRoot, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Action* get_MoveFocusToCompositeRoot();

  /// @brief Method get_UpdateScrollOffset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Action_1<bool>* get_UpdateScrollOffset();

  /// @brief Method get_UpdateTextFromValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Action* get_UpdateTextFromValue();

  /// @brief Method get_UpdateValueFromText, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Action* get_UpdateValueFromText();

  /// @brief Method get_autoCorrection, addr 0x4a1f5e0, size 0xc8, virtual true, abstract: false, final false
  inline bool get_autoCorrection();

  /// @brief Method get_hideMobileInput, addr 0x4a1f768, size 0xc8, virtual true, abstract: false, final false
  inline bool get_hideMobileInput();

  /// @brief Method get_isDelayed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isDelayed();

  /// @brief Method get_isPassword, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isPassword();

  /// @brief Method get_isReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isReadOnly();

  /// @brief Method get_keyboardType, addr 0x4a1f8f0, size 0xc8, virtual true, abstract: false, final false
  inline ::UnityEngine::TouchScreenKeyboardType get_keyboardType();

  /// @brief Method get_maxLength, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_maxLength();

  /// @brief Method get_multiline, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_multiline();

  /// @brief Method set_AcceptCharacter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_AcceptCharacter(::System::Func_2<char16_t, bool>* value);

  /// @brief Method set_MoveFocusToCompositeRoot, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_MoveFocusToCompositeRoot(::System::Action* value);

  /// @brief Method set_UpdateScrollOffset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_UpdateScrollOffset(::System::Action_1<bool>* value);

  /// @brief Method set_UpdateTextFromValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_UpdateTextFromValue(::System::Action* value);

  /// @brief Method set_UpdateValueFromText, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_UpdateValueFromText(::System::Action* value);

  /// @brief Method set_autoCorrection, addr 0x4a1f6a8, size 0xc0, virtual true, abstract: false, final false
  inline void set_autoCorrection(bool value);

  /// @brief Method set_hideMobileInput, addr 0x4a1f830, size 0xc0, virtual true, abstract: false, final false
  inline void set_hideMobileInput(bool value);

  /// @brief Method set_isDelayed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_isDelayed(bool value);

  /// @brief Method set_isPassword, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_isPassword(bool value);

  /// @brief Method set_isReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_isReadOnly(bool value);

  /// @brief Method set_keyboardType, addr 0x4a1f9b8, size 0xc0, virtual true, abstract: false, final false
  inline void set_keyboardType(::UnityEngine::TouchScreenKeyboardType value);

  /// @brief Method set_maskChar, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_maskChar(char16_t value);

  /// @brief Method set_maxLength, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_maxLength(int32_t value);

  /// @brief Method set_multiline, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_multiline(bool value);

  // Ctor Parameters [CppParam { name: "", ty: "ITextEdition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITextEdition(ITextEdition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITextEdition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITextEdition(ITextEdition const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6171 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ITextEdition);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ITextEdition*, "UnityEngine.UIElements", "ITextEdition");
