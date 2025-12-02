#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/KeyEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/IntegerTime/zzzz__DiscreteTime_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventSource_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KeyEvent)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Unity::IntegerTime {
struct DiscreteTime;
}
namespace UnityEngine::InputForUI {
class ButtonsState_KeyEvent__GetAllPressed_d__8;
}
namespace UnityEngine::InputForUI {
struct ButtonsState_KeyEvent__buttons_e__FixedBuffer;
}
namespace UnityEngine::InputForUI {
struct EventModifiers;
}
namespace UnityEngine::InputForUI {
struct EventSource;
}
namespace UnityEngine::InputForUI {
class IEventProperties;
}
namespace UnityEngine::InputForUI {
struct KeyEvent_ButtonsState;
}
namespace UnityEngine::InputForUI {
struct KeyEvent_Type;
}
namespace UnityEngine {
struct KeyCode;
}
// Forward declare root types
namespace UnityEngine::InputForUI {
struct KeyEvent_Type;
}
namespace UnityEngine::InputForUI {
class ButtonsState_KeyEvent__GetAllPressed_d__8;
}
namespace UnityEngine::InputForUI {
struct ButtonsState_KeyEvent__buttons_e__FixedBuffer;
}
namespace UnityEngine::InputForUI {
struct KeyEvent;
}
namespace UnityEngine::InputForUI {
struct KeyEvent_ButtonsState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputForUI::KeyEvent_Type);
MARK_REF_PTR_T(::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8);
MARK_VAL_T(::UnityEngine::InputForUI::ButtonsState_KeyEvent__buttons_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::InputForUI::KeyEvent);
MARK_VAL_T(::UnityEngine::InputForUI::KeyEvent_ButtonsState);
// Dependencies
namespace UnityEngine::InputForUI {
// Is value type: true
// CS Name: UnityEngine.InputForUI.KeyEvent/Type
struct CORDL_TYPE KeyEvent_Type {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __KeyEvent_Type_Unwrapped
  enum struct __KeyEvent_Type_Unwrapped : int32_t {
    __E_KeyPressed = static_cast<int32_t>(0x1),
    __E_KeyRepeated = static_cast<int32_t>(0x2),
    __E_KeyReleased = static_cast<int32_t>(0x3),
    __E_State = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __KeyEvent_Type_Unwrapped() const noexcept {
    return static_cast<__KeyEvent_Type_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyEvent_Type();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr KeyEvent_Type(int32_t value__) noexcept;

  /// @brief Field KeyPressed value: I32(1)
  static ::UnityEngine::InputForUI::KeyEvent_Type const KeyPressed;

  /// @brief Field KeyReleased value: I32(3)
  static ::UnityEngine::InputForUI::KeyEvent_Type const KeyReleased;

  /// @brief Field KeyRepeated value: I32(2)
  static ::UnityEngine::InputForUI::KeyEvent_Type const KeyRepeated;

  /// @brief Field State value: I32(4)
  static ::UnityEngine::InputForUI::KeyEvent_Type const State;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21590 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputForUI::KeyEvent_Type, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputForUI::KeyEvent_Type, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputForUI
// Dependencies
namespace UnityEngine::InputForUI {
// Is value type: true
// CS Name: UnityEngine.InputForUI.KeyEvent/ButtonsState/<buttons>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE ButtonsState_KeyEvent__buttons_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ButtonsState_KeyEvent__buttons_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr ButtonsState_KeyEvent__buttons_e__FixedBuffer(uint8_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21592 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
  uint8_t FixedElementField;

  /// @brief Size padding 0x28 - 0x1 = 0x27, packed as 0x27
  uint8_t _cordl_size_padding[0x27];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputForUI::ButtonsState_KeyEvent__buttons_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputForUI::ButtonsState_KeyEvent__buttons_e__FixedBuffer, 0x28>, "Size mismatch!");

} // namespace UnityEngine::InputForUI
// Dependencies UnityEngine.InputForUI.KeyEvent::ButtonsState::<buttons>e__FixedBuffer
namespace UnityEngine::InputForUI {
// Is value type: true
// CS Name: UnityEngine.InputForUI.KeyEvent/ButtonsState
struct CORDL_TYPE KeyEvent_ButtonsState {
public:
  // Declarations
  using _GetAllPressed_d__8 = ::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8;

  using _buttons_e__FixedBuffer = ::UnityEngine::InputForUI::ButtonsState_KeyEvent__buttons_e__FixedBuffer;

  /// @brief Method ClearUnchecked, addr 0x69255ec, size 0x24, virtual false, abstract: false, final false
  inline void ClearUnchecked(uint32_t index);

  /// @brief Method GetAllPressed, addr 0x692563c, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::KeyCode>* GetAllPressed();

  /// @brief Method GetUnchecked, addr 0x69255ac, size 0x1c, virtual false, abstract: false, final false
  inline bool GetUnchecked(uint32_t index);

  /// @brief Method IsPressed, addr 0x6925610, size 0x2c, virtual false, abstract: false, final false
  inline bool IsPressed(::UnityEngine::KeyCode keyCode);

  /// @brief Method Reset, addr 0x6925714, size 0x16c, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SetPressed, addr 0x69256dc, size 0x38, virtual false, abstract: false, final false
  inline void SetPressed(::UnityEngine::KeyCode keyCode, bool pressed);

  /// @brief Method SetUnchecked, addr 0x69255c8, size 0x24, virtual false, abstract: false, final false
  inline void SetUnchecked(uint32_t index);

  /// @brief Method ShouldBeProcessed, addr 0x69255a0, size 0xc, virtual false, abstract: false, final false
  static inline bool ShouldBeProcessed(::UnityEngine::KeyCode keyCode);

  /// @brief Method ToString, addr 0x6925880, size 0x74, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyEvent_ButtonsState();

  // Ctor Parameters [CppParam { name: "buttons", ty: "::UnityEngine::InputForUI::ButtonsState_KeyEvent__buttons_e__FixedBuffer", modifiers: "", def_value: None }]
  constexpr KeyEvent_ButtonsState(::UnityEngine::InputForUI::ButtonsState_KeyEvent__buttons_e__FixedBuffer buttons) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21593 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field buttons, offset: 0x0, size: 0x28, def value: None
  ::UnityEngine::InputForUI::ButtonsState_KeyEvent__buttons_e__FixedBuffer buttons;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputForUI::KeyEvent_ButtonsState, buttons) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputForUI::KeyEvent_ButtonsState, 0x28>, "Size mismatch!");

} // namespace UnityEngine::InputForUI
// Dependencies System.Object, UnityEngine.InputForUI.KeyEvent::ButtonsState, UnityEngine.KeyCode
namespace UnityEngine::InputForUI {
// Is value type: false
// CS Name: UnityEngine.InputForUI.KeyEvent/ButtonsState/<GetAllPressed>d__8
class CORDL_TYPE ButtonsState_KeyEvent__GetAllPressed_d__8 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_UnityEngine_KeyCode__get_Current)) ::UnityEngine::KeyCode System_Collections_Generic_IEnumerator_UnityEngine_KeyCode__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::UnityEngine::KeyCode __2__current;

  /// @brief Field <>3__<>4__this, offset 0x44, size 0x28
  __declspec(property(get = __cordl_internal_get___3____4__this, put = __cordl_internal_set___3____4__this)) ::UnityEngine::InputForUI::KeyEvent_ButtonsState __3____4__this;

  /// @brief Field <>4__this, offset 0x1c, size 0x28
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityEngine::InputForUI::KeyEvent_ButtonsState __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <index>5__1, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get__index_5__1, put = __cordl_internal_set__index_5__1)) uint32_t _index_5__1;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::KeyCode>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::KeyCode>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::KeyCode>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::KeyCode>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x69258f8, size 0x74, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.KeyCode>.GetEnumerator, addr 0x6925a0c, size 0xa8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::KeyCode>* System_Collections_Generic_IEnumerable_UnityEngine_KeyCode__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.KeyCode>.get_Current, addr 0x692596c, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::KeyCode System_Collections_Generic_IEnumerator_UnityEngine_KeyCode__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x6925ab4, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x6925974, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x69259ac, size 0x60, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x69258f4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityEngine::KeyCode const& __cordl_internal_get___2__current() const;

  constexpr ::UnityEngine::KeyCode& __cordl_internal_get___2__current();

  constexpr ::UnityEngine::InputForUI::KeyEvent_ButtonsState const& __cordl_internal_get___3____4__this() const;

  constexpr ::UnityEngine::InputForUI::KeyEvent_ButtonsState& __cordl_internal_get___3____4__this();

  constexpr ::UnityEngine::InputForUI::KeyEvent_ButtonsState const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::InputForUI::KeyEvent_ButtonsState& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr uint32_t const& __cordl_internal_get__index_5__1() const;

  constexpr uint32_t& __cordl_internal_get__index_5__1();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityEngine::KeyCode value);

  constexpr void __cordl_internal_set___3____4__this(::UnityEngine::InputForUI::KeyEvent_ButtonsState value);

  constexpr void __cordl_internal_set___4__this(::UnityEngine::InputForUI::KeyEvent_ButtonsState value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__index_5__1(uint32_t value);

  /// @brief Method .ctor, addr 0x69256bc, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::KeyCode>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::KeyCode>* i___System__Collections__Generic__IEnumerable_1___UnityEngine__KeyCode_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::KeyCode>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::KeyCode>* i___System__Collections__Generic__IEnumerator_1___UnityEngine__KeyCode_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ButtonsState_KeyEvent__GetAllPressed_d__8();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ButtonsState_KeyEvent__GetAllPressed_d__8", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ButtonsState_KeyEvent__GetAllPressed_d__8(ButtonsState_KeyEvent__GetAllPressed_d__8&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ButtonsState_KeyEvent__GetAllPressed_d__8", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ButtonsState_KeyEvent__GetAllPressed_d__8(ButtonsState_KeyEvent__GetAllPressed_d__8 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21591 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::KeyCode _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x18, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x1c, size: 0x28, def value: None
  ::UnityEngine::InputForUI::KeyEvent_ButtonsState _____4__this;

  /// @brief Field <>3__<>4__this, offset: 0x44, size: 0x28, def value: None
  ::UnityEngine::InputForUI::KeyEvent_ButtonsState _____3____4__this;

  /// @brief Field <index>5__1, offset: 0x6c, size: 0x4, def value: None
  uint32_t ____index_5__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8, _____2__current) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8, _____l__initialThreadId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8, _____4__this) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8, _____3____4__this) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8, ____index_5__1) == 0x6c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8, 0x70>, "Size mismatch!");

} // namespace UnityEngine::InputForUI
// Dependencies Unity.IntegerTime.DiscreteTime, UnityEngine.InputForUI.EventModifiers, UnityEngine.InputForUI.EventSource, UnityEngine.InputForUI.KeyEvent::ButtonsState,
// UnityEngine.InputForUI.KeyEvent::Type, UnityEngine.KeyCode
namespace UnityEngine::InputForUI {
// Is value type: true
// CS Name: UnityEngine.InputForUI.KeyEvent
struct CORDL_TYPE KeyEvent {
public:
  // Declarations
  using ButtonsState = ::UnityEngine::InputForUI::KeyEvent_ButtonsState;

  using Type = ::UnityEngine::InputForUI::KeyEvent_Type;

  __declspec(property(get = get_eventModifiers, put = set_eventModifiers)) ::UnityEngine::InputForUI::EventModifiers eventModifiers;

  __declspec(property(get = get_eventSource, put = set_eventSource)) ::UnityEngine::InputForUI::EventSource eventSource;

  __declspec(property(put = set_playerId)) uint32_t playerId;

  __declspec(property(put = set_timestamp)) ::Unity::IntegerTime::DiscreteTime timestamp;

  /// @brief Convert operator to "::UnityEngine::InputForUI::IEventProperties"
  constexpr operator ::UnityEngine::InputForUI::IEventProperties*();

  /// @brief Method ToString, addr 0x69253a4, size 0x1fc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_eventModifiers, addr 0x6925394, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::InputForUI::EventModifiers get_eventModifiers();

  /// @brief Method get_eventSource, addr 0x692537c, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::InputForUI::EventSource get_eventSource();

  /// @brief Convert to "::UnityEngine::InputForUI::IEventProperties"
  constexpr ::UnityEngine::InputForUI::IEventProperties* i___UnityEngine__InputForUI__IEventProperties();

  /// @brief Method set_eventModifiers, addr 0x692539c, size 0x8, virtual false, abstract: false, final false
  inline void set_eventModifiers(::UnityEngine::InputForUI::EventModifiers value);

  /// @brief Method set_eventSource, addr 0x6925384, size 0x8, virtual false, abstract: false, final false
  inline void set_eventSource(::UnityEngine::InputForUI::EventSource value);

  /// @brief Method set_playerId, addr 0x692538c, size 0x8, virtual false, abstract: false, final false
  inline void set_playerId(uint32_t value);

  /// @brief Method set_timestamp, addr 0x6925374, size 0x8, virtual false, abstract: false, final false
  inline void set_timestamp(::Unity::IntegerTime::DiscreteTime value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyEvent();

  // Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::InputForUI::KeyEvent_Type", modifiers: "", def_value: None }, CppParam { name: "keyCode", ty: "::UnityEngine::KeyCode", modifiers:
  // "", def_value: None }, CppParam { name: "buttonsState", ty: "::UnityEngine::InputForUI::KeyEvent_ButtonsState", modifiers: "", def_value: None }, CppParam { name: "_timestamp_k__BackingField",
  // ty: "::Unity::IntegerTime::DiscreteTime", modifiers: "", def_value: None }, CppParam { name: "_eventSource_k__BackingField", ty: "::UnityEngine::InputForUI::EventSource", modifiers: "",
  // def_value: None }, CppParam { name: "_playerId_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_eventModifiers_k__BackingField", ty:
  // "::UnityEngine::InputForUI::EventModifiers", modifiers: "", def_value: None }]
  constexpr KeyEvent(::UnityEngine::InputForUI::KeyEvent_Type type, ::UnityEngine::KeyCode keyCode, ::UnityEngine::InputForUI::KeyEvent_ButtonsState buttonsState,
                     ::Unity::IntegerTime::DiscreteTime _timestamp_k__BackingField, ::UnityEngine::InputForUI::EventSource _eventSource_k__BackingField, uint32_t _playerId_k__BackingField,
                     ::UnityEngine::InputForUI::EventModifiers _eventModifiers_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21594 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field type, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::InputForUI::KeyEvent_Type type;

  /// @brief Field keyCode, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::KeyCode keyCode;

  /// @brief Field buttonsState, offset: 0x8, size: 0x28, def value: None
  ::UnityEngine::InputForUI::KeyEvent_ButtonsState buttonsState;

  /// @brief Field <timestamp>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::Unity::IntegerTime::DiscreteTime _timestamp_k__BackingField;

  /// @brief Field <eventSource>k__BackingField, offset: 0x38, size: 0x4, def value: None
  ::UnityEngine::InputForUI::EventSource _eventSource_k__BackingField;

  /// @brief Field <playerId>k__BackingField, offset: 0x3c, size: 0x4, def value: None
  uint32_t _playerId_k__BackingField;

  /// @brief Field <eventModifiers>k__BackingField, offset: 0x40, size: 0x4, def value: None
  ::UnityEngine::InputForUI::EventModifiers _eventModifiers_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputForUI::KeyEvent, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::KeyEvent, keyCode) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::KeyEvent, buttonsState) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::KeyEvent, _timestamp_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::KeyEvent, _eventSource_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::KeyEvent, _playerId_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::KeyEvent, _eventModifiers_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputForUI::KeyEvent, 0x48>, "Size mismatch!");

} // namespace UnityEngine::InputForUI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::KeyEvent_Type, "UnityEngine.InputForUI", "KeyEvent/Type");
NEED_NO_BOX(::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8*, "UnityEngine.InputForUI", "KeyEvent/ButtonsState/<GetAllPressed>d__8");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::ButtonsState_KeyEvent__buttons_e__FixedBuffer, "UnityEngine.InputForUI", "KeyEvent/ButtonsState/<buttons>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::KeyEvent, "UnityEngine.InputForUI", "KeyEvent");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::KeyEvent_ButtonsState, "UnityEngine.InputForUI", "KeyEvent/ButtonsState");
