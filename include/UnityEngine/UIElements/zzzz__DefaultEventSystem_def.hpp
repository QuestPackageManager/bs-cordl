#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DefaultEventSystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultEventSystem)
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T1, typename T2, typename T3, typename TResult> class Func_4;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace UnityEngine::UIElements {
class BaseRuntimePanel;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class __DefaultEventSystem__IInput;
}
namespace UnityEngine::UIElements {
class __DefaultEventSystem__Input;
}
namespace UnityEngine::UIElements {
class __DefaultEventSystem__NoInput;
}
namespace UnityEngine::UIElements {
struct __DefaultEventSystem__UpdateMode;
}
namespace UnityEngine::UIElements {
class __DefaultEventSystem____c;
}
namespace UnityEngine {
struct EventModifiers;
}
namespace UnityEngine {
class Event;
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
namespace UnityEngine::UIElements {
struct __DefaultEventSystem__UpdateMode;
}
namespace UnityEngine::UIElements {
class DefaultEventSystem;
}
namespace UnityEngine::UIElements {
class __DefaultEventSystem__IInput;
}
namespace UnityEngine::UIElements {
class __DefaultEventSystem__Input;
}
namespace UnityEngine::UIElements {
class __DefaultEventSystem__NoInput;
}
namespace UnityEngine::UIElements {
class __DefaultEventSystem____c;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::__DefaultEventSystem__UpdateMode);
MARK_REF_PTR_T(::UnityEngine::UIElements::DefaultEventSystem);
MARK_REF_PTR_T(::UnityEngine::UIElements::__DefaultEventSystem__IInput);
MARK_REF_PTR_T(::UnityEngine::UIElements::__DefaultEventSystem__Input);
MARK_REF_PTR_T(::UnityEngine::UIElements::__DefaultEventSystem__NoInput);
MARK_REF_PTR_T(::UnityEngine::UIElements::__DefaultEventSystem____c);
// Type: ::UpdateMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::DefaultEventSystem::UpdateMode
struct CORDL_TYPE __DefaultEventSystem__UpdateMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____DefaultEventSystem__UpdateMode_Unwrapped
  enum struct ____DefaultEventSystem__UpdateMode_Unwrapped : int32_t {
    __E_Always = static_cast<int32_t>(0x0),
    __E_IgnoreIfAppNotFocused = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____DefaultEventSystem__UpdateMode_Unwrapped() const noexcept {
    return static_cast<____DefaultEventSystem__UpdateMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DefaultEventSystem__UpdateMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DefaultEventSystem__UpdateMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Always value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::__DefaultEventSystem__UpdateMode const Always;

  /// @brief Field IgnoreIfAppNotFocused value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::__DefaultEventSystem__UpdateMode const IgnoreIfAppNotFocused;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__DefaultEventSystem__UpdateMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__DefaultEventSystem__UpdateMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::IInput
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::DefaultEventSystem::IInput*
class CORDL_TYPE __DefaultEventSystem__IInput {
public:
  // Declarations
  __declspec(property(get = get_mousePresent)) bool mousePresent;

  __declspec(property(get = get_touchCount)) int32_t touchCount;

  /// @brief Method GetAxisRaw, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t GetAxisRaw(::StringW axis);

  /// @brief Method GetButtonDown, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool GetButtonDown(::StringW button);

  /// @brief Method GetTouch, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Touch GetTouch(int32_t index);

  /// @brief Method get_mousePresent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_mousePresent();

  /// @brief Method get_touchCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_touchCount();

  // Ctor Parameters [CppParam { name: "", ty: "__DefaultEventSystem__IInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DefaultEventSystem__IInput(__DefaultEventSystem__IInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DefaultEventSystem__IInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DefaultEventSystem__IInput(__DefaultEventSystem__IInput const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Type: ::Input
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::DefaultEventSystem::Input*
class CORDL_TYPE __DefaultEventSystem__Input : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_mousePresent)) bool mousePresent;

  __declspec(property(get = get_touchCount)) int32_t touchCount;

  /// @brief Convert operator to "::UnityEngine::UIElements::__DefaultEventSystem__IInput"
  constexpr operator ::UnityEngine::UIElements::__DefaultEventSystem__IInput*() noexcept;

  /// @brief Method GetAxisRaw, addr 0x354bba8, size 0xc, virtual true, abstract: false, final true
  inline float_t GetAxisRaw(::StringW axis);

  /// @brief Method GetButtonDown, addr 0x354bb9c, size 0xc, virtual true, abstract: false, final true
  inline bool GetButtonDown(::StringW button);

  /// @brief Method GetTouch, addr 0x354bbbc, size 0x38, virtual true, abstract: false, final true
  inline ::UnityEngine::Touch GetTouch(int32_t index);

  static inline ::UnityEngine::UIElements::__DefaultEventSystem__Input* New_ctor();

  /// @brief Method .ctor, addr 0x354a474, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_mousePresent, addr 0x354bbf4, size 0x8, virtual true, abstract: false, final true
  inline bool get_mousePresent();

  /// @brief Method get_touchCount, addr 0x354bbb4, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_touchCount();

  /// @brief Convert to "::UnityEngine::UIElements::__DefaultEventSystem__IInput"
  constexpr ::UnityEngine::UIElements::__DefaultEventSystem__IInput* i___UnityEngine__UIElements____DefaultEventSystem__IInput() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DefaultEventSystem__Input();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DefaultEventSystem__Input", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DefaultEventSystem__Input(__DefaultEventSystem__Input&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DefaultEventSystem__Input", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DefaultEventSystem__Input(__DefaultEventSystem__Input const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__DefaultEventSystem__Input, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::NoInput
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::DefaultEventSystem::NoInput*
class CORDL_TYPE __DefaultEventSystem__NoInput : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_mousePresent)) bool mousePresent;

  __declspec(property(get = get_touchCount)) int32_t touchCount;

  /// @brief Convert operator to "::UnityEngine::UIElements::__DefaultEventSystem__IInput"
  constexpr operator ::UnityEngine::UIElements::__DefaultEventSystem__IInput*() noexcept;

  /// @brief Method GetAxisRaw, addr 0x354bc04, size 0x8, virtual true, abstract: false, final true
  inline float_t GetAxisRaw(::StringW axis);

  /// @brief Method GetButtonDown, addr 0x354bbfc, size 0x8, virtual true, abstract: false, final true
  inline bool GetButtonDown(::StringW button);

  /// @brief Method GetTouch, addr 0x354bc14, size 0x14, virtual true, abstract: false, final true
  inline ::UnityEngine::Touch GetTouch(int32_t index);

  static inline ::UnityEngine::UIElements::__DefaultEventSystem__NoInput* New_ctor();

  /// @brief Method .ctor, addr 0x354a47c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_mousePresent, addr 0x354bc28, size 0x8, virtual true, abstract: false, final true
  inline bool get_mousePresent();

  /// @brief Method get_touchCount, addr 0x354bc0c, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_touchCount();

  /// @brief Convert to "::UnityEngine::UIElements::__DefaultEventSystem__IInput"
  constexpr ::UnityEngine::UIElements::__DefaultEventSystem__IInput* i___UnityEngine__UIElements____DefaultEventSystem__IInput() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DefaultEventSystem__NoInput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DefaultEventSystem__NoInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DefaultEventSystem__NoInput(__DefaultEventSystem__NoInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DefaultEventSystem__NoInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DefaultEventSystem__NoInput(__DefaultEventSystem__NoInput const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__DefaultEventSystem__NoInput, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::DefaultEventSystem::<>c*
class CORDL_TYPE __DefaultEventSystem____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::UIElements::__DefaultEventSystem____c* __9;

  /// @brief Field <>9__23_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__23_0, put = setStaticF___9__23_0))::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* __9__23_0;

  /// @brief Field <>9__23_1, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF___9__23_1,
      put = setStaticF___9__23_1))::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* __9__23_1;

  /// @brief Field <>9__23_2, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF___9__23_2,
      put = setStaticF___9__23_2))::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* __9__23_2;

  /// @brief Field <>9__24_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__24_0, put = setStaticF___9__24_0))::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* __9__24_0;

  /// @brief Field <>9__24_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__24_1, put = setStaticF___9__24_1))::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* __9__24_1;

  /// @brief Field <>9__24_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__24_2, put = setStaticF___9__24_2))::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* __9__24_2;

  /// @brief Field <>9__30_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__30_0,
                             put = setStaticF___9__30_0))::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Touch, ::UnityEngine::UIElements::EventBase*>* __9__30_0;

  static inline ::UnityEngine::UIElements::__DefaultEventSystem____c* New_ctor();

  /// @brief Method <ProcessTouchEvents>b__30_0, addr 0x354bf28, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _ProcessTouchEvents_b__30_0(::UnityEngine::Vector3 panelPosition, ::UnityEngine::Vector3 panelDelta, ::UnityEngine::Touch _touch);

  /// @brief Method <SendIMGUIEvents>b__23_0, addr 0x354bc9c, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _SendIMGUIEvents_b__23_0(::UnityEngine::UIElements::DefaultEventSystem* self);

  /// @brief Method <SendIMGUIEvents>b__23_1, addr 0x354bd00, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _SendIMGUIEvents_b__23_1(::UnityEngine::Vector3 panelPosition, ::UnityEngine::Vector3 panelDelta, ::UnityEngine::UIElements::DefaultEventSystem* self);

  /// @brief Method <SendIMGUIEvents>b__23_2, addr 0x354bd8c, size 0xb4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _SendIMGUIEvents_b__23_2(::UnityEngine::Vector3 panelPosition, ::UnityEngine::Vector3 panelDelta, ::UnityEngine::UIElements::DefaultEventSystem* self);

  /// @brief Method <SendInputEvents>b__24_0, addr 0x354be40, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _SendInputEvents_b__24_0(::UnityEngine::UIElements::DefaultEventSystem* self);

  /// @brief Method <SendInputEvents>b__24_1, addr 0x354be60, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _SendInputEvents_b__24_1(::UnityEngine::UIElements::DefaultEventSystem* self);

  /// @brief Method <SendInputEvents>b__24_2, addr 0x354bec4, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _SendInputEvents_b__24_2(::UnityEngine::UIElements::DefaultEventSystem* self);

  /// @brief Method <.cctor>b__41_0, addr 0x354bff4, size 0x8, virtual false, abstract: false, final false
  inline bool __cctor_b__41_0();

  /// @brief Method .ctor, addr 0x354bc94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__DefaultEventSystem____c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* getStaticF___9__23_0();

  static inline ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* getStaticF___9__23_1();

  static inline ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* getStaticF___9__23_2();

  static inline ::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* getStaticF___9__24_0();

  static inline ::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* getStaticF___9__24_1();

  static inline ::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* getStaticF___9__24_2();

  static inline ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Touch, ::UnityEngine::UIElements::EventBase*>* getStaticF___9__30_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::__DefaultEventSystem____c* value);

  static inline void setStaticF___9__23_0(::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* value);

  static inline void
  setStaticF___9__23_1(::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* value);

  static inline void
  setStaticF___9__23_2(::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* value);

  static inline void setStaticF___9__24_0(::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* value);

  static inline void setStaticF___9__24_1(::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* value);

  static inline void setStaticF___9__24_2(::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* value);

  static inline void setStaticF___9__30_0(::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Touch, ::UnityEngine::UIElements::EventBase*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DefaultEventSystem____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DefaultEventSystem____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DefaultEventSystem____c(__DefaultEventSystem____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DefaultEventSystem____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DefaultEventSystem____c(__DefaultEventSystem____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__DefaultEventSystem____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::DefaultEventSystem
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::DefaultEventSystem*
class CORDL_TYPE DefaultEventSystem : public ::System::Object {
public:
  // Declarations
  using IInput = ::UnityEngine::UIElements::__DefaultEventSystem__IInput;

  using Input = ::UnityEngine::UIElements::__DefaultEventSystem__Input;

  using NoInput = ::UnityEngine::UIElements::__DefaultEventSystem__NoInput;

  using UpdateMode = ::UnityEngine::UIElements::__DefaultEventSystem__UpdateMode;

  using __c = ::UnityEngine::UIElements::__DefaultEventSystem____c;

  /// @brief Field IsEditorRemoteConnected, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IsEditorRemoteConnected, put = setStaticF_IsEditorRemoteConnected))::System::Func_1<bool>* IsEditorRemoteConnected;

  __declspec(property(get = get_focusedPanel, put = set_focusedPanel))::UnityEngine::UIElements::BaseRuntimePanel* focusedPanel;

  __declspec(property(get = get_input))::UnityEngine::UIElements::__DefaultEventSystem__IInput* input;

  __declspec(property(get = get_isAppFocused)) bool isAppFocused;

  /// @brief Field m_CancelButton, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CancelButton, put = __cordl_internal_set_m_CancelButton))::StringW m_CancelButton;

  /// @brief Field m_ConsecutiveMoveCount, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ConsecutiveMoveCount, put = __cordl_internal_set_m_ConsecutiveMoveCount)) int32_t m_ConsecutiveMoveCount;

  /// @brief Field m_Event, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Event, put = __cordl_internal_set_m_Event))::UnityEngine::Event* m_Event;

  /// @brief Field m_FocusedPanel, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FocusedPanel, put = __cordl_internal_set_m_FocusedPanel))::UnityEngine::UIElements::BaseRuntimePanel* m_FocusedPanel;

  /// @brief Field m_HorizontalAxis, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HorizontalAxis, put = __cordl_internal_set_m_HorizontalAxis))::StringW m_HorizontalAxis;

  /// @brief Field m_Input, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Input, put = __cordl_internal_set_m_Input))::UnityEngine::UIElements::__DefaultEventSystem__IInput* m_Input;

  /// @brief Field m_InputActionsPerSecond, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_InputActionsPerSecond, put = __cordl_internal_set_m_InputActionsPerSecond)) float_t m_InputActionsPerSecond;

  /// @brief Field m_LastMoveVector, offset 0x5c, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastMoveVector, put = __cordl_internal_set_m_LastMoveVector))::UnityEngine::Vector2 m_LastMoveVector;

  /// @brief Field m_PrevActionTime, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PrevActionTime, put = __cordl_internal_set_m_PrevActionTime)) float_t m_PrevActionTime;

  /// @brief Field m_RepeatDelay, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RepeatDelay, put = __cordl_internal_set_m_RepeatDelay)) float_t m_RepeatDelay;

  /// @brief Field m_SendingTouchEvents, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SendingTouchEvents, put = __cordl_internal_set_m_SendingTouchEvents)) bool m_SendingTouchEvents;

  /// @brief Field m_SubmitButton, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SubmitButton, put = __cordl_internal_set_m_SubmitButton))::StringW m_SubmitButton;

  /// @brief Field m_VerticalAxis, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VerticalAxis, put = __cordl_internal_set_m_VerticalAxis))::StringW m_VerticalAxis;

  /// @brief Method GetDefaultInput, addr 0x354a2e0, size 0x194, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::__DefaultEventSystem__IInput* GetDefaultInput();

  /// @brief Method GetLocalScreenPosition, addr 0x354b254, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 GetLocalScreenPosition(::UnityEngine::Event* evt, ByRef<::System::Nullable_1<int32_t>> targetDisplay);

  /// @brief Method GetRawMoveVector, addr 0x354b72c, size 0x2b8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetRawMoveVector();

  /// @brief Method MakeTouchEvent, addr 0x354b59c, size 0x190, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::EventBase* MakeTouchEvent(::UnityEngine::Touch touch, ::UnityEngine::EventModifiers modifiers);

  static inline ::UnityEngine::UIElements::DefaultEventSystem* New_ctor();

  /// @brief Method ProcessTouchEvents, addr 0x354a5e8, size 0x450, virtual false, abstract: false, final false
  inline bool ProcessTouchEvents();

  /// @brief Method SendFocusBasedEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TArg> inline void SendFocusBasedEvent(::System::Func_2<TArg, ::UnityEngine::UIElements::EventBase*>* evtFactory, TArg arg);

  /// @brief Method SendIMGUIEvents, addr 0x354aa38, size 0x4c0, virtual false, abstract: false, final false
  inline void SendIMGUIEvents();

  /// @brief Method SendInputEvents, addr 0x354aef8, size 0x35c, virtual false, abstract: false, final false
  inline void SendInputEvents();

  /// @brief Method SendPositionBasedEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TArg>
  inline void SendPositionBasedEvent(::UnityEngine::Vector3 mousePosition, ::UnityEngine::Vector3 delta, int32_t pointerId, ::System::Nullable_1<int32_t> targetDisplay,
                                     ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, TArg, ::UnityEngine::UIElements::EventBase*>* evtFactory, TArg arg, bool deselectIfNoTarget);

  /// @brief Method ShouldIgnoreEventsOnAppNotFocused, addr 0x354a484, size 0x20, virtual false, abstract: false, final false
  inline bool ShouldIgnoreEventsOnAppNotFocused();

  /// @brief Method ShouldSendMoveFromInput, addr 0x354b270, size 0x2b8, virtual false, abstract: false, final false
  inline bool ShouldSendMoveFromInput();

  /// @brief Method Update, addr 0x354a57c, size 0x6c, virtual false, abstract: false, final false
  inline void Update(::UnityEngine::UIElements::__DefaultEventSystem__UpdateMode updateMode);

  /// @brief Method UpdateFocusedPanel, addr 0x354b528, size 0x74, virtual false, abstract: false, final false
  inline void UpdateFocusedPanel(::UnityEngine::UIElements::BaseRuntimePanel* runtimePanel);

  constexpr ::StringW const& __cordl_internal_get_m_CancelButton() const;

  constexpr ::StringW& __cordl_internal_get_m_CancelButton();

  constexpr int32_t const& __cordl_internal_get_m_ConsecutiveMoveCount() const;

  constexpr int32_t& __cordl_internal_get_m_ConsecutiveMoveCount();

  constexpr ::UnityEngine::Event*& __cordl_internal_get_m_Event();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Event*> const& __cordl_internal_get_m_Event() const;

  constexpr ::UnityEngine::UIElements::BaseRuntimePanel*& __cordl_internal_get_m_FocusedPanel();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseRuntimePanel*> const& __cordl_internal_get_m_FocusedPanel() const;

  constexpr ::StringW const& __cordl_internal_get_m_HorizontalAxis() const;

  constexpr ::StringW& __cordl_internal_get_m_HorizontalAxis();

  constexpr ::UnityEngine::UIElements::__DefaultEventSystem__IInput*& __cordl_internal_get_m_Input();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__DefaultEventSystem__IInput*> const& __cordl_internal_get_m_Input() const;

  constexpr float_t const& __cordl_internal_get_m_InputActionsPerSecond() const;

  constexpr float_t& __cordl_internal_get_m_InputActionsPerSecond();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_LastMoveVector() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_LastMoveVector();

  constexpr float_t const& __cordl_internal_get_m_PrevActionTime() const;

  constexpr float_t& __cordl_internal_get_m_PrevActionTime();

  constexpr float_t const& __cordl_internal_get_m_RepeatDelay() const;

  constexpr float_t& __cordl_internal_get_m_RepeatDelay();

  constexpr bool const& __cordl_internal_get_m_SendingTouchEvents() const;

  constexpr bool& __cordl_internal_get_m_SendingTouchEvents();

  constexpr ::StringW const& __cordl_internal_get_m_SubmitButton() const;

  constexpr ::StringW& __cordl_internal_get_m_SubmitButton();

  constexpr ::StringW const& __cordl_internal_get_m_VerticalAxis() const;

  constexpr ::StringW& __cordl_internal_get_m_VerticalAxis();

  constexpr void __cordl_internal_set_m_CancelButton(::StringW value);

  constexpr void __cordl_internal_set_m_ConsecutiveMoveCount(int32_t value);

  constexpr void __cordl_internal_set_m_Event(::UnityEngine::Event* value);

  constexpr void __cordl_internal_set_m_FocusedPanel(::UnityEngine::UIElements::BaseRuntimePanel* value);

  constexpr void __cordl_internal_set_m_HorizontalAxis(::StringW value);

  constexpr void __cordl_internal_set_m_Input(::UnityEngine::UIElements::__DefaultEventSystem__IInput* value);

  constexpr void __cordl_internal_set_m_InputActionsPerSecond(float_t value);

  constexpr void __cordl_internal_set_m_LastMoveVector(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_PrevActionTime(float_t value);

  constexpr void __cordl_internal_set_m_RepeatDelay(float_t value);

  constexpr void __cordl_internal_set_m_SendingTouchEvents(bool value);

  constexpr void __cordl_internal_set_m_SubmitButton(::StringW value);

  constexpr void __cordl_internal_set_m_VerticalAxis(::StringW value);

  /// @brief Method .ctor, addr 0x354b9e4, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Func_1<bool>* getStaticF_IsEditorRemoteConnected();

  /// @brief Method get_focusedPanel, addr 0x354a4a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BaseRuntimePanel* get_focusedPanel();

  /// @brief Method get_input, addr 0x354a2bc, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::__DefaultEventSystem__IInput* get_input();

  /// @brief Method get_isAppFocused, addr 0x354a2b4, size 0x8, virtual false, abstract: false, final false
  inline bool get_isAppFocused();

  static inline void setStaticF_IsEditorRemoteConnected(::System::Func_1<bool>* value);

  /// @brief Method set_focusedPanel, addr 0x354a4ac, size 0x78, virtual false, abstract: false, final false
  inline void set_focusedPanel(::UnityEngine::UIElements::BaseRuntimePanel* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultEventSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultEventSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultEventSystem(DefaultEventSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultEventSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultEventSystem(DefaultEventSystem const&) = delete;

  /// @brief Field m_Input, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::__DefaultEventSystem__IInput* ___m_Input;

  /// @brief Field m_HorizontalAxis, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_HorizontalAxis;

  /// @brief Field m_VerticalAxis, offset: 0x20, size: 0x8, def value: None
  ::StringW ___m_VerticalAxis;

  /// @brief Field m_SubmitButton, offset: 0x28, size: 0x8, def value: None
  ::StringW ___m_SubmitButton;

  /// @brief Field m_CancelButton, offset: 0x30, size: 0x8, def value: None
  ::StringW ___m_CancelButton;

  /// @brief Field m_InputActionsPerSecond, offset: 0x38, size: 0x4, def value: None
  float_t ___m_InputActionsPerSecond;

  /// @brief Field m_RepeatDelay, offset: 0x3c, size: 0x4, def value: None
  float_t ___m_RepeatDelay;

  /// @brief Field m_SendingTouchEvents, offset: 0x40, size: 0x1, def value: None
  bool ___m_SendingTouchEvents;

  /// @brief Field m_Event, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Event* ___m_Event;

  /// @brief Field m_FocusedPanel, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseRuntimePanel* ___m_FocusedPanel;

  /// @brief Field m_ConsecutiveMoveCount, offset: 0x58, size: 0x4, def value: None
  int32_t ___m_ConsecutiveMoveCount;

  /// @brief Field m_LastMoveVector, offset: 0x5c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_LastMoveVector;

  /// @brief Field m_PrevActionTime, offset: 0x64, size: 0x4, def value: None
  float_t ___m_PrevActionTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DefaultEventSystem, 0x68>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_Input) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_HorizontalAxis) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_VerticalAxis) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_SubmitButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_CancelButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_InputActionsPerSecond) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_RepeatDelay) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_SendingTouchEvents) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_Event) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_FocusedPanel) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_ConsecutiveMoveCount) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_LastMoveVector) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_PrevActionTime) == 0x64, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__DefaultEventSystem__UpdateMode, "UnityEngine.UIElements", "DefaultEventSystem/UpdateMode");
NEED_NO_BOX(::UnityEngine::UIElements::DefaultEventSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DefaultEventSystem*, "UnityEngine.UIElements", "DefaultEventSystem");
NEED_NO_BOX(::UnityEngine::UIElements::__DefaultEventSystem__IInput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__DefaultEventSystem__IInput*, "UnityEngine.UIElements", "DefaultEventSystem/IInput");
NEED_NO_BOX(::UnityEngine::UIElements::__DefaultEventSystem__Input);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__DefaultEventSystem__Input*, "UnityEngine.UIElements", "DefaultEventSystem/Input");
NEED_NO_BOX(::UnityEngine::UIElements::__DefaultEventSystem__NoInput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__DefaultEventSystem__NoInput*, "UnityEngine.UIElements", "DefaultEventSystem/NoInput");
NEED_NO_BOX(::UnityEngine::UIElements::__DefaultEventSystem____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__DefaultEventSystem____c*, "UnityEngine.UIElements", "DefaultEventSystem/<>c");
