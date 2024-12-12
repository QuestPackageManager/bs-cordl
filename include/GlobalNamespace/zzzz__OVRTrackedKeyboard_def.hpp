#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTrackedKeyboard.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRKeyboard_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRTextureQualityFiltering_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRTrackedKeyboard)
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace GlobalNamespace {
struct OVRKeyboard_TrackedKeyboardInfo;
}
namespace GlobalNamespace {
class OVROverlay;
}
namespace GlobalNamespace {
class OVRPassthroughLayer;
}
namespace GlobalNamespace {
struct OVRPlugin_TrackedKeyboardQueryFlags;
}
namespace GlobalNamespace {
struct OVRTrackedKeyboard_KeyboardPresentation;
}
namespace GlobalNamespace {
struct OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent;
}
namespace GlobalNamespace {
struct OVRTrackedKeyboard_TrackedKeyboardState;
}
namespace GlobalNamespace {
struct OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent;
}
namespace GlobalNamespace {
class OVRTrackedKeyboard__InitializeHandPresenceData_d__89;
}
namespace GlobalNamespace {
class OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__96;
}
namespace GlobalNamespace {
class OVRTrackedKeyboard__Start_d__88;
}
namespace GlobalNamespace {
class OVRTrackedKeyboard__UpdateKeyboardPose_d__98;
}
namespace GlobalNamespace {
class OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__95;
}
namespace GlobalNamespace {
class OVRTrackedKeyboard___c;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRTrackedKeyboard_KeyboardPresentation;
}
namespace GlobalNamespace {
struct OVRTrackedKeyboard_TrackedKeyboardState;
}
namespace GlobalNamespace {
class OVRTrackedKeyboard;
}
namespace GlobalNamespace {
class OVRTrackedKeyboard__InitializeHandPresenceData_d__89;
}
namespace GlobalNamespace {
class OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__96;
}
namespace GlobalNamespace {
class OVRTrackedKeyboard__Start_d__88;
}
namespace GlobalNamespace {
class OVRTrackedKeyboard__UpdateKeyboardPose_d__98;
}
namespace GlobalNamespace {
class OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__95;
}
namespace GlobalNamespace {
class OVRTrackedKeyboard___c;
}
namespace GlobalNamespace {
struct OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent;
}
namespace GlobalNamespace {
struct OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation);
MARK_VAL_T(::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState);
MARK_REF_PTR_T(::GlobalNamespace::OVRTrackedKeyboard);
MARK_REF_PTR_T(::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__89);
MARK_REF_PTR_T(::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__96);
MARK_REF_PTR_T(::GlobalNamespace::OVRTrackedKeyboard__Start_d__88);
MARK_REF_PTR_T(::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__98);
MARK_REF_PTR_T(::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__95);
MARK_REF_PTR_T(::GlobalNamespace::OVRTrackedKeyboard___c);
MARK_VAL_T(::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent);
MARK_VAL_T(::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRTrackedKeyboard/TrackedKeyboardState
struct CORDL_TYPE OVRTrackedKeyboard_TrackedKeyboardState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRTrackedKeyboard_TrackedKeyboardState_Unwrapped
  enum struct __OVRTrackedKeyboard_TrackedKeyboardState_Unwrapped : int32_t {
    __E_Uninitialized = static_cast<int32_t>(0x0),
    __E_NoTrackableKeyboard = static_cast<int32_t>(0x1),
    __E_Offline = static_cast<int32_t>(0x2),
    __E_StartedNotTracked = static_cast<int32_t>(0x3),
    __E_Stale = static_cast<int32_t>(0x4),
    __E_Valid = static_cast<int32_t>(0x5),
    __E_Error = static_cast<int32_t>(0x6),
    __E_ErrorExtensionFailed = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRTrackedKeyboard_TrackedKeyboardState_Unwrapped() const noexcept {
    return static_cast<__OVRTrackedKeyboard_TrackedKeyboardState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTrackedKeyboard_TrackedKeyboardState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRTrackedKeyboard_TrackedKeyboardState(int32_t value__) noexcept;

  /// @brief Field Error value: I32(6)
  static ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState const Error;

  /// @brief Field ErrorExtensionFailed value: I32(7)
  static ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState const ErrorExtensionFailed;

  /// @brief Field NoTrackableKeyboard value: I32(1)
  static ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState const NoTrackableKeyboard;

  /// @brief Field Offline value: I32(2)
  static ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState const Offline;

  /// @brief Field Stale value: I32(4)
  static ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState const Stale;

  /// @brief Field StartedNotTracked value: I32(3)
  static ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState const StartedNotTracked;

  /// @brief Field Uninitialized value: I32(0)
  static ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState const Uninitialized;

  /// @brief Field Valid value: I32(5)
  static ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState const Valid;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8339 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRTrackedKeyboard/KeyboardPresentation
struct CORDL_TYPE OVRTrackedKeyboard_KeyboardPresentation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRTrackedKeyboard_KeyboardPresentation_Unwrapped
  enum struct __OVRTrackedKeyboard_KeyboardPresentation_Unwrapped : int32_t {
    __E_PreferOpaque = static_cast<int32_t>(0x0),
    __E_PreferKeyLabels = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRTrackedKeyboard_KeyboardPresentation_Unwrapped() const noexcept {
    return static_cast<__OVRTrackedKeyboard_KeyboardPresentation_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTrackedKeyboard_KeyboardPresentation();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRTrackedKeyboard_KeyboardPresentation(int32_t value__) noexcept;

  /// @brief Field PreferKeyLabels value: I32(1)
  static ::GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation const PreferKeyLabels;

  /// @brief Field PreferOpaque value: I32(0)
  static ::GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation const PreferOpaque;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8340 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRTrackedKeyboard::TrackedKeyboardState
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRTrackedKeyboard/TrackedKeyboardVisibilityChangedEvent
struct CORDL_TYPE OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x401bb00, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::StringW keyboardModel, ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState state, bool timeout);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent();

  // Ctor Parameters [CppParam { name: "ActiveKeyboardName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "State", ty:
  // "::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState", modifiers: "", def_value: None }, CppParam { name: "TrackingTimeout", ty: "bool", modifiers: "", def_value: None }]
  constexpr OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent(::StringW ActiveKeyboardName, ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState State, bool TrackingTimeout) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8341 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field ActiveKeyboardName, offset: 0x0, size: 0x8, def value: None
  ::StringW ActiveKeyboardName;

  /// @brief Field State, offset: 0x8, size: 0x4, def value: None
  ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState State;

  /// @brief Field TrackingTimeout, offset: 0xc, size: 0x1, def value: None
  bool TrackingTimeout;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent, ActiveKeyboardName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent, State) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent, TrackingTimeout) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRTrackedKeyboard/TrackedKeyboardSetActiveEvent
struct CORDL_TYPE OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x401bd10, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(bool isEnabled);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent();

  // Ctor Parameters [CppParam { name: "IsEnabled", ty: "bool", modifiers: "", def_value: None }]
  constexpr OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent(bool IsEnabled) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8342 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field IsEnabled, offset: 0x0, size: 0x1, def value: None
  bool IsEnabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent, IsEnabled) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent, 0x1>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRTrackedKeyboard/<>c
class CORDL_TYPE OVRTrackedKeyboard___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::OVRTrackedKeyboard___c* __9;

  /// @brief Field <>9__113_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__113_0, put = setStaticF___9__113_0)) ::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>* __9__113_0;

  /// @brief Field <>9__113_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__113_1, put = setStaticF___9__113_1)) ::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>* __9__113_1;

  static inline ::GlobalNamespace::OVRTrackedKeyboard___c* New_ctor();

  /// @brief Method <.ctor>b__113_0, addr 0x401bd80, size 0x4, virtual false, abstract: false, final false
  inline void __ctor_b__113_0(::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent _p0_);

  /// @brief Method <.ctor>b__113_1, addr 0x401bd84, size 0x4, virtual false, abstract: false, final false
  inline void __ctor_b__113_1(::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent _p0_);

  /// @brief Method .ctor, addr 0x401bd78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::OVRTrackedKeyboard___c* getStaticF___9();

  static inline ::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>* getStaticF___9__113_0();

  static inline ::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>* getStaticF___9__113_1();

  static inline void setStaticF___9(::GlobalNamespace::OVRTrackedKeyboard___c* value);

  static inline void setStaticF___9__113_0(::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>* value);

  static inline void setStaticF___9__113_1(::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTrackedKeyboard___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRTrackedKeyboard___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRTrackedKeyboard___c(OVRTrackedKeyboard___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRTrackedKeyboard___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRTrackedKeyboard___c(OVRTrackedKeyboard___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8343 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTrackedKeyboard___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRTrackedKeyboard/<InitializeHandPresenceData>d__89
class CORDL_TYPE OVRTrackedKeyboard__InitializeHandPresenceData_d__89 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x401bd8c, size 0x170, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__89* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x401befc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x401bf04, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x401bf3c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x401bd88, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRTrackedKeyboard> value);

  /// @brief Method .ctor, addr 0x401a2b8, size 0x28, virtual false, abstract: false, final false
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
  constexpr OVRTrackedKeyboard__InitializeHandPresenceData_d__89();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRTrackedKeyboard__InitializeHandPresenceData_d__89", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRTrackedKeyboard__InitializeHandPresenceData_d__89(OVRTrackedKeyboard__InitializeHandPresenceData_d__89&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRTrackedKeyboard__InitializeHandPresenceData_d__89", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRTrackedKeyboard__InitializeHandPresenceData_d__89(OVRTrackedKeyboard__InitializeHandPresenceData_d__89 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8344 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__89, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__89, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__89, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__89, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRTrackedKeyboard/<Start>d__88
class CORDL_TYPE OVRTrackedKeyboard__Start_d__88 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x401bf48, size 0x104, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::OVRTrackedKeyboard__Start_d__88* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x401c04c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x401c054, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x401c08c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x401bf44, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRTrackedKeyboard> value);

  /// @brief Method .ctor, addr 0x401a230, size 0x28, virtual false, abstract: false, final false
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
  constexpr OVRTrackedKeyboard__Start_d__88();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRTrackedKeyboard__Start_d__88", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRTrackedKeyboard__Start_d__88(OVRTrackedKeyboard__Start_d__88&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRTrackedKeyboard__Start_d__88", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRTrackedKeyboard__Start_d__88(OVRTrackedKeyboard__Start_d__88 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8345 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard__Start_d__88, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard__Start_d__88, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard__Start_d__88, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTrackedKeyboard__Start_d__88, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRTrackedKeyboard/<StartKeyboardTrackingCoroutine>d__96
class CORDL_TYPE OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__96 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x401c098, size 0x2c4, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__96* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x401c35c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x401c364, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x401c39c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x401c094, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRTrackedKeyboard> value);

  /// @brief Method .ctor, addr 0x401aab0, size 0x28, virtual false, abstract: false, final false
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
  constexpr OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__96();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__96", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__96(OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__96&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__96", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__96(OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__96 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8346 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__96, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__96, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__96, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__96, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRTrackedKeyboard/<UpdateKeyboardPose>d__98
class CORDL_TYPE OVRTrackedKeyboard__UpdateKeyboardPose_d__98 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x401c3a8, size 0x9e4, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__98* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x401cd8c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x401cd94, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x401cdcc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x401c3a4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRTrackedKeyboard> value);

  /// @brief Method .ctor, addr 0x401ae5c, size 0x28, virtual false, abstract: false, final false
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
  constexpr OVRTrackedKeyboard__UpdateKeyboardPose_d__98();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRTrackedKeyboard__UpdateKeyboardPose_d__98", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRTrackedKeyboard__UpdateKeyboardPose_d__98(OVRTrackedKeyboard__UpdateKeyboardPose_d__98&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRTrackedKeyboard__UpdateKeyboardPose_d__98", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRTrackedKeyboard__UpdateKeyboardPose_d__98(OVRTrackedKeyboard__UpdateKeyboardPose_d__98 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8347 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__98, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__98, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__98, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__98, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRKeyboard::TrackedKeyboardInfo, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRTrackedKeyboard/<UpdateTrackingStateCoroutine>d__95
class CORDL_TYPE OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__95 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> __4__this;

  /// @brief Field <keyboardInfo>5__2, offset 0x28, size 0x28
  __declspec(property(get = __cordl_internal_get__keyboardInfo_5__2, put = __cordl_internal_set__keyboardInfo_5__2)) ::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo _keyboardInfo_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x401cdd8, size 0x490, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__95* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x401d268, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x401d270, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x401d2a8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x401cdd4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo const& __cordl_internal_get__keyboardInfo_5__2() const;

  constexpr ::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo& __cordl_internal_get__keyboardInfo_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRTrackedKeyboard> value);

  constexpr void __cordl_internal_set__keyboardInfo_5__2(::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo value);

  /// @brief Method .ctor, addr 0x401aa28, size 0x28, virtual false, abstract: false, final false
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
  constexpr OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__95();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__95", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__95(OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__95&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__95", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__95(OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__95 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8348 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> _____4__this;

  /// @brief Field <keyboardInfo>5__2, offset: 0x28, size: 0x28, def value: None
  ::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo ____keyboardInfo_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__95, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__95, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__95, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__95, ____keyboardInfo_5__2) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__95, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRKeyboard::TrackedKeyboardInfo, OVRPlugin::TrackedKeyboardPresentationStyles, OVRPlugin::TrackedKeyboardQueryFlags, OVRTextureQualityFiltering,
// OVRTrackedKeyboard::KeyboardPresentation, OVRTrackedKeyboard::TrackedKeyboardState, System.Nullable`1<T>, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRTrackedKeyboard
class CORDL_TYPE OVRTrackedKeyboard : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using KeyboardPresentation = ::GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation;

  using TrackedKeyboardSetActiveEvent = ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent;

  using TrackedKeyboardState = ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState;

  using TrackedKeyboardVisibilityChangedEvent = ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent;

  using _InitializeHandPresenceData_d__89 = ::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__89;

  using _StartKeyboardTrackingCoroutine_d__96 = ::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__96;

  using _Start_d__88 = ::GlobalNamespace::OVRTrackedKeyboard__Start_d__88;

  using _UpdateKeyboardPose_d__98 = ::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__98;

  using _UpdateTrackingStateCoroutine_d__95 = ::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__95;

  using __c = ::GlobalNamespace::OVRTrackedKeyboard___c;

  __declspec(property(get = get_ActiveKeyboardInfo, put = set_ActiveKeyboardInfo)) ::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo ActiveKeyboardInfo;

  /// @brief Field ActiveKeyboardTransform, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_ActiveKeyboardTransform, put = __cordl_internal_set_ActiveKeyboardTransform)) ::UnityW<::UnityEngine::Transform> ActiveKeyboardTransform;

  __declspec(property(get = get_ConnectionRequired, put = set_ConnectionRequired)) bool ConnectionRequired;

  __declspec(property(get = get_CurrentKeyboardAngleFromUp, put = set_CurrentKeyboardAngleFromUp)) float_t CurrentKeyboardAngleFromUp;

  /// @brief Field EWAPosition, offset 0x168, size 0x10
  __declspec(property(get = __cordl_internal_get_EWAPosition, put = __cordl_internal_set_EWAPosition)) ::System::Nullable_1<::UnityEngine::Vector3> EWAPosition;

  /// @brief Field EWARotation, offset 0x178, size 0x14
  __declspec(property(get = __cordl_internal_get_EWARotation, put = __cordl_internal_set_EWARotation)) ::System::Nullable_1<::UnityEngine::Quaternion> EWARotation;

  /// @brief Field HAND_HEIGHT_TUNING, offset 0x18c, size 0x4
  __declspec(property(get = __cordl_internal_get_HAND_HEIGHT_TUNING, put = __cordl_internal_set_HAND_HEIGHT_TUNING)) float_t HAND_HEIGHT_TUNING;

  /// @brief Field HandsOverKeyboard, offset 0x138, size 0x1
  __declspec(property(get = __cordl_internal_get_HandsOverKeyboard, put = __cordl_internal_set_HandsOverKeyboard)) bool HandsOverKeyboard;

  /// @brief Field KeyLabelModeShader, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_KeyLabelModeShader, put = __cordl_internal_set_KeyLabelModeShader)) ::UnityW<::UnityEngine::Shader> KeyLabelModeShader;

  __declspec(property(get = get_KeyboardQueryFlags, put = set_KeyboardQueryFlags)) ::GlobalNamespace::OVRPlugin_TrackedKeyboardQueryFlags KeyboardQueryFlags;

  /// @brief Field PassthroughBorderMultiplier, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_PassthroughBorderMultiplier, put = __cordl_internal_set_PassthroughBorderMultiplier)) float_t PassthroughBorderMultiplier;

  __declspec(property(get = get_PassthroughOverlay, put = set_PassthroughOverlay)) ::UnityW<::GlobalNamespace::OVROverlay> PassthroughOverlay;

  /// @brief Field PassthroughShader, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_PassthroughShader, put = __cordl_internal_set_PassthroughShader)) ::UnityW<::UnityEngine::Shader> PassthroughShader;

  __declspec(property(get = get_Presentation, put = set_Presentation)) ::GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation Presentation;

  /// @brief Field ProjectedPassthroughKeyLabel, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_ProjectedPassthroughKeyLabel, put = __cordl_internal_set_ProjectedPassthroughKeyLabel)) ::UnityW<::GlobalNamespace::OVRPassthroughLayer>
      ProjectedPassthroughKeyLabel;

  __declspec(property(get = get_RemoteKeyboard, put = set_RemoteKeyboard)) bool RemoteKeyboard;

  __declspec(property(get = get_ShowUntracked, put = set_ShowUntracked)) bool ShowUntracked;

  __declspec(property(get = get_SystemKeyboardInfo, put = set_SystemKeyboardInfo)) ::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo SystemKeyboardInfo;

  /// @brief Field TrackedKeyboardActiveChanged, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_TrackedKeyboardActiveChanged,
                      put = __cordl_internal_set_TrackedKeyboardActiveChanged)) ::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>* TrackedKeyboardActiveChanged;

  /// @brief Field TrackedKeyboardVisibilityChanged, offset 0x128, size 0x8
  __declspec(property(
      get = __cordl_internal_get_TrackedKeyboardVisibilityChanged,
      put = __cordl_internal_set_TrackedKeyboardVisibilityChanged)) ::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>* TrackedKeyboardVisibilityChanged;

  __declspec(property(get = get_TrackingEnabled, put = set_TrackingEnabled)) bool TrackingEnabled;

  __declspec(property(get = get_TrackingState, put = set_TrackingState)) ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState TrackingState;

  /// @brief Field UseHeuristicRollback, offset 0x190, size 0x1
  __declspec(property(get = __cordl_internal_get_UseHeuristicRollback, put = __cordl_internal_set_UseHeuristicRollback)) bool UseHeuristicRollback;

  /// @brief Field <ActiveKeyboardInfo>k__BackingField, offset 0x28, size 0x28
  __declspec(property(get = __cordl_internal_get__ActiveKeyboardInfo_k__BackingField,
                      put = __cordl_internal_set__ActiveKeyboardInfo_k__BackingField)) ::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo _ActiveKeyboardInfo_k__BackingField;

  /// @brief Field <CurrentKeyboardAngleFromUp>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__CurrentKeyboardAngleFromUp_k__BackingField,
                      put = __cordl_internal_set__CurrentKeyboardAngleFromUp_k__BackingField)) float_t _CurrentKeyboardAngleFromUp_k__BackingField;

  /// @brief Field <SystemKeyboardInfo>k__BackingField, offset 0x50, size 0x28
  __declspec(property(get = __cordl_internal_get__SystemKeyboardInfo_k__BackingField,
                      put = __cordl_internal_set__SystemKeyboardInfo_k__BackingField)) ::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo _SystemKeyboardInfo_k__BackingField;

  /// @brief Field <TrackingState>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__TrackingState_k__BackingField,
                      put = __cordl_internal_set__TrackingState_k__BackingField)) ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState _TrackingState_k__BackingField;

  /// @brief Field activeKeyboardMeshRenderer_, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_activeKeyboardMeshRenderer_, put = __cordl_internal_set_activeKeyboardMeshRenderer_)) ::UnityW<::UnityEngine::MeshRenderer>
      activeKeyboardMeshRenderer_;

  /// @brief Field activeKeyboardMesh_, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_activeKeyboardMesh_, put = __cordl_internal_set_activeKeyboardMesh_)) ::UnityW<::UnityEngine::GameObject> activeKeyboardMesh_;

  /// @brief Field activeKeyboardRenderers_, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_activeKeyboardRenderers_,
                      put = __cordl_internal_set_activeKeyboardRenderers_)) ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*>
      activeKeyboardRenderers_;

  /// @brief Field boundingBoxAboveKeyboardY_, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_boundingBoxAboveKeyboardY_, put = setStaticF_boundingBoxAboveKeyboardY_)) float_t boundingBoxAboveKeyboardY_;

  /// @brief Field cameraRig_, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraRig_, put = __cordl_internal_set_cameraRig_)) ::UnityW<::GlobalNamespace::OVRCameraRig> cameraRig_;

  /// @brief Field connectionRequired, offset 0x79, size 0x1
  __declspec(property(get = __cordl_internal_get_connectionRequired, put = __cordl_internal_set_connectionRequired)) bool connectionRequired;

  /// @brief Field currentKeyboardPresentationStyles, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_currentKeyboardPresentationStyles,
                      put = __cordl_internal_set_currentKeyboardPresentationStyles)) ::GlobalNamespace::OVRPlugin_TrackedKeyboardPresentationStyles currentKeyboardPresentationStyles;

  /// @brief Field dynamicQualityTexture_, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_dynamicQualityTexture_, put = __cordl_internal_set_dynamicQualityTexture_)) ::UnityW<::UnityEngine::Texture2D> dynamicQualityTexture_;

  /// @brief Field initialHorizontalDistanceKeyboard_, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_initialHorizontalDistanceKeyboard_, put = setStaticF_initialHorizontalDistanceKeyboard_)) float_t initialHorizontalDistanceKeyboard_;

  /// @brief Field initialVerticalDistanceKeyboard_, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_initialVerticalDistanceKeyboard_, put = setStaticF_initialVerticalDistanceKeyboard_)) float_t initialVerticalDistanceKeyboard_;

  /// @brief Field keyboardBoundingBox_, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get_keyboardBoundingBox_, put = __cordl_internal_set_keyboardBoundingBox_)) ::UnityW<::UnityEngine::BoxCollider> keyboardBoundingBox_;

  /// @brief Field keyboardMeshNodes_, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_keyboardMeshNodes_,
                      put = __cordl_internal_set_keyboardMeshNodes_)) ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>
      keyboardMeshNodes_;

  /// @brief Field keyboardModelAlphaBlendShader, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_keyboardModelAlphaBlendShader, put = __cordl_internal_set_keyboardModelAlphaBlendShader)) ::UnityW<::UnityEngine::Shader>
      keyboardModelAlphaBlendShader;

  /// @brief Field keyboardModelShader, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_keyboardModelShader, put = __cordl_internal_set_keyboardModelShader)) ::UnityW<::UnityEngine::Shader> keyboardModelShader;

  /// @brief Field keyboardQueryFlags, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_keyboardQueryFlags, put = __cordl_internal_set_keyboardQueryFlags)) ::GlobalNamespace::OVRPlugin_TrackedKeyboardQueryFlags keyboardQueryFlags;

  /// @brief Field mipmapBias, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_mipmapBias, put = __cordl_internal_set_mipmapBias)) float_t mipmapBias;

  /// @brief Field opaqueShader_, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_opaqueShader_, put = __cordl_internal_set_opaqueShader_)) ::UnityW<::UnityEngine::Shader> opaqueShader_;

  /// @brief Field passthroughQuad_, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_passthroughQuad_, put = __cordl_internal_set_passthroughQuad_)) ::UnityW<::UnityEngine::GameObject> passthroughQuad_;

  /// @brief Field presentation, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_presentation, put = __cordl_internal_set_presentation)) ::GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation presentation;

  /// @brief Field projectedPassthroughMesh, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_projectedPassthroughMesh, put = __cordl_internal_set_projectedPassthroughMesh)) ::UnityW<::UnityEngine::MeshFilter> projectedPassthroughMesh;

  /// @brief Field projectedPassthroughOpaque_, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_projectedPassthroughOpaque_, put = __cordl_internal_set_projectedPassthroughOpaque_)) ::UnityW<::GlobalNamespace::OVROverlay>
      projectedPassthroughOpaque_;

  /// @brief Field projectedPassthroughRoot, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_projectedPassthroughRoot, put = __cordl_internal_set_projectedPassthroughRoot)) ::UnityW<::UnityEngine::Transform> projectedPassthroughRoot;

  /// @brief Field reacquisitionTimer_, offset 0x15c, size 0x4
  __declspec(property(get = __cordl_internal_get_reacquisitionTimer_, put = __cordl_internal_set_reacquisitionTimer_)) float_t reacquisitionTimer_;

  /// @brief Field sendFilteredPoseEventTimer_, offset 0x160, size 0x4
  __declspec(property(get = __cordl_internal_get_sendFilteredPoseEventTimer_, put = __cordl_internal_set_sendFilteredPoseEventTimer_)) float_t sendFilteredPoseEventTimer_;

  /// @brief Field showUntracked, offset 0x7a, size 0x1
  __declspec(property(get = __cordl_internal_get_showUntracked, put = __cordl_internal_set_showUntracked)) bool showUntracked;

  /// @brief Field skippedPoseCount_, offset 0x164, size 0x4
  __declspec(property(get = __cordl_internal_get_skippedPoseCount_, put = __cordl_internal_set_skippedPoseCount_)) int32_t skippedPoseCount_;

  /// @brief Field staleTimeoutCounter_, offset 0x158, size 0x4
  __declspec(property(get = __cordl_internal_get_staleTimeoutCounter_, put = __cordl_internal_set_staleTimeoutCounter_)) float_t staleTimeoutCounter_;

  /// @brief Field textureFiltering, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_textureFiltering, put = __cordl_internal_set_textureFiltering)) ::GlobalNamespace::OVRTextureQualityFiltering textureFiltering;

  /// @brief Field trackingEnabled, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get_trackingEnabled, put = __cordl_internal_set_trackingEnabled)) bool trackingEnabled;

  /// @brief Field underlayOffset_, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_underlayOffset_, put = setStaticF_underlayOffset_)) ::UnityEngine::Vector3 underlayOffset_;

  /// @brief Field underlayScaleConstY_, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_underlayScaleConstY_, put = setStaticF_underlayScaleConstY_)) float_t underlayScaleConstY_;

  /// @brief Field underlayScaleMultX_, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_underlayScaleMultX_, put = setStaticF_underlayScaleMultX_)) float_t underlayScaleMultX_;

  /// @brief Field underlayScaleMultZ_, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_underlayScaleMultZ_, put = setStaticF_underlayScaleMultZ_)) float_t underlayScaleMultZ_;

  /// @brief Field untrackedPosition_, offset 0xe8, size 0xc
  __declspec(property(get = __cordl_internal_get_untrackedPosition_, put = __cordl_internal_set_untrackedPosition_)) ::UnityEngine::Vector3 untrackedPosition_;

  /// @brief Field updateKeyboardRoutine_, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_updateKeyboardRoutine_, put = __cordl_internal_set_updateKeyboardRoutine_)) ::UnityEngine::Coroutine* updateKeyboardRoutine_;

  /// @brief Method DispatchVisibilityEvent, addr 0x401b9b8, size 0x34, virtual false, abstract: false, final false
  inline void DispatchVisibilityEvent(bool timeOut);

  /// @brief Method Dispose, addr 0x401b9ec, size 0x114, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method GetDistanceToKeyboard, addr 0x401a378, size 0x22c, virtual false, abstract: false, final false
  inline float_t GetDistanceToKeyboard(::UnityEngine::Vector3 point);

  /// @brief Method GetKeyboardVisibility, addr 0x4019f18, size 0x44, virtual false, abstract: false, final false
  inline bool GetKeyboardVisibility();

  /// @brief Method InitializeHandPresenceData, addr 0x401a258, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* InitializeHandPresenceData();

  /// @brief Method InitializeKeyboardInfo, addr 0x401ada8, size 0x54, virtual false, abstract: false, final false
  inline void InitializeKeyboardInfo();

  /// @brief Method KeyboardTrackerIsRunning, addr 0x401a9b4, size 0x14, virtual false, abstract: false, final false
  inline bool KeyboardTrackerIsRunning();

  /// @brief Method LaunchLocalKeyboardSelectionDialog, addr 0x401a5a4, size 0x40, virtual false, abstract: false, final false
  inline void LaunchLocalKeyboardSelectionDialog();

  /// @brief Method LaunchOverlayIntent, addr 0x401a5e4, size 0x390, virtual false, abstract: false, final false
  inline void LaunchOverlayIntent(::StringW dataUri);

  /// @brief Method LaunchRemoteKeyboardSelectionDialog, addr 0x401a974, size 0x40, virtual false, abstract: false, final false
  inline void LaunchRemoteKeyboardSelectionDialog();

  /// @brief Method LoadKeyboardMesh, addr 0x401aecc, size 0x5fc, virtual false, abstract: false, final false
  inline void LoadKeyboardMesh();

  /// @brief Method LoadRuntimeKeyboardMesh, addr 0x401b4c8, size 0x2ac, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> LoadRuntimeKeyboardMesh();

  static inline ::GlobalNamespace::OVRTrackedKeyboard* New_ctor();

  /// @brief Method RegisterPassthroughMeshToSDK, addr 0x401a2e0, size 0x98, virtual false, abstract: false, final false
  inline void RegisterPassthroughMeshToSDK();

  /// @brief Method SetKeyboardState, addr 0x401acc8, size 0xe0, virtual false, abstract: false, final false
  inline void SetKeyboardState(::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState state);

  /// @brief Method Start, addr 0x401a1d0, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* Start();

  /// @brief Method StartKeyboardTrackingCoroutine, addr 0x401aa50, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* StartKeyboardTrackingCoroutine();

  /// @brief Method StopKeyboardTrackingInternal, addr 0x401aad8, size 0x1f0, virtual false, abstract: false, final false
  inline void StopKeyboardTrackingInternal();

  /// @brief Method UpdateKeyboardPose, addr 0x401adfc, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* UpdateKeyboardPose();

  /// @brief Method UpdateKeyboardVisibility, addr 0x401b8a4, size 0x114, virtual false, abstract: false, final false
  inline void UpdateKeyboardVisibility();

  /// @brief Method UpdatePresentation, addr 0x4019f5c, size 0x1f4, virtual false, abstract: false, final false
  inline void UpdatePresentation(bool isVisible);

  /// @brief Method UpdateSkippedPoseTimer, addr 0x401ae84, size 0x48, virtual false, abstract: false, final false
  inline void UpdateSkippedPoseTimer();

  /// @brief Method UpdateTextureQuality, addr 0x401b774, size 0x130, virtual false, abstract: false, final false
  inline void UpdateTextureQuality();

  /// @brief Method UpdateTrackingStateCoroutine, addr 0x401a9c8, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* UpdateTrackingStateCoroutine();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_ActiveKeyboardTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_ActiveKeyboardTransform();

  constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& __cordl_internal_get_EWAPosition() const;

  constexpr ::System::Nullable_1<::UnityEngine::Vector3>& __cordl_internal_get_EWAPosition();

  constexpr ::System::Nullable_1<::UnityEngine::Quaternion> const& __cordl_internal_get_EWARotation() const;

  constexpr ::System::Nullable_1<::UnityEngine::Quaternion>& __cordl_internal_get_EWARotation();

  constexpr float_t const& __cordl_internal_get_HAND_HEIGHT_TUNING() const;

  constexpr float_t& __cordl_internal_get_HAND_HEIGHT_TUNING();

  constexpr bool const& __cordl_internal_get_HandsOverKeyboard() const;

  constexpr bool& __cordl_internal_get_HandsOverKeyboard();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_KeyLabelModeShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_KeyLabelModeShader();

  constexpr float_t const& __cordl_internal_get_PassthroughBorderMultiplier() const;

  constexpr float_t& __cordl_internal_get_PassthroughBorderMultiplier();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_PassthroughShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_PassthroughShader();

  constexpr ::UnityW<::GlobalNamespace::OVRPassthroughLayer> const& __cordl_internal_get_ProjectedPassthroughKeyLabel() const;

  constexpr ::UnityW<::GlobalNamespace::OVRPassthroughLayer>& __cordl_internal_get_ProjectedPassthroughKeyLabel();

  constexpr ::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>* const& __cordl_internal_get_TrackedKeyboardActiveChanged() const;

  constexpr ::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>*& __cordl_internal_get_TrackedKeyboardActiveChanged();

  constexpr ::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>* const& __cordl_internal_get_TrackedKeyboardVisibilityChanged() const;

  constexpr ::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>*& __cordl_internal_get_TrackedKeyboardVisibilityChanged();

  constexpr bool const& __cordl_internal_get_UseHeuristicRollback() const;

  constexpr bool& __cordl_internal_get_UseHeuristicRollback();

  constexpr ::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo const& __cordl_internal_get__ActiveKeyboardInfo_k__BackingField() const;

  constexpr ::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo& __cordl_internal_get__ActiveKeyboardInfo_k__BackingField();

  constexpr float_t const& __cordl_internal_get__CurrentKeyboardAngleFromUp_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__CurrentKeyboardAngleFromUp_k__BackingField();

  constexpr ::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo const& __cordl_internal_get__SystemKeyboardInfo_k__BackingField() const;

  constexpr ::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo& __cordl_internal_get__SystemKeyboardInfo_k__BackingField();

  constexpr ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState const& __cordl_internal_get__TrackingState_k__BackingField() const;

  constexpr ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState& __cordl_internal_get__TrackingState_k__BackingField();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_activeKeyboardMeshRenderer_() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_activeKeyboardMeshRenderer_();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_activeKeyboardMesh_() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_activeKeyboardMesh_();

  constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> const& __cordl_internal_get_activeKeyboardRenderers_() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*>& __cordl_internal_get_activeKeyboardRenderers_();

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& __cordl_internal_get_cameraRig_() const;

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& __cordl_internal_get_cameraRig_();

  constexpr bool const& __cordl_internal_get_connectionRequired() const;

  constexpr bool& __cordl_internal_get_connectionRequired();

  constexpr ::GlobalNamespace::OVRPlugin_TrackedKeyboardPresentationStyles const& __cordl_internal_get_currentKeyboardPresentationStyles() const;

  constexpr ::GlobalNamespace::OVRPlugin_TrackedKeyboardPresentationStyles& __cordl_internal_get_currentKeyboardPresentationStyles();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_dynamicQualityTexture_() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_dynamicQualityTexture_();

  constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get_keyboardBoundingBox_() const;

  constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get_keyboardBoundingBox_();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_keyboardMeshNodes_() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get_keyboardMeshNodes_();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_keyboardModelAlphaBlendShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_keyboardModelAlphaBlendShader();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_keyboardModelShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_keyboardModelShader();

  constexpr ::GlobalNamespace::OVRPlugin_TrackedKeyboardQueryFlags const& __cordl_internal_get_keyboardQueryFlags() const;

  constexpr ::GlobalNamespace::OVRPlugin_TrackedKeyboardQueryFlags& __cordl_internal_get_keyboardQueryFlags();

  constexpr float_t const& __cordl_internal_get_mipmapBias() const;

  constexpr float_t& __cordl_internal_get_mipmapBias();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_opaqueShader_() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_opaqueShader_();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_passthroughQuad_() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_passthroughQuad_();

  constexpr ::GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation const& __cordl_internal_get_presentation() const;

  constexpr ::GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation& __cordl_internal_get_presentation();

  constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get_projectedPassthroughMesh() const;

  constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get_projectedPassthroughMesh();

  constexpr ::UnityW<::GlobalNamespace::OVROverlay> const& __cordl_internal_get_projectedPassthroughOpaque_() const;

  constexpr ::UnityW<::GlobalNamespace::OVROverlay>& __cordl_internal_get_projectedPassthroughOpaque_();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_projectedPassthroughRoot() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_projectedPassthroughRoot();

  constexpr float_t const& __cordl_internal_get_reacquisitionTimer_() const;

  constexpr float_t& __cordl_internal_get_reacquisitionTimer_();

  constexpr float_t const& __cordl_internal_get_sendFilteredPoseEventTimer_() const;

  constexpr float_t& __cordl_internal_get_sendFilteredPoseEventTimer_();

  constexpr bool const& __cordl_internal_get_showUntracked() const;

  constexpr bool& __cordl_internal_get_showUntracked();

  constexpr int32_t const& __cordl_internal_get_skippedPoseCount_() const;

  constexpr int32_t& __cordl_internal_get_skippedPoseCount_();

  constexpr float_t const& __cordl_internal_get_staleTimeoutCounter_() const;

  constexpr float_t& __cordl_internal_get_staleTimeoutCounter_();

  constexpr ::GlobalNamespace::OVRTextureQualityFiltering const& __cordl_internal_get_textureFiltering() const;

  constexpr ::GlobalNamespace::OVRTextureQualityFiltering& __cordl_internal_get_textureFiltering();

  constexpr bool const& __cordl_internal_get_trackingEnabled() const;

  constexpr bool& __cordl_internal_get_trackingEnabled();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_untrackedPosition_() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_untrackedPosition_();

  constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_updateKeyboardRoutine_() const;

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_updateKeyboardRoutine_();

  constexpr void __cordl_internal_set_ActiveKeyboardTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_EWAPosition(::System::Nullable_1<::UnityEngine::Vector3> value);

  constexpr void __cordl_internal_set_EWARotation(::System::Nullable_1<::UnityEngine::Quaternion> value);

  constexpr void __cordl_internal_set_HAND_HEIGHT_TUNING(float_t value);

  constexpr void __cordl_internal_set_HandsOverKeyboard(bool value);

  constexpr void __cordl_internal_set_KeyLabelModeShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_PassthroughBorderMultiplier(float_t value);

  constexpr void __cordl_internal_set_PassthroughShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_ProjectedPassthroughKeyLabel(::UnityW<::GlobalNamespace::OVRPassthroughLayer> value);

  constexpr void __cordl_internal_set_TrackedKeyboardActiveChanged(::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>* value);

  constexpr void __cordl_internal_set_TrackedKeyboardVisibilityChanged(::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>* value);

  constexpr void __cordl_internal_set_UseHeuristicRollback(bool value);

  constexpr void __cordl_internal_set__ActiveKeyboardInfo_k__BackingField(::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo value);

  constexpr void __cordl_internal_set__CurrentKeyboardAngleFromUp_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__SystemKeyboardInfo_k__BackingField(::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo value);

  constexpr void __cordl_internal_set__TrackingState_k__BackingField(::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState value);

  constexpr void __cordl_internal_set_activeKeyboardMeshRenderer_(::UnityW<::UnityEngine::MeshRenderer> value);

  constexpr void __cordl_internal_set_activeKeyboardMesh_(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_activeKeyboardRenderers_(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> value);

  constexpr void __cordl_internal_set_cameraRig_(::UnityW<::GlobalNamespace::OVRCameraRig> value);

  constexpr void __cordl_internal_set_connectionRequired(bool value);

  constexpr void __cordl_internal_set_currentKeyboardPresentationStyles(::GlobalNamespace::OVRPlugin_TrackedKeyboardPresentationStyles value);

  constexpr void __cordl_internal_set_dynamicQualityTexture_(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_keyboardBoundingBox_(::UnityW<::UnityEngine::BoxCollider> value);

  constexpr void __cordl_internal_set_keyboardMeshNodes_(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  constexpr void __cordl_internal_set_keyboardModelAlphaBlendShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_keyboardModelShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_keyboardQueryFlags(::GlobalNamespace::OVRPlugin_TrackedKeyboardQueryFlags value);

  constexpr void __cordl_internal_set_mipmapBias(float_t value);

  constexpr void __cordl_internal_set_opaqueShader_(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_passthroughQuad_(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_presentation(::GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation value);

  constexpr void __cordl_internal_set_projectedPassthroughMesh(::UnityW<::UnityEngine::MeshFilter> value);

  constexpr void __cordl_internal_set_projectedPassthroughOpaque_(::UnityW<::GlobalNamespace::OVROverlay> value);

  constexpr void __cordl_internal_set_projectedPassthroughRoot(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_reacquisitionTimer_(float_t value);

  constexpr void __cordl_internal_set_sendFilteredPoseEventTimer_(float_t value);

  constexpr void __cordl_internal_set_showUntracked(bool value);

  constexpr void __cordl_internal_set_skippedPoseCount_(int32_t value);

  constexpr void __cordl_internal_set_staleTimeoutCounter_(float_t value);

  constexpr void __cordl_internal_set_textureFiltering(::GlobalNamespace::OVRTextureQualityFiltering value);

  constexpr void __cordl_internal_set_trackingEnabled(bool value);

  constexpr void __cordl_internal_set_untrackedPosition_(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_updateKeyboardRoutine_(::UnityEngine::Coroutine* value);

  /// @brief Method .ctor, addr 0x401bb14, size 0x184, virtual false, abstract: false, final false
  inline void _ctor();

  static inline float_t getStaticF_boundingBoxAboveKeyboardY_();

  static inline float_t getStaticF_initialHorizontalDistanceKeyboard_();

  static inline float_t getStaticF_initialVerticalDistanceKeyboard_();

  static inline ::UnityEngine::Vector3 getStaticF_underlayOffset_();

  static inline float_t getStaticF_underlayScaleConstY_();

  static inline float_t getStaticF_underlayScaleMultX_();

  static inline float_t getStaticF_underlayScaleMultZ_();

  /// @brief Method get_ActiveKeyboardInfo, addr 0x4019e68, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo get_ActiveKeyboardInfo();

  /// @brief Method get_ConnectionRequired, addr 0x401a164, size 0x8, virtual false, abstract: false, final false
  inline bool get_ConnectionRequired();

  /// @brief Method get_CurrentKeyboardAngleFromUp, addr 0x4019e48, size 0x8, virtual false, abstract: false, final false
  inline float_t get_CurrentKeyboardAngleFromUp();

  /// @brief Method get_KeyboardQueryFlags, addr 0x401a1b4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPlugin_TrackedKeyboardQueryFlags get_KeyboardQueryFlags();

  /// @brief Method get_PassthroughOverlay, addr 0x401a1c4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::OVROverlay> get_PassthroughOverlay();

  /// @brief Method get_Presentation, addr 0x4019ec0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation get_Presentation();

  /// @brief Method get_RemoteKeyboard, addr 0x401a18c, size 0x10, virtual false, abstract: false, final false
  inline bool get_RemoteKeyboard();

  /// @brief Method get_ShowUntracked, addr 0x401a178, size 0x8, virtual false, abstract: false, final false
  inline bool get_ShowUntracked();

  /// @brief Method get_SystemKeyboardInfo, addr 0x4019e98, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo get_SystemKeyboardInfo();

  /// @brief Method get_TrackingEnabled, addr 0x401a150, size 0x8, virtual false, abstract: false, final false
  inline bool get_TrackingEnabled();

  /// @brief Method get_TrackingState, addr 0x4019e58, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState get_TrackingState();

  static inline void setStaticF_boundingBoxAboveKeyboardY_(float_t value);

  static inline void setStaticF_initialHorizontalDistanceKeyboard_(float_t value);

  static inline void setStaticF_initialVerticalDistanceKeyboard_(float_t value);

  static inline void setStaticF_underlayOffset_(::UnityEngine::Vector3 value);

  static inline void setStaticF_underlayScaleConstY_(float_t value);

  static inline void setStaticF_underlayScaleMultX_(float_t value);

  static inline void setStaticF_underlayScaleMultZ_(float_t value);

  /// @brief Method set_ActiveKeyboardInfo, addr 0x4019e80, size 0x18, virtual false, abstract: false, final false
  inline void set_ActiveKeyboardInfo(::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo value);

  /// @brief Method set_ConnectionRequired, addr 0x401a16c, size 0xc, virtual false, abstract: false, final false
  inline void set_ConnectionRequired(bool value);

  /// @brief Method set_CurrentKeyboardAngleFromUp, addr 0x4019e50, size 0x8, virtual false, abstract: false, final false
  inline void set_CurrentKeyboardAngleFromUp(float_t value);

  /// @brief Method set_KeyboardQueryFlags, addr 0x401a1bc, size 0x8, virtual false, abstract: false, final false
  inline void set_KeyboardQueryFlags(::GlobalNamespace::OVRPlugin_TrackedKeyboardQueryFlags value);

  /// @brief Method set_PassthroughOverlay, addr 0x401a1cc, size 0x4, virtual false, abstract: false, final false
  inline void set_PassthroughOverlay(::GlobalNamespace::OVROverlay* value);

  /// @brief Method set_Presentation, addr 0x4019ec8, size 0x50, virtual false, abstract: false, final false
  inline void set_Presentation(::GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation value);

  /// @brief Method set_RemoteKeyboard, addr 0x401a19c, size 0x18, virtual false, abstract: false, final false
  inline void set_RemoteKeyboard(bool value);

  /// @brief Method set_ShowUntracked, addr 0x401a180, size 0xc, virtual false, abstract: false, final false
  inline void set_ShowUntracked(bool value);

  /// @brief Method set_SystemKeyboardInfo, addr 0x4019eac, size 0x14, virtual false, abstract: false, final false
  inline void set_SystemKeyboardInfo(::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo value);

  /// @brief Method set_TrackingEnabled, addr 0x401a158, size 0xc, virtual false, abstract: false, final false
  inline void set_TrackingEnabled(bool value);

  /// @brief Method set_TrackingState, addr 0x4019e60, size 0x8, virtual false, abstract: false, final false
  inline void set_TrackingState(::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTrackedKeyboard();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRTrackedKeyboard", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRTrackedKeyboard(OVRTrackedKeyboard&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRTrackedKeyboard", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRTrackedKeyboard(OVRTrackedKeyboard const&) = delete;

  /// @brief Field FILTERED_POSE_TIMEOUT offset 0xffffffff size 0x4
  static constexpr float_t FILTERED_POSE_TIMEOUT{ static_cast<float_t>(15.0f) };

  /// @brief Field STALE_TIMEOUT offset 0xffffffff size 0x4
  static constexpr float_t STALE_TIMEOUT{ static_cast<float_t>(10.0f) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8349 };

  /// @brief Field <CurrentKeyboardAngleFromUp>k__BackingField, offset: 0x20, size: 0x4, def value: None
  float_t ____CurrentKeyboardAngleFromUp_k__BackingField;

  /// @brief Field <TrackingState>k__BackingField, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState ____TrackingState_k__BackingField;

  /// @brief Field <ActiveKeyboardInfo>k__BackingField, offset: 0x28, size: 0x28, def value: None
  ::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo ____ActiveKeyboardInfo_k__BackingField;

  /// @brief Field <SystemKeyboardInfo>k__BackingField, offset: 0x50, size: 0x28, def value: None
  ::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo ____SystemKeyboardInfo_k__BackingField;

  /// @brief Field trackingEnabled, offset: 0x78, size: 0x1, def value: None
  bool ___trackingEnabled;

  /// @brief Field connectionRequired, offset: 0x79, size: 0x1, def value: None
  bool ___connectionRequired;

  /// @brief Field showUntracked, offset: 0x7a, size: 0x1, def value: None
  bool ___showUntracked;

  /// @brief Field keyboardQueryFlags, offset: 0x7c, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_TrackedKeyboardQueryFlags ___keyboardQueryFlags;

  /// @brief Field presentation, offset: 0x80, size: 0x4, def value: None
  ::GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation ___presentation;

  /// @brief Field textureFiltering, offset: 0x84, size: 0x4, def value: None
  ::GlobalNamespace::OVRTextureQualityFiltering ___textureFiltering;

  /// @brief Field mipmapBias, offset: 0x88, size: 0x4, def value: None
  float_t ___mipmapBias;

  /// @brief Field PassthroughBorderMultiplier, offset: 0x8c, size: 0x4, def value: None
  float_t ___PassthroughBorderMultiplier;

  /// @brief Field keyboardModelShader, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___keyboardModelShader;

  /// @brief Field keyboardModelAlphaBlendShader, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___keyboardModelAlphaBlendShader;

  /// @brief Field currentKeyboardPresentationStyles, offset: 0xa0, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_TrackedKeyboardPresentationStyles ___currentKeyboardPresentationStyles;

  /// @brief Field projectedPassthroughOpaque_, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVROverlay> ___projectedPassthroughOpaque_;

  /// @brief Field activeKeyboardRenderers_, offset: 0xb0, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> ___activeKeyboardRenderers_;

  /// @brief Field activeKeyboardMesh_, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___activeKeyboardMesh_;

  /// @brief Field keyboardMeshNodes_, offset: 0xc0, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ___keyboardMeshNodes_;

  /// @brief Field activeKeyboardMeshRenderer_, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ___activeKeyboardMeshRenderer_;

  /// @brief Field passthroughQuad_, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___passthroughQuad_;

  /// @brief Field opaqueShader_, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___opaqueShader_;

  /// @brief Field dynamicQualityTexture_, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___dynamicQualityTexture_;

  /// @brief Field untrackedPosition_, offset: 0xe8, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___untrackedPosition_;

  /// @brief Field KeyLabelModeShader, offset: 0xf8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___KeyLabelModeShader;

  /// @brief Field PassthroughShader, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___PassthroughShader;

  /// @brief Field projectedPassthroughRoot, offset: 0x108, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___projectedPassthroughRoot;

  /// @brief Field projectedPassthroughMesh, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshFilter> ___projectedPassthroughMesh;

  /// @brief Field ProjectedPassthroughKeyLabel, offset: 0x118, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRPassthroughLayer> ___ProjectedPassthroughKeyLabel;

  /// @brief Field TrackedKeyboardActiveChanged, offset: 0x120, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>* ___TrackedKeyboardActiveChanged;

  /// @brief Field TrackedKeyboardVisibilityChanged, offset: 0x128, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>* ___TrackedKeyboardVisibilityChanged;

  /// @brief Field ActiveKeyboardTransform, offset: 0x130, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___ActiveKeyboardTransform;

  /// @brief Field HandsOverKeyboard, offset: 0x138, size: 0x1, def value: None
  bool ___HandsOverKeyboard;

  /// @brief Field cameraRig_, offset: 0x140, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRCameraRig> ___cameraRig_;

  /// @brief Field updateKeyboardRoutine_, offset: 0x148, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___updateKeyboardRoutine_;

  /// @brief Field keyboardBoundingBox_, offset: 0x150, size: 0x8, def value: None
  ::UnityW<::UnityEngine::BoxCollider> ___keyboardBoundingBox_;

  /// @brief Field staleTimeoutCounter_, offset: 0x158, size: 0x4, def value: None
  float_t ___staleTimeoutCounter_;

  /// @brief Field reacquisitionTimer_, offset: 0x15c, size: 0x4, def value: None
  float_t ___reacquisitionTimer_;

  /// @brief Field sendFilteredPoseEventTimer_, offset: 0x160, size: 0x4, def value: None
  float_t ___sendFilteredPoseEventTimer_;

  /// @brief Field skippedPoseCount_, offset: 0x164, size: 0x4, def value: None
  int32_t ___skippedPoseCount_;

  /// @brief Field EWAPosition, offset: 0x168, size: 0x10, def value: None
  ::System::Nullable_1<::UnityEngine::Vector3> ___EWAPosition;

  /// @brief Field EWARotation, offset: 0x178, size: 0x14, def value: None
  ::System::Nullable_1<::UnityEngine::Quaternion> ___EWARotation;

  /// @brief Field HAND_HEIGHT_TUNING, offset: 0x18c, size: 0x4, def value: None
  float_t ___HAND_HEIGHT_TUNING;

  /// @brief Field UseHeuristicRollback, offset: 0x190, size: 0x1, def value: None
  bool ___UseHeuristicRollback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ____CurrentKeyboardAngleFromUp_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ____TrackingState_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ____ActiveKeyboardInfo_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ____SystemKeyboardInfo_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___trackingEnabled) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___connectionRequired) == 0x79, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___showUntracked) == 0x7a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___keyboardQueryFlags) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___presentation) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___textureFiltering) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___mipmapBias) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___PassthroughBorderMultiplier) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___keyboardModelShader) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___keyboardModelAlphaBlendShader) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___currentKeyboardPresentationStyles) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___projectedPassthroughOpaque_) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___activeKeyboardRenderers_) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___activeKeyboardMesh_) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___keyboardMeshNodes_) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___activeKeyboardMeshRenderer_) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___passthroughQuad_) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___opaqueShader_) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___dynamicQualityTexture_) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___untrackedPosition_) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___KeyLabelModeShader) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___PassthroughShader) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___projectedPassthroughRoot) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___projectedPassthroughMesh) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___ProjectedPassthroughKeyLabel) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___TrackedKeyboardActiveChanged) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___TrackedKeyboardVisibilityChanged) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___ActiveKeyboardTransform) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___HandsOverKeyboard) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___cameraRig_) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___updateKeyboardRoutine_) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___keyboardBoundingBox_) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___staleTimeoutCounter_) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___reacquisitionTimer_) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___sendFilteredPoseEventTimer_) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___skippedPoseCount_) == 0x164, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___EWAPosition) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___EWARotation) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___HAND_HEIGHT_TUNING) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___UseHeuristicRollback) == 0x190, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTrackedKeyboard, 0x198>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation, "", "OVRTrackedKeyboard/KeyboardPresentation");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState, "", "OVRTrackedKeyboard/TrackedKeyboardState");
NEED_NO_BOX(::GlobalNamespace::OVRTrackedKeyboard);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTrackedKeyboard*, "", "OVRTrackedKeyboard");
NEED_NO_BOX(::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__89);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__89*, "", "OVRTrackedKeyboard/<InitializeHandPresenceData>d__89");
NEED_NO_BOX(::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__96);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__96*, "", "OVRTrackedKeyboard/<StartKeyboardTrackingCoroutine>d__96");
NEED_NO_BOX(::GlobalNamespace::OVRTrackedKeyboard__Start_d__88);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTrackedKeyboard__Start_d__88*, "", "OVRTrackedKeyboard/<Start>d__88");
NEED_NO_BOX(::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__98);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__98*, "", "OVRTrackedKeyboard/<UpdateKeyboardPose>d__98");
NEED_NO_BOX(::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__95);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__95*, "", "OVRTrackedKeyboard/<UpdateTrackingStateCoroutine>d__95");
NEED_NO_BOX(::GlobalNamespace::OVRTrackedKeyboard___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTrackedKeyboard___c*, "", "OVRTrackedKeyboard/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent, "", "OVRTrackedKeyboard/TrackedKeyboardSetActiveEvent");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent, "", "OVRTrackedKeyboard/TrackedKeyboardVisibilityChangedEvent");
