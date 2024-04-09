#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/UI/zzzz__InputField_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboardType_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputField)
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
class Object;
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
class Text;
}
namespace UnityEngine::UI {
class VertexHelper;
}
namespace UnityEngine::UI {
struct __InputField__CharacterValidation;
}
namespace UnityEngine::UI {
struct __InputField__ContentType;
}
namespace UnityEngine::UI {
struct __InputField__EditState;
}
namespace UnityEngine::UI {
class __InputField__EndEditEvent;
}
namespace UnityEngine::UI {
struct __InputField__InputType;
}
namespace UnityEngine::UI {
struct __InputField__LineType;
}
namespace UnityEngine::UI {
class __InputField__OnChangeEvent;
}
namespace UnityEngine::UI {
class __InputField__OnValidateInput;
}
namespace UnityEngine::UI {
class __InputField__SubmitEvent;
}
namespace UnityEngine::UI {
class __InputField___CaretBlink_d__172;
}
namespace UnityEngine::UI {
class __InputField___MouseDragOutsideRect_d__194;
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
class Mesh;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class TextGenerator;
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
namespace UnityEngine::UI {
struct __InputField__CharacterValidation;
}
namespace UnityEngine::UI {
struct __InputField__ContentType;
}
namespace UnityEngine::UI {
struct __InputField__EditState;
}
namespace UnityEngine::UI {
struct __InputField__InputType;
}
namespace UnityEngine::UI {
struct __InputField__LineType;
}
namespace UnityEngine::UI {
class InputField;
}
namespace UnityEngine::UI {
class __InputField__EndEditEvent;
}
namespace UnityEngine::UI {
class __InputField__OnChangeEvent;
}
namespace UnityEngine::UI {
class __InputField__OnValidateInput;
}
namespace UnityEngine::UI {
class __InputField__SubmitEvent;
}
namespace UnityEngine::UI {
class __InputField___CaretBlink_d__172;
}
namespace UnityEngine::UI {
class __InputField___MouseDragOutsideRect_d__194;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UI::__InputField__CharacterValidation);
MARK_VAL_T(::UnityEngine::UI::__InputField__ContentType);
MARK_VAL_T(::UnityEngine::UI::__InputField__EditState);
MARK_VAL_T(::UnityEngine::UI::__InputField__InputType);
MARK_VAL_T(::UnityEngine::UI::__InputField__LineType);
MARK_REF_PTR_T(::UnityEngine::UI::InputField);
MARK_REF_PTR_T(::UnityEngine::UI::__InputField__EndEditEvent);
MARK_REF_PTR_T(::UnityEngine::UI::__InputField__OnChangeEvent);
MARK_REF_PTR_T(::UnityEngine::UI::__InputField__OnValidateInput);
MARK_REF_PTR_T(::UnityEngine::UI::__InputField__SubmitEvent);
MARK_REF_PTR_T(::UnityEngine::UI::__InputField___CaretBlink_d__172);
MARK_REF_PTR_T(::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194);
// Type: ::ContentType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// CS Name: ::InputField::ContentType
struct CORDL_TYPE __InputField__ContentType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InputField__ContentType_Unwrapped
  enum struct ____InputField__ContentType_Unwrapped : int32_t {
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
  constexpr operator ____InputField__ContentType_Unwrapped() const noexcept {
    return static_cast<____InputField__ContentType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputField__ContentType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputField__ContentType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Alphanumeric value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UI::__InputField__ContentType const Alphanumeric;

  /// @brief Field Autocorrected value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__InputField__ContentType const Autocorrected;

  /// @brief Field Custom value: static_cast<int32_t>(0x9)
  static ::UnityEngine::UI::__InputField__ContentType const Custom;

  /// @brief Field DecimalNumber value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UI::__InputField__ContentType const DecimalNumber;

  /// @brief Field EmailAddress value: static_cast<int32_t>(0x6)
  static ::UnityEngine::UI::__InputField__ContentType const EmailAddress;

  /// @brief Field IntegerNumber value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UI::__InputField__ContentType const IntegerNumber;

  /// @brief Field Name value: static_cast<int32_t>(0x5)
  static ::UnityEngine::UI::__InputField__ContentType const Name;

  /// @brief Field Password value: static_cast<int32_t>(0x7)
  static ::UnityEngine::UI::__InputField__ContentType const Password;

  /// @brief Field Pin value: static_cast<int32_t>(0x8)
  static ::UnityEngine::UI::__InputField__ContentType const Pin;

  /// @brief Field Standard value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__InputField__ContentType const Standard;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__InputField__ContentType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__InputField__ContentType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: ::InputType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// CS Name: ::InputField::InputType
struct CORDL_TYPE __InputField__InputType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InputField__InputType_Unwrapped
  enum struct ____InputField__InputType_Unwrapped : int32_t {
    __E_Standard = static_cast<int32_t>(0x0),
    __E_AutoCorrect = static_cast<int32_t>(0x1),
    __E_Password = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InputField__InputType_Unwrapped() const noexcept {
    return static_cast<____InputField__InputType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputField__InputType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputField__InputType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AutoCorrect value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__InputField__InputType const AutoCorrect;

  /// @brief Field Password value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UI::__InputField__InputType const Password;

  /// @brief Field Standard value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__InputField__InputType const Standard;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__InputField__InputType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__InputField__InputType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: ::CharacterValidation
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// CS Name: ::InputField::CharacterValidation
struct CORDL_TYPE __InputField__CharacterValidation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InputField__CharacterValidation_Unwrapped
  enum struct ____InputField__CharacterValidation_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Integer = static_cast<int32_t>(0x1),
    __E_Decimal = static_cast<int32_t>(0x2),
    __E_Alphanumeric = static_cast<int32_t>(0x3),
    __E_Name = static_cast<int32_t>(0x4),
    __E_EmailAddress = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InputField__CharacterValidation_Unwrapped() const noexcept {
    return static_cast<____InputField__CharacterValidation_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputField__CharacterValidation();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputField__CharacterValidation(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Alphanumeric value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UI::__InputField__CharacterValidation const Alphanumeric;

  /// @brief Field Decimal value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UI::__InputField__CharacterValidation const Decimal;

  /// @brief Field EmailAddress value: static_cast<int32_t>(0x5)
  static ::UnityEngine::UI::__InputField__CharacterValidation const EmailAddress;

  /// @brief Field Integer value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__InputField__CharacterValidation const Integer;

  /// @brief Field Name value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UI::__InputField__CharacterValidation const Name;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__InputField__CharacterValidation const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__InputField__CharacterValidation, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__InputField__CharacterValidation, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: ::LineType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// CS Name: ::InputField::LineType
struct CORDL_TYPE __InputField__LineType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InputField__LineType_Unwrapped
  enum struct ____InputField__LineType_Unwrapped : int32_t {
    __E_SingleLine = static_cast<int32_t>(0x0),
    __E_MultiLineSubmit = static_cast<int32_t>(0x1),
    __E_MultiLineNewline = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InputField__LineType_Unwrapped() const noexcept {
    return static_cast<____InputField__LineType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputField__LineType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputField__LineType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field MultiLineNewline value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UI::__InputField__LineType const MultiLineNewline;

  /// @brief Field MultiLineSubmit value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__InputField__LineType const MultiLineSubmit;

  /// @brief Field SingleLine value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__InputField__LineType const SingleLine;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__InputField__LineType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__InputField__LineType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: ::OnValidateInput
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::InputField::OnValidateInput*
class CORDL_TYPE __InputField__OnValidateInput : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x32bde58, size 0xc0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW text, int32_t charIndex, char16_t addedChar, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x32bdf18, size 0x28, virtual true, abstract: false, final false
  inline char16_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x32bde44, size 0x14, virtual true, abstract: false, final false
  inline char16_t Invoke(::StringW text, int32_t charIndex, char16_t addedChar);

  static inline ::UnityEngine::UI::__InputField__OnValidateInput* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x32b4e84, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputField__OnValidateInput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InputField__OnValidateInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputField__OnValidateInput(__InputField__OnValidateInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputField__OnValidateInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputField__OnValidateInput(__InputField__OnValidateInput const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__InputField__OnValidateInput, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: ::SubmitEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::InputField::SubmitEvent*
class CORDL_TYPE __InputField__SubmitEvent : public ::UnityEngine::Events::UnityEvent_1<::StringW> {
public:
  // Declarations
  static inline ::UnityEngine::UI::__InputField__SubmitEvent* New_ctor();

  /// @brief Method .ctor, addr 0x32b4808, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputField__SubmitEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InputField__SubmitEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputField__SubmitEvent(__InputField__SubmitEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputField__SubmitEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputField__SubmitEvent(__InputField__SubmitEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__InputField__SubmitEvent, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: ::EndEditEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::InputField::EndEditEvent*
class CORDL_TYPE __InputField__EndEditEvent : public ::UnityEngine::Events::UnityEvent_1<::StringW> {
public:
  // Declarations
  static inline ::UnityEngine::UI::__InputField__EndEditEvent* New_ctor();

  /// @brief Method .ctor, addr 0x32b4850, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputField__EndEditEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InputField__EndEditEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputField__EndEditEvent(__InputField__EndEditEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputField__EndEditEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputField__EndEditEvent(__InputField__EndEditEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__InputField__EndEditEvent, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: ::OnChangeEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::InputField::OnChangeEvent*
class CORDL_TYPE __InputField__OnChangeEvent : public ::UnityEngine::Events::UnityEvent_1<::StringW> {
public:
  // Declarations
  static inline ::UnityEngine::UI::__InputField__OnChangeEvent* New_ctor();

  /// @brief Method .ctor, addr 0x32b4898, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputField__OnChangeEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InputField__OnChangeEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputField__OnChangeEvent(__InputField__OnChangeEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputField__OnChangeEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputField__OnChangeEvent(__InputField__OnChangeEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__InputField__OnChangeEvent, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: ::EditState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// CS Name: ::InputField::EditState
struct CORDL_TYPE __InputField__EditState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InputField__EditState_Unwrapped
  enum struct ____InputField__EditState_Unwrapped : int32_t {
    __E_Continue = static_cast<int32_t>(0x0),
    __E_Finish = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InputField__EditState_Unwrapped() const noexcept {
    return static_cast<____InputField__EditState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputField__EditState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputField__EditState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Continue value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__InputField__EditState const Continue;

  /// @brief Field Finish value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__InputField__EditState const Finish;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__InputField__EditState, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__InputField__EditState, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: ::<CaretBlink>d__172
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::InputField::<CaretBlink>d__172*
class CORDL_TYPE __InputField___CaretBlink_d__172 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::UnityEngine::UI::InputField> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x32bdf44, size 0x10c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::UI::__InputField___CaretBlink_d__172* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x32be050, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x32be058, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x32be098, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x32bdf40, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::UnityEngine::UI::InputField> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::UnityEngine::UI::InputField>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::UI::InputField> value);

  /// @brief Method .ctor, addr 0x32b6abc, size 0x28, virtual false, abstract: false, final false
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
  constexpr __InputField___CaretBlink_d__172();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InputField___CaretBlink_d__172", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputField___CaretBlink_d__172(__InputField___CaretBlink_d__172&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputField___CaretBlink_d__172", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputField___CaretBlink_d__172(__InputField___CaretBlink_d__172 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::InputField> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__InputField___CaretBlink_d__172, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__InputField___CaretBlink_d__172, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::__InputField___CaretBlink_d__172, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::__InputField___CaretBlink_d__172, _____4__this) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: ::<MouseDragOutsideRect>d__194
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::InputField::<MouseDragOutsideRect>d__194*
class CORDL_TYPE __InputField___MouseDragOutsideRect_d__194 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::UnityEngine::UI::InputField> __4__this;

  /// @brief Field eventData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_eventData, put = __cordl_internal_set_eventData))::UnityEngine::EventSystems::PointerEventData* eventData;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x32be0a4, size 0x2a8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x32be34c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x32be354, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x32be394, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x32be0a0, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::UnityEngine::UI::InputField> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::UnityEngine::UI::InputField>& __cordl_internal_get___4__this();

  constexpr ::UnityEngine::EventSystems::PointerEventData*& __cordl_internal_get_eventData();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::PointerEventData*> const& __cordl_internal_get_eventData() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::UI::InputField> value);

  constexpr void __cordl_internal_set_eventData(::UnityEngine::EventSystems::PointerEventData* value);

  /// @brief Method .ctor, addr 0x32b911c, size 0x28, virtual false, abstract: false, final false
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
  constexpr __InputField___MouseDragOutsideRect_d__194();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InputField___MouseDragOutsideRect_d__194", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputField___MouseDragOutsideRect_d__194(__InputField___MouseDragOutsideRect_d__194&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputField___MouseDragOutsideRect_d__194", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputField___MouseDragOutsideRect_d__194(__InputField___MouseDragOutsideRect_d__194 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field eventData, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::EventSystems::PointerEventData* ___eventData;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::InputField> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194, ___eventData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194, _____4__this) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: UnityEngine.UI::InputField
// SizeInfo { instance_size: 536, native_size: -1, calculated_instance_size: 536, calculated_native_size: 536, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::UnityEngine.UI::InputField*
class CORDL_TYPE InputField : public ::UnityEngine::UI::Selectable {
public:
  // Declarations
  using CharacterValidation = ::UnityEngine::UI::__InputField__CharacterValidation;

  using ContentType = ::UnityEngine::UI::__InputField__ContentType;

  using EditState = ::UnityEngine::UI::__InputField__EditState;

  using EndEditEvent = ::UnityEngine::UI::__InputField__EndEditEvent;

  using InputType = ::UnityEngine::UI::__InputField__InputType;

  using LineType = ::UnityEngine::UI::__InputField__LineType;

  using OnChangeEvent = ::UnityEngine::UI::__InputField__OnChangeEvent;

  using OnValidateInput = ::UnityEngine::UI::__InputField__OnValidateInput;

  using SubmitEvent = ::UnityEngine::UI::__InputField__SubmitEvent;

  using _CaretBlink_d__172 = ::UnityEngine::UI::__InputField___CaretBlink_d__172;

  using _MouseDragOutsideRect_d__194 = ::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194;

  __declspec(property(get = get_asteriskChar, put = set_asteriskChar)) char16_t asteriskChar;

  __declspec(property(get = get_cachedInputTextGenerator))::UnityEngine::TextGenerator* cachedInputTextGenerator;

  __declspec(property(get = get_caretBlinkRate, put = set_caretBlinkRate)) float_t caretBlinkRate;

  __declspec(property(get = get_caretColor, put = set_caretColor))::UnityEngine::Color caretColor;

  __declspec(property(get = get_caretPosition, put = set_caretPosition)) int32_t caretPosition;

  __declspec(property(get = get_caretPositionInternal, put = set_caretPositionInternal)) int32_t caretPositionInternal;

  /// @brief Field caretRectTrans, offset 0x198, size 0x8
  __declspec(property(get = __cordl_internal_get_caretRectTrans, put = __cordl_internal_set_caretRectTrans))::UnityW<::UnityEngine::RectTransform> caretRectTrans;

  __declspec(property(get = get_caretSelectPositionInternal, put = set_caretSelectPositionInternal)) int32_t caretSelectPositionInternal;

  __declspec(property(get = get_caretWidth, put = set_caretWidth)) int32_t caretWidth;

  __declspec(property(get = get_characterLimit, put = set_characterLimit)) int32_t characterLimit;

  __declspec(property(get = get_characterValidation, put = set_characterValidation))::UnityEngine::UI::__InputField__CharacterValidation characterValidation;

  __declspec(property(get = get_compositionString))::StringW compositionString;

  __declspec(property(get = get_contentType, put = set_contentType))::UnityEngine::UI::__InputField__ContentType contentType;

  __declspec(property(get = get_customCaretColor, put = set_customCaretColor)) bool customCaretColor;

  __declspec(property(get = get_flexibleHeight)) float_t flexibleHeight;

  __declspec(property(get = get_flexibleWidth)) float_t flexibleWidth;

  __declspec(property(get = get_hasSelection)) bool hasSelection;

  __declspec(property(get = get_input))::UnityW<::UnityEngine::EventSystems::BaseInput> input;

  __declspec(property(get = get_inputType, put = set_inputType))::UnityEngine::UI::__InputField__InputType inputType;

  __declspec(property(get = get_isFocused)) bool isFocused;

  /// @brief Field kSeparators, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kSeparators, put = setStaticF_kSeparators))::ArrayW<char16_t, ::Array<char16_t>*> kSeparators;

  __declspec(property(get = get_keyboardType, put = set_keyboardType))::UnityEngine::TouchScreenKeyboardType keyboardType;

  __declspec(property(get = get_layoutPriority)) int32_t layoutPriority;

  __declspec(property(get = get_lineType, put = set_lineType))::UnityEngine::UI::__InputField__LineType lineType;

  /// @brief Field m_AllowInput, offset 0x1c8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AllowInput, put = __cordl_internal_set_m_AllowInput)) bool m_AllowInput;

  /// @brief Field m_AsteriskChar, offset 0x118, size 0x2
  __declspec(property(get = __cordl_internal_get_m_AsteriskChar, put = __cordl_internal_set_m_AsteriskChar)) char16_t m_AsteriskChar;

  /// @brief Field m_BlinkCoroutine, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BlinkCoroutine, put = __cordl_internal_set_m_BlinkCoroutine))::UnityEngine::Coroutine* m_BlinkCoroutine;

  /// @brief Field m_BlinkStartTime, offset 0x1d8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BlinkStartTime, put = __cordl_internal_set_m_BlinkStartTime)) float_t m_BlinkStartTime;

  /// @brief Field m_CachedInputRenderer, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CachedInputRenderer, put = __cordl_internal_set_m_CachedInputRenderer))::UnityW<::UnityEngine::CanvasRenderer> m_CachedInputRenderer;

  /// @brief Field m_CaretBlinkRate, offset 0x180, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CaretBlinkRate, put = __cordl_internal_set_m_CaretBlinkRate)) float_t m_CaretBlinkRate;

  /// @brief Field m_CaretColor, offset 0x150, size 0x10
  __declspec(property(get = __cordl_internal_get_m_CaretColor, put = __cordl_internal_set_m_CaretColor))::UnityEngine::Color m_CaretColor;

  /// @brief Field m_CaretPosition, offset 0x18c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CaretPosition, put = __cordl_internal_set_m_CaretPosition)) int32_t m_CaretPosition;

  /// @brief Field m_CaretSelectPosition, offset 0x190, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CaretSelectPosition, put = __cordl_internal_set_m_CaretSelectPosition)) int32_t m_CaretSelectPosition;

  /// @brief Field m_CaretVisible, offset 0x1cc, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CaretVisible, put = __cordl_internal_set_m_CaretVisible)) bool m_CaretVisible;

  /// @brief Field m_CaretWidth, offset 0x184, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CaretWidth, put = __cordl_internal_set_m_CaretWidth)) int32_t m_CaretWidth;

  /// @brief Field m_CharacterLimit, offset 0x12c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CharacterLimit, put = __cordl_internal_set_m_CharacterLimit)) int32_t m_CharacterLimit;

  /// @brief Field m_CharacterValidation, offset 0x128, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CharacterValidation, put = __cordl_internal_set_m_CharacterValidation))::UnityEngine::UI::__InputField__CharacterValidation m_CharacterValidation;

  /// @brief Field m_ContentType, offset 0x110, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ContentType, put = __cordl_internal_set_m_ContentType))::UnityEngine::UI::__InputField__ContentType m_ContentType;

  /// @brief Field m_CursorVerts, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CursorVerts, put = __cordl_internal_set_m_CursorVerts))::ArrayW<::UnityEngine::UIVertex, ::Array<::UnityEngine::UIVertex>*> m_CursorVerts;

  /// @brief Field m_CustomCaretColor, offset 0x160, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CustomCaretColor, put = __cordl_internal_set_m_CustomCaretColor)) bool m_CustomCaretColor;

  /// @brief Field m_DragCoroutine, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DragCoroutine, put = __cordl_internal_set_m_DragCoroutine))::UnityEngine::Coroutine* m_DragCoroutine;

  /// @brief Field m_DragPositionOutOfBounds, offset 0x1cb, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DragPositionOutOfBounds, put = __cordl_internal_set_m_DragPositionOutOfBounds)) bool m_DragPositionOutOfBounds;

  /// @brief Field m_DrawEnd, offset 0x1e0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DrawEnd, put = __cordl_internal_set_m_DrawEnd)) int32_t m_DrawEnd;

  /// @brief Field m_DrawStart, offset 0x1dc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DrawStart, put = __cordl_internal_set_m_DrawStart)) int32_t m_DrawStart;

  /// @brief Field m_HasDoneFocusTransition, offset 0x1f9, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasDoneFocusTransition, put = __cordl_internal_set_m_HasDoneFocusTransition)) bool m_HasDoneFocusTransition;

  /// @brief Field m_HideMobileInput, offset 0x124, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HideMobileInput, put = __cordl_internal_set_m_HideMobileInput)) bool m_HideMobileInput;

  /// @brief Field m_InputTextCache, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InputTextCache, put = __cordl_internal_set_m_InputTextCache))::UnityEngine::TextGenerator* m_InputTextCache;

  /// @brief Field m_InputType, offset 0x114, size 0x4
  __declspec(property(get = __cordl_internal_get_m_InputType, put = __cordl_internal_set_m_InputType))::UnityEngine::UI::__InputField__InputType m_InputType;

  /// @brief Field m_IsCompositionActive, offset 0x209, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsCompositionActive, put = __cordl_internal_set_m_IsCompositionActive)) bool m_IsCompositionActive;

  /// @brief Field m_Keyboard, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Keyboard, put = __cordl_internal_set_m_Keyboard))::UnityEngine::TouchScreenKeyboard* m_Keyboard;

  /// @brief Field m_KeyboardType, offset 0x11c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_KeyboardType, put = __cordl_internal_set_m_KeyboardType))::UnityEngine::TouchScreenKeyboardType m_KeyboardType;

  /// @brief Field m_LineType, offset 0x120, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LineType, put = __cordl_internal_set_m_LineType))::UnityEngine::UI::__InputField__LineType m_LineType;

  /// @brief Field m_Mesh, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Mesh, put = __cordl_internal_set_m_Mesh))::UnityW<::UnityEngine::Mesh> m_Mesh;

  /// @brief Field m_OnDidEndEdit, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnDidEndEdit, put = __cordl_internal_set_m_OnDidEndEdit))::UnityEngine::UI::__InputField__EndEditEvent* m_OnDidEndEdit;

  /// @brief Field m_OnSubmit, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnSubmit, put = __cordl_internal_set_m_OnSubmit))::UnityEngine::UI::__InputField__SubmitEvent* m_OnSubmit;

  /// @brief Field m_OnValidateInput, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnValidateInput, put = __cordl_internal_set_m_OnValidateInput))::UnityEngine::UI::__InputField__OnValidateInput* m_OnValidateInput;

  /// @brief Field m_OnValueChanged, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnValueChanged, put = __cordl_internal_set_m_OnValueChanged))::UnityEngine::UI::__InputField__OnChangeEvent* m_OnValueChanged;

  /// @brief Field m_OriginalText, offset 0x1f0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OriginalText, put = __cordl_internal_set_m_OriginalText))::StringW m_OriginalText;

  /// @brief Field m_Placeholder, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Placeholder, put = __cordl_internal_set_m_Placeholder))::UnityW<::UnityEngine::UI::Graphic> m_Placeholder;

  /// @brief Field m_PreventFontCallback, offset 0x1b8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_PreventFontCallback, put = __cordl_internal_set_m_PreventFontCallback)) bool m_PreventFontCallback;

  /// @brief Field m_ProcessingEvent, offset 0x210, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProcessingEvent, put = __cordl_internal_set_m_ProcessingEvent))::UnityEngine::Event* m_ProcessingEvent;

  /// @brief Field m_ReadOnly, offset 0x188, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ReadOnly, put = __cordl_internal_set_m_ReadOnly)) bool m_ReadOnly;

  /// @brief Field m_SelectionColor, offset 0x164, size 0x10
  __declspec(property(get = __cordl_internal_get_m_SelectionColor, put = __cordl_internal_set_m_SelectionColor))::UnityEngine::Color m_SelectionColor;

  /// @brief Field m_ShouldActivateNextUpdate, offset 0x1c9, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ShouldActivateNextUpdate, put = __cordl_internal_set_m_ShouldActivateNextUpdate)) bool m_ShouldActivateNextUpdate;

  /// @brief Field m_ShouldActivateOnSelect, offset 0x189, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ShouldActivateOnSelect, put = __cordl_internal_set_m_ShouldActivateOnSelect)) bool m_ShouldActivateOnSelect;

  /// @brief Field m_Text, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Text, put = __cordl_internal_set_m_Text))::StringW m_Text;

  /// @brief Field m_TextComponent, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextComponent, put = __cordl_internal_set_m_TextComponent))::UnityW<::UnityEngine::UI::Text> m_TextComponent;

  /// @brief Field m_TouchKeyboardAllowsInPlaceEditing, offset 0x208, size 0x1
  __declspec(property(get = __cordl_internal_get_m_TouchKeyboardAllowsInPlaceEditing, put = __cordl_internal_set_m_TouchKeyboardAllowsInPlaceEditing)) bool m_TouchKeyboardAllowsInPlaceEditing;

  /// @brief Field m_UpdateDrag, offset 0x1ca, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UpdateDrag, put = __cordl_internal_set_m_UpdateDrag)) bool m_UpdateDrag;

  /// @brief Field m_WaitForSecondsRealtime, offset 0x200, size 0x8
  __declspec(property(get = __cordl_internal_get_m_WaitForSecondsRealtime, put = __cordl_internal_set_m_WaitForSecondsRealtime))::UnityEngine::WaitForSecondsRealtime* m_WaitForSecondsRealtime;

  /// @brief Field m_WasCanceled, offset 0x1f8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_WasCanceled, put = __cordl_internal_set_m_WasCanceled)) bool m_WasCanceled;

  __declspec(property(get = get_mesh))::UnityW<::UnityEngine::Mesh> mesh;

  __declspec(property(get = get_minHeight)) float_t minHeight;

  __declspec(property(get = get_minWidth)) float_t minWidth;

  __declspec(property(get = get_multiLine)) bool multiLine;

  __declspec(property(get = get_onEndEdit, put = set_onEndEdit))::UnityEngine::UI::__InputField__EndEditEvent* onEndEdit;

  __declspec(property(get = get_onSubmit, put = set_onSubmit))::UnityEngine::UI::__InputField__SubmitEvent* onSubmit;

  __declspec(property(get = get_onValidateInput, put = set_onValidateInput))::UnityEngine::UI::__InputField__OnValidateInput* onValidateInput;

  __declspec(property(get = get_onValueChange, put = set_onValueChange))::UnityEngine::UI::__InputField__OnChangeEvent* onValueChange;

  __declspec(property(get = get_onValueChanged, put = set_onValueChanged))::UnityEngine::UI::__InputField__OnChangeEvent* onValueChanged;

  __declspec(property(get = get_placeholder, put = set_placeholder))::UnityW<::UnityEngine::UI::Graphic> placeholder;

  __declspec(property(get = get_preferredHeight)) float_t preferredHeight;

  __declspec(property(get = get_preferredWidth)) float_t preferredWidth;

  __declspec(property(get = get_readOnly, put = set_readOnly)) bool readOnly;

  /// @brief Field s_IsQuestDevice, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_IsQuestDevice, put = setStaticF_s_IsQuestDevice)) bool s_IsQuestDevice;

  /// @brief Field s_IsQuestDeviceEvaluated, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_IsQuestDeviceEvaluated, put = setStaticF_s_IsQuestDeviceEvaluated)) bool s_IsQuestDeviceEvaluated;

  __declspec(property(get = get_selectionAnchorPosition, put = set_selectionAnchorPosition)) int32_t selectionAnchorPosition;

  __declspec(property(get = get_selectionColor, put = set_selectionColor))::UnityEngine::Color selectionColor;

  __declspec(property(get = get_selectionFocusPosition, put = set_selectionFocusPosition)) int32_t selectionFocusPosition;

  __declspec(property(get = get_shouldActivateOnSelect, put = set_shouldActivateOnSelect)) bool shouldActivateOnSelect;

  __declspec(property(get = get_shouldHideMobileInput, put = set_shouldHideMobileInput)) bool shouldHideMobileInput;

  __declspec(property(get = get_text, put = set_text))::StringW text;

  __declspec(property(get = get_textComponent, put = set_textComponent))::UnityW<::UnityEngine::UI::Text> textComponent;

  __declspec(property(get = get_touchScreenKeyboard))::UnityEngine::TouchScreenKeyboard* touchScreenKeyboard;

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

  /// @brief Convert operator to "::UnityEngine::EventSystems::ISubmitHandler"
  constexpr operator ::UnityEngine::EventSystems::ISubmitHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IUpdateSelectedHandler"
  constexpr operator ::UnityEngine::EventSystems::IUpdateSelectedHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UI::ICanvasElement"
  constexpr operator ::UnityEngine::UI::ICanvasElement*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UI::ILayoutElement"
  constexpr operator ::UnityEngine::UI::ILayoutElement*() noexcept;

  /// @brief Method ActivateInputField, addr 0x32bd894, size 0x120, virtual false, abstract: false, final false
  inline void ActivateInputField();

  /// @brief Method ActivateInputFieldInternal, addr 0x32b7594, size 0x350, virtual false, abstract: false, final false
  inline void ActivateInputFieldInternal();

  /// @brief Method Append, addr 0x32bac2c, size 0xbc, virtual true, abstract: false, final false
  inline void Append(::StringW input);

  /// @brief Method Append, addr 0x32bace8, size 0x270, virtual true, abstract: false, final false
  inline void Append(char16_t input);

  /// @brief Method AssignPositioningIfNeeded, addr 0x32b78e4, size 0x500, virtual false, abstract: false, final false
  inline void AssignPositioningIfNeeded();

  /// @brief Method Awake, addr 0x32b6314, size 0xc0, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method Backspace, addr 0x32b9728, size 0x104, virtual false, abstract: false, final false
  inline void Backspace();

  /// @brief Method CalculateLayoutInputHorizontal, addr 0x32bdab4, size 0x4, virtual true, abstract: false, final false
  inline void CalculateLayoutInputHorizontal();

  /// @brief Method CalculateLayoutInputVertical, addr 0x32bdab8, size 0x4, virtual true, abstract: false, final false
  inline void CalculateLayoutInputVertical();

  /// @brief Method CaretBlink, addr 0x32b6a54, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* CaretBlink();

  /// @brief Method ClampPos, addr 0x32b60a8, size 0x38, virtual false, abstract: false, final false
  inline void ClampPos(ByRef<int32_t> pos);

  /// @brief Method CreateCursorVerts, addr 0x32bd744, size 0x150, virtual false, abstract: false, final false
  inline void CreateCursorVerts();

  /// @brief Method DeactivateInputField, addr 0x32b6874, size 0x17c, virtual false, abstract: false, final false
  inline void DeactivateInputField();

  /// @brief Method Delete, addr 0x32b9978, size 0x1b4, virtual false, abstract: false, final false
  inline void Delete();

  /// @brief Method DetermineCharacterLine, addr 0x32ba13c, size 0x110, virtual false, abstract: false, final false
  inline int32_t DetermineCharacterLine(int32_t charPos, ::UnityEngine::TextGenerator* generator);

  /// @brief Method DoStateTransition, addr 0x32bda88, size 0x2c, virtual true, abstract: false, final false
  inline void DoStateTransition(::UnityEngine::UI::__Selectable__SelectionState state, bool instant);

  /// @brief Method EnforceContentType, addr 0x32b5c5c, size 0xbc, virtual false, abstract: false, final false
  inline void EnforceContentType();

  /// @brief Method EnforceTextHOverflow, addr 0x32b48e0, size 0x94, virtual false, abstract: false, final false
  inline void EnforceTextHOverflow();

  /// @brief Method FindtNextWordBegin, addr 0x32b9fe0, size 0xbc, virtual false, abstract: false, final false
  inline int32_t FindtNextWordBegin();

  /// @brief Method FindtPrevWordBegin, addr 0x32ba09c, size 0xa0, virtual false, abstract: false, final false
  inline int32_t FindtPrevWordBegin();

  /// @brief Method ForceLabelUpdate, addr 0x32bbc30, size 0x4, virtual false, abstract: false, final false
  inline void ForceLabelUpdate();

  /// @brief Method ForwardSpace, addr 0x32b982c, size 0xa4, virtual false, abstract: false, final false
  inline void ForwardSpace();

  /// @brief Method GenerateCaret, addr 0x32bc314, size 0x9d4, virtual false, abstract: false, final false
  inline void GenerateCaret(::UnityEngine::UI::VertexHelper* vbo, ::UnityEngine::Vector2 roundingOffset);

  /// @brief Method GenerateHighlight, addr 0x32bcce8, size 0xa5c, virtual false, abstract: false, final false
  inline void GenerateHighlight(::UnityEngine::UI::VertexHelper* vbo, ::UnityEngine::Vector2 roundingOffset);

  /// @brief Method GetCharacterIndexFromPosition, addr 0x32b89d0, size 0x294, virtual false, abstract: false, final false
  inline int32_t GetCharacterIndexFromPosition(::UnityEngine::Vector2 pos);

  /// @brief Method GetLineEndPosition, addr 0x32b8c64, size 0x164, virtual false, abstract: false, final false
  static inline int32_t GetLineEndPosition(::UnityEngine::TextGenerator* gen, int32_t line);

  /// @brief Method GetLineStartPosition, addr 0x32bbae0, size 0x150, virtual false, abstract: false, final false
  static inline int32_t GetLineStartPosition(::UnityEngine::TextGenerator* gen, int32_t line);

  /// @brief Method GetSelectedString, addr 0x32b98d0, size 0xa8, virtual false, abstract: false, final false
  inline ::StringW GetSelectedString();

  /// @brief Method GetUnclampedCharacterLineFromPosition, addr 0x32b87c0, size 0x210, virtual false, abstract: false, final false
  inline int32_t GetUnclampedCharacterLineFromPosition(::UnityEngine::Vector2 pos, ::UnityEngine::TextGenerator* generator);

  /// @brief Method GraphicUpdateComplete, addr 0x32bc098, size 0x4, virtual true, abstract: false, final false
  inline void GraphicUpdateComplete();

  /// @brief Method InPlaceEditing, addr 0x32b6dd0, size 0x30, virtual false, abstract: false, final false
  inline bool InPlaceEditing();

  /// @brief Method InPlaceEditingChanged, addr 0x32b6e00, size 0x84, virtual false, abstract: false, final false
  inline bool InPlaceEditingChanged();

  /// @brief Method Insert, addr 0x32baacc, size 0xe0, virtual false, abstract: false, final false
  inline void Insert(char16_t c);

  /// @brief Method IsSelectionVisible, addr 0x32bba74, size 0x6c, virtual false, abstract: false, final false
  inline bool IsSelectionVisible();

  /// @brief Method IsValidChar, addr 0x32b9de4, size 0x70, virtual false, abstract: false, final false
  inline bool IsValidChar(char16_t c);

  /// @brief Method KeyPressed, addr 0x32b9350, size 0x3d8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::__InputField__EditState KeyPressed(::UnityEngine::Event* evt);

  /// @brief Method LateUpdate, addr 0x32b6f6c, size 0x628, virtual true, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method LayoutComplete, addr 0x32bc094, size 0x4, virtual true, abstract: false, final false
  inline void LayoutComplete();

  /// @brief Method LineDownCharacterPosition, addr 0x32ba5a4, size 0x2b4, virtual false, abstract: false, final false
  inline int32_t LineDownCharacterPosition(int32_t originalPos, bool goToLastChar);

  /// @brief Method LineUpCharacterPosition, addr 0x32ba24c, size 0x358, virtual false, abstract: false, final false
  inline int32_t LineUpCharacterPosition(int32_t originalPos, bool goToFirstChar);

  /// @brief Method MarkGeometryAsDirty, addr 0x32b5554, size 0x58, virtual false, abstract: false, final false
  inline void MarkGeometryAsDirty();

  /// @brief Method MayDrag, addr 0x32b8dc8, size 0xd8, virtual false, abstract: false, final false
  inline bool MayDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method MouseDragOutsideRect, addr 0x32b90a8, size 0x74, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* MouseDragOutsideRect(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method MoveDown, addr 0x32b9dd8, size 0xc, virtual false, abstract: false, final false
  inline void MoveDown(bool shift);

  /// @brief Method MoveDown, addr 0x32ba858, size 0x134, virtual false, abstract: false, final false
  inline void MoveDown(bool shift, bool goToLastChar);

  /// @brief Method MoveLeft, addr 0x32b9b74, size 0x12c, virtual false, abstract: false, final false
  inline void MoveLeft(bool shift, bool ctrl);

  /// @brief Method MoveRight, addr 0x32b9ca0, size 0x12c, virtual false, abstract: false, final false
  inline void MoveRight(bool shift, bool ctrl);

  /// @brief Method MoveTextEnd, addr 0x32b6c64, size 0x60, virtual false, abstract: false, final false
  inline void MoveTextEnd(bool shift);

  /// @brief Method MoveTextStart, addr 0x32b6cc4, size 0x7c, virtual false, abstract: false, final false
  inline void MoveTextStart(bool shift);

  /// @brief Method MoveUp, addr 0x32b9dcc, size 0xc, virtual false, abstract: false, final false
  inline void MoveUp(bool shift);

  /// @brief Method MoveUp, addr 0x32ba98c, size 0x140, virtual false, abstract: false, final false
  inline void MoveUp(bool shift, bool goToFirstChar);

  static inline ::UnityEngine::UI::InputField* New_ctor();

  /// @brief Method OnBeginDrag, addr 0x32b8ea0, size 0x20, virtual true, abstract: false, final false
  inline void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnDeselect, addr 0x32bda14, size 0x2c, virtual true, abstract: false, final false
  inline void OnDeselect(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnDestroy, addr 0x32b69f0, size 0x64, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x32b6640, size 0x234, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnDrag, addr 0x32b8ec0, size 0x1e8, virtual true, abstract: false, final false
  inline void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnEnable, addr 0x32b63d4, size 0x26c, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnEndDrag, addr 0x32b9144, size 0x1c, virtual true, abstract: false, final false
  inline void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnFillVBO, addr 0x32bc09c, size 0x278, virtual false, abstract: false, final false
  inline void OnFillVBO(::UnityEngine::Mesh* vbo);

  /// @brief Method OnFocus, addr 0x32b6c2c, size 0x4, virtual false, abstract: false, final false
  inline void OnFocus();

  /// @brief Method OnPointerClick, addr 0x32bd9f0, size 0x24, virtual true, abstract: false, final false
  inline void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerDown, addr 0x32b9160, size 0x1f0, virtual true, abstract: false, final false
  inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnSelect, addr 0x32bd9b4, size 0x3c, virtual true, abstract: false, final false
  inline void OnSelect(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnSubmit, addr 0x32bda40, size 0x48, virtual true, abstract: false, final false
  inline void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnUpdateSelected, addr 0x32b9e58, size 0x188, virtual true, abstract: false, final false
  inline void OnUpdateSelected(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method ProcessEvent, addr 0x32b9e54, size 0x4, virtual false, abstract: false, final false
  inline void ProcessEvent(::UnityEngine::Event* e);

  /// @brief Method Rebuild, addr 0x32bbc34, size 0x10, virtual true, abstract: false, final false
  inline void Rebuild(::UnityEngine::UI::CanvasUpdate update);

  /// @brief Method ScreenToLocal, addr 0x32b8550, size 0x270, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 ScreenToLocal(::UnityEngine::Vector2 screen);

  /// @brief Method SelectAll, addr 0x32b6c30, size 0x34, virtual false, abstract: false, final false
  inline void SelectAll();

  /// @brief Method SendOnEndEdit, addr 0x32babac, size 0x80, virtual false, abstract: false, final false
  inline void SendOnEndEdit();

  /// @brief Method SendOnSubmit, addr 0x32b7de4, size 0x80, virtual false, abstract: false, final false
  inline void SendOnSubmit();

  /// @brief Method SendOnValueChanged, addr 0x32b4f5c, size 0x80, virtual false, abstract: false, final false
  inline void SendOnValueChanged();

  /// @brief Method SendOnValueChangedAndUpdateLabel, addr 0x32b8538, size 0x18, virtual false, abstract: false, final false
  inline void SendOnValueChangedAndUpdateLabel();

  /// @brief Method SetCaretActive, addr 0x32b5484, size 0x54, virtual false, abstract: false, final false
  inline void SetCaretActive();

  /// @brief Method SetCaretVisible, addr 0x32b6ae4, size 0x38, virtual false, abstract: false, final false
  inline void SetCaretVisible();

  /// @brief Method SetDrawRangeToContainCaretPosition, addr 0x32baf58, size 0xb1c, virtual false, abstract: false, final false
  inline void SetDrawRangeToContainCaretPosition(int32_t caretPos);

  /// @brief Method SetText, addr 0x32b4b70, size 0x30c, virtual false, abstract: false, final false
  inline void SetText(::StringW value, bool sendCallback);

  /// @brief Method SetTextWithoutNotify, addr 0x32b4e7c, size 0x8, virtual false, abstract: false, final false
  inline void SetTextWithoutNotify(::StringW input);

  /// @brief Method SetToCustom, addr 0x32b5ec4, size 0x18, virtual false, abstract: false, final false
  inline void SetToCustom();

  /// @brief Method SetToCustomIfContentTypeIsNot, addr 0x32b5de0, size 0x58, virtual false, abstract: false, final false
  inline void SetToCustomIfContentTypeIsNot(::ArrayW<::UnityEngine::UI::__InputField__ContentType, ::Array<::UnityEngine::UI::__InputField__ContentType>*> allowedContentTypes);

  /// @brief Method TouchScreenKeyboardShouldBeUsed, addr 0x32b6d50, size 0x80, virtual false, abstract: false, final false
  inline bool TouchScreenKeyboardShouldBeUsed();

  /// @brief Method UnityEngine.UI.ICanvasElement.get_transform, addr 0x32bde3c, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Transform> UnityEngine_UI_ICanvasElement_get_transform();

  /// @brief Method UpdateCaretFromKeyboard, addr 0x32b6e84, size 0xe8, virtual false, abstract: false, final false
  inline void UpdateCaretFromKeyboard();

  /// @brief Method UpdateCaretMaterial, addr 0x32b6b1c, size 0x110, virtual false, abstract: false, final false
  inline void UpdateCaretMaterial();

  /// @brief Method UpdateGeometry, addr 0x32bbc44, size 0x450, virtual false, abstract: false, final false
  inline void UpdateGeometry();

  /// @brief Method UpdateLabel, addr 0x32b4fdc, size 0x41c, virtual false, abstract: false, final false
  inline void UpdateLabel();

  /// @brief Method UpdateTouchKeyboardFromEditChanges, addr 0x32b9b2c, size 0x48, virtual false, abstract: false, final false
  inline void UpdateTouchKeyboardFromEditChanges();

  /// @brief Method Validate, addr 0x32b7e64, size 0x6d4, virtual false, abstract: false, final false
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

  constexpr ::UnityEngine::UI::__InputField__CharacterValidation const& __cordl_internal_get_m_CharacterValidation() const;

  constexpr ::UnityEngine::UI::__InputField__CharacterValidation& __cordl_internal_get_m_CharacterValidation();

  constexpr ::UnityEngine::UI::__InputField__ContentType const& __cordl_internal_get_m_ContentType() const;

  constexpr ::UnityEngine::UI::__InputField__ContentType& __cordl_internal_get_m_ContentType();

  constexpr ::ArrayW<::UnityEngine::UIVertex, ::Array<::UnityEngine::UIVertex>*> const& __cordl_internal_get_m_CursorVerts() const;

  constexpr ::ArrayW<::UnityEngine::UIVertex, ::Array<::UnityEngine::UIVertex>*>& __cordl_internal_get_m_CursorVerts();

  constexpr bool const& __cordl_internal_get_m_CustomCaretColor() const;

  constexpr bool& __cordl_internal_get_m_CustomCaretColor();

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_m_DragCoroutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_m_DragCoroutine() const;

  constexpr bool const& __cordl_internal_get_m_DragPositionOutOfBounds() const;

  constexpr bool& __cordl_internal_get_m_DragPositionOutOfBounds();

  constexpr int32_t const& __cordl_internal_get_m_DrawEnd() const;

  constexpr int32_t& __cordl_internal_get_m_DrawEnd();

  constexpr int32_t const& __cordl_internal_get_m_DrawStart() const;

  constexpr int32_t& __cordl_internal_get_m_DrawStart();

  constexpr bool const& __cordl_internal_get_m_HasDoneFocusTransition() const;

  constexpr bool& __cordl_internal_get_m_HasDoneFocusTransition();

  constexpr bool const& __cordl_internal_get_m_HideMobileInput() const;

  constexpr bool& __cordl_internal_get_m_HideMobileInput();

  constexpr ::UnityEngine::TextGenerator*& __cordl_internal_get_m_InputTextCache();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextGenerator*> const& __cordl_internal_get_m_InputTextCache() const;

  constexpr ::UnityEngine::UI::__InputField__InputType const& __cordl_internal_get_m_InputType() const;

  constexpr ::UnityEngine::UI::__InputField__InputType& __cordl_internal_get_m_InputType();

  constexpr bool const& __cordl_internal_get_m_IsCompositionActive() const;

  constexpr bool& __cordl_internal_get_m_IsCompositionActive();

  constexpr ::UnityEngine::TouchScreenKeyboard*& __cordl_internal_get_m_Keyboard();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TouchScreenKeyboard*> const& __cordl_internal_get_m_Keyboard() const;

  constexpr ::UnityEngine::TouchScreenKeyboardType const& __cordl_internal_get_m_KeyboardType() const;

  constexpr ::UnityEngine::TouchScreenKeyboardType& __cordl_internal_get_m_KeyboardType();

  constexpr ::UnityEngine::UI::__InputField__LineType const& __cordl_internal_get_m_LineType() const;

  constexpr ::UnityEngine::UI::__InputField__LineType& __cordl_internal_get_m_LineType();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_Mesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_Mesh();

  constexpr ::UnityEngine::UI::__InputField__EndEditEvent*& __cordl_internal_get_m_OnDidEndEdit();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::__InputField__EndEditEvent*> const& __cordl_internal_get_m_OnDidEndEdit() const;

  constexpr ::UnityEngine::UI::__InputField__SubmitEvent*& __cordl_internal_get_m_OnSubmit();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::__InputField__SubmitEvent*> const& __cordl_internal_get_m_OnSubmit() const;

  constexpr ::UnityEngine::UI::__InputField__OnValidateInput*& __cordl_internal_get_m_OnValidateInput();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::__InputField__OnValidateInput*> const& __cordl_internal_get_m_OnValidateInput() const;

  constexpr ::UnityEngine::UI::__InputField__OnChangeEvent*& __cordl_internal_get_m_OnValueChanged();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::__InputField__OnChangeEvent*> const& __cordl_internal_get_m_OnValueChanged() const;

  constexpr ::StringW const& __cordl_internal_get_m_OriginalText() const;

  constexpr ::StringW& __cordl_internal_get_m_OriginalText();

  constexpr ::UnityW<::UnityEngine::UI::Graphic> const& __cordl_internal_get_m_Placeholder() const;

  constexpr ::UnityW<::UnityEngine::UI::Graphic>& __cordl_internal_get_m_Placeholder();

  constexpr bool const& __cordl_internal_get_m_PreventFontCallback() const;

  constexpr bool& __cordl_internal_get_m_PreventFontCallback();

  constexpr ::UnityEngine::Event*& __cordl_internal_get_m_ProcessingEvent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Event*> const& __cordl_internal_get_m_ProcessingEvent() const;

  constexpr bool const& __cordl_internal_get_m_ReadOnly() const;

  constexpr bool& __cordl_internal_get_m_ReadOnly();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_m_SelectionColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_m_SelectionColor();

  constexpr bool const& __cordl_internal_get_m_ShouldActivateNextUpdate() const;

  constexpr bool& __cordl_internal_get_m_ShouldActivateNextUpdate();

  constexpr bool const& __cordl_internal_get_m_ShouldActivateOnSelect() const;

  constexpr bool& __cordl_internal_get_m_ShouldActivateOnSelect();

  constexpr ::StringW const& __cordl_internal_get_m_Text() const;

  constexpr ::StringW& __cordl_internal_get_m_Text();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_m_TextComponent() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_m_TextComponent();

  constexpr bool const& __cordl_internal_get_m_TouchKeyboardAllowsInPlaceEditing() const;

  constexpr bool& __cordl_internal_get_m_TouchKeyboardAllowsInPlaceEditing();

  constexpr bool const& __cordl_internal_get_m_UpdateDrag() const;

  constexpr bool& __cordl_internal_get_m_UpdateDrag();

  constexpr ::UnityEngine::WaitForSecondsRealtime*& __cordl_internal_get_m_WaitForSecondsRealtime();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::WaitForSecondsRealtime*> const& __cordl_internal_get_m_WaitForSecondsRealtime() const;

  constexpr bool const& __cordl_internal_get_m_WasCanceled() const;

  constexpr bool& __cordl_internal_get_m_WasCanceled();

  constexpr void __cordl_internal_set_caretRectTrans(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_m_AllowInput(bool value);

  constexpr void __cordl_internal_set_m_AsteriskChar(char16_t value);

  constexpr void __cordl_internal_set_m_BlinkCoroutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_m_BlinkStartTime(float_t value);

  constexpr void __cordl_internal_set_m_CachedInputRenderer(::UnityW<::UnityEngine::CanvasRenderer> value);

  constexpr void __cordl_internal_set_m_CaretBlinkRate(float_t value);

  constexpr void __cordl_internal_set_m_CaretColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_m_CaretPosition(int32_t value);

  constexpr void __cordl_internal_set_m_CaretSelectPosition(int32_t value);

  constexpr void __cordl_internal_set_m_CaretVisible(bool value);

  constexpr void __cordl_internal_set_m_CaretWidth(int32_t value);

  constexpr void __cordl_internal_set_m_CharacterLimit(int32_t value);

  constexpr void __cordl_internal_set_m_CharacterValidation(::UnityEngine::UI::__InputField__CharacterValidation value);

  constexpr void __cordl_internal_set_m_ContentType(::UnityEngine::UI::__InputField__ContentType value);

  constexpr void __cordl_internal_set_m_CursorVerts(::ArrayW<::UnityEngine::UIVertex, ::Array<::UnityEngine::UIVertex>*> value);

  constexpr void __cordl_internal_set_m_CustomCaretColor(bool value);

  constexpr void __cordl_internal_set_m_DragCoroutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_m_DragPositionOutOfBounds(bool value);

  constexpr void __cordl_internal_set_m_DrawEnd(int32_t value);

  constexpr void __cordl_internal_set_m_DrawStart(int32_t value);

  constexpr void __cordl_internal_set_m_HasDoneFocusTransition(bool value);

  constexpr void __cordl_internal_set_m_HideMobileInput(bool value);

  constexpr void __cordl_internal_set_m_InputTextCache(::UnityEngine::TextGenerator* value);

  constexpr void __cordl_internal_set_m_InputType(::UnityEngine::UI::__InputField__InputType value);

  constexpr void __cordl_internal_set_m_IsCompositionActive(bool value);

  constexpr void __cordl_internal_set_m_Keyboard(::UnityEngine::TouchScreenKeyboard* value);

  constexpr void __cordl_internal_set_m_KeyboardType(::UnityEngine::TouchScreenKeyboardType value);

  constexpr void __cordl_internal_set_m_LineType(::UnityEngine::UI::__InputField__LineType value);

  constexpr void __cordl_internal_set_m_Mesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_m_OnDidEndEdit(::UnityEngine::UI::__InputField__EndEditEvent* value);

  constexpr void __cordl_internal_set_m_OnSubmit(::UnityEngine::UI::__InputField__SubmitEvent* value);

  constexpr void __cordl_internal_set_m_OnValidateInput(::UnityEngine::UI::__InputField__OnValidateInput* value);

  constexpr void __cordl_internal_set_m_OnValueChanged(::UnityEngine::UI::__InputField__OnChangeEvent* value);

  constexpr void __cordl_internal_set_m_OriginalText(::StringW value);

  constexpr void __cordl_internal_set_m_Placeholder(::UnityW<::UnityEngine::UI::Graphic> value);

  constexpr void __cordl_internal_set_m_PreventFontCallback(bool value);

  constexpr void __cordl_internal_set_m_ProcessingEvent(::UnityEngine::Event* value);

  constexpr void __cordl_internal_set_m_ReadOnly(bool value);

  constexpr void __cordl_internal_set_m_SelectionColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_m_ShouldActivateNextUpdate(bool value);

  constexpr void __cordl_internal_set_m_ShouldActivateOnSelect(bool value);

  constexpr void __cordl_internal_set_m_Text(::StringW value);

  constexpr void __cordl_internal_set_m_TextComponent(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_m_TouchKeyboardAllowsInPlaceEditing(bool value);

  constexpr void __cordl_internal_set_m_UpdateDrag(bool value);

  constexpr void __cordl_internal_set_m_WaitForSecondsRealtime(::UnityEngine::WaitForSecondsRealtime* value);

  constexpr void __cordl_internal_set_m_WasCanceled(bool value);

  /// @brief Method .ctor, addr 0x32b4670, size 0x198, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_kSeparators();

  static inline bool getStaticF_s_IsQuestDevice();

  static inline bool getStaticF_s_IsQuestDeviceEvaluated();

  /// @brief Method get_asteriskChar, addr 0x32b6024, size 0x8, virtual false, abstract: false, final false
  inline char16_t get_asteriskChar();

  /// @brief Method get_cachedInputTextGenerator, addr 0x32b4a1c, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::TextGenerator* get_cachedInputTextGenerator();

  /// @brief Method get_caretBlinkRate, addr 0x32b5400, size 0x8, virtual false, abstract: false, final false
  inline float_t get_caretBlinkRate();

  /// @brief Method get_caretColor, addr 0x32b58b8, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_caretColor();

  /// @brief Method get_caretPosition, addr 0x32b61c8, size 0x24, virtual false, abstract: false, final false
  inline int32_t get_caretPosition();

  /// @brief Method get_caretPositionInternal, addr 0x32b60e0, size 0x24, virtual false, abstract: false, final false
  inline int32_t get_caretPositionInternal();

  /// @brief Method get_caretSelectPositionInternal, addr 0x32b613c, size 0x24, virtual false, abstract: false, final false
  inline int32_t get_caretSelectPositionInternal();

  /// @brief Method get_caretWidth, addr 0x32b54d8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_caretWidth();

  /// @brief Method get_characterLimit, addr 0x32b5b18, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_characterLimit();

  /// @brief Method get_characterValidation, addr 0x32b5f70, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::__InputField__CharacterValidation get_characterValidation();

  /// @brief Method get_clipboard, addr 0x32b6d40, size 0x8, virtual false, abstract: false, final false
  static inline ::StringW get_clipboard();

  /// @brief Method get_compositionString, addr 0x32b45dc, size 0x94, virtual false, abstract: false, final false
  inline ::StringW get_compositionString();

  /// @brief Method get_contentType, addr 0x32b5be0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::__InputField__ContentType get_contentType();

  /// @brief Method get_customCaretColor, addr 0x32b5928, size 0x8, virtual false, abstract: false, final false
  inline bool get_customCaretColor();

  /// @brief Method get_flexibleHeight, addr 0x32bdd8c, size 0x8, virtual true, abstract: false, final false
  inline float_t get_flexibleHeight();

  /// @brief Method get_flexibleWidth, addr 0x32bdc20, size 0x8, virtual true, abstract: false, final false
  inline float_t get_flexibleWidth();

  /// @brief Method get_hasSelection, addr 0x32b6198, size 0x30, virtual false, abstract: false, final false
  inline bool get_hasSelection();

  /// @brief Method get_input, addr 0x32b44cc, size 0x110, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::EventSystems::BaseInput> get_input();

  /// @brief Method get_inputType, addr 0x32b5e38, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::__InputField__InputType get_inputType();

  /// @brief Method get_isFocused, addr 0x32b53f8, size 0x8, virtual false, abstract: false, final false
  inline bool get_isFocused();

  /// @brief Method get_keyboardType, addr 0x32b5ee4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::TouchScreenKeyboardType get_keyboardType();

  /// @brief Method get_layoutPriority, addr 0x32bdd94, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_layoutPriority();

  /// @brief Method get_lineType, addr 0x32b5d18, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::__InputField__LineType get_lineType();

  /// @brief Method get_mesh, addr 0x32b4974, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_mesh();

  /// @brief Method get_minHeight, addr 0x32bdc28, size 0x8, virtual true, abstract: false, final false
  inline float_t get_minHeight();

  /// @brief Method get_minWidth, addr 0x32bdabc, size 0x8, virtual true, abstract: false, final false
  inline float_t get_minWidth();

  /// @brief Method get_multiLine, addr 0x32b6010, size 0x14, virtual false, abstract: false, final false
  inline bool get_multiLine();

  /// @brief Method get_onEndEdit, addr 0x32b598c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::__InputField__EndEditEvent* get_onEndEdit();

  /// @brief Method get_onSubmit, addr 0x32b59ec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::__InputField__SubmitEvent* get_onSubmit();

  /// @brief Method get_onValidateInput, addr 0x32b5ab8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::__InputField__OnValidateInput* get_onValidateInput();

  /// @brief Method get_onValueChange, addr 0x32b5a4c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::__InputField__OnChangeEvent* get_onValueChange();

  /// @brief Method get_onValueChanged, addr 0x32b5ab0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::__InputField__OnChangeEvent* get_onValueChanged();

  /// @brief Method get_placeholder, addr 0x32b5858, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Graphic> get_placeholder();

  /// @brief Method get_preferredHeight, addr 0x32bdc30, size 0x15c, virtual true, abstract: false, final false
  inline float_t get_preferredHeight();

  /// @brief Method get_preferredWidth, addr 0x32bdac4, size 0x15c, virtual true, abstract: false, final false
  inline float_t get_preferredWidth();

  /// @brief Method get_readOnly, addr 0x32b5ffc, size 0x8, virtual false, abstract: false, final false
  inline bool get_readOnly();

  /// @brief Method get_selectionAnchorPosition, addr 0x32b62cc, size 0x24, virtual false, abstract: false, final false
  inline int32_t get_selectionAnchorPosition();

  /// @brief Method get_selectionColor, addr 0x32b594c, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_selectionColor();

  /// @brief Method get_selectionFocusPosition, addr 0x32b62f0, size 0x24, virtual false, abstract: false, final false
  inline int32_t get_selectionFocusPosition();

  /// @brief Method get_shouldActivateOnSelect, addr 0x32b4b34, size 0x2c, virtual true, abstract: false, final false
  inline bool get_shouldActivateOnSelect();

  /// @brief Method get_shouldHideMobileInput, addr 0x32b4ae0, size 0x48, virtual false, abstract: false, final false
  inline bool get_shouldHideMobileInput();

  /// @brief Method get_text, addr 0x32b4b60, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Method get_textComponent, addr 0x32b55ac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Text> get_textComponent();

  /// @brief Method get_touchScreenKeyboard, addr 0x32b5edc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::TouchScreenKeyboard* get_touchScreenKeyboard();

  /// @brief Method get_wasCanceled, addr 0x32b60a0, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Convert to "::UnityEngine::EventSystems::ISubmitHandler"
  constexpr ::UnityEngine::EventSystems::ISubmitHandler* i___UnityEngine__EventSystems__ISubmitHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IUpdateSelectedHandler"
  constexpr ::UnityEngine::EventSystems::IUpdateSelectedHandler* i___UnityEngine__EventSystems__IUpdateSelectedHandler() noexcept;

  /// @brief Convert to "::UnityEngine::UI::ICanvasElement"
  constexpr ::UnityEngine::UI::ICanvasElement* i___UnityEngine__UI__ICanvasElement() noexcept;

  /// @brief Convert to "::UnityEngine::UI::ILayoutElement"
  constexpr ::UnityEngine::UI::ILayoutElement* i___UnityEngine__UI__ILayoutElement() noexcept;

  static inline void setStaticF_kSeparators(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_s_IsQuestDevice(bool value);

  static inline void setStaticF_s_IsQuestDeviceEvaluated(bool value);

  /// @brief Method set_asteriskChar, addr 0x32b602c, size 0x74, virtual false, abstract: false, final false
  inline void set_asteriskChar(char16_t value);

  /// @brief Method set_caretBlinkRate, addr 0x32b5408, size 0x7c, virtual false, abstract: false, final false
  inline void set_caretBlinkRate(float_t value);

  /// @brief Method set_caretColor, addr 0x32b58fc, size 0x2c, virtual false, abstract: false, final false
  inline void set_caretColor(::UnityEngine::Color value);

  /// @brief Method set_caretPosition, addr 0x32b61ec, size 0x28, virtual false, abstract: false, final false
  inline void set_caretPosition(int32_t value);

  /// @brief Method set_caretPositionInternal, addr 0x32b6104, size 0x38, virtual false, abstract: false, final false
  inline void set_caretPositionInternal(int32_t value);

  /// @brief Method set_caretSelectPositionInternal, addr 0x32b6160, size 0x38, virtual false, abstract: false, final false
  inline void set_caretSelectPositionInternal(int32_t value);

  /// @brief Method set_caretWidth, addr 0x32b54e0, size 0x74, virtual false, abstract: false, final false
  inline void set_caretWidth(int32_t value);

  /// @brief Method set_characterLimit, addr 0x32b5b20, size 0xc0, virtual false, abstract: false, final false
  inline void set_characterLimit(int32_t value);

  /// @brief Method set_characterValidation, addr 0x32b5f78, size 0x84, virtual false, abstract: false, final false
  inline void set_characterValidation(::UnityEngine::UI::__InputField__CharacterValidation value);

  /// @brief Method set_clipboard, addr 0x32b6d48, size 0x8, virtual false, abstract: false, final false
  static inline void set_clipboard(::StringW value);

  /// @brief Method set_contentType, addr 0x32b5be8, size 0x74, virtual false, abstract: false, final false
  inline void set_contentType(::UnityEngine::UI::__InputField__ContentType value);

  /// @brief Method set_customCaretColor, addr 0x32b5930, size 0x1c, virtual false, abstract: false, final false
  inline void set_customCaretColor(bool value);

  /// @brief Method set_inputType, addr 0x32b5e40, size 0x84, virtual false, abstract: false, final false
  inline void set_inputType(::UnityEngine::UI::__InputField__InputType value);

  /// @brief Method set_keyboardType, addr 0x32b5eec, size 0x84, virtual false, abstract: false, final false
  inline void set_keyboardType(::UnityEngine::TouchScreenKeyboardType value);

  /// @brief Method set_lineType, addr 0x32b5d20, size 0xc0, virtual false, abstract: false, final false
  inline void set_lineType(::UnityEngine::UI::__InputField__LineType value);

  /// @brief Method set_onEndEdit, addr 0x32b5994, size 0x58, virtual false, abstract: false, final false
  inline void set_onEndEdit(::UnityEngine::UI::__InputField__EndEditEvent* value);

  /// @brief Method set_onSubmit, addr 0x32b59f4, size 0x58, virtual false, abstract: false, final false
  inline void set_onSubmit(::UnityEngine::UI::__InputField__SubmitEvent* value);

  /// @brief Method set_onValidateInput, addr 0x32b5ac0, size 0x58, virtual false, abstract: false, final false
  inline void set_onValidateInput(::UnityEngine::UI::__InputField__OnValidateInput* value);

  /// @brief Method set_onValueChange, addr 0x32b5a54, size 0x4, virtual false, abstract: false, final false
  inline void set_onValueChange(::UnityEngine::UI::__InputField__OnChangeEvent* value);

  /// @brief Method set_onValueChanged, addr 0x32b5a58, size 0x58, virtual false, abstract: false, final false
  inline void set_onValueChanged(::UnityEngine::UI::__InputField__OnChangeEvent* value);

  /// @brief Method set_placeholder, addr 0x32b5860, size 0x58, virtual false, abstract: false, final false
  inline void set_placeholder(::UnityEngine::UI::Graphic* value);

  /// @brief Method set_readOnly, addr 0x32b6004, size 0xc, virtual false, abstract: false, final false
  inline void set_readOnly(bool value);

  /// @brief Method set_selectionAnchorPosition, addr 0x32b6214, size 0x5c, virtual false, abstract: false, final false
  inline void set_selectionAnchorPosition(int32_t value);

  /// @brief Method set_selectionColor, addr 0x32b5960, size 0x2c, virtual false, abstract: false, final false
  inline void set_selectionColor(::UnityEngine::Color value);

  /// @brief Method set_selectionFocusPosition, addr 0x32b6270, size 0x5c, virtual false, abstract: false, final false
  inline void set_selectionFocusPosition(int32_t value);

  /// @brief Method set_shouldActivateOnSelect, addr 0x32b4b28, size 0xc, virtual true, abstract: false, final false
  inline void set_shouldActivateOnSelect(bool value);

  /// @brief Method set_shouldHideMobileInput, addr 0x32b4a88, size 0x58, virtual false, abstract: false, final false
  inline void set_shouldHideMobileInput(bool value);

  /// @brief Method set_text, addr 0x32b4b68, size 0x8, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

  /// @brief Method set_textComponent, addr 0x32b55b4, size 0x2a4, virtual false, abstract: false, final false
  inline void set_textComponent(::UnityEngine::UI::Text* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputField(InputField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputField(InputField const&) = delete;

  /// @brief Field m_Keyboard, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::TouchScreenKeyboard* ___m_Keyboard;

  /// @brief Field m_TextComponent, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___m_TextComponent;

  /// @brief Field m_Placeholder, offset: 0x108, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Graphic> ___m_Placeholder;

  /// @brief Field m_ContentType, offset: 0x110, size: 0x4, def value: None
  ::UnityEngine::UI::__InputField__ContentType ___m_ContentType;

  /// @brief Field m_InputType, offset: 0x114, size: 0x4, def value: None
  ::UnityEngine::UI::__InputField__InputType ___m_InputType;

  /// @brief Field m_AsteriskChar, offset: 0x118, size: 0x2, def value: None
  char16_t ___m_AsteriskChar;

  /// @brief Field m_KeyboardType, offset: 0x11c, size: 0x4, def value: None
  ::UnityEngine::TouchScreenKeyboardType ___m_KeyboardType;

  /// @brief Field m_LineType, offset: 0x120, size: 0x4, def value: None
  ::UnityEngine::UI::__InputField__LineType ___m_LineType;

  /// @brief Field m_HideMobileInput, offset: 0x124, size: 0x1, def value: None
  bool ___m_HideMobileInput;

  /// @brief Field m_CharacterValidation, offset: 0x128, size: 0x4, def value: None
  ::UnityEngine::UI::__InputField__CharacterValidation ___m_CharacterValidation;

  /// @brief Field m_CharacterLimit, offset: 0x12c, size: 0x4, def value: None
  int32_t ___m_CharacterLimit;

  /// @brief Field m_OnSubmit, offset: 0x130, size: 0x8, def value: None
  ::UnityEngine::UI::__InputField__SubmitEvent* ___m_OnSubmit;

  /// @brief Field m_OnDidEndEdit, offset: 0x138, size: 0x8, def value: None
  ::UnityEngine::UI::__InputField__EndEditEvent* ___m_OnDidEndEdit;

  /// @brief Field m_OnValueChanged, offset: 0x140, size: 0x8, def value: None
  ::UnityEngine::UI::__InputField__OnChangeEvent* ___m_OnValueChanged;

  /// @brief Field m_OnValidateInput, offset: 0x148, size: 0x8, def value: None
  ::UnityEngine::UI::__InputField__OnValidateInput* ___m_OnValidateInput;

  /// @brief Field m_CaretColor, offset: 0x150, size: 0x10, def value: None
  ::UnityEngine::Color ___m_CaretColor;

  /// @brief Field m_CustomCaretColor, offset: 0x160, size: 0x1, def value: None
  bool ___m_CustomCaretColor;

  /// @brief Field m_SelectionColor, offset: 0x164, size: 0x10, def value: None
  ::UnityEngine::Color ___m_SelectionColor;

  /// @brief Field m_Text, offset: 0x178, size: 0x8, def value: None
  ::StringW ___m_Text;

  /// @brief Field m_CaretBlinkRate, offset: 0x180, size: 0x4, def value: None
  float_t ___m_CaretBlinkRate;

  /// @brief Field m_CaretWidth, offset: 0x184, size: 0x4, def value: None
  int32_t ___m_CaretWidth;

  /// @brief Field m_ReadOnly, offset: 0x188, size: 0x1, def value: None
  bool ___m_ReadOnly;

  /// @brief Field m_ShouldActivateOnSelect, offset: 0x189, size: 0x1, def value: None
  bool ___m_ShouldActivateOnSelect;

  /// @brief Field m_CaretPosition, offset: 0x18c, size: 0x4, def value: None
  int32_t ___m_CaretPosition;

  /// @brief Field m_CaretSelectPosition, offset: 0x190, size: 0x4, def value: None
  int32_t ___m_CaretSelectPosition;

  /// @brief Field caretRectTrans, offset: 0x198, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___caretRectTrans;

  /// @brief Field m_CursorVerts, offset: 0x1a0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIVertex, ::Array<::UnityEngine::UIVertex>*> ___m_CursorVerts;

  /// @brief Field m_InputTextCache, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::TextGenerator* ___m_InputTextCache;

  /// @brief Field m_CachedInputRenderer, offset: 0x1b0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasRenderer> ___m_CachedInputRenderer;

  /// @brief Field m_PreventFontCallback, offset: 0x1b8, size: 0x1, def value: None
  bool ___m_PreventFontCallback;

  /// @brief Field m_Mesh, offset: 0x1c0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___m_Mesh;

  /// @brief Field m_AllowInput, offset: 0x1c8, size: 0x1, def value: None
  bool ___m_AllowInput;

  /// @brief Field m_ShouldActivateNextUpdate, offset: 0x1c9, size: 0x1, def value: None
  bool ___m_ShouldActivateNextUpdate;

  /// @brief Field m_UpdateDrag, offset: 0x1ca, size: 0x1, def value: None
  bool ___m_UpdateDrag;

  /// @brief Field m_DragPositionOutOfBounds, offset: 0x1cb, size: 0x1, def value: None
  bool ___m_DragPositionOutOfBounds;

  /// @brief Field m_CaretVisible, offset: 0x1cc, size: 0x1, def value: None
  bool ___m_CaretVisible;

  /// @brief Field m_BlinkCoroutine, offset: 0x1d0, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___m_BlinkCoroutine;

  /// @brief Field m_BlinkStartTime, offset: 0x1d8, size: 0x4, def value: None
  float_t ___m_BlinkStartTime;

  /// @brief Field m_DrawStart, offset: 0x1dc, size: 0x4, def value: None
  int32_t ___m_DrawStart;

  /// @brief Field m_DrawEnd, offset: 0x1e0, size: 0x4, def value: None
  int32_t ___m_DrawEnd;

  /// @brief Field m_DragCoroutine, offset: 0x1e8, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___m_DragCoroutine;

  /// @brief Field m_OriginalText, offset: 0x1f0, size: 0x8, def value: None
  ::StringW ___m_OriginalText;

  /// @brief Field m_WasCanceled, offset: 0x1f8, size: 0x1, def value: None
  bool ___m_WasCanceled;

  /// @brief Field m_HasDoneFocusTransition, offset: 0x1f9, size: 0x1, def value: None
  bool ___m_HasDoneFocusTransition;

  /// @brief Field m_WaitForSecondsRealtime, offset: 0x200, size: 0x8, def value: None
  ::UnityEngine::WaitForSecondsRealtime* ___m_WaitForSecondsRealtime;

  /// @brief Field m_TouchKeyboardAllowsInPlaceEditing, offset: 0x208, size: 0x1, def value: None
  bool ___m_TouchKeyboardAllowsInPlaceEditing;

  /// @brief Field m_IsCompositionActive, offset: 0x209, size: 0x1, def value: None
  bool ___m_IsCompositionActive;

  /// @brief Field m_ProcessingEvent, offset: 0x210, size: 0x8, def value: None
  ::UnityEngine::Event* ___m_ProcessingEvent;

  /// @brief Field kEmailSpecialCharacters offset 0xffffffff size 0x8
  static constexpr ::ConstString kEmailSpecialCharacters{ u"!#$%&\'*+-/=?^_`{|}~" };

  /// @brief Field kHScrollSpeed offset 0xffffffff size 0x4
  static constexpr float_t kHScrollSpeed{ 0.05 };

  /// @brief Field kOculusQuestDeviceModel offset 0xffffffff size 0x8
  static constexpr ::ConstString kOculusQuestDeviceModel{ u"Oculus Quest" };

  /// @brief Field kVScrollSpeed offset 0xffffffff size 0x4
  static constexpr float_t kVScrollSpeed{ 0.1 };

  /// @brief Field k_MaxTextLength offset 0xffffffff size 0x4
  static constexpr int32_t k_MaxTextLength{ static_cast<int32_t>(0x3ffe) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::InputField, 0x218>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_Keyboard) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_TextComponent) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_Placeholder) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_ContentType) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_InputType) == 0x114, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_AsteriskChar) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_KeyboardType) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_LineType) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_HideMobileInput) == 0x124, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_CharacterValidation) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_CharacterLimit) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_OnSubmit) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_OnDidEndEdit) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_OnValueChanged) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_OnValidateInput) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_CaretColor) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_CustomCaretColor) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_SelectionColor) == 0x164, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_Text) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_CaretBlinkRate) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_CaretWidth) == 0x184, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_ReadOnly) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_ShouldActivateOnSelect) == 0x189, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_CaretPosition) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_CaretSelectPosition) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___caretRectTrans) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_CursorVerts) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_InputTextCache) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_CachedInputRenderer) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_PreventFontCallback) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_Mesh) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_AllowInput) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_ShouldActivateNextUpdate) == 0x1c9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_UpdateDrag) == 0x1ca, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_DragPositionOutOfBounds) == 0x1cb, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_CaretVisible) == 0x1cc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_BlinkCoroutine) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_BlinkStartTime) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_DrawStart) == 0x1dc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_DrawEnd) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_DragCoroutine) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_OriginalText) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_WasCanceled) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_HasDoneFocusTransition) == 0x1f9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_WaitForSecondsRealtime) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_TouchKeyboardAllowsInPlaceEditing) == 0x208, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_IsCompositionActive) == 0x209, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::InputField, ___m_ProcessingEvent) == 0x210, "Offset mismatch!");

} // namespace UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__InputField__CharacterValidation, "UnityEngine.UI", "InputField/CharacterValidation");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__InputField__ContentType, "UnityEngine.UI", "InputField/ContentType");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__InputField__EditState, "UnityEngine.UI", "InputField/EditState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__InputField__InputType, "UnityEngine.UI", "InputField/InputType");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__InputField__LineType, "UnityEngine.UI", "InputField/LineType");
NEED_NO_BOX(::UnityEngine::UI::InputField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::InputField*, "UnityEngine.UI", "InputField");
NEED_NO_BOX(::UnityEngine::UI::__InputField__EndEditEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__InputField__EndEditEvent*, "UnityEngine.UI", "InputField/EndEditEvent");
NEED_NO_BOX(::UnityEngine::UI::__InputField__OnChangeEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__InputField__OnChangeEvent*, "UnityEngine.UI", "InputField/OnChangeEvent");
NEED_NO_BOX(::UnityEngine::UI::__InputField__OnValidateInput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__InputField__OnValidateInput*, "UnityEngine.UI", "InputField/OnValidateInput");
NEED_NO_BOX(::UnityEngine::UI::__InputField__SubmitEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__InputField__SubmitEvent*, "UnityEngine.UI", "InputField/SubmitEvent");
NEED_NO_BOX(::UnityEngine::UI::__InputField___CaretBlink_d__172);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__InputField___CaretBlink_d__172*, "UnityEngine.UI", "InputField/<CaretBlink>d__172");
NEED_NO_BOX(::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194*, "UnityEngine.UI", "InputField/<MouseDragOutsideRect>d__194");
