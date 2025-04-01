#pragma once
// IWYU pragma private; include "TMPro/TMP_InputField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IBeginDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEndDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerClickHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IScrollHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISubmitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IUpdateSelectedHandler_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_3_def.hpp"
#include "UnityEngine/UI/zzzz__ICanvasElement_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutElement_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboardType_def.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboard_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_InputField)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace TMPro {
class TMP_FontAsset;
}
namespace TMPro {
struct TMP_InputField_CharacterValidation;
}
namespace TMPro {
struct TMP_InputField_ContentType;
}
namespace TMPro {
struct TMP_InputField_EditState;
}
namespace TMPro {
struct TMP_InputField_InputType;
}
namespace TMPro {
struct TMP_InputField_LineType;
}
namespace TMPro {
class TMP_InputField_OnChangeEvent;
}
namespace TMPro {
class TMP_InputField_OnValidateInput;
}
namespace TMPro {
class TMP_InputField_SelectionEvent;
}
namespace TMPro {
class TMP_InputField_SubmitEvent;
}
namespace TMPro {
class TMP_InputField_TextSelectionEvent;
}
namespace TMPro {
class TMP_InputField_TouchScreenKeyboardEvent;
}
namespace TMPro {
class TMP_InputField__CaretBlink_d__276;
}
namespace TMPro {
class TMP_InputField__MouseDragOutsideRect_d__294;
}
namespace TMPro {
class TMP_InputValidator;
}
namespace TMPro {
class TMP_ScrollbarEventHandler;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class BaseInput;
}
namespace UnityEngine::EventSystems {
class IScrollHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::UI {
struct CanvasUpdate;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine::UI {
class LayoutGroup;
}
namespace UnityEngine::UI {
class RectMask2D;
}
namespace UnityEngine::UI {
class Scrollbar;
}
namespace UnityEngine::UI {
struct Selectable_SelectionState;
}
namespace UnityEngine::UI {
class VertexHelper;
}
namespace UnityEngine {
class CanvasRenderer;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct TouchScreenKeyboardType;
}
namespace UnityEngine {
class TouchScreenKeyboard;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct UIVertex;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class WaitForSecondsRealtime;
}
// Forward declare root types
namespace TMPro {
struct TMP_InputField_CharacterValidation;
}
namespace TMPro {
struct TMP_InputField_ContentType;
}
namespace TMPro {
struct TMP_InputField_EditState;
}
namespace TMPro {
struct TMP_InputField_InputType;
}
namespace TMPro {
struct TMP_InputField_LineType;
}
namespace TMPro {
class TMP_InputField;
}
namespace TMPro {
class TMP_InputField_OnChangeEvent;
}
namespace TMPro {
class TMP_InputField_OnValidateInput;
}
namespace TMPro {
class TMP_InputField_SelectionEvent;
}
namespace TMPro {
class TMP_InputField_SubmitEvent;
}
namespace TMPro {
class TMP_InputField_TextSelectionEvent;
}
namespace TMPro {
class TMP_InputField_TouchScreenKeyboardEvent;
}
namespace TMPro {
class TMP_InputField__CaretBlink_d__276;
}
namespace TMPro {
class TMP_InputField__MouseDragOutsideRect_d__294;
}
// Write type traits
MARK_VAL_T(::TMPro::TMP_InputField_CharacterValidation);
MARK_VAL_T(::TMPro::TMP_InputField_ContentType);
MARK_VAL_T(::TMPro::TMP_InputField_EditState);
MARK_VAL_T(::TMPro::TMP_InputField_InputType);
MARK_VAL_T(::TMPro::TMP_InputField_LineType);
MARK_REF_PTR_T(::TMPro::TMP_InputField);
MARK_REF_PTR_T(::TMPro::TMP_InputField_OnChangeEvent);
MARK_REF_PTR_T(::TMPro::TMP_InputField_OnValidateInput);
MARK_REF_PTR_T(::TMPro::TMP_InputField_SelectionEvent);
MARK_REF_PTR_T(::TMPro::TMP_InputField_SubmitEvent);
MARK_REF_PTR_T(::TMPro::TMP_InputField_TextSelectionEvent);
MARK_REF_PTR_T(::TMPro::TMP_InputField_TouchScreenKeyboardEvent);
MARK_REF_PTR_T(::TMPro::TMP_InputField__CaretBlink_d__276);
MARK_REF_PTR_T(::TMPro::TMP_InputField__MouseDragOutsideRect_d__294);
// Dependencies
namespace TMPro {
// Is value type: true
// CS Name: TMPro.TMP_InputField/ContentType
struct CORDL_TYPE TMP_InputField_ContentType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TMP_InputField_ContentType_Unwrapped
  enum struct __TMP_InputField_ContentType_Unwrapped : int32_t {
    __E_Standard = static_cast<int32_t>(0x0),
    __E_Autocorrected = static_cast<int32_t>(0x1),
    __E_IntegerNumber = static_cast<int32_t>(0x2),
    __E_DecimalNumber = static_cast<int32_t>(0x3),
    __E_Alphanumeric = static_cast<int32_t>(0x4),
    __E_Name = static_cast<int32_t>(0x5),
    __E_EmailAddress = static_cast<int32_t>(0x6),
    __E_Password = static_cast<int32_t>(0x7),
    __E_Pin = static_cast<int32_t>(0x8),
    __E_Custom = static_cast<int32_t>(0x9),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TMP_InputField_ContentType_Unwrapped() const noexcept {
    return static_cast<__TMP_InputField_ContentType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_InputField_ContentType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TMP_InputField_ContentType(int32_t value__) noexcept;

  /// @brief Field Alphanumeric value: I32(4)
  static ::TMPro::TMP_InputField_ContentType const Alphanumeric;

  /// @brief Field Autocorrected value: I32(1)
  static ::TMPro::TMP_InputField_ContentType const Autocorrected;

  /// @brief Field Custom value: I32(9)
  static ::TMPro::TMP_InputField_ContentType const Custom;

  /// @brief Field DecimalNumber value: I32(3)
  static ::TMPro::TMP_InputField_ContentType const DecimalNumber;

  /// @brief Field EmailAddress value: I32(6)
  static ::TMPro::TMP_InputField_ContentType const EmailAddress;

  /// @brief Field IntegerNumber value: I32(2)
  static ::TMPro::TMP_InputField_ContentType const IntegerNumber;

  /// @brief Field Name value: I32(5)
  static ::TMPro::TMP_InputField_ContentType const Name;

  /// @brief Field Password value: I32(7)
  static ::TMPro::TMP_InputField_ContentType const Password;

  /// @brief Field Pin value: I32(8)
  static ::TMPro::TMP_InputField_ContentType const Pin;

  /// @brief Field Standard value: I32(0)
  static ::TMPro::TMP_InputField_ContentType const Standard;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14498 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_InputField_ContentType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_InputField_ContentType, 0x4>, "Size mismatch!");

} // namespace TMPro
// Dependencies
namespace TMPro {
// Is value type: true
// CS Name: TMPro.TMP_InputField/InputType
struct CORDL_TYPE TMP_InputField_InputType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TMP_InputField_InputType_Unwrapped
  enum struct __TMP_InputField_InputType_Unwrapped : int32_t {
    __E_Standard = static_cast<int32_t>(0x0),
    __E_AutoCorrect = static_cast<int32_t>(0x1),
    __E_Password = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TMP_InputField_InputType_Unwrapped() const noexcept {
    return static_cast<__TMP_InputField_InputType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_InputField_InputType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TMP_InputField_InputType(int32_t value__) noexcept;

  /// @brief Field AutoCorrect value: I32(1)
  static ::TMPro::TMP_InputField_InputType const AutoCorrect;

  /// @brief Field Password value: I32(2)
  static ::TMPro::TMP_InputField_InputType const Password;

  /// @brief Field Standard value: I32(0)
  static ::TMPro::TMP_InputField_InputType const Standard;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14499 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_InputField_InputType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_InputField_InputType, 0x4>, "Size mismatch!");

} // namespace TMPro
// Dependencies
namespace TMPro {
// Is value type: true
// CS Name: TMPro.TMP_InputField/CharacterValidation
struct CORDL_TYPE TMP_InputField_CharacterValidation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TMP_InputField_CharacterValidation_Unwrapped
  enum struct __TMP_InputField_CharacterValidation_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Digit = static_cast<int32_t>(0x1),
    __E_Integer = static_cast<int32_t>(0x2),
    __E_Decimal = static_cast<int32_t>(0x3),
    __E_Alphanumeric = static_cast<int32_t>(0x4),
    __E_Name = static_cast<int32_t>(0x5),
    __E_Regex = static_cast<int32_t>(0x6),
    __E_EmailAddress = static_cast<int32_t>(0x7),
    __E_CustomValidator = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TMP_InputField_CharacterValidation_Unwrapped() const noexcept {
    return static_cast<__TMP_InputField_CharacterValidation_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_InputField_CharacterValidation();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TMP_InputField_CharacterValidation(int32_t value__) noexcept;

  /// @brief Field Alphanumeric value: I32(4)
  static ::TMPro::TMP_InputField_CharacterValidation const Alphanumeric;

  /// @brief Field CustomValidator value: I32(8)
  static ::TMPro::TMP_InputField_CharacterValidation const CustomValidator;

  /// @brief Field Decimal value: I32(3)
  static ::TMPro::TMP_InputField_CharacterValidation const Decimal;

  /// @brief Field Digit value: I32(1)
  static ::TMPro::TMP_InputField_CharacterValidation const Digit;

  /// @brief Field EmailAddress value: I32(7)
  static ::TMPro::TMP_InputField_CharacterValidation const EmailAddress;

  /// @brief Field Integer value: I32(2)
  static ::TMPro::TMP_InputField_CharacterValidation const Integer;

  /// @brief Field Name value: I32(5)
  static ::TMPro::TMP_InputField_CharacterValidation const Name;

  /// @brief Field None value: I32(0)
  static ::TMPro::TMP_InputField_CharacterValidation const None;

  /// @brief Field Regex value: I32(6)
  static ::TMPro::TMP_InputField_CharacterValidation const Regex;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14500 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_InputField_CharacterValidation, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_InputField_CharacterValidation, 0x4>, "Size mismatch!");

} // namespace TMPro
// Dependencies
namespace TMPro {
// Is value type: true
// CS Name: TMPro.TMP_InputField/LineType
struct CORDL_TYPE TMP_InputField_LineType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TMP_InputField_LineType_Unwrapped
  enum struct __TMP_InputField_LineType_Unwrapped : int32_t {
    __E_SingleLine = static_cast<int32_t>(0x0),
    __E_MultiLineSubmit = static_cast<int32_t>(0x1),
    __E_MultiLineNewline = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TMP_InputField_LineType_Unwrapped() const noexcept {
    return static_cast<__TMP_InputField_LineType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_InputField_LineType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TMP_InputField_LineType(int32_t value__) noexcept;

  /// @brief Field MultiLineNewline value: I32(2)
  static ::TMPro::TMP_InputField_LineType const MultiLineNewline;

  /// @brief Field MultiLineSubmit value: I32(1)
  static ::TMPro::TMP_InputField_LineType const MultiLineSubmit;

  /// @brief Field SingleLine value: I32(0)
  static ::TMPro::TMP_InputField_LineType const SingleLine;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14501 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_InputField_LineType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_InputField_LineType, 0x4>, "Size mismatch!");

} // namespace TMPro
// Dependencies System.MulticastDelegate
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_InputField/OnValidateInput
class CORDL_TYPE TMP_InputField_OnValidateInput : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x47f28cc, size 0xc0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW text, int32_t charIndex, char16_t addedChar, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x47f298c, size 0x28, virtual true, abstract: false, final false
  inline char16_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x47f28b8, size 0x14, virtual true, abstract: false, final false
  inline char16_t Invoke(::StringW text, int32_t charIndex, char16_t addedChar);

  static inline ::TMPro::TMP_InputField_OnValidateInput* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x47f2818, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_InputField_OnValidateInput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_InputField_OnValidateInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_InputField_OnValidateInput(TMP_InputField_OnValidateInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_InputField_OnValidateInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_InputField_OnValidateInput(TMP_InputField_OnValidateInput const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14502 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_InputField_OnValidateInput, 0x80>, "Size mismatch!");

} // namespace TMPro
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_InputField/SubmitEvent
class CORDL_TYPE TMP_InputField_SubmitEvent : public ::UnityEngine::Events::UnityEvent_1<::StringW> {
public:
  // Declarations
  static inline ::TMPro::TMP_InputField_SubmitEvent* New_ctor();

  /// @brief Method .ctor, addr 0x47f29b4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_InputField_SubmitEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_InputField_SubmitEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_InputField_SubmitEvent(TMP_InputField_SubmitEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_InputField_SubmitEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_InputField_SubmitEvent(TMP_InputField_SubmitEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14503 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_InputField_SubmitEvent, 0x30>, "Size mismatch!");

} // namespace TMPro
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_InputField/OnChangeEvent
class CORDL_TYPE TMP_InputField_OnChangeEvent : public ::UnityEngine::Events::UnityEvent_1<::StringW> {
public:
  // Declarations
  static inline ::TMPro::TMP_InputField_OnChangeEvent* New_ctor();

  /// @brief Method .ctor, addr 0x47f29fc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_InputField_OnChangeEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_InputField_OnChangeEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_InputField_OnChangeEvent(TMP_InputField_OnChangeEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_InputField_OnChangeEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_InputField_OnChangeEvent(TMP_InputField_OnChangeEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14504 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_InputField_OnChangeEvent, 0x30>, "Size mismatch!");

} // namespace TMPro
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_InputField/SelectionEvent
class CORDL_TYPE TMP_InputField_SelectionEvent : public ::UnityEngine::Events::UnityEvent_1<::StringW> {
public:
  // Declarations
  static inline ::TMPro::TMP_InputField_SelectionEvent* New_ctor();

  /// @brief Method .ctor, addr 0x47f2a44, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_InputField_SelectionEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_InputField_SelectionEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_InputField_SelectionEvent(TMP_InputField_SelectionEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_InputField_SelectionEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_InputField_SelectionEvent(TMP_InputField_SelectionEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14505 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_InputField_SelectionEvent, 0x30>, "Size mismatch!");

} // namespace TMPro
// Dependencies UnityEngine.Events.UnityEvent`3<T0, T1, T2>
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_InputField/TextSelectionEvent
class CORDL_TYPE TMP_InputField_TextSelectionEvent : public ::UnityEngine::Events::UnityEvent_3<::StringW, int32_t, int32_t> {
public:
  // Declarations
  static inline ::TMPro::TMP_InputField_TextSelectionEvent* New_ctor();

  /// @brief Method .ctor, addr 0x47f2a8c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_InputField_TextSelectionEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_InputField_TextSelectionEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_InputField_TextSelectionEvent(TMP_InputField_TextSelectionEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_InputField_TextSelectionEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_InputField_TextSelectionEvent(TMP_InputField_TextSelectionEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14506 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_InputField_TextSelectionEvent, 0x30>, "Size mismatch!");

} // namespace TMPro
// Dependencies UnityEngine.Events.UnityEvent`1<T0>, UnityEngine.TouchScreenKeyboard::Status
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_InputField/TouchScreenKeyboardEvent
class CORDL_TYPE TMP_InputField_TouchScreenKeyboardEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::TouchScreenKeyboard_Status> {
public:
  // Declarations
  static inline ::TMPro::TMP_InputField_TouchScreenKeyboardEvent* New_ctor();

  /// @brief Method .ctor, addr 0x47f2ad4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_InputField_TouchScreenKeyboardEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_InputField_TouchScreenKeyboardEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_InputField_TouchScreenKeyboardEvent(TMP_InputField_TouchScreenKeyboardEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_InputField_TouchScreenKeyboardEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_InputField_TouchScreenKeyboardEvent(TMP_InputField_TouchScreenKeyboardEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14507 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_InputField_TouchScreenKeyboardEvent, 0x30>, "Size mismatch!");

} // namespace TMPro
// Dependencies
namespace TMPro {
// Is value type: true
// CS Name: TMPro.TMP_InputField/EditState
struct CORDL_TYPE TMP_InputField_EditState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TMP_InputField_EditState_Unwrapped
  enum struct __TMP_InputField_EditState_Unwrapped : int32_t {
    __E_Continue = static_cast<int32_t>(0x0),
    __E_Finish = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TMP_InputField_EditState_Unwrapped() const noexcept {
    return static_cast<__TMP_InputField_EditState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_InputField_EditState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TMP_InputField_EditState(int32_t value__) noexcept;

  /// @brief Field Continue value: I32(0)
  static ::TMPro::TMP_InputField_EditState const Continue;

  /// @brief Field Finish value: I32(1)
  static ::TMPro::TMP_InputField_EditState const Finish;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14508 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_InputField_EditState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_InputField_EditState, 0x4>, "Size mismatch!");

} // namespace TMPro
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_InputField/<CaretBlink>d__276
class CORDL_TYPE TMP_InputField__CaretBlink_d__276 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::TMPro::TMP_InputField> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x47f2b48, size 0x104, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::TMPro::TMP_InputField__CaretBlink_d__276* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x47f2c4c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x47f2c54, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x47f2c8c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x47f2b44, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::TMPro::TMP_InputField> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::TMPro::TMP_InputField>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::TMPro::TMP_InputField> value);

  /// @brief Method .ctor, addr 0x47f2b1c, size 0x28, virtual false, abstract: false, final false
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
  constexpr TMP_InputField__CaretBlink_d__276();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_InputField__CaretBlink_d__276", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_InputField__CaretBlink_d__276(TMP_InputField__CaretBlink_d__276&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_InputField__CaretBlink_d__276", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_InputField__CaretBlink_d__276(TMP_InputField__CaretBlink_d__276 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14509 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_InputField> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_InputField__CaretBlink_d__276, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField__CaretBlink_d__276, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField__CaretBlink_d__276, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_InputField__CaretBlink_d__276, 0x28>, "Size mismatch!");

} // namespace TMPro
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_InputField/<MouseDragOutsideRect>d__294
class CORDL_TYPE TMP_InputField__MouseDragOutsideRect_d__294 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::TMPro::TMP_InputField> __4__this;

  /// @brief Field eventData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_eventData, put = __cordl_internal_set_eventData)) ::UnityEngine::EventSystems::PointerEventData* eventData;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x47f2cc0, size 0x228, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::TMPro::TMP_InputField__MouseDragOutsideRect_d__294* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x47f2ee8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x47f2ef0, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x47f2f28, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x47f2cbc, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::TMPro::TMP_InputField> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::TMPro::TMP_InputField>& __cordl_internal_get___4__this();

  constexpr ::UnityEngine::EventSystems::PointerEventData* const& __cordl_internal_get_eventData() const;

  constexpr ::UnityEngine::EventSystems::PointerEventData*& __cordl_internal_get_eventData();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::TMPro::TMP_InputField> value);

  constexpr void __cordl_internal_set_eventData(::UnityEngine::EventSystems::PointerEventData* value);

  /// @brief Method .ctor, addr 0x47f2c94, size 0x28, virtual false, abstract: false, final false
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
  constexpr TMP_InputField__MouseDragOutsideRect_d__294();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_InputField__MouseDragOutsideRect_d__294", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_InputField__MouseDragOutsideRect_d__294(TMP_InputField__MouseDragOutsideRect_d__294&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_InputField__MouseDragOutsideRect_d__294", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_InputField__MouseDragOutsideRect_d__294(TMP_InputField__MouseDragOutsideRect_d__294 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14510 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_InputField> _____4__this;

  /// @brief Field eventData, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::EventSystems::PointerEventData* ___eventData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_InputField__MouseDragOutsideRect_d__294, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField__MouseDragOutsideRect_d__294, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField__MouseDragOutsideRect_d__294, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField__MouseDragOutsideRect_d__294, ___eventData) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_InputField__MouseDragOutsideRect_d__294, 0x30>, "Size mismatch!");

} // namespace TMPro
// Dependencies TMPro.TMP_InputField::CharacterValidation, TMPro.TMP_InputField::ContentType, TMPro.TMP_InputField::InputType, TMPro.TMP_InputField::LineType, UnityEngine.Color,
// UnityEngine.EventSystems.IBeginDragHandler, UnityEngine.EventSystems.IDragHandler, UnityEngine.EventSystems.IEndDragHandler, UnityEngine.EventSystems.IEventSystemHandler,
// UnityEngine.EventSystems.IPointerClickHandler, UnityEngine.EventSystems.IScrollHandler, UnityEngine.EventSystems.ISubmitHandler, UnityEngine.EventSystems.IUpdateSelectedHandler, UnityEngine.Rect,
// UnityEngine.TouchScreenKeyboardType, UnityEngine.UI.ICanvasElement, UnityEngine.UI.ILayoutElement, UnityEngine.UI.Selectable, UnityEngine.Vector2
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_InputField
class CORDL_TYPE TMP_InputField : public ::UnityEngine::UI::Selectable {
public:
  // Declarations
  using CharacterValidation = ::TMPro::TMP_InputField_CharacterValidation;

  using ContentType = ::TMPro::TMP_InputField_ContentType;

  using EditState = ::TMPro::TMP_InputField_EditState;

  using InputType = ::TMPro::TMP_InputField_InputType;

  using LineType = ::TMPro::TMP_InputField_LineType;

  using OnChangeEvent = ::TMPro::TMP_InputField_OnChangeEvent;

  using OnValidateInput = ::TMPro::TMP_InputField_OnValidateInput;

  using SelectionEvent = ::TMPro::TMP_InputField_SelectionEvent;

  using SubmitEvent = ::TMPro::TMP_InputField_SubmitEvent;

  using TextSelectionEvent = ::TMPro::TMP_InputField_TextSelectionEvent;

  using TouchScreenKeyboardEvent = ::TMPro::TMP_InputField_TouchScreenKeyboardEvent;

  using _CaretBlink_d__276 = ::TMPro::TMP_InputField__CaretBlink_d__276;

  using _MouseDragOutsideRect_d__294 = ::TMPro::TMP_InputField__MouseDragOutsideRect_d__294;

  __declspec(property(get = get_asteriskChar, put = set_asteriskChar)) char16_t asteriskChar;

  __declspec(property(get = get_caretBlinkRate, put = set_caretBlinkRate)) float_t caretBlinkRate;

  __declspec(property(get = get_caretColor, put = set_caretColor)) ::UnityEngine::Color caretColor;

  __declspec(property(get = get_caretPosition, put = set_caretPosition)) int32_t caretPosition;

  __declspec(property(get = get_caretPositionInternal, put = set_caretPositionInternal)) int32_t caretPositionInternal;

  /// @brief Field caretRectTrans, offset 0x248, size 0x8
  __declspec(property(get = __cordl_internal_get_caretRectTrans, put = __cordl_internal_set_caretRectTrans)) ::UnityW<::UnityEngine::RectTransform> caretRectTrans;

  __declspec(property(get = get_caretSelectPositionInternal, put = set_caretSelectPositionInternal)) int32_t caretSelectPositionInternal;

  __declspec(property(get = get_caretWidth, put = set_caretWidth)) int32_t caretWidth;

  __declspec(property(get = get_characterLimit, put = set_characterLimit)) int32_t characterLimit;

  __declspec(property(get = get_characterValidation, put = set_characterValidation)) ::TMPro::TMP_InputField_CharacterValidation characterValidation;

  __declspec(property(get = get_compositionLength)) int32_t compositionLength;

  __declspec(property(get = get_compositionString)) ::StringW compositionString;

  __declspec(property(get = get_contentType, put = set_contentType)) ::TMPro::TMP_InputField_ContentType contentType;

  __declspec(property(get = get_customCaretColor, put = set_customCaretColor)) bool customCaretColor;

  __declspec(property(get = get_flexibleHeight)) float_t flexibleHeight;

  __declspec(property(get = get_flexibleWidth)) float_t flexibleWidth;

  __declspec(property(get = get_fontAsset, put = set_fontAsset)) ::UnityW<::TMPro::TMP_FontAsset> fontAsset;

  __declspec(property(get = get_hasSelection)) bool hasSelection;

  __declspec(property(get = get_inputSystem)) ::UnityW<::UnityEngine::EventSystems::BaseInput> inputSystem;

  __declspec(property(get = get_inputType, put = set_inputType)) ::TMPro::TMP_InputField_InputType inputType;

  __declspec(property(get = get_inputValidator, put = set_inputValidator)) ::UnityW<::TMPro::TMP_InputValidator> inputValidator;

  __declspec(property(get = get_isFocused)) bool isFocused;

  __declspec(property(get = get_isRichTextEditingAllowed, put = set_isRichTextEditingAllowed)) bool isRichTextEditingAllowed;

  /// @brief Field kSeparators, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kSeparators, put = setStaticF_kSeparators)) ::ArrayW<char16_t, ::Array<char16_t>*> kSeparators;

  __declspec(property(get = get_keyboardType, put = set_keyboardType)) ::UnityEngine::TouchScreenKeyboardType keyboardType;

  __declspec(property(get = get_layoutPriority)) int32_t layoutPriority;

  __declspec(property(get = get_lineLimit, put = set_lineLimit)) int32_t lineLimit;

  __declspec(property(get = get_lineType, put = set_lineType)) ::TMPro::TMP_InputField_LineType lineType;

  /// @brief Field m_AllowInput, offset 0x270, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AllowInput, put = __cordl_internal_set_m_AllowInput)) bool m_AllowInput;

  /// @brief Field m_AsteriskChar, offset 0x188, size 0x2
  __declspec(property(get = __cordl_internal_get_m_AsteriskChar, put = __cordl_internal_set_m_AsteriskChar)) char16_t m_AsteriskChar;

  /// @brief Field m_BlinkCoroutine, offset 0x278, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BlinkCoroutine, put = __cordl_internal_set_m_BlinkCoroutine)) ::UnityEngine::Coroutine* m_BlinkCoroutine;

  /// @brief Field m_BlinkStartTime, offset 0x280, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BlinkStartTime, put = __cordl_internal_set_m_BlinkStartTime)) float_t m_BlinkStartTime;

  /// @brief Field m_CachedInputRenderer, offset 0x258, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CachedInputRenderer, put = __cordl_internal_set_m_CachedInputRenderer)) ::UnityW<::UnityEngine::CanvasRenderer> m_CachedInputRenderer;

  /// @brief Field m_CachedViewportRect, offset 0x128, size 0x10
  __declspec(property(get = __cordl_internal_get_m_CachedViewportRect, put = __cordl_internal_set_m_CachedViewportRect)) ::UnityEngine::Rect m_CachedViewportRect;

  /// @brief Field m_CaretBlinkRate, offset 0x228, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CaretBlinkRate, put = __cordl_internal_set_m_CaretBlinkRate)) float_t m_CaretBlinkRate;

  /// @brief Field m_CaretColor, offset 0x1f8, size 0x10
  __declspec(property(get = __cordl_internal_get_m_CaretColor, put = __cordl_internal_set_m_CaretColor)) ::UnityEngine::Color m_CaretColor;

  /// @brief Field m_CaretPosition, offset 0x23c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CaretPosition, put = __cordl_internal_set_m_CaretPosition)) int32_t m_CaretPosition;

  /// @brief Field m_CaretSelectPosition, offset 0x240, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CaretSelectPosition, put = __cordl_internal_set_m_CaretSelectPosition)) int32_t m_CaretSelectPosition;

  /// @brief Field m_CaretVisible, offset 0x274, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CaretVisible, put = __cordl_internal_set_m_CaretVisible)) bool m_CaretVisible;

  /// @brief Field m_CaretWidth, offset 0x22c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CaretWidth, put = __cordl_internal_set_m_CaretWidth)) int32_t m_CaretWidth;

  /// @brief Field m_CharacterLimit, offset 0x1ac, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CharacterLimit, put = __cordl_internal_set_m_CharacterLimit)) int32_t m_CharacterLimit;

  /// @brief Field m_CharacterValidation, offset 0x198, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CharacterValidation, put = __cordl_internal_set_m_CharacterValidation)) ::TMPro::TMP_InputField_CharacterValidation m_CharacterValidation;

  /// @brief Field m_ContentType, offset 0x180, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ContentType, put = __cordl_internal_set_m_ContentType)) ::TMPro::TMP_InputField_ContentType m_ContentType;

  /// @brief Field m_CursorVerts, offset 0x250, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CursorVerts, put = __cordl_internal_set_m_CursorVerts)) ::ArrayW<::UnityEngine::UIVertex, ::Array<::UnityEngine::UIVertex>*> m_CursorVerts;

  /// @brief Field m_CustomCaretColor, offset 0x208, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CustomCaretColor, put = __cordl_internal_set_m_CustomCaretColor)) bool m_CustomCaretColor;

  /// @brief Field m_DoubleClickDelay, offset 0x2b4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DoubleClickDelay, put = __cordl_internal_set_m_DoubleClickDelay)) float_t m_DoubleClickDelay;

  /// @brief Field m_DragCoroutine, offset 0x288, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DragCoroutine, put = __cordl_internal_set_m_DragCoroutine)) ::UnityEngine::Coroutine* m_DragCoroutine;

  /// @brief Field m_DragPositionOutOfBounds, offset 0x273, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DragPositionOutOfBounds, put = __cordl_internal_set_m_DragPositionOutOfBounds)) bool m_DragPositionOutOfBounds;

  /// @brief Field m_GlobalFontAsset, offset 0x2c0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlobalFontAsset, put = __cordl_internal_set_m_GlobalFontAsset)) ::UnityW<::TMPro::TMP_FontAsset> m_GlobalFontAsset;

  /// @brief Field m_GlobalPointSize, offset 0x1a8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_GlobalPointSize, put = __cordl_internal_set_m_GlobalPointSize)) float_t m_GlobalPointSize;

  /// @brief Field m_HasDoneFocusTransition, offset 0x299, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasDoneFocusTransition, put = __cordl_internal_set_m_HasDoneFocusTransition)) bool m_HasDoneFocusTransition;

  /// @brief Field m_HideMobileInput, offset 0x194, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HideMobileInput, put = __cordl_internal_set_m_HideMobileInput)) bool m_HideMobileInput;

  /// @brief Field m_HideSoftKeyboard, offset 0x195, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HideSoftKeyboard, put = __cordl_internal_set_m_HideSoftKeyboard)) bool m_HideSoftKeyboard;

  /// @brief Field m_IScrollHandlerParent, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IScrollHandlerParent, put = __cordl_internal_set_m_IScrollHandlerParent)) ::UnityEngine::EventSystems::IScrollHandler* m_IScrollHandlerParent;

  /// @brief Field m_InputType, offset 0x184, size 0x4
  __declspec(property(get = __cordl_internal_get_m_InputType, put = __cordl_internal_set_m_InputType)) ::TMPro::TMP_InputField_InputType m_InputType;

  /// @brief Field m_InputValidator, offset 0x2e0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InputValidator, put = __cordl_internal_set_m_InputValidator)) ::UnityW<::TMPro::TMP_InputValidator> m_InputValidator;

  /// @brief Field m_IsCaretPositionDirty, offset 0x2ea, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsCaretPositionDirty, put = __cordl_internal_set_m_IsCaretPositionDirty)) bool m_IsCaretPositionDirty;

  /// @brief Field m_IsCompositionActive, offset 0x2b8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsCompositionActive, put = __cordl_internal_set_m_IsCompositionActive)) bool m_IsCompositionActive;

  /// @brief Field m_IsDrivenByLayoutComponents, offset 0x160, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsDrivenByLayoutComponents, put = __cordl_internal_set_m_IsDrivenByLayoutComponents)) bool m_IsDrivenByLayoutComponents;

  /// @brief Field m_IsStringPositionDirty, offset 0x2e9, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsStringPositionDirty, put = __cordl_internal_set_m_IsStringPositionDirty)) bool m_IsStringPositionDirty;

  /// @brief Field m_IsTextComponentUpdateRequired, offset 0x2aa, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsTextComponentUpdateRequired, put = __cordl_internal_set_m_IsTextComponentUpdateRequired)) bool m_IsTextComponentUpdateRequired;

  /// @brief Field m_KeyDownStartTime, offset 0x2b0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_KeyDownStartTime, put = __cordl_internal_set_m_KeyDownStartTime)) float_t m_KeyDownStartTime;

  /// @brief Field m_KeyboardType, offset 0x18c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_KeyboardType, put = __cordl_internal_set_m_KeyboardType)) ::UnityEngine::TouchScreenKeyboardType m_KeyboardType;

  /// @brief Field m_LastPosition, offset 0x260, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastPosition, put = __cordl_internal_set_m_LastPosition)) ::UnityEngine::Vector2 m_LastPosition;

  /// @brief Field m_LayoutGroup, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LayoutGroup, put = __cordl_internal_set_m_LayoutGroup)) ::UnityW<::UnityEngine::UI::LayoutGroup> m_LayoutGroup;

  /// @brief Field m_LineLimit, offset 0x2dc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LineLimit, put = __cordl_internal_set_m_LineLimit)) int32_t m_LineLimit;

  /// @brief Field m_LineType, offset 0x190, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LineType, put = __cordl_internal_set_m_LineType)) ::TMPro::TMP_InputField_LineType m_LineType;

  /// @brief Field m_Mesh, offset 0x268, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Mesh, put = __cordl_internal_set_m_Mesh)) ::UnityW<::UnityEngine::Mesh> m_Mesh;

  /// @brief Field m_OnDeselect, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnDeselect, put = __cordl_internal_set_m_OnDeselect)) ::TMPro::TMP_InputField_SelectionEvent* m_OnDeselect;

  /// @brief Field m_OnEndEdit, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnEndEdit, put = __cordl_internal_set_m_OnEndEdit)) ::TMPro::TMP_InputField_SubmitEvent* m_OnEndEdit;

  /// @brief Field m_OnEndTextSelection, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnEndTextSelection, put = __cordl_internal_set_m_OnEndTextSelection)) ::TMPro::TMP_InputField_TextSelectionEvent* m_OnEndTextSelection;

  /// @brief Field m_OnFocusSelectAll, offset 0x2c8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_OnFocusSelectAll, put = __cordl_internal_set_m_OnFocusSelectAll)) bool m_OnFocusSelectAll;

  /// @brief Field m_OnSelect, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnSelect, put = __cordl_internal_set_m_OnSelect)) ::TMPro::TMP_InputField_SelectionEvent* m_OnSelect;

  /// @brief Field m_OnSubmit, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnSubmit, put = __cordl_internal_set_m_OnSubmit)) ::TMPro::TMP_InputField_SubmitEvent* m_OnSubmit;

  /// @brief Field m_OnTextSelection, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnTextSelection, put = __cordl_internal_set_m_OnTextSelection)) ::TMPro::TMP_InputField_TextSelectionEvent* m_OnTextSelection;

  /// @brief Field m_OnTouchScreenKeyboardStatusChanged, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnTouchScreenKeyboardStatusChanged,
                      put = __cordl_internal_set_m_OnTouchScreenKeyboardStatusChanged)) ::TMPro::TMP_InputField_TouchScreenKeyboardEvent* m_OnTouchScreenKeyboardStatusChanged;

  /// @brief Field m_OnValidateInput, offset 0x1f0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnValidateInput, put = __cordl_internal_set_m_OnValidateInput)) ::TMPro::TMP_InputField_OnValidateInput* m_OnValidateInput;

  /// @brief Field m_OnValueChanged, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnValueChanged, put = __cordl_internal_set_m_OnValueChanged)) ::TMPro::TMP_InputField_OnChangeEvent* m_OnValueChanged;

  /// @brief Field m_OriginalText, offset 0x290, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OriginalText, put = __cordl_internal_set_m_OriginalText)) ::StringW m_OriginalText;

  /// @brief Field m_Placeholder, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Placeholder, put = __cordl_internal_set_m_Placeholder)) ::UnityW<::UnityEngine::UI::Graphic> m_Placeholder;

  /// @brief Field m_PointerDownClickStartTime, offset 0x2ac, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PointerDownClickStartTime, put = __cordl_internal_set_m_PointerDownClickStartTime)) float_t m_PointerDownClickStartTime;

  /// @brief Field m_PreventCallback, offset 0x2a8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_PreventCallback, put = __cordl_internal_set_m_PreventCallback)) bool m_PreventCallback;

  /// @brief Field m_PreviousIMEInsertionLine, offset 0x2bc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PreviousIMEInsertionLine, put = __cordl_internal_set_m_PreviousIMEInsertionLine)) int32_t m_PreviousIMEInsertionLine;

  /// @brief Field m_PreviouslySelectedObject, offset 0x2d0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PreviouslySelectedObject, put = __cordl_internal_set_m_PreviouslySelectedObject)) ::UnityW<::UnityEngine::GameObject> m_PreviouslySelectedObject;

  /// @brief Field m_ProcessingEvent, offset 0x2f0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProcessingEvent, put = __cordl_internal_set_m_ProcessingEvent)) ::UnityEngine::Event* m_ProcessingEvent;

  /// @brief Field m_ReadOnly, offset 0x230, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ReadOnly, put = __cordl_internal_set_m_ReadOnly)) bool m_ReadOnly;

  /// @brief Field m_RectTransform, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RectTransform, put = __cordl_internal_set_m_RectTransform)) ::UnityW<::UnityEngine::RectTransform> m_RectTransform;

  /// @brief Field m_RegexValue, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RegexValue, put = __cordl_internal_set_m_RegexValue)) ::StringW m_RegexValue;

  /// @brief Field m_ReleaseSelection, offset 0x2cc, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ReleaseSelection, put = __cordl_internal_set_m_ReleaseSelection)) bool m_ReleaseSelection;

  /// @brief Field m_ResetOnDeActivation, offset 0x2ca, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ResetOnDeActivation, put = __cordl_internal_set_m_ResetOnDeActivation)) bool m_ResetOnDeActivation;

  /// @brief Field m_RestoreOriginalTextOnEscape, offset 0x2d8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RestoreOriginalTextOnEscape, put = __cordl_internal_set_m_RestoreOriginalTextOnEscape)) bool m_RestoreOriginalTextOnEscape;

  /// @brief Field m_RichText, offset 0x231, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RichText, put = __cordl_internal_set_m_RichText)) bool m_RichText;

  /// @brief Field m_ScrollPosition, offset 0x178, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ScrollPosition, put = __cordl_internal_set_m_ScrollPosition)) float_t m_ScrollPosition;

  /// @brief Field m_ScrollSensitivity, offset 0x17c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ScrollSensitivity, put = __cordl_internal_set_m_ScrollSensitivity)) float_t m_ScrollSensitivity;

  /// @brief Field m_SelectionColor, offset 0x20c, size 0x10
  __declspec(property(get = __cordl_internal_get_m_SelectionColor, put = __cordl_internal_set_m_SelectionColor)) ::UnityEngine::Color m_SelectionColor;

  /// @brief Field m_SelectionStillActive, offset 0x2cb, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SelectionStillActive, put = __cordl_internal_set_m_SelectionStillActive)) bool m_SelectionStillActive;

  /// @brief Field m_ShouldActivateNextUpdate, offset 0x271, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ShouldActivateNextUpdate, put = __cordl_internal_set_m_ShouldActivateNextUpdate)) bool m_ShouldActivateNextUpdate;

  /// @brief Field m_ShouldUpdateIMEWindowPosition, offset 0x2b9, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ShouldUpdateIMEWindowPosition, put = __cordl_internal_set_m_ShouldUpdateIMEWindowPosition)) bool m_ShouldUpdateIMEWindowPosition;

  /// @brief Field m_SoftKeyboard, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SoftKeyboard, put = __cordl_internal_set_m_SoftKeyboard)) ::UnityEngine::TouchScreenKeyboard* m_SoftKeyboard;

  /// @brief Field m_StringPosition, offset 0x234, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StringPosition, put = __cordl_internal_set_m_StringPosition)) int32_t m_StringPosition;

  /// @brief Field m_StringSelectPosition, offset 0x238, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StringSelectPosition, put = __cordl_internal_set_m_StringSelectPosition)) int32_t m_StringSelectPosition;

  /// @brief Field m_Text, offset 0x220, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Text, put = __cordl_internal_set_m_Text)) ::StringW m_Text;

  /// @brief Field m_TextComponent, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextComponent, put = __cordl_internal_set_m_TextComponent)) ::UnityW<::TMPro::TMP_Text> m_TextComponent;

  /// @brief Field m_TextComponentRectMask, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextComponentRectMask, put = __cordl_internal_set_m_TextComponentRectMask)) ::UnityW<::UnityEngine::UI::RectMask2D> m_TextComponentRectMask;

  /// @brief Field m_TextComponentRectTransform, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextComponentRectTransform, put = __cordl_internal_set_m_TextComponentRectTransform)) ::UnityW<::UnityEngine::RectTransform>
      m_TextComponentRectTransform;

  /// @brief Field m_TextViewport, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextViewport, put = __cordl_internal_set_m_TextViewport)) ::UnityW<::UnityEngine::RectTransform> m_TextViewport;

  /// @brief Field m_TextViewportRectMask, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextViewportRectMask, put = __cordl_internal_set_m_TextViewportRectMask)) ::UnityW<::UnityEngine::UI::RectMask2D> m_TextViewportRectMask;

  /// @brief Field m_TouchKeyboardAllowsInPlaceEditing, offset 0x2a9, size 0x1
  __declspec(property(get = __cordl_internal_get_m_TouchKeyboardAllowsInPlaceEditing, put = __cordl_internal_set_m_TouchKeyboardAllowsInPlaceEditing)) bool m_TouchKeyboardAllowsInPlaceEditing;

  /// @brief Field m_UpdateDrag, offset 0x272, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UpdateDrag, put = __cordl_internal_set_m_UpdateDrag)) bool m_UpdateDrag;

  /// @brief Field m_VerticalScrollbar, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VerticalScrollbar, put = __cordl_internal_set_m_VerticalScrollbar)) ::UnityW<::UnityEngine::UI::Scrollbar> m_VerticalScrollbar;

  /// @brief Field m_VerticalScrollbarEventHandler, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VerticalScrollbarEventHandler, put = __cordl_internal_set_m_VerticalScrollbarEventHandler)) ::UnityW<::TMPro::TMP_ScrollbarEventHandler>
      m_VerticalScrollbarEventHandler;

  /// @brief Field m_WaitForSecondsRealtime, offset 0x2a0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_WaitForSecondsRealtime, put = __cordl_internal_set_m_WaitForSecondsRealtime)) ::UnityEngine::WaitForSecondsRealtime* m_WaitForSecondsRealtime;

  /// @brief Field m_WasCanceled, offset 0x298, size 0x1
  __declspec(property(get = __cordl_internal_get_m_WasCanceled, put = __cordl_internal_set_m_WasCanceled)) bool m_WasCanceled;

  /// @brief Field m_forceRectTransformAdjustment, offset 0x2eb, size 0x1
  __declspec(property(get = __cordl_internal_get_m_forceRectTransformAdjustment, put = __cordl_internal_set_m_forceRectTransformAdjustment)) bool m_forceRectTransformAdjustment;

  /// @brief Field m_isLastKeyBackspace, offset 0x2ab, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isLastKeyBackspace, put = __cordl_internal_set_m_isLastKeyBackspace)) bool m_isLastKeyBackspace;

  /// @brief Field m_isRichTextEditingAllowed, offset 0x2d9, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isRichTextEditingAllowed, put = __cordl_internal_set_m_isRichTextEditingAllowed)) bool m_isRichTextEditingAllowed;

  /// @brief Field m_isSelectAll, offset 0x2c9, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isSelectAll, put = __cordl_internal_set_m_isSelectAll)) bool m_isSelectAll;

  /// @brief Field m_isSelected, offset 0x2e8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isSelected, put = __cordl_internal_set_m_isSelected)) bool m_isSelected;

  __declspec(property(get = get_mesh)) ::UnityW<::UnityEngine::Mesh> mesh;

  __declspec(property(get = get_minHeight)) float_t minHeight;

  __declspec(property(get = get_minWidth)) float_t minWidth;

  __declspec(property(get = get_multiLine)) bool multiLine;

  __declspec(property(get = get_onDeselect, put = set_onDeselect)) ::TMPro::TMP_InputField_SelectionEvent* onDeselect;

  __declspec(property(get = get_onEndEdit, put = set_onEndEdit)) ::TMPro::TMP_InputField_SubmitEvent* onEndEdit;

  __declspec(property(get = get_onEndTextSelection, put = set_onEndTextSelection)) ::TMPro::TMP_InputField_TextSelectionEvent* onEndTextSelection;

  __declspec(property(get = get_onFocusSelectAll, put = set_onFocusSelectAll)) bool onFocusSelectAll;

  __declspec(property(get = get_onSelect, put = set_onSelect)) ::TMPro::TMP_InputField_SelectionEvent* onSelect;

  __declspec(property(get = get_onSubmit, put = set_onSubmit)) ::TMPro::TMP_InputField_SubmitEvent* onSubmit;

  __declspec(property(get = get_onTextSelection, put = set_onTextSelection)) ::TMPro::TMP_InputField_TextSelectionEvent* onTextSelection;

  __declspec(property(get = get_onTouchScreenKeyboardStatusChanged, put = set_onTouchScreenKeyboardStatusChanged)) ::TMPro::TMP_InputField_TouchScreenKeyboardEvent* onTouchScreenKeyboardStatusChanged;

  __declspec(property(get = get_onValidateInput, put = set_onValidateInput)) ::TMPro::TMP_InputField_OnValidateInput* onValidateInput;

  __declspec(property(get = get_onValueChanged, put = set_onValueChanged)) ::TMPro::TMP_InputField_OnChangeEvent* onValueChanged;

  __declspec(property(get = get_placeholder, put = set_placeholder)) ::UnityW<::UnityEngine::UI::Graphic> placeholder;

  __declspec(property(get = get_pointSize, put = set_pointSize)) float_t pointSize;

  __declspec(property(get = get_preferredHeight)) float_t preferredHeight;

  __declspec(property(get = get_preferredWidth)) float_t preferredWidth;

  __declspec(property(get = get_readOnly, put = set_readOnly)) bool readOnly;

  __declspec(property(get = get_resetOnDeActivation, put = set_resetOnDeActivation)) bool resetOnDeActivation;

  __declspec(property(get = get_restoreOriginalTextOnEscape, put = set_restoreOriginalTextOnEscape)) bool restoreOriginalTextOnEscape;

  __declspec(property(get = get_richText, put = set_richText)) bool richText;

  __declspec(property(get = get_scrollSensitivity, put = set_scrollSensitivity)) float_t scrollSensitivity;

  __declspec(property(get = get_selectionAnchorPosition, put = set_selectionAnchorPosition)) int32_t selectionAnchorPosition;

  __declspec(property(get = get_selectionColor, put = set_selectionColor)) ::UnityEngine::Color selectionColor;

  __declspec(property(get = get_selectionFocusPosition, put = set_selectionFocusPosition)) int32_t selectionFocusPosition;

  __declspec(property(get = get_selectionStringAnchorPosition, put = set_selectionStringAnchorPosition)) int32_t selectionStringAnchorPosition;

  __declspec(property(get = get_selectionStringFocusPosition, put = set_selectionStringFocusPosition)) int32_t selectionStringFocusPosition;

  __declspec(property(get = get_shouldHideMobileInput, put = set_shouldHideMobileInput)) bool shouldHideMobileInput;

  __declspec(property(get = get_shouldHideSoftKeyboard, put = set_shouldHideSoftKeyboard)) bool shouldHideSoftKeyboard;

  __declspec(property(get = get_stringPosition, put = set_stringPosition)) int32_t stringPosition;

  __declspec(property(get = get_stringPositionInternal, put = set_stringPositionInternal)) int32_t stringPositionInternal;

  __declspec(property(get = get_stringSelectPositionInternal, put = set_stringSelectPositionInternal)) int32_t stringSelectPositionInternal;

  __declspec(property(get = get_text, put = set_text)) ::StringW text;

  __declspec(property(get = get_textComponent, put = set_textComponent)) ::UnityW<::TMPro::TMP_Text> textComponent;

  __declspec(property(get = get_textViewport, put = set_textViewport)) ::UnityW<::UnityEngine::RectTransform> textViewport;

  __declspec(property(get = get_verticalScrollbar, put = set_verticalScrollbar)) ::UnityW<::UnityEngine::UI::Scrollbar> verticalScrollbar;

  __declspec(property(get = get_wasCanceled)) bool wasCanceled;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IBeginDragHandler"
  constexpr operator ::UnityEngine::EventSystems::IBeginDragHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IDragHandler"
  constexpr operator ::UnityEngine::EventSystems::IDragHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEndDragHandler"
  constexpr operator ::UnityEngine::EventSystems::IEndDragHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IScrollHandler"
  constexpr operator ::UnityEngine::EventSystems::IScrollHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::ISubmitHandler"
  constexpr operator ::UnityEngine::EventSystems::ISubmitHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IUpdateSelectedHandler"
  constexpr operator ::UnityEngine::EventSystems::IUpdateSelectedHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UI::ICanvasElement"
  constexpr operator ::UnityEngine::UI::ICanvasElement*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UI::ILayoutElement"
  constexpr operator ::UnityEngine::UI::ILayoutElement*() noexcept;

  /// @brief Method ActivateInputField, addr 0x47dc28c, size 0x114, virtual false, abstract: false, final false
  inline void ActivateInputField();

  /// @brief Method ActivateInputFieldInternal, addr 0x47d6228, size 0x3dc, virtual false, abstract: false, final false
  inline void ActivateInputFieldInternal();

  /// @brief Method AdjustRectTransformRelativeToViewport, addr 0x47dbe0c, size 0x480, virtual false, abstract: false, final false
  inline void AdjustRectTransformRelativeToViewport(::UnityEngine::Vector2 startPosition, float_t height, bool isCharVisible);

  /// @brief Method AdjustTextPositionRelativeToViewport, addr 0x47d92f4, size 0x198, virtual false, abstract: false, final false
  inline void AdjustTextPositionRelativeToViewport(float_t relativePosition);

  /// @brief Method Append, addr 0x47da560, size 0xb0, virtual true, abstract: false, final false
  inline void Append(::StringW input);

  /// @brief Method Append, addr 0x47da610, size 0x23c, virtual true, abstract: false, final false
  inline void Append(char16_t input);

  /// @brief Method AssignPositioningIfNeeded, addr 0x47d45a4, size 0x500, virtual false, abstract: false, final false
  inline void AssignPositioningIfNeeded();

  /// @brief Method Backspace, addr 0x47d7e20, size 0x388, virtual false, abstract: false, final false
  inline void Backspace();

  /// @brief Method CalculateLayoutInputHorizontal, addr 0x47dc4a4, size 0x4, virtual true, abstract: false, final false
  inline void CalculateLayoutInputHorizontal();

  /// @brief Method CalculateLayoutInputVertical, addr 0x47dc4a8, size 0x4, virtual true, abstract: false, final false
  inline void CalculateLayoutInputVertical();

  /// @brief Method CaretBlink, addr 0x47d5204, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* CaretBlink();

  /// @brief Method ClampCaretPos, addr 0x47d3ae0, size 0x44, virtual false, abstract: false, final false
  inline void ClampCaretPos(::ByRef<int32_t> pos);

  /// @brief Method ClampStringPos, addr 0x47d3aa8, size 0x38, virtual false, abstract: false, final false
  inline void ClampStringPos(::ByRef<int32_t> pos);

  /// @brief Method CreateCursorVerts, addr 0x47dbcbc, size 0x150, virtual false, abstract: false, final false
  inline void CreateCursorVerts();

  /// @brief Method DeactivateInputField, addr 0x47d4dc8, size 0x1bc, virtual false, abstract: false, final false
  inline void DeactivateInputField(bool clearSelection);

  /// @brief Method Delete, addr 0x47d848c, size 0x198, virtual false, abstract: false, final false
  inline void Delete();

  /// @brief Method DeleteKey, addr 0x47d81a8, size 0x224, virtual false, abstract: false, final false
  inline void DeleteKey();

  /// @brief Method DoStateTransition, addr 0x47dc478, size 0x2c, virtual true, abstract: false, final false
  inline void DoStateTransition(::UnityEngine::UI::Selectable_SelectionState state, bool instant);

  /// @brief Method EnforceContentType, addr 0x47d34a4, size 0xbc, virtual false, abstract: false, final false
  inline void EnforceContentType();

  /// @brief Method FindNextWordBegin, addr 0x47d948c, size 0xd4, virtual false, abstract: false, final false
  inline int32_t FindNextWordBegin();

  /// @brief Method FindPrevWordBegin, addr 0x47d9560, size 0xb8, virtual false, abstract: false, final false
  inline int32_t FindPrevWordBegin();

  /// @brief Method ForceLabelUpdate, addr 0x47daccc, size 0x4, virtual false, abstract: false, final false
  inline void ForceLabelUpdate();

  /// @brief Method GenerateCaret, addr 0x47db104, size 0x5e4, virtual false, abstract: false, final false
  inline void GenerateCaret(::UnityEngine::UI::VertexHelper* vbo, ::UnityEngine::Vector2 roundingOffset);

  /// @brief Method GenerateHightlight, addr 0x47db6e8, size 0x5d4, virtual false, abstract: false, final false
  inline void GenerateHightlight(::UnityEngine::UI::VertexHelper* vbo, ::UnityEngine::Vector2 roundingOffset);

  /// @brief Method GetCaretPositionFromStringIndex, addr 0x47d50bc, size 0x70, virtual false, abstract: false, final false
  inline int32_t GetCaretPositionFromStringIndex(int32_t stringIndex);

  /// @brief Method GetMaxCaretPositionFromStringIndex, addr 0x47dac5c, size 0x70, virtual false, abstract: false, final false
  inline int32_t GetMaxCaretPositionFromStringIndex(int32_t stringIndex);

  /// @brief Method GetMinCaretPositionFromStringIndex, addr 0x47dabe8, size 0x74, virtual false, abstract: false, final false
  inline int32_t GetMinCaretPositionFromStringIndex(int32_t stringIndex);

  /// @brief Method GetScrollPositionRelativeToViewport, addr 0x47d9214, size 0xe0, virtual false, abstract: false, final false
  inline float_t GetScrollPositionRelativeToViewport();

  /// @brief Method GetSelectedString, addr 0x47d83cc, size 0xc0, virtual false, abstract: false, final false
  inline ::StringW GetSelectedString();

  /// @brief Method GetStringIndexFromCaretPosition, addr 0x47d5424, size 0x60, virtual false, abstract: false, final false
  inline int32_t GetStringIndexFromCaretPosition(int32_t caretPosition);

  /// @brief Method GraphicUpdateComplete, addr 0x47dad98, size 0x4, virtual true, abstract: false, final false
  inline void GraphicUpdateComplete();

  /// @brief Method InPlaceEditing, addr 0x47d5978, size 0x104, virtual false, abstract: false, final false
  inline bool InPlaceEditing();

  /// @brief Method Insert, addr 0x47da84c, size 0x110, virtual false, abstract: false, final false
  inline void Insert(char16_t c);

  /// @brief Method IsValidChar, addr 0x47d8e3c, size 0x20, virtual true, abstract: false, final false
  inline bool IsValidChar(char16_t c);

  /// @brief Method KeyPressed, addr 0x47d79fc, size 0x424, virtual false, abstract: false, final false
  inline ::TMPro::TMP_InputField_EditState KeyPressed(::UnityEngine::Event* evt);

  /// @brief Method LateUpdate, addr 0x47d5bc4, size 0x664, virtual true, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method LayoutComplete, addr 0x47dad94, size 0x4, virtual true, abstract: false, final false
  inline void LayoutComplete();

  /// @brief Method LineDownCharacterPosition, addr 0x47d9768, size 0x14c, virtual false, abstract: false, final false
  inline int32_t LineDownCharacterPosition(int32_t originalPos, bool goToLastChar);

  /// @brief Method LineUpCharacterPosition, addr 0x47d9618, size 0x150, virtual false, abstract: false, final false
  inline int32_t LineUpCharacterPosition(int32_t originalPos, bool goToFirstChar);

  /// @brief Method MarkGeometryAsDirty, addr 0x47d29a8, size 0x58, virtual false, abstract: false, final false
  inline void MarkGeometryAsDirty();

  /// @brief Method MayDrag, addr 0x47d6ea8, size 0xd8, virtual false, abstract: false, final false
  inline bool MayDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method MouseDragOutsideRect, addr 0x47d7234, size 0x74, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* MouseDragOutsideRect(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method MoveDown, addr 0x47d8e18, size 0xc, virtual false, abstract: false, final false
  inline void MoveDown(bool shift);

  /// @brief Method MoveDown, addr 0x47d9c84, size 0x1c4, virtual false, abstract: false, final false
  inline void MoveDown(bool shift, bool goToLastChar);

  /// @brief Method MoveLeft, addr 0x47d8660, size 0x3b0, virtual false, abstract: false, final false
  inline void MoveLeft(bool shift, bool ctrl);

  /// @brief Method MovePageDown, addr 0x47d8e30, size 0xc, virtual false, abstract: false, final false
  inline void MovePageDown(bool shift);

  /// @brief Method MovePageDown, addr 0x47da2a4, size 0x2bc, virtual false, abstract: false, final false
  inline void MovePageDown(bool shift, bool goToLastChar);

  /// @brief Method MovePageUp, addr 0x47d8e24, size 0xc, virtual false, abstract: false, final false
  inline void MovePageUp(bool shift);

  /// @brief Method MovePageUp, addr 0x47d9ff8, size 0x2ac, virtual false, abstract: false, final false
  inline void MovePageUp(bool shift, bool goToFirstChar);

  /// @brief Method MoveRight, addr 0x47d8a10, size 0x3fc, virtual false, abstract: false, final false
  inline void MoveRight(bool shift, bool ctrl);

  /// @brief Method MoveTextEnd, addr 0x47d52ec, size 0x138, virtual false, abstract: false, final false
  inline void MoveTextEnd(bool shift);

  /// @brief Method MoveTextStart, addr 0x47d5484, size 0x13c, virtual false, abstract: false, final false
  inline void MoveTextStart(bool shift);

  /// @brief Method MoveToEndOfLine, addr 0x47d55c0, size 0x180, virtual false, abstract: false, final false
  inline void MoveToEndOfLine(bool shift, bool ctrl);

  /// @brief Method MoveToStartOfLine, addr 0x47d5740, size 0x190, virtual false, abstract: false, final false
  inline void MoveToStartOfLine(bool shift, bool ctrl);

  /// @brief Method MoveUp, addr 0x47d8e0c, size 0xc, virtual false, abstract: false, final false
  inline void MoveUp(bool shift);

  /// @brief Method MoveUp, addr 0x47d9e48, size 0x1b0, virtual false, abstract: false, final false
  inline void MoveUp(bool shift, bool goToFirstChar);

  static inline ::TMPro::TMP_InputField* New_ctor();

  /// @brief Method ON_TEXT_CHANGED, addr 0x47d4f84, size 0x138, virtual false, abstract: false, final false
  inline void ON_TEXT_CHANGED(::UnityEngine::Object* obj);

  /// @brief Method OnBeginDrag, addr 0x47d6f80, size 0x20, virtual true, abstract: false, final false
  inline void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnControlClick, addr 0x47dc3e8, size 0x4, virtual false, abstract: false, final false
  inline void OnControlClick();

  /// @brief Method OnDeselect, addr 0x47dc3ec, size 0x38, virtual true, abstract: false, final false
  inline void OnDeselect(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnDisable, addr 0x47d4aa8, size 0x320, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnDrag, addr 0x47d6fa0, size 0x294, virtual true, abstract: false, final false
  inline void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnEnable, addr 0x47d3e70, size 0x734, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnEndDrag, addr 0x47d72a8, size 0x1c, virtual true, abstract: false, final false
  inline void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnFillVBO, addr 0x47dad9c, size 0x368, virtual false, abstract: false, final false
  inline void OnFillVBO(::UnityEngine::Mesh* vbo);

  /// @brief Method OnFocus, addr 0x47d52a4, size 0x10, virtual false, abstract: false, final false
  inline void OnFocus();

  /// @brief Method OnPointerClick, addr 0x47dc3c4, size 0x24, virtual true, abstract: false, final false
  inline void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerDown, addr 0x47d72c4, size 0x738, virtual true, abstract: false, final false
  inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnScroll, addr 0x47d905c, size 0x1b8, virtual true, abstract: false, final false
  inline void OnScroll(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnScrollbarValueChange, addr 0x47dabac, size 0x3c, virtual false, abstract: false, final false
  inline void OnScrollbarValueChange(float_t value);

  /// @brief Method OnSelect, addr 0x47dc3a0, size 0x24, virtual true, abstract: false, final false
  inline void OnSelect(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnSubmit, addr 0x47dc424, size 0x54, virtual true, abstract: false, final false
  inline void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnUpdateSelected, addr 0x47d8e60, size 0x1a0, virtual true, abstract: false, final false
  inline void OnUpdateSelected(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method PageDownCharacterPosition, addr 0x47d9a98, size 0x1ec, virtual false, abstract: false, final false
  inline int32_t PageDownCharacterPosition(int32_t originalPos, bool goToLastChar);

  /// @brief Method PageUpCharacterPosition, addr 0x47d98b4, size 0x1e4, virtual false, abstract: false, final false
  inline int32_t PageUpCharacterPosition(int32_t originalPos, bool goToFirstChar);

  /// @brief Method ProcessEvent, addr 0x47d8e5c, size 0x4, virtual false, abstract: false, final false
  inline void ProcessEvent(::UnityEngine::Event* e);

  /// @brief Method Rebuild, addr 0x47dacd0, size 0x10, virtual true, abstract: false, final false
  inline void Rebuild(::UnityEngine::UI::CanvasUpdate update);

  /// @brief Method ReleaseSelection, addr 0x47d6604, size 0x2c, virtual false, abstract: false, final false
  inline void ReleaseSelection();

  /// @brief Method SelectAll, addr 0x47d52b4, size 0x38, virtual false, abstract: false, final false
  inline void SelectAll();

  /// @brief Method SendOnEndEdit, addr 0x47da95c, size 0x5c, virtual false, abstract: false, final false
  inline void SendOnEndEdit();

  /// @brief Method SendOnEndTextSelection, addr 0x47dab18, size 0x94, virtual false, abstract: false, final false
  inline void SendOnEndTextSelection();

  /// @brief Method SendOnFocus, addr 0x47da9b8, size 0x5c, virtual false, abstract: false, final false
  inline void SendOnFocus();

  /// @brief Method SendOnFocusLost, addr 0x47daa14, size 0x5c, virtual false, abstract: false, final false
  inline void SendOnFocusLost();

  /// @brief Method SendOnSubmit, addr 0x47d9000, size 0x5c, virtual false, abstract: false, final false
  inline void SendOnSubmit();

  /// @brief Method SendOnTextSelection, addr 0x47daa70, size 0xa8, virtual false, abstract: false, final false
  inline void SendOnTextSelection();

  /// @brief Method SendOnValueChanged, addr 0x47d27f0, size 0x5c, virtual false, abstract: false, final false
  inline void SendOnValueChanged();

  /// @brief Method SendOnValueChangedAndUpdateLabel, addr 0x47d6e90, size 0x18, virtual false, abstract: false, final false
  inline void SendOnValueChangedAndUpdateLabel();

  /// @brief Method SendTouchScreenKeyboardStatusChanged, addr 0x47d6630, size 0x74, virtual false, abstract: false, final false
  inline void SendTouchScreenKeyboardStatusChanged();

  /// @brief Method SetCaretActive, addr 0x47d28d8, size 0x54, virtual false, abstract: false, final false
  inline void SetCaretActive();

  /// @brief Method SetCaretVisible, addr 0x47d526c, size 0x38, virtual false, abstract: false, final false
  inline void SetCaretVisible();

  /// @brief Method SetGlobalFontAsset, addr 0x47d32f8, size 0xe0, virtual false, abstract: false, final false
  inline void SetGlobalFontAsset(::TMPro::TMP_FontAsset* fontAsset);

  /// @brief Method SetGlobalPointSize, addr 0x47d3208, size 0xe8, virtual false, abstract: false, final false
  inline void SetGlobalPointSize(float_t pointSize);

  /// @brief Method SetText, addr 0x47d2230, size 0x134, virtual false, abstract: false, final false
  inline void SetText(::StringW value, bool sendCallback);

  /// @brief Method SetTextComponentRichTextMode, addr 0x47d3988, size 0x88, virtual false, abstract: false, final false
  inline void SetTextComponentRichTextMode();

  /// @brief Method SetTextComponentWrapMode, addr 0x47d1d00, size 0x94, virtual false, abstract: false, final false
  inline void SetTextComponentWrapMode();

  /// @brief Method SetTextWithoutNotify, addr 0x47d2364, size 0x8, virtual false, abstract: false, final false
  inline void SetTextWithoutNotify(::StringW input);

  /// @brief Method SetToCustom, addr 0x47d378c, size 0x18, virtual false, abstract: false, final false
  inline void SetToCustom();

  /// @brief Method SetToCustom, addr 0x47d3948, size 0x18, virtual false, abstract: false, final false
  inline void SetToCustom(::TMPro::TMP_InputField_CharacterValidation characterValidation);

  /// @brief Method SetToCustomIfContentTypeIsNot, addr 0x47d3628, size 0x64, virtual false, abstract: false, final false
  inline void SetToCustomIfContentTypeIsNot(::ArrayW<::TMPro::TMP_InputField_ContentType, ::Array<::TMPro::TMP_InputField_ContentType>*> allowedContentTypes);

  /// @brief Method UnityEngine.UI.ICanvasElement.get_transform, addr 0x47dc7c8, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Transform> UnityEngine_UI_ICanvasElement_get_transform();

  /// @brief Method UpdateGeometry, addr 0x47dace0, size 0xb4, virtual false, abstract: false, final false
  inline void UpdateGeometry();

  /// @brief Method UpdateLabel, addr 0x47d236c, size 0x484, virtual false, abstract: false, final false
  inline void UpdateLabel();

  /// @brief Method UpdateMaskRegions, addr 0x47d4aa4, size 0x4, virtual false, abstract: false, final false
  inline void UpdateMaskRegions();

  /// @brief Method UpdateScrollbar, addr 0x47d512c, size 0xd8, virtual false, abstract: false, final false
  inline void UpdateScrollbar();

  /// @brief Method UpdateStringPositionFromKeyboard, addr 0x47d5a7c, size 0x148, virtual false, abstract: false, final false
  inline void UpdateStringPositionFromKeyboard();

  /// @brief Method UpdateTouchKeyboardFromEditChanges, addr 0x47d8624, size 0x3c, virtual false, abstract: false, final false
  inline void UpdateTouchKeyboardFromEditChanges();

  /// @brief Method Validate, addr 0x47d66a4, size 0x7ec, virtual false, abstract: false, final false
  inline char16_t Validate(::StringW text, int32_t pos, char16_t ch);

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_caretRectTrans() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_caretRectTrans();

  constexpr bool const& __cordl_internal_get_m_AllowInput() const;

  constexpr bool& __cordl_internal_get_m_AllowInput();

  constexpr char16_t const& __cordl_internal_get_m_AsteriskChar() const;

  constexpr char16_t& __cordl_internal_get_m_AsteriskChar();

  constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_m_BlinkCoroutine() const;

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_m_BlinkCoroutine();

  constexpr float_t const& __cordl_internal_get_m_BlinkStartTime() const;

  constexpr float_t& __cordl_internal_get_m_BlinkStartTime();

  constexpr ::UnityW<::UnityEngine::CanvasRenderer> const& __cordl_internal_get_m_CachedInputRenderer() const;

  constexpr ::UnityW<::UnityEngine::CanvasRenderer>& __cordl_internal_get_m_CachedInputRenderer();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_CachedViewportRect() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_m_CachedViewportRect();

  constexpr float_t const& __cordl_internal_get_m_CaretBlinkRate() const;

  constexpr float_t& __cordl_internal_get_m_CaretBlinkRate();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_m_CaretColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_m_CaretColor();

  constexpr int32_t const& __cordl_internal_get_m_CaretPosition() const;

  constexpr int32_t& __cordl_internal_get_m_CaretPosition();

  constexpr int32_t const& __cordl_internal_get_m_CaretSelectPosition() const;

  constexpr int32_t& __cordl_internal_get_m_CaretSelectPosition();

  constexpr bool const& __cordl_internal_get_m_CaretVisible() const;

  constexpr bool& __cordl_internal_get_m_CaretVisible();

  constexpr int32_t const& __cordl_internal_get_m_CaretWidth() const;

  constexpr int32_t& __cordl_internal_get_m_CaretWidth();

  constexpr int32_t const& __cordl_internal_get_m_CharacterLimit() const;

  constexpr int32_t& __cordl_internal_get_m_CharacterLimit();

  constexpr ::TMPro::TMP_InputField_CharacterValidation const& __cordl_internal_get_m_CharacterValidation() const;

  constexpr ::TMPro::TMP_InputField_CharacterValidation& __cordl_internal_get_m_CharacterValidation();

  constexpr ::TMPro::TMP_InputField_ContentType const& __cordl_internal_get_m_ContentType() const;

  constexpr ::TMPro::TMP_InputField_ContentType& __cordl_internal_get_m_ContentType();

  constexpr ::ArrayW<::UnityEngine::UIVertex, ::Array<::UnityEngine::UIVertex>*> const& __cordl_internal_get_m_CursorVerts() const;

  constexpr ::ArrayW<::UnityEngine::UIVertex, ::Array<::UnityEngine::UIVertex>*>& __cordl_internal_get_m_CursorVerts();

  constexpr bool const& __cordl_internal_get_m_CustomCaretColor() const;

  constexpr bool& __cordl_internal_get_m_CustomCaretColor();

  constexpr float_t const& __cordl_internal_get_m_DoubleClickDelay() const;

  constexpr float_t& __cordl_internal_get_m_DoubleClickDelay();

  constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_m_DragCoroutine() const;

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_m_DragCoroutine();

  constexpr bool const& __cordl_internal_get_m_DragPositionOutOfBounds() const;

  constexpr bool& __cordl_internal_get_m_DragPositionOutOfBounds();

  constexpr ::UnityW<::TMPro::TMP_FontAsset> const& __cordl_internal_get_m_GlobalFontAsset() const;

  constexpr ::UnityW<::TMPro::TMP_FontAsset>& __cordl_internal_get_m_GlobalFontAsset();

  constexpr float_t const& __cordl_internal_get_m_GlobalPointSize() const;

  constexpr float_t& __cordl_internal_get_m_GlobalPointSize();

  constexpr bool const& __cordl_internal_get_m_HasDoneFocusTransition() const;

  constexpr bool& __cordl_internal_get_m_HasDoneFocusTransition();

  constexpr bool const& __cordl_internal_get_m_HideMobileInput() const;

  constexpr bool& __cordl_internal_get_m_HideMobileInput();

  constexpr bool const& __cordl_internal_get_m_HideSoftKeyboard() const;

  constexpr bool& __cordl_internal_get_m_HideSoftKeyboard();

  constexpr ::UnityEngine::EventSystems::IScrollHandler* const& __cordl_internal_get_m_IScrollHandlerParent() const;

  constexpr ::UnityEngine::EventSystems::IScrollHandler*& __cordl_internal_get_m_IScrollHandlerParent();

  constexpr ::TMPro::TMP_InputField_InputType const& __cordl_internal_get_m_InputType() const;

  constexpr ::TMPro::TMP_InputField_InputType& __cordl_internal_get_m_InputType();

  constexpr ::UnityW<::TMPro::TMP_InputValidator> const& __cordl_internal_get_m_InputValidator() const;

  constexpr ::UnityW<::TMPro::TMP_InputValidator>& __cordl_internal_get_m_InputValidator();

  constexpr bool const& __cordl_internal_get_m_IsCaretPositionDirty() const;

  constexpr bool& __cordl_internal_get_m_IsCaretPositionDirty();

  constexpr bool const& __cordl_internal_get_m_IsCompositionActive() const;

  constexpr bool& __cordl_internal_get_m_IsCompositionActive();

  constexpr bool const& __cordl_internal_get_m_IsDrivenByLayoutComponents() const;

  constexpr bool& __cordl_internal_get_m_IsDrivenByLayoutComponents();

  constexpr bool const& __cordl_internal_get_m_IsStringPositionDirty() const;

  constexpr bool& __cordl_internal_get_m_IsStringPositionDirty();

  constexpr bool const& __cordl_internal_get_m_IsTextComponentUpdateRequired() const;

  constexpr bool& __cordl_internal_get_m_IsTextComponentUpdateRequired();

  constexpr float_t const& __cordl_internal_get_m_KeyDownStartTime() const;

  constexpr float_t& __cordl_internal_get_m_KeyDownStartTime();

  constexpr ::UnityEngine::TouchScreenKeyboardType const& __cordl_internal_get_m_KeyboardType() const;

  constexpr ::UnityEngine::TouchScreenKeyboardType& __cordl_internal_get_m_KeyboardType();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_LastPosition() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_LastPosition();

  constexpr ::UnityW<::UnityEngine::UI::LayoutGroup> const& __cordl_internal_get_m_LayoutGroup() const;

  constexpr ::UnityW<::UnityEngine::UI::LayoutGroup>& __cordl_internal_get_m_LayoutGroup();

  constexpr int32_t const& __cordl_internal_get_m_LineLimit() const;

  constexpr int32_t& __cordl_internal_get_m_LineLimit();

  constexpr ::TMPro::TMP_InputField_LineType const& __cordl_internal_get_m_LineType() const;

  constexpr ::TMPro::TMP_InputField_LineType& __cordl_internal_get_m_LineType();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_Mesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_Mesh();

  constexpr ::TMPro::TMP_InputField_SelectionEvent* const& __cordl_internal_get_m_OnDeselect() const;

  constexpr ::TMPro::TMP_InputField_SelectionEvent*& __cordl_internal_get_m_OnDeselect();

  constexpr ::TMPro::TMP_InputField_SubmitEvent* const& __cordl_internal_get_m_OnEndEdit() const;

  constexpr ::TMPro::TMP_InputField_SubmitEvent*& __cordl_internal_get_m_OnEndEdit();

  constexpr ::TMPro::TMP_InputField_TextSelectionEvent* const& __cordl_internal_get_m_OnEndTextSelection() const;

  constexpr ::TMPro::TMP_InputField_TextSelectionEvent*& __cordl_internal_get_m_OnEndTextSelection();

  constexpr bool const& __cordl_internal_get_m_OnFocusSelectAll() const;

  constexpr bool& __cordl_internal_get_m_OnFocusSelectAll();

  constexpr ::TMPro::TMP_InputField_SelectionEvent* const& __cordl_internal_get_m_OnSelect() const;

  constexpr ::TMPro::TMP_InputField_SelectionEvent*& __cordl_internal_get_m_OnSelect();

  constexpr ::TMPro::TMP_InputField_SubmitEvent* const& __cordl_internal_get_m_OnSubmit() const;

  constexpr ::TMPro::TMP_InputField_SubmitEvent*& __cordl_internal_get_m_OnSubmit();

  constexpr ::TMPro::TMP_InputField_TextSelectionEvent* const& __cordl_internal_get_m_OnTextSelection() const;

  constexpr ::TMPro::TMP_InputField_TextSelectionEvent*& __cordl_internal_get_m_OnTextSelection();

  constexpr ::TMPro::TMP_InputField_TouchScreenKeyboardEvent* const& __cordl_internal_get_m_OnTouchScreenKeyboardStatusChanged() const;

  constexpr ::TMPro::TMP_InputField_TouchScreenKeyboardEvent*& __cordl_internal_get_m_OnTouchScreenKeyboardStatusChanged();

  constexpr ::TMPro::TMP_InputField_OnValidateInput* const& __cordl_internal_get_m_OnValidateInput() const;

  constexpr ::TMPro::TMP_InputField_OnValidateInput*& __cordl_internal_get_m_OnValidateInput();

  constexpr ::TMPro::TMP_InputField_OnChangeEvent* const& __cordl_internal_get_m_OnValueChanged() const;

  constexpr ::TMPro::TMP_InputField_OnChangeEvent*& __cordl_internal_get_m_OnValueChanged();

  constexpr ::StringW const& __cordl_internal_get_m_OriginalText() const;

  constexpr ::StringW& __cordl_internal_get_m_OriginalText();

  constexpr ::UnityW<::UnityEngine::UI::Graphic> const& __cordl_internal_get_m_Placeholder() const;

  constexpr ::UnityW<::UnityEngine::UI::Graphic>& __cordl_internal_get_m_Placeholder();

  constexpr float_t const& __cordl_internal_get_m_PointerDownClickStartTime() const;

  constexpr float_t& __cordl_internal_get_m_PointerDownClickStartTime();

  constexpr bool const& __cordl_internal_get_m_PreventCallback() const;

  constexpr bool& __cordl_internal_get_m_PreventCallback();

  constexpr int32_t const& __cordl_internal_get_m_PreviousIMEInsertionLine() const;

  constexpr int32_t& __cordl_internal_get_m_PreviousIMEInsertionLine();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_PreviouslySelectedObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_PreviouslySelectedObject();

  constexpr ::UnityEngine::Event* const& __cordl_internal_get_m_ProcessingEvent() const;

  constexpr ::UnityEngine::Event*& __cordl_internal_get_m_ProcessingEvent();

  constexpr bool const& __cordl_internal_get_m_ReadOnly() const;

  constexpr bool& __cordl_internal_get_m_ReadOnly();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_RectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_RectTransform();

  constexpr ::StringW const& __cordl_internal_get_m_RegexValue() const;

  constexpr ::StringW& __cordl_internal_get_m_RegexValue();

  constexpr bool const& __cordl_internal_get_m_ReleaseSelection() const;

  constexpr bool& __cordl_internal_get_m_ReleaseSelection();

  constexpr bool const& __cordl_internal_get_m_ResetOnDeActivation() const;

  constexpr bool& __cordl_internal_get_m_ResetOnDeActivation();

  constexpr bool const& __cordl_internal_get_m_RestoreOriginalTextOnEscape() const;

  constexpr bool& __cordl_internal_get_m_RestoreOriginalTextOnEscape();

  constexpr bool const& __cordl_internal_get_m_RichText() const;

  constexpr bool& __cordl_internal_get_m_RichText();

  constexpr float_t const& __cordl_internal_get_m_ScrollPosition() const;

  constexpr float_t& __cordl_internal_get_m_ScrollPosition();

  constexpr float_t const& __cordl_internal_get_m_ScrollSensitivity() const;

  constexpr float_t& __cordl_internal_get_m_ScrollSensitivity();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_m_SelectionColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_m_SelectionColor();

  constexpr bool const& __cordl_internal_get_m_SelectionStillActive() const;

  constexpr bool& __cordl_internal_get_m_SelectionStillActive();

  constexpr bool const& __cordl_internal_get_m_ShouldActivateNextUpdate() const;

  constexpr bool& __cordl_internal_get_m_ShouldActivateNextUpdate();

  constexpr bool const& __cordl_internal_get_m_ShouldUpdateIMEWindowPosition() const;

  constexpr bool& __cordl_internal_get_m_ShouldUpdateIMEWindowPosition();

  constexpr ::UnityEngine::TouchScreenKeyboard* const& __cordl_internal_get_m_SoftKeyboard() const;

  constexpr ::UnityEngine::TouchScreenKeyboard*& __cordl_internal_get_m_SoftKeyboard();

  constexpr int32_t const& __cordl_internal_get_m_StringPosition() const;

  constexpr int32_t& __cordl_internal_get_m_StringPosition();

  constexpr int32_t const& __cordl_internal_get_m_StringSelectPosition() const;

  constexpr int32_t& __cordl_internal_get_m_StringSelectPosition();

  constexpr ::StringW const& __cordl_internal_get_m_Text() const;

  constexpr ::StringW& __cordl_internal_get_m_Text();

  constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_m_TextComponent() const;

  constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_m_TextComponent();

  constexpr ::UnityW<::UnityEngine::UI::RectMask2D> const& __cordl_internal_get_m_TextComponentRectMask() const;

  constexpr ::UnityW<::UnityEngine::UI::RectMask2D>& __cordl_internal_get_m_TextComponentRectMask();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_TextComponentRectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_TextComponentRectTransform();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_TextViewport() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_TextViewport();

  constexpr ::UnityW<::UnityEngine::UI::RectMask2D> const& __cordl_internal_get_m_TextViewportRectMask() const;

  constexpr ::UnityW<::UnityEngine::UI::RectMask2D>& __cordl_internal_get_m_TextViewportRectMask();

  constexpr bool const& __cordl_internal_get_m_TouchKeyboardAllowsInPlaceEditing() const;

  constexpr bool& __cordl_internal_get_m_TouchKeyboardAllowsInPlaceEditing();

  constexpr bool const& __cordl_internal_get_m_UpdateDrag() const;

  constexpr bool& __cordl_internal_get_m_UpdateDrag();

  constexpr ::UnityW<::UnityEngine::UI::Scrollbar> const& __cordl_internal_get_m_VerticalScrollbar() const;

  constexpr ::UnityW<::UnityEngine::UI::Scrollbar>& __cordl_internal_get_m_VerticalScrollbar();

  constexpr ::UnityW<::TMPro::TMP_ScrollbarEventHandler> const& __cordl_internal_get_m_VerticalScrollbarEventHandler() const;

  constexpr ::UnityW<::TMPro::TMP_ScrollbarEventHandler>& __cordl_internal_get_m_VerticalScrollbarEventHandler();

  constexpr ::UnityEngine::WaitForSecondsRealtime* const& __cordl_internal_get_m_WaitForSecondsRealtime() const;

  constexpr ::UnityEngine::WaitForSecondsRealtime*& __cordl_internal_get_m_WaitForSecondsRealtime();

  constexpr bool const& __cordl_internal_get_m_WasCanceled() const;

  constexpr bool& __cordl_internal_get_m_WasCanceled();

  constexpr bool const& __cordl_internal_get_m_forceRectTransformAdjustment() const;

  constexpr bool& __cordl_internal_get_m_forceRectTransformAdjustment();

  constexpr bool const& __cordl_internal_get_m_isLastKeyBackspace() const;

  constexpr bool& __cordl_internal_get_m_isLastKeyBackspace();

  constexpr bool const& __cordl_internal_get_m_isRichTextEditingAllowed() const;

  constexpr bool& __cordl_internal_get_m_isRichTextEditingAllowed();

  constexpr bool const& __cordl_internal_get_m_isSelectAll() const;

  constexpr bool& __cordl_internal_get_m_isSelectAll();

  constexpr bool const& __cordl_internal_get_m_isSelected() const;

  constexpr bool& __cordl_internal_get_m_isSelected();

  constexpr void __cordl_internal_set_caretRectTrans(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_m_AllowInput(bool value);

  constexpr void __cordl_internal_set_m_AsteriskChar(char16_t value);

  constexpr void __cordl_internal_set_m_BlinkCoroutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_m_BlinkStartTime(float_t value);

  constexpr void __cordl_internal_set_m_CachedInputRenderer(::UnityW<::UnityEngine::CanvasRenderer> value);

  constexpr void __cordl_internal_set_m_CachedViewportRect(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_m_CaretBlinkRate(float_t value);

  constexpr void __cordl_internal_set_m_CaretColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_m_CaretPosition(int32_t value);

  constexpr void __cordl_internal_set_m_CaretSelectPosition(int32_t value);

  constexpr void __cordl_internal_set_m_CaretVisible(bool value);

  constexpr void __cordl_internal_set_m_CaretWidth(int32_t value);

  constexpr void __cordl_internal_set_m_CharacterLimit(int32_t value);

  constexpr void __cordl_internal_set_m_CharacterValidation(::TMPro::TMP_InputField_CharacterValidation value);

  constexpr void __cordl_internal_set_m_ContentType(::TMPro::TMP_InputField_ContentType value);

  constexpr void __cordl_internal_set_m_CursorVerts(::ArrayW<::UnityEngine::UIVertex, ::Array<::UnityEngine::UIVertex>*> value);

  constexpr void __cordl_internal_set_m_CustomCaretColor(bool value);

  constexpr void __cordl_internal_set_m_DoubleClickDelay(float_t value);

  constexpr void __cordl_internal_set_m_DragCoroutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_m_DragPositionOutOfBounds(bool value);

  constexpr void __cordl_internal_set_m_GlobalFontAsset(::UnityW<::TMPro::TMP_FontAsset> value);

  constexpr void __cordl_internal_set_m_GlobalPointSize(float_t value);

  constexpr void __cordl_internal_set_m_HasDoneFocusTransition(bool value);

  constexpr void __cordl_internal_set_m_HideMobileInput(bool value);

  constexpr void __cordl_internal_set_m_HideSoftKeyboard(bool value);

  constexpr void __cordl_internal_set_m_IScrollHandlerParent(::UnityEngine::EventSystems::IScrollHandler* value);

  constexpr void __cordl_internal_set_m_InputType(::TMPro::TMP_InputField_InputType value);

  constexpr void __cordl_internal_set_m_InputValidator(::UnityW<::TMPro::TMP_InputValidator> value);

  constexpr void __cordl_internal_set_m_IsCaretPositionDirty(bool value);

  constexpr void __cordl_internal_set_m_IsCompositionActive(bool value);

  constexpr void __cordl_internal_set_m_IsDrivenByLayoutComponents(bool value);

  constexpr void __cordl_internal_set_m_IsStringPositionDirty(bool value);

  constexpr void __cordl_internal_set_m_IsTextComponentUpdateRequired(bool value);

  constexpr void __cordl_internal_set_m_KeyDownStartTime(float_t value);

  constexpr void __cordl_internal_set_m_KeyboardType(::UnityEngine::TouchScreenKeyboardType value);

  constexpr void __cordl_internal_set_m_LastPosition(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_LayoutGroup(::UnityW<::UnityEngine::UI::LayoutGroup> value);

  constexpr void __cordl_internal_set_m_LineLimit(int32_t value);

  constexpr void __cordl_internal_set_m_LineType(::TMPro::TMP_InputField_LineType value);

  constexpr void __cordl_internal_set_m_Mesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_m_OnDeselect(::TMPro::TMP_InputField_SelectionEvent* value);

  constexpr void __cordl_internal_set_m_OnEndEdit(::TMPro::TMP_InputField_SubmitEvent* value);

  constexpr void __cordl_internal_set_m_OnEndTextSelection(::TMPro::TMP_InputField_TextSelectionEvent* value);

  constexpr void __cordl_internal_set_m_OnFocusSelectAll(bool value);

  constexpr void __cordl_internal_set_m_OnSelect(::TMPro::TMP_InputField_SelectionEvent* value);

  constexpr void __cordl_internal_set_m_OnSubmit(::TMPro::TMP_InputField_SubmitEvent* value);

  constexpr void __cordl_internal_set_m_OnTextSelection(::TMPro::TMP_InputField_TextSelectionEvent* value);

  constexpr void __cordl_internal_set_m_OnTouchScreenKeyboardStatusChanged(::TMPro::TMP_InputField_TouchScreenKeyboardEvent* value);

  constexpr void __cordl_internal_set_m_OnValidateInput(::TMPro::TMP_InputField_OnValidateInput* value);

  constexpr void __cordl_internal_set_m_OnValueChanged(::TMPro::TMP_InputField_OnChangeEvent* value);

  constexpr void __cordl_internal_set_m_OriginalText(::StringW value);

  constexpr void __cordl_internal_set_m_Placeholder(::UnityW<::UnityEngine::UI::Graphic> value);

  constexpr void __cordl_internal_set_m_PointerDownClickStartTime(float_t value);

  constexpr void __cordl_internal_set_m_PreventCallback(bool value);

  constexpr void __cordl_internal_set_m_PreviousIMEInsertionLine(int32_t value);

  constexpr void __cordl_internal_set_m_PreviouslySelectedObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_ProcessingEvent(::UnityEngine::Event* value);

  constexpr void __cordl_internal_set_m_ReadOnly(bool value);

  constexpr void __cordl_internal_set_m_RectTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_m_RegexValue(::StringW value);

  constexpr void __cordl_internal_set_m_ReleaseSelection(bool value);

  constexpr void __cordl_internal_set_m_ResetOnDeActivation(bool value);

  constexpr void __cordl_internal_set_m_RestoreOriginalTextOnEscape(bool value);

  constexpr void __cordl_internal_set_m_RichText(bool value);

  constexpr void __cordl_internal_set_m_ScrollPosition(float_t value);

  constexpr void __cordl_internal_set_m_ScrollSensitivity(float_t value);

  constexpr void __cordl_internal_set_m_SelectionColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_m_SelectionStillActive(bool value);

  constexpr void __cordl_internal_set_m_ShouldActivateNextUpdate(bool value);

  constexpr void __cordl_internal_set_m_ShouldUpdateIMEWindowPosition(bool value);

  constexpr void __cordl_internal_set_m_SoftKeyboard(::UnityEngine::TouchScreenKeyboard* value);

  constexpr void __cordl_internal_set_m_StringPosition(int32_t value);

  constexpr void __cordl_internal_set_m_StringSelectPosition(int32_t value);

  constexpr void __cordl_internal_set_m_Text(::StringW value);

  constexpr void __cordl_internal_set_m_TextComponent(::UnityW<::TMPro::TMP_Text> value);

  constexpr void __cordl_internal_set_m_TextComponentRectMask(::UnityW<::UnityEngine::UI::RectMask2D> value);

  constexpr void __cordl_internal_set_m_TextComponentRectTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_m_TextViewport(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_m_TextViewportRectMask(::UnityW<::UnityEngine::UI::RectMask2D> value);

  constexpr void __cordl_internal_set_m_TouchKeyboardAllowsInPlaceEditing(bool value);

  constexpr void __cordl_internal_set_m_UpdateDrag(bool value);

  constexpr void __cordl_internal_set_m_VerticalScrollbar(::UnityW<::UnityEngine::UI::Scrollbar> value);

  constexpr void __cordl_internal_set_m_VerticalScrollbarEventHandler(::UnityW<::TMPro::TMP_ScrollbarEventHandler> value);

  constexpr void __cordl_internal_set_m_WaitForSecondsRealtime(::UnityEngine::WaitForSecondsRealtime* value);

  constexpr void __cordl_internal_set_m_WasCanceled(bool value);

  constexpr void __cordl_internal_set_m_forceRectTransformAdjustment(bool value);

  constexpr void __cordl_internal_set_m_isLastKeyBackspace(bool value);

  constexpr void __cordl_internal_set_m_isRichTextEditingAllowed(bool value);

  constexpr void __cordl_internal_set_m_isSelectAll(bool value);

  constexpr void __cordl_internal_set_m_isSelected(bool value);

  /// @brief Method .ctor, addr 0x47d1a80, size 0x280, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_kSeparators();

  /// @brief Method get_asteriskChar, addr 0x47d3a24, size 0x8, virtual false, abstract: false, final false
  inline char16_t get_asteriskChar();

  /// @brief Method get_caretBlinkRate, addr 0x47d2854, size 0x8, virtual false, abstract: false, final false
  inline float_t get_caretBlinkRate();

  /// @brief Method get_caretColor, addr 0x47d2c50, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_caretColor();

  /// @brief Method get_caretPosition, addr 0x47d3c50, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_caretPosition();

  /// @brief Method get_caretPositionInternal, addr 0x47d3b24, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_caretPositionInternal();

  /// @brief Method get_caretSelectPositionInternal, addr 0x47d3b9c, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_caretSelectPositionInternal();

  /// @brief Method get_caretWidth, addr 0x47d292c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_caretWidth();

  /// @brief Method get_characterLimit, addr 0x47d3084, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_characterLimit();

  /// @brief Method get_characterValidation, addr 0x47d3830, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::TMP_InputField_CharacterValidation get_characterValidation();

  /// @brief Method get_clipboard, addr 0x47d58d0, size 0x50, virtual false, abstract: false, final false
  static inline ::StringW get_clipboard();

  /// @brief Method get_compositionLength, addr 0x47d1a54, size 0x2c, virtual false, abstract: false, final false
  inline int32_t get_compositionLength();

  /// @brief Method get_compositionString, addr 0x47d19c0, size 0x94, virtual false, abstract: false, final false
  inline ::StringW get_compositionString();

  /// @brief Method get_contentType, addr 0x47d3428, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::TMP_InputField_ContentType get_contentType();

  /// @brief Method get_customCaretColor, addr 0x47d2cc0, size 0x8, virtual false, abstract: false, final false
  inline bool get_customCaretColor();

  /// @brief Method get_flexibleHeight, addr 0x47dc724, size 0x8, virtual true, abstract: false, final false
  inline float_t get_flexibleHeight();

  /// @brief Method get_flexibleWidth, addr 0x47dc5e4, size 0x8, virtual true, abstract: false, final false
  inline float_t get_flexibleWidth();

  /// @brief Method get_fontAsset, addr 0x47d32f0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::TMPro::TMP_FontAsset> get_fontAsset();

  /// @brief Method get_hasSelection, addr 0x47d3c14, size 0x3c, virtual false, abstract: false, final false
  inline bool get_hasSelection();

  /// @brief Method get_inputSystem, addr 0x47d18b0, size 0x110, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::EventSystems::BaseInput> get_inputSystem();

  /// @brief Method get_inputType, addr 0x47d3700, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::TMP_InputField_InputType get_inputType();

  /// @brief Method get_inputValidator, addr 0x47d38bc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::TMPro::TMP_InputValidator> get_inputValidator();

  /// @brief Method get_isFocused, addr 0x47d284c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isFocused();

  /// @brief Method get_isRichTextEditingAllowed, addr 0x47d3414, size 0x8, virtual false, abstract: false, final false
  inline bool get_isRichTextEditingAllowed();

  /// @brief Method get_keyboardType, addr 0x47d37a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::TouchScreenKeyboardType get_keyboardType();

  /// @brief Method get_layoutPriority, addr 0x47dc72c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_layoutPriority();

  /// @brief Method get_lineLimit, addr 0x47d368c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_lineLimit();

  /// @brief Method get_lineType, addr 0x47d3560, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::TMP_InputField_LineType get_lineType();

  /// @brief Method get_mesh, addr 0x47d1d94, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_mesh();

  /// @brief Method get_minHeight, addr 0x47dc5ec, size 0x8, virtual true, abstract: false, final false
  inline float_t get_minHeight();

  /// @brief Method get_minWidth, addr 0x47dc4ac, size 0x8, virtual true, abstract: false, final false
  inline float_t get_minWidth();

  /// @brief Method get_multiLine, addr 0x47d3a10, size 0x14, virtual false, abstract: false, final false
  inline bool get_multiLine();

  /// @brief Method get_onDeselect, addr 0x47d2e44, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::TMP_InputField_SelectionEvent* get_onDeselect();

  /// @brief Method get_onEndEdit, addr 0x47d2d24, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::TMP_InputField_SubmitEvent* get_onEndEdit();

  /// @brief Method get_onEndTextSelection, addr 0x47d2f04, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::TMP_InputField_TextSelectionEvent* get_onEndTextSelection();

  /// @brief Method get_onFocusSelectAll, addr 0x47d33d8, size 0x8, virtual false, abstract: false, final false
  inline bool get_onFocusSelectAll();

  /// @brief Method get_onSelect, addr 0x47d2de4, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::TMP_InputField_SelectionEvent* get_onSelect();

  /// @brief Method get_onSubmit, addr 0x47d2d84, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::TMP_InputField_SubmitEvent* get_onSubmit();

  /// @brief Method get_onTextSelection, addr 0x47d2ea4, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::TMP_InputField_TextSelectionEvent* get_onTextSelection();

  /// @brief Method get_onTouchScreenKeyboardStatusChanged, addr 0x47d2fc4, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::TMP_InputField_TouchScreenKeyboardEvent* get_onTouchScreenKeyboardStatusChanged();

  /// @brief Method get_onValidateInput, addr 0x47d3024, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::TMP_InputField_OnValidateInput* get_onValidateInput();

  /// @brief Method get_onValueChanged, addr 0x47d2f64, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::TMP_InputField_OnChangeEvent* get_onValueChanged();

  /// @brief Method get_placeholder, addr 0x47d2a10, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Graphic> get_placeholder();

  /// @brief Method get_pointSize, addr 0x47d314c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_pointSize();

  /// @brief Method get_preferredHeight, addr 0x47dc5f4, size 0x130, virtual true, abstract: false, final false
  inline float_t get_preferredHeight();

  /// @brief Method get_preferredWidth, addr 0x47dc4b4, size 0x130, virtual true, abstract: false, final false
  inline float_t get_preferredWidth();

  /// @brief Method get_readOnly, addr 0x47d3960, size 0x8, virtual false, abstract: false, final false
  inline bool get_readOnly();

  /// @brief Method get_resetOnDeActivation, addr 0x47d33ec, size 0x8, virtual false, abstract: false, final false
  inline bool get_resetOnDeActivation();

  /// @brief Method get_restoreOriginalTextOnEscape, addr 0x47d3400, size 0x8, virtual false, abstract: false, final false
  inline bool get_restoreOriginalTextOnEscape();

  /// @brief Method get_richText, addr 0x47d3974, size 0x8, virtual false, abstract: false, final false
  inline bool get_richText();

  /// @brief Method get_scrollSensitivity, addr 0x47d2bd4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_scrollSensitivity();

  /// @brief Method get_selectionAnchorPosition, addr 0x47d3d14, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_selectionAnchorPosition();

  /// @brief Method get_selectionColor, addr 0x47d2ce4, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_selectionColor();

  /// @brief Method get_selectionFocusPosition, addr 0x47d3d2c, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_selectionFocusPosition();

  /// @brief Method get_selectionStringAnchorPosition, addr 0x47d3e40, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_selectionStringAnchorPosition();

  /// @brief Method get_selectionStringFocusPosition, addr 0x47d3e58, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_selectionStringFocusPosition();

  /// @brief Method get_shouldHideMobileInput, addr 0x47d1e34, size 0x88, virtual false, abstract: false, final false
  inline bool get_shouldHideMobileInput();

  /// @brief Method get_shouldHideSoftKeyboard, addr 0x47d1f78, size 0xd4, virtual false, abstract: false, final false
  inline bool get_shouldHideSoftKeyboard();

  /// @brief Method get_stringPosition, addr 0x47d3d44, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_stringPosition();

  /// @brief Method get_stringPositionInternal, addr 0x47d3b4c, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_stringPositionInternal();

  /// @brief Method get_stringSelectPositionInternal, addr 0x47d3bc4, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_stringSelectPositionInternal();

  /// @brief Method get_text, addr 0x47d2220, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Method get_textComponent, addr 0x47d2a08, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::TMPro::TMP_Text> get_textComponent();

  /// @brief Method get_textViewport, addr 0x47d2a00, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_textViewport();

  /// @brief Method get_verticalScrollbar, addr 0x47d2a18, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Scrollbar> get_verticalScrollbar();

  /// @brief Method get_wasCanceled, addr 0x47d3aa0, size 0x8, virtual false, abstract: false, final false
  inline bool get_wasCanceled();

  /// @brief Convert to "::UnityEngine::EventSystems::IBeginDragHandler"
  constexpr ::UnityEngine::EventSystems::IBeginDragHandler* i___UnityEngine__EventSystems__IBeginDragHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IDragHandler"
  constexpr ::UnityEngine::EventSystems::IDragHandler* i___UnityEngine__EventSystems__IDragHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IEndDragHandler"
  constexpr ::UnityEngine::EventSystems::IEndDragHandler* i___UnityEngine__EventSystems__IEndDragHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
  constexpr ::UnityEngine::EventSystems::IPointerClickHandler* i___UnityEngine__EventSystems__IPointerClickHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IScrollHandler"
  constexpr ::UnityEngine::EventSystems::IScrollHandler* i___UnityEngine__EventSystems__IScrollHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::ISubmitHandler"
  constexpr ::UnityEngine::EventSystems::ISubmitHandler* i___UnityEngine__EventSystems__ISubmitHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IUpdateSelectedHandler"
  constexpr ::UnityEngine::EventSystems::IUpdateSelectedHandler* i___UnityEngine__EventSystems__IUpdateSelectedHandler() noexcept;

  /// @brief Convert to "::UnityEngine::UI::ICanvasElement"
  constexpr ::UnityEngine::UI::ICanvasElement* i___UnityEngine__UI__ICanvasElement() noexcept;

  /// @brief Convert to "::UnityEngine::UI::ILayoutElement"
  constexpr ::UnityEngine::UI::ILayoutElement* i___UnityEngine__UI__ILayoutElement() noexcept;

  /// @brief Method isKeyboardUsingEvents, addr 0x47d218c, size 0x94, virtual false, abstract: false, final false
  inline bool isKeyboardUsingEvents();

  static inline void setStaticF_kSeparators(::ArrayW<char16_t, ::Array<char16_t>*> value);

  /// @brief Method set_asteriskChar, addr 0x47d3a2c, size 0x74, virtual false, abstract: false, final false
  inline void set_asteriskChar(char16_t value);

  /// @brief Method set_caretBlinkRate, addr 0x47d285c, size 0x7c, virtual false, abstract: false, final false
  inline void set_caretBlinkRate(float_t value);

  /// @brief Method set_caretColor, addr 0x47d2c94, size 0x2c, virtual false, abstract: false, final false
  inline void set_caretColor(::UnityEngine::Color value);

  /// @brief Method set_caretPosition, addr 0x47d3c68, size 0x34, virtual false, abstract: false, final false
  inline void set_caretPosition(int32_t value);

  /// @brief Method set_caretPositionInternal, addr 0x47d3b3c, size 0x10, virtual false, abstract: false, final false
  inline void set_caretPositionInternal(int32_t value);

  /// @brief Method set_caretSelectPositionInternal, addr 0x47d3bb4, size 0x10, virtual false, abstract: false, final false
  inline void set_caretSelectPositionInternal(int32_t value);

  /// @brief Method set_caretWidth, addr 0x47d2934, size 0x74, virtual false, abstract: false, final false
  inline void set_caretWidth(int32_t value);

  /// @brief Method set_characterLimit, addr 0x47d308c, size 0xc0, virtual false, abstract: false, final false
  inline void set_characterLimit(int32_t value);

  /// @brief Method set_characterValidation, addr 0x47d3838, size 0x84, virtual false, abstract: false, final false
  inline void set_characterValidation(::TMPro::TMP_InputField_CharacterValidation value);

  /// @brief Method set_clipboard, addr 0x47d5920, size 0x58, virtual false, abstract: false, final false
  static inline void set_clipboard(::StringW value);

  /// @brief Method set_contentType, addr 0x47d3430, size 0x74, virtual false, abstract: false, final false
  inline void set_contentType(::TMPro::TMP_InputField_ContentType value);

  /// @brief Method set_customCaretColor, addr 0x47d2cc8, size 0x1c, virtual false, abstract: false, final false
  inline void set_customCaretColor(bool value);

  /// @brief Method set_fontAsset, addr 0x47c3054, size 0x80, virtual false, abstract: false, final false
  inline void set_fontAsset(::TMPro::TMP_FontAsset* value);

  /// @brief Method set_inputType, addr 0x47d3708, size 0x84, virtual false, abstract: false, final false
  inline void set_inputType(::TMPro::TMP_InputField_InputType value);

  /// @brief Method set_inputValidator, addr 0x47d38c4, size 0x84, virtual false, abstract: false, final false
  inline void set_inputValidator(::TMPro::TMP_InputValidator* value);

  /// @brief Method set_isRichTextEditingAllowed, addr 0x47d341c, size 0xc, virtual false, abstract: false, final false
  inline void set_isRichTextEditingAllowed(bool value);

  /// @brief Method set_keyboardType, addr 0x47d37ac, size 0x84, virtual false, abstract: false, final false
  inline void set_keyboardType(::UnityEngine::TouchScreenKeyboardType value);

  /// @brief Method set_lineLimit, addr 0x47d3694, size 0x6c, virtual false, abstract: false, final false
  inline void set_lineLimit(int32_t value);

  /// @brief Method set_lineType, addr 0x47d3568, size 0xc0, virtual false, abstract: false, final false
  inline void set_lineType(::TMPro::TMP_InputField_LineType value);

  /// @brief Method set_onDeselect, addr 0x47d2e4c, size 0x58, virtual false, abstract: false, final false
  inline void set_onDeselect(::TMPro::TMP_InputField_SelectionEvent* value);

  /// @brief Method set_onEndEdit, addr 0x47d2d2c, size 0x58, virtual false, abstract: false, final false
  inline void set_onEndEdit(::TMPro::TMP_InputField_SubmitEvent* value);

  /// @brief Method set_onEndTextSelection, addr 0x47d2f0c, size 0x58, virtual false, abstract: false, final false
  inline void set_onEndTextSelection(::TMPro::TMP_InputField_TextSelectionEvent* value);

  /// @brief Method set_onFocusSelectAll, addr 0x47d33e0, size 0xc, virtual false, abstract: false, final false
  inline void set_onFocusSelectAll(bool value);

  /// @brief Method set_onSelect, addr 0x47d2dec, size 0x58, virtual false, abstract: false, final false
  inline void set_onSelect(::TMPro::TMP_InputField_SelectionEvent* value);

  /// @brief Method set_onSubmit, addr 0x47d2d8c, size 0x58, virtual false, abstract: false, final false
  inline void set_onSubmit(::TMPro::TMP_InputField_SubmitEvent* value);

  /// @brief Method set_onTextSelection, addr 0x47d2eac, size 0x58, virtual false, abstract: false, final false
  inline void set_onTextSelection(::TMPro::TMP_InputField_TextSelectionEvent* value);

  /// @brief Method set_onTouchScreenKeyboardStatusChanged, addr 0x47d2fcc, size 0x58, virtual false, abstract: false, final false
  inline void set_onTouchScreenKeyboardStatusChanged(::TMPro::TMP_InputField_TouchScreenKeyboardEvent* value);

  /// @brief Method set_onValidateInput, addr 0x47d302c, size 0x58, virtual false, abstract: false, final false
  inline void set_onValidateInput(::TMPro::TMP_InputField_OnValidateInput* value);

  /// @brief Method set_onValueChanged, addr 0x47d2f6c, size 0x58, virtual false, abstract: false, final false
  inline void set_onValueChanged(::TMPro::TMP_InputField_OnChangeEvent* value);

  /// @brief Method set_placeholder, addr 0x47c2ffc, size 0x58, virtual false, abstract: false, final false
  inline void set_placeholder(::UnityEngine::UI::Graphic* value);

  /// @brief Method set_pointSize, addr 0x47d3154, size 0xb4, virtual false, abstract: false, final false
  inline void set_pointSize(float_t value);

  /// @brief Method set_readOnly, addr 0x47d3968, size 0xc, virtual false, abstract: false, final false
  inline void set_readOnly(bool value);

  /// @brief Method set_resetOnDeActivation, addr 0x47d33f4, size 0xc, virtual false, abstract: false, final false
  inline void set_resetOnDeActivation(bool value);

  /// @brief Method set_restoreOriginalTextOnEscape, addr 0x47d3408, size 0xc, virtual false, abstract: false, final false
  inline void set_restoreOriginalTextOnEscape(bool value);

  /// @brief Method set_richText, addr 0x47d397c, size 0xc, virtual false, abstract: false, final false
  inline void set_richText(bool value);

  /// @brief Method set_scrollSensitivity, addr 0x47d2bdc, size 0x74, virtual false, abstract: false, final false
  inline void set_scrollSensitivity(float_t value);

  /// @brief Method set_selectionAnchorPosition, addr 0x47d3c9c, size 0x3c, virtual false, abstract: false, final false
  inline void set_selectionAnchorPosition(int32_t value);

  /// @brief Method set_selectionColor, addr 0x47d2cf8, size 0x2c, virtual false, abstract: false, final false
  inline void set_selectionColor(::UnityEngine::Color value);

  /// @brief Method set_selectionFocusPosition, addr 0x47d3cd8, size 0x3c, virtual false, abstract: false, final false
  inline void set_selectionFocusPosition(int32_t value);

  /// @brief Method set_selectionStringAnchorPosition, addr 0x47d3d90, size 0x58, virtual false, abstract: false, final false
  inline void set_selectionStringAnchorPosition(int32_t value);

  /// @brief Method set_selectionStringFocusPosition, addr 0x47d3de8, size 0x58, virtual false, abstract: false, final false
  inline void set_selectionStringFocusPosition(int32_t value);

  /// @brief Method set_shouldHideMobileInput, addr 0x47d1ebc, size 0xbc, virtual false, abstract: false, final false
  inline void set_shouldHideMobileInput(bool value);

  /// @brief Method set_shouldHideSoftKeyboard, addr 0x47d204c, size 0x140, virtual false, abstract: false, final false
  inline void set_shouldHideSoftKeyboard(bool value);

  /// @brief Method set_stringPosition, addr 0x47d3d5c, size 0x34, virtual false, abstract: false, final false
  inline void set_stringPosition(int32_t value);

  /// @brief Method set_stringPositionInternal, addr 0x47d3b64, size 0x38, virtual false, abstract: false, final false
  inline void set_stringPositionInternal(int32_t value);

  /// @brief Method set_stringSelectPositionInternal, addr 0x47d3bdc, size 0x38, virtual false, abstract: false, final false
  inline void set_stringSelectPositionInternal(int32_t value);

  /// @brief Method set_text, addr 0x47d2228, size 0x8, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

  /// @brief Method set_textComponent, addr 0x47c2f88, size 0x74, virtual false, abstract: false, final false
  inline void set_textComponent(::TMPro::TMP_Text* value);

  /// @brief Method set_textViewport, addr 0x47c2f30, size 0x58, virtual false, abstract: false, final false
  inline void set_textViewport(::UnityEngine::RectTransform* value);

  /// @brief Method set_verticalScrollbar, addr 0x47d2a20, size 0x1b4, virtual false, abstract: false, final false
  inline void set_verticalScrollbar(::UnityEngine::UI::Scrollbar* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_InputField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_InputField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_InputField(TMP_InputField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_InputField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_InputField(TMP_InputField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14511 };

  /// @brief Field kEmailSpecialCharacters offset 0xffffffff size 0x8
  static constexpr ::ConstString kEmailSpecialCharacters{ u"!#$%&\'*+-/=?^_`{|}~" };

  /// @brief Field kHScrollSpeed offset 0xffffffff size 0x4
  static constexpr float_t kHScrollSpeed{ static_cast<float_t>(0.05f) };

  /// @brief Field kVScrollSpeed offset 0xffffffff size 0x4
  static constexpr float_t kVScrollSpeed{ static_cast<float_t>(0.1f) };

  /// @brief Field m_SoftKeyboard, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::TouchScreenKeyboard* ___m_SoftKeyboard;

  /// @brief Field m_RectTransform, offset: 0x108, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___m_RectTransform;

  /// @brief Field m_TextViewport, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___m_TextViewport;

  /// @brief Field m_TextComponentRectMask, offset: 0x118, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::RectMask2D> ___m_TextComponentRectMask;

  /// @brief Field m_TextViewportRectMask, offset: 0x120, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::RectMask2D> ___m_TextViewportRectMask;

  /// @brief Field m_CachedViewportRect, offset: 0x128, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_CachedViewportRect;

  /// @brief Field m_TextComponent, offset: 0x138, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_Text> ___m_TextComponent;

  /// @brief Field m_TextComponentRectTransform, offset: 0x140, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___m_TextComponentRectTransform;

  /// @brief Field m_Placeholder, offset: 0x148, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Graphic> ___m_Placeholder;

  /// @brief Field m_VerticalScrollbar, offset: 0x150, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Scrollbar> ___m_VerticalScrollbar;

  /// @brief Field m_VerticalScrollbarEventHandler, offset: 0x158, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_ScrollbarEventHandler> ___m_VerticalScrollbarEventHandler;

  /// @brief Field m_IsDrivenByLayoutComponents, offset: 0x160, size: 0x1, def value: None
  bool ___m_IsDrivenByLayoutComponents;

  /// @brief Field m_LayoutGroup, offset: 0x168, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::LayoutGroup> ___m_LayoutGroup;

  /// @brief Field m_IScrollHandlerParent, offset: 0x170, size: 0x8, def value: None
  ::UnityEngine::EventSystems::IScrollHandler* ___m_IScrollHandlerParent;

  /// @brief Field m_ScrollPosition, offset: 0x178, size: 0x4, def value: None
  float_t ___m_ScrollPosition;

  /// @brief Field m_ScrollSensitivity, offset: 0x17c, size: 0x4, def value: None
  float_t ___m_ScrollSensitivity;

  /// @brief Field m_ContentType, offset: 0x180, size: 0x4, def value: None
  ::TMPro::TMP_InputField_ContentType ___m_ContentType;

  /// @brief Field m_InputType, offset: 0x184, size: 0x4, def value: None
  ::TMPro::TMP_InputField_InputType ___m_InputType;

  /// @brief Field m_AsteriskChar, offset: 0x188, size: 0x2, def value: None
  char16_t ___m_AsteriskChar;

  /// @brief Field m_KeyboardType, offset: 0x18c, size: 0x4, def value: None
  ::UnityEngine::TouchScreenKeyboardType ___m_KeyboardType;

  /// @brief Field m_LineType, offset: 0x190, size: 0x4, def value: None
  ::TMPro::TMP_InputField_LineType ___m_LineType;

  /// @brief Field m_HideMobileInput, offset: 0x194, size: 0x1, def value: None
  bool ___m_HideMobileInput;

  /// @brief Field m_HideSoftKeyboard, offset: 0x195, size: 0x1, def value: None
  bool ___m_HideSoftKeyboard;

  /// @brief Field m_CharacterValidation, offset: 0x198, size: 0x4, def value: None
  ::TMPro::TMP_InputField_CharacterValidation ___m_CharacterValidation;

  /// @brief Field m_RegexValue, offset: 0x1a0, size: 0x8, def value: None
  ::StringW ___m_RegexValue;

  /// @brief Field m_GlobalPointSize, offset: 0x1a8, size: 0x4, def value: None
  float_t ___m_GlobalPointSize;

  /// @brief Field m_CharacterLimit, offset: 0x1ac, size: 0x4, def value: None
  int32_t ___m_CharacterLimit;

  /// @brief Field m_OnEndEdit, offset: 0x1b0, size: 0x8, def value: None
  ::TMPro::TMP_InputField_SubmitEvent* ___m_OnEndEdit;

  /// @brief Field m_OnSubmit, offset: 0x1b8, size: 0x8, def value: None
  ::TMPro::TMP_InputField_SubmitEvent* ___m_OnSubmit;

  /// @brief Field m_OnSelect, offset: 0x1c0, size: 0x8, def value: None
  ::TMPro::TMP_InputField_SelectionEvent* ___m_OnSelect;

  /// @brief Field m_OnDeselect, offset: 0x1c8, size: 0x8, def value: None
  ::TMPro::TMP_InputField_SelectionEvent* ___m_OnDeselect;

  /// @brief Field m_OnTextSelection, offset: 0x1d0, size: 0x8, def value: None
  ::TMPro::TMP_InputField_TextSelectionEvent* ___m_OnTextSelection;

  /// @brief Field m_OnEndTextSelection, offset: 0x1d8, size: 0x8, def value: None
  ::TMPro::TMP_InputField_TextSelectionEvent* ___m_OnEndTextSelection;

  /// @brief Field m_OnValueChanged, offset: 0x1e0, size: 0x8, def value: None
  ::TMPro::TMP_InputField_OnChangeEvent* ___m_OnValueChanged;

  /// @brief Field m_OnTouchScreenKeyboardStatusChanged, offset: 0x1e8, size: 0x8, def value: None
  ::TMPro::TMP_InputField_TouchScreenKeyboardEvent* ___m_OnTouchScreenKeyboardStatusChanged;

  /// @brief Field m_OnValidateInput, offset: 0x1f0, size: 0x8, def value: None
  ::TMPro::TMP_InputField_OnValidateInput* ___m_OnValidateInput;

  /// @brief Field m_CaretColor, offset: 0x1f8, size: 0x10, def value: None
  ::UnityEngine::Color ___m_CaretColor;

  /// @brief Field m_CustomCaretColor, offset: 0x208, size: 0x1, def value: None
  bool ___m_CustomCaretColor;

  /// @brief Field m_SelectionColor, offset: 0x20c, size: 0x10, def value: None
  ::UnityEngine::Color ___m_SelectionColor;

  /// @brief Field m_Text, offset: 0x220, size: 0x8, def value: None
  ::StringW ___m_Text;

  /// @brief Field m_CaretBlinkRate, offset: 0x228, size: 0x4, def value: None
  float_t ___m_CaretBlinkRate;

  /// @brief Field m_CaretWidth, offset: 0x22c, size: 0x4, def value: None
  int32_t ___m_CaretWidth;

  /// @brief Field m_ReadOnly, offset: 0x230, size: 0x1, def value: None
  bool ___m_ReadOnly;

  /// @brief Field m_RichText, offset: 0x231, size: 0x1, def value: None
  bool ___m_RichText;

  /// @brief Field m_StringPosition, offset: 0x234, size: 0x4, def value: None
  int32_t ___m_StringPosition;

  /// @brief Field m_StringSelectPosition, offset: 0x238, size: 0x4, def value: None
  int32_t ___m_StringSelectPosition;

  /// @brief Field m_CaretPosition, offset: 0x23c, size: 0x4, def value: None
  int32_t ___m_CaretPosition;

  /// @brief Field m_CaretSelectPosition, offset: 0x240, size: 0x4, def value: None
  int32_t ___m_CaretSelectPosition;

  /// @brief Field caretRectTrans, offset: 0x248, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___caretRectTrans;

  /// @brief Field m_CursorVerts, offset: 0x250, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIVertex, ::Array<::UnityEngine::UIVertex>*> ___m_CursorVerts;

  /// @brief Field m_CachedInputRenderer, offset: 0x258, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasRenderer> ___m_CachedInputRenderer;

  /// @brief Field m_LastPosition, offset: 0x260, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_LastPosition;

  /// @brief Field m_Mesh, offset: 0x268, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___m_Mesh;

  /// @brief Field m_AllowInput, offset: 0x270, size: 0x1, def value: None
  bool ___m_AllowInput;

  /// @brief Field m_ShouldActivateNextUpdate, offset: 0x271, size: 0x1, def value: None
  bool ___m_ShouldActivateNextUpdate;

  /// @brief Field m_UpdateDrag, offset: 0x272, size: 0x1, def value: None
  bool ___m_UpdateDrag;

  /// @brief Field m_DragPositionOutOfBounds, offset: 0x273, size: 0x1, def value: None
  bool ___m_DragPositionOutOfBounds;

  /// @brief Field m_CaretVisible, offset: 0x274, size: 0x1, def value: None
  bool ___m_CaretVisible;

  /// @brief Field m_BlinkCoroutine, offset: 0x278, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___m_BlinkCoroutine;

  /// @brief Field m_BlinkStartTime, offset: 0x280, size: 0x4, def value: None
  float_t ___m_BlinkStartTime;

  /// @brief Field m_DragCoroutine, offset: 0x288, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___m_DragCoroutine;

  /// @brief Field m_OriginalText, offset: 0x290, size: 0x8, def value: None
  ::StringW ___m_OriginalText;

  /// @brief Field m_WasCanceled, offset: 0x298, size: 0x1, def value: None
  bool ___m_WasCanceled;

  /// @brief Field m_HasDoneFocusTransition, offset: 0x299, size: 0x1, def value: None
  bool ___m_HasDoneFocusTransition;

  /// @brief Field m_WaitForSecondsRealtime, offset: 0x2a0, size: 0x8, def value: None
  ::UnityEngine::WaitForSecondsRealtime* ___m_WaitForSecondsRealtime;

  /// @brief Field m_PreventCallback, offset: 0x2a8, size: 0x1, def value: None
  bool ___m_PreventCallback;

  /// @brief Field m_TouchKeyboardAllowsInPlaceEditing, offset: 0x2a9, size: 0x1, def value: None
  bool ___m_TouchKeyboardAllowsInPlaceEditing;

  /// @brief Field m_IsTextComponentUpdateRequired, offset: 0x2aa, size: 0x1, def value: None
  bool ___m_IsTextComponentUpdateRequired;

  /// @brief Field m_isLastKeyBackspace, offset: 0x2ab, size: 0x1, def value: None
  bool ___m_isLastKeyBackspace;

  /// @brief Field m_PointerDownClickStartTime, offset: 0x2ac, size: 0x4, def value: None
  float_t ___m_PointerDownClickStartTime;

  /// @brief Field m_KeyDownStartTime, offset: 0x2b0, size: 0x4, def value: None
  float_t ___m_KeyDownStartTime;

  /// @brief Field m_DoubleClickDelay, offset: 0x2b4, size: 0x4, def value: None
  float_t ___m_DoubleClickDelay;

  /// @brief Field m_IsCompositionActive, offset: 0x2b8, size: 0x1, def value: None
  bool ___m_IsCompositionActive;

  /// @brief Field m_ShouldUpdateIMEWindowPosition, offset: 0x2b9, size: 0x1, def value: None
  bool ___m_ShouldUpdateIMEWindowPosition;

  /// @brief Field m_PreviousIMEInsertionLine, offset: 0x2bc, size: 0x4, def value: None
  int32_t ___m_PreviousIMEInsertionLine;

  /// @brief Field m_GlobalFontAsset, offset: 0x2c0, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_FontAsset> ___m_GlobalFontAsset;

  /// @brief Field m_OnFocusSelectAll, offset: 0x2c8, size: 0x1, def value: None
  bool ___m_OnFocusSelectAll;

  /// @brief Field m_isSelectAll, offset: 0x2c9, size: 0x1, def value: None
  bool ___m_isSelectAll;

  /// @brief Field m_ResetOnDeActivation, offset: 0x2ca, size: 0x1, def value: None
  bool ___m_ResetOnDeActivation;

  /// @brief Field m_SelectionStillActive, offset: 0x2cb, size: 0x1, def value: None
  bool ___m_SelectionStillActive;

  /// @brief Field m_ReleaseSelection, offset: 0x2cc, size: 0x1, def value: None
  bool ___m_ReleaseSelection;

  /// @brief Field m_PreviouslySelectedObject, offset: 0x2d0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_PreviouslySelectedObject;

  /// @brief Field m_RestoreOriginalTextOnEscape, offset: 0x2d8, size: 0x1, def value: None
  bool ___m_RestoreOriginalTextOnEscape;

  /// @brief Field m_isRichTextEditingAllowed, offset: 0x2d9, size: 0x1, def value: None
  bool ___m_isRichTextEditingAllowed;

  /// @brief Field m_LineLimit, offset: 0x2dc, size: 0x4, def value: None
  int32_t ___m_LineLimit;

  /// @brief Field m_InputValidator, offset: 0x2e0, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_InputValidator> ___m_InputValidator;

  /// @brief Field m_isSelected, offset: 0x2e8, size: 0x1, def value: None
  bool ___m_isSelected;

  /// @brief Field m_IsStringPositionDirty, offset: 0x2e9, size: 0x1, def value: None
  bool ___m_IsStringPositionDirty;

  /// @brief Field m_IsCaretPositionDirty, offset: 0x2ea, size: 0x1, def value: None
  bool ___m_IsCaretPositionDirty;

  /// @brief Field m_forceRectTransformAdjustment, offset: 0x2eb, size: 0x1, def value: None
  bool ___m_forceRectTransformAdjustment;

  /// @brief Field m_ProcessingEvent, offset: 0x2f0, size: 0x8, def value: None
  ::UnityEngine::Event* ___m_ProcessingEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_InputField, ___m_SoftKeyboard) == 0x100, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_RectTransform) == 0x108, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_TextViewport) == 0x110, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_TextComponentRectMask) == 0x118, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_TextViewportRectMask) == 0x120, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_CachedViewportRect) == 0x128, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_TextComponent) == 0x138, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_TextComponentRectTransform) == 0x140, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_Placeholder) == 0x148, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_VerticalScrollbar) == 0x150, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_VerticalScrollbarEventHandler) == 0x158, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_IsDrivenByLayoutComponents) == 0x160, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_LayoutGroup) == 0x168, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_IScrollHandlerParent) == 0x170, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_ScrollPosition) == 0x178, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_ScrollSensitivity) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_ContentType) == 0x180, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_InputType) == 0x184, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_AsteriskChar) == 0x188, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_KeyboardType) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_LineType) == 0x190, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_HideMobileInput) == 0x194, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_HideSoftKeyboard) == 0x195, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_CharacterValidation) == 0x198, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_RegexValue) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_GlobalPointSize) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_CharacterLimit) == 0x1ac, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_OnEndEdit) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_OnSubmit) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_OnSelect) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_OnDeselect) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_OnTextSelection) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_OnEndTextSelection) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_OnValueChanged) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_OnTouchScreenKeyboardStatusChanged) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_OnValidateInput) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_CaretColor) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_CustomCaretColor) == 0x208, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_SelectionColor) == 0x20c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_Text) == 0x220, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_CaretBlinkRate) == 0x228, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_CaretWidth) == 0x22c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_ReadOnly) == 0x230, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_RichText) == 0x231, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_StringPosition) == 0x234, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_StringSelectPosition) == 0x238, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_CaretPosition) == 0x23c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_CaretSelectPosition) == 0x240, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___caretRectTrans) == 0x248, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_CursorVerts) == 0x250, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_CachedInputRenderer) == 0x258, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_LastPosition) == 0x260, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_Mesh) == 0x268, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_AllowInput) == 0x270, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_ShouldActivateNextUpdate) == 0x271, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_UpdateDrag) == 0x272, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_DragPositionOutOfBounds) == 0x273, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_CaretVisible) == 0x274, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_BlinkCoroutine) == 0x278, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_BlinkStartTime) == 0x280, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_DragCoroutine) == 0x288, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_OriginalText) == 0x290, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_WasCanceled) == 0x298, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_HasDoneFocusTransition) == 0x299, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_WaitForSecondsRealtime) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_PreventCallback) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_TouchKeyboardAllowsInPlaceEditing) == 0x2a9, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_IsTextComponentUpdateRequired) == 0x2aa, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_isLastKeyBackspace) == 0x2ab, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_PointerDownClickStartTime) == 0x2ac, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_KeyDownStartTime) == 0x2b0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_DoubleClickDelay) == 0x2b4, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_IsCompositionActive) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_ShouldUpdateIMEWindowPosition) == 0x2b9, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_PreviousIMEInsertionLine) == 0x2bc, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_GlobalFontAsset) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_OnFocusSelectAll) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_isSelectAll) == 0x2c9, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_ResetOnDeActivation) == 0x2ca, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_SelectionStillActive) == 0x2cb, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_ReleaseSelection) == 0x2cc, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_PreviouslySelectedObject) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_RestoreOriginalTextOnEscape) == 0x2d8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_isRichTextEditingAllowed) == 0x2d9, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_LineLimit) == 0x2dc, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_InputValidator) == 0x2e0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_isSelected) == 0x2e8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_IsStringPositionDirty) == 0x2e9, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_IsCaretPositionDirty) == 0x2ea, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_forceRectTransformAdjustment) == 0x2eb, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_ProcessingEvent) == 0x2f0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_InputField, 0x2f8>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_InputField_CharacterValidation, "TMPro", "TMP_InputField/CharacterValidation");
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_InputField_ContentType, "TMPro", "TMP_InputField/ContentType");
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_InputField_EditState, "TMPro", "TMP_InputField/EditState");
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_InputField_InputType, "TMPro", "TMP_InputField/InputType");
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_InputField_LineType, "TMPro", "TMP_InputField/LineType");
NEED_NO_BOX(::TMPro::TMP_InputField);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_InputField*, "TMPro", "TMP_InputField");
NEED_NO_BOX(::TMPro::TMP_InputField_OnChangeEvent);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_InputField_OnChangeEvent*, "TMPro", "TMP_InputField/OnChangeEvent");
NEED_NO_BOX(::TMPro::TMP_InputField_OnValidateInput);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_InputField_OnValidateInput*, "TMPro", "TMP_InputField/OnValidateInput");
NEED_NO_BOX(::TMPro::TMP_InputField_SelectionEvent);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_InputField_SelectionEvent*, "TMPro", "TMP_InputField/SelectionEvent");
NEED_NO_BOX(::TMPro::TMP_InputField_SubmitEvent);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_InputField_SubmitEvent*, "TMPro", "TMP_InputField/SubmitEvent");
NEED_NO_BOX(::TMPro::TMP_InputField_TextSelectionEvent);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_InputField_TextSelectionEvent*, "TMPro", "TMP_InputField/TextSelectionEvent");
NEED_NO_BOX(::TMPro::TMP_InputField_TouchScreenKeyboardEvent);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_InputField_TouchScreenKeyboardEvent*, "TMPro", "TMP_InputField/TouchScreenKeyboardEvent");
NEED_NO_BOX(::TMPro::TMP_InputField__CaretBlink_d__276);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_InputField__CaretBlink_d__276*, "TMPro", "TMP_InputField/<CaretBlink>d__276");
NEED_NO_BOX(::TMPro::TMP_InputField__MouseDragOutsideRect_d__294);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_InputField__MouseDragOutsideRect_d__294*, "TMPro", "TMP_InputField/<MouseDragOutsideRect>d__294");
