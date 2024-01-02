#pragma once
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
namespace UnityEngine::UI {
class RectMask2D;
}
namespace TMPro {
class __TMP_InputField___CaretBlink_d__276;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class TouchScreenKeyboard;
}
namespace TMPro {
struct __TMP_InputField__InputType;
}
namespace TMPro {
struct __TMP_InputField__EditState;
}
namespace UnityEngine::UI {
struct __Selectable__SelectionState;
}
namespace UnityEngine::EventSystems {
class IScrollHandler;
}
namespace TMPro {
struct __TMP_InputField__CharacterValidation;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace TMPro {
class __TMP_InputField__OnValidateInput;
}
namespace TMPro {
struct __TMP_InputField__ContentType;
}
namespace TMPro {
class __TMP_InputField__TouchScreenKeyboardEvent;
}
namespace UnityEngine::EventSystems {
class IUpdateSelectedHandler;
}
namespace TMPro {
class TMP_Text;
}
namespace TMPro {
class __TMP_InputField__SelectionEvent;
}
namespace UnityEngine::UI {
class VertexHelper;
}
namespace UnityEngine::UI {
class Scrollbar;
}
namespace UnityEngine::EventSystems {
class ISubmitHandler;
}
namespace TMPro {
class TMP_ScrollbarEventHandler;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine::UI {
class ICanvasElement;
}
namespace TMPro {
class TMP_InputValidator;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class WaitForSecondsRealtime;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IBeginDragHandler;
}
namespace UnityEngine {
class Object;
}
namespace TMPro {
struct __TMP_InputField__LineType;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine::UI {
struct CanvasUpdate;
}
namespace UnityEngine::EventSystems {
class IEndDragHandler;
}
namespace UnityEngine {
struct TouchScreenKeyboardType;
}
namespace TMPro {
class __TMP_InputField__SubmitEvent;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine::UI {
class LayoutGroup;
}
namespace TMPro {
class __TMP_InputField__OnChangeEvent;
}
namespace TMPro {
class __TMP_InputField___MouseDragOutsideRect_d__294;
}
namespace UnityEngine {
struct UIVertex;
}
namespace UnityEngine::EventSystems {
class BaseInput;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UI {
class ILayoutElement;
}
namespace UnityEngine {
class CanvasRenderer;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine::EventSystems {
class IDragHandler;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace TMPro {
class __TMP_InputField__TextSelectionEvent;
}
namespace TMPro {
class TMP_FontAsset;
}
namespace System {
class Object;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
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
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12378))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TMP_InputField__ContentType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_InputField__ContentType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Standard value: static_cast<int32_t>(0x0)
  static ::TMPro::__TMP_InputField__ContentType const Standard;

  /// @brief Field Autocorrected value: static_cast<int32_t>(0x1)
  static ::TMPro::__TMP_InputField__ContentType const Autocorrected;

  /// @brief Field IntegerNumber value: static_cast<int32_t>(0x2)
  static ::TMPro::__TMP_InputField__ContentType const IntegerNumber;

  /// @brief Field DecimalNumber value: static_cast<int32_t>(0x3)
  static ::TMPro::__TMP_InputField__ContentType const DecimalNumber;

  /// @brief Field Alphanumeric value: static_cast<int32_t>(0x4)
  static ::TMPro::__TMP_InputField__ContentType const Alphanumeric;

  /// @brief Field Name value: static_cast<int32_t>(0x5)
  static ::TMPro::__TMP_InputField__ContentType const Name;

  /// @brief Field EmailAddress value: static_cast<int32_t>(0x6)
  static ::TMPro::__TMP_InputField__ContentType const EmailAddress;

  /// @brief Field Password value: static_cast<int32_t>(0x7)
  static ::TMPro::__TMP_InputField__ContentType const Password;

  /// @brief Field Pin value: static_cast<int32_t>(0x8)
  static ::TMPro::__TMP_InputField__ContentType const Pin;

  /// @brief Field Custom value: static_cast<int32_t>(0x9)
  static ::TMPro::__TMP_InputField__ContentType const Custom;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_InputField__ContentType, 0x4>, "Size mismatch!");

static_assert(offsetof(::TMPro::__TMP_InputField__ContentType, value__) == 0x0, "Offset mismatch!");

} // namespace TMPro
// Type: ::InputType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12379))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TMP_InputField__InputType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_InputField__InputType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Standard value: static_cast<int32_t>(0x0)
  static ::TMPro::__TMP_InputField__InputType const Standard;

  /// @brief Field AutoCorrect value: static_cast<int32_t>(0x1)
  static ::TMPro::__TMP_InputField__InputType const AutoCorrect;

  /// @brief Field Password value: static_cast<int32_t>(0x2)
  static ::TMPro::__TMP_InputField__InputType const Password;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_InputField__InputType, 0x4>, "Size mismatch!");

static_assert(offsetof(::TMPro::__TMP_InputField__InputType, value__) == 0x0, "Offset mismatch!");

} // namespace TMPro
// Type: ::CharacterValidation
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12380))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TMP_InputField__CharacterValidation(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_InputField__CharacterValidation();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::TMPro::__TMP_InputField__CharacterValidation const None;

  /// @brief Field Digit value: static_cast<int32_t>(0x1)
  static ::TMPro::__TMP_InputField__CharacterValidation const Digit;

  /// @brief Field Integer value: static_cast<int32_t>(0x2)
  static ::TMPro::__TMP_InputField__CharacterValidation const Integer;

  /// @brief Field Decimal value: static_cast<int32_t>(0x3)
  static ::TMPro::__TMP_InputField__CharacterValidation const Decimal;

  /// @brief Field Alphanumeric value: static_cast<int32_t>(0x4)
  static ::TMPro::__TMP_InputField__CharacterValidation const Alphanumeric;

  /// @brief Field Name value: static_cast<int32_t>(0x5)
  static ::TMPro::__TMP_InputField__CharacterValidation const Name;

  /// @brief Field Regex value: static_cast<int32_t>(0x6)
  static ::TMPro::__TMP_InputField__CharacterValidation const Regex;

  /// @brief Field EmailAddress value: static_cast<int32_t>(0x7)
  static ::TMPro::__TMP_InputField__CharacterValidation const EmailAddress;

  /// @brief Field CustomValidator value: static_cast<int32_t>(0x8)
  static ::TMPro::__TMP_InputField__CharacterValidation const CustomValidator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_InputField__CharacterValidation, 0x4>, "Size mismatch!");

static_assert(offsetof(::TMPro::__TMP_InputField__CharacterValidation, value__) == 0x0, "Offset mismatch!");

} // namespace TMPro
// Type: ::LineType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12381))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TMP_InputField__LineType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_InputField__LineType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field SingleLine value: static_cast<int32_t>(0x0)
  static ::TMPro::__TMP_InputField__LineType const SingleLine;

  /// @brief Field MultiLineSubmit value: static_cast<int32_t>(0x1)
  static ::TMPro::__TMP_InputField__LineType const MultiLineSubmit;

  /// @brief Field MultiLineNewline value: static_cast<int32_t>(0x2)
  static ::TMPro::__TMP_InputField__LineType const MultiLineNewline;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_InputField__LineType, 0x4>, "Size mismatch!");

static_assert(offsetof(::TMPro::__TMP_InputField__LineType, value__) == 0x0, "Offset mismatch!");

} // namespace TMPro
// Type: ::OnValidateInput
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12382))
// CS Name: ::TMP_InputField::OnValidateInput*
class CORDL_TYPE __TMP_InputField__OnValidateInput : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::TMPro::__TMP_InputField__OnValidateInput* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2c38eec, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2c38fc4, size 0x14, virtual true, abstract: false, final false
  inline char16_t Invoke(::StringW text, int32_t charIndex, char16_t addedChar);

  /// @brief Method BeginInvoke, addr 0x2c38fd8, size 0xc0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW text, int32_t charIndex, char16_t addedChar, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2c39098, size 0x28, virtual true, abstract: false, final false
  inline char16_t EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_InputField__OnValidateInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TMP_InputField__OnValidateInput(__TMP_InputField__OnValidateInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_InputField__OnValidateInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TMP_InputField__OnValidateInput(__TMP_InputField__OnValidateInput const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_InputField__OnValidateInput();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_InputField__OnValidateInput, 0x80>, "Size mismatch!");

} // namespace TMPro
// Type: ::SubmitEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10465)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10465), inst: 397 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12383))
// CS Name: ::TMP_InputField::SubmitEvent*
class CORDL_TYPE __TMP_InputField__SubmitEvent : public ::UnityEngine::Events::UnityEvent_1<::StringW> {
public:
  // Declarations
  static inline ::TMPro::__TMP_InputField__SubmitEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2c390c0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_InputField__SubmitEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TMP_InputField__SubmitEvent(__TMP_InputField__SubmitEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_InputField__SubmitEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TMP_InputField__SubmitEvent(__TMP_InputField__SubmitEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_InputField__SubmitEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_InputField__SubmitEvent, 0x30>, "Size mismatch!");

} // namespace TMPro
// Type: ::OnChangeEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10465), inst: 397 }), TypeDefinitionIndex(TypeDefinitionIndex(10465))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12384))
// CS Name: ::TMP_InputField::OnChangeEvent*
class CORDL_TYPE __TMP_InputField__OnChangeEvent : public ::UnityEngine::Events::UnityEvent_1<::StringW> {
public:
  // Declarations
  static inline ::TMPro::__TMP_InputField__OnChangeEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2c39108, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_InputField__OnChangeEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TMP_InputField__OnChangeEvent(__TMP_InputField__OnChangeEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_InputField__OnChangeEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TMP_InputField__OnChangeEvent(__TMP_InputField__OnChangeEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_InputField__OnChangeEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_InputField__OnChangeEvent, 0x30>, "Size mismatch!");

} // namespace TMPro
// Type: ::SelectionEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10465)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10465), inst: 397 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12385))
// CS Name: ::TMP_InputField::SelectionEvent*
class CORDL_TYPE __TMP_InputField__SelectionEvent : public ::UnityEngine::Events::UnityEvent_1<::StringW> {
public:
  // Declarations
  static inline ::TMPro::__TMP_InputField__SelectionEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2c39150, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_InputField__SelectionEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TMP_InputField__SelectionEvent(__TMP_InputField__SelectionEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_InputField__SelectionEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TMP_InputField__SelectionEvent(__TMP_InputField__SelectionEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_InputField__SelectionEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_InputField__SelectionEvent, 0x30>, "Size mismatch!");

} // namespace TMPro
// Type: ::TextSelectionEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10467), inst: 2503 }), TypeDefinitionIndex(TypeDefinitionIndex(10467))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12386))
// CS Name: ::TMP_InputField::TextSelectionEvent*
class CORDL_TYPE __TMP_InputField__TextSelectionEvent : public ::UnityEngine::Events::UnityEvent_3<::StringW, int32_t, int32_t> {
public:
  // Declarations
  static inline ::TMPro::__TMP_InputField__TextSelectionEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2c39198, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_InputField__TextSelectionEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TMP_InputField__TextSelectionEvent(__TMP_InputField__TextSelectionEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_InputField__TextSelectionEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TMP_InputField__TextSelectionEvent(__TMP_InputField__TextSelectionEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_InputField__TextSelectionEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_InputField__TextSelectionEvent, 0x30>, "Size mismatch!");

} // namespace TMPro
// Type: ::TouchScreenKeyboardEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10465)), TypeDefinitionIndex(TypeDefinitionIndex(10183)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10465), inst:
// 5240 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(12387)) CS Name: ::TMP_InputField::TouchScreenKeyboardEvent*
class CORDL_TYPE __TMP_InputField__TouchScreenKeyboardEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::__TouchScreenKeyboard__Status> {
public:
  // Declarations
  static inline ::TMPro::__TMP_InputField__TouchScreenKeyboardEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2c391e0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_InputField__TouchScreenKeyboardEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TMP_InputField__TouchScreenKeyboardEvent(__TMP_InputField__TouchScreenKeyboardEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_InputField__TouchScreenKeyboardEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TMP_InputField__TouchScreenKeyboardEvent(__TMP_InputField__TouchScreenKeyboardEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_InputField__TouchScreenKeyboardEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_InputField__TouchScreenKeyboardEvent, 0x30>, "Size mismatch!");

} // namespace TMPro
// Type: ::EditState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12388))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TMP_InputField__EditState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_InputField__EditState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Continue value: static_cast<int32_t>(0x0)
  static ::TMPro::__TMP_InputField__EditState const Continue;

  /// @brief Field Finish value: static_cast<int32_t>(0x1)
  static ::TMPro::__TMP_InputField__EditState const Finish;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_InputField__EditState, 0x4>, "Size mismatch!");

static_assert(offsetof(::TMPro::__TMP_InputField__EditState, value__) == 0x0, "Offset mismatch!");

} // namespace TMPro
// Type: ::<CaretBlink>d__276
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12389))
// CS Name: ::TMP_InputField::<CaretBlink>d__276*
class CORDL_TYPE __TMP_InputField___CaretBlink_d__276 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::TMPro::TMP_InputField* __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::TMPro::TMP_InputField*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_InputField*> const& __get___4__this() const;

  constexpr void __set___4__this(::TMPro::TMP_InputField* value);

  static inline ::TMPro::__TMP_InputField___CaretBlink_d__276* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x2c39228, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x2c39250, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x2c39254, size 0x10c, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2c39360, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2c39368, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2c393a8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_InputField___CaretBlink_d__276", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TMP_InputField___CaretBlink_d__276(__TMP_InputField___CaretBlink_d__276&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_InputField___CaretBlink_d__276", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TMP_InputField___CaretBlink_d__276(__TMP_InputField___CaretBlink_d__276 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_InputField___CaretBlink_d__276();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::TMPro::TMP_InputField* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_InputField___CaretBlink_d__276, 0x28>, "Size mismatch!");

static_assert(offsetof(::TMPro::__TMP_InputField___CaretBlink_d__276, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::__TMP_InputField___CaretBlink_d__276, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::__TMP_InputField___CaretBlink_d__276, _____4__this) == 0x20, "Offset mismatch!");

} // namespace TMPro
// Type: ::<MouseDragOutsideRect>d__294
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12390))
// CS Name: ::TMP_InputField::<MouseDragOutsideRect>d__294*
class CORDL_TYPE __TMP_InputField___MouseDragOutsideRect_d__294 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::TMPro::TMP_InputField* __4__this;

  /// @brief Field eventData, offset 0x28, size 0x8
  __declspec(property(get = __get_eventData, put = __set_eventData))::UnityEngine::EventSystems::PointerEventData* eventData;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::TMPro::TMP_InputField*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_InputField*> const& __get___4__this() const;

  constexpr void __set___4__this(::TMPro::TMP_InputField* value);

  constexpr ::UnityEngine::EventSystems::PointerEventData*& __get_eventData();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::PointerEventData*> const& __get_eventData() const;

  constexpr void __set_eventData(::UnityEngine::EventSystems::PointerEventData* value);

  static inline ::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x2c393b0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x2c393d8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x2c393dc, size 0x254, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2c39630, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2c39638, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2c39678, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_InputField___MouseDragOutsideRect_d__294", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TMP_InputField___MouseDragOutsideRect_d__294(__TMP_InputField___MouseDragOutsideRect_d__294&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_InputField___MouseDragOutsideRect_d__294", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TMP_InputField___MouseDragOutsideRect_d__294(__TMP_InputField___MouseDragOutsideRect_d__294 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_InputField___MouseDragOutsideRect_d__294();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::TMPro::TMP_InputField* _____4__this;

  /// @brief Field eventData, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::EventSystems::PointerEventData* ___eventData;

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
// SizeInfo { instance_size: 752, native_size: -1, calculated_instance_size: 752, calculated_native_size: 752, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12380)), TypeDefinitionIndex(TypeDefinitionIndex(10165)), TypeDefinitionIndex(TypeDefinitionIndex(12381)),
// TypeDefinitionIndex(TypeDefinitionIndex(13119)), TypeDefinitionIndex(TypeDefinitionIndex(10243)), TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(12379)),
// TypeDefinitionIndex(TypeDefinitionIndex(12378)), TypeDefinitionIndex(TypeDefinitionIndex(10185))} Self: TypeDefinitionIndex(TypeDefinitionIndex(12391)) CS Name: ::TMPro::TMP_InputField*
class CORDL_TYPE TMP_InputField : public ::UnityEngine::UI::Selectable {
public:
  // Declarations
  using _MouseDragOutsideRect_d__294 = ::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294;

  using _CaretBlink_d__276 = ::TMPro::__TMP_InputField___CaretBlink_d__276;

  using EditState = ::TMPro::__TMP_InputField__EditState;

  using TouchScreenKeyboardEvent = ::TMPro::__TMP_InputField__TouchScreenKeyboardEvent;

  using TextSelectionEvent = ::TMPro::__TMP_InputField__TextSelectionEvent;

  using SelectionEvent = ::TMPro::__TMP_InputField__SelectionEvent;

  using OnChangeEvent = ::TMPro::__TMP_InputField__OnChangeEvent;

  using SubmitEvent = ::TMPro::__TMP_InputField__SubmitEvent;

  using OnValidateInput = ::TMPro::__TMP_InputField__OnValidateInput;

  using LineType = ::TMPro::__TMP_InputField__LineType;

  using CharacterValidation = ::TMPro::__TMP_InputField__CharacterValidation;

  using InputType = ::TMPro::__TMP_InputField__InputType;

  using ContentType = ::TMPro::__TMP_InputField__ContentType;

  /// @brief Field m_SoftKeyboard, offset 0xf8, size 0x8
  __declspec(property(get = __get_m_SoftKeyboard, put = __set_m_SoftKeyboard))::UnityEngine::TouchScreenKeyboard* m_SoftKeyboard;

  /// @brief Field m_RectTransform, offset 0x100, size 0x8
  __declspec(property(get = __get_m_RectTransform, put = __set_m_RectTransform))::UnityEngine::RectTransform* m_RectTransform;

  /// @brief Field m_TextViewport, offset 0x108, size 0x8
  __declspec(property(get = __get_m_TextViewport, put = __set_m_TextViewport))::UnityEngine::RectTransform* m_TextViewport;

  /// @brief Field m_TextComponentRectMask, offset 0x110, size 0x8
  __declspec(property(get = __get_m_TextComponentRectMask, put = __set_m_TextComponentRectMask))::UnityEngine::UI::RectMask2D* m_TextComponentRectMask;

  /// @brief Field m_TextViewportRectMask, offset 0x118, size 0x8
  __declspec(property(get = __get_m_TextViewportRectMask, put = __set_m_TextViewportRectMask))::UnityEngine::UI::RectMask2D* m_TextViewportRectMask;

  /// @brief Field m_CachedViewportRect, offset 0x120, size 0x10
  __declspec(property(get = __get_m_CachedViewportRect, put = __set_m_CachedViewportRect))::UnityEngine::Rect m_CachedViewportRect;

  /// @brief Field m_TextComponent, offset 0x130, size 0x8
  __declspec(property(get = __get_m_TextComponent, put = __set_m_TextComponent))::TMPro::TMP_Text* m_TextComponent;

  /// @brief Field m_TextComponentRectTransform, offset 0x138, size 0x8
  __declspec(property(get = __get_m_TextComponentRectTransform, put = __set_m_TextComponentRectTransform))::UnityEngine::RectTransform* m_TextComponentRectTransform;

  /// @brief Field m_Placeholder, offset 0x140, size 0x8
  __declspec(property(get = __get_m_Placeholder, put = __set_m_Placeholder))::UnityEngine::UI::Graphic* m_Placeholder;

  /// @brief Field m_VerticalScrollbar, offset 0x148, size 0x8
  __declspec(property(get = __get_m_VerticalScrollbar, put = __set_m_VerticalScrollbar))::UnityEngine::UI::Scrollbar* m_VerticalScrollbar;

  /// @brief Field m_VerticalScrollbarEventHandler, offset 0x150, size 0x8
  __declspec(property(get = __get_m_VerticalScrollbarEventHandler, put = __set_m_VerticalScrollbarEventHandler))::TMPro::TMP_ScrollbarEventHandler* m_VerticalScrollbarEventHandler;

  /// @brief Field m_IsDrivenByLayoutComponents, offset 0x158, size 0x1
  __declspec(property(get = __get_m_IsDrivenByLayoutComponents, put = __set_m_IsDrivenByLayoutComponents)) bool m_IsDrivenByLayoutComponents;

  /// @brief Field m_LayoutGroup, offset 0x160, size 0x8
  __declspec(property(get = __get_m_LayoutGroup, put = __set_m_LayoutGroup))::UnityEngine::UI::LayoutGroup* m_LayoutGroup;

  /// @brief Field m_IScrollHandlerParent, offset 0x168, size 0x8
  __declspec(property(get = __get_m_IScrollHandlerParent, put = __set_m_IScrollHandlerParent))::UnityEngine::EventSystems::IScrollHandler* m_IScrollHandlerParent;

  /// @brief Field m_ScrollPosition, offset 0x170, size 0x4
  __declspec(property(get = __get_m_ScrollPosition, put = __set_m_ScrollPosition)) float_t m_ScrollPosition;

  /// @brief Field m_ScrollSensitivity, offset 0x174, size 0x4
  __declspec(property(get = __get_m_ScrollSensitivity, put = __set_m_ScrollSensitivity)) float_t m_ScrollSensitivity;

  /// @brief Field m_ContentType, offset 0x178, size 0x4
  __declspec(property(get = __get_m_ContentType, put = __set_m_ContentType))::TMPro::__TMP_InputField__ContentType m_ContentType;

  /// @brief Field m_InputType, offset 0x17c, size 0x4
  __declspec(property(get = __get_m_InputType, put = __set_m_InputType))::TMPro::__TMP_InputField__InputType m_InputType;

  /// @brief Field m_AsteriskChar, offset 0x180, size 0x2
  __declspec(property(get = __get_m_AsteriskChar, put = __set_m_AsteriskChar)) char16_t m_AsteriskChar;

  /// @brief Field m_KeyboardType, offset 0x184, size 0x4
  __declspec(property(get = __get_m_KeyboardType, put = __set_m_KeyboardType))::UnityEngine::TouchScreenKeyboardType m_KeyboardType;

  /// @brief Field m_LineType, offset 0x188, size 0x4
  __declspec(property(get = __get_m_LineType, put = __set_m_LineType))::TMPro::__TMP_InputField__LineType m_LineType;

  /// @brief Field m_HideMobileInput, offset 0x18c, size 0x1
  __declspec(property(get = __get_m_HideMobileInput, put = __set_m_HideMobileInput)) bool m_HideMobileInput;

  /// @brief Field m_HideSoftKeyboard, offset 0x18d, size 0x1
  __declspec(property(get = __get_m_HideSoftKeyboard, put = __set_m_HideSoftKeyboard)) bool m_HideSoftKeyboard;

  /// @brief Field m_CharacterValidation, offset 0x190, size 0x4
  __declspec(property(get = __get_m_CharacterValidation, put = __set_m_CharacterValidation))::TMPro::__TMP_InputField__CharacterValidation m_CharacterValidation;

  /// @brief Field m_RegexValue, offset 0x198, size 0x8
  __declspec(property(get = __get_m_RegexValue, put = __set_m_RegexValue))::StringW m_RegexValue;

  /// @brief Field m_GlobalPointSize, offset 0x1a0, size 0x4
  __declspec(property(get = __get_m_GlobalPointSize, put = __set_m_GlobalPointSize)) float_t m_GlobalPointSize;

  /// @brief Field m_CharacterLimit, offset 0x1a4, size 0x4
  __declspec(property(get = __get_m_CharacterLimit, put = __set_m_CharacterLimit)) int32_t m_CharacterLimit;

  /// @brief Field m_OnEndEdit, offset 0x1a8, size 0x8
  __declspec(property(get = __get_m_OnEndEdit, put = __set_m_OnEndEdit))::TMPro::__TMP_InputField__SubmitEvent* m_OnEndEdit;

  /// @brief Field m_OnSubmit, offset 0x1b0, size 0x8
  __declspec(property(get = __get_m_OnSubmit, put = __set_m_OnSubmit))::TMPro::__TMP_InputField__SubmitEvent* m_OnSubmit;

  /// @brief Field m_OnSelect, offset 0x1b8, size 0x8
  __declspec(property(get = __get_m_OnSelect, put = __set_m_OnSelect))::TMPro::__TMP_InputField__SelectionEvent* m_OnSelect;

  /// @brief Field m_OnDeselect, offset 0x1c0, size 0x8
  __declspec(property(get = __get_m_OnDeselect, put = __set_m_OnDeselect))::TMPro::__TMP_InputField__SelectionEvent* m_OnDeselect;

  /// @brief Field m_OnTextSelection, offset 0x1c8, size 0x8
  __declspec(property(get = __get_m_OnTextSelection, put = __set_m_OnTextSelection))::TMPro::__TMP_InputField__TextSelectionEvent* m_OnTextSelection;

  /// @brief Field m_OnEndTextSelection, offset 0x1d0, size 0x8
  __declspec(property(get = __get_m_OnEndTextSelection, put = __set_m_OnEndTextSelection))::TMPro::__TMP_InputField__TextSelectionEvent* m_OnEndTextSelection;

  /// @brief Field m_OnValueChanged, offset 0x1d8, size 0x8
  __declspec(property(get = __get_m_OnValueChanged, put = __set_m_OnValueChanged))::TMPro::__TMP_InputField__OnChangeEvent* m_OnValueChanged;

  /// @brief Field m_OnTouchScreenKeyboardStatusChanged, offset 0x1e0, size 0x8
  __declspec(property(get = __get_m_OnTouchScreenKeyboardStatusChanged,
                      put = __set_m_OnTouchScreenKeyboardStatusChanged))::TMPro::__TMP_InputField__TouchScreenKeyboardEvent* m_OnTouchScreenKeyboardStatusChanged;

  /// @brief Field m_OnValidateInput, offset 0x1e8, size 0x8
  __declspec(property(get = __get_m_OnValidateInput, put = __set_m_OnValidateInput))::TMPro::__TMP_InputField__OnValidateInput* m_OnValidateInput;

  /// @brief Field m_CaretColor, offset 0x1f0, size 0x10
  __declspec(property(get = __get_m_CaretColor, put = __set_m_CaretColor))::UnityEngine::Color m_CaretColor;

  /// @brief Field m_CustomCaretColor, offset 0x200, size 0x1
  __declspec(property(get = __get_m_CustomCaretColor, put = __set_m_CustomCaretColor)) bool m_CustomCaretColor;

  /// @brief Field m_SelectionColor, offset 0x204, size 0x10
  __declspec(property(get = __get_m_SelectionColor, put = __set_m_SelectionColor))::UnityEngine::Color m_SelectionColor;

  /// @brief Field m_Text, offset 0x218, size 0x8
  __declspec(property(get = __get_m_Text, put = __set_m_Text))::StringW m_Text;

  /// @brief Field m_CaretBlinkRate, offset 0x220, size 0x4
  __declspec(property(get = __get_m_CaretBlinkRate, put = __set_m_CaretBlinkRate)) float_t m_CaretBlinkRate;

  /// @brief Field m_CaretWidth, offset 0x224, size 0x4
  __declspec(property(get = __get_m_CaretWidth, put = __set_m_CaretWidth)) int32_t m_CaretWidth;

  /// @brief Field m_ReadOnly, offset 0x228, size 0x1
  __declspec(property(get = __get_m_ReadOnly, put = __set_m_ReadOnly)) bool m_ReadOnly;

  /// @brief Field m_RichText, offset 0x229, size 0x1
  __declspec(property(get = __get_m_RichText, put = __set_m_RichText)) bool m_RichText;

  /// @brief Field m_StringPosition, offset 0x22c, size 0x4
  __declspec(property(get = __get_m_StringPosition, put = __set_m_StringPosition)) int32_t m_StringPosition;

  /// @brief Field m_StringSelectPosition, offset 0x230, size 0x4
  __declspec(property(get = __get_m_StringSelectPosition, put = __set_m_StringSelectPosition)) int32_t m_StringSelectPosition;

  /// @brief Field m_CaretPosition, offset 0x234, size 0x4
  __declspec(property(get = __get_m_CaretPosition, put = __set_m_CaretPosition)) int32_t m_CaretPosition;

  /// @brief Field m_CaretSelectPosition, offset 0x238, size 0x4
  __declspec(property(get = __get_m_CaretSelectPosition, put = __set_m_CaretSelectPosition)) int32_t m_CaretSelectPosition;

  /// @brief Field caretRectTrans, offset 0x240, size 0x8
  __declspec(property(get = __get_caretRectTrans, put = __set_caretRectTrans))::UnityEngine::RectTransform* caretRectTrans;

  /// @brief Field m_CursorVerts, offset 0x248, size 0x8
  __declspec(property(get = __get_m_CursorVerts, put = __set_m_CursorVerts))::ArrayW<::UnityEngine::UIVertex, ::Array<::UnityEngine::UIVertex>*> m_CursorVerts;

  /// @brief Field m_CachedInputRenderer, offset 0x250, size 0x8
  __declspec(property(get = __get_m_CachedInputRenderer, put = __set_m_CachedInputRenderer))::UnityEngine::CanvasRenderer* m_CachedInputRenderer;

  /// @brief Field m_LastPosition, offset 0x258, size 0x8
  __declspec(property(get = __get_m_LastPosition, put = __set_m_LastPosition))::UnityEngine::Vector2 m_LastPosition;

  /// @brief Field m_Mesh, offset 0x260, size 0x8
  __declspec(property(get = __get_m_Mesh, put = __set_m_Mesh))::UnityEngine::Mesh* m_Mesh;

  /// @brief Field m_AllowInput, offset 0x268, size 0x1
  __declspec(property(get = __get_m_AllowInput, put = __set_m_AllowInput)) bool m_AllowInput;

  /// @brief Field m_ShouldActivateNextUpdate, offset 0x269, size 0x1
  __declspec(property(get = __get_m_ShouldActivateNextUpdate, put = __set_m_ShouldActivateNextUpdate)) bool m_ShouldActivateNextUpdate;

  /// @brief Field m_UpdateDrag, offset 0x26a, size 0x1
  __declspec(property(get = __get_m_UpdateDrag, put = __set_m_UpdateDrag)) bool m_UpdateDrag;

  /// @brief Field m_DragPositionOutOfBounds, offset 0x26b, size 0x1
  __declspec(property(get = __get_m_DragPositionOutOfBounds, put = __set_m_DragPositionOutOfBounds)) bool m_DragPositionOutOfBounds;

  /// @brief Field m_CaretVisible, offset 0x26c, size 0x1
  __declspec(property(get = __get_m_CaretVisible, put = __set_m_CaretVisible)) bool m_CaretVisible;

  /// @brief Field m_BlinkCoroutine, offset 0x270, size 0x8
  __declspec(property(get = __get_m_BlinkCoroutine, put = __set_m_BlinkCoroutine))::UnityEngine::Coroutine* m_BlinkCoroutine;

  /// @brief Field m_BlinkStartTime, offset 0x278, size 0x4
  __declspec(property(get = __get_m_BlinkStartTime, put = __set_m_BlinkStartTime)) float_t m_BlinkStartTime;

  /// @brief Field m_DragCoroutine, offset 0x280, size 0x8
  __declspec(property(get = __get_m_DragCoroutine, put = __set_m_DragCoroutine))::UnityEngine::Coroutine* m_DragCoroutine;

  /// @brief Field m_OriginalText, offset 0x288, size 0x8
  __declspec(property(get = __get_m_OriginalText, put = __set_m_OriginalText))::StringW m_OriginalText;

  /// @brief Field m_WasCanceled, offset 0x290, size 0x1
  __declspec(property(get = __get_m_WasCanceled, put = __set_m_WasCanceled)) bool m_WasCanceled;

  /// @brief Field m_HasDoneFocusTransition, offset 0x291, size 0x1
  __declspec(property(get = __get_m_HasDoneFocusTransition, put = __set_m_HasDoneFocusTransition)) bool m_HasDoneFocusTransition;

  /// @brief Field m_WaitForSecondsRealtime, offset 0x298, size 0x8
  __declspec(property(get = __get_m_WaitForSecondsRealtime, put = __set_m_WaitForSecondsRealtime))::UnityEngine::WaitForSecondsRealtime* m_WaitForSecondsRealtime;

  /// @brief Field m_PreventCallback, offset 0x2a0, size 0x1
  __declspec(property(get = __get_m_PreventCallback, put = __set_m_PreventCallback)) bool m_PreventCallback;

  /// @brief Field m_TouchKeyboardAllowsInPlaceEditing, offset 0x2a1, size 0x1
  __declspec(property(get = __get_m_TouchKeyboardAllowsInPlaceEditing, put = __set_m_TouchKeyboardAllowsInPlaceEditing)) bool m_TouchKeyboardAllowsInPlaceEditing;

  /// @brief Field m_IsTextComponentUpdateRequired, offset 0x2a2, size 0x1
  __declspec(property(get = __get_m_IsTextComponentUpdateRequired, put = __set_m_IsTextComponentUpdateRequired)) bool m_IsTextComponentUpdateRequired;

  /// @brief Field m_isLastKeyBackspace, offset 0x2a3, size 0x1
  __declspec(property(get = __get_m_isLastKeyBackspace, put = __set_m_isLastKeyBackspace)) bool m_isLastKeyBackspace;

  /// @brief Field m_PointerDownClickStartTime, offset 0x2a4, size 0x4
  __declspec(property(get = __get_m_PointerDownClickStartTime, put = __set_m_PointerDownClickStartTime)) float_t m_PointerDownClickStartTime;

  /// @brief Field m_KeyDownStartTime, offset 0x2a8, size 0x4
  __declspec(property(get = __get_m_KeyDownStartTime, put = __set_m_KeyDownStartTime)) float_t m_KeyDownStartTime;

  /// @brief Field m_DoubleClickDelay, offset 0x2ac, size 0x4
  __declspec(property(get = __get_m_DoubleClickDelay, put = __set_m_DoubleClickDelay)) float_t m_DoubleClickDelay;

  /// @brief Field m_IsCompositionActive, offset 0x2b0, size 0x1
  __declspec(property(get = __get_m_IsCompositionActive, put = __set_m_IsCompositionActive)) bool m_IsCompositionActive;

  /// @brief Field m_ShouldUpdateIMEWindowPosition, offset 0x2b1, size 0x1
  __declspec(property(get = __get_m_ShouldUpdateIMEWindowPosition, put = __set_m_ShouldUpdateIMEWindowPosition)) bool m_ShouldUpdateIMEWindowPosition;

  /// @brief Field m_PreviousIMEInsertionLine, offset 0x2b4, size 0x4
  __declspec(property(get = __get_m_PreviousIMEInsertionLine, put = __set_m_PreviousIMEInsertionLine)) int32_t m_PreviousIMEInsertionLine;

  /// @brief Field m_GlobalFontAsset, offset 0x2b8, size 0x8
  __declspec(property(get = __get_m_GlobalFontAsset, put = __set_m_GlobalFontAsset))::TMPro::TMP_FontAsset* m_GlobalFontAsset;

  /// @brief Field m_OnFocusSelectAll, offset 0x2c0, size 0x1
  __declspec(property(get = __get_m_OnFocusSelectAll, put = __set_m_OnFocusSelectAll)) bool m_OnFocusSelectAll;

  /// @brief Field m_isSelectAll, offset 0x2c1, size 0x1
  __declspec(property(get = __get_m_isSelectAll, put = __set_m_isSelectAll)) bool m_isSelectAll;

  /// @brief Field m_ResetOnDeActivation, offset 0x2c2, size 0x1
  __declspec(property(get = __get_m_ResetOnDeActivation, put = __set_m_ResetOnDeActivation)) bool m_ResetOnDeActivation;

  /// @brief Field m_SelectionStillActive, offset 0x2c3, size 0x1
  __declspec(property(get = __get_m_SelectionStillActive, put = __set_m_SelectionStillActive)) bool m_SelectionStillActive;

  /// @brief Field m_ReleaseSelection, offset 0x2c4, size 0x1
  __declspec(property(get = __get_m_ReleaseSelection, put = __set_m_ReleaseSelection)) bool m_ReleaseSelection;

  /// @brief Field m_PreviouslySelectedObject, offset 0x2c8, size 0x8
  __declspec(property(get = __get_m_PreviouslySelectedObject, put = __set_m_PreviouslySelectedObject))::UnityEngine::GameObject* m_PreviouslySelectedObject;

  /// @brief Field m_RestoreOriginalTextOnEscape, offset 0x2d0, size 0x1
  __declspec(property(get = __get_m_RestoreOriginalTextOnEscape, put = __set_m_RestoreOriginalTextOnEscape)) bool m_RestoreOriginalTextOnEscape;

  /// @brief Field m_isRichTextEditingAllowed, offset 0x2d1, size 0x1
  __declspec(property(get = __get_m_isRichTextEditingAllowed, put = __set_m_isRichTextEditingAllowed)) bool m_isRichTextEditingAllowed;

  /// @brief Field m_LineLimit, offset 0x2d4, size 0x4
  __declspec(property(get = __get_m_LineLimit, put = __set_m_LineLimit)) int32_t m_LineLimit;

  /// @brief Field m_InputValidator, offset 0x2d8, size 0x8
  __declspec(property(get = __get_m_InputValidator, put = __set_m_InputValidator))::TMPro::TMP_InputValidator* m_InputValidator;

  /// @brief Field m_isSelected, offset 0x2e0, size 0x1
  __declspec(property(get = __get_m_isSelected, put = __set_m_isSelected)) bool m_isSelected;

  /// @brief Field m_IsStringPositionDirty, offset 0x2e1, size 0x1
  __declspec(property(get = __get_m_IsStringPositionDirty, put = __set_m_IsStringPositionDirty)) bool m_IsStringPositionDirty;

  /// @brief Field m_IsCaretPositionDirty, offset 0x2e2, size 0x1
  __declspec(property(get = __get_m_IsCaretPositionDirty, put = __set_m_IsCaretPositionDirty)) bool m_IsCaretPositionDirty;

  /// @brief Field m_forceRectTransformAdjustment, offset 0x2e3, size 0x1
  __declspec(property(get = __get_m_forceRectTransformAdjustment, put = __set_m_forceRectTransformAdjustment)) bool m_forceRectTransformAdjustment;

  /// @brief Field m_ProcessingEvent, offset 0x2e8, size 0x8
  __declspec(property(get = __get_m_ProcessingEvent, put = __set_m_ProcessingEvent))::UnityEngine::Event* m_ProcessingEvent;

  /// @brief Field kSeparators, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kSeparators, put = setStaticF_kSeparators))::ArrayW<char16_t, ::Array<char16_t>*> kSeparators;

  __declspec(property(get = get_inputSystem))::UnityEngine::EventSystems::BaseInput* inputSystem;

  __declspec(property(get = get_compositionString))::StringW compositionString;

  __declspec(property(get = get_compositionLength)) int32_t compositionLength;

  __declspec(property(get = get_mesh))::UnityEngine::Mesh* mesh;

  __declspec(property(get = get_shouldHideMobileInput, put = set_shouldHideMobileInput)) bool shouldHideMobileInput;

  __declspec(property(get = get_shouldHideSoftKeyboard, put = set_shouldHideSoftKeyboard)) bool shouldHideSoftKeyboard;

  __declspec(property(get = get_text, put = set_text))::StringW text;

  __declspec(property(get = get_isFocused)) bool isFocused;

  __declspec(property(get = get_caretBlinkRate, put = set_caretBlinkRate)) float_t caretBlinkRate;

  __declspec(property(get = get_caretWidth, put = set_caretWidth)) int32_t caretWidth;

  __declspec(property(get = get_textViewport, put = set_textViewport))::UnityEngine::RectTransform* textViewport;

  __declspec(property(get = get_textComponent, put = set_textComponent))::TMPro::TMP_Text* textComponent;

  __declspec(property(get = get_placeholder, put = set_placeholder))::UnityEngine::UI::Graphic* placeholder;

  __declspec(property(get = get_verticalScrollbar, put = set_verticalScrollbar))::UnityEngine::UI::Scrollbar* verticalScrollbar;

  __declspec(property(get = get_scrollSensitivity, put = set_scrollSensitivity)) float_t scrollSensitivity;

  __declspec(property(get = get_caretColor, put = set_caretColor))::UnityEngine::Color caretColor;

  __declspec(property(get = get_customCaretColor, put = set_customCaretColor)) bool customCaretColor;

  __declspec(property(get = get_selectionColor, put = set_selectionColor))::UnityEngine::Color selectionColor;

  __declspec(property(get = get_onEndEdit, put = set_onEndEdit))::TMPro::__TMP_InputField__SubmitEvent* onEndEdit;

  __declspec(property(get = get_onSubmit, put = set_onSubmit))::TMPro::__TMP_InputField__SubmitEvent* onSubmit;

  __declspec(property(get = get_onSelect, put = set_onSelect))::TMPro::__TMP_InputField__SelectionEvent* onSelect;

  __declspec(property(get = get_onDeselect, put = set_onDeselect))::TMPro::__TMP_InputField__SelectionEvent* onDeselect;

  __declspec(property(get = get_onTextSelection, put = set_onTextSelection))::TMPro::__TMP_InputField__TextSelectionEvent* onTextSelection;

  __declspec(property(get = get_onEndTextSelection, put = set_onEndTextSelection))::TMPro::__TMP_InputField__TextSelectionEvent* onEndTextSelection;

  __declspec(property(get = get_onValueChanged, put = set_onValueChanged))::TMPro::__TMP_InputField__OnChangeEvent* onValueChanged;

  __declspec(property(get = get_onTouchScreenKeyboardStatusChanged,
                      put = set_onTouchScreenKeyboardStatusChanged))::TMPro::__TMP_InputField__TouchScreenKeyboardEvent* onTouchScreenKeyboardStatusChanged;

  __declspec(property(get = get_onValidateInput, put = set_onValidateInput))::TMPro::__TMP_InputField__OnValidateInput* onValidateInput;

  __declspec(property(get = get_characterLimit, put = set_characterLimit)) int32_t characterLimit;

  __declspec(property(get = get_pointSize, put = set_pointSize)) float_t pointSize;

  __declspec(property(get = get_fontAsset, put = set_fontAsset))::TMPro::TMP_FontAsset* fontAsset;

  __declspec(property(get = get_onFocusSelectAll, put = set_onFocusSelectAll)) bool onFocusSelectAll;

  __declspec(property(get = get_resetOnDeActivation, put = set_resetOnDeActivation)) bool resetOnDeActivation;

  __declspec(property(get = get_restoreOriginalTextOnEscape, put = set_restoreOriginalTextOnEscape)) bool restoreOriginalTextOnEscape;

  __declspec(property(get = get_isRichTextEditingAllowed, put = set_isRichTextEditingAllowed)) bool isRichTextEditingAllowed;

  __declspec(property(get = get_contentType, put = set_contentType))::TMPro::__TMP_InputField__ContentType contentType;

  __declspec(property(get = get_lineType, put = set_lineType))::TMPro::__TMP_InputField__LineType lineType;

  __declspec(property(get = get_lineLimit, put = set_lineLimit)) int32_t lineLimit;

  __declspec(property(get = get_inputType, put = set_inputType))::TMPro::__TMP_InputField__InputType inputType;

  __declspec(property(get = get_keyboardType, put = set_keyboardType))::UnityEngine::TouchScreenKeyboardType keyboardType;

  __declspec(property(get = get_characterValidation, put = set_characterValidation))::TMPro::__TMP_InputField__CharacterValidation characterValidation;

  __declspec(property(get = get_inputValidator, put = set_inputValidator))::TMPro::TMP_InputValidator* inputValidator;

  __declspec(property(get = get_readOnly, put = set_readOnly)) bool readOnly;

  __declspec(property(get = get_richText, put = set_richText)) bool richText;

  __declspec(property(get = get_multiLine)) bool multiLine;

  __declspec(property(get = get_asteriskChar, put = set_asteriskChar)) char16_t asteriskChar;

  __declspec(property(get = get_wasCanceled)) bool wasCanceled;

  __declspec(property(get = get_caretPositionInternal, put = set_caretPositionInternal)) int32_t caretPositionInternal;

  __declspec(property(get = get_stringPositionInternal, put = set_stringPositionInternal)) int32_t stringPositionInternal;

  __declspec(property(get = get_caretSelectPositionInternal, put = set_caretSelectPositionInternal)) int32_t caretSelectPositionInternal;

  __declspec(property(get = get_stringSelectPositionInternal, put = set_stringSelectPositionInternal)) int32_t stringSelectPositionInternal;

  __declspec(property(get = get_hasSelection)) bool hasSelection;

  __declspec(property(get = get_caretPosition, put = set_caretPosition)) int32_t caretPosition;

  __declspec(property(get = get_selectionAnchorPosition, put = set_selectionAnchorPosition)) int32_t selectionAnchorPosition;

  __declspec(property(get = get_selectionFocusPosition, put = set_selectionFocusPosition)) int32_t selectionFocusPosition;

  __declspec(property(get = get_stringPosition, put = set_stringPosition)) int32_t stringPosition;

  __declspec(property(get = get_selectionStringAnchorPosition, put = set_selectionStringAnchorPosition)) int32_t selectionStringAnchorPosition;

  __declspec(property(get = get_selectionStringFocusPosition, put = set_selectionStringFocusPosition)) int32_t selectionStringFocusPosition;

  __declspec(property(get = get_minWidth)) float_t minWidth;

  __declspec(property(get = get_preferredWidth)) float_t preferredWidth;

  __declspec(property(get = get_flexibleWidth)) float_t flexibleWidth;

  __declspec(property(get = get_minHeight)) float_t minHeight;

  __declspec(property(get = get_preferredHeight)) float_t preferredHeight;

  __declspec(property(get = get_flexibleHeight)) float_t flexibleHeight;

  __declspec(property(get = get_layoutPriority)) int32_t layoutPriority;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IUpdateSelectedHandler"
  constexpr operator ::UnityEngine::EventSystems::IUpdateSelectedHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IBeginDragHandler"
  constexpr operator ::UnityEngine::EventSystems::IBeginDragHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IDragHandler"
  constexpr operator ::UnityEngine::EventSystems::IDragHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEndDragHandler"
  constexpr operator ::UnityEngine::EventSystems::IEndDragHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::ISubmitHandler"
  constexpr operator ::UnityEngine::EventSystems::ISubmitHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UI::ICanvasElement"
  constexpr operator ::UnityEngine::UI::ICanvasElement*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UI::ILayoutElement"
  constexpr operator ::UnityEngine::UI::ILayoutElement*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IScrollHandler"
  constexpr operator ::UnityEngine::EventSystems::IScrollHandler*() noexcept;

  constexpr ::UnityEngine::TouchScreenKeyboard*& __get_m_SoftKeyboard();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TouchScreenKeyboard*> const& __get_m_SoftKeyboard() const;

  constexpr void __set_m_SoftKeyboard(::UnityEngine::TouchScreenKeyboard* value);

  constexpr ::UnityEngine::RectTransform*& __get_m_RectTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get_m_RectTransform() const;

  constexpr void __set_m_RectTransform(::UnityEngine::RectTransform* value);

  constexpr ::UnityEngine::RectTransform*& __get_m_TextViewport();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get_m_TextViewport() const;

  constexpr void __set_m_TextViewport(::UnityEngine::RectTransform* value);

  constexpr ::UnityEngine::UI::RectMask2D*& __get_m_TextComponentRectMask();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::RectMask2D*> const& __get_m_TextComponentRectMask() const;

  constexpr void __set_m_TextComponentRectMask(::UnityEngine::UI::RectMask2D* value);

  constexpr ::UnityEngine::UI::RectMask2D*& __get_m_TextViewportRectMask();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::RectMask2D*> const& __get_m_TextViewportRectMask() const;

  constexpr void __set_m_TextViewportRectMask(::UnityEngine::UI::RectMask2D* value);

  constexpr ::UnityEngine::Rect& __get_m_CachedViewportRect();

  constexpr ::UnityEngine::Rect const& __get_m_CachedViewportRect() const;

  constexpr void __set_m_CachedViewportRect(::UnityEngine::Rect value);

  constexpr ::TMPro::TMP_Text*& __get_m_TextComponent();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_Text*> const& __get_m_TextComponent() const;

  constexpr void __set_m_TextComponent(::TMPro::TMP_Text* value);

  constexpr ::UnityEngine::RectTransform*& __get_m_TextComponentRectTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get_m_TextComponentRectTransform() const;

  constexpr void __set_m_TextComponentRectTransform(::UnityEngine::RectTransform* value);

  constexpr ::UnityEngine::UI::Graphic*& __get_m_Placeholder();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Graphic*> const& __get_m_Placeholder() const;

  constexpr void __set_m_Placeholder(::UnityEngine::UI::Graphic* value);

  constexpr ::UnityEngine::UI::Scrollbar*& __get_m_VerticalScrollbar();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Scrollbar*> const& __get_m_VerticalScrollbar() const;

  constexpr void __set_m_VerticalScrollbar(::UnityEngine::UI::Scrollbar* value);

  constexpr ::TMPro::TMP_ScrollbarEventHandler*& __get_m_VerticalScrollbarEventHandler();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_ScrollbarEventHandler*> const& __get_m_VerticalScrollbarEventHandler() const;

  constexpr void __set_m_VerticalScrollbarEventHandler(::TMPro::TMP_ScrollbarEventHandler* value);

  constexpr bool& __get_m_IsDrivenByLayoutComponents();

  constexpr bool const& __get_m_IsDrivenByLayoutComponents() const;

  constexpr void __set_m_IsDrivenByLayoutComponents(bool value);

  constexpr ::UnityEngine::UI::LayoutGroup*& __get_m_LayoutGroup();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::LayoutGroup*> const& __get_m_LayoutGroup() const;

  constexpr void __set_m_LayoutGroup(::UnityEngine::UI::LayoutGroup* value);

  constexpr ::UnityEngine::EventSystems::IScrollHandler*& __get_m_IScrollHandlerParent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::IScrollHandler*> const& __get_m_IScrollHandlerParent() const;

  constexpr void __set_m_IScrollHandlerParent(::UnityEngine::EventSystems::IScrollHandler* value);

  constexpr float_t& __get_m_ScrollPosition();

  constexpr float_t const& __get_m_ScrollPosition() const;

  constexpr void __set_m_ScrollPosition(float_t value);

  constexpr float_t& __get_m_ScrollSensitivity();

  constexpr float_t const& __get_m_ScrollSensitivity() const;

  constexpr void __set_m_ScrollSensitivity(float_t value);

  constexpr ::TMPro::__TMP_InputField__ContentType& __get_m_ContentType();

  constexpr ::TMPro::__TMP_InputField__ContentType const& __get_m_ContentType() const;

  constexpr void __set_m_ContentType(::TMPro::__TMP_InputField__ContentType value);

  constexpr ::TMPro::__TMP_InputField__InputType& __get_m_InputType();

  constexpr ::TMPro::__TMP_InputField__InputType const& __get_m_InputType() const;

  constexpr void __set_m_InputType(::TMPro::__TMP_InputField__InputType value);

  constexpr char16_t& __get_m_AsteriskChar();

  constexpr char16_t const& __get_m_AsteriskChar() const;

  constexpr void __set_m_AsteriskChar(char16_t value);

  constexpr ::UnityEngine::TouchScreenKeyboardType& __get_m_KeyboardType();

  constexpr ::UnityEngine::TouchScreenKeyboardType const& __get_m_KeyboardType() const;

  constexpr void __set_m_KeyboardType(::UnityEngine::TouchScreenKeyboardType value);

  constexpr ::TMPro::__TMP_InputField__LineType& __get_m_LineType();

  constexpr ::TMPro::__TMP_InputField__LineType const& __get_m_LineType() const;

  constexpr void __set_m_LineType(::TMPro::__TMP_InputField__LineType value);

  constexpr bool& __get_m_HideMobileInput();

  constexpr bool const& __get_m_HideMobileInput() const;

  constexpr void __set_m_HideMobileInput(bool value);

  constexpr bool& __get_m_HideSoftKeyboard();

  constexpr bool const& __get_m_HideSoftKeyboard() const;

  constexpr void __set_m_HideSoftKeyboard(bool value);

  constexpr ::TMPro::__TMP_InputField__CharacterValidation& __get_m_CharacterValidation();

  constexpr ::TMPro::__TMP_InputField__CharacterValidation const& __get_m_CharacterValidation() const;

  constexpr void __set_m_CharacterValidation(::TMPro::__TMP_InputField__CharacterValidation value);

  constexpr ::StringW& __get_m_RegexValue();

  constexpr ::StringW const& __get_m_RegexValue() const;

  constexpr void __set_m_RegexValue(::StringW value);

  constexpr float_t& __get_m_GlobalPointSize();

  constexpr float_t const& __get_m_GlobalPointSize() const;

  constexpr void __set_m_GlobalPointSize(float_t value);

  constexpr int32_t& __get_m_CharacterLimit();

  constexpr int32_t const& __get_m_CharacterLimit() const;

  constexpr void __set_m_CharacterLimit(int32_t value);

  constexpr ::TMPro::__TMP_InputField__SubmitEvent*& __get_m_OnEndEdit();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_InputField__SubmitEvent*> const& __get_m_OnEndEdit() const;

  constexpr void __set_m_OnEndEdit(::TMPro::__TMP_InputField__SubmitEvent* value);

  constexpr ::TMPro::__TMP_InputField__SubmitEvent*& __get_m_OnSubmit();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_InputField__SubmitEvent*> const& __get_m_OnSubmit() const;

  constexpr void __set_m_OnSubmit(::TMPro::__TMP_InputField__SubmitEvent* value);

  constexpr ::TMPro::__TMP_InputField__SelectionEvent*& __get_m_OnSelect();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_InputField__SelectionEvent*> const& __get_m_OnSelect() const;

  constexpr void __set_m_OnSelect(::TMPro::__TMP_InputField__SelectionEvent* value);

  constexpr ::TMPro::__TMP_InputField__SelectionEvent*& __get_m_OnDeselect();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_InputField__SelectionEvent*> const& __get_m_OnDeselect() const;

  constexpr void __set_m_OnDeselect(::TMPro::__TMP_InputField__SelectionEvent* value);

  constexpr ::TMPro::__TMP_InputField__TextSelectionEvent*& __get_m_OnTextSelection();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_InputField__TextSelectionEvent*> const& __get_m_OnTextSelection() const;

  constexpr void __set_m_OnTextSelection(::TMPro::__TMP_InputField__TextSelectionEvent* value);

  constexpr ::TMPro::__TMP_InputField__TextSelectionEvent*& __get_m_OnEndTextSelection();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_InputField__TextSelectionEvent*> const& __get_m_OnEndTextSelection() const;

  constexpr void __set_m_OnEndTextSelection(::TMPro::__TMP_InputField__TextSelectionEvent* value);

  constexpr ::TMPro::__TMP_InputField__OnChangeEvent*& __get_m_OnValueChanged();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_InputField__OnChangeEvent*> const& __get_m_OnValueChanged() const;

  constexpr void __set_m_OnValueChanged(::TMPro::__TMP_InputField__OnChangeEvent* value);

  constexpr ::TMPro::__TMP_InputField__TouchScreenKeyboardEvent*& __get_m_OnTouchScreenKeyboardStatusChanged();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_InputField__TouchScreenKeyboardEvent*> const& __get_m_OnTouchScreenKeyboardStatusChanged() const;

  constexpr void __set_m_OnTouchScreenKeyboardStatusChanged(::TMPro::__TMP_InputField__TouchScreenKeyboardEvent* value);

  constexpr ::TMPro::__TMP_InputField__OnValidateInput*& __get_m_OnValidateInput();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_InputField__OnValidateInput*> const& __get_m_OnValidateInput() const;

  constexpr void __set_m_OnValidateInput(::TMPro::__TMP_InputField__OnValidateInput* value);

  constexpr ::UnityEngine::Color& __get_m_CaretColor();

  constexpr ::UnityEngine::Color const& __get_m_CaretColor() const;

  constexpr void __set_m_CaretColor(::UnityEngine::Color value);

  constexpr bool& __get_m_CustomCaretColor();

  constexpr bool const& __get_m_CustomCaretColor() const;

  constexpr void __set_m_CustomCaretColor(bool value);

  constexpr ::UnityEngine::Color& __get_m_SelectionColor();

  constexpr ::UnityEngine::Color const& __get_m_SelectionColor() const;

  constexpr void __set_m_SelectionColor(::UnityEngine::Color value);

  constexpr ::StringW& __get_m_Text();

  constexpr ::StringW const& __get_m_Text() const;

  constexpr void __set_m_Text(::StringW value);

  constexpr float_t& __get_m_CaretBlinkRate();

  constexpr float_t const& __get_m_CaretBlinkRate() const;

  constexpr void __set_m_CaretBlinkRate(float_t value);

  constexpr int32_t& __get_m_CaretWidth();

  constexpr int32_t const& __get_m_CaretWidth() const;

  constexpr void __set_m_CaretWidth(int32_t value);

  constexpr bool& __get_m_ReadOnly();

  constexpr bool const& __get_m_ReadOnly() const;

  constexpr void __set_m_ReadOnly(bool value);

  constexpr bool& __get_m_RichText();

  constexpr bool const& __get_m_RichText() const;

  constexpr void __set_m_RichText(bool value);

  constexpr int32_t& __get_m_StringPosition();

  constexpr int32_t const& __get_m_StringPosition() const;

  constexpr void __set_m_StringPosition(int32_t value);

  constexpr int32_t& __get_m_StringSelectPosition();

  constexpr int32_t const& __get_m_StringSelectPosition() const;

  constexpr void __set_m_StringSelectPosition(int32_t value);

  constexpr int32_t& __get_m_CaretPosition();

  constexpr int32_t const& __get_m_CaretPosition() const;

  constexpr void __set_m_CaretPosition(int32_t value);

  constexpr int32_t& __get_m_CaretSelectPosition();

  constexpr int32_t const& __get_m_CaretSelectPosition() const;

  constexpr void __set_m_CaretSelectPosition(int32_t value);

  constexpr ::UnityEngine::RectTransform*& __get_caretRectTrans();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get_caretRectTrans() const;

  constexpr void __set_caretRectTrans(::UnityEngine::RectTransform* value);

  constexpr ::ArrayW<::UnityEngine::UIVertex, ::Array<::UnityEngine::UIVertex>*>& __get_m_CursorVerts();

  constexpr ::ArrayW<::UnityEngine::UIVertex, ::Array<::UnityEngine::UIVertex>*> const& __get_m_CursorVerts() const;

  constexpr void __set_m_CursorVerts(::ArrayW<::UnityEngine::UIVertex, ::Array<::UnityEngine::UIVertex>*> value);

  constexpr ::UnityEngine::CanvasRenderer*& __get_m_CachedInputRenderer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasRenderer*> const& __get_m_CachedInputRenderer() const;

  constexpr void __set_m_CachedInputRenderer(::UnityEngine::CanvasRenderer* value);

  constexpr ::UnityEngine::Vector2& __get_m_LastPosition();

  constexpr ::UnityEngine::Vector2 const& __get_m_LastPosition() const;

  constexpr void __set_m_LastPosition(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Mesh*& __get_m_Mesh();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> const& __get_m_Mesh() const;

  constexpr void __set_m_Mesh(::UnityEngine::Mesh* value);

  constexpr bool& __get_m_AllowInput();

  constexpr bool const& __get_m_AllowInput() const;

  constexpr void __set_m_AllowInput(bool value);

  constexpr bool& __get_m_ShouldActivateNextUpdate();

  constexpr bool const& __get_m_ShouldActivateNextUpdate() const;

  constexpr void __set_m_ShouldActivateNextUpdate(bool value);

  constexpr bool& __get_m_UpdateDrag();

  constexpr bool const& __get_m_UpdateDrag() const;

  constexpr void __set_m_UpdateDrag(bool value);

  constexpr bool& __get_m_DragPositionOutOfBounds();

  constexpr bool const& __get_m_DragPositionOutOfBounds() const;

  constexpr void __set_m_DragPositionOutOfBounds(bool value);

  constexpr bool& __get_m_CaretVisible();

  constexpr bool const& __get_m_CaretVisible() const;

  constexpr void __set_m_CaretVisible(bool value);

  constexpr ::UnityEngine::Coroutine*& __get_m_BlinkCoroutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __get_m_BlinkCoroutine() const;

  constexpr void __set_m_BlinkCoroutine(::UnityEngine::Coroutine* value);

  constexpr float_t& __get_m_BlinkStartTime();

  constexpr float_t const& __get_m_BlinkStartTime() const;

  constexpr void __set_m_BlinkStartTime(float_t value);

  constexpr ::UnityEngine::Coroutine*& __get_m_DragCoroutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __get_m_DragCoroutine() const;

  constexpr void __set_m_DragCoroutine(::UnityEngine::Coroutine* value);

  constexpr ::StringW& __get_m_OriginalText();

  constexpr ::StringW const& __get_m_OriginalText() const;

  constexpr void __set_m_OriginalText(::StringW value);

  constexpr bool& __get_m_WasCanceled();

  constexpr bool const& __get_m_WasCanceled() const;

  constexpr void __set_m_WasCanceled(bool value);

  constexpr bool& __get_m_HasDoneFocusTransition();

  constexpr bool const& __get_m_HasDoneFocusTransition() const;

  constexpr void __set_m_HasDoneFocusTransition(bool value);

  constexpr ::UnityEngine::WaitForSecondsRealtime*& __get_m_WaitForSecondsRealtime();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::WaitForSecondsRealtime*> const& __get_m_WaitForSecondsRealtime() const;

  constexpr void __set_m_WaitForSecondsRealtime(::UnityEngine::WaitForSecondsRealtime* value);

  constexpr bool& __get_m_PreventCallback();

  constexpr bool const& __get_m_PreventCallback() const;

  constexpr void __set_m_PreventCallback(bool value);

  constexpr bool& __get_m_TouchKeyboardAllowsInPlaceEditing();

  constexpr bool const& __get_m_TouchKeyboardAllowsInPlaceEditing() const;

  constexpr void __set_m_TouchKeyboardAllowsInPlaceEditing(bool value);

  constexpr bool& __get_m_IsTextComponentUpdateRequired();

  constexpr bool const& __get_m_IsTextComponentUpdateRequired() const;

  constexpr void __set_m_IsTextComponentUpdateRequired(bool value);

  constexpr bool& __get_m_isLastKeyBackspace();

  constexpr bool const& __get_m_isLastKeyBackspace() const;

  constexpr void __set_m_isLastKeyBackspace(bool value);

  constexpr float_t& __get_m_PointerDownClickStartTime();

  constexpr float_t const& __get_m_PointerDownClickStartTime() const;

  constexpr void __set_m_PointerDownClickStartTime(float_t value);

  constexpr float_t& __get_m_KeyDownStartTime();

  constexpr float_t const& __get_m_KeyDownStartTime() const;

  constexpr void __set_m_KeyDownStartTime(float_t value);

  constexpr float_t& __get_m_DoubleClickDelay();

  constexpr float_t const& __get_m_DoubleClickDelay() const;

  constexpr void __set_m_DoubleClickDelay(float_t value);

  constexpr bool& __get_m_IsCompositionActive();

  constexpr bool const& __get_m_IsCompositionActive() const;

  constexpr void __set_m_IsCompositionActive(bool value);

  constexpr bool& __get_m_ShouldUpdateIMEWindowPosition();

  constexpr bool const& __get_m_ShouldUpdateIMEWindowPosition() const;

  constexpr void __set_m_ShouldUpdateIMEWindowPosition(bool value);

  constexpr int32_t& __get_m_PreviousIMEInsertionLine();

  constexpr int32_t const& __get_m_PreviousIMEInsertionLine() const;

  constexpr void __set_m_PreviousIMEInsertionLine(int32_t value);

  constexpr ::TMPro::TMP_FontAsset*& __get_m_GlobalFontAsset();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_FontAsset*> const& __get_m_GlobalFontAsset() const;

  constexpr void __set_m_GlobalFontAsset(::TMPro::TMP_FontAsset* value);

  constexpr bool& __get_m_OnFocusSelectAll();

  constexpr bool const& __get_m_OnFocusSelectAll() const;

  constexpr void __set_m_OnFocusSelectAll(bool value);

  constexpr bool& __get_m_isSelectAll();

  constexpr bool const& __get_m_isSelectAll() const;

  constexpr void __set_m_isSelectAll(bool value);

  constexpr bool& __get_m_ResetOnDeActivation();

  constexpr bool const& __get_m_ResetOnDeActivation() const;

  constexpr void __set_m_ResetOnDeActivation(bool value);

  constexpr bool& __get_m_SelectionStillActive();

  constexpr bool const& __get_m_SelectionStillActive() const;

  constexpr void __set_m_SelectionStillActive(bool value);

  constexpr bool& __get_m_ReleaseSelection();

  constexpr bool const& __get_m_ReleaseSelection() const;

  constexpr void __set_m_ReleaseSelection(bool value);

  constexpr ::UnityEngine::GameObject*& __get_m_PreviouslySelectedObject();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_m_PreviouslySelectedObject() const;

  constexpr void __set_m_PreviouslySelectedObject(::UnityEngine::GameObject* value);

  constexpr bool& __get_m_RestoreOriginalTextOnEscape();

  constexpr bool const& __get_m_RestoreOriginalTextOnEscape() const;

  constexpr void __set_m_RestoreOriginalTextOnEscape(bool value);

  constexpr bool& __get_m_isRichTextEditingAllowed();

  constexpr bool const& __get_m_isRichTextEditingAllowed() const;

  constexpr void __set_m_isRichTextEditingAllowed(bool value);

  constexpr int32_t& __get_m_LineLimit();

  constexpr int32_t const& __get_m_LineLimit() const;

  constexpr void __set_m_LineLimit(int32_t value);

  constexpr ::TMPro::TMP_InputValidator*& __get_m_InputValidator();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_InputValidator*> const& __get_m_InputValidator() const;

  constexpr void __set_m_InputValidator(::TMPro::TMP_InputValidator* value);

  constexpr bool& __get_m_isSelected();

  constexpr bool const& __get_m_isSelected() const;

  constexpr void __set_m_isSelected(bool value);

  constexpr bool& __get_m_IsStringPositionDirty();

  constexpr bool const& __get_m_IsStringPositionDirty() const;

  constexpr void __set_m_IsStringPositionDirty(bool value);

  constexpr bool& __get_m_IsCaretPositionDirty();

  constexpr bool const& __get_m_IsCaretPositionDirty() const;

  constexpr void __set_m_IsCaretPositionDirty(bool value);

  constexpr bool& __get_m_forceRectTransformAdjustment();

  constexpr bool const& __get_m_forceRectTransformAdjustment() const;

  constexpr void __set_m_forceRectTransformAdjustment(bool value);

  constexpr ::UnityEngine::Event*& __get_m_ProcessingEvent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Event*> const& __get_m_ProcessingEvent() const;

  constexpr void __set_m_ProcessingEvent(::UnityEngine::Event* value);

  static inline void setStaticF_kSeparators(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_kSeparators();

  /// @brief Method get_inputSystem, addr 0x2c1235c, size 0x110, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::BaseInput* get_inputSystem();

  /// @brief Method get_compositionString, addr 0x2c1246c, size 0x94, virtual false, abstract: false, final false
  inline ::StringW get_compositionString();

  /// @brief Method get_compositionLength, addr 0x2c12500, size 0x2c, virtual false, abstract: false, final false
  inline int32_t get_compositionLength();

  static inline ::TMPro::TMP_InputField* New_ctor();

  /// @brief Method .ctor, addr 0x2c1252c, size 0x290, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_mesh, addr 0x2c12850, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::Mesh* get_mesh();

  /// @brief Method get_shouldHideMobileInput, addr 0x2c128f8, size 0x48, virtual false, abstract: false, final false
  inline bool get_shouldHideMobileInput();

  /// @brief Method set_shouldHideMobileInput, addr 0x2c12940, size 0x8c, virtual false, abstract: false, final false
  inline void set_shouldHideMobileInput(bool value);

  /// @brief Method get_shouldHideSoftKeyboard, addr 0x2c129cc, size 0x94, virtual false, abstract: false, final false
  inline bool get_shouldHideSoftKeyboard();

  /// @brief Method set_shouldHideSoftKeyboard, addr 0x2c12a60, size 0x114, virtual false, abstract: false, final false
  inline void set_shouldHideSoftKeyboard(bool value);

  /// @brief Method isKeyboardUsingEvents, addr 0x2c12b74, size 0x54, virtual false, abstract: false, final false
  inline bool isKeyboardUsingEvents();

  /// @brief Method get_text, addr 0x2c12bc8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Method set_text, addr 0x2c12bd0, size 0x8, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

  /// @brief Method SetTextWithoutNotify, addr 0x2c12d0c, size 0x8, virtual false, abstract: false, final false
  inline void SetTextWithoutNotify(::StringW input);

  /// @brief Method SetText, addr 0x2c12bd8, size 0x134, virtual false, abstract: false, final false
  /// @param sendCallback: bool (default: true)
  inline void SetText(::StringW value, bool sendCallback = true);

  /// @brief Method get_isFocused, addr 0x2c1328c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isFocused();

  /// @brief Method get_caretBlinkRate, addr 0x2c13294, size 0x8, virtual false, abstract: false, final false
  inline float_t get_caretBlinkRate();

  /// @brief Method set_caretBlinkRate, addr 0x2c1329c, size 0x7c, virtual false, abstract: false, final false
  inline void set_caretBlinkRate(float_t value);

  /// @brief Method get_caretWidth, addr 0x2c1336c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_caretWidth();

  /// @brief Method set_caretWidth, addr 0x2c13374, size 0x74, virtual false, abstract: false, final false
  inline void set_caretWidth(int32_t value);

  /// @brief Method get_textViewport, addr 0x2c13440, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::RectTransform* get_textViewport();

  /// @brief Method set_textViewport, addr 0x2c03528, size 0x58, virtual false, abstract: false, final false
  inline void set_textViewport(::UnityEngine::RectTransform* value);

  /// @brief Method get_textComponent, addr 0x2c13448, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::TMP_Text* get_textComponent();

  /// @brief Method set_textComponent, addr 0x2c03580, size 0x74, virtual false, abstract: false, final false
  inline void set_textComponent(::TMPro::TMP_Text* value);

  /// @brief Method get_placeholder, addr 0x2c13450, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::Graphic* get_placeholder();

  /// @brief Method set_placeholder, addr 0x2c035f4, size 0x58, virtual false, abstract: false, final false
  inline void set_placeholder(::UnityEngine::UI::Graphic* value);

  /// @brief Method get_verticalScrollbar, addr 0x2c13458, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::Scrollbar* get_verticalScrollbar();

  /// @brief Method set_verticalScrollbar, addr 0x2c13460, size 0x1b8, virtual false, abstract: false, final false
  inline void set_verticalScrollbar(::UnityEngine::UI::Scrollbar* value);

  /// @brief Method get_scrollSensitivity, addr 0x2c13618, size 0x8, virtual false, abstract: false, final false
  inline float_t get_scrollSensitivity();

  /// @brief Method set_scrollSensitivity, addr 0x2c13620, size 0x74, virtual false, abstract: false, final false
  inline void set_scrollSensitivity(float_t value);

  /// @brief Method get_caretColor, addr 0x2c13694, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_caretColor();

  /// @brief Method set_caretColor, addr 0x2c136d8, size 0x2c, virtual false, abstract: false, final false
  inline void set_caretColor(::UnityEngine::Color value);

  /// @brief Method get_customCaretColor, addr 0x2c13704, size 0x8, virtual false, abstract: false, final false
  inline bool get_customCaretColor();

  /// @brief Method set_customCaretColor, addr 0x2c1370c, size 0x1c, virtual false, abstract: false, final false
  inline void set_customCaretColor(bool value);

  /// @brief Method get_selectionColor, addr 0x2c13728, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_selectionColor();

  /// @brief Method set_selectionColor, addr 0x2c1373c, size 0x2c, virtual false, abstract: false, final false
  inline void set_selectionColor(::UnityEngine::Color value);

  /// @brief Method get_onEndEdit, addr 0x2c13768, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::__TMP_InputField__SubmitEvent* get_onEndEdit();

  /// @brief Method set_onEndEdit, addr 0x2c13770, size 0x58, virtual false, abstract: false, final false
  inline void set_onEndEdit(::TMPro::__TMP_InputField__SubmitEvent* value);

  /// @brief Method get_onSubmit, addr 0x2c137c8, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::__TMP_InputField__SubmitEvent* get_onSubmit();

  /// @brief Method set_onSubmit, addr 0x2c137d0, size 0x58, virtual false, abstract: false, final false
  inline void set_onSubmit(::TMPro::__TMP_InputField__SubmitEvent* value);

  /// @brief Method get_onSelect, addr 0x2c13828, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::__TMP_InputField__SelectionEvent* get_onSelect();

  /// @brief Method set_onSelect, addr 0x2c13830, size 0x58, virtual false, abstract: false, final false
  inline void set_onSelect(::TMPro::__TMP_InputField__SelectionEvent* value);

  /// @brief Method get_onDeselect, addr 0x2c13888, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::__TMP_InputField__SelectionEvent* get_onDeselect();

  /// @brief Method set_onDeselect, addr 0x2c13890, size 0x58, virtual false, abstract: false, final false
  inline void set_onDeselect(::TMPro::__TMP_InputField__SelectionEvent* value);

  /// @brief Method get_onTextSelection, addr 0x2c138e8, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::__TMP_InputField__TextSelectionEvent* get_onTextSelection();

  /// @brief Method set_onTextSelection, addr 0x2c138f0, size 0x58, virtual false, abstract: false, final false
  inline void set_onTextSelection(::TMPro::__TMP_InputField__TextSelectionEvent* value);

  /// @brief Method get_onEndTextSelection, addr 0x2c13948, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::__TMP_InputField__TextSelectionEvent* get_onEndTextSelection();

  /// @brief Method set_onEndTextSelection, addr 0x2c13950, size 0x58, virtual false, abstract: false, final false
  inline void set_onEndTextSelection(::TMPro::__TMP_InputField__TextSelectionEvent* value);

  /// @brief Method get_onValueChanged, addr 0x2c139a8, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::__TMP_InputField__OnChangeEvent* get_onValueChanged();

  /// @brief Method set_onValueChanged, addr 0x2c139b0, size 0x58, virtual false, abstract: false, final false
  inline void set_onValueChanged(::TMPro::__TMP_InputField__OnChangeEvent* value);

  /// @brief Method get_onTouchScreenKeyboardStatusChanged, addr 0x2c13a08, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::__TMP_InputField__TouchScreenKeyboardEvent* get_onTouchScreenKeyboardStatusChanged();

  /// @brief Method set_onTouchScreenKeyboardStatusChanged, addr 0x2c13a10, size 0x58, virtual false, abstract: false, final false
  inline void set_onTouchScreenKeyboardStatusChanged(::TMPro::__TMP_InputField__TouchScreenKeyboardEvent* value);

  /// @brief Method get_onValidateInput, addr 0x2c13a68, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::__TMP_InputField__OnValidateInput* get_onValidateInput();

  /// @brief Method set_onValidateInput, addr 0x2c13a70, size 0x58, virtual false, abstract: false, final false
  inline void set_onValidateInput(::TMPro::__TMP_InputField__OnValidateInput* value);

  /// @brief Method get_characterLimit, addr 0x2c13ac8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_characterLimit();

  /// @brief Method set_characterLimit, addr 0x2c13ad0, size 0xc0, virtual false, abstract: false, final false
  inline void set_characterLimit(int32_t value);

  /// @brief Method get_pointSize, addr 0x2c13b90, size 0x8, virtual false, abstract: false, final false
  inline float_t get_pointSize();

  /// @brief Method set_pointSize, addr 0x2c13b98, size 0xb4, virtual false, abstract: false, final false
  inline void set_pointSize(float_t value);

  /// @brief Method get_fontAsset, addr 0x2c13d34, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::TMP_FontAsset* get_fontAsset();

  /// @brief Method set_fontAsset, addr 0x2c0364c, size 0x80, virtual false, abstract: false, final false
  inline void set_fontAsset(::TMPro::TMP_FontAsset* value);

  /// @brief Method get_onFocusSelectAll, addr 0x2c13e1c, size 0x8, virtual false, abstract: false, final false
  inline bool get_onFocusSelectAll();

  /// @brief Method set_onFocusSelectAll, addr 0x2c13e24, size 0xc, virtual false, abstract: false, final false
  inline void set_onFocusSelectAll(bool value);

  /// @brief Method get_resetOnDeActivation, addr 0x2c13e30, size 0x8, virtual false, abstract: false, final false
  inline bool get_resetOnDeActivation();

  /// @brief Method set_resetOnDeActivation, addr 0x2c13e38, size 0xc, virtual false, abstract: false, final false
  inline void set_resetOnDeActivation(bool value);

  /// @brief Method get_restoreOriginalTextOnEscape, addr 0x2c13e44, size 0x8, virtual false, abstract: false, final false
  inline bool get_restoreOriginalTextOnEscape();

  /// @brief Method set_restoreOriginalTextOnEscape, addr 0x2c13e4c, size 0xc, virtual false, abstract: false, final false
  inline void set_restoreOriginalTextOnEscape(bool value);

  /// @brief Method get_isRichTextEditingAllowed, addr 0x2c13e58, size 0x8, virtual false, abstract: false, final false
  inline bool get_isRichTextEditingAllowed();

  /// @brief Method set_isRichTextEditingAllowed, addr 0x2c13e60, size 0xc, virtual false, abstract: false, final false
  inline void set_isRichTextEditingAllowed(bool value);

  /// @brief Method get_contentType, addr 0x2c13e6c, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::__TMP_InputField__ContentType get_contentType();

  /// @brief Method set_contentType, addr 0x2c13e74, size 0x74, virtual false, abstract: false, final false
  inline void set_contentType(::TMPro::__TMP_InputField__ContentType value);

  /// @brief Method get_lineType, addr 0x2c13fa4, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::__TMP_InputField__LineType get_lineType();

  /// @brief Method set_lineType, addr 0x2c13fac, size 0xc0, virtual false, abstract: false, final false
  inline void set_lineType(::TMPro::__TMP_InputField__LineType value);

  /// @brief Method get_lineLimit, addr 0x2c140c4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_lineLimit();

  /// @brief Method set_lineLimit, addr 0x2c140cc, size 0x6c, virtual false, abstract: false, final false
  inline void set_lineLimit(int32_t value);

  /// @brief Method get_inputType, addr 0x2c14138, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::__TMP_InputField__InputType get_inputType();

  /// @brief Method set_inputType, addr 0x2c14140, size 0x84, virtual false, abstract: false, final false
  inline void set_inputType(::TMPro::__TMP_InputField__InputType value);

  /// @brief Method get_keyboardType, addr 0x2c141dc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::TouchScreenKeyboardType get_keyboardType();

  /// @brief Method set_keyboardType, addr 0x2c141e4, size 0x84, virtual false, abstract: false, final false
  inline void set_keyboardType(::UnityEngine::TouchScreenKeyboardType value);

  /// @brief Method get_characterValidation, addr 0x2c14268, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::__TMP_InputField__CharacterValidation get_characterValidation();

  /// @brief Method set_characterValidation, addr 0x2c14270, size 0x84, virtual false, abstract: false, final false
  inline void set_characterValidation(::TMPro::__TMP_InputField__CharacterValidation value);

  /// @brief Method get_inputValidator, addr 0x2c142f4, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::TMP_InputValidator* get_inputValidator();

  /// @brief Method set_inputValidator, addr 0x2c142fc, size 0x84, virtual false, abstract: false, final false
  inline void set_inputValidator(::TMPro::TMP_InputValidator* value);

  /// @brief Method get_readOnly, addr 0x2c14398, size 0x8, virtual false, abstract: false, final false
  inline bool get_readOnly();

  /// @brief Method set_readOnly, addr 0x2c143a0, size 0xc, virtual false, abstract: false, final false
  inline void set_readOnly(bool value);

  /// @brief Method get_richText, addr 0x2c143ac, size 0x8, virtual false, abstract: false, final false
  inline bool get_richText();

  /// @brief Method set_richText, addr 0x2c143b4, size 0xc, virtual false, abstract: false, final false
  inline void set_richText(bool value);

  /// @brief Method get_multiLine, addr 0x2c14448, size 0x14, virtual false, abstract: false, final false
  inline bool get_multiLine();

  /// @brief Method get_asteriskChar, addr 0x2c1445c, size 0x8, virtual false, abstract: false, final false
  inline char16_t get_asteriskChar();

  /// @brief Method set_asteriskChar, addr 0x2c14464, size 0x74, virtual false, abstract: false, final false
  inline void set_asteriskChar(char16_t value);

  /// @brief Method get_wasCanceled, addr 0x2c144d8, size 0x8, virtual false, abstract: false, final false
  inline bool get_wasCanceled();

  /// @brief Method ClampStringPos, addr 0x2c144e0, size 0x38, virtual false, abstract: false, final false
  inline void ClampStringPos(ByRef<int32_t> pos);

  /// @brief Method ClampCaretPos, addr 0x2c14518, size 0x44, virtual false, abstract: false, final false
  inline void ClampCaretPos(ByRef<int32_t> pos);

  /// @brief Method get_caretPositionInternal, addr 0x2c1455c, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_caretPositionInternal();

  /// @brief Method set_caretPositionInternal, addr 0x2c14574, size 0x10, virtual false, abstract: false, final false
  inline void set_caretPositionInternal(int32_t value);

  /// @brief Method get_stringPositionInternal, addr 0x2c14584, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_stringPositionInternal();

  /// @brief Method set_stringPositionInternal, addr 0x2c1459c, size 0x38, virtual false, abstract: false, final false
  inline void set_stringPositionInternal(int32_t value);

  /// @brief Method get_caretSelectPositionInternal, addr 0x2c145d4, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_caretSelectPositionInternal();

  /// @brief Method set_caretSelectPositionInternal, addr 0x2c145ec, size 0x10, virtual false, abstract: false, final false
  inline void set_caretSelectPositionInternal(int32_t value);

  /// @brief Method get_stringSelectPositionInternal, addr 0x2c145fc, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_stringSelectPositionInternal();

  /// @brief Method set_stringSelectPositionInternal, addr 0x2c14614, size 0x38, virtual false, abstract: false, final false
  inline void set_stringSelectPositionInternal(int32_t value);

  /// @brief Method get_hasSelection, addr 0x2c1464c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_hasSelection();

  /// @brief Method get_caretPosition, addr 0x2c14688, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_caretPosition();

  /// @brief Method set_caretPosition, addr 0x2c146a0, size 0x34, virtual false, abstract: false, final false
  inline void set_caretPosition(int32_t value);

  /// @brief Method get_selectionAnchorPosition, addr 0x2c1474c, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_selectionAnchorPosition();

  /// @brief Method set_selectionAnchorPosition, addr 0x2c146d4, size 0x3c, virtual false, abstract: false, final false
  inline void set_selectionAnchorPosition(int32_t value);

  /// @brief Method get_selectionFocusPosition, addr 0x2c14764, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_selectionFocusPosition();

  /// @brief Method set_selectionFocusPosition, addr 0x2c14710, size 0x3c, virtual false, abstract: false, final false
  inline void set_selectionFocusPosition(int32_t value);

  /// @brief Method get_stringPosition, addr 0x2c1477c, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_stringPosition();

  /// @brief Method set_stringPosition, addr 0x2c14794, size 0x34, virtual false, abstract: false, final false
  inline void set_stringPosition(int32_t value);

  /// @brief Method get_selectionStringAnchorPosition, addr 0x2c14878, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_selectionStringAnchorPosition();

  /// @brief Method set_selectionStringAnchorPosition, addr 0x2c147c8, size 0x58, virtual false, abstract: false, final false
  inline void set_selectionStringAnchorPosition(int32_t value);

  /// @brief Method get_selectionStringFocusPosition, addr 0x2c14890, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_selectionStringFocusPosition();

  /// @brief Method set_selectionStringFocusPosition, addr 0x2c14820, size 0x58, virtual false, abstract: false, final false
  inline void set_selectionStringFocusPosition(int32_t value);

  /// @brief Method OnEnable, addr 0x2c148a8, size 0x720, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x2c154cc, size 0x330, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method ON_TEXT_CHANGED, addr 0x2c159b8, size 0x114, virtual false, abstract: false, final false
  inline void ON_TEXT_CHANGED(::UnityEngine::Object* obj);

  /// @brief Method CaretBlink, addr 0x2c15c28, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* CaretBlink();

  /// @brief Method SetCaretVisible, addr 0x2c15c90, size 0x38, virtual false, abstract: false, final false
  inline void SetCaretVisible();

  /// @brief Method SetCaretActive, addr 0x2c13318, size 0x54, virtual false, abstract: false, final false
  inline void SetCaretActive();

  /// @brief Method OnFocus, addr 0x2c15cc8, size 0x10, virtual false, abstract: false, final false
  inline void OnFocus();

  /// @brief Method SelectAll, addr 0x2c15cd8, size 0x3c, virtual false, abstract: false, final false
  inline void SelectAll();

  /// @brief Method MoveTextEnd, addr 0x2c15d14, size 0x138, virtual false, abstract: false, final false
  inline void MoveTextEnd(bool shift);

  /// @brief Method MoveTextStart, addr 0x2c15eac, size 0x13c, virtual false, abstract: false, final false
  inline void MoveTextStart(bool shift);

  /// @brief Method MoveToEndOfLine, addr 0x2c15fe8, size 0x180, virtual false, abstract: false, final false
  inline void MoveToEndOfLine(bool shift, bool ctrl);

  /// @brief Method MoveToStartOfLine, addr 0x2c16168, size 0x190, virtual false, abstract: false, final false
  inline void MoveToStartOfLine(bool shift, bool ctrl);

  /// @brief Method get_clipboard, addr 0x2c162f8, size 0x8, virtual false, abstract: false, final false
  static inline ::StringW get_clipboard();

  /// @brief Method set_clipboard, addr 0x2c16300, size 0x8, virtual false, abstract: false, final false
  static inline void set_clipboard(::StringW value);

  /// @brief Method InPlaceEditing, addr 0x2c16308, size 0xc4, virtual false, abstract: false, final false
  inline bool InPlaceEditing();

  /// @brief Method UpdateStringPositionFromKeyboard, addr 0x2c163cc, size 0x148, virtual false, abstract: false, final false
  inline void UpdateStringPositionFromKeyboard();

  /// @brief Method LateUpdate, addr 0x2c16514, size 0x668, virtual true, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method MayDrag, addr 0x2c17808, size 0x104, virtual false, abstract: false, final false
  inline bool MayDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnBeginDrag, addr 0x2c1790c, size 0x20, virtual true, abstract: false, final false
  inline void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnDrag, addr 0x2c1792c, size 0x28c, virtual true, abstract: false, final false
  inline void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method MouseDragOutsideRect, addr 0x2c17bb8, size 0x74, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* MouseDragOutsideRect(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnEndDrag, addr 0x2c17c2c, size 0x1c, virtual true, abstract: false, final false
  inline void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerDown, addr 0x2c17c48, size 0x730, virtual true, abstract: false, final false
  inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method KeyPressed, addr 0x2c18378, size 0x414, virtual false, abstract: false, final false
  inline ::TMPro::__TMP_InputField__EditState KeyPressed(::UnityEngine::Event* evt);

  /// @brief Method IsValidChar, addr 0x2c197a8, size 0x20, virtual true, abstract: false, final false
  inline bool IsValidChar(char16_t c);

  /// @brief Method ProcessEvent, addr 0x2c197c8, size 0x4, virtual false, abstract: false, final false
  inline void ProcessEvent(::UnityEngine::Event* e);

  /// @brief Method OnUpdateSelected, addr 0x2c197cc, size 0x1a0, virtual true, abstract: false, final false
  inline void OnUpdateSelected(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnScroll, addr 0x2c199c8, size 0x1c0, virtual true, abstract: false, final false
  inline void OnScroll(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method GetScrollPositionRelativeToViewport, addr 0x2c19b88, size 0x110, virtual false, abstract: false, final false
  inline float_t GetScrollPositionRelativeToViewport();

  /// @brief Method GetSelectedString, addr 0x2c18d38, size 0xc0, virtual false, abstract: false, final false
  inline ::StringW GetSelectedString();

  /// @brief Method FindNextWordBegin, addr 0x2c19e68, size 0xd4, virtual false, abstract: false, final false
  inline int32_t FindNextWordBegin();

  /// @brief Method MoveRight, addr 0x2c1937c, size 0x3fc, virtual false, abstract: false, final false
  inline void MoveRight(bool shift, bool ctrl);

  /// @brief Method FindPrevWordBegin, addr 0x2c19f3c, size 0xb8, virtual false, abstract: false, final false
  inline int32_t FindPrevWordBegin();

  /// @brief Method MoveLeft, addr 0x2c18fcc, size 0x3b0, virtual false, abstract: false, final false
  inline void MoveLeft(bool shift, bool ctrl);

  /// @brief Method LineUpCharacterPosition, addr 0x2c19ff4, size 0x150, virtual false, abstract: false, final false
  inline int32_t LineUpCharacterPosition(int32_t originalPos, bool goToFirstChar);

  /// @brief Method LineDownCharacterPosition, addr 0x2c1a144, size 0x14c, virtual false, abstract: false, final false
  inline int32_t LineDownCharacterPosition(int32_t originalPos, bool goToLastChar);

  /// @brief Method PageUpCharacterPosition, addr 0x2c1a290, size 0x20c, virtual false, abstract: false, final false
  inline int32_t PageUpCharacterPosition(int32_t originalPos, bool goToFirstChar);

  /// @brief Method PageDownCharacterPosition, addr 0x2c1a49c, size 0x20c, virtual false, abstract: false, final false
  inline int32_t PageDownCharacterPosition(int32_t originalPos, bool goToLastChar);

  /// @brief Method MoveDown, addr 0x2c19784, size 0xc, virtual false, abstract: false, final false
  inline void MoveDown(bool shift);

  /// @brief Method MoveDown, addr 0x2c1a6a8, size 0x1c4, virtual false, abstract: false, final false
  inline void MoveDown(bool shift, bool goToLastChar);

  /// @brief Method MoveUp, addr 0x2c19778, size 0xc, virtual false, abstract: false, final false
  inline void MoveUp(bool shift);

  /// @brief Method MoveUp, addr 0x2c1a86c, size 0x1b0, virtual false, abstract: false, final false
  inline void MoveUp(bool shift, bool goToFirstChar);

  /// @brief Method MovePageUp, addr 0x2c19790, size 0xc, virtual false, abstract: false, final false
  inline void MovePageUp(bool shift);

  /// @brief Method MovePageUp, addr 0x2c1aa1c, size 0x2e8, virtual false, abstract: false, final false
  inline void MovePageUp(bool shift, bool goToFirstChar);

  /// @brief Method MovePageDown, addr 0x2c1979c, size 0xc, virtual false, abstract: false, final false
  inline void MovePageDown(bool shift);

  /// @brief Method MovePageDown, addr 0x2c1ad04, size 0x2fc, virtual false, abstract: false, final false
  inline void MovePageDown(bool shift, bool goToLastChar);

  /// @brief Method Delete, addr 0x2c18df8, size 0x198, virtual false, abstract: false, final false
  inline void Delete();

  /// @brief Method DeleteKey, addr 0x2c18b14, size 0x224, virtual false, abstract: false, final false
  inline void DeleteKey();

  /// @brief Method Backspace, addr 0x2c1878c, size 0x388, virtual false, abstract: false, final false
  inline void Backspace();

  /// @brief Method Append, addr 0x2c1b000, size 0xb0, virtual true, abstract: false, final false
  inline void Append(::StringW input);

  /// @brief Method Append, addr 0x2c1b0b0, size 0x23c, virtual true, abstract: false, final false
  inline void Append(char16_t input);

  /// @brief Method Insert, addr 0x2c1b2ec, size 0x100, virtual false, abstract: false, final false
  inline void Insert(char16_t c);

  /// @brief Method UpdateTouchKeyboardFromEditChanges, addr 0x2c18f90, size 0x3c, virtual false, abstract: false, final false
  inline void UpdateTouchKeyboardFromEditChanges();

  /// @brief Method SendOnValueChangedAndUpdateLabel, addr 0x2c177f0, size 0x18, virtual false, abstract: false, final false
  inline void SendOnValueChangedAndUpdateLabel();

  /// @brief Method SendOnValueChanged, addr 0x2c13230, size 0x5c, virtual false, abstract: false, final false
  inline void SendOnValueChanged();

  /// @brief Method SendOnEndEdit, addr 0x2c1b3ec, size 0x5c, virtual false, abstract: false, final false
  inline void SendOnEndEdit();

  /// @brief Method SendOnSubmit, addr 0x2c1996c, size 0x5c, virtual false, abstract: false, final false
  inline void SendOnSubmit();

  /// @brief Method SendOnFocus, addr 0x2c1b448, size 0x5c, virtual false, abstract: false, final false
  inline void SendOnFocus();

  /// @brief Method SendOnFocusLost, addr 0x2c1b4a4, size 0x5c, virtual false, abstract: false, final false
  inline void SendOnFocusLost();

  /// @brief Method SendOnTextSelection, addr 0x2c1b500, size 0xa8, virtual false, abstract: false, final false
  inline void SendOnTextSelection();

  /// @brief Method SendOnEndTextSelection, addr 0x2c1b5a8, size 0x9c, virtual false, abstract: false, final false
  inline void SendOnEndTextSelection();

  /// @brief Method SendTouchScreenKeyboardStatusChanged, addr 0x2c16fa8, size 0x74, virtual false, abstract: false, final false
  inline void SendTouchScreenKeyboardStatusChanged();

  /// @brief Method UpdateLabel, addr 0x2c12d14, size 0x51c, virtual false, abstract: false, final false
  inline void UpdateLabel();

  /// @brief Method UpdateScrollbar, addr 0x2c15b3c, size 0xec, virtual false, abstract: false, final false
  inline void UpdateScrollbar();

  /// @brief Method OnScrollbarValueChange, addr 0x2c1b644, size 0x3c, virtual false, abstract: false, final false
  inline void OnScrollbarValueChange(float_t value);

  /// @brief Method UpdateMaskRegions, addr 0x2c154c8, size 0x4, virtual false, abstract: false, final false
  inline void UpdateMaskRegions();

  /// @brief Method AdjustTextPositionRelativeToViewport, addr 0x2c19c98, size 0x1d0, virtual false, abstract: false, final false
  inline void AdjustTextPositionRelativeToViewport(float_t relativePosition);

  /// @brief Method GetCaretPositionFromStringIndex, addr 0x2c15acc, size 0x70, virtual false, abstract: false, final false
  inline int32_t GetCaretPositionFromStringIndex(int32_t stringIndex);

  /// @brief Method GetMinCaretPositionFromStringIndex, addr 0x2c1b680, size 0x74, virtual false, abstract: false, final false
  inline int32_t GetMinCaretPositionFromStringIndex(int32_t stringIndex);

  /// @brief Method GetMaxCaretPositionFromStringIndex, addr 0x2c1b6f4, size 0x70, virtual false, abstract: false, final false
  inline int32_t GetMaxCaretPositionFromStringIndex(int32_t stringIndex);

  /// @brief Method GetStringIndexFromCaretPosition, addr 0x2c15e4c, size 0x60, virtual false, abstract: false, final false
  inline int32_t GetStringIndexFromCaretPosition(int32_t caretPosition);

  /// @brief Method ForceLabelUpdate, addr 0x2c1b764, size 0x4, virtual false, abstract: false, final false
  inline void ForceLabelUpdate();

  /// @brief Method MarkGeometryAsDirty, addr 0x2c133e8, size 0x58, virtual false, abstract: false, final false
  inline void MarkGeometryAsDirty();

  /// @brief Method Rebuild, addr 0x2c1b768, size 0x10, virtual true, abstract: false, final false
  inline void Rebuild(::UnityEngine::UI::CanvasUpdate update);

  /// @brief Method LayoutComplete, addr 0x2c1b82c, size 0x4, virtual true, abstract: false, final false
  inline void LayoutComplete();

  /// @brief Method GraphicUpdateComplete, addr 0x2c1b830, size 0x4, virtual true, abstract: false, final false
  inline void GraphicUpdateComplete();

  /// @brief Method UpdateGeometry, addr 0x2c1b778, size 0xb4, virtual false, abstract: false, final false
  inline void UpdateGeometry();

  /// @brief Method AssignPositioningIfNeeded, addr 0x2c14fc8, size 0x500, virtual false, abstract: false, final false
  inline void AssignPositioningIfNeeded();

  /// @brief Method OnFillVBO, addr 0x2c1b834, size 0x358, virtual false, abstract: false, final false
  inline void OnFillVBO(::UnityEngine::Mesh* vbo);

  /// @brief Method GenerateCaret, addr 0x2c1bb8c, size 0xfe4, virtual false, abstract: false, final false
  inline void GenerateCaret(::UnityEngine::UI::VertexHelper* vbo, ::UnityEngine::Vector2 roundingOffset);

  /// @brief Method CreateCursorVerts, addr 0x2c1d42c, size 0x150, virtual false, abstract: false, final false
  inline void CreateCursorVerts();

  /// @brief Method GenerateHightlight, addr 0x2c1cb70, size 0x8bc, virtual false, abstract: false, final false
  inline void GenerateHightlight(::UnityEngine::UI::VertexHelper* vbo, ::UnityEngine::Vector2 roundingOffset);

  /// @brief Method AdjustRectTransformRelativeToViewport, addr 0x2c1d57c, size 0x530, virtual false, abstract: false, final false
  inline void AdjustRectTransformRelativeToViewport(::UnityEngine::Vector2 startPosition, float_t height, bool isCharVisible);

  /// @brief Method Validate, addr 0x2c1701c, size 0x7d4, virtual false, abstract: false, final false
  inline char16_t Validate(::StringW text, int32_t pos, char16_t ch);

  /// @brief Method ActivateInputField, addr 0x2c1daac, size 0x114, virtual false, abstract: false, final false
  inline void ActivateInputField();

  /// @brief Method ActivateInputFieldInternal, addr 0x2c16b7c, size 0x400, virtual false, abstract: false, final false
  inline void ActivateInputFieldInternal();

  /// @brief Method OnSelect, addr 0x2c1dbc0, size 0x24, virtual true, abstract: false, final false
  inline void OnSelect(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnPointerClick, addr 0x2c1dbe4, size 0x24, virtual true, abstract: false, final false
  inline void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnControlClick, addr 0x2c1dc08, size 0x4, virtual false, abstract: false, final false
  inline void OnControlClick();

  /// @brief Method ReleaseSelection, addr 0x2c16f7c, size 0x2c, virtual false, abstract: false, final false
  inline void ReleaseSelection();

  /// @brief Method DeactivateInputField, addr 0x2c157fc, size 0x1bc, virtual false, abstract: false, final false
  /// @param clearSelection: bool (default: false)
  inline void DeactivateInputField(bool clearSelection = false);

  /// @brief Method OnDeselect, addr 0x2c1dc0c, size 0x38, virtual true, abstract: false, final false
  inline void OnDeselect(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnSubmit, addr 0x2c1dc44, size 0x54, virtual true, abstract: false, final false
  inline void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method EnforceContentType, addr 0x2c13ee8, size 0xbc, virtual false, abstract: false, final false
  inline void EnforceContentType();

  /// @brief Method SetTextComponentWrapMode, addr 0x2c127bc, size 0x94, virtual false, abstract: false, final false
  inline void SetTextComponentWrapMode();

  /// @brief Method SetTextComponentRichTextMode, addr 0x2c143c0, size 0x88, virtual false, abstract: false, final false
  inline void SetTextComponentRichTextMode();

  /// @brief Method SetToCustomIfContentTypeIsNot, addr 0x2c1406c, size 0x58, virtual false, abstract: false, final false
  inline void SetToCustomIfContentTypeIsNot(::ArrayW<::TMPro::__TMP_InputField__ContentType, ::Array<::TMPro::__TMP_InputField__ContentType>*> allowedContentTypes);

  /// @brief Method SetToCustom, addr 0x2c141c4, size 0x18, virtual false, abstract: false, final false
  inline void SetToCustom();

  /// @brief Method SetToCustom, addr 0x2c14380, size 0x18, virtual false, abstract: false, final false
  inline void SetToCustom(::TMPro::__TMP_InputField__CharacterValidation characterValidation);

  /// @brief Method DoStateTransition, addr 0x2c1dc98, size 0x2c, virtual true, abstract: false, final false
  inline void DoStateTransition(::UnityEngine::UI::__Selectable__SelectionState state, bool instant);

  /// @brief Method CalculateLayoutInputHorizontal, addr 0x2c1dcc4, size 0x4, virtual true, abstract: false, final false
  inline void CalculateLayoutInputHorizontal();

  /// @brief Method CalculateLayoutInputVertical, addr 0x2c1dcc8, size 0x4, virtual true, abstract: false, final false
  inline void CalculateLayoutInputVertical();

  /// @brief Method get_minWidth, addr 0x2c1dccc, size 0x8, virtual true, abstract: false, final false
  inline float_t get_minWidth();

  /// @brief Method get_preferredWidth, addr 0x2c1dcd4, size 0x130, virtual true, abstract: false, final false
  inline float_t get_preferredWidth();

  /// @brief Method get_flexibleWidth, addr 0x2c1de04, size 0x8, virtual true, abstract: false, final false
  inline float_t get_flexibleWidth();

  /// @brief Method get_minHeight, addr 0x2c1de0c, size 0x8, virtual true, abstract: false, final false
  inline float_t get_minHeight();

  /// @brief Method get_preferredHeight, addr 0x2c1de14, size 0x130, virtual true, abstract: false, final false
  inline float_t get_preferredHeight();

  /// @brief Method get_flexibleHeight, addr 0x2c1df44, size 0x8, virtual true, abstract: false, final false
  inline float_t get_flexibleHeight();

  /// @brief Method get_layoutPriority, addr 0x2c1df4c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_layoutPriority();

  /// @brief Method SetGlobalPointSize, addr 0x2c13c4c, size 0xe8, virtual false, abstract: false, final false
  inline void SetGlobalPointSize(float_t pointSize);

  /// @brief Method SetGlobalFontAsset, addr 0x2c13d3c, size 0xe0, virtual false, abstract: false, final false
  inline void SetGlobalFontAsset(::TMPro::TMP_FontAsset* fontAsset);

  /// @brief Method UnityEngine.UI.ICanvasElement.get_transform, addr 0x2c1dfe8, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform();

  // Ctor Parameters [CppParam { name: "", ty: "TMP_InputField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_InputField(TMP_InputField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_InputField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_InputField(TMP_InputField const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_InputField();

public:
  /// @brief Field m_SoftKeyboard, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::TouchScreenKeyboard* ___m_SoftKeyboard;

  /// @brief Field m_RectTransform, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ___m_RectTransform;

  /// @brief Field m_TextViewport, offset: 0x108, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ___m_TextViewport;

  /// @brief Field m_TextComponentRectMask, offset: 0x110, size: 0x8, def value: None
  ::UnityEngine::UI::RectMask2D* ___m_TextComponentRectMask;

  /// @brief Field m_TextViewportRectMask, offset: 0x118, size: 0x8, def value: None
  ::UnityEngine::UI::RectMask2D* ___m_TextViewportRectMask;

  /// @brief Field m_CachedViewportRect, offset: 0x120, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_CachedViewportRect;

  /// @brief Field m_TextComponent, offset: 0x130, size: 0x8, def value: None
  ::TMPro::TMP_Text* ___m_TextComponent;

  /// @brief Field m_TextComponentRectTransform, offset: 0x138, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ___m_TextComponentRectTransform;

  /// @brief Field m_Placeholder, offset: 0x140, size: 0x8, def value: None
  ::UnityEngine::UI::Graphic* ___m_Placeholder;

  /// @brief Field m_VerticalScrollbar, offset: 0x148, size: 0x8, def value: None
  ::UnityEngine::UI::Scrollbar* ___m_VerticalScrollbar;

  /// @brief Field m_VerticalScrollbarEventHandler, offset: 0x150, size: 0x8, def value: None
  ::TMPro::TMP_ScrollbarEventHandler* ___m_VerticalScrollbarEventHandler;

  /// @brief Field m_IsDrivenByLayoutComponents, offset: 0x158, size: 0x1, def value: None
  bool ___m_IsDrivenByLayoutComponents;

  /// @brief Field m_LayoutGroup, offset: 0x160, size: 0x8, def value: None
  ::UnityEngine::UI::LayoutGroup* ___m_LayoutGroup;

  /// @brief Field m_IScrollHandlerParent, offset: 0x168, size: 0x8, def value: None
  ::UnityEngine::EventSystems::IScrollHandler* ___m_IScrollHandlerParent;

  /// @brief Field m_ScrollPosition, offset: 0x170, size: 0x4, def value: None
  float_t ___m_ScrollPosition;

  /// @brief Field m_ScrollSensitivity, offset: 0x174, size: 0x4, def value: None
  float_t ___m_ScrollSensitivity;

  /// @brief Field m_ContentType, offset: 0x178, size: 0x4, def value: None
  ::TMPro::__TMP_InputField__ContentType ___m_ContentType;

  /// @brief Field m_InputType, offset: 0x17c, size: 0x4, def value: None
  ::TMPro::__TMP_InputField__InputType ___m_InputType;

  /// @brief Field m_AsteriskChar, offset: 0x180, size: 0x2, def value: None
  char16_t ___m_AsteriskChar;

  /// @brief Field m_KeyboardType, offset: 0x184, size: 0x4, def value: None
  ::UnityEngine::TouchScreenKeyboardType ___m_KeyboardType;

  /// @brief Field m_LineType, offset: 0x188, size: 0x4, def value: None
  ::TMPro::__TMP_InputField__LineType ___m_LineType;

  /// @brief Field m_HideMobileInput, offset: 0x18c, size: 0x1, def value: None
  bool ___m_HideMobileInput;

  /// @brief Field m_HideSoftKeyboard, offset: 0x18d, size: 0x1, def value: None
  bool ___m_HideSoftKeyboard;

  /// @brief Field m_CharacterValidation, offset: 0x190, size: 0x4, def value: None
  ::TMPro::__TMP_InputField__CharacterValidation ___m_CharacterValidation;

  /// @brief Field m_RegexValue, offset: 0x198, size: 0x8, def value: None
  ::StringW ___m_RegexValue;

  /// @brief Field m_GlobalPointSize, offset: 0x1a0, size: 0x4, def value: None
  float_t ___m_GlobalPointSize;

  /// @brief Field m_CharacterLimit, offset: 0x1a4, size: 0x4, def value: None
  int32_t ___m_CharacterLimit;

  /// @brief Field m_OnEndEdit, offset: 0x1a8, size: 0x8, def value: None
  ::TMPro::__TMP_InputField__SubmitEvent* ___m_OnEndEdit;

  /// @brief Field m_OnSubmit, offset: 0x1b0, size: 0x8, def value: None
  ::TMPro::__TMP_InputField__SubmitEvent* ___m_OnSubmit;

  /// @brief Field m_OnSelect, offset: 0x1b8, size: 0x8, def value: None
  ::TMPro::__TMP_InputField__SelectionEvent* ___m_OnSelect;

  /// @brief Field m_OnDeselect, offset: 0x1c0, size: 0x8, def value: None
  ::TMPro::__TMP_InputField__SelectionEvent* ___m_OnDeselect;

  /// @brief Field m_OnTextSelection, offset: 0x1c8, size: 0x8, def value: None
  ::TMPro::__TMP_InputField__TextSelectionEvent* ___m_OnTextSelection;

  /// @brief Field m_OnEndTextSelection, offset: 0x1d0, size: 0x8, def value: None
  ::TMPro::__TMP_InputField__TextSelectionEvent* ___m_OnEndTextSelection;

  /// @brief Field m_OnValueChanged, offset: 0x1d8, size: 0x8, def value: None
  ::TMPro::__TMP_InputField__OnChangeEvent* ___m_OnValueChanged;

  /// @brief Field m_OnTouchScreenKeyboardStatusChanged, offset: 0x1e0, size: 0x8, def value: None
  ::TMPro::__TMP_InputField__TouchScreenKeyboardEvent* ___m_OnTouchScreenKeyboardStatusChanged;

  /// @brief Field m_OnValidateInput, offset: 0x1e8, size: 0x8, def value: None
  ::TMPro::__TMP_InputField__OnValidateInput* ___m_OnValidateInput;

  /// @brief Field m_CaretColor, offset: 0x1f0, size: 0x10, def value: None
  ::UnityEngine::Color ___m_CaretColor;

  /// @brief Field m_CustomCaretColor, offset: 0x200, size: 0x1, def value: None
  bool ___m_CustomCaretColor;

  /// @brief Field m_SelectionColor, offset: 0x204, size: 0x10, def value: None
  ::UnityEngine::Color ___m_SelectionColor;

  /// @brief Field m_Text, offset: 0x218, size: 0x8, def value: None
  ::StringW ___m_Text;

  /// @brief Field m_CaretBlinkRate, offset: 0x220, size: 0x4, def value: None
  float_t ___m_CaretBlinkRate;

  /// @brief Field m_CaretWidth, offset: 0x224, size: 0x4, def value: None
  int32_t ___m_CaretWidth;

  /// @brief Field m_ReadOnly, offset: 0x228, size: 0x1, def value: None
  bool ___m_ReadOnly;

  /// @brief Field m_RichText, offset: 0x229, size: 0x1, def value: None
  bool ___m_RichText;

  /// @brief Field m_StringPosition, offset: 0x22c, size: 0x4, def value: None
  int32_t ___m_StringPosition;

  /// @brief Field m_StringSelectPosition, offset: 0x230, size: 0x4, def value: None
  int32_t ___m_StringSelectPosition;

  /// @brief Field m_CaretPosition, offset: 0x234, size: 0x4, def value: None
  int32_t ___m_CaretPosition;

  /// @brief Field m_CaretSelectPosition, offset: 0x238, size: 0x4, def value: None
  int32_t ___m_CaretSelectPosition;

  /// @brief Field caretRectTrans, offset: 0x240, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ___caretRectTrans;

  /// @brief Field m_CursorVerts, offset: 0x248, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIVertex, ::Array<::UnityEngine::UIVertex>*> ___m_CursorVerts;

  /// @brief Field m_CachedInputRenderer, offset: 0x250, size: 0x8, def value: None
  ::UnityEngine::CanvasRenderer* ___m_CachedInputRenderer;

  /// @brief Field m_LastPosition, offset: 0x258, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_LastPosition;

  /// @brief Field m_Mesh, offset: 0x260, size: 0x8, def value: None
  ::UnityEngine::Mesh* ___m_Mesh;

  /// @brief Field m_AllowInput, offset: 0x268, size: 0x1, def value: None
  bool ___m_AllowInput;

  /// @brief Field m_ShouldActivateNextUpdate, offset: 0x269, size: 0x1, def value: None
  bool ___m_ShouldActivateNextUpdate;

  /// @brief Field m_UpdateDrag, offset: 0x26a, size: 0x1, def value: None
  bool ___m_UpdateDrag;

  /// @brief Field m_DragPositionOutOfBounds, offset: 0x26b, size: 0x1, def value: None
  bool ___m_DragPositionOutOfBounds;

  /// @brief Field m_CaretVisible, offset: 0x26c, size: 0x1, def value: None
  bool ___m_CaretVisible;

  /// @brief Field m_BlinkCoroutine, offset: 0x270, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___m_BlinkCoroutine;

  /// @brief Field m_BlinkStartTime, offset: 0x278, size: 0x4, def value: None
  float_t ___m_BlinkStartTime;

  /// @brief Field m_DragCoroutine, offset: 0x280, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___m_DragCoroutine;

  /// @brief Field m_OriginalText, offset: 0x288, size: 0x8, def value: None
  ::StringW ___m_OriginalText;

  /// @brief Field m_WasCanceled, offset: 0x290, size: 0x1, def value: None
  bool ___m_WasCanceled;

  /// @brief Field m_HasDoneFocusTransition, offset: 0x291, size: 0x1, def value: None
  bool ___m_HasDoneFocusTransition;

  /// @brief Field m_WaitForSecondsRealtime, offset: 0x298, size: 0x8, def value: None
  ::UnityEngine::WaitForSecondsRealtime* ___m_WaitForSecondsRealtime;

  /// @brief Field m_PreventCallback, offset: 0x2a0, size: 0x1, def value: None
  bool ___m_PreventCallback;

  /// @brief Field m_TouchKeyboardAllowsInPlaceEditing, offset: 0x2a1, size: 0x1, def value: None
  bool ___m_TouchKeyboardAllowsInPlaceEditing;

  /// @brief Field m_IsTextComponentUpdateRequired, offset: 0x2a2, size: 0x1, def value: None
  bool ___m_IsTextComponentUpdateRequired;

  /// @brief Field m_isLastKeyBackspace, offset: 0x2a3, size: 0x1, def value: None
  bool ___m_isLastKeyBackspace;

  /// @brief Field m_PointerDownClickStartTime, offset: 0x2a4, size: 0x4, def value: None
  float_t ___m_PointerDownClickStartTime;

  /// @brief Field m_KeyDownStartTime, offset: 0x2a8, size: 0x4, def value: None
  float_t ___m_KeyDownStartTime;

  /// @brief Field m_DoubleClickDelay, offset: 0x2ac, size: 0x4, def value: None
  float_t ___m_DoubleClickDelay;

  /// @brief Field m_IsCompositionActive, offset: 0x2b0, size: 0x1, def value: None
  bool ___m_IsCompositionActive;

  /// @brief Field m_ShouldUpdateIMEWindowPosition, offset: 0x2b1, size: 0x1, def value: None
  bool ___m_ShouldUpdateIMEWindowPosition;

  /// @brief Field m_PreviousIMEInsertionLine, offset: 0x2b4, size: 0x4, def value: None
  int32_t ___m_PreviousIMEInsertionLine;

  /// @brief Field m_GlobalFontAsset, offset: 0x2b8, size: 0x8, def value: None
  ::TMPro::TMP_FontAsset* ___m_GlobalFontAsset;

  /// @brief Field m_OnFocusSelectAll, offset: 0x2c0, size: 0x1, def value: None
  bool ___m_OnFocusSelectAll;

  /// @brief Field m_isSelectAll, offset: 0x2c1, size: 0x1, def value: None
  bool ___m_isSelectAll;

  /// @brief Field m_ResetOnDeActivation, offset: 0x2c2, size: 0x1, def value: None
  bool ___m_ResetOnDeActivation;

  /// @brief Field m_SelectionStillActive, offset: 0x2c3, size: 0x1, def value: None
  bool ___m_SelectionStillActive;

  /// @brief Field m_ReleaseSelection, offset: 0x2c4, size: 0x1, def value: None
  bool ___m_ReleaseSelection;

  /// @brief Field m_PreviouslySelectedObject, offset: 0x2c8, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___m_PreviouslySelectedObject;

  /// @brief Field m_RestoreOriginalTextOnEscape, offset: 0x2d0, size: 0x1, def value: None
  bool ___m_RestoreOriginalTextOnEscape;

  /// @brief Field m_isRichTextEditingAllowed, offset: 0x2d1, size: 0x1, def value: None
  bool ___m_isRichTextEditingAllowed;

  /// @brief Field m_LineLimit, offset: 0x2d4, size: 0x4, def value: None
  int32_t ___m_LineLimit;

  /// @brief Field m_InputValidator, offset: 0x2d8, size: 0x8, def value: None
  ::TMPro::TMP_InputValidator* ___m_InputValidator;

  /// @brief Field m_isSelected, offset: 0x2e0, size: 0x1, def value: None
  bool ___m_isSelected;

  /// @brief Field m_IsStringPositionDirty, offset: 0x2e1, size: 0x1, def value: None
  bool ___m_IsStringPositionDirty;

  /// @brief Field m_IsCaretPositionDirty, offset: 0x2e2, size: 0x1, def value: None
  bool ___m_IsCaretPositionDirty;

  /// @brief Field m_forceRectTransformAdjustment, offset: 0x2e3, size: 0x1, def value: None
  bool ___m_forceRectTransformAdjustment;

  /// @brief Field m_ProcessingEvent, offset: 0x2e8, size: 0x8, def value: None
  ::UnityEngine::Event* ___m_ProcessingEvent;

  /// @brief Field kHScrollSpeed offset 0xffffffff size 0x4
  static constexpr float_t kHScrollSpeed{ 0.05 };

  /// @brief Field kVScrollSpeed offset 0xffffffff size 0x4
  static constexpr float_t kVScrollSpeed{ 0.1 };

  /// @brief Field kEmailSpecialCharacters offset 0xffffffff size 0x8
  static constexpr ::ConstString kEmailSpecialCharacters{ u"!#$%&\'*+-/=?^_`{|}~" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_InputField, 0x2f0>, "Size mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_SoftKeyboard) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_RectTransform) == 0x100, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_TextViewport) == 0x108, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_TextComponentRectMask) == 0x110, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_TextViewportRectMask) == 0x118, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_CachedViewportRect) == 0x120, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_TextComponent) == 0x130, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_TextComponentRectTransform) == 0x138, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_Placeholder) == 0x140, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_VerticalScrollbar) == 0x148, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_VerticalScrollbarEventHandler) == 0x150, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_IsDrivenByLayoutComponents) == 0x158, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_LayoutGroup) == 0x160, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_IScrollHandlerParent) == 0x168, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_ScrollPosition) == 0x170, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_ScrollSensitivity) == 0x174, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_ContentType) == 0x178, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_InputType) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_AsteriskChar) == 0x180, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_KeyboardType) == 0x184, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_LineType) == 0x188, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_HideMobileInput) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_HideSoftKeyboard) == 0x18d, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_CharacterValidation) == 0x190, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_RegexValue) == 0x198, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_GlobalPointSize) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_CharacterLimit) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_OnEndEdit) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_OnSubmit) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_OnSelect) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_OnDeselect) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_OnTextSelection) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_OnEndTextSelection) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_OnValueChanged) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_OnTouchScreenKeyboardStatusChanged) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_OnValidateInput) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_CaretColor) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_CustomCaretColor) == 0x200, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_SelectionColor) == 0x204, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_Text) == 0x218, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_CaretBlinkRate) == 0x220, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_CaretWidth) == 0x224, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_ReadOnly) == 0x228, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_RichText) == 0x229, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_StringPosition) == 0x22c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_StringSelectPosition) == 0x230, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_CaretPosition) == 0x234, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_CaretSelectPosition) == 0x238, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___caretRectTrans) == 0x240, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_CursorVerts) == 0x248, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_CachedInputRenderer) == 0x250, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_LastPosition) == 0x258, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_Mesh) == 0x260, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_AllowInput) == 0x268, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_ShouldActivateNextUpdate) == 0x269, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_UpdateDrag) == 0x26a, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_DragPositionOutOfBounds) == 0x26b, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_CaretVisible) == 0x26c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_BlinkCoroutine) == 0x270, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_BlinkStartTime) == 0x278, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_DragCoroutine) == 0x280, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_OriginalText) == 0x288, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_WasCanceled) == 0x290, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_HasDoneFocusTransition) == 0x291, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_WaitForSecondsRealtime) == 0x298, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_PreventCallback) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_TouchKeyboardAllowsInPlaceEditing) == 0x2a1, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_IsTextComponentUpdateRequired) == 0x2a2, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_isLastKeyBackspace) == 0x2a3, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_PointerDownClickStartTime) == 0x2a4, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_KeyDownStartTime) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_DoubleClickDelay) == 0x2ac, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_IsCompositionActive) == 0x2b0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_ShouldUpdateIMEWindowPosition) == 0x2b1, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_PreviousIMEInsertionLine) == 0x2b4, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_GlobalFontAsset) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_OnFocusSelectAll) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_isSelectAll) == 0x2c1, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_ResetOnDeActivation) == 0x2c2, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_SelectionStillActive) == 0x2c3, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_ReleaseSelection) == 0x2c4, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_PreviouslySelectedObject) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_RestoreOriginalTextOnEscape) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_isRichTextEditingAllowed) == 0x2d1, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_LineLimit) == 0x2d4, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_InputValidator) == 0x2d8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_isSelected) == 0x2e0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_IsStringPositionDirty) == 0x2e1, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_IsCaretPositionDirty) == 0x2e2, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_forceRectTransformAdjustment) == 0x2e3, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_InputField, ___m_ProcessingEvent) == 0x2e8, "Offset mismatch!");

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
