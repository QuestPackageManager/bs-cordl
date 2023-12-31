#pragma once
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
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5762))
// CS Name: ::SimpleDialogPromptViewController::<>c__DisplayClass5_0*
class CORDL_TYPE __SimpleDialogPromptViewController____c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field buttonNum, offset 0x10, size 0x4
  __declspec(property(get = __get_buttonNum, put = __set_buttonNum)) int32_t buttonNum;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::SimpleDialogPromptViewController* __4__this;

  constexpr int32_t& __get_buttonNum();

  constexpr int32_t const& __get_buttonNum() const;

  constexpr void __set_buttonNum(int32_t value);

  constexpr ::GlobalNamespace::SimpleDialogPromptViewController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SimpleDialogPromptViewController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::SimpleDialogPromptViewController* value);

  static inline ::GlobalNamespace::__SimpleDialogPromptViewController____c__DisplayClass5_0* New_ctor();

  /// @brief Method .ctor, addr 0x22db9fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <DidActivate>b__0, addr 0x22dbc00, size 0x38, virtual false, abstract: false, final false
  inline void _DidActivate_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__SimpleDialogPromptViewController____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SimpleDialogPromptViewController____c__DisplayClass5_0(__SimpleDialogPromptViewController____c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SimpleDialogPromptViewController____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SimpleDialogPromptViewController____c__DisplayClass5_0(__SimpleDialogPromptViewController____c__DisplayClass5_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SimpleDialogPromptViewController____c__DisplayClass5_0();

public:
  /// @brief Field buttonNum, offset: 0x10, size: 0x4, def value: None
  int32_t ___buttonNum;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::SimpleDialogPromptViewController* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SimpleDialogPromptViewController____c__DisplayClass5_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SimpleDialogPromptViewController____c__DisplayClass5_0, ___buttonNum) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SimpleDialogPromptViewController____c__DisplayClass5_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SimpleDialogPromptViewController
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5763))
// CS Name: ::SimpleDialogPromptViewController*
class CORDL_TYPE SimpleDialogPromptViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using __c__DisplayClass5_0 = ::GlobalNamespace::__SimpleDialogPromptViewController____c__DisplayClass5_0;

  /// @brief Field _titleText, offset 0x70, size 0x8
  __declspec(property(get = __get__titleText, put = __set__titleText))::TMPro::TextMeshProUGUI* _titleText;

  /// @brief Field _messageText, offset 0x78, size 0x8
  __declspec(property(get = __get__messageText, put = __set__messageText))::TMPro::TextMeshProUGUI* _messageText;

  /// @brief Field _buttons, offset 0x80, size 0x8
  __declspec(property(get = __get__buttons, put = __set__buttons))::ArrayW<::UnityEngine::UI::Button*, ::Array<::UnityEngine::UI::Button*>*> _buttons;

  /// @brief Field _buttonTexts, offset 0x88, size 0x8
  __declspec(property(get = __get__buttonTexts, put = __set__buttonTexts))::ArrayW<::TMPro::TextMeshProUGUI*, ::Array<::TMPro::TextMeshProUGUI*>*> _buttonTexts;

  /// @brief Field _didFinishAction, offset 0x90, size 0x8
  __declspec(property(get = __get__didFinishAction, put = __set__didFinishAction))::System::Action_1<int32_t>* _didFinishAction;

  constexpr ::TMPro::TextMeshProUGUI*& __get__titleText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__titleText() const;

  constexpr void __set__titleText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__messageText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__messageText() const;

  constexpr void __set__messageText(::TMPro::TextMeshProUGUI* value);

  constexpr ::ArrayW<::UnityEngine::UI::Button*, ::Array<::UnityEngine::UI::Button*>*>& __get__buttons();

  constexpr ::ArrayW<::UnityEngine::UI::Button*, ::Array<::UnityEngine::UI::Button*>*> const& __get__buttons() const;

  constexpr void __set__buttons(::ArrayW<::UnityEngine::UI::Button*, ::Array<::UnityEngine::UI::Button*>*> value);

  constexpr ::ArrayW<::TMPro::TextMeshProUGUI*, ::Array<::TMPro::TextMeshProUGUI*>*>& __get__buttonTexts();

  constexpr ::ArrayW<::TMPro::TextMeshProUGUI*, ::Array<::TMPro::TextMeshProUGUI*>*> const& __get__buttonTexts() const;

  constexpr void __set__buttonTexts(::ArrayW<::TMPro::TextMeshProUGUI*, ::Array<::TMPro::TextMeshProUGUI*>*> value);

  constexpr ::System::Action_1<int32_t>*& __get__didFinishAction();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> const& __get__didFinishAction() const;

  constexpr void __set__didFinishAction(::System::Action_1<int32_t>* value);

  /// @brief Method DidActivate, addr 0x22db8d0, size 0x12c, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x22dba04, size 0xc, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method Init, addr 0x22dba10, size 0x10, virtual false, abstract: false, final false
  inline void Init(::StringW title, ::StringW message, ::StringW buttonText, ::System::Action_1<int32_t>* didFinishAction);

  /// @brief Method Init, addr 0x22dbbf4, size 0xc, virtual false, abstract: false, final false
  inline void Init(::StringW title, ::StringW message, ::StringW firstButtonText, ::StringW secondButtonText, ::System::Action_1<int32_t>* didFinishAction);

  /// @brief Method Init, addr 0x22dba20, size 0x1d4, virtual false, abstract: false, final false
  inline void Init(::StringW title, ::StringW message, ::StringW firstButtonText, ::StringW secondButtonText, ::StringW thirdButtonText, ::System::Action_1<int32_t>* didFinishAction);

  static inline ::GlobalNamespace::SimpleDialogPromptViewController* New_ctor();

  /// @brief Method .ctor, addr 0x22d7ef8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SimpleDialogPromptViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleDialogPromptViewController(SimpleDialogPromptViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleDialogPromptViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleDialogPromptViewController(SimpleDialogPromptViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleDialogPromptViewController();

public:
  /// @brief Field _titleText, offset: 0x70, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____titleText;

  /// @brief Field _messageText, offset: 0x78, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____messageText;

  /// @brief Field _buttons, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UI::Button*, ::Array<::UnityEngine::UI::Button*>*> ____buttons;

  /// @brief Field _buttonTexts, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::TMPro::TextMeshProUGUI*, ::Array<::TMPro::TextMeshProUGUI*>*> ____buttonTexts;

  /// @brief Field _didFinishAction, offset: 0x90, size: 0x8, def value: None
  ::System::Action_1<int32_t>* ____didFinishAction;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SimpleDialogPromptViewController, 0x98>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleDialogPromptViewController, ____titleText) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleDialogPromptViewController, ____messageText) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleDialogPromptViewController, ____buttons) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleDialogPromptViewController, ____buttonTexts) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleDialogPromptViewController, ____didFinishAction) == 0x90, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SimpleDialogPromptViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleDialogPromptViewController*, "", "SimpleDialogPromptViewController");
NEED_NO_BOX(::GlobalNamespace::__SimpleDialogPromptViewController____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SimpleDialogPromptViewController____c__DisplayClass5_0*, "", "SimpleDialogPromptViewController/<>c__DisplayClass5_0");
