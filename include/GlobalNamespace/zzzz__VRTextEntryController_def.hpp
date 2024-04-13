#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VRTextEntryController)
namespace GlobalNamespace {
class UIKeyboard;
}
namespace GlobalNamespace {
class __VRTextEntryController___BlinkCursor_d__23;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class VRTextEntryController;
}
namespace GlobalNamespace {
class __VRTextEntryController___BlinkCursor_d__23;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VRTextEntryController);
MARK_REF_PTR_T(::GlobalNamespace::__VRTextEntryController___BlinkCursor_d__23);
// Type: ::<BlinkCursor>d__23
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::VRTextEntryController::<BlinkCursor>d__23*
class CORDL_TYPE __VRTextEntryController___BlinkCursor_d__23 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::VRTextEntryController> __4__this;

  /// @brief Field <cursorColor>5__2, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get__cursorColor_5__2, put = __cordl_internal_set__cursorColor_5__2))::UnityEngine::Color _cursorColor_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2640498, size 0x160, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__VRTextEntryController___BlinkCursor_d__23* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x26405f8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2640600, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2640640, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2640494, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::VRTextEntryController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::VRTextEntryController>& __cordl_internal_get___4__this();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__cursorColor_5__2() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__cursorColor_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::VRTextEntryController> value);

  constexpr void __cordl_internal_set__cursorColor_5__2(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x26401f4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VRTextEntryController___BlinkCursor_d__23();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VRTextEntryController___BlinkCursor_d__23", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VRTextEntryController___BlinkCursor_d__23(__VRTextEntryController___BlinkCursor_d__23&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VRTextEntryController___BlinkCursor_d__23", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VRTextEntryController___BlinkCursor_d__23(__VRTextEntryController___BlinkCursor_d__23 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VRTextEntryController> _____4__this;

  /// @brief Field <cursorColor>5__2, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Color ____cursorColor_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VRTextEntryController___BlinkCursor_d__23, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRTextEntryController___BlinkCursor_d__23, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRTextEntryController___BlinkCursor_d__23, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRTextEntryController___BlinkCursor_d__23, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRTextEntryController___BlinkCursor_d__23, ____cursorColor_5__2) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::VRTextEntryController
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 81, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::VRTextEntryController*
class CORDL_TYPE VRTextEntryController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _BlinkCursor_d__23 = ::GlobalNamespace::__VRTextEntryController___BlinkCursor_d__23;

  /// @brief Field _allowBlank, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get__allowBlank, put = __cordl_internal_set__allowBlank)) bool _allowBlank;

  /// @brief Field _cursorText, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__cursorText, put = __cordl_internal_set__cursorText))::UnityW<::TMPro::TextMeshProUGUI> _cursorText;

  /// @brief Field _maxLength, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__maxLength, put = __cordl_internal_set__maxLength)) int32_t _maxLength;

  /// @brief Field _stopBlinkingCursor, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__stopBlinkingCursor, put = __cordl_internal_set__stopBlinkingCursor)) bool _stopBlinkingCursor;

  /// @brief Field _text, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text))::UnityW<::TMPro::TextMeshProUGUI> _text;

  /// @brief Field _uiKeyboard, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__uiKeyboard, put = __cordl_internal_set__uiKeyboard))::UnityW<::GlobalNamespace::UIKeyboard> _uiKeyboard;

  /// @brief Field cancelButtonWasPressedEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_cancelButtonWasPressedEvent, put = __cordl_internal_set_cancelButtonWasPressedEvent))::System::Action* cancelButtonWasPressedEvent;

  __declspec(property(put = set_hideCancelButton)) bool hideCancelButton;

  /// @brief Field okButtonWasPressedEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_okButtonWasPressedEvent, put = __cordl_internal_set_okButtonWasPressedEvent))::System::Action* okButtonWasPressedEvent;

  __declspec(property(get = get_text, put = set_text))::StringW text;

  /// @brief Field textDidChangeEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_textDidChangeEvent, put = __cordl_internal_set_textDidChangeEvent))::System::Action_1<::StringW>* textDidChangeEvent;

  /// @brief Method Awake, addr 0x263ffd0, size 0x18c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method BlinkCursor, addr 0x2640180, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* BlinkCursor();

  /// @brief Method HandleUIKeyboardDeleteButtonWasPressed, addr 0x2640318, size 0x134, virtual false, abstract: false, final false
  inline void HandleUIKeyboardDeleteButtonWasPressed();

  /// @brief Method HandleUIKeyboardTextKeyWasPressed, addr 0x264021c, size 0xfc, virtual false, abstract: false, final false
  inline void HandleUIKeyboardTextKeyWasPressed(char16_t key);

  static inline ::GlobalNamespace::VRTextEntryController* New_ctor();

  /// @brief Method OnDisable, addr 0x26401e8, size 0xc, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x264015c, size 0x24, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method <Awake>b__20_0, addr 0x264045c, size 0x1c, virtual false, abstract: false, final false
  inline void _Awake_b__20_0();

  /// @brief Method <Awake>b__20_1, addr 0x2640478, size 0x1c, virtual false, abstract: false, final false
  inline void _Awake_b__20_1();

  constexpr bool const& __cordl_internal_get__allowBlank() const;

  constexpr bool& __cordl_internal_get__allowBlank();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__cursorText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__cursorText();

  constexpr int32_t const& __cordl_internal_get__maxLength() const;

  constexpr int32_t& __cordl_internal_get__maxLength();

  constexpr bool const& __cordl_internal_get__stopBlinkingCursor() const;

  constexpr bool& __cordl_internal_get__stopBlinkingCursor();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__text() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__text();

  constexpr ::UnityW<::GlobalNamespace::UIKeyboard> const& __cordl_internal_get__uiKeyboard() const;

  constexpr ::UnityW<::GlobalNamespace::UIKeyboard>& __cordl_internal_get__uiKeyboard();

  constexpr ::System::Action*& __cordl_internal_get_cancelButtonWasPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_cancelButtonWasPressedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_okButtonWasPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_okButtonWasPressedEvent() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_textDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get_textDidChangeEvent() const;

  constexpr void __cordl_internal_set__allowBlank(bool value);

  constexpr void __cordl_internal_set__cursorText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__maxLength(int32_t value);

  constexpr void __cordl_internal_set__stopBlinkingCursor(bool value);

  constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__uiKeyboard(::UnityW<::GlobalNamespace::UIKeyboard> value);

  constexpr void __cordl_internal_set_cancelButtonWasPressedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_okButtonWasPressedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_textDidChangeEvent(::System::Action_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x264044c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_cancelButtonWasPressedEvent, addr 0x263fda4, size 0x9c, virtual false, abstract: false, final false
  inline void add_cancelButtonWasPressedEvent(::System::Action* value);

  /// @brief Method add_okButtonWasPressedEvent, addr 0x263fc6c, size 0x9c, virtual false, abstract: false, final false
  inline void add_okButtonWasPressedEvent(::System::Action* value);

  /// @brief Method add_textDidChangeEvent, addr 0x263fb0c, size 0xb0, virtual false, abstract: false, final false
  inline void add_textDidChangeEvent(::System::Action_1<::StringW>* value);

  /// @brief Method get_text, addr 0x263fef8, size 0x24, virtual false, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Method remove_cancelButtonWasPressedEvent, addr 0x263fe40, size 0x9c, virtual false, abstract: false, final false
  inline void remove_cancelButtonWasPressedEvent(::System::Action* value);

  /// @brief Method remove_okButtonWasPressedEvent, addr 0x263fd08, size 0x9c, virtual false, abstract: false, final false
  inline void remove_okButtonWasPressedEvent(::System::Action* value);

  /// @brief Method remove_textDidChangeEvent, addr 0x263fbbc, size 0xb0, virtual false, abstract: false, final false
  inline void remove_textDidChangeEvent(::System::Action_1<::StringW>* value);

  /// @brief Method set_hideCancelButton, addr 0x263fedc, size 0x1c, virtual false, abstract: false, final false
  inline void set_hideCancelButton(bool value);

  /// @brief Method set_text, addr 0x263ff1c, size 0xb4, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRTextEntryController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VRTextEntryController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRTextEntryController(VRTextEntryController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRTextEntryController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRTextEntryController(VRTextEntryController const&) = delete;

  /// @brief Field _uiKeyboard, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::UIKeyboard> ____uiKeyboard;

  /// @brief Field _text, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____text;

  /// @brief Field _cursorText, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____cursorText;

  /// @brief Field _maxLength, offset: 0x30, size: 0x4, def value: None
  int32_t ____maxLength;

  /// @brief Field _allowBlank, offset: 0x34, size: 0x1, def value: None
  bool ____allowBlank;

  /// @brief Field textDidChangeEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___textDidChangeEvent;

  /// @brief Field okButtonWasPressedEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___okButtonWasPressedEvent;

  /// @brief Field cancelButtonWasPressedEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action* ___cancelButtonWasPressedEvent;

  /// @brief Field _stopBlinkingCursor, offset: 0x50, size: 0x1, def value: None
  bool ____stopBlinkingCursor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VRTextEntryController, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::VRTextEntryController, ____uiKeyboard) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRTextEntryController, ____text) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRTextEntryController, ____cursorText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRTextEntryController, ____maxLength) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRTextEntryController, ____allowBlank) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRTextEntryController, ___textDidChangeEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRTextEntryController, ___okButtonWasPressedEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRTextEntryController, ___cancelButtonWasPressedEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRTextEntryController, ____stopBlinkingCursor) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VRTextEntryController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRTextEntryController*, "", "VRTextEntryController");
NEED_NO_BOX(::GlobalNamespace::__VRTextEntryController___BlinkCursor_d__23);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VRTextEntryController___BlinkCursor_d__23*, "", "VRTextEntryController/<BlinkCursor>d__23");
