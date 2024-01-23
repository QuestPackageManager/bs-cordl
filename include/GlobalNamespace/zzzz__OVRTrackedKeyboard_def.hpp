#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRKeyboard_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRTextureQualityFiltering_def.hpp"
#include "GlobalNamespace/zzzz__OVRTrackedKeyboard_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRTrackedKeyboard)
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace GlobalNamespace {
class OVROverlay;
}
namespace GlobalNamespace {
class OVRPassthroughLayer;
}
namespace GlobalNamespace {
struct __OVRKeyboard__TrackedKeyboardInfo;
}
namespace GlobalNamespace {
struct __OVRPlugin__TrackedKeyboardQueryFlags;
}
namespace GlobalNamespace {
struct __OVRTrackedKeyboard__KeyboardPresentation;
}
namespace GlobalNamespace {
struct __OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent;
}
namespace GlobalNamespace {
struct __OVRTrackedKeyboard__TrackedKeyboardState;
}
namespace GlobalNamespace {
struct __OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent;
}
namespace GlobalNamespace {
class __OVRTrackedKeyboard___InitializeHandPresenceData_d__89;
}
namespace GlobalNamespace {
class __OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96;
}
namespace GlobalNamespace {
class __OVRTrackedKeyboard___Start_d__88;
}
namespace GlobalNamespace {
class __OVRTrackedKeyboard___UpdateKeyboardPose_d__98;
}
namespace GlobalNamespace {
class __OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95;
}
namespace GlobalNamespace {
class __OVRTrackedKeyboard____c;
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
class IDisposable;
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
struct __OVRTrackedKeyboard__KeyboardPresentation;
}
namespace GlobalNamespace {
struct __OVRTrackedKeyboard__TrackedKeyboardState;
}
namespace GlobalNamespace {
class OVRTrackedKeyboard;
}
namespace GlobalNamespace {
class __OVRTrackedKeyboard___InitializeHandPresenceData_d__89;
}
namespace GlobalNamespace {
class __OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96;
}
namespace GlobalNamespace {
class __OVRTrackedKeyboard___Start_d__88;
}
namespace GlobalNamespace {
class __OVRTrackedKeyboard___UpdateKeyboardPose_d__98;
}
namespace GlobalNamespace {
class __OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95;
}
namespace GlobalNamespace {
class __OVRTrackedKeyboard____c;
}
namespace GlobalNamespace {
struct __OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent;
}
namespace GlobalNamespace {
struct __OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation);
MARK_VAL_T(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState);
MARK_REF_PTR_T(::GlobalNamespace::OVRTrackedKeyboard);
MARK_REF_PTR_T(::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89);
MARK_REF_PTR_T(::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96);
MARK_REF_PTR_T(::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88);
MARK_REF_PTR_T(::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98);
MARK_REF_PTR_T(::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95);
MARK_REF_PTR_T(::GlobalNamespace::__OVRTrackedKeyboard____c);
MARK_VAL_T(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent);
MARK_VAL_T(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent);
// Type: ::TrackedKeyboardState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8028))
// CS Name: ::OVRTrackedKeyboard::TrackedKeyboardState
struct CORDL_TYPE __OVRTrackedKeyboard__TrackedKeyboardState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRTrackedKeyboard__TrackedKeyboardState_Unwrapped
  enum struct ____OVRTrackedKeyboard__TrackedKeyboardState_Unwrapped : int32_t {
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
  constexpr operator ____OVRTrackedKeyboard__TrackedKeyboardState_Unwrapped() const noexcept {
    return static_cast<____OVRTrackedKeyboard__TrackedKeyboardState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRTrackedKeyboard__TrackedKeyboardState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRTrackedKeyboard__TrackedKeyboardState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Uninitialized value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState const Uninitialized;

  /// @brief Field NoTrackableKeyboard value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState const NoTrackableKeyboard;

  /// @brief Field Offline value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState const Offline;

  /// @brief Field StartedNotTracked value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState const StartedNotTracked;

  /// @brief Field Stale value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState const Stale;

  /// @brief Field Valid value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState const Valid;

  /// @brief Field Error value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState const Error;

  /// @brief Field ErrorExtensionFailed value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState const ErrorExtensionFailed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::KeyboardPresentation
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8029))
// CS Name: ::OVRTrackedKeyboard::KeyboardPresentation
struct CORDL_TYPE __OVRTrackedKeyboard__KeyboardPresentation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRTrackedKeyboard__KeyboardPresentation_Unwrapped
  enum struct ____OVRTrackedKeyboard__KeyboardPresentation_Unwrapped : int32_t {
    __E_PreferOpaque = static_cast<int32_t>(0x0),
    __E_PreferKeyLabels = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRTrackedKeyboard__KeyboardPresentation_Unwrapped() const noexcept {
    return static_cast<____OVRTrackedKeyboard__KeyboardPresentation_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRTrackedKeyboard__KeyboardPresentation(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRTrackedKeyboard__KeyboardPresentation();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field PreferOpaque value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation const PreferOpaque;

  /// @brief Field PreferKeyLabels value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation const PreferKeyLabels;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TrackedKeyboardVisibilityChangedEvent
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 29, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8028))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8030))
// CS Name: ::OVRTrackedKeyboard::TrackedKeyboardVisibilityChangedEvent
struct CORDL_TYPE __OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2795680, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::StringW keyboardModel, ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState state, bool timeout);

  // Ctor Parameters [CppParam { name: "ActiveKeyboardName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "State", ty:
  // "::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState", modifiers: "", def_value: None }, CppParam { name: "TrackingTimeout", ty: "bool", modifiers: "", def_value: None }]
  constexpr __OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent(::StringW ActiveKeyboardName, ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState State,
                                                                        bool TrackingTimeout) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent();

  /// @brief Field ActiveKeyboardName, offset: 0x0, size: 0x8, def value: None
  ::StringW ActiveKeyboardName;

  /// @brief Field State, offset: 0x8, size: 0x4, def value: None
  ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState State;

  /// @brief Field TrackingTimeout, offset: 0xc, size: 0x1, def value: None
  bool TrackingTimeout;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent, ActiveKeyboardName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent, State) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent, TrackingTimeout) == 0xc, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TrackedKeyboardSetActiveEvent
// SizeInfo { instance_size: 1, native_size: 4, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8031))
// CS Name: ::OVRTrackedKeyboard::TrackedKeyboardSetActiveEvent
struct CORDL_TYPE __OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x279589c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(bool isEnabled);

  // Ctor Parameters [CppParam { name: "IsEnabled", ty: "bool", modifiers: "", def_value: None }]
  constexpr __OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent(bool IsEnabled) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent();

  /// @brief Field IsEnabled, offset: 0x0, size: 0x1, def value: None
  bool IsEnabled;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent, 0x1>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent, IsEnabled) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<Start>d__88
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8032))
// CS Name: ::OVRTrackedKeyboard::<Start>d__88*
class CORDL_TYPE __OVRTrackedKeyboard___Start_d__88 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::OVRTrackedKeyboard> __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRTrackedKeyboard> value);

  static inline ::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x2793de0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x27958a8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x27958ac, size 0x104, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x27959b0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x27959b8, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x27959f8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRTrackedKeyboard___Start_d__88", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRTrackedKeyboard___Start_d__88(__OVRTrackedKeyboard___Start_d__88&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRTrackedKeyboard___Start_d__88", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRTrackedKeyboard___Start_d__88(__OVRTrackedKeyboard___Start_d__88 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRTrackedKeyboard___Start_d__88();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<InitializeHandPresenceData>d__89
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8033))
// CS Name: ::OVRTrackedKeyboard::<InitializeHandPresenceData>d__89*
class CORDL_TYPE __OVRTrackedKeyboard___InitializeHandPresenceData_d__89 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::OVRTrackedKeyboard> __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRTrackedKeyboard> value);

  static inline ::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x2793e70, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x2795a00, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x2795a04, size 0x170, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2795b74, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2795b7c, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2795bbc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRTrackedKeyboard___InitializeHandPresenceData_d__89", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRTrackedKeyboard___InitializeHandPresenceData_d__89(__OVRTrackedKeyboard___InitializeHandPresenceData_d__89&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRTrackedKeyboard___InitializeHandPresenceData_d__89", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRTrackedKeyboard___InitializeHandPresenceData_d__89(__OVRTrackedKeyboard___InitializeHandPresenceData_d__89 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRTrackedKeyboard___InitializeHandPresenceData_d__89();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<UpdateTrackingStateCoroutine>d__95
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(8026))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8034))
// CS Name: ::OVRTrackedKeyboard::<UpdateTrackingStateCoroutine>d__95*
class CORDL_TYPE __OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::OVRTrackedKeyboard> __4__this;

  /// @brief Field <keyboardInfo>5__2, offset 0x28, size 0x28
  __declspec(property(get = __cordl_internal_get__keyboardInfo_5__2, put = __cordl_internal_set__keyboardInfo_5__2))::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo _keyboardInfo_5__2;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRTrackedKeyboard> value);

  constexpr ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo& __cordl_internal_get__keyboardInfo_5__2();

  constexpr ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo const& __cordl_internal_get__keyboardInfo_5__2() const;

  constexpr void __cordl_internal_set__keyboardInfo_5__2(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo value);

  static inline ::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x2794544, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x2795bc4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x2795bc8, size 0x4bc, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2796084, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x279608c, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x27960cc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95(__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95(__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> _____4__this;

  /// @brief Field <keyboardInfo>5__2, offset: 0x28, size: 0x28, def value: None
  ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo ____keyboardInfo_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95, ____keyboardInfo_5__2) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<StartKeyboardTrackingCoroutine>d__96
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8035))
// CS Name: ::OVRTrackedKeyboard::<StartKeyboardTrackingCoroutine>d__96*
class CORDL_TYPE __OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::OVRTrackedKeyboard> __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRTrackedKeyboard> value);

  static inline ::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x27945d4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x27960d4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x27960d8, size 0x2c4, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x279639c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x27963a4, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x27963e4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96(__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96(__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<UpdateKeyboardPose>d__98
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8036))
// CS Name: ::OVRTrackedKeyboard::<UpdateKeyboardPose>d__98*
class CORDL_TYPE __OVRTrackedKeyboard___UpdateKeyboardPose_d__98 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::OVRTrackedKeyboard> __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRTrackedKeyboard> value);

  static inline ::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x279498c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x27963ec, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x27963f0, size 0x9a8, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2796d98, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2796da0, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2796de0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRTrackedKeyboard___UpdateKeyboardPose_d__98", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRTrackedKeyboard___UpdateKeyboardPose_d__98(__OVRTrackedKeyboard___UpdateKeyboardPose_d__98&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRTrackedKeyboard___UpdateKeyboardPose_d__98", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRTrackedKeyboard___UpdateKeyboardPose_d__98(__OVRTrackedKeyboard___UpdateKeyboardPose_d__98 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRTrackedKeyboard___UpdateKeyboardPose_d__98();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8037))
// CS Name: ::OVRTrackedKeyboard::<>c*
class CORDL_TYPE __OVRTrackedKeyboard____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__OVRTrackedKeyboard____c* __9;

  /// @brief Field <>9__113_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__113_0, put = setStaticF___9__113_0))::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>* __9__113_0;

  /// @brief Field <>9__113_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__113_1, put = setStaticF___9__113_1))::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>* __9__113_1;

  static inline void setStaticF___9(::GlobalNamespace::__OVRTrackedKeyboard____c* value);

  static inline ::GlobalNamespace::__OVRTrackedKeyboard____c* getStaticF___9();

  static inline void setStaticF___9__113_0(::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>* value);

  static inline ::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>* getStaticF___9__113_0();

  static inline void setStaticF___9__113_1(::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>* value);

  static inline ::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>* getStaticF___9__113_1();

  static inline ::GlobalNamespace::__OVRTrackedKeyboard____c* New_ctor();

  /// @brief Method .ctor, addr 0x2796e4c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <.ctor>b__113_0, addr 0x2796e54, size 0x4, virtual false, abstract: false, final false
  inline void __ctor_b__113_0(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent _p0_);

  /// @brief Method <.ctor>b__113_1, addr 0x2796e58, size 0x4, virtual false, abstract: false, final false
  inline void __ctor_b__113_1(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent _p0_);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRTrackedKeyboard____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRTrackedKeyboard____c(__OVRTrackedKeyboard____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRTrackedKeyboard____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRTrackedKeyboard____c(__OVRTrackedKeyboard____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRTrackedKeyboard____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTrackedKeyboard____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRTrackedKeyboard
// SizeInfo { instance_size: 400, native_size: -1, calculated_instance_size: 400, calculated_native_size: 393, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2448)), TypeDefinitionIndex(TypeDefinitionIndex(7563)), TypeDefinitionIndex(TypeDefinitionIndex(7790)),
// TypeDefinitionIndex(TypeDefinitionIndex(7792)), TypeDefinitionIndex(TypeDefinitionIndex(8026)), TypeDefinitionIndex(TypeDefinitionIndex(8028)), TypeDefinitionIndex(TypeDefinitionIndex(8029)),
// TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10252)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(2448), inst: 412 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 3342 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(8038)) CS Name:
// ::OVRTrackedKeyboard*
class CORDL_TYPE OVRTrackedKeyboard : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::GlobalNamespace::__OVRTrackedKeyboard____c;

  using _UpdateKeyboardPose_d__98 = ::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98;

  using _StartKeyboardTrackingCoroutine_d__96 = ::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96;

  using _UpdateTrackingStateCoroutine_d__95 = ::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95;

  using _InitializeHandPresenceData_d__89 = ::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89;

  using _Start_d__88 = ::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88;

  using TrackedKeyboardSetActiveEvent = ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent;

  using TrackedKeyboardVisibilityChangedEvent = ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent;

  using KeyboardPresentation = ::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation;

  using TrackedKeyboardState = ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState;

  /// @brief Field <CurrentKeyboardAngleFromUp>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__CurrentKeyboardAngleFromUp_k__BackingField,
                      put = __cordl_internal_set__CurrentKeyboardAngleFromUp_k__BackingField)) float_t _CurrentKeyboardAngleFromUp_k__BackingField;

  /// @brief Field <TrackingState>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__TrackingState_k__BackingField,
                      put = __cordl_internal_set__TrackingState_k__BackingField))::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState _TrackingState_k__BackingField;

  /// @brief Field <ActiveKeyboardInfo>k__BackingField, offset 0x20, size 0x28
  __declspec(property(get = __cordl_internal_get__ActiveKeyboardInfo_k__BackingField,
                      put = __cordl_internal_set__ActiveKeyboardInfo_k__BackingField))::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo _ActiveKeyboardInfo_k__BackingField;

  /// @brief Field <SystemKeyboardInfo>k__BackingField, offset 0x48, size 0x28
  __declspec(property(get = __cordl_internal_get__SystemKeyboardInfo_k__BackingField,
                      put = __cordl_internal_set__SystemKeyboardInfo_k__BackingField))::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo _SystemKeyboardInfo_k__BackingField;

  /// @brief Field trackingEnabled, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_trackingEnabled, put = __cordl_internal_set_trackingEnabled)) bool trackingEnabled;

  /// @brief Field connectionRequired, offset 0x71, size 0x1
  __declspec(property(get = __cordl_internal_get_connectionRequired, put = __cordl_internal_set_connectionRequired)) bool connectionRequired;

  /// @brief Field showUntracked, offset 0x72, size 0x1
  __declspec(property(get = __cordl_internal_get_showUntracked, put = __cordl_internal_set_showUntracked)) bool showUntracked;

  /// @brief Field keyboardQueryFlags, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_keyboardQueryFlags, put = __cordl_internal_set_keyboardQueryFlags))::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags keyboardQueryFlags;

  /// @brief Field presentation, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_presentation, put = __cordl_internal_set_presentation))::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation presentation;

  /// @brief Field textureFiltering, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_textureFiltering, put = __cordl_internal_set_textureFiltering))::GlobalNamespace::OVRTextureQualityFiltering textureFiltering;

  /// @brief Field mipmapBias, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_mipmapBias, put = __cordl_internal_set_mipmapBias)) float_t mipmapBias;

  /// @brief Field PassthroughBorderMultiplier, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_PassthroughBorderMultiplier, put = __cordl_internal_set_PassthroughBorderMultiplier)) float_t PassthroughBorderMultiplier;

  /// @brief Field keyboardModelShader, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_keyboardModelShader, put = __cordl_internal_set_keyboardModelShader))::UnityW<::UnityEngine::Shader> keyboardModelShader;

  /// @brief Field keyboardModelAlphaBlendShader, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_keyboardModelAlphaBlendShader, put = __cordl_internal_set_keyboardModelAlphaBlendShader))::UnityW<::UnityEngine::Shader> keyboardModelAlphaBlendShader;

  /// @brief Field currentKeyboardPresentationStyles, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_currentKeyboardPresentationStyles,
                      put = __cordl_internal_set_currentKeyboardPresentationStyles))::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles currentKeyboardPresentationStyles;

  /// @brief Field projectedPassthroughOpaque_, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_projectedPassthroughOpaque_,
                      put = __cordl_internal_set_projectedPassthroughOpaque_))::UnityW<::GlobalNamespace::OVROverlay> projectedPassthroughOpaque_;

  /// @brief Field activeKeyboardRenderers_, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_activeKeyboardRenderers_,
                      put = __cordl_internal_set_activeKeyboardRenderers_))::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> activeKeyboardRenderers_;

  /// @brief Field activeKeyboardMesh_, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_activeKeyboardMesh_, put = __cordl_internal_set_activeKeyboardMesh_))::UnityW<::UnityEngine::GameObject> activeKeyboardMesh_;

  /// @brief Field keyboardMeshNodes_, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_keyboardMeshNodes_,
                      put = __cordl_internal_set_keyboardMeshNodes_))::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> keyboardMeshNodes_;

  /// @brief Field activeKeyboardMeshRenderer_, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_activeKeyboardMeshRenderer_, put = __cordl_internal_set_activeKeyboardMeshRenderer_))::UnityW<::UnityEngine::MeshRenderer> activeKeyboardMeshRenderer_;

  /// @brief Field passthroughQuad_, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_passthroughQuad_, put = __cordl_internal_set_passthroughQuad_))::UnityW<::UnityEngine::GameObject> passthroughQuad_;

  /// @brief Field opaqueShader_, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_opaqueShader_, put = __cordl_internal_set_opaqueShader_))::UnityW<::UnityEngine::Shader> opaqueShader_;

  /// @brief Field dynamicQualityTexture_, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_dynamicQualityTexture_, put = __cordl_internal_set_dynamicQualityTexture_))::UnityW<::UnityEngine::Texture2D> dynamicQualityTexture_;

  /// @brief Field untrackedPosition_, offset 0xe0, size 0xc
  __declspec(property(get = __cordl_internal_get_untrackedPosition_, put = __cordl_internal_set_untrackedPosition_))::UnityEngine::Vector3 untrackedPosition_;

  /// @brief Field KeyLabelModeShader, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_KeyLabelModeShader, put = __cordl_internal_set_KeyLabelModeShader))::UnityW<::UnityEngine::Shader> KeyLabelModeShader;

  /// @brief Field PassthroughShader, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_PassthroughShader, put = __cordl_internal_set_PassthroughShader))::UnityW<::UnityEngine::Shader> PassthroughShader;

  /// @brief Field projectedPassthroughRoot, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_projectedPassthroughRoot, put = __cordl_internal_set_projectedPassthroughRoot))::UnityW<::UnityEngine::Transform> projectedPassthroughRoot;

  /// @brief Field projectedPassthroughMesh, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_projectedPassthroughMesh, put = __cordl_internal_set_projectedPassthroughMesh))::UnityW<::UnityEngine::MeshFilter> projectedPassthroughMesh;

  /// @brief Field ProjectedPassthroughKeyLabel, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_ProjectedPassthroughKeyLabel,
                      put = __cordl_internal_set_ProjectedPassthroughKeyLabel))::UnityW<::GlobalNamespace::OVRPassthroughLayer> ProjectedPassthroughKeyLabel;

  /// @brief Field TrackedKeyboardActiveChanged, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_TrackedKeyboardActiveChanged,
                      put = __cordl_internal_set_TrackedKeyboardActiveChanged))::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>* TrackedKeyboardActiveChanged;

  /// @brief Field TrackedKeyboardVisibilityChanged, offset 0x120, size 0x8
  __declspec(property(
      get = __cordl_internal_get_TrackedKeyboardVisibilityChanged,
      put = __cordl_internal_set_TrackedKeyboardVisibilityChanged))::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>* TrackedKeyboardVisibilityChanged;

  /// @brief Field ActiveKeyboardTransform, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_ActiveKeyboardTransform, put = __cordl_internal_set_ActiveKeyboardTransform))::UnityW<::UnityEngine::Transform> ActiveKeyboardTransform;

  /// @brief Field HandsOverKeyboard, offset 0x130, size 0x1
  __declspec(property(get = __cordl_internal_get_HandsOverKeyboard, put = __cordl_internal_set_HandsOverKeyboard)) bool HandsOverKeyboard;

  /// @brief Field cameraRig_, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraRig_, put = __cordl_internal_set_cameraRig_))::UnityW<::GlobalNamespace::OVRCameraRig> cameraRig_;

  /// @brief Field updateKeyboardRoutine_, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_updateKeyboardRoutine_, put = __cordl_internal_set_updateKeyboardRoutine_))::UnityEngine::Coroutine* updateKeyboardRoutine_;

  /// @brief Field keyboardBoundingBox_, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_keyboardBoundingBox_, put = __cordl_internal_set_keyboardBoundingBox_))::UnityW<::UnityEngine::BoxCollider> keyboardBoundingBox_;

  /// @brief Field staleTimeoutCounter_, offset 0x150, size 0x4
  __declspec(property(get = __cordl_internal_get_staleTimeoutCounter_, put = __cordl_internal_set_staleTimeoutCounter_)) float_t staleTimeoutCounter_;

  /// @brief Field reacquisitionTimer_, offset 0x154, size 0x4
  __declspec(property(get = __cordl_internal_get_reacquisitionTimer_, put = __cordl_internal_set_reacquisitionTimer_)) float_t reacquisitionTimer_;

  /// @brief Field sendFilteredPoseEventTimer_, offset 0x158, size 0x4
  __declspec(property(get = __cordl_internal_get_sendFilteredPoseEventTimer_, put = __cordl_internal_set_sendFilteredPoseEventTimer_)) float_t sendFilteredPoseEventTimer_;

  /// @brief Field skippedPoseCount_, offset 0x15c, size 0x4
  __declspec(property(get = __cordl_internal_get_skippedPoseCount_, put = __cordl_internal_set_skippedPoseCount_)) int32_t skippedPoseCount_;

  /// @brief Field EWAPosition, offset 0x160, size 0x10
  __declspec(property(get = __cordl_internal_get_EWAPosition, put = __cordl_internal_set_EWAPosition))::System::Nullable_1<::UnityEngine::Vector3> EWAPosition;

  /// @brief Field EWARotation, offset 0x170, size 0x14
  __declspec(property(get = __cordl_internal_get_EWARotation, put = __cordl_internal_set_EWARotation))::System::Nullable_1<::UnityEngine::Quaternion> EWARotation;

  /// @brief Field HAND_HEIGHT_TUNING, offset 0x184, size 0x4
  __declspec(property(get = __cordl_internal_get_HAND_HEIGHT_TUNING, put = __cordl_internal_set_HAND_HEIGHT_TUNING)) float_t HAND_HEIGHT_TUNING;

  /// @brief Field UseHeuristicRollback, offset 0x188, size 0x1
  __declspec(property(get = __cordl_internal_get_UseHeuristicRollback, put = __cordl_internal_set_UseHeuristicRollback)) bool UseHeuristicRollback;

  /// @brief Field underlayScaleMultX_, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_underlayScaleMultX_, put = setStaticF_underlayScaleMultX_)) float_t underlayScaleMultX_;

  /// @brief Field underlayScaleConstY_, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_underlayScaleConstY_, put = setStaticF_underlayScaleConstY_)) float_t underlayScaleConstY_;

  /// @brief Field underlayScaleMultZ_, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_underlayScaleMultZ_, put = setStaticF_underlayScaleMultZ_)) float_t underlayScaleMultZ_;

  /// @brief Field underlayOffset_, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_underlayOffset_, put = setStaticF_underlayOffset_))::UnityEngine::Vector3 underlayOffset_;

  /// @brief Field boundingBoxAboveKeyboardY_, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_boundingBoxAboveKeyboardY_, put = setStaticF_boundingBoxAboveKeyboardY_)) float_t boundingBoxAboveKeyboardY_;

  /// @brief Field initialHorizontalDistanceKeyboard_, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_initialHorizontalDistanceKeyboard_, put = setStaticF_initialHorizontalDistanceKeyboard_)) float_t initialHorizontalDistanceKeyboard_;

  /// @brief Field initialVerticalDistanceKeyboard_, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_initialVerticalDistanceKeyboard_, put = setStaticF_initialVerticalDistanceKeyboard_)) float_t initialVerticalDistanceKeyboard_;

  __declspec(property(get = get_CurrentKeyboardAngleFromUp, put = set_CurrentKeyboardAngleFromUp)) float_t CurrentKeyboardAngleFromUp;

  __declspec(property(get = get_TrackingState, put = set_TrackingState))::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState TrackingState;

  __declspec(property(get = get_ActiveKeyboardInfo, put = set_ActiveKeyboardInfo))::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo ActiveKeyboardInfo;

  __declspec(property(get = get_SystemKeyboardInfo, put = set_SystemKeyboardInfo))::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo SystemKeyboardInfo;

  __declspec(property(get = get_Presentation, put = set_Presentation))::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation Presentation;

  __declspec(property(get = get_TrackingEnabled, put = set_TrackingEnabled)) bool TrackingEnabled;

  __declspec(property(get = get_ConnectionRequired, put = set_ConnectionRequired)) bool ConnectionRequired;

  __declspec(property(get = get_ShowUntracked, put = set_ShowUntracked)) bool ShowUntracked;

  __declspec(property(get = get_RemoteKeyboard, put = set_RemoteKeyboard)) bool RemoteKeyboard;

  __declspec(property(get = get_KeyboardQueryFlags, put = set_KeyboardQueryFlags))::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags KeyboardQueryFlags;

  __declspec(property(get = get_PassthroughOverlay, put = set_PassthroughOverlay))::UnityW<::GlobalNamespace::OVROverlay> PassthroughOverlay;

  constexpr float_t& __cordl_internal_get__CurrentKeyboardAngleFromUp_k__BackingField();

  constexpr float_t const& __cordl_internal_get__CurrentKeyboardAngleFromUp_k__BackingField() const;

  constexpr void __cordl_internal_set__CurrentKeyboardAngleFromUp_k__BackingField(float_t value);

  constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState& __cordl_internal_get__TrackingState_k__BackingField();

  constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState const& __cordl_internal_get__TrackingState_k__BackingField() const;

  constexpr void __cordl_internal_set__TrackingState_k__BackingField(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState value);

  constexpr ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo& __cordl_internal_get__ActiveKeyboardInfo_k__BackingField();

  constexpr ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo const& __cordl_internal_get__ActiveKeyboardInfo_k__BackingField() const;

  constexpr void __cordl_internal_set__ActiveKeyboardInfo_k__BackingField(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo value);

  constexpr ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo& __cordl_internal_get__SystemKeyboardInfo_k__BackingField();

  constexpr ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo const& __cordl_internal_get__SystemKeyboardInfo_k__BackingField() const;

  constexpr void __cordl_internal_set__SystemKeyboardInfo_k__BackingField(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo value);

  constexpr bool& __cordl_internal_get_trackingEnabled();

  constexpr bool const& __cordl_internal_get_trackingEnabled() const;

  constexpr void __cordl_internal_set_trackingEnabled(bool value);

  constexpr bool& __cordl_internal_get_connectionRequired();

  constexpr bool const& __cordl_internal_get_connectionRequired() const;

  constexpr void __cordl_internal_set_connectionRequired(bool value);

  constexpr bool& __cordl_internal_get_showUntracked();

  constexpr bool const& __cordl_internal_get_showUntracked() const;

  constexpr void __cordl_internal_set_showUntracked(bool value);

  constexpr ::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags& __cordl_internal_get_keyboardQueryFlags();

  constexpr ::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags const& __cordl_internal_get_keyboardQueryFlags() const;

  constexpr void __cordl_internal_set_keyboardQueryFlags(::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags value);

  constexpr ::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation& __cordl_internal_get_presentation();

  constexpr ::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation const& __cordl_internal_get_presentation() const;

  constexpr void __cordl_internal_set_presentation(::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation value);

  constexpr ::GlobalNamespace::OVRTextureQualityFiltering& __cordl_internal_get_textureFiltering();

  constexpr ::GlobalNamespace::OVRTextureQualityFiltering const& __cordl_internal_get_textureFiltering() const;

  constexpr void __cordl_internal_set_textureFiltering(::GlobalNamespace::OVRTextureQualityFiltering value);

  constexpr float_t& __cordl_internal_get_mipmapBias();

  constexpr float_t const& __cordl_internal_get_mipmapBias() const;

  constexpr void __cordl_internal_set_mipmapBias(float_t value);

  constexpr float_t& __cordl_internal_get_PassthroughBorderMultiplier();

  constexpr float_t const& __cordl_internal_get_PassthroughBorderMultiplier() const;

  constexpr void __cordl_internal_set_PassthroughBorderMultiplier(float_t value);

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_keyboardModelShader();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_keyboardModelShader() const;

  constexpr void __cordl_internal_set_keyboardModelShader(::UnityW<::UnityEngine::Shader> value);

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_keyboardModelAlphaBlendShader();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_keyboardModelAlphaBlendShader() const;

  constexpr void __cordl_internal_set_keyboardModelAlphaBlendShader(::UnityW<::UnityEngine::Shader> value);

  constexpr ::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles& __cordl_internal_get_currentKeyboardPresentationStyles();

  constexpr ::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles const& __cordl_internal_get_currentKeyboardPresentationStyles() const;

  constexpr void __cordl_internal_set_currentKeyboardPresentationStyles(::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles value);

  constexpr ::UnityW<::GlobalNamespace::OVROverlay>& __cordl_internal_get_projectedPassthroughOpaque_();

  constexpr ::UnityW<::GlobalNamespace::OVROverlay> const& __cordl_internal_get_projectedPassthroughOpaque_() const;

  constexpr void __cordl_internal_set_projectedPassthroughOpaque_(::UnityW<::GlobalNamespace::OVROverlay> value);

  constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*>& __cordl_internal_get_activeKeyboardRenderers_();

  constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> const& __cordl_internal_get_activeKeyboardRenderers_() const;

  constexpr void __cordl_internal_set_activeKeyboardRenderers_(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> value);

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_activeKeyboardMesh_();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_activeKeyboardMesh_() const;

  constexpr void __cordl_internal_set_activeKeyboardMesh_(::UnityW<::UnityEngine::GameObject> value);

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get_keyboardMeshNodes_();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_keyboardMeshNodes_() const;

  constexpr void __cordl_internal_set_keyboardMeshNodes_(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_activeKeyboardMeshRenderer_();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_activeKeyboardMeshRenderer_() const;

  constexpr void __cordl_internal_set_activeKeyboardMeshRenderer_(::UnityW<::UnityEngine::MeshRenderer> value);

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_passthroughQuad_();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_passthroughQuad_() const;

  constexpr void __cordl_internal_set_passthroughQuad_(::UnityW<::UnityEngine::GameObject> value);

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_opaqueShader_();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_opaqueShader_() const;

  constexpr void __cordl_internal_set_opaqueShader_(::UnityW<::UnityEngine::Shader> value);

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_dynamicQualityTexture_();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_dynamicQualityTexture_() const;

  constexpr void __cordl_internal_set_dynamicQualityTexture_(::UnityW<::UnityEngine::Texture2D> value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_untrackedPosition_();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_untrackedPosition_() const;

  constexpr void __cordl_internal_set_untrackedPosition_(::UnityEngine::Vector3 value);

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_KeyLabelModeShader();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_KeyLabelModeShader() const;

  constexpr void __cordl_internal_set_KeyLabelModeShader(::UnityW<::UnityEngine::Shader> value);

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_PassthroughShader();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_PassthroughShader() const;

  constexpr void __cordl_internal_set_PassthroughShader(::UnityW<::UnityEngine::Shader> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_projectedPassthroughRoot();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_projectedPassthroughRoot() const;

  constexpr void __cordl_internal_set_projectedPassthroughRoot(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get_projectedPassthroughMesh();

  constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get_projectedPassthroughMesh() const;

  constexpr void __cordl_internal_set_projectedPassthroughMesh(::UnityW<::UnityEngine::MeshFilter> value);

  constexpr ::UnityW<::GlobalNamespace::OVRPassthroughLayer>& __cordl_internal_get_ProjectedPassthroughKeyLabel();

  constexpr ::UnityW<::GlobalNamespace::OVRPassthroughLayer> const& __cordl_internal_get_ProjectedPassthroughKeyLabel() const;

  constexpr void __cordl_internal_set_ProjectedPassthroughKeyLabel(::UnityW<::GlobalNamespace::OVRPassthroughLayer> value);

  constexpr ::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>*& __cordl_internal_get_TrackedKeyboardActiveChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>*> const&
  __cordl_internal_get_TrackedKeyboardActiveChanged() const;

  constexpr void __cordl_internal_set_TrackedKeyboardActiveChanged(::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>* value);

  constexpr ::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>*& __cordl_internal_get_TrackedKeyboardVisibilityChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>*> const&
  __cordl_internal_get_TrackedKeyboardVisibilityChanged() const;

  constexpr void __cordl_internal_set_TrackedKeyboardVisibilityChanged(::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>* value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_ActiveKeyboardTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_ActiveKeyboardTransform() const;

  constexpr void __cordl_internal_set_ActiveKeyboardTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr bool& __cordl_internal_get_HandsOverKeyboard();

  constexpr bool const& __cordl_internal_get_HandsOverKeyboard() const;

  constexpr void __cordl_internal_set_HandsOverKeyboard(bool value);

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& __cordl_internal_get_cameraRig_();

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& __cordl_internal_get_cameraRig_() const;

  constexpr void __cordl_internal_set_cameraRig_(::UnityW<::GlobalNamespace::OVRCameraRig> value);

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_updateKeyboardRoutine_();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_updateKeyboardRoutine_() const;

  constexpr void __cordl_internal_set_updateKeyboardRoutine_(::UnityEngine::Coroutine* value);

  constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get_keyboardBoundingBox_();

  constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get_keyboardBoundingBox_() const;

  constexpr void __cordl_internal_set_keyboardBoundingBox_(::UnityW<::UnityEngine::BoxCollider> value);

  constexpr float_t& __cordl_internal_get_staleTimeoutCounter_();

  constexpr float_t const& __cordl_internal_get_staleTimeoutCounter_() const;

  constexpr void __cordl_internal_set_staleTimeoutCounter_(float_t value);

  constexpr float_t& __cordl_internal_get_reacquisitionTimer_();

  constexpr float_t const& __cordl_internal_get_reacquisitionTimer_() const;

  constexpr void __cordl_internal_set_reacquisitionTimer_(float_t value);

  constexpr float_t& __cordl_internal_get_sendFilteredPoseEventTimer_();

  constexpr float_t const& __cordl_internal_get_sendFilteredPoseEventTimer_() const;

  constexpr void __cordl_internal_set_sendFilteredPoseEventTimer_(float_t value);

  constexpr int32_t& __cordl_internal_get_skippedPoseCount_();

  constexpr int32_t const& __cordl_internal_get_skippedPoseCount_() const;

  constexpr void __cordl_internal_set_skippedPoseCount_(int32_t value);

  constexpr ::System::Nullable_1<::UnityEngine::Vector3>& __cordl_internal_get_EWAPosition();

  constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& __cordl_internal_get_EWAPosition() const;

  constexpr void __cordl_internal_set_EWAPosition(::System::Nullable_1<::UnityEngine::Vector3> value);

  constexpr ::System::Nullable_1<::UnityEngine::Quaternion>& __cordl_internal_get_EWARotation();

  constexpr ::System::Nullable_1<::UnityEngine::Quaternion> const& __cordl_internal_get_EWARotation() const;

  constexpr void __cordl_internal_set_EWARotation(::System::Nullable_1<::UnityEngine::Quaternion> value);

  constexpr float_t& __cordl_internal_get_HAND_HEIGHT_TUNING();

  constexpr float_t const& __cordl_internal_get_HAND_HEIGHT_TUNING() const;

  constexpr void __cordl_internal_set_HAND_HEIGHT_TUNING(float_t value);

  constexpr bool& __cordl_internal_get_UseHeuristicRollback();

  constexpr bool const& __cordl_internal_get_UseHeuristicRollback() const;

  constexpr void __cordl_internal_set_UseHeuristicRollback(bool value);

  static inline void setStaticF_underlayScaleMultX_(float_t value);

  static inline float_t getStaticF_underlayScaleMultX_();

  static inline void setStaticF_underlayScaleConstY_(float_t value);

  static inline float_t getStaticF_underlayScaleConstY_();

  static inline void setStaticF_underlayScaleMultZ_(float_t value);

  static inline float_t getStaticF_underlayScaleMultZ_();

  static inline void setStaticF_underlayOffset_(::UnityEngine::Vector3 value);

  static inline ::UnityEngine::Vector3 getStaticF_underlayOffset_();

  static inline void setStaticF_boundingBoxAboveKeyboardY_(float_t value);

  static inline float_t getStaticF_boundingBoxAboveKeyboardY_();

  static inline void setStaticF_initialHorizontalDistanceKeyboard_(float_t value);

  static inline float_t getStaticF_initialHorizontalDistanceKeyboard_();

  static inline void setStaticF_initialVerticalDistanceKeyboard_(float_t value);

  static inline float_t getStaticF_initialVerticalDistanceKeyboard_();

  /// @brief Method get_CurrentKeyboardAngleFromUp, addr 0x27939ec, size 0x8, virtual false, abstract: false, final false
  inline float_t get_CurrentKeyboardAngleFromUp();

  /// @brief Method set_CurrentKeyboardAngleFromUp, addr 0x27939f4, size 0x8, virtual false, abstract: false, final false
  inline void set_CurrentKeyboardAngleFromUp(float_t value);

  /// @brief Method get_TrackingState, addr 0x27939fc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState get_TrackingState();

  /// @brief Method set_TrackingState, addr 0x2793a04, size 0x8, virtual false, abstract: false, final false
  inline void set_TrackingState(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState value);

  /// @brief Method get_ActiveKeyboardInfo, addr 0x2793a0c, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo get_ActiveKeyboardInfo();

  /// @brief Method set_ActiveKeyboardInfo, addr 0x2793a20, size 0x14, virtual false, abstract: false, final false
  inline void set_ActiveKeyboardInfo(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo value);

  /// @brief Method get_SystemKeyboardInfo, addr 0x2793a34, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo get_SystemKeyboardInfo();

  /// @brief Method set_SystemKeyboardInfo, addr 0x2793a4c, size 0x18, virtual false, abstract: false, final false
  inline void set_SystemKeyboardInfo(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo value);

  /// @brief Method get_Presentation, addr 0x2793a64, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation get_Presentation();

  /// @brief Method set_Presentation, addr 0x2793a6c, size 0x50, virtual false, abstract: false, final false
  inline void set_Presentation(::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation value);

  /// @brief Method get_TrackingEnabled, addr 0x2793cf8, size 0x8, virtual false, abstract: false, final false
  inline bool get_TrackingEnabled();

  /// @brief Method set_TrackingEnabled, addr 0x2793d00, size 0xc, virtual false, abstract: false, final false
  inline void set_TrackingEnabled(bool value);

  /// @brief Method get_ConnectionRequired, addr 0x2793d0c, size 0x8, virtual false, abstract: false, final false
  inline bool get_ConnectionRequired();

  /// @brief Method set_ConnectionRequired, addr 0x2793d14, size 0xc, virtual false, abstract: false, final false
  inline void set_ConnectionRequired(bool value);

  /// @brief Method get_ShowUntracked, addr 0x2793d20, size 0x8, virtual false, abstract: false, final false
  inline bool get_ShowUntracked();

  /// @brief Method set_ShowUntracked, addr 0x2793d28, size 0xc, virtual false, abstract: false, final false
  inline void set_ShowUntracked(bool value);

  /// @brief Method get_RemoteKeyboard, addr 0x2793d34, size 0x10, virtual false, abstract: false, final false
  inline bool get_RemoteKeyboard();

  /// @brief Method set_RemoteKeyboard, addr 0x2793d44, size 0x18, virtual false, abstract: false, final false
  inline void set_RemoteKeyboard(bool value);

  /// @brief Method get_KeyboardQueryFlags, addr 0x2793d5c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags get_KeyboardQueryFlags();

  /// @brief Method set_KeyboardQueryFlags, addr 0x2793d64, size 0x8, virtual false, abstract: false, final false
  inline void set_KeyboardQueryFlags(::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags value);

  /// @brief Method get_PassthroughOverlay, addr 0x2793d6c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::OVROverlay> get_PassthroughOverlay();

  /// @brief Method set_PassthroughOverlay, addr 0x2793d74, size 0x4, virtual false, abstract: false, final false
  inline void set_PassthroughOverlay(::GlobalNamespace::OVROverlay* value);

  /// @brief Method Start, addr 0x2793d78, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* Start();

  /// @brief Method InitializeHandPresenceData, addr 0x2793e08, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* InitializeHandPresenceData();

  /// @brief Method RegisterPassthroughMeshToSDK, addr 0x2793e98, size 0x98, virtual false, abstract: false, final false
  inline void RegisterPassthroughMeshToSDK();

  /// @brief Method GetDistanceToKeyboard, addr 0x2793f30, size 0x18c, virtual false, abstract: false, final false
  inline float_t GetDistanceToKeyboard(::UnityEngine::Vector3 point);

  /// @brief Method LaunchLocalKeyboardSelectionDialog, addr 0x27940bc, size 0x40, virtual false, abstract: false, final false
  inline void LaunchLocalKeyboardSelectionDialog();

  /// @brief Method LaunchRemoteKeyboardSelectionDialog, addr 0x2794488, size 0x40, virtual false, abstract: false, final false
  inline void LaunchRemoteKeyboardSelectionDialog();

  /// @brief Method KeyboardTrackerIsRunning, addr 0x27944c8, size 0x14, virtual false, abstract: false, final false
  inline bool KeyboardTrackerIsRunning();

  /// @brief Method UpdateTrackingStateCoroutine, addr 0x27944dc, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* UpdateTrackingStateCoroutine();

  /// @brief Method StartKeyboardTrackingCoroutine, addr 0x279456c, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* StartKeyboardTrackingCoroutine();

  /// @brief Method StopKeyboardTrackingInternal, addr 0x27945fc, size 0x1f8, virtual false, abstract: false, final false
  inline void StopKeyboardTrackingInternal();

  /// @brief Method UpdateKeyboardPose, addr 0x2794924, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* UpdateKeyboardPose();

  /// @brief Method UpdateSkippedPoseTimer, addr 0x27949b4, size 0x48, virtual false, abstract: false, final false
  inline void UpdateSkippedPoseTimer();

  /// @brief Method LoadKeyboardMesh, addr 0x27949fc, size 0x648, virtual false, abstract: false, final false
  inline void LoadKeyboardMesh();

  /// @brief Method UpdateTextureQuality, addr 0x27952f8, size 0x130, virtual false, abstract: false, final false
  inline void UpdateTextureQuality();

  /// @brief Method UpdatePresentation, addr 0x2793b00, size 0x1f8, virtual false, abstract: false, final false
  inline void UpdatePresentation(bool isVisible);

  /// @brief Method LoadRuntimeKeyboardMesh, addr 0x2795044, size 0x2b4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> LoadRuntimeKeyboardMesh();

  /// @brief Method UpdateKeyboardVisibility, addr 0x2795428, size 0x114, virtual false, abstract: false, final false
  inline void UpdateKeyboardVisibility();

  /// @brief Method SetKeyboardState, addr 0x27947f4, size 0xdc, virtual false, abstract: false, final false
  inline void SetKeyboardState(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState state);

  /// @brief Method GetKeyboardVisibility, addr 0x2793abc, size 0x44, virtual false, abstract: false, final false
  inline bool GetKeyboardVisibility();

  /// @brief Method InitializeKeyboardInfo, addr 0x27948d0, size 0x54, virtual false, abstract: false, final false
  inline void InitializeKeyboardInfo();

  /// @brief Method LaunchOverlayIntent, addr 0x27940fc, size 0x38c, virtual false, abstract: false, final false
  inline void LaunchOverlayIntent(::StringW dataUri);

  /// @brief Method Dispose, addr 0x279556c, size 0x114, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method DispatchVisibilityEvent, addr 0x279553c, size 0x30, virtual false, abstract: false, final false
  inline void DispatchVisibilityEvent(bool timeOut);

  static inline ::GlobalNamespace::OVRTrackedKeyboard* New_ctor();

  /// @brief Method .ctor, addr 0x2795694, size 0x190, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRTrackedKeyboard", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRTrackedKeyboard(OVRTrackedKeyboard&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRTrackedKeyboard", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRTrackedKeyboard(OVRTrackedKeyboard const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTrackedKeyboard();

public:
  /// @brief Field <CurrentKeyboardAngleFromUp>k__BackingField, offset: 0x18, size: 0x4, def value: None
  float_t ____CurrentKeyboardAngleFromUp_k__BackingField;

  /// @brief Field <TrackingState>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState ____TrackingState_k__BackingField;

  /// @brief Field <ActiveKeyboardInfo>k__BackingField, offset: 0x20, size: 0x28, def value: None
  ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo ____ActiveKeyboardInfo_k__BackingField;

  /// @brief Field <SystemKeyboardInfo>k__BackingField, offset: 0x48, size: 0x28, def value: None
  ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo ____SystemKeyboardInfo_k__BackingField;

  /// @brief Field trackingEnabled, offset: 0x70, size: 0x1, def value: None
  bool ___trackingEnabled;

  /// @brief Field connectionRequired, offset: 0x71, size: 0x1, def value: None
  bool ___connectionRequired;

  /// @brief Field showUntracked, offset: 0x72, size: 0x1, def value: None
  bool ___showUntracked;

  /// @brief Field keyboardQueryFlags, offset: 0x74, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags ___keyboardQueryFlags;

  /// @brief Field presentation, offset: 0x78, size: 0x4, def value: None
  ::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation ___presentation;

  /// @brief Field textureFiltering, offset: 0x7c, size: 0x4, def value: None
  ::GlobalNamespace::OVRTextureQualityFiltering ___textureFiltering;

  /// @brief Field mipmapBias, offset: 0x80, size: 0x4, def value: None
  float_t ___mipmapBias;

  /// @brief Field PassthroughBorderMultiplier, offset: 0x84, size: 0x4, def value: None
  float_t ___PassthroughBorderMultiplier;

  /// @brief Field keyboardModelShader, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___keyboardModelShader;

  /// @brief Field keyboardModelAlphaBlendShader, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___keyboardModelAlphaBlendShader;

  /// @brief Field currentKeyboardPresentationStyles, offset: 0x98, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles ___currentKeyboardPresentationStyles;

  /// @brief Field projectedPassthroughOpaque_, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVROverlay> ___projectedPassthroughOpaque_;

  /// @brief Field activeKeyboardRenderers_, offset: 0xa8, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> ___activeKeyboardRenderers_;

  /// @brief Field activeKeyboardMesh_, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___activeKeyboardMesh_;

  /// @brief Field keyboardMeshNodes_, offset: 0xb8, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ___keyboardMeshNodes_;

  /// @brief Field activeKeyboardMeshRenderer_, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ___activeKeyboardMeshRenderer_;

  /// @brief Field passthroughQuad_, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___passthroughQuad_;

  /// @brief Field opaqueShader_, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___opaqueShader_;

  /// @brief Field dynamicQualityTexture_, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___dynamicQualityTexture_;

  /// @brief Field untrackedPosition_, offset: 0xe0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___untrackedPosition_;

  /// @brief Field KeyLabelModeShader, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___KeyLabelModeShader;

  /// @brief Field PassthroughShader, offset: 0xf8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___PassthroughShader;

  /// @brief Field projectedPassthroughRoot, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___projectedPassthroughRoot;

  /// @brief Field projectedPassthroughMesh, offset: 0x108, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshFilter> ___projectedPassthroughMesh;

  /// @brief Field ProjectedPassthroughKeyLabel, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRPassthroughLayer> ___ProjectedPassthroughKeyLabel;

  /// @brief Field TrackedKeyboardActiveChanged, offset: 0x118, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>* ___TrackedKeyboardActiveChanged;

  /// @brief Field TrackedKeyboardVisibilityChanged, offset: 0x120, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>* ___TrackedKeyboardVisibilityChanged;

  /// @brief Field ActiveKeyboardTransform, offset: 0x128, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___ActiveKeyboardTransform;

  /// @brief Field HandsOverKeyboard, offset: 0x130, size: 0x1, def value: None
  bool ___HandsOverKeyboard;

  /// @brief Field cameraRig_, offset: 0x138, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRCameraRig> ___cameraRig_;

  /// @brief Field updateKeyboardRoutine_, offset: 0x140, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___updateKeyboardRoutine_;

  /// @brief Field keyboardBoundingBox_, offset: 0x148, size: 0x8, def value: None
  ::UnityW<::UnityEngine::BoxCollider> ___keyboardBoundingBox_;

  /// @brief Field staleTimeoutCounter_, offset: 0x150, size: 0x4, def value: None
  float_t ___staleTimeoutCounter_;

  /// @brief Field reacquisitionTimer_, offset: 0x154, size: 0x4, def value: None
  float_t ___reacquisitionTimer_;

  /// @brief Field sendFilteredPoseEventTimer_, offset: 0x158, size: 0x4, def value: None
  float_t ___sendFilteredPoseEventTimer_;

  /// @brief Field skippedPoseCount_, offset: 0x15c, size: 0x4, def value: None
  int32_t ___skippedPoseCount_;

  /// @brief Field EWAPosition, offset: 0x160, size: 0x10, def value: None
  ::System::Nullable_1<::UnityEngine::Vector3> ___EWAPosition;

  /// @brief Field EWARotation, offset: 0x170, size: 0x14, def value: None
  ::System::Nullable_1<::UnityEngine::Quaternion> ___EWARotation;

  /// @brief Field HAND_HEIGHT_TUNING, offset: 0x184, size: 0x4, def value: None
  float_t ___HAND_HEIGHT_TUNING;

  /// @brief Field UseHeuristicRollback, offset: 0x188, size: 0x1, def value: None
  bool ___UseHeuristicRollback;

  /// @brief Field STALE_TIMEOUT offset 0xffffffff size 0x4
  static constexpr float_t STALE_TIMEOUT{ 10.0 };

  /// @brief Field FILTERED_POSE_TIMEOUT offset 0xffffffff size 0x4
  static constexpr float_t FILTERED_POSE_TIMEOUT{ 15.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTrackedKeyboard, 0x190>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ____CurrentKeyboardAngleFromUp_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ____TrackingState_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ____ActiveKeyboardInfo_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ____SystemKeyboardInfo_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___trackingEnabled) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___connectionRequired) == 0x71, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___showUntracked) == 0x72, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___keyboardQueryFlags) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___presentation) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___textureFiltering) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___mipmapBias) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___PassthroughBorderMultiplier) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___keyboardModelShader) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___keyboardModelAlphaBlendShader) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___currentKeyboardPresentationStyles) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___projectedPassthroughOpaque_) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___activeKeyboardRenderers_) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___activeKeyboardMesh_) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___keyboardMeshNodes_) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___activeKeyboardMeshRenderer_) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___passthroughQuad_) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___opaqueShader_) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___dynamicQualityTexture_) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___untrackedPosition_) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___KeyLabelModeShader) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___PassthroughShader) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___projectedPassthroughRoot) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___projectedPassthroughMesh) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___ProjectedPassthroughKeyLabel) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___TrackedKeyboardActiveChanged) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___TrackedKeyboardVisibilityChanged) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___ActiveKeyboardTransform) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___HandsOverKeyboard) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___cameraRig_) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___updateKeyboardRoutine_) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___keyboardBoundingBox_) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___staleTimeoutCounter_) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___reacquisitionTimer_) == 0x154, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___sendFilteredPoseEventTimer_) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___skippedPoseCount_) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___EWAPosition) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___EWARotation) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___HAND_HEIGHT_TUNING) == 0x184, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboard, ___UseHeuristicRollback) == 0x188, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation, "", "OVRTrackedKeyboard/KeyboardPresentation");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState, "", "OVRTrackedKeyboard/TrackedKeyboardState");
NEED_NO_BOX(::GlobalNamespace::OVRTrackedKeyboard);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTrackedKeyboard*, "", "OVRTrackedKeyboard");
NEED_NO_BOX(::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*, "", "OVRTrackedKeyboard/<InitializeHandPresenceData>d__89");
NEED_NO_BOX(::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*, "", "OVRTrackedKeyboard/<StartKeyboardTrackingCoroutine>d__96");
NEED_NO_BOX(::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*, "", "OVRTrackedKeyboard/<Start>d__88");
NEED_NO_BOX(::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*, "", "OVRTrackedKeyboard/<UpdateKeyboardPose>d__98");
NEED_NO_BOX(::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*, "", "OVRTrackedKeyboard/<UpdateTrackingStateCoroutine>d__95");
NEED_NO_BOX(::GlobalNamespace::__OVRTrackedKeyboard____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTrackedKeyboard____c*, "", "OVRTrackedKeyboard/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent, "", "OVRTrackedKeyboard/TrackedKeyboardSetActiveEvent");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent, "", "OVRTrackedKeyboard/TrackedKeyboardVisibilityChangedEvent");
