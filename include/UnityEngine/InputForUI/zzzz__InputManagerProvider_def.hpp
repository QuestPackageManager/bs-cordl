#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/InputManagerProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputForUI/zzzz__PointerState_def.hpp"
#include "UnityEngine/zzzz__PenData_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputManagerProvider)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace Unity::IntegerTime {
struct DiscreteTime;
}
namespace Unity::IntegerTime {
struct RationalTime;
}
namespace UnityEngine::InputForUI {
struct EventModifiers;
}
namespace UnityEngine::InputForUI {
struct EventSource;
}
namespace UnityEngine::InputForUI {
class IEventProviderImpl;
}
namespace UnityEngine::InputForUI {
struct IMECompositionEvent;
}
namespace UnityEngine::InputForUI {
class InputEventPartialProvider;
}
namespace UnityEngine::InputForUI {
struct InputManagerProvider_ButtonEventsIterator;
}
namespace UnityEngine::InputForUI {
struct InputManagerProvider_Configuration;
}
namespace UnityEngine::InputForUI {
class InputManagerProvider_IInput;
}
namespace UnityEngine::InputForUI {
class InputManagerProvider_ITime;
}
namespace UnityEngine::InputForUI {
class InputManagerProvider_Input;
}
namespace UnityEngine::InputForUI {
class InputManagerProvider_Time;
}
namespace UnityEngine::InputForUI {
class NavigationEventRepeatHelper;
}
namespace UnityEngine::InputForUI {
struct PointerEvent_Button;
}
namespace UnityEngine {
struct KeyCode;
}
namespace UnityEngine {
struct PenData;
}
namespace UnityEngine {
struct PenStatus;
}
namespace UnityEngine {
struct Touch;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::InputForUI {
class InputManagerProvider;
}
namespace UnityEngine::InputForUI {
class InputManagerProvider_IInput;
}
namespace UnityEngine::InputForUI {
class InputManagerProvider_ITime;
}
namespace UnityEngine::InputForUI {
class InputManagerProvider_Input;
}
namespace UnityEngine::InputForUI {
class InputManagerProvider_Time;
}
namespace UnityEngine::InputForUI {
struct InputManagerProvider_ButtonEventsIterator;
}
namespace UnityEngine::InputForUI {
struct InputManagerProvider_Configuration;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputForUI::InputManagerProvider);
MARK_REF_PTR_T(::UnityEngine::InputForUI::InputManagerProvider_IInput);
MARK_REF_PTR_T(::UnityEngine::InputForUI::InputManagerProvider_ITime);
MARK_REF_PTR_T(::UnityEngine::InputForUI::InputManagerProvider_Input);
MARK_REF_PTR_T(::UnityEngine::InputForUI::InputManagerProvider_Time);
MARK_VAL_T(::UnityEngine::InputForUI::InputManagerProvider_ButtonEventsIterator);
MARK_VAL_T(::UnityEngine::InputForUI::InputManagerProvider_Configuration);
// Dependencies
namespace UnityEngine::InputForUI {
// Is value type: true
// CS Name: UnityEngine.InputForUI.InputManagerProvider/ButtonEventsIterator
struct CORDL_TYPE InputManagerProvider_ButtonEventsIterator {
public:
  // Declarations
  __declspec(property(get = get_Current)) bool Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Method FromState, addr 0x692bdb4, size 0x20, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputForUI::InputManagerProvider_ButtonEventsIterator FromState(bool previous, bool down, bool up, bool current);

  /// @brief Method MoveNext, addr 0x692bebc, size 0x34, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x692c9c8, size 0xc, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x692c9d4, size 0x2c, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method get_Current, addr 0x692bdd4, size 0x10, virtual false, abstract: false, final false
  inline bool get_Current();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputManagerProvider_ButtonEventsIterator();

  // Ctor Parameters [CppParam { name: "_mask", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_bit", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InputManagerProvider_ButtonEventsIterator(uint32_t _mask, int32_t _bit) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21610 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field _mask, offset: 0x0, size: 0x4, def value: None
  uint32_t _mask;

  /// @brief Field _bit, offset: 0x4, size: 0x4, def value: None
  int32_t _bit;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputForUI::InputManagerProvider_ButtonEventsIterator, _mask) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::InputManagerProvider_ButtonEventsIterator, _bit) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputForUI::InputManagerProvider_ButtonEventsIterator, 0x8>, "Size mismatch!");

} // namespace UnityEngine::InputForUI
// Dependencies
namespace UnityEngine::InputForUI {
// Is value type: true
// CS Name: UnityEngine.InputForUI.InputManagerProvider/Configuration
struct CORDL_TYPE InputManagerProvider_Configuration {
public:
  // Declarations
  /// @brief Method GetDefaultConfiguration, addr 0x692968c, size 0xec, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputForUI::InputManagerProvider_Configuration GetDefaultConfiguration();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputManagerProvider_Configuration();

  // Ctor Parameters [CppParam { name: "HorizontalAxis", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "VerticalAxis", ty: "::StringW", modifiers: "", def_value: None }, CppParam
  // { name: "SubmitButton", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "CancelButton", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "NavigateNextButton", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "NavigatePreviousButton", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "InputActionsPerSecond", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "RepeatDelay", ty: "float_t", modifiers: "", def_value: None }]
  constexpr InputManagerProvider_Configuration(::StringW HorizontalAxis, ::StringW VerticalAxis, ::StringW SubmitButton, ::StringW CancelButton, ::StringW NavigateNextButton,
                                               ::StringW NavigatePreviousButton, float_t InputActionsPerSecond, float_t RepeatDelay) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21611 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field HorizontalAxis, offset: 0x0, size: 0x8, def value: None
  ::StringW HorizontalAxis;

  /// @brief Field VerticalAxis, offset: 0x8, size: 0x8, def value: None
  ::StringW VerticalAxis;

  /// @brief Field SubmitButton, offset: 0x10, size: 0x8, def value: None
  ::StringW SubmitButton;

  /// @brief Field CancelButton, offset: 0x18, size: 0x8, def value: None
  ::StringW CancelButton;

  /// @brief Field NavigateNextButton, offset: 0x20, size: 0x8, def value: None
  ::StringW NavigateNextButton;

  /// @brief Field NavigatePreviousButton, offset: 0x28, size: 0x8, def value: None
  ::StringW NavigatePreviousButton;

  /// @brief Field InputActionsPerSecond, offset: 0x30, size: 0x4, def value: None
  float_t InputActionsPerSecond;

  /// @brief Field RepeatDelay, offset: 0x34, size: 0x4, def value: None
  float_t RepeatDelay;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputForUI::InputManagerProvider_Configuration, HorizontalAxis) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::InputManagerProvider_Configuration, VerticalAxis) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::InputManagerProvider_Configuration, SubmitButton) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::InputManagerProvider_Configuration, CancelButton) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::InputManagerProvider_Configuration, NavigateNextButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::InputManagerProvider_Configuration, NavigatePreviousButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::InputManagerProvider_Configuration, InputActionsPerSecond) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::InputManagerProvider_Configuration, RepeatDelay) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputForUI::InputManagerProvider_Configuration, 0x38>, "Size mismatch!");

} // namespace UnityEngine::InputForUI
// Dependencies
namespace UnityEngine::InputForUI {
// Is value type: false
// CS Name: UnityEngine.InputForUI.InputManagerProvider/IInput
class CORDL_TYPE InputManagerProvider_IInput {
public:
  // Declarations
  __declspec(property(get = get_compositionString)) ::StringW compositionString;

  __declspec(property(get = get_mousePosition)) ::UnityEngine::Vector3 mousePosition;

  __declspec(property(get = get_mousePresent)) bool mousePresent;

  __declspec(property(get = get_mouseScrollDelta)) ::UnityEngine::Vector2 mouseScrollDelta;

  __declspec(property(get = get_touchCount)) int32_t touchCount;

  __declspec(property(get = get_touchSupported)) bool touchSupported;

  /// @brief Method GetAxisRaw, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t GetAxisRaw(::StringW axis);

  /// @brief Method GetButtonDown, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool GetButtonDown(::StringW button);

  /// @brief Method GetKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool GetKey(::UnityEngine::KeyCode keyCode);

  /// @brief Method GetLastPenContactEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::PenData GetLastPenContactEvent();

  /// @brief Method GetMouseButton, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool GetMouseButton(int32_t button);

  /// @brief Method GetMouseButtonDown, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool GetMouseButtonDown(int32_t button);

  /// @brief Method GetMouseButtonUp, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool GetMouseButtonUp(int32_t button);

  /// @brief Method GetTouch, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Touch GetTouch(int32_t index);

  /// @brief Method get_compositionString, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_compositionString();

  /// @brief Method get_mousePosition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 get_mousePosition();

  /// @brief Method get_mousePresent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_mousePresent();

  /// @brief Method get_mouseScrollDelta, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 get_mouseScrollDelta();

  /// @brief Method get_touchCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_touchCount();

  /// @brief Method get_touchSupported, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_touchSupported();

  // Ctor Parameters [CppParam { name: "", ty: "InputManagerProvider_IInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputManagerProvider_IInput(InputManagerProvider_IInput const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21612 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputForUI
// Dependencies System.Object
namespace UnityEngine::InputForUI {
// Is value type: false
// CS Name: UnityEngine.InputForUI.InputManagerProvider/Input
class CORDL_TYPE InputManagerProvider_Input : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_compositionString)) ::StringW compositionString;

  __declspec(property(get = get_mousePosition)) ::UnityEngine::Vector3 mousePosition;

  __declspec(property(get = get_mousePresent)) bool mousePresent;

  __declspec(property(get = get_mouseScrollDelta)) ::UnityEngine::Vector2 mouseScrollDelta;

  __declspec(property(get = get_touchCount)) int32_t touchCount;

  __declspec(property(get = get_touchSupported)) bool touchSupported;

  /// @brief Convert operator to "::UnityEngine::InputForUI::InputManagerProvider_IInput"
  constexpr operator ::UnityEngine::InputForUI::InputManagerProvider_IInput*() noexcept;

  /// @brief Method GetAxisRaw, addr 0x692ca4c, size 0x8, virtual true, abstract: false, final true
  inline float_t GetAxisRaw(::StringW axis);

  /// @brief Method GetButtonDown, addr 0x692ca44, size 0x8, virtual true, abstract: false, final true
  inline bool GetButtonDown(::StringW button);

  /// @brief Method GetKey, addr 0x692ca08, size 0x3c, virtual true, abstract: false, final true
  inline bool GetKey(::UnityEngine::KeyCode key);

  /// @brief Method GetLastPenContactEvent, addr 0x692ca54, size 0x6c, virtual true, abstract: false, final true
  inline ::UnityEngine::PenData GetLastPenContactEvent();

  /// @brief Method GetMouseButton, addr 0x692cb78, size 0x3c, virtual true, abstract: false, final true
  inline bool GetMouseButton(int32_t button);

  /// @brief Method GetMouseButtonDown, addr 0x692cbb4, size 0x3c, virtual true, abstract: false, final true
  inline bool GetMouseButtonDown(int32_t button);

  /// @brief Method GetMouseButtonUp, addr 0x692cbf0, size 0x3c, virtual true, abstract: false, final true
  inline bool GetMouseButtonUp(int32_t button);

  /// @brief Method GetTouch, addr 0x692caf0, size 0x80, virtual true, abstract: false, final true
  inline ::UnityEngine::Touch GetTouch(int32_t index);

  static inline ::UnityEngine::InputForUI::InputManagerProvider_Input* New_ctor();

  /// @brief Method .ctor, addr 0x6929778, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_compositionString, addr 0x692ca00, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_compositionString();

  /// @brief Method get_mousePosition, addr 0x692cc2c, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector3 get_mousePosition();

  /// @brief Method get_mousePresent, addr 0x692cb70, size 0x8, virtual true, abstract: false, final true
  inline bool get_mousePresent();

  /// @brief Method get_mouseScrollDelta, addr 0x692cc34, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector2 get_mouseScrollDelta();

  /// @brief Method get_touchCount, addr 0x692cac8, size 0x28, virtual true, abstract: false, final true
  inline int32_t get_touchCount();

  /// @brief Method get_touchSupported, addr 0x692cac0, size 0x8, virtual true, abstract: false, final true
  inline bool get_touchSupported();

  /// @brief Convert to "::UnityEngine::InputForUI::InputManagerProvider_IInput"
  constexpr ::UnityEngine::InputForUI::InputManagerProvider_IInput* i___UnityEngine__InputForUI__InputManagerProvider_IInput() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputManagerProvider_Input();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputManagerProvider_Input", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputManagerProvider_Input(InputManagerProvider_Input&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputManagerProvider_Input", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputManagerProvider_Input(InputManagerProvider_Input const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21613 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputForUI::InputManagerProvider_Input, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputForUI
// Dependencies
namespace UnityEngine::InputForUI {
// Is value type: false
// CS Name: UnityEngine.InputForUI.InputManagerProvider/ITime
class CORDL_TYPE InputManagerProvider_ITime {
public:
  // Declarations
  __declspec(property(get = get_timeAsRational)) ::Unity::IntegerTime::RationalTime timeAsRational;

  /// @brief Method get_timeAsRational, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Unity::IntegerTime::RationalTime get_timeAsRational();

  // Ctor Parameters [CppParam { name: "", ty: "InputManagerProvider_ITime", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputManagerProvider_ITime(InputManagerProvider_ITime const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21614 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputForUI
// Dependencies System.Object
namespace UnityEngine::InputForUI {
// Is value type: false
// CS Name: UnityEngine.InputForUI.InputManagerProvider/Time
class CORDL_TYPE InputManagerProvider_Time : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_timeAsRational)) ::Unity::IntegerTime::RationalTime timeAsRational;

  /// @brief Convert operator to "::UnityEngine::InputForUI::InputManagerProvider_ITime"
  constexpr operator ::UnityEngine::InputForUI::InputManagerProvider_ITime*() noexcept;

  static inline ::UnityEngine::InputForUI::InputManagerProvider_Time* New_ctor();

  /// @brief Method .ctor, addr 0x692977c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_timeAsRational, addr 0x692cc3c, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::IntegerTime::RationalTime get_timeAsRational();

  /// @brief Convert to "::UnityEngine::InputForUI::InputManagerProvider_ITime"
  constexpr ::UnityEngine::InputForUI::InputManagerProvider_ITime* i___UnityEngine__InputForUI__InputManagerProvider_ITime() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputManagerProvider_Time();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputManagerProvider_Time", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputManagerProvider_Time(InputManagerProvider_Time&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputManagerProvider_Time", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputManagerProvider_Time(InputManagerProvider_Time const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21615 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputForUI::InputManagerProvider_Time, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputForUI
// Dependencies System.Object, UnityEngine.InputForUI.InputManagerProvider::Configuration, UnityEngine.InputForUI.PointerState, UnityEngine.PenData, UnityEngine.Vector2
namespace UnityEngine::InputForUI {
// Is value type: false
// CS Name: UnityEngine.InputForUI.InputManagerProvider
class CORDL_TYPE InputManagerProvider : public ::System::Object {
public:
  // Declarations
  using ButtonEventsIterator = ::UnityEngine::InputForUI::InputManagerProvider_ButtonEventsIterator;

  using Configuration = ::UnityEngine::InputForUI::InputManagerProvider_Configuration;

  using IInput = ::UnityEngine::InputForUI::InputManagerProvider_IInput;

  using ITime = ::UnityEngine::InputForUI::InputManagerProvider_ITime;

  using Input = ::UnityEngine::InputForUI::InputManagerProvider_Input;

  using Time = ::UnityEngine::InputForUI::InputManagerProvider_Time;

  /// @brief Field _compositionString, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__compositionString, put = __cordl_internal_set__compositionString)) ::StringW _compositionString;

  /// @brief Field _configuration, offset 0x20, size 0x38
  __declspec(property(get = __cordl_internal_get__configuration, put = __cordl_internal_set__configuration)) ::UnityEngine::InputForUI::InputManagerProvider_Configuration _configuration;

  __declspec(property(get = get__eventModifiers)) ::UnityEngine::InputForUI::EventModifiers _eventModifiers;

  /// @brief Field _input, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__input, put = __cordl_internal_set__input)) ::UnityEngine::InputForUI::InputManagerProvider_IInput* _input;

  /// @brief Field _inputEventPartialProvider, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__inputEventPartialProvider,
                      put = __cordl_internal_set__inputEventPartialProvider)) ::UnityEngine::InputForUI::InputEventPartialProvider* _inputEventPartialProvider;

  /// @brief Field _isPenPresent, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get__isPenPresent, put = __cordl_internal_set__isPenPresent)) bool _isPenPresent;

  /// @brief Field _lastPenData, offset 0xd0, size 0x28
  __declspec(property(get = __cordl_internal_get__lastPenData, put = __cordl_internal_set__lastPenData)) ::UnityEngine::PenData _lastPenData;

  /// @brief Field _lastSeenPenPositionForDetection, offset 0x9c, size 0x8
  __declspec(property(get = __cordl_internal_get__lastSeenPenPositionForDetection,
                      put = __cordl_internal_set__lastSeenPenPositionForDetection)) ::UnityEngine::Vector2 _lastSeenPenPositionForDetection;

  /// @brief Field _mouseState, offset 0x70, size 0x28
  __declspec(property(get = __cordl_internal_get__mouseState, put = __cordl_internal_set__mouseState)) ::UnityEngine::InputForUI::PointerState _mouseState;

  /// @brief Field _navigationEventRepeatHelper, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__navigationEventRepeatHelper,
                      put = __cordl_internal_set__navigationEventRepeatHelper)) ::UnityEngine::InputForUI::NavigationEventRepeatHelper* _navigationEventRepeatHelper;

  /// @brief Field _penState, offset 0xa8, size 0x28
  __declspec(property(get = __cordl_internal_get__penState, put = __cordl_internal_set__penState)) ::UnityEngine::InputForUI::PointerState _penState;

  /// @brief Field _seenAtLeastOnePenPosition, offset 0x99, size 0x1
  __declspec(property(get = __cordl_internal_get__seenAtLeastOnePenPosition, put = __cordl_internal_set__seenAtLeastOnePenPosition)) bool _seenAtLeastOnePenPosition;

  /// @brief Field _time, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__time, put = __cordl_internal_set__time)) ::UnityEngine::InputForUI::InputManagerProvider_ITime* _time;

  /// @brief Field _touchFingerIdToFingerIndex, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__touchFingerIdToFingerIndex,
                      put = __cordl_internal_set__touchFingerIdToFingerIndex)) ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* _touchFingerIdToFingerIndex;

  /// @brief Field _touchNextFingerIndex, offset 0x100, size 0x4
  __declspec(property(get = __cordl_internal_get__touchNextFingerIndex, put = __cordl_internal_set__touchNextFingerIndex)) int32_t _touchNextFingerIndex;

  /// @brief Field _touchState, offset 0x108, size 0x28
  __declspec(property(get = __cordl_internal_get__touchState, put = __cordl_internal_set__touchState)) ::UnityEngine::InputForUI::PointerState _touchState;

  /// @brief Convert operator to "::UnityEngine::InputForUI::IEventProviderImpl"
  constexpr operator ::UnityEngine::InputForUI::IEventProviderImpl*() noexcept;

  /// @brief Method AzimuthAndAlitutudeToTilt, addr 0x692bca0, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 AzimuthAndAlitutudeToTilt(float_t altitude, float_t azimuth);

  /// @brief Method CheckIfIMEChanged, addr 0x692b360, size 0x1cc, virtual false, abstract: false, final false
  inline void CheckIfIMEChanged(::Unity::IntegerTime::DiscreteTime currentTime);

  /// @brief Method CheckMouseEvents, addr 0x692a9f8, size 0x638, virtual false, abstract: false, final false
  inline void CheckMouseEvents(::Unity::IntegerTime::DiscreteTime currentTime, bool muted);

  /// @brief Method CheckMouseScroll, addr 0x692b030, size 0x330, virtual false, abstract: false, final false
  inline void CheckMouseScroll(::Unity::IntegerTime::DiscreteTime currentTime);

  /// @brief Method CheckPenEvent, addr 0x692a644, size 0x3b4, virtual false, abstract: false, final false
  inline bool CheckPenEvent(::Unity::IntegerTime::DiscreteTime currentTime, ::ByRef<::UnityEngine::PenData> currentPenData);

  /// @brief Method CheckTouchEvents, addr 0x692a0d4, size 0x570, virtual false, abstract: false, final false
  inline bool CheckTouchEvents(::Unity::IntegerTime::DiscreteTime currentTime);

  /// @brief Method DetectPen, addr 0x6929fd4, size 0x100, virtual false, abstract: false, final false
  inline void DetectPen();

  /// @brief Method DirectionNavigation, addr 0x692b52c, size 0x1d4, virtual false, abstract: false, final false
  inline void DirectionNavigation(::Unity::IntegerTime::DiscreteTime currentTime);

  /// @brief Method GetEventSourceFromPressedKey, addr 0x692c030, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::InputForUI::EventSource GetEventSourceFromPressedKey();

  /// @brief Method Initialize, addr 0x69298d0, size 0x288, virtual true, abstract: false, final true
  inline void Initialize();

  /// @brief Method InputManagerGetAxisRawOrDefault, addr 0x692c62c, size 0x14c, virtual false, abstract: false, final false
  inline float_t InputManagerGetAxisRawOrDefault(::StringW axisName);

  /// @brief Method InputManagerGetButtonDownOrDefault, addr 0x692bef0, size 0x140, virtual false, abstract: false, final false
  inline bool InputManagerGetButtonDownOrDefault(::StringW axisName);

  /// @brief Method InputManagerJoystickWasPressed, addr 0x692c550, size 0xdc, virtual false, abstract: false, final false
  inline bool InputManagerJoystickWasPressed();

  /// @brief Method InputManagerKeyboardWasPressed, addr 0x692c474, size 0xdc, virtual false, abstract: false, final false
  inline bool InputManagerKeyboardWasPressed();

  /// @brief Method MultiDisplayBottomLeftToPanelPosition, addr 0x692ba38, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 MultiDisplayBottomLeftToPanelPosition(::UnityEngine::Vector2 position, ::ByRef<int32_t> targetDisplay);

  /// @brief Method MultiDisplayToLocalScreenPosition, addr 0x692c778, size 0x150, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 MultiDisplayToLocalScreenPosition(::UnityEngine::Vector2 position, ::ByRef<::System::Nullable_1<int32_t>> targetDisplay);

  static inline ::UnityEngine::InputForUI::InputManagerProvider* New_ctor();

  /// @brief Method NextPreviousNavigation, addr 0x692b8d8, size 0x160, virtual false, abstract: false, final false
  inline void NextPreviousNavigation(::Unity::IntegerTime::DiscreteTime currentTime);

  /// @brief Method OnFocusChanged, addr 0x692c2e8, size 0x18c, virtual true, abstract: false, final true
  inline void OnFocusChanged(bool focus);

  /// @brief Method PenStatusToButton, addr 0x692bd18, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputForUI::PointerEvent_Button PenStatusToButton(::UnityEngine::PenStatus status);

  /// @brief Method ReadCurrentNavigationMoveVector, addr 0x692c064, size 0xe0, virtual false, abstract: false, final false
  inline ::System::ValueTuple_2<::UnityEngine::Vector2, bool> ReadCurrentNavigationMoveVector();

  /// @brief Method ScreenBottomLeftToPanelDelta, addr 0x692baac, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 ScreenBottomLeftToPanelDelta(::UnityEngine::Vector2 delta);

  /// @brief Method ScreenBottomLeftToPanelPosition, addr 0x692c8c8, size 0x100, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 ScreenBottomLeftToPanelPosition(::UnityEngine::Vector2 position, int32_t targetDisplay);

  /// @brief Method Shutdown, addr 0x6929c30, size 0x4, virtual true, abstract: false, final true
  inline void Shutdown();

  /// @brief Method SubmitCancelNavigation, addr 0x692b700, size 0x1d8, virtual false, abstract: false, final false
  inline void SubmitCancelNavigation(::Unity::IntegerTime::DiscreteTime currentTime);

  /// @brief Method TiltToAltitude, addr 0x6925e1c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t TiltToAltitude(::UnityEngine::Vector2 tilt);

  /// @brief Method TiltToAzimuth, addr 0x6925d38, size 0xa8, virtual false, abstract: false, final false
  static inline float_t TiltToAzimuth(::UnityEngine::Vector2 tilt);

  /// @brief Method ToIMECompositionEvent, addr 0x692c2c4, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::InputForUI::IMECompositionEvent ToIMECompositionEvent(::Unity::IntegerTime::DiscreteTime currentTime, ::StringW compositionString);

  /// @brief Method Update, addr 0x6929c34, size 0x3a0, virtual true, abstract: false, final true
  inline void Update();

  constexpr ::StringW const& __cordl_internal_get__compositionString() const;

  constexpr ::StringW& __cordl_internal_get__compositionString();

  constexpr ::UnityEngine::InputForUI::InputManagerProvider_Configuration const& __cordl_internal_get__configuration() const;

  constexpr ::UnityEngine::InputForUI::InputManagerProvider_Configuration& __cordl_internal_get__configuration();

  constexpr ::UnityEngine::InputForUI::InputManagerProvider_IInput* const& __cordl_internal_get__input() const;

  constexpr ::UnityEngine::InputForUI::InputManagerProvider_IInput*& __cordl_internal_get__input();

  constexpr ::UnityEngine::InputForUI::InputEventPartialProvider* const& __cordl_internal_get__inputEventPartialProvider() const;

  constexpr ::UnityEngine::InputForUI::InputEventPartialProvider*& __cordl_internal_get__inputEventPartialProvider();

  constexpr bool const& __cordl_internal_get__isPenPresent() const;

  constexpr bool& __cordl_internal_get__isPenPresent();

  constexpr ::UnityEngine::PenData const& __cordl_internal_get__lastPenData() const;

  constexpr ::UnityEngine::PenData& __cordl_internal_get__lastPenData();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__lastSeenPenPositionForDetection() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__lastSeenPenPositionForDetection();

  constexpr ::UnityEngine::InputForUI::PointerState const& __cordl_internal_get__mouseState() const;

  constexpr ::UnityEngine::InputForUI::PointerState& __cordl_internal_get__mouseState();

  constexpr ::UnityEngine::InputForUI::NavigationEventRepeatHelper* const& __cordl_internal_get__navigationEventRepeatHelper() const;

  constexpr ::UnityEngine::InputForUI::NavigationEventRepeatHelper*& __cordl_internal_get__navigationEventRepeatHelper();

  constexpr ::UnityEngine::InputForUI::PointerState const& __cordl_internal_get__penState() const;

  constexpr ::UnityEngine::InputForUI::PointerState& __cordl_internal_get__penState();

  constexpr bool const& __cordl_internal_get__seenAtLeastOnePenPosition() const;

  constexpr bool& __cordl_internal_get__seenAtLeastOnePenPosition();

  constexpr ::UnityEngine::InputForUI::InputManagerProvider_ITime* const& __cordl_internal_get__time() const;

  constexpr ::UnityEngine::InputForUI::InputManagerProvider_ITime*& __cordl_internal_get__time();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* const& __cordl_internal_get__touchFingerIdToFingerIndex() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& __cordl_internal_get__touchFingerIdToFingerIndex();

  constexpr int32_t const& __cordl_internal_get__touchNextFingerIndex() const;

  constexpr int32_t& __cordl_internal_get__touchNextFingerIndex();

  constexpr ::UnityEngine::InputForUI::PointerState const& __cordl_internal_get__touchState() const;

  constexpr ::UnityEngine::InputForUI::PointerState& __cordl_internal_get__touchState();

  constexpr void __cordl_internal_set__compositionString(::StringW value);

  constexpr void __cordl_internal_set__configuration(::UnityEngine::InputForUI::InputManagerProvider_Configuration value);

  constexpr void __cordl_internal_set__input(::UnityEngine::InputForUI::InputManagerProvider_IInput* value);

  constexpr void __cordl_internal_set__inputEventPartialProvider(::UnityEngine::InputForUI::InputEventPartialProvider* value);

  constexpr void __cordl_internal_set__isPenPresent(bool value);

  constexpr void __cordl_internal_set__lastPenData(::UnityEngine::PenData value);

  constexpr void __cordl_internal_set__lastSeenPenPositionForDetection(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__mouseState(::UnityEngine::InputForUI::PointerState value);

  constexpr void __cordl_internal_set__navigationEventRepeatHelper(::UnityEngine::InputForUI::NavigationEventRepeatHelper* value);

  constexpr void __cordl_internal_set__penState(::UnityEngine::InputForUI::PointerState value);

  constexpr void __cordl_internal_set__seenAtLeastOnePenPosition(bool value);

  constexpr void __cordl_internal_set__time(::UnityEngine::InputForUI::InputManagerProvider_ITime* value);

  constexpr void __cordl_internal_set__touchFingerIdToFingerIndex(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value);

  constexpr void __cordl_internal_set__touchNextFingerIndex(int32_t value);

  constexpr void __cordl_internal_set__touchState(::UnityEngine::InputForUI::PointerState value);

  /// @brief Method .ctor, addr 0x6927e20, size 0x154, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get__eventModifiers, addr 0x6929674, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::InputForUI::EventModifiers get__eventModifiers();

  /// @brief Convert to "::UnityEngine::InputForUI::IEventProviderImpl"
  constexpr ::UnityEngine::InputForUI::IEventProviderImpl* i___UnityEngine__InputForUI__IEventProviderImpl() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputManagerProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputManagerProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputManagerProvider(InputManagerProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputManagerProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputManagerProvider(InputManagerProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21616 };

  /// @brief Field _inputEventPartialProvider, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::InputForUI::InputEventPartialProvider* ____inputEventPartialProvider;

  /// @brief Field _compositionString, offset: 0x18, size: 0x8, def value: None
  ::StringW ____compositionString;

  /// @brief Field _configuration, offset: 0x20, size: 0x38, def value: None
  ::UnityEngine::InputForUI::InputManagerProvider_Configuration ____configuration;

  /// @brief Field _input, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::InputForUI::InputManagerProvider_IInput* ____input;

  /// @brief Field _time, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::InputForUI::InputManagerProvider_ITime* ____time;

  /// @brief Field _navigationEventRepeatHelper, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::InputForUI::NavigationEventRepeatHelper* ____navigationEventRepeatHelper;

  /// @brief Field _mouseState, offset: 0x70, size: 0x28, def value: None
  ::UnityEngine::InputForUI::PointerState ____mouseState;

  /// @brief Field _isPenPresent, offset: 0x98, size: 0x1, def value: None
  bool ____isPenPresent;

  /// @brief Field _seenAtLeastOnePenPosition, offset: 0x99, size: 0x1, def value: None
  bool ____seenAtLeastOnePenPosition;

  /// @brief Field _lastSeenPenPositionForDetection, offset: 0x9c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____lastSeenPenPositionForDetection;

  /// @brief Field _penState, offset: 0xa8, size: 0x28, def value: None
  ::UnityEngine::InputForUI::PointerState ____penState;

  /// @brief Field _lastPenData, offset: 0xd0, size: 0x28, def value: None
  ::UnityEngine::PenData ____lastPenData;

  /// @brief Field _touchFingerIdToFingerIndex, offset: 0xf8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* ____touchFingerIdToFingerIndex;

  /// @brief Field _touchNextFingerIndex, offset: 0x100, size: 0x4, def value: None
  int32_t ____touchNextFingerIndex;

  /// @brief Field _touchState, offset: 0x108, size: 0x28, def value: None
  ::UnityEngine::InputForUI::PointerState ____touchState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputForUI::InputManagerProvider, ____inputEventPartialProvider) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::InputManagerProvider, ____compositionString) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::InputManagerProvider, ____configuration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::InputManagerProvider, ____input) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::InputManagerProvider, ____time) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::InputManagerProvider, ____navigationEventRepeatHelper) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::InputManagerProvider, ____mouseState) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::InputManagerProvider, ____isPenPresent) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::InputManagerProvider, ____seenAtLeastOnePenPosition) == 0x99, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::InputManagerProvider, ____lastSeenPenPositionForDetection) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::InputManagerProvider, ____penState) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::InputManagerProvider, ____lastPenData) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::InputManagerProvider, ____touchFingerIdToFingerIndex) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::InputManagerProvider, ____touchNextFingerIndex) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::InputManagerProvider, ____touchState) == 0x108, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputForUI::InputManagerProvider, 0x130>, "Size mismatch!");

} // namespace UnityEngine::InputForUI
NEED_NO_BOX(::UnityEngine::InputForUI::InputManagerProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::InputManagerProvider*, "UnityEngine.InputForUI", "InputManagerProvider");
NEED_NO_BOX(::UnityEngine::InputForUI::InputManagerProvider_IInput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::InputManagerProvider_IInput*, "UnityEngine.InputForUI", "InputManagerProvider/IInput");
NEED_NO_BOX(::UnityEngine::InputForUI::InputManagerProvider_ITime);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::InputManagerProvider_ITime*, "UnityEngine.InputForUI", "InputManagerProvider/ITime");
NEED_NO_BOX(::UnityEngine::InputForUI::InputManagerProvider_Input);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::InputManagerProvider_Input*, "UnityEngine.InputForUI", "InputManagerProvider/Input");
NEED_NO_BOX(::UnityEngine::InputForUI::InputManagerProvider_Time);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::InputManagerProvider_Time*, "UnityEngine.InputForUI", "InputManagerProvider/Time");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::InputManagerProvider_ButtonEventsIterator, "UnityEngine.InputForUI", "InputManagerProvider/ButtonEventsIterator");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::InputManagerProvider_Configuration, "UnityEngine.InputForUI", "InputManagerProvider/Configuration");
