#pragma once
// IWYU pragma private; include "TMPro/TMP_InputField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__TMP_InputField_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_3_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboardType_def.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboard_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_InputField)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
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
class IDisposable;
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
class TMP_InputValidator;
}
namespace TMPro {
class TMP_ScrollbarEventHandler;
}
namespace TMPro {
class TMP_Text;
}
namespace TMPro {
struct __TMP_InputField__CharacterValidation;
}
namespace TMPro {
struct __TMP_InputField__ContentType;
}
namespace TMPro {
struct __TMP_InputField__EditState;
}
namespace TMPro {
struct __TMP_InputField__InputType;
}
namespace TMPro {
struct __TMP_InputField__LineType;
}
namespace TMPro {
class __TMP_InputField__OnChangeEvent;
}
namespace TMPro {
class __TMP_InputField__OnValidateInput;
}
namespace TMPro {
class __TMP_InputField__SelectionEvent;
}
namespace TMPro {
class __TMP_InputField__SubmitEvent;
}
namespace TMPro {
class __TMP_InputField__TextSelectionEvent;
}
namespace TMPro {
class __TMP_InputField__TouchScreenKeyboardEvent;
}
namespace TMPro {
class __TMP_InputField___CaretBlink_d__276;
}
namespace TMPro {
class __TMP_InputField___MouseDragOutsideRect_d__294;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class BaseInput;
}
namespace UnityEngine::EventSystems {
class IBeginDragHandler;
}
namespace UnityEngine::EventSystems {
class IDragHandler;
}
namespace UnityEngine::EventSystems {
class IEndDragHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace UnityEngine::EventSystems {
class IScrollHandler;
}
namespace UnityEngine::EventSystems {
class ISubmitHandler;
}
namespace UnityEngine::EventSystems {
class IUpdateSelectedHandler;
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
class ICanvasElement;
}
namespace UnityEngine::UI {
class ILayoutElement;
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
class VertexHelper;
}
namespace UnityEngine::UI {
struct __Selectable__SelectionState;
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
struct __TMP_InputField__CharacterValidation;
}
namespace TMPro {
struct __TMP_InputField__ContentType;
}
namespace TMPro {
struct __TMP_InputField__EditState;
}
namespace TMPro {
struct __TMP_InputField__InputType;
}
namespace TMPro {
struct __TMP_InputField__LineType;
}
namespace TMPro {
class TMP_InputField;
}
namespace TMPro {
class __TMP_InputField__OnChangeEvent;
}
namespace TMPro {
class __TMP_InputField__OnValidateInput;
}
namespace TMPro {
class __TMP_InputField__SelectionEvent;
}
namespace TMPro {
class __TMP_InputField__SubmitEvent;
}
namespace TMPro {
class __TMP_InputField__TextSelectionEvent;
}
namespace TMPro {
class __TMP_InputField__TouchScreenKeyboardEvent;
}
namespace TMPro {
class __TMP_InputField___CaretBlink_d__276;
}
namespace TMPro {
class __TMP_InputField___MouseDragOutsideRect_d__294;
}
// Write type traits
MARK_VAL_T(::TMPro::__TMP_InputField__CharacterValidation);
MARK_VAL_T(::TMPro::__TMP_InputField__ContentType);
MARK_VAL_T(::TMPro::__TMP_InputField__EditState);
MARK_VAL_T(::TMPro::__TMP_InputField__InputType);
MARK_VAL_T(::TMPro::__TMP_InputField__LineType);
MARK_REF_PTR_T(::TMPro::TMP_InputField);
MARK_REF_PTR_T(::TMPro::__TMP_InputField__OnChangeEvent);
MARK_REF_PTR_T(::TMPro::__TMP_InputField__OnValidateInput);
MARK_REF_PTR_T(::TMPro::__TMP_InputField__SelectionEvent);
MARK_REF_PTR_T(::TMPro::__TMP_InputField__SubmitEvent);
MARK_REF_PTR_T(::TMPro::__TMP_InputField__TextSelectionEvent);
MARK_REF_PTR_T(::TMPro::__TMP_InputField__TouchScreenKeyboardEvent);
MARK_REF_PTR_T(::TMPro::__TMP_InputField___CaretBlink_d__276);
MARK_REF_PTR_T(::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294);
// Type: ::ContentType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// CS Name: ::TMP_InputField::ContentType
struct CORDL_TYPE __TMP_InputField__ContentType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TMP_InputField__ContentType_Unwrapped
  enum struct ____TMP_InputField__ContentType_Unwrapped : int32_t {
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
  constexpr operator ____TMP_InputField__ContentType_Unwrapped() const noexcept {
    return static_cast<____TMP_InputField__ContentType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_InputField__ContentType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TMP_InputField__ContentType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Alphanumeric value: static_cast<int32_t>(0x4)
  static ::TMPro::__TMP_InputField__ContentType const Alphanumeric;

  /// @brief Field Autocorrected value: static_cast<int32_t>(0x1)
  static ::TMPro::__TMP_InputField__ContentType const Autocorrected;

  /// @brief Field Custom value: static_cast<int32_t>(0x9)
  static ::TMPro::__TMP_InputField__ContentType const Custom;

  /// @brief Field DecimalNumber value: static_cast<int32_t>(0x3)
  static ::TMPro::__TMP_InputField__ContentType const DecimalNumber;

  /// @brief Field EmailAddress value: static_cast<int32_t>(0x6)
  static ::TMPro::__TMP_InputField__ContentType const EmailAddress;

  /// @brief Field IntegerNumber value: static_cast<int32_t>(0x2)
  static ::TMPro::__TMP_InputField__ContentType const IntegerNumber;

  /// @brief Field Name value: static_cast<int32_t>(0x5)
  static ::TMPro::__TMP_InputField__ContentType const Name;

  /// @brief Field Password value: static_cast<int32_t>(0x7)
  static ::TMPro::__TMP_InputField__ContentType const Password;

  /// @brief Field Pin value: static_cast<int32_t>(0x8)
  static ::TMPro::__TMP_InputField__ContentType const Pin;

  /// @brief Field Standard value: static_cast<int32_t>(0x0)
  static ::TMPro::__TMP_InputField__ContentType const Standard;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14454 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_InputField__ContentType, 0x4>, "Size mismatch!");

static_assert(offsetof(::TMPro::__TMP_InputField__ContentType, value__) == 0x0, "Offset mismatch!");

} // namespace TMPro
// Type: ::InputType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// CS Name: ::TMP_InputField::InputType
struct CORDL_TYPE __TMP_InputField__InputType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TMP_InputField__InputType_Unwrapped
  enum struct ____TMP_InputField__InputType_Unwrapped : int32_t {
    __E_Standard = static_cast<int32_t>(0x0),
    __E_AutoCorrect = static_cast<int32_t>(0x1),
    __E_Password = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TMP_InputField__InputType_Unwrapped() const noexcept {
    return static_cast<____TMP_InputField__InputType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_InputField__InputType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TMP_InputField__InputType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AutoCorrect value: static_cast<int32_t>(0x1)
  static ::TMPro::__TMP_InputField__InputType const AutoCorrect;

  /// @brief Field Password value: static_cast<int32_t>(0x2)
  static ::TMPro::__TMP_InputField__InputType const Password;

  /// @brief Field Standard value: static_cast<int32_t>(0x0)
  static ::TMPro::__TMP_InputField__InputType const Standard;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14455 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_InputField__InputType, 0x4>, "Size mismatch!");

static_assert(offsetof(::TMPro::__TMP_InputField__InputType, value__) == 0x0, "Offset mismatch!");

} // namespace TMPro
// Type: ::CharacterValidation
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// CS Name: ::TMP_InputField::CharacterValidation
struct CORDL_TYPE __TMP_InputField__CharacterValidation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TMP_InputField__CharacterValidation_Unwrapped
  enum struct ____TMP_InputField__CharacterValidation_Unwrapped : int32_t {
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
  constexpr operator ____TMP_InputField__CharacterValidation_Unwrapped() const noexcept {
    return static_cast<____TMP_InputField__CharacterValidation_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_InputField__CharacterValidation();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TMP_InputField__CharacterValidation(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Alphanumeric value: static_cast<int32_t>(0x4)
  static ::TMPro::__TMP_InputField__CharacterValidation const Alphanumeric;

  /// @brief Field CustomValidator value: static_cast<int32_t>(0x8)
  static ::TMPro::__TMP_InputField__CharacterValidation const CustomValidator;

  /// @brief Field Decimal value: static_cast<int32_t>(0x3)
  static ::TMPro::__TMP_InputField__CharacterValidation const Decimal;

  /// @brief Field Digit value: static_cast<int32_t>(0x1)
  static ::TMPro::__TMP_InputField__CharacterValidation const Digit;

  /// @brief Field EmailAddress value: static_cast<int32_t>(0x7)
  static ::TMPro::__TMP_InputField__CharacterValidation const EmailAddress;

  /// @brief Field Integer value: static_cast<int32_t>(0x2)
  static ::TMPro::__TMP_InputField__CharacterValidation const Integer;

  /// @brief Field Name value: static_cast<int32_t>(0x5)
  static ::TMPro::__TMP_InputField__CharacterValidation const Name;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::TMPro::__TMP_InputField__CharacterValidation const None;

  /// @brief Field Regex value: static_cast<int32_t>(0x6)
  static ::TMPro::__TMP_InputField__CharacterValidation const Regex;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14456 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_InputField__CharacterValidation, 0x4>, "Size mismatch!");

static_assert(offsetof(::TMPro::__TMP_InputField__CharacterValidation, value__) == 0x0, "Offset mismatch!");

} // namespace TMPro
// Type: ::LineType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// CS Name: ::TMP_InputField::LineType
struct CORDL_TYPE __TMP_InputField__LineType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TMP_InputField__LineType_Unwrapped
  enum struct ____TMP_InputField__LineType_Unwrapped : int32_t {
    __E_SingleLine = static_cast<int32_t>(0x0),
    __E_MultiLineSubmit = static_cast<int32_t>(0x1),
    __E_MultiLineNewline = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TMP_InputField__LineType_Unwrapped() const noexcept {
    return static_cast<____TMP_InputField__LineType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_InputField__LineType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TMP_InputField__LineType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field MultiLineNewline value: static_cast<int32_t>(0x2)
  static ::TMPro::__TMP_InputField__LineType const MultiLineNewline;

  /// @brief Field MultiLineSubmit value: static_cast<int32_t>(0x1)
  static ::TMPro::__TMP_InputField__LineType const MultiLineSubmit;

  /// @brief Field SingleLine value: static_cast<int32_t>(0x0)
  static ::TMPro::__TMP_InputField__LineType const SingleLine;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14457 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_InputField__LineType, 0x4>, "Size mismatch!");

static_assert(offsetof(::TMPro::__TMP_InputField__LineType, value__) == 0x0, "Offset mismatch!");

} // namespace TMPro
// Type: ::OnValidateInput
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TMP_InputField::OnValidateInput*
class CORDL_TYPE __TMP_InputField__OnValidateInput : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x47803d4, size 0xc0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW text, int32_t charIndex, char16_t addedChar, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4780494, size 0x28, virtual true, abstract: false, final false
  inline char16_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x47803c0, size 0x14, virtual true, abstract: false, final false
  inline char16_t Invoke(::StringW text, int32_t charIndex, char16_t addedChar);

  static inline ::TMPro::__TMP_InputField__OnValidateInput* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4780320, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_InputField__OnValidateInput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TMP_InputField__OnValidateInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TMP_InputField__OnValidateInput(__TMP_InputField__OnValidateInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_InputField__OnValidateInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TMP_InputField__OnValidateInput(__TMP_InputField__OnValidateInput const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14458 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_InputField__OnValidateInput, 0x80>, "Size mismatch!");

} // namespace TMPro
// Type: ::SubmitEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TMP_InputField::SubmitEvent*
class CORDL_TYPE __TMP_InputField__SubmitEvent : public ::UnityEngine::Events::UnityEvent_1<::StringW> {
public:
  // Declarations
  static inline ::TMPro::__TMP_InputField__SubmitEvent* New_ctor();

  /// @brief Method .ctor, addr 0x47804bc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_InputField__SubmitEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TMP_InputField__SubmitEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TMP_InputField__SubmitEvent(__TMP_InputField__SubmitEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_InputField__SubmitEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TMP_InputField__SubmitEvent(__TMP_InputField__SubmitEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14459 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_InputField__SubmitEvent, 0x30>, "Size mismatch!");

} // namespace TMPro
// Type: ::OnChangeEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TMP_InputField::OnChangeEvent*
class CORDL_TYPE __TMP_InputField__OnChangeEvent : public ::UnityEngine::Events::UnityEvent_1<::StringW> {
public:
  // Declarations
  static inline ::TMPro::__TMP_InputField__OnChangeEvent* New_ctor();

  /// @brief Method .ctor, addr 0x4780504, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_InputField__OnChangeEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TMP_InputField__OnChangeEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TMP_InputField__OnChangeEvent(__TMP_InputField__OnChangeEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_InputField__OnChangeEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TMP_InputField__OnChangeEvent(__TMP_InputField__OnChangeEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14460 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_InputField__OnChangeEvent, 0x30>, "Size mismatch!");

} // namespace TMPro
// Type: ::SelectionEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TMP_InputField::SelectionEvent*
class CORDL_TYPE __TMP_InputField__SelectionEvent : public ::UnityEngine::Events::UnityEvent_1<::StringW> {
public:
  // Declarations
  static inline ::TMPro::__TMP_InputField__SelectionEvent* New_ctor();

  /// @brief Method .ctor, addr 0x478054c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_InputField__SelectionEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TMP_InputField__SelectionEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TMP_InputField__SelectionEvent(__TMP_InputField__SelectionEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_InputField__SelectionEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TMP_InputField__SelectionEvent(__TMP_InputField__SelectionEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14461 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_InputField__SelectionEvent, 0x30>, "Size mismatch!");

} // namespace TMPro
// Type: ::TextSelectionEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TMP_InputField::TextSelectionEvent*
class CORDL_TYPE __TMP_InputField__TextSelectionEvent : public ::UnityEngine::Events::UnityEvent_3<::StringW, int32_t, int32_t> {
public:
  // Declarations
  static inline ::TMPro::__TMP_InputField__TextSelectionEvent* New_ctor();

  /// @brief Method .ctor, addr 0x4780594, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_InputField__TextSelectionEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TMP_InputField__TextSelectionEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TMP_InputField__TextSelectionEvent(__TMP_InputField__TextSelectionEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_InputField__TextSelectionEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TMP_InputField__TextSelectionEvent(__TMP_InputField__TextSelectionEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14462 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_InputField__TextSelectionEvent, 0x30>, "Size mismatch!");

} // namespace TMPro
// Type: ::TouchScreenKeyboardEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TMP_InputField::TouchScreenKeyboardEvent*
class CORDL_TYPE __TMP_InputField__TouchScreenKeyboardEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::__TouchScreenKeyboard__Status> {
public:
  // Declarations
  static inline ::TMPro::__TMP_InputField__TouchScreenKeyboardEvent* New_ctor();

  /// @brief Method .ctor, addr 0x47805dc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_InputField__TouchScreenKeyboardEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TMP_InputField__TouchScreenKeyboardEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TMP_InputField__TouchScreenKeyboardEvent(__TMP_InputField__TouchScreenKeyboardEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_InputField__TouchScreenKeyboardEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TMP_InputField__TouchScreenKeyboardEvent(__TMP_InputField__TouchScreenKeyboardEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14463 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_InputField__TouchScreenKeyboardEvent, 0x30>, "Size mismatch!");

} // namespace TMPro
// Type: ::EditState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// CS Name: ::TMP_InputField::EditState
struct CORDL_TYPE __TMP_InputField__EditState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TMP_InputField__EditState_Unwrapped
  enum struct ____TMP_InputField__EditState_Unwrapped : int32_t {
    __E_Continue = static_cast<int32_t>(0x0),
    __E_Finish = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TMP_InputField__EditState_Unwrapped() const noexcept {
    return static_cast<____TMP_InputField__EditState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_InputField__EditState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TMP_InputField__EditState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Continue value: static_cast<int32_t>(0x0)
  static ::TMPro::__TMP_InputField__EditState const Continue;

  /// @brief Field Finish value: static_cast<int32_t>(0x1)
  static ::TMPro::__TMP_InputField__EditState const Finish;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14464 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_InputField__EditState, 0x4>, "Size mismatch!");

static_assert(offsetof(::TMPro::__TMP_InputField__EditState, value__) == 0x0, "Offset mismatch!");

} // namespace TMPro
// Type: ::<CaretBlink>d__276
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TMP_InputField::<CaretBlink>d__276*
class CORDL_TYPE __TMP_InputField___CaretBlink_d__276 : public ::System::Object {
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

  /// @brief Method MoveNext, addr 0x4780650, size 0x104, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::TMPro::__TMP_InputField___CaretBlink_d__276* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x4780754, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x478075c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x4780794, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x478064c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::TMPro::TMP_InputField> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::TMPro::TMP_InputField>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::TMPro::TMP_InputField> value);

  /// @brief Method .ctor, addr 0x4780624, size 0x28, virtual false, abstract: false, final false
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
  constexpr __TMP_InputField___CaretBlink_d__276();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TMP_InputField___CaretBlink_d__276", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TMP_InputField___CaretBlink_d__276(__TMP_InputField___CaretBlink_d__276&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_InputField___CaretBlink_d__276", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TMP_InputField___CaretBlink_d__276(__TMP_InputField___CaretBlink_d__276 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_InputField> _____4__this;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14465 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_InputField___CaretBlink_d__276, 0x28>, "Size mismatch!");

static_assert(offsetof(::TMPro::__TMP_InputField___CaretBlink_d__276, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::__TMP_InputField___CaretBlink_d__276, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::__TMP_InputField___CaretBlink_d__276, _____4__this) == 0x20, "Offset mismatch!");

} // namespace TMPro
// Type: ::<MouseDragOutsideRect>d__294
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TMP_InputField::<MouseDragOutsideRect>d__294*
class CORDL_TYPE __TMP_InputField___MouseDragOutsideRect_d__294 : public ::System::Object {
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

  /// @brief Method MoveNext, addr 0x47807c8, size 0x228, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x47809f0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x47809f8, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x4780a30, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x47807c4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::TMPro::TMP_InputField> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::TMPro::TMP_InputField>& __cordl_internal_get___4__this();

  constexpr ::UnityEngine::EventSystems::PointerEventData*& __cordl_internal_get_eventData();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::PointerEventData*> const& __cordl_internal_get_eventData() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::TMPro::TMP_InputField> value);

  constexpr void __cordl_internal_set_eventData(::UnityEngine::EventSystems::PointerEventData* value);

  /// @brief Method .ctor, addr 0x478079c, size 0x28, virtual false, abstract: false, final false
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
  constexpr __TMP_InputField___MouseDragOutsideRect_d__294();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TMP_InputField___MouseDragOutsideRect_d__294", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TMP_InputField___MouseDragOutsideRect_d__294(__TMP_InputField___MouseDragOutsideRect_d__294&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_InputField___MouseDragOutsideRect_d__294", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TMP_InputField___MouseDragOutsideRect_d__294(__TMP_InputField___MouseDragOutsideRect_d__294 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_InputField> _____4__this;

  /// @brief Field eventData, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::EventSystems::PointerEventData* ___eventData;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14466 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294, 0x30>, "Size mismatch!");

static_assert(offsetof(::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294, ___eventData) == 0x28, "Offset mismatch!");

} // namespace TMPro
// Type: TMPro::TMP_InputField
// SizeInfo { instance_size: 760, native_size: -1, calculated_instance_size: 760, calculated_native_size: 760, minimum_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TMPro::TMP_InputField*
class CORDL_TYPE TMP_InputField : public ::UnityEngine::UI::Selectable {
public:
  // Declarations
  using CharacterValidation = ::TMPro::__TMP_InputField__CharacterValidation;

  using ContentType = ::TMPro::__TMP_InputField__ContentType;

  using EditState = ::TMPro::__TMP_InputField__EditState;

  using InputType = ::TMPro::__TMP_InputField__InputType;

  using LineType = ::TMPro::__TMP_InputField__LineType;

  using OnChangeEvent = ::TMPro::__TMP_InputField__OnChangeEvent;

  using OnValidateInput = ::TMPro::__TMP_InputField__OnValidateInput;

  using SelectionEvent = ::TMPro::__TMP_InputField__SelectionEvent;

  using SubmitEvent = ::TMPro::__TMP_InputField__SubmitEvent;

  using TextSelectionEvent = ::TMPro::__TMP_InputField__TextSelectionEvent;

  using TouchScreenKeyboardEvent = ::TMPro::__TMP_InputField__TouchScreenKeyboardEvent;

  using _CaretBlink_d__276 = ::TMPro::__TMP_InputField___CaretBlink_d__276;

  using _MouseDragOutsideRect_d__294 = ::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294;

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

  __declspec(property(get = get_characterValidation, put = set_characterValidation)) ::TMPro::__TMP_InputField__CharacterValidation characterValidation;

  __declspec(property(get = get_compositionLength)) int32_t compositionLength;

  __declspec(property(get = get_compositionString)) ::StringW compositionString;

  __declspec(property(get = get_contentType, put = set_contentType)) ::TMPro::__TMP_InputField__ContentType contentType;

  __declspec(property(get = get_customCaretColor, put = set_customCaretColor)) bool customCaretColor;

  __declspec(property(get = get_flexibleHeight)) float_t flexibleHeight;

  __declspec(property(get = get_flexibleWidth)) float_t flexibleWidth;

  __declspec(property(get = get_fontAsset, put = set_fontAsset)) ::UnityW<::TMPro::TMP_FontAsset> fontAsset;

  __declspec(property(get = get_hasSelection)) bool hasSelection;

  __declspec(property(get = get_inputSystem)) ::UnityW<::UnityEngine::EventSystems::BaseInput> inputSystem;

  __declspec(property(get = get_inputType, put = set_inputType)) ::TMPro::__TMP_InputField__InputType inputType;

  __declspec(property(get = get_inputValidator, put = set_inputValidator)) ::UnityW<::TMPro::TMP_InputValidator> inputValidator;

  __declspec(property(get = get_isFocused)) bool isFocused;

  __declspec(property(get = get_isRichTextEditingAllowed, put = set_isRichTextEditingAllowed)) bool isRichTextEditingAllowed;

  /// @brief Field kSeparators, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kSeparators, put = setStaticF_kSeparators)) ::ArrayW<char16_t, ::Array<char16_t>*> kSeparators;

  __declspec(property(get = get_keyboardType, put = set_keyboardType)) ::UnityEngine::TouchScreenKeyboardType keyboardType;

  __declspec(property(get = get_layoutPriority)) int32_t layoutPriority;

  __declspec(property(get = get_lineLimit, put = set_lineLimit)) int32_t lineLimit;

  __declspec(property(get = get_lineType, put = set_lineType)) ::TMPro::__TMP_InputField__LineType lineType;

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
  __declspec(property(get = __cordl_internal_get_m_CharacterValidation, put = __cordl_internal_set_m_CharacterValidation)) ::TMPro::__TMP_InputField__CharacterValidation m_CharacterValidation;

  /// @brief Field m_ContentType, offset 0x180, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ContentType, put = __cordl_internal_set_m_ContentType)) ::TMPro::__TMP_InputField__ContentType m_ContentType;

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
  __declspec(property(get = __cordl_internal_get_m_InputType, put = __cordl_internal_set_m_InputType)) ::TMPro::__TMP_InputField__InputType m_InputType;

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
  __declspec(property(get = __cordl_internal_get_m_LineType, put = __cordl_internal_set_m_LineType)) ::TMPro::__TMP_InputField__LineType m_LineType;

  /// @brief Field m_Mesh, offset 0x268, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Mesh, put = __cordl_internal_set_m_Mesh)) ::UnityW<::UnityEngine::Mesh> m_Mesh;

  /// @brief Field m_OnDeselect, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnDeselect, put = __cordl_internal_set_m_OnDeselect)) ::TMPro::__TMP_InputField__SelectionEvent* m_OnDeselect;

  /// @brief Field m_OnEndEdit, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnEndEdit, put = __cordl_internal_set_m_OnEndEdit)) ::TMPro::__TMP_InputField__SubmitEvent* m_OnEndEdit;

  /// @brief Field m_OnEndTextSelection, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnEndTextSelection, put = __cordl_internal_set_m_OnEndTextSelection)) ::TMPro::__TMP_InputField__TextSelectionEvent* m_OnEndTextSelection;

  /// @brief Field m_OnFocusSelectAll, offset 0x2c8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_OnFocusSelectAll, put = __cordl_internal_set_m_OnFocusSelectAll)) bool m_OnFocusSelectAll;

  /// @brief Field m_OnSelect, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnSelect, put = __cordl_internal_set_m_OnSelect)) ::TMPro::__TMP_InputField__SelectionEvent* m_OnSelect;

  /// @brief Field m_OnSubmit, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnSubmit, put = __cordl_internal_set_m_OnSubmit)) ::TMPro::__TMP_InputField__SubmitEvent* m_OnSubmit;

  /// @brief Field m_OnTextSelection, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnTextSelection, put = __cordl_internal_set_m_OnTextSelection)) ::TMPro::__TMP_InputField__TextSelectionEvent* m_OnTextSelection;

  /// @brief Field m_OnTouchScreenKeyboardStatusChanged, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnTouchScreenKeyboardStatusChanged,
                      put = __cordl_internal_set_m_OnTouchScreenKeyboardStatusChanged)) ::TMPro::__TMP_InputField__TouchScreenKeyboardEvent* m_OnTouchScreenKeyboardStatusChanged;

  /// @brief Field m_OnValidateInput, offset 0x1f0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnValidateInput, put = __cordl_internal_set_m_OnValidateInput)) ::TMPro::__TMP_InputField__OnValidateInput* m_OnValidateInput;

  /// @brief Field m_OnValueChanged, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnValueChanged, put = __cordl_internal_set_m_OnValueChanged)) ::TMPro::__TMP_InputField__OnChangeEvent* m_OnValueChanged;

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

  __declspec(property(get = get_onDeselect, put = set_onDeselect)) ::TMPro::__TMP_InputField__SelectionEvent* onDeselect;

  __declspec(property(get = get_onEndEdit, put = set_onEndEdit)) ::TMPro::__TMP_InputField__SubmitEvent* onEndEdit;

  __declspec(property(get = get_onEndTextSelection, put = set_onEndTextSelection)) ::TMPro::__TMP_InputField__TextSelectionEvent* onEndTextSelection;

  __declspec(property(get = get_onFocusSelectAll, put = set_onFocusSelectAll)) bool onFocusSelectAll;

  __declspec(property(get = get_onSelect, put = set_onSelect)) ::TMPro::__TMP_InputField__SelectionEvent* onSelect;

  __declspec(property(get = get_onSubmit, put = set_onSubmit)) ::TMPro::__TMP_InputField__SubmitEvent* onSubmit;

  __declspec(property(get = get_onTextSelection, put = set_onTextSelection)) ::TMPro::__TMP_InputField__TextSelectionEvent* onTextSelection;

  __declspec(property(get = get_onTouchScreenKeyboardStatusChanged,
                      put = set_onTouchScreenKeyboardStatusChanged)) ::TMPro::__TMP_InputField__TouchScreenKeyboardEvent* onTouchScreenKeyboardStatusChanged;

  __declspec(property(get = get_onValidateInput, put = set_onValidateInput)) ::TMPro::__TMP_InputField__OnValidateInput* onValidateInput;

  __declspec(property(get = get_onValueChanged, put = set_onValueChanged)) ::TMPro::__TMP_InputField__OnChangeEvent* onValueChanged;

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

  /// @brief Method ActivateInputField, addr 0x4769d94, size 0x114, virtual false, abstract: false, final false
  inline void ActivateInputField();

  /// @brief Method ActivateInputFieldInternal, addr 0x4763d30, size 0x3dc, virtual false, abstract: false, final false
  inline void ActivateInputFieldInternal();

  /// @brief Method AdjustRectTransformRelativeToViewport, addr 0x4769914, size 0x480, virtual false, abstract: false, final false
  inline void AdjustRectTransformRelativeToViewport(::UnityEngine::Vector2 startPosition, float_t height, bool isCharVisible);

  /// @brief Method AdjustTextPositionRelativeToViewport, addr 0x4766dfc, size 0x198, virtual false, abstract: false, final false
  inline void AdjustTextPositionRelativeToViewport(float_t relativePosition);

  /// @brief Method Append, addr 0x4768068, size 0xb0, virtual true, abstract: false, final false
  inline void Append(::StringW input);

  /// @brief Method Append, addr 0x4768118, size 0x23c, virtual true, abstract: false, final false
  inline void Append(char16_t input);

  /// @brief Method AssignPositioningIfNeeded, addr 0x47620ac, size 0x500, virtual false, abstract: false, final false
  inline void AssignPositioningIfNeeded();

  /// @brief Method Backspace, addr 0x4765928, size 0x388, virtual false, abstract: false, final false
  inline void Backspace();

  /// @brief Method CalculateLayoutInputHorizontal, addr 0x4769fac, size 0x4, virtual true, abstract: false, final false
  inline void CalculateLayoutInputHorizontal();

  /// @brief Method CalculateLayoutInputVertical, addr 0x4769fb0, size 0x4, virtual true, abstract: false, final false
  inline void CalculateLayoutInputVertical();

  /// @brief Method CaretBlink, addr 0x4762d0c, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* CaretBlink();

  /// @brief Method ClampCaretPos, addr 0x47615e8, size 0x44, virtual false, abstract: false, final false
  inline void ClampCaretPos(ByRef<int32_t> pos);

  /// @brief Method ClampStringPos, addr 0x47615b0, size 0x38, virtual false, abstract: false, final false
  inline void ClampStringPos(ByRef<int32_t> pos);

  /// @brief Method CreateCursorVerts, addr 0x47697c4, size 0x150, virtual false, abstract: false, final false
  inline void CreateCursorVerts();

  /// @brief Method DeactivateInputField, addr 0x47628d0, size 0x1bc, virtual false, abstract: false, final false
  inline void DeactivateInputField(bool clearSelection);

  /// @brief Method Delete, addr 0x4765f94, size 0x198, virtual false, abstract: false, final false
  inline void Delete();

  /// @brief Method DeleteKey, addr 0x4765cb0, size 0x224, virtual false, abstract: false, final false
  inline void DeleteKey();

  /// @brief Method DoStateTransition, addr 0x4769f80, size 0x2c, virtual true, abstract: false, final false
  inline void DoStateTransition(::UnityEngine::UI::__Selectable__SelectionState state, bool instant);

  /// @brief Method EnforceContentType, addr 0x4760fac, size 0xbc, virtual false, abstract: false, final false
  inline void EnforceContentType();

  /// @brief Method FindNextWordBegin, addr 0x4766f94, size 0xd4, virtual false, abstract: false, final false
  inline int32_t FindNextWordBegin();

  /// @brief Method FindPrevWordBegin, addr 0x4767068, size 0xb8, virtual false, abstract: false, final false
  inline int32_t FindPrevWordBegin();

  /// @brief Method ForceLabelUpdate, addr 0x47687d4, size 0x4, virtual false, abstract: false, final false
  inline void ForceLabelUpdate();

  /// @brief Method GenerateCaret, addr 0x4768c0c, size 0x5e4, virtual false, abstract: false, final false
  inline void GenerateCaret(::UnityEngine::UI::VertexHelper* vbo, ::UnityEngine::Vector2 roundingOffset);

  /// @brief Method GenerateHightlight, addr 0x47691f0, size 0x5d4, virtual false, abstract: false, final false
  inline void GenerateHightlight(::UnityEngine::UI::VertexHelper* vbo, ::UnityEngine::Vector2 roundingOffset);

  /// @brief Method GetCaretPositionFromStringIndex, addr 0x4762bc4, size 0x70, virtual false, abstract: false, final false
  inline int32_t GetCaretPositionFromStringIndex(int32_t stringIndex);

  /// @brief Method GetMaxCaretPositionFromStringIndex, addr 0x4768764, size 0x70, virtual false, abstract: false, final false
  inline int32_t GetMaxCaretPositionFromStringIndex(int32_t stringIndex);

  /// @brief Method GetMinCaretPositionFromStringIndex, addr 0x47686f0, size 0x74, virtual false, abstract: false, final false
  inline int32_t GetMinCaretPositionFromStringIndex(int32_t stringIndex);

  /// @brief Method GetScrollPositionRelativeToViewport, addr 0x4766d1c, size 0xe0, virtual false, abstract: false, final false
  inline float_t GetScrollPositionRelativeToViewport();

  /// @brief Method GetSelectedString, addr 0x4765ed4, size 0xc0, virtual false, abstract: false, final false
  inline ::StringW GetSelectedString();

  /// @brief Method GetStringIndexFromCaretPosition, addr 0x4762f2c, size 0x60, virtual false, abstract: false, final false
  inline int32_t GetStringIndexFromCaretPosition(int32_t caretPosition);

  /// @brief Method GraphicUpdateComplete, addr 0x47688a0, size 0x4, virtual true, abstract: false, final false
  inline void GraphicUpdateComplete();

  /// @brief Method InPlaceEditing, addr 0x4763480, size 0x104, virtual false, abstract: false, final false
  inline bool InPlaceEditing();

  /// @brief Method Insert, addr 0x4768354, size 0x110, virtual false, abstract: false, final false
  inline void Insert(char16_t c);

  /// @brief Method IsValidChar, addr 0x4766944, size 0x20, virtual true, abstract: false, final false
  inline bool IsValidChar(char16_t c);

  /// @brief Method KeyPressed, addr 0x4765504, size 0x424, virtual false, abstract: false, final false
  inline ::TMPro::__TMP_InputField__EditState KeyPressed(::UnityEngine::Event* evt);

  /// @brief Method LateUpdate, addr 0x47636cc, size 0x664, virtual true, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method LayoutComplete, addr 0x476889c, size 0x4, virtual true, abstract: false, final false
  inline void LayoutComplete();

  /// @brief Method LineDownCharacterPosition, addr 0x4767270, size 0x14c, virtual false, abstract: false, final false
  inline int32_t LineDownCharacterPosition(int32_t originalPos, bool goToLastChar);

  /// @brief Method LineUpCharacterPosition, addr 0x4767120, size 0x150, virtual false, abstract: false, final false
  inline int32_t LineUpCharacterPosition(int32_t originalPos, bool goToFirstChar);

  /// @brief Method MarkGeometryAsDirty, addr 0x47604b0, size 0x58, virtual false, abstract: false, final false
  inline void MarkGeometryAsDirty();

  /// @brief Method MayDrag, addr 0x47649b0, size 0xd8, virtual false, abstract: false, final false
  inline bool MayDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method MouseDragOutsideRect, addr 0x4764d3c, size 0x74, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* MouseDragOutsideRect(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method MoveDown, addr 0x4766920, size 0xc, virtual false, abstract: false, final false
  inline void MoveDown(bool shift);

  /// @brief Method MoveDown, addr 0x476778c, size 0x1c4, virtual false, abstract: false, final false
  inline void MoveDown(bool shift, bool goToLastChar);

  /// @brief Method MoveLeft, addr 0x4766168, size 0x3b0, virtual false, abstract: false, final false
  inline void MoveLeft(bool shift, bool ctrl);

  /// @brief Method MovePageDown, addr 0x4766938, size 0xc, virtual false, abstract: false, final false
  inline void MovePageDown(bool shift);

  /// @brief Method MovePageDown, addr 0x4767dac, size 0x2bc, virtual false, abstract: false, final false
  inline void MovePageDown(bool shift, bool goToLastChar);

  /// @brief Method MovePageUp, addr 0x476692c, size 0xc, virtual false, abstract: false, final false
  inline void MovePageUp(bool shift);

  /// @brief Method MovePageUp, addr 0x4767b00, size 0x2ac, virtual false, abstract: false, final false
  inline void MovePageUp(bool shift, bool goToFirstChar);

  /// @brief Method MoveRight, addr 0x4766518, size 0x3fc, virtual false, abstract: false, final false
  inline void MoveRight(bool shift, bool ctrl);

  /// @brief Method MoveTextEnd, addr 0x4762df4, size 0x138, virtual false, abstract: false, final false
  inline void MoveTextEnd(bool shift);

  /// @brief Method MoveTextStart, addr 0x4762f8c, size 0x13c, virtual false, abstract: false, final false
  inline void MoveTextStart(bool shift);

  /// @brief Method MoveToEndOfLine, addr 0x47630c8, size 0x180, virtual false, abstract: false, final false
  inline void MoveToEndOfLine(bool shift, bool ctrl);

  /// @brief Method MoveToStartOfLine, addr 0x4763248, size 0x190, virtual false, abstract: false, final false
  inline void MoveToStartOfLine(bool shift, bool ctrl);

  /// @brief Method MoveUp, addr 0x4766914, size 0xc, virtual false, abstract: false, final false
  inline void MoveUp(bool shift);

  /// @brief Method MoveUp, addr 0x4767950, size 0x1b0, virtual false, abstract: false, final false
  inline void MoveUp(bool shift, bool goToFirstChar);

  static inline ::TMPro::TMP_InputField* New_ctor();

  /// @brief Method ON_TEXT_CHANGED, addr 0x4762a8c, size 0x138, virtual false, abstract: false, final false
  inline void ON_TEXT_CHANGED(::UnityEngine::Object* obj);

  /// @brief Method OnBeginDrag, addr 0x4764a88, size 0x20, virtual true, abstract: false, final false
  inline void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnControlClick, addr 0x4769ef0, size 0x4, virtual false, abstract: false, final false
  inline void OnControlClick();

  /// @brief Method OnDeselect, addr 0x4769ef4, size 0x38, virtual true, abstract: false, final false
  inline void OnDeselect(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnDisable, addr 0x47625b0, size 0x320, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnDrag, addr 0x4764aa8, size 0x294, virtual true, abstract: false, final false
  inline void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnEnable, addr 0x4761978, size 0x734, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnEndDrag, addr 0x4764db0, size 0x1c, virtual true, abstract: false, final false
  inline void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnFillVBO, addr 0x47688a4, size 0x368, virtual false, abstract: false, final false
  inline void OnFillVBO(::UnityEngine::Mesh* vbo);

  /// @brief Method OnFocus, addr 0x4762dac, size 0x10, virtual false, abstract: false, final false
  inline void OnFocus();

  /// @brief Method OnPointerClick, addr 0x4769ecc, size 0x24, virtual true, abstract: false, final false
  inline void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerDown, addr 0x4764dcc, size 0x738, virtual true, abstract: false, final false
  inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnScroll, addr 0x4766b64, size 0x1b8, virtual true, abstract: false, final false
  inline void OnScroll(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnScrollbarValueChange, addr 0x47686b4, size 0x3c, virtual false, abstract: false, final false
  inline void OnScrollbarValueChange(float_t value);

  /// @brief Method OnSelect, addr 0x4769ea8, size 0x24, virtual true, abstract: false, final false
  inline void OnSelect(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnSubmit, addr 0x4769f2c, size 0x54, virtual true, abstract: false, final false
  inline void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnUpdateSelected, addr 0x4766968, size 0x1a0, virtual true, abstract: false, final false
  inline void OnUpdateSelected(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method PageDownCharacterPosition, addr 0x47675a0, size 0x1ec, virtual false, abstract: false, final false
  inline int32_t PageDownCharacterPosition(int32_t originalPos, bool goToLastChar);

  /// @brief Method PageUpCharacterPosition, addr 0x47673bc, size 0x1e4, virtual false, abstract: false, final false
  inline int32_t PageUpCharacterPosition(int32_t originalPos, bool goToFirstChar);

  /// @brief Method ProcessEvent, addr 0x4766964, size 0x4, virtual false, abstract: false, final false
  inline void ProcessEvent(::UnityEngine::Event* e);

  /// @brief Method Rebuild, addr 0x47687d8, size 0x10, virtual true, abstract: false, final false
  inline void Rebuild(::UnityEngine::UI::CanvasUpdate update);

  /// @brief Method ReleaseSelection, addr 0x476410c, size 0x2c, virtual false, abstract: false, final false
  inline void ReleaseSelection();

  /// @brief Method SelectAll, addr 0x4762dbc, size 0x38, virtual false, abstract: false, final false
  inline void SelectAll();

  /// @brief Method SendOnEndEdit, addr 0x4768464, size 0x5c, virtual false, abstract: false, final false
  inline void SendOnEndEdit();

  /// @brief Method SendOnEndTextSelection, addr 0x4768620, size 0x94, virtual false, abstract: false, final false
  inline void SendOnEndTextSelection();

  /// @brief Method SendOnFocus, addr 0x47684c0, size 0x5c, virtual false, abstract: false, final false
  inline void SendOnFocus();

  /// @brief Method SendOnFocusLost, addr 0x476851c, size 0x5c, virtual false, abstract: false, final false
  inline void SendOnFocusLost();

  /// @brief Method SendOnSubmit, addr 0x4766b08, size 0x5c, virtual false, abstract: false, final false
  inline void SendOnSubmit();

  /// @brief Method SendOnTextSelection, addr 0x4768578, size 0xa8, virtual false, abstract: false, final false
  inline void SendOnTextSelection();

  /// @brief Method SendOnValueChanged, addr 0x47602f8, size 0x5c, virtual false, abstract: false, final false
  inline void SendOnValueChanged();

  /// @brief Method SendOnValueChangedAndUpdateLabel, addr 0x4764998, size 0x18, virtual false, abstract: false, final false
  inline void SendOnValueChangedAndUpdateLabel();

  /// @brief Method SendTouchScreenKeyboardStatusChanged, addr 0x4764138, size 0x74, virtual false, abstract: false, final false
  inline void SendTouchScreenKeyboardStatusChanged();

  /// @brief Method SetCaretActive, addr 0x47603e0, size 0x54, virtual false, abstract: false, final false
  inline void SetCaretActive();

  /// @brief Method SetCaretVisible, addr 0x4762d74, size 0x38, virtual false, abstract: false, final false
  inline void SetCaretVisible();

  /// @brief Method SetGlobalFontAsset, addr 0x4760e00, size 0xe0, virtual false, abstract: false, final false
  inline void SetGlobalFontAsset(::TMPro::TMP_FontAsset* fontAsset);

  /// @brief Method SetGlobalPointSize, addr 0x4760d10, size 0xe8, virtual false, abstract: false, final false
  inline void SetGlobalPointSize(float_t pointSize);

  /// @brief Method SetText, addr 0x475fd38, size 0x134, virtual false, abstract: false, final false
  inline void SetText(::StringW value, bool sendCallback);

  /// @brief Method SetTextComponentRichTextMode, addr 0x4761490, size 0x88, virtual false, abstract: false, final false
  inline void SetTextComponentRichTextMode();

  /// @brief Method SetTextComponentWrapMode, addr 0x475f808, size 0x94, virtual false, abstract: false, final false
  inline void SetTextComponentWrapMode();

  /// @brief Method SetTextWithoutNotify, addr 0x475fe6c, size 0x8, virtual false, abstract: false, final false
  inline void SetTextWithoutNotify(::StringW input);

  /// @brief Method SetToCustom, addr 0x4761294, size 0x18, virtual false, abstract: false, final false
  inline void SetToCustom();

  /// @brief Method SetToCustom, addr 0x4761450, size 0x18, virtual false, abstract: false, final false
  inline void SetToCustom(::TMPro::__TMP_InputField__CharacterValidation characterValidation);

  /// @brief Method SetToCustomIfContentTypeIsNot, addr 0x4761130, size 0x64, virtual false, abstract: false, final false
  inline void SetToCustomIfContentTypeIsNot(::ArrayW<::TMPro::__TMP_InputField__ContentType, ::Array<::TMPro::__TMP_InputField__ContentType>*> allowedContentTypes);

  /// @brief Method UnityEngine.UI.ICanvasElement.get_transform, addr 0x476a2d0, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Transform> UnityEngine_UI_ICanvasElement_get_transform();

  /// @brief Method UpdateGeometry, addr 0x47687e8, size 0xb4, virtual false, abstract: false, final false
  inline void UpdateGeometry();

  /// @brief Method UpdateLabel, addr 0x475fe74, size 0x484, virtual false, abstract: false, final false
  inline void UpdateLabel();

  /// @brief Method UpdateMaskRegions, addr 0x47625ac, size 0x4, virtual false, abstract: false, final false
  inline void UpdateMaskRegions();

  /// @brief Method UpdateScrollbar, addr 0x4762c34, size 0xd8, virtual false, abstract: false, final false
  inline void UpdateScrollbar();

  /// @brief Method UpdateStringPositionFromKeyboard, addr 0x4763584, size 0x148, virtual false, abstract: false, final false
  inline void UpdateStringPositionFromKeyboard();

  /// @brief Method UpdateTouchKeyboardFromEditChanges, addr 0x476612c, size 0x3c, virtual false, abstract: false, final false
  inline void UpdateTouchKeyboardFromEditChanges();

  /// @brief Method Validate, addr 0x47641ac, size 0x7ec, virtual false, abstract: false, final false
  inline char16_t Validate(::StringW text, int32_t pos, char16_t ch);

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_caretRectTrans() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_caretRectTrans();

  constexpr bool const& __cordl_internal_get_m_AllowInput() const;

  constexpr bool& __cordl_internal_get_m_AllowInput();

  constexpr char16_t const& __cordl_internal_get_m_AsteriskChar() const;

  constexpr char16_t& __cordl_internal_get_m_AsteriskChar();

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_m_BlinkCoroutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_m_BlinkCoroutine() const;

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

  constexpr ::TMPro::__TMP_InputField__CharacterValidation const& __cordl_internal_get_m_CharacterValidation() const;

  constexpr ::TMPro::__TMP_InputField__CharacterValidation& __cordl_internal_get_m_CharacterValidation();

  constexpr ::TMPro::__TMP_InputField__ContentType const& __cordl_internal_get_m_ContentType() const;

  constexpr ::TMPro::__TMP_InputField__ContentType& __cordl_internal_get_m_ContentType();

  constexpr ::ArrayW<::UnityEngine::UIVertex, ::Array<::UnityEngine::UIVertex>*> const& __cordl_internal_get_m_CursorVerts() const;

  constexpr ::ArrayW<::UnityEngine::UIVertex, ::Array<::UnityEngine::UIVertex>*>& __cordl_internal_get_m_CursorVerts();

  constexpr bool const& __cordl_internal_get_m_CustomCaretColor() const;

  constexpr bool& __cordl_internal_get_m_CustomCaretColor();

  constexpr float_t const& __cordl_internal_get_m_DoubleClickDelay() const;

  constexpr float_t& __cordl_internal_get_m_DoubleClickDelay();

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_m_DragCoroutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_m_DragCoroutine() const;

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

  constexpr ::UnityEngine::EventSystems::IScrollHandler*& __cordl_internal_get_m_IScrollHandlerParent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::IScrollHandler*> const& __cordl_internal_get_m_IScrollHandlerParent() const;

  constexpr ::TMPro::__TMP_InputField__InputType const& __cordl_internal_get_m_InputType() const;

  constexpr ::TMPro::__TMP_InputField__InputType& __cordl_internal_get_m_InputType();

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

  constexpr ::TMPro::__TMP_InputField__LineType const& __cordl_internal_get_m_LineType() const;

  constexpr ::TMPro::__TMP_InputField__LineType& __cordl_internal_get_m_LineType();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_Mesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_Mesh();

  constexpr ::TMPro::__TMP_InputField__SelectionEvent*& __cordl_internal_get_m_OnDeselect();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_InputField__SelectionEvent*> const& __cordl_internal_get_m_OnDeselect() const;

  constexpr ::TMPro::__TMP_InputField__SubmitEvent*& __cordl_internal_get_m_OnEndEdit();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_InputField__SubmitEvent*> const& __cordl_internal_get_m_OnEndEdit() const;

  constexpr ::TMPro::__TMP_InputField__TextSelectionEvent*& __cordl_internal_get_m_OnEndTextSelection();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_InputField__TextSelectionEvent*> const& __cordl_internal_get_m_OnEndTextSelection() const;

  constexpr bool const& __cordl_internal_get_m_OnFocusSelectAll() const;

  constexpr bool& __cordl_internal_get_m_OnFocusSelectAll();

  constexpr ::TMPro::__TMP_InputField__SelectionEvent*& __cordl_internal_get_m_OnSelect();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_InputField__SelectionEvent*> const& __cordl_internal_get_m_OnSelect() const;

  constexpr ::TMPro::__TMP_InputField__SubmitEvent*& __cordl_internal_get_m_OnSubmit();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_InputField__SubmitEvent*> const& __cordl_internal_get_m_OnSubmit() const;

  constexpr ::TMPro::__TMP_InputField__TextSelectionEvent*& __cordl_internal_get_m_OnTextSelection();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_InputField__TextSelectionEvent*> const& __cordl_internal_get_m_OnTextSelection() const;

  constexpr ::TMPro::__TMP_InputField__TouchScreenKeyboardEvent*& __cordl_internal_get_m_OnTouchScreenKeyboardStatusChanged();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_InputField__TouchScreenKeyboardEvent*> const& __cordl_internal_get_m_OnTouchScreenKeyboardStatusChanged() const;

  constexpr ::TMPro::__TMP_InputField__OnValidateInput*& __cordl_internal_get_m_OnValidateInput();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_InputField__OnValidateInput*> const& __cordl_internal_get_m_OnValidateInput() const;

  constexpr ::TMPro::__TMP_InputField__OnChangeEvent*& __cordl_internal_get_m_OnValueChanged();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_InputField__OnChangeEvent*> const& __cordl_internal_get_m_OnValueChanged() const;

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

  constexpr ::UnityEngine::Event*& __cordl_internal_get_m_ProcessingEvent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Event*> const& __cordl_internal_get_m_ProcessingEvent() const;

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

  constexpr ::UnityEngine::TouchScreenKeyboard*& __cordl_internal_get_m_SoftKeyboard();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TouchScreenKeyboard*> const& __cordl_internal_get_m_SoftKeyboard() const;

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

  constexpr ::UnityEngine::WaitForSecondsRealtime*& __cordl_internal_get_m_WaitForSecondsRealtime();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::WaitForSecondsRealtime*> const& __cordl_internal_get_m_WaitForSecondsRealtime() const;

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

  constexpr void __cordl_internal_set_m_CharacterValidation(::TMPro::__TMP_InputField__CharacterValidation value);

  constexpr void __cordl_internal_set_m_ContentType(::TMPro::__TMP_InputField__ContentType value);

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

  constexpr void __cordl_internal_set_m_InputType(::TMPro::__TMP_InputField__InputType value);

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

  constexpr void __cordl_internal_set_m_LineType(::TMPro::__TMP_InputField__LineType value);

  constexpr void __cordl_internal_set_m_Mesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_m_OnDeselect(::TMPro::__TMP_InputField__SelectionEvent* value);

  constexpr void __cordl_internal_set_m_OnEndEdit(::TMPro::__TMP_InputField__SubmitEvent* value);

  constexpr void __cordl_internal_set_m_OnEndTextSelection(::TMPro::__TMP_InputField__TextSelectionEvent* value);

  constexpr void __cordl_internal_set_m_OnFocusSelectAll(bool value);

  constexpr void __cordl_internal_set_m_OnSelect(::TMPro::__TMP_InputField__SelectionEvent* value);

  constexpr void __cordl_internal_set_m_OnSubmit(::TMPro::__TMP_InputField__SubmitEvent* value);

  constexpr void __cordl_internal_set_m_OnTextSelection(::TMPro::__TMP_InputField__TextSelectionEvent* value);

  constexpr void __cordl_internal_set_m_OnTouchScreenKeyboardStatusChanged(::TMPro::__TMP_InputField__TouchScreenKeyboardEvent* value);

  constexpr void __cordl_internal_set_m_OnValidateInput(::TMPro::__TMP_InputField__OnValidateInput* value);

  constexpr void __cordl_internal_set_m_OnValueChanged(::TMPro::__TMP_InputField__OnChangeEvent* value);

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

  /// @brief Method .ctor, addr 0x475f588, size 0x280, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_kSeparators();

  /// @brief Method get_asteriskChar, addr 0x476152c, size 0x8, virtual false, abstract: false, final false
  inline char16_t get_asteriskChar();

  /// @brief Method get_caretBlinkRate, addr 0x476035c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_caretBlinkRate();

  /// @brief Method get_caretColor, addr 0x4760758, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_caretColor();

  /// @brief Method get_caretPosition, addr 0x4761758, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_caretPosition();

  /// @brief Method get_caretPositionInternal, addr 0x476162c, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_caretPositionInternal();

  /// @brief Method get_caretSelectPositionInternal, addr 0x47616a4, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_caretSelectPositionInternal();

  /// @brief Method get_caretWidth, addr 0x4760434, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_caretWidth();

  /// @brief Method get_characterLimit, addr 0x4760b8c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_characterLimit();

  /// @brief Method get_characterValidation, addr 0x4761338, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::__TMP_InputField__CharacterValidation get_characterValidation();

  /// @brief Method get_clipboard, addr 0x47633d8, size 0x50, virtual false, abstract: false, final false
  static inline ::StringW get_clipboard();

  /// @brief Method get_compositionLength, addr 0x475f55c, size 0x2c, virtual false, abstract: false, final false
  inline int32_t get_compositionLength();

  /// @brief Method get_compositionString, addr 0x475f4c8, size 0x94, virtual false, abstract: false, final false
  inline ::StringW get_compositionString();

  /// @brief Method get_contentType, addr 0x4760f30, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::__TMP_InputField__ContentType get_contentType();

  /// @brief Method get_customCaretColor, addr 0x47607c8, size 0x8, virtual false, abstract: false, final false
  inline bool get_customCaretColor();

  /// @brief Method get_flexibleHeight, addr 0x476a22c, size 0x8, virtual true, abstract: false, final false
  inline float_t get_flexibleHeight();

  /// @brief Method get_flexibleWidth, addr 0x476a0ec, size 0x8, virtual true, abstract: false, final false
  inline float_t get_flexibleWidth();

  /// @brief Method get_fontAsset, addr 0x4760df8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::TMPro::TMP_FontAsset> get_fontAsset();

  /// @brief Method get_hasSelection, addr 0x476171c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_hasSelection();

  /// @brief Method get_inputSystem, addr 0x475f3b8, size 0x110, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::EventSystems::BaseInput> get_inputSystem();

  /// @brief Method get_inputType, addr 0x4761208, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::__TMP_InputField__InputType get_inputType();

  /// @brief Method get_inputValidator, addr 0x47613c4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::TMPro::TMP_InputValidator> get_inputValidator();

  /// @brief Method get_isFocused, addr 0x4760354, size 0x8, virtual false, abstract: false, final false
  inline bool get_isFocused();

  /// @brief Method get_isRichTextEditingAllowed, addr 0x4760f1c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isRichTextEditingAllowed();

  /// @brief Method get_keyboardType, addr 0x47612ac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::TouchScreenKeyboardType get_keyboardType();

  /// @brief Method get_layoutPriority, addr 0x476a234, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_layoutPriority();

  /// @brief Method get_lineLimit, addr 0x4761194, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_lineLimit();

  /// @brief Method get_lineType, addr 0x4761068, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::__TMP_InputField__LineType get_lineType();

  /// @brief Method get_mesh, addr 0x475f89c, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_mesh();

  /// @brief Method get_minHeight, addr 0x476a0f4, size 0x8, virtual true, abstract: false, final false
  inline float_t get_minHeight();

  /// @brief Method get_minWidth, addr 0x4769fb4, size 0x8, virtual true, abstract: false, final false
  inline float_t get_minWidth();

  /// @brief Method get_multiLine, addr 0x4761518, size 0x14, virtual false, abstract: false, final false
  inline bool get_multiLine();

  /// @brief Method get_onDeselect, addr 0x476094c, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::__TMP_InputField__SelectionEvent* get_onDeselect();

  /// @brief Method get_onEndEdit, addr 0x476082c, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::__TMP_InputField__SubmitEvent* get_onEndEdit();

  /// @brief Method get_onEndTextSelection, addr 0x4760a0c, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::__TMP_InputField__TextSelectionEvent* get_onEndTextSelection();

  /// @brief Method get_onFocusSelectAll, addr 0x4760ee0, size 0x8, virtual false, abstract: false, final false
  inline bool get_onFocusSelectAll();

  /// @brief Method get_onSelect, addr 0x47608ec, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::__TMP_InputField__SelectionEvent* get_onSelect();

  /// @brief Method get_onSubmit, addr 0x476088c, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::__TMP_InputField__SubmitEvent* get_onSubmit();

  /// @brief Method get_onTextSelection, addr 0x47609ac, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::__TMP_InputField__TextSelectionEvent* get_onTextSelection();

  /// @brief Method get_onTouchScreenKeyboardStatusChanged, addr 0x4760acc, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::__TMP_InputField__TouchScreenKeyboardEvent* get_onTouchScreenKeyboardStatusChanged();

  /// @brief Method get_onValidateInput, addr 0x4760b2c, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::__TMP_InputField__OnValidateInput* get_onValidateInput();

  /// @brief Method get_onValueChanged, addr 0x4760a6c, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::__TMP_InputField__OnChangeEvent* get_onValueChanged();

  /// @brief Method get_placeholder, addr 0x4760518, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Graphic> get_placeholder();

  /// @brief Method get_pointSize, addr 0x4760c54, size 0x8, virtual false, abstract: false, final false
  inline float_t get_pointSize();

  /// @brief Method get_preferredHeight, addr 0x476a0fc, size 0x130, virtual true, abstract: false, final false
  inline float_t get_preferredHeight();

  /// @brief Method get_preferredWidth, addr 0x4769fbc, size 0x130, virtual true, abstract: false, final false
  inline float_t get_preferredWidth();

  /// @brief Method get_readOnly, addr 0x4761468, size 0x8, virtual false, abstract: false, final false
  inline bool get_readOnly();

  /// @brief Method get_resetOnDeActivation, addr 0x4760ef4, size 0x8, virtual false, abstract: false, final false
  inline bool get_resetOnDeActivation();

  /// @brief Method get_restoreOriginalTextOnEscape, addr 0x4760f08, size 0x8, virtual false, abstract: false, final false
  inline bool get_restoreOriginalTextOnEscape();

  /// @brief Method get_richText, addr 0x476147c, size 0x8, virtual false, abstract: false, final false
  inline bool get_richText();

  /// @brief Method get_scrollSensitivity, addr 0x47606dc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_scrollSensitivity();

  /// @brief Method get_selectionAnchorPosition, addr 0x476181c, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_selectionAnchorPosition();

  /// @brief Method get_selectionColor, addr 0x47607ec, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_selectionColor();

  /// @brief Method get_selectionFocusPosition, addr 0x4761834, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_selectionFocusPosition();

  /// @brief Method get_selectionStringAnchorPosition, addr 0x4761948, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_selectionStringAnchorPosition();

  /// @brief Method get_selectionStringFocusPosition, addr 0x4761960, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_selectionStringFocusPosition();

  /// @brief Method get_shouldHideMobileInput, addr 0x475f93c, size 0x88, virtual false, abstract: false, final false
  inline bool get_shouldHideMobileInput();

  /// @brief Method get_shouldHideSoftKeyboard, addr 0x475fa80, size 0xd4, virtual false, abstract: false, final false
  inline bool get_shouldHideSoftKeyboard();

  /// @brief Method get_stringPosition, addr 0x476184c, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_stringPosition();

  /// @brief Method get_stringPositionInternal, addr 0x4761654, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_stringPositionInternal();

  /// @brief Method get_stringSelectPositionInternal, addr 0x47616cc, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_stringSelectPositionInternal();

  /// @brief Method get_text, addr 0x475fd28, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Method get_textComponent, addr 0x4760510, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::TMPro::TMP_Text> get_textComponent();

  /// @brief Method get_textViewport, addr 0x4760508, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_textViewport();

  /// @brief Method get_verticalScrollbar, addr 0x4760520, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Scrollbar> get_verticalScrollbar();

  /// @brief Method get_wasCanceled, addr 0x47615a8, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Method isKeyboardUsingEvents, addr 0x475fc94, size 0x94, virtual false, abstract: false, final false
  inline bool isKeyboardUsingEvents();

  static inline void setStaticF_kSeparators(::ArrayW<char16_t, ::Array<char16_t>*> value);

  /// @brief Method set_asteriskChar, addr 0x4761534, size 0x74, virtual false, abstract: false, final false
  inline void set_asteriskChar(char16_t value);

  /// @brief Method set_caretBlinkRate, addr 0x4760364, size 0x7c, virtual false, abstract: false, final false
  inline void set_caretBlinkRate(float_t value);

  /// @brief Method set_caretColor, addr 0x476079c, size 0x2c, virtual false, abstract: false, final false
  inline void set_caretColor(::UnityEngine::Color value);

  /// @brief Method set_caretPosition, addr 0x4761770, size 0x34, virtual false, abstract: false, final false
  inline void set_caretPosition(int32_t value);

  /// @brief Method set_caretPositionInternal, addr 0x4761644, size 0x10, virtual false, abstract: false, final false
  inline void set_caretPositionInternal(int32_t value);

  /// @brief Method set_caretSelectPositionInternal, addr 0x47616bc, size 0x10, virtual false, abstract: false, final false
  inline void set_caretSelectPositionInternal(int32_t value);

  /// @brief Method set_caretWidth, addr 0x476043c, size 0x74, virtual false, abstract: false, final false
  inline void set_caretWidth(int32_t value);

  /// @brief Method set_characterLimit, addr 0x4760b94, size 0xc0, virtual false, abstract: false, final false
  inline void set_characterLimit(int32_t value);

  /// @brief Method set_characterValidation, addr 0x4761340, size 0x84, virtual false, abstract: false, final false
  inline void set_characterValidation(::TMPro::__TMP_InputField__CharacterValidation value);

  /// @brief Method set_clipboard, addr 0x4763428, size 0x58, virtual false, abstract: false, final false
  static inline void set_clipboard(::StringW value);

  /// @brief Method set_contentType, addr 0x4760f38, size 0x74, virtual false, abstract: false, final false
  inline void set_contentType(::TMPro::__TMP_InputField__ContentType value);

  /// @brief Method set_customCaretColor, addr 0x47607d0, size 0x1c, virtual false, abstract: false, final false
  inline void set_customCaretColor(bool value);

  /// @brief Method set_fontAsset, addr 0x4750b5c, size 0x80, virtual false, abstract: false, final false
  inline void set_fontAsset(::TMPro::TMP_FontAsset* value);

  /// @brief Method set_inputType, addr 0x4761210, size 0x84, virtual false, abstract: false, final false
  inline void set_inputType(::TMPro::__TMP_InputField__InputType value);

  /// @brief Method set_inputValidator, addr 0x47613cc, size 0x84, virtual false, abstract: false, final false
  inline void set_inputValidator(::TMPro::TMP_InputValidator* value);

  /// @brief Method set_isRichTextEditingAllowed, addr 0x4760f24, size 0xc, virtual false, abstract: false, final false
  inline void set_isRichTextEditingAllowed(bool value);

  /// @brief Method set_keyboardType, addr 0x47612b4, size 0x84, virtual false, abstract: false, final false
  inline void set_keyboardType(::UnityEngine::TouchScreenKeyboardType value);

  /// @brief Method set_lineLimit, addr 0x476119c, size 0x6c, virtual false, abstract: false, final false
  inline void set_lineLimit(int32_t value);

  /// @brief Method set_lineType, addr 0x4761070, size 0xc0, virtual false, abstract: false, final false
  inline void set_lineType(::TMPro::__TMP_InputField__LineType value);

  /// @brief Method set_onDeselect, addr 0x4760954, size 0x58, virtual false, abstract: false, final false
  inline void set_onDeselect(::TMPro::__TMP_InputField__SelectionEvent* value);

  /// @brief Method set_onEndEdit, addr 0x4760834, size 0x58, virtual false, abstract: false, final false
  inline void set_onEndEdit(::TMPro::__TMP_InputField__SubmitEvent* value);

  /// @brief Method set_onEndTextSelection, addr 0x4760a14, size 0x58, virtual false, abstract: false, final false
  inline void set_onEndTextSelection(::TMPro::__TMP_InputField__TextSelectionEvent* value);

  /// @brief Method set_onFocusSelectAll, addr 0x4760ee8, size 0xc, virtual false, abstract: false, final false
  inline void set_onFocusSelectAll(bool value);

  /// @brief Method set_onSelect, addr 0x47608f4, size 0x58, virtual false, abstract: false, final false
  inline void set_onSelect(::TMPro::__TMP_InputField__SelectionEvent* value);

  /// @brief Method set_onSubmit, addr 0x4760894, size 0x58, virtual false, abstract: false, final false
  inline void set_onSubmit(::TMPro::__TMP_InputField__SubmitEvent* value);

  /// @brief Method set_onTextSelection, addr 0x47609b4, size 0x58, virtual false, abstract: false, final false
  inline void set_onTextSelection(::TMPro::__TMP_InputField__TextSelectionEvent* value);

  /// @brief Method set_onTouchScreenKeyboardStatusChanged, addr 0x4760ad4, size 0x58, virtual false, abstract: false, final false
  inline void set_onTouchScreenKeyboardStatusChanged(::TMPro::__TMP_InputField__TouchScreenKeyboardEvent* value);

  /// @brief Method set_onValidateInput, addr 0x4760b34, size 0x58, virtual false, abstract: false, final false
  inline void set_onValidateInput(::TMPro::__TMP_InputField__OnValidateInput* value);

  /// @brief Method set_onValueChanged, addr 0x4760a74, size 0x58, virtual false, abstract: false, final false
  inline void set_onValueChanged(::TMPro::__TMP_InputField__OnChangeEvent* value);

  /// @brief Method set_placeholder, addr 0x4750b04, size 0x58, virtual false, abstract: false, final false
  inline void set_placeholder(::UnityEngine::UI::Graphic* value);

  /// @brief Method set_pointSize, addr 0x4760c5c, size 0xb4, virtual false, abstract: false, final false
  inline void set_pointSize(float_t value);

  /// @brief Method set_readOnly, addr 0x4761470, size 0xc, virtual false, abstract: false, final false
  inline void set_readOnly(bool value);

  /// @brief Method set_resetOnDeActivation, addr 0x4760efc, size 0xc, virtual false, abstract: false, final false
  inline void set_resetOnDeActivation(bool value);

  /// @brief Method set_restoreOriginalTextOnEscape, addr 0x4760f10, size 0xc, virtual false, abstract: false, final false
  inline void set_restoreOriginalTextOnEscape(bool value);

  /// @brief Method set_richText, addr 0x4761484, size 0xc, virtual false, abstract: false, final false
  inline void set_richText(bool value);

  /// @brief Method set_scrollSensitivity, addr 0x47606e4, size 0x74, virtual false, abstract: false, final false
  inline void set_scrollSensitivity(float_t value);

  /// @brief Method set_selectionAnchorPosition, addr 0x47617a4, size 0x3c, virtual false, abstract: false, final false
  inline void set_selectionAnchorPosition(int32_t value);

  /// @brief Method set_selectionColor, addr 0x4760800, size 0x2c, virtual false, abstract: false, final false
  inline void set_selectionColor(::UnityEngine::Color value);

  /// @brief Method set_selectionFocusPosition, addr 0x47617e0, size 0x3c, virtual false, abstract: false, final false
  inline void set_selectionFocusPosition(int32_t value);

  /// @brief Method set_selectionStringAnchorPosition, addr 0x4761898, size 0x58, virtual false, abstract: false, final false
  inline void set_selectionStringAnchorPosition(int32_t value);

  /// @brief Method set_selectionStringFocusPosition, addr 0x47618f0, size 0x58, virtual false, abstract: false, final false
  inline void set_selectionStringFocusPosition(int32_t value);

  /// @brief Method set_shouldHideMobileInput, addr 0x475f9c4, size 0xbc, virtual false, abstract: false, final false
  inline void set_shouldHideMobileInput(bool value);

  /// @brief Method set_shouldHideSoftKeyboard, addr 0x475fb54, size 0x140, virtual false, abstract: false, final false
  inline void set_shouldHideSoftKeyboard(bool value);

  /// @brief Method set_stringPosition, addr 0x4761864, size 0x34, virtual false, abstract: false, final false
  inline void set_stringPosition(int32_t value);

  /// @brief Method set_stringPositionInternal, addr 0x476166c, size 0x38, virtual false, abstract: false, final false
  inline void set_stringPositionInternal(int32_t value);

  /// @brief Method set_stringSelectPositionInternal, addr 0x47616e4, size 0x38, virtual false, abstract: false, final false
  inline void set_stringSelectPositionInternal(int32_t value);

  /// @brief Method set_text, addr 0x475fd30, size 0x8, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

  /// @brief Method set_textComponent, addr 0x4750a90, size 0x74, virtual false, abstract: false, final false
  inline void set_textComponent(::TMPro::TMP_Text* value);

  /// @brief Method set_textViewport, addr 0x4750a38, size 0x58, virtual false, abstract: false, final false
  inline void set_textViewport(::UnityEngine::RectTransform* value);

  /// @brief Method set_verticalScrollbar, addr 0x4760528, size 0x1b4, virtual false, abstract: false, final false
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
  ::TMPro::__TMP_InputField__ContentType ___m_ContentType;

  /// @brief Field m_InputType, offset: 0x184, size: 0x4, def value: None
  ::TMPro::__TMP_InputField__InputType ___m_InputType;

  /// @brief Field m_AsteriskChar, offset: 0x188, size: 0x2, def value: None
  char16_t ___m_AsteriskChar;

  /// @brief Field m_KeyboardType, offset: 0x18c, size: 0x4, def value: None
  ::UnityEngine::TouchScreenKeyboardType ___m_KeyboardType;

  /// @brief Field m_LineType, offset: 0x190, size: 0x4, def value: None
  ::TMPro::__TMP_InputField__LineType ___m_LineType;

  /// @brief Field m_HideMobileInput, offset: 0x194, size: 0x1, def value: None
  bool ___m_HideMobileInput;

  /// @brief Field m_HideSoftKeyboard, offset: 0x195, size: 0x1, def value: None
  bool ___m_HideSoftKeyboard;

  /// @brief Field m_CharacterValidation, offset: 0x198, size: 0x4, def value: None
  ::TMPro::__TMP_InputField__CharacterValidation ___m_CharacterValidation;

  /// @brief Field m_RegexValue, offset: 0x1a0, size: 0x8, def value: None
  ::StringW ___m_RegexValue;

  /// @brief Field m_GlobalPointSize, offset: 0x1a8, size: 0x4, def value: None
  float_t ___m_GlobalPointSize;

  /// @brief Field m_CharacterLimit, offset: 0x1ac, size: 0x4, def value: None
  int32_t ___m_CharacterLimit;

  /// @brief Field m_OnEndEdit, offset: 0x1b0, size: 0x8, def value: None
  ::TMPro::__TMP_InputField__SubmitEvent* ___m_OnEndEdit;

  /// @brief Field m_OnSubmit, offset: 0x1b8, size: 0x8, def value: None
  ::TMPro::__TMP_InputField__SubmitEvent* ___m_OnSubmit;

  /// @brief Field m_OnSelect, offset: 0x1c0, size: 0x8, def value: None
  ::TMPro::__TMP_InputField__SelectionEvent* ___m_OnSelect;

  /// @brief Field m_OnDeselect, offset: 0x1c8, size: 0x8, def value: None
  ::TMPro::__TMP_InputField__SelectionEvent* ___m_OnDeselect;

  /// @brief Field m_OnTextSelection, offset: 0x1d0, size: 0x8, def value: None
  ::TMPro::__TMP_InputField__TextSelectionEvent* ___m_OnTextSelection;

  /// @brief Field m_OnEndTextSelection, offset: 0x1d8, size: 0x8, def value: None
  ::TMPro::__TMP_InputField__TextSelectionEvent* ___m_OnEndTextSelection;

  /// @brief Field m_OnValueChanged, offset: 0x1e0, size: 0x8, def value: None
  ::TMPro::__TMP_InputField__OnChangeEvent* ___m_OnValueChanged;

  /// @brief Field m_OnTouchScreenKeyboardStatusChanged, offset: 0x1e8, size: 0x8, def value: None
  ::TMPro::__TMP_InputField__TouchScreenKeyboardEvent* ___m_OnTouchScreenKeyboardStatusChanged;

  /// @brief Field m_OnValidateInput, offset: 0x1f0, size: 0x8, def value: None
  ::TMPro::__TMP_InputField__OnValidateInput* ___m_OnValidateInput;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14467 };

  /// @brief Field kEmailSpecialCharacters offset 0xffffffff size 0x8
  static constexpr ::ConstString kEmailSpecialCharacters{ u"!#$%&\'*+-/=?^_`{|}~" };

  /// @brief Field kHScrollSpeed offset 0xffffffff size 0x4
  static constexpr float_t kHScrollSpeed{ 0.05 };

  /// @brief Field kVScrollSpeed offset 0xffffffff size 0x4
  static constexpr float_t kVScrollSpeed{ 0.1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_InputField, 0x2f8>, "Size mismatch!");

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

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_InputField__CharacterValidation, "TMPro", "TMP_InputField/CharacterValidation");
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_InputField__ContentType, "TMPro", "TMP_InputField/ContentType");
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_InputField__EditState, "TMPro", "TMP_InputField/EditState");
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_InputField__InputType, "TMPro", "TMP_InputField/InputType");
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_InputField__LineType, "TMPro", "TMP_InputField/LineType");
NEED_NO_BOX(::TMPro::TMP_InputField);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_InputField*, "TMPro", "TMP_InputField");
NEED_NO_BOX(::TMPro::__TMP_InputField__OnChangeEvent);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_InputField__OnChangeEvent*, "TMPro", "TMP_InputField/OnChangeEvent");
NEED_NO_BOX(::TMPro::__TMP_InputField__OnValidateInput);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_InputField__OnValidateInput*, "TMPro", "TMP_InputField/OnValidateInput");
NEED_NO_BOX(::TMPro::__TMP_InputField__SelectionEvent);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_InputField__SelectionEvent*, "TMPro", "TMP_InputField/SelectionEvent");
NEED_NO_BOX(::TMPro::__TMP_InputField__SubmitEvent);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_InputField__SubmitEvent*, "TMPro", "TMP_InputField/SubmitEvent");
NEED_NO_BOX(::TMPro::__TMP_InputField__TextSelectionEvent);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_InputField__TextSelectionEvent*, "TMPro", "TMP_InputField/TextSelectionEvent");
NEED_NO_BOX(::TMPro::__TMP_InputField__TouchScreenKeyboardEvent);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_InputField__TouchScreenKeyboardEvent*, "TMPro", "TMP_InputField/TouchScreenKeyboardEvent");
NEED_NO_BOX(::TMPro::__TMP_InputField___CaretBlink_d__276);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_InputField___CaretBlink_d__276*, "TMPro", "TMP_InputField/<CaretBlink>d__276");
NEED_NO_BOX(::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294*, "TMPro", "TMP_InputField/<MouseDragOutsideRect>d__294");
