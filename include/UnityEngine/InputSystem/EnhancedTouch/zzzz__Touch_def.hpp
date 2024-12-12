#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/EnhancedTouch/Touch.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchState_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Touch)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
class Finger;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct TouchHistory;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct Touch_ExtraDataPerTouchState;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct Touch_FingerAndTouchState;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct Touch_GlobalState;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
class Touch___c;
}
namespace UnityEngine::InputSystem::LowLevel {
template <typename TValue> struct InputStateHistory_1_Record;
}
namespace UnityEngine::InputSystem::LowLevel {
template <typename TValue> class InputStateHistory_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct TouchState;
}
namespace UnityEngine::InputSystem::Utilities {
class ISavedState;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename T> class SavedStructState_1_TypedRestore;
}
namespace UnityEngine::InputSystem {
struct TouchPhase;
}
namespace UnityEngine::InputSystem {
class Touchscreen;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::EnhancedTouch {
class Touch___c;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct Touch;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct Touch_ExtraDataPerTouchState;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct Touch_FingerAndTouchState;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct Touch_GlobalState;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::EnhancedTouch::Touch___c);
MARK_VAL_T(::UnityEngine::InputSystem::EnhancedTouch::Touch);
MARK_VAL_T(::UnityEngine::InputSystem::EnhancedTouch::Touch_ExtraDataPerTouchState);
MARK_VAL_T(::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState);
MARK_VAL_T(::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState);
// Dependencies UnityEngine.InputSystem.LowLevel.InputUpdateType
namespace UnityEngine::InputSystem::EnhancedTouch {
// Is value type: true
// CS Name: UnityEngine.InputSystem.EnhancedTouch.Touch/FingerAndTouchState
struct CORDL_TYPE Touch_FingerAndTouchState {
public:
  // Declarations
  /// @brief Method AddFingers, addr 0x4601b44, size 0x114, virtual false, abstract: false, final false
  inline void AddFingers(::UnityEngine::InputSystem::Touchscreen* screen);

  /// @brief Method Destroy, addr 0x45fec48, size 0x84, virtual false, abstract: false, final false
  inline void Destroy();

  /// @brief Method RemoveFingers, addr 0x4601c58, size 0x144, virtual false, abstract: false, final false
  inline void RemoveFingers(::UnityEngine::InputSystem::Touchscreen* screen);

  /// @brief Method UpdateActiveFingers, addr 0x4601084, size 0x118, virtual false, abstract: false, final false
  inline void UpdateActiveFingers();

  /// @brief Method UpdateActiveTouches, addr 0x46009cc, size 0x588, virtual false, abstract: false, final false
  inline void UpdateActiveTouches();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Touch_FingerAndTouchState();

  // Ctor Parameters [CppParam { name: "updateMask", ty: "::UnityEngine::InputSystem::LowLevel::InputUpdateType", modifiers: "", def_value: None }, CppParam { name: "fingers", ty:
  // "::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*,::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>", modifiers: "", def_value: None }, CppParam { name: "activeFingers",
  // ty: "::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*,::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>", modifiers: "", def_value: None }, CppParam { name:
  // "activeTouches", ty: "::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch,::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>", modifiers: "", def_value: None }, CppParam { name:
  // "activeFingerCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "activeTouchCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "totalFingerCount",
  // ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "haveBuiltActiveTouches", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "haveActiveTouchesNeedingRefreshNextUpdate", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "activeTouchState", ty:
  // "::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*", modifiers: "", def_value: None }]
  constexpr Touch_FingerAndTouchState(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateMask,
                                      ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*, ::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> fingers,
                                      ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*, ::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> activeFingers,
                                      ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch, ::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*> activeTouches, int32_t activeFingerCount,
                                      int32_t activeTouchCount, int32_t totalFingerCount, uint32_t lastId, bool haveBuiltActiveTouches, bool haveActiveTouchesNeedingRefreshNextUpdate,
                                      ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>* activeTouchState) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6821 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field updateMask, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateMask;

  /// @brief Field fingers, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*, ::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> fingers;

  /// @brief Field activeFingers, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*, ::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> activeFingers;

  /// @brief Field activeTouches, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch, ::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*> activeTouches;

  /// @brief Field activeFingerCount, offset: 0x20, size: 0x4, def value: None
  int32_t activeFingerCount;

  /// @brief Field activeTouchCount, offset: 0x24, size: 0x4, def value: None
  int32_t activeTouchCount;

  /// @brief Field totalFingerCount, offset: 0x28, size: 0x4, def value: None
  int32_t totalFingerCount;

  /// @brief Field lastId, offset: 0x2c, size: 0x4, def value: None
  uint32_t lastId;

  /// @brief Field haveBuiltActiveTouches, offset: 0x30, size: 0x1, def value: None
  bool haveBuiltActiveTouches;

  /// @brief Field haveActiveTouchesNeedingRefreshNextUpdate, offset: 0x31, size: 0x1, def value: None
  bool haveActiveTouchesNeedingRefreshNextUpdate;

  /// @brief Field activeTouchState, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>* activeTouchState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState, updateMask) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState, fingers) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState, activeFingers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState, activeTouches) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState, activeFingerCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState, activeTouchCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState, totalFingerCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState, lastId) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState, haveBuiltActiveTouches) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState, haveActiveTouchesNeedingRefreshNextUpdate) == 0x31, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState, activeTouchState) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState, 0x40>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::EnhancedTouch
// Dependencies UnityEngine.InputSystem.EnhancedTouch.Touch::FingerAndTouchState, UnityEngine.InputSystem.Utilities.CallbackArray`1<TDelegate>, UnityEngine.InputSystem.Utilities.InlinedArray`1<TValue>
namespace UnityEngine::InputSystem::EnhancedTouch {
// Is value type: true
// CS Name: UnityEngine.InputSystem.EnhancedTouch.Touch/GlobalState
struct CORDL_TYPE Touch_GlobalState {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Touch_GlobalState();

  // Ctor Parameters [CppParam { name: "touchscreens", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Touchscreen*>", modifiers: "", def_value: None }, CppParam
  // { name: "historyLengthPerFinger", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "onFingerDown", ty:
  // "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>", modifiers: "", def_value: None }, CppParam { name:
  // "onFingerMove", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>", modifiers: "", def_value: None }, CppParam {
  // name: "onFingerUp", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>", modifiers: "", def_value: None },
  // CppParam { name: "playerState", ty: "::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState", modifiers: "", def_value: None }]
  constexpr Touch_GlobalState(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Touchscreen*> touchscreens, int32_t historyLengthPerFinger,
                              ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> onFingerDown,
                              ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> onFingerMove,
                              ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> onFingerUp,
                              ::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState playerState) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6820 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x150 };

  /// @brief Field touchscreens, offset: 0x0, size: 0x18, def value: None
  ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Touchscreen*> touchscreens;

  /// @brief Field historyLengthPerFinger, offset: 0x18, size: 0x4, def value: None
  int32_t historyLengthPerFinger;

  /// @brief Field onFingerDown, offset: 0x20, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> onFingerDown;

  /// @brief Field onFingerMove, offset: 0x70, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> onFingerMove;

  /// @brief Field onFingerUp, offset: 0xc0, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> onFingerUp;

  /// @brief Field playerState, offset: 0x110, size: 0x40, def value: None
  ::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState playerState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState, touchscreens) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState, historyLengthPerFinger) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState, onFingerDown) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState, onFingerMove) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState, onFingerUp) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState, playerState) == 0x110, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState, 0x150>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::EnhancedTouch
// Dependencies UnityEngine.Vector2
namespace UnityEngine::InputSystem::EnhancedTouch {
// Is value type: true
// CS Name: UnityEngine.InputSystem.EnhancedTouch.Touch/ExtraDataPerTouchState
struct CORDL_TYPE Touch_ExtraDataPerTouchState {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Touch_ExtraDataPerTouchState();

  // Ctor Parameters [CppParam { name: "accumulatedDelta", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "uniqueId", ty: "uint32_t", modifiers: "", def_value: None
  // }]
  constexpr Touch_ExtraDataPerTouchState(::UnityEngine::Vector2 accumulatedDelta, uint32_t uniqueId) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6822 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field accumulatedDelta, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Vector2 accumulatedDelta;

  /// @brief Field uniqueId, offset: 0x8, size: 0x4, def value: None
  uint32_t uniqueId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::Touch_ExtraDataPerTouchState, accumulatedDelta) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::Touch_ExtraDataPerTouchState, uniqueId) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::EnhancedTouch::Touch_ExtraDataPerTouchState, 0xc>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::EnhancedTouch
// Dependencies System.Object
namespace UnityEngine::InputSystem::EnhancedTouch {
// Is value type: false
// CS Name: UnityEngine.InputSystem.EnhancedTouch.Touch/<>c
class CORDL_TYPE Touch___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::InputSystem::EnhancedTouch::Touch___c* __9;

  /// @brief Field <>9__80_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__80_0,
                      put = setStaticF___9__80_0)) ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState>* __9__80_0;

  /// @brief Field <>9__80_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__80_1, put = setStaticF___9__80_1)) ::System::Action* __9__80_1;

  static inline ::UnityEngine::InputSystem::EnhancedTouch::Touch___c* New_ctor();

  /// @brief Method <SaveAndResetState>b__80_0, addr 0x460211c, size 0x84, virtual false, abstract: false, final false
  inline void _SaveAndResetState_b__80_0(::ByRef<::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState> state);

  /// @brief Method <SaveAndResetState>b__80_1, addr 0x46021a0, size 0x4, virtual false, abstract: false, final false
  inline void _SaveAndResetState_b__80_1();

  /// @brief Method .ctor, addr 0x4602114, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::EnhancedTouch::Touch___c* getStaticF___9();

  static inline ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState>* getStaticF___9__80_0();

  static inline ::System::Action* getStaticF___9__80_1();

  static inline void setStaticF___9(::UnityEngine::InputSystem::EnhancedTouch::Touch___c* value);

  static inline void setStaticF___9__80_0(::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState>* value);

  static inline void setStaticF___9__80_1(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Touch___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Touch___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Touch___c(Touch___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Touch___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Touch___c(Touch___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6823 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::EnhancedTouch::Touch___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::EnhancedTouch
// Dependencies System.IEquatable`1<T>, UnityEngine.InputSystem.EnhancedTouch.Touch::GlobalState, UnityEngine.InputSystem.LowLevel.InputStateHistory`1::Record<TValue>,
// UnityEngine.InputSystem.LowLevel.TouchState
namespace UnityEngine::InputSystem::EnhancedTouch {
// Is value type: true
// CS Name: UnityEngine.InputSystem.EnhancedTouch.Touch
struct CORDL_TYPE Touch {
public:
  // Declarations
  using ExtraDataPerTouchState = ::UnityEngine::InputSystem::EnhancedTouch::Touch_ExtraDataPerTouchState;

  using FingerAndTouchState = ::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState;

  using GlobalState = ::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState;

  using __c = ::UnityEngine::InputSystem::EnhancedTouch::Touch___c;

  __declspec(property(get = get_began)) bool began;

  __declspec(property(get = get_delta)) ::UnityEngine::Vector2 delta;

  __declspec(property(get = get_displayIndex)) int32_t displayIndex;

  __declspec(property(get = get_ended)) bool ended;

  __declspec(property(get = get_extraData)) ::UnityEngine::InputSystem::EnhancedTouch::Touch_ExtraDataPerTouchState extraData;

  __declspec(property(get = get_finger)) ::UnityEngine::InputSystem::EnhancedTouch::Finger* finger;

  __declspec(property(get = get_history)) ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory history;

  __declspec(property(get = get_inProgress)) bool inProgress;

  __declspec(property(get = get_isInProgress)) bool isInProgress;

  __declspec(property(get = get_isTap)) bool isTap;

  __declspec(property(get = get_phase)) ::UnityEngine::InputSystem::TouchPhase phase;

  __declspec(property(get = get_pressure)) float_t pressure;

  __declspec(property(get = get_radius)) ::UnityEngine::Vector2 radius;

  /// @brief Field s_GlobalState, offset 0xffffffff, size 0x150
  __declspec(property(get = getStaticF_s_GlobalState, put = setStaticF_s_GlobalState)) ::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState s_GlobalState;

  __declspec(property(get = get_screen)) ::UnityEngine::InputSystem::Touchscreen* screen;

  __declspec(property(get = get_screenPosition)) ::UnityEngine::Vector2 screenPosition;

  __declspec(property(get = get_startScreenPosition)) ::UnityEngine::Vector2 startScreenPosition;

  __declspec(property(get = get_startTime)) double_t startTime;

  __declspec(property(get = get_state)) ::UnityEngine::InputSystem::LowLevel::TouchState state;

  __declspec(property(get = get_tapCount)) int32_t tapCount;

  __declspec(property(get = get_time)) double_t time;

  __declspec(property(get = get_touchId)) int32_t touchId;

  __declspec(property(get = get_uniqueId)) uint32_t uniqueId;

  __declspec(property(get = get_updateStepCount)) uint32_t updateStepCount;

  __declspec(property(get = get_valid)) bool valid;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*();

  /// @brief Method AddTouchscreen, addr 0x45fede8, size 0x8c, virtual false, abstract: false, final false
  static inline void AddTouchscreen(::UnityEngine::InputSystem::Touchscreen* screen);

  /// @brief Method BeginUpdate, addr 0x4601d9c, size 0x74, virtual false, abstract: false, final false
  static inline void BeginUpdate();

  /// @brief Method CreateGlobalState, addr 0x4601e10, size 0x2c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState CreateGlobalState();

  /// @brief Method Equals, addr 0x4601a20, size 0xb0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x46019ac, size 0x74, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::InputSystem::EnhancedTouch::Touch other);

  /// @brief Method GetHashCode, addr 0x4601ad0, size 0x74, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method RemoveTouchscreen, addr 0x45fee74, size 0xe4, virtual false, abstract: false, final false
  static inline void RemoveTouchscreen(::UnityEngine::InputSystem::Touchscreen* screen);

  /// @brief Method SaveAndResetState, addr 0x4601e3c, size 0x210, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::ISavedState* SaveAndResetState();

  /// @brief Method ToString, addr 0x46016c0, size 0x2ec, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x45ff3c0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::EnhancedTouch::Finger* finger,
                    ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<::UnityEngine::InputSystem::LowLevel::TouchState> touchRecord);

  /// @brief Method add_onFingerDown, addr 0x4601228, size 0xc4, virtual false, abstract: false, final false
  static inline void add_onFingerDown(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>* value);

  /// @brief Method add_onFingerMove, addr 0x4601538, size 0xc4, virtual false, abstract: false, final false
  static inline void add_onFingerMove(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>* value);

  /// @brief Method add_onFingerUp, addr 0x46013b0, size 0xc4, virtual false, abstract: false, final false
  static inline void add_onFingerUp(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>* value);

  static inline ::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState getStaticF_s_GlobalState();

  /// @brief Method get_activeFingers, addr 0x4600fe4, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*> get_activeFingers();

  /// @brief Method get_activeTouches, addr 0x460092c, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Touch> get_activeTouches();

  /// @brief Method get_began, addr 0x46002b4, size 0x60, virtual false, abstract: false, final false
  inline bool get_began();

  /// @brief Method get_delta, addr 0x460065c, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_delta();

  /// @brief Method get_displayIndex, addr 0x4600780, size 0x5c, virtual false, abstract: false, final false
  inline int32_t get_displayIndex();

  /// @brief Method get_ended, addr 0x46003bc, size 0x88, virtual false, abstract: false, final false
  inline bool get_ended();

  /// @brief Method get_extraData, addr 0x46007dc, size 0x48, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::InputSystem::EnhancedTouch::Touch_ExtraDataPerTouchState> get_extraData();

  /// @brief Method get_finger, addr 0x4600264, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::EnhancedTouch::Finger* get_finger();

  /// @brief Method get_fingers, addr 0x4600f54, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*> get_fingers();

  /// @brief Method get_history, addr 0x4600824, size 0x108, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory get_history();

  /// @brief Method get_inProgress, addr 0x4600314, size 0xa8, virtual false, abstract: false, final false
  inline bool get_inProgress();

  /// @brief Method get_isInProgress, addr 0x45ff3cc, size 0x74, virtual false, abstract: false, final false
  inline bool get_isInProgress();

  /// @brief Method get_isTap, addr 0x4600714, size 0x60, virtual false, abstract: false, final false
  inline bool get_isTap();

  /// @brief Method get_maxHistoryLengthPerFinger, addr 0x45ff808, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_maxHistoryLengthPerFinger();

  /// @brief Method get_phase, addr 0x4600208, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::TouchPhase get_phase();

  /// @brief Method get_pressure, addr 0x4600444, size 0x5c, virtual false, abstract: false, final false
  inline float_t get_pressure();

  /// @brief Method get_radius, addr 0x46004a0, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_radius();

  /// @brief Method get_screen, addr 0x46005a0, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Touchscreen* get_screen();

  /// @brief Method get_screenPosition, addr 0x45ff364, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_screenPosition();

  /// @brief Method get_screens, addr 0x460119c, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Touchscreen*>* get_screens();

  /// @brief Method get_startScreenPosition, addr 0x4600600, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_startScreenPosition();

  /// @brief Method get_startTime, addr 0x46004fc, size 0x5c, virtual false, abstract: false, final false
  inline double_t get_startTime();

  /// @brief Method get_state, addr 0x460026c, size 0x48, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::InputSystem::LowLevel::TouchState> get_state();

  /// @brief Method get_tapCount, addr 0x46006b8, size 0x5c, virtual false, abstract: false, final false
  inline int32_t get_tapCount();

  /// @brief Method get_time, addr 0x4600558, size 0x48, virtual false, abstract: false, final false
  inline double_t get_time();

  /// @brief Method get_touchId, addr 0x46001ac, size 0x5c, virtual false, abstract: false, final false
  inline int32_t get_touchId();

  /// @brief Method get_uniqueId, addr 0x4600150, size 0x5c, virtual false, abstract: false, final false
  inline uint32_t get_uniqueId();

  /// @brief Method get_updateStepCount, addr 0x45ff440, size 0x5c, virtual false, abstract: false, final false
  inline uint32_t get_updateStepCount();

  /// @brief Method get_valid, addr 0x45ff20c, size 0x48, virtual false, abstract: false, final false
  inline bool get_valid();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
  constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>* i___System__IEquatable_1___UnityEngine__InputSystem__EnhancedTouch__Touch_();

  /// @brief Method remove_onFingerDown, addr 0x46012ec, size 0xc4, virtual false, abstract: false, final false
  static inline void remove_onFingerDown(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>* value);

  /// @brief Method remove_onFingerMove, addr 0x46015fc, size 0xc4, virtual false, abstract: false, final false
  static inline void remove_onFingerMove(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>* value);

  /// @brief Method remove_onFingerUp, addr 0x4601474, size 0xc4, virtual false, abstract: false, final false
  static inline void remove_onFingerUp(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>* value);

  static inline void setStaticF_s_GlobalState(::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Touch();

  // Ctor Parameters [CppParam { name: "m_Finger", ty: "::UnityEngine::InputSystem::EnhancedTouch::Finger*", modifiers: "", def_value: None }, CppParam { name: "m_TouchRecord", ty:
  // "::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<::UnityEngine::InputSystem::LowLevel::TouchState>", modifiers: "", def_value: None }]
  constexpr Touch(::UnityEngine::InputSystem::EnhancedTouch::Finger* m_Finger,
                  ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<::UnityEngine::InputSystem::LowLevel::TouchState> m_TouchRecord) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6824 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_Finger, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::EnhancedTouch::Finger* m_Finger;

  /// @brief Field m_TouchRecord, offset: 0x8, size: 0x10, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<::UnityEngine::InputSystem::LowLevel::TouchState> m_TouchRecord;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::Touch, m_Finger) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::Touch, m_TouchRecord) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::EnhancedTouch::Touch, 0x18>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::EnhancedTouch
NEED_NO_BOX(::UnityEngine::InputSystem::EnhancedTouch::Touch___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::EnhancedTouch::Touch___c*, "UnityEngine.InputSystem.EnhancedTouch", "Touch/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::EnhancedTouch::Touch, "UnityEngine.InputSystem.EnhancedTouch", "Touch");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::EnhancedTouch::Touch_ExtraDataPerTouchState, "UnityEngine.InputSystem.EnhancedTouch", "Touch/ExtraDataPerTouchState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState, "UnityEngine.InputSystem.EnhancedTouch", "Touch/FingerAndTouchState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState, "UnityEngine.InputSystem.EnhancedTouch", "Touch/GlobalState");
