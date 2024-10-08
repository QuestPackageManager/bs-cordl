#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleDialogPromptViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleDialogPromptViewController)
namespace GlobalNamespace {
class __SimpleDialogPromptViewController____c__DisplayClass5_0;
}
namespace System {
template <typename T> class Action_1;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class SimpleDialogPromptViewController;
}
namespace GlobalNamespace {
class __SimpleDialogPromptViewController____c__DisplayClass5_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SimpleDialogPromptViewController);
MARK_REF_PTR_T(::GlobalNamespace::__SimpleDialogPromptViewController____c__DisplayClass5_0);
// Type: ::<>c__DisplayClass5_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SimpleDialogPromptViewController::<>c__DisplayClass5_0*
class CORDL_TYPE __SimpleDialogPromptViewController____c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::SimpleDialogPromptViewController> __4__this;

  /// @brief Field buttonNum, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_buttonNum, put = __cordl_internal_set_buttonNum)) int32_t buttonNum;

  static inline ::GlobalNamespace::__SimpleDialogPromptViewController____c__DisplayClass5_0* New_ctor();

  /// @brief Method <DidActivate>b__0, addr 0x3a896f4, size 0x38, virtual false, abstract: false, final false
  inline void _DidActivate_b__0();

  constexpr ::UnityW<::GlobalNamespace::SimpleDialogPromptViewController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleDialogPromptViewController>& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get_buttonNum() const;

  constexpr int32_t& __cordl_internal_get_buttonNum();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SimpleDialogPromptViewController> value);

  constexpr void __cordl_internal_set_buttonNum(int32_t value);

  /// @brief Method .ctor, addr 0x3a894e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SimpleDialogPromptViewController____c__DisplayClass5_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SimpleDialogPromptViewController____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SimpleDialogPromptViewController____c__DisplayClass5_0(__SimpleDialogPromptViewController____c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SimpleDialogPromptViewController____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SimpleDialogPromptViewController____c__DisplayClass5_0(__SimpleDialogPromptViewController____c__DisplayClass5_0 const&) = delete;

  /// @brief Field buttonNum, offset: 0x10, size: 0x4, def value: None
  int32_t ___buttonNum;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleDialogPromptViewController> _____4__this;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4934 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SimpleDialogPromptViewController____c__DisplayClass5_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SimpleDialogPromptViewController____c__DisplayClass5_0, ___buttonNum) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SimpleDialogPromptViewController____c__DisplayClass5_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SimpleDialogPromptViewController
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SimpleDialogPromptViewController*
class CORDL_TYPE SimpleDialogPromptViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using __c__DisplayClass5_0 = ::GlobalNamespace::__SimpleDialogPromptViewController____c__DisplayClass5_0;

  /// @brief Field _buttonTexts, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonTexts, put = __cordl_internal_set__buttonTexts)) ::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>, ::Array<::UnityW<::TMPro::TextMeshProUGUI>>*>
      _buttonTexts;

  /// @brief Field _buttons, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__buttons, put = __cordl_internal_set__buttons)) ::ArrayW<::UnityW<::UnityEngine::UI::Button>, ::Array<::UnityW<::UnityEngine::UI::Button>>*> _buttons;

  /// @brief Field _didFinishAction, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__didFinishAction, put = __cordl_internal_set__didFinishAction)) ::System::Action_1<int32_t>* _didFinishAction;

  /// @brief Field _messageText, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__messageText, put = __cordl_internal_set__messageText)) ::UnityW<::TMPro::TextMeshProUGUI> _messageText;

  /// @brief Field _titleText, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__titleText, put = __cordl_internal_set__titleText)) ::UnityW<::TMPro::TextMeshProUGUI> _titleText;

  /// @brief Method DidActivate, addr 0x3a893c0, size 0x128, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x3a894f0, size 0xc, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method Init, addr 0x3a894fc, size 0x10, virtual false, abstract: false, final false
  inline void Init(::StringW title, ::StringW message, ::StringW buttonText, ::System::Action_1<int32_t>* didFinishAction);

  /// @brief Method Init, addr 0x3a896e0, size 0xc, virtual false, abstract: false, final false
  inline void Init(::StringW title, ::StringW message, ::StringW firstButtonText, ::StringW secondButtonText, ::System::Action_1<int32_t>* didFinishAction);

  /// @brief Method Init, addr 0x3a8950c, size 0x1d4, virtual false, abstract: false, final false
  inline void Init(::StringW title, ::StringW message, ::StringW firstButtonText, ::StringW secondButtonText, ::StringW thirdButtonText, ::System::Action_1<int32_t>* didFinishAction);

  static inline ::GlobalNamespace::SimpleDialogPromptViewController* New_ctor();

  constexpr ::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>, ::Array<::UnityW<::TMPro::TextMeshProUGUI>>*> const& __cordl_internal_get__buttonTexts() const;

  constexpr ::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>, ::Array<::UnityW<::TMPro::TextMeshProUGUI>>*>& __cordl_internal_get__buttonTexts();

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Button>, ::Array<::UnityW<::UnityEngine::UI::Button>>*> const& __cordl_internal_get__buttons() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Button>, ::Array<::UnityW<::UnityEngine::UI::Button>>*>& __cordl_internal_get__buttons();

  constexpr ::System::Action_1<int32_t>*& __cordl_internal_get__didFinishAction();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> const& __cordl_internal_get__didFinishAction() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__messageText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__messageText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__titleText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__titleText();

  constexpr void __cordl_internal_set__buttonTexts(::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>, ::Array<::UnityW<::TMPro::TextMeshProUGUI>>*> value);

  constexpr void __cordl_internal_set__buttons(::ArrayW<::UnityW<::UnityEngine::UI::Button>, ::Array<::UnityW<::UnityEngine::UI::Button>>*> value);

  constexpr void __cordl_internal_set__didFinishAction(::System::Action_1<int32_t>* value);

  constexpr void __cordl_internal_set__messageText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__titleText(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x3a896ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleDialogPromptViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SimpleDialogPromptViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleDialogPromptViewController(SimpleDialogPromptViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleDialogPromptViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleDialogPromptViewController(SimpleDialogPromptViewController const&) = delete;

  /// @brief Field _titleText, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____titleText;

  /// @brief Field _messageText, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____messageText;

  /// @brief Field _buttons, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::UI::Button>, ::Array<::UnityW<::UnityEngine::UI::Button>>*> ____buttons;

  /// @brief Field _buttonTexts, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>, ::Array<::UnityW<::TMPro::TextMeshProUGUI>>*> ____buttonTexts;

  /// @brief Field _didFinishAction, offset: 0x98, size: 0x8, def value: None
  ::System::Action_1<int32_t>* ____didFinishAction;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4935 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SimpleDialogPromptViewController, 0xa0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleDialogPromptViewController, ____titleText) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleDialogPromptViewController, ____messageText) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleDialogPromptViewController, ____buttons) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleDialogPromptViewController, ____buttonTexts) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleDialogPromptViewController, ____didFinishAction) == 0x98, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SimpleDialogPromptViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleDialogPromptViewController*, "", "SimpleDialogPromptViewController");
NEED_NO_BOX(::GlobalNamespace::__SimpleDialogPromptViewController____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SimpleDialogPromptViewController____c__DisplayClass5_0*, "", "SimpleDialogPromptViewController/<>c__DisplayClass5_0");
