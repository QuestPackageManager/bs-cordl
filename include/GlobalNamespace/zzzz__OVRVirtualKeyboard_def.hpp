#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRVirtualKeyboard.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRGLTFScene_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "GlobalNamespace/zzzz__OVRManager_def.hpp"
#include "GlobalNamespace/zzzz__OVRPose_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRVirtualKeyboard)
namespace GlobalNamespace {
class HandInputSource_OVRVirtualKeyboard___c;
}
namespace GlobalNamespace {
struct InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData;
}
namespace GlobalNamespace {
class InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6;
}
namespace GlobalNamespace {
class OVRBone;
}
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace GlobalNamespace {
class OVRHand;
}
namespace GlobalNamespace {
struct OVRInput_Controller;
}
namespace GlobalNamespace {
struct OVRPlugin_EventDataBuffer;
}
namespace GlobalNamespace {
struct OVRPlugin_Posef;
}
namespace GlobalNamespace {
struct OVRPlugin_VirtualKeyboardInputSource;
}
namespace GlobalNamespace {
struct OVRPlugin_VirtualKeyboardLocationInfo;
}
namespace GlobalNamespace {
struct OVRPose;
}
namespace GlobalNamespace {
class OVRSkeleton;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard_BaseInputSource;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard_ControllerInputSource;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard_HandInputSource;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard_IInputSource;
}
namespace GlobalNamespace {
struct OVRVirtualKeyboard_InputSource;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard_InteractorRootTransformOverride;
}
namespace GlobalNamespace {
struct OVRVirtualKeyboard_KeyboardPosition;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard___c;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace UnityEngine::EventSystems {
class OVRPhysicsRaycaster;
}
namespace UnityEngine::UI {
class InputField;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class MonoBehaviour;
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
struct OVRVirtualKeyboard_InputSource;
}
namespace GlobalNamespace {
struct OVRVirtualKeyboard_KeyboardPosition;
}
namespace GlobalNamespace {
class HandInputSource_OVRVirtualKeyboard___c;
}
namespace GlobalNamespace {
class InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard_BaseInputSource;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard_ControllerInputSource;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard_HandInputSource;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard_IInputSource;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard_InteractorRootTransformOverride;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard___c;
}
namespace GlobalNamespace {
struct InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRVirtualKeyboard_InputSource);
MARK_VAL_T(::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition);
MARK_REF_PTR_T(::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c);
MARK_REF_PTR_T(::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6);
MARK_REF_PTR_T(::GlobalNamespace::OVRVirtualKeyboard);
MARK_REF_PTR_T(::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource);
MARK_REF_PTR_T(::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource);
MARK_REF_PTR_T(::GlobalNamespace::OVRVirtualKeyboard_HandInputSource);
MARK_REF_PTR_T(::GlobalNamespace::OVRVirtualKeyboard_IInputSource);
MARK_REF_PTR_T(::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride);
MARK_REF_PTR_T(::GlobalNamespace::OVRVirtualKeyboard___c);
MARK_VAL_T(::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRVirtualKeyboard/KeyboardPosition
struct CORDL_TYPE OVRVirtualKeyboard_KeyboardPosition {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRVirtualKeyboard_KeyboardPosition_Unwrapped
  enum struct __OVRVirtualKeyboard_KeyboardPosition_Unwrapped : int32_t {
    __E_Far = static_cast<int32_t>(0x0),
    __E_Near = static_cast<int32_t>(0x1),
    __E_Direct = static_cast<int32_t>(0x1),
    __E_Custom = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRVirtualKeyboard_KeyboardPosition_Unwrapped() const noexcept {
    return static_cast<__OVRVirtualKeyboard_KeyboardPosition_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRVirtualKeyboard_KeyboardPosition();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRVirtualKeyboard_KeyboardPosition(int32_t value__) noexcept;

  /// @brief Field Custom value: I32(2)
  static ::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition const Custom;

  /// @brief Field Direct value: I32(1)
  static ::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition const Direct;

  /// @brief Field Far value: I32(0)
  static ::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition const Far;

  /// @brief Field Near value: I32(1)
  static ::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition const Near;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8360 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRPose
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRVirtualKeyboard/InteractorRootTransformOverride/InteractorRootOverrideData
struct CORDL_TYPE InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData();

  // Ctor Parameters [CppParam { name: "root", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None }, CppParam { name: "originalPose", ty: "::GlobalNamespace::OVRPose", modifiers:
  // "", def_value: None }, CppParam { name: "targetPose", ty: "::GlobalNamespace::OVRPose", modifiers: "", def_value: None }]
  constexpr InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData(::UnityW<::UnityEngine::Transform> root, ::GlobalNamespace::OVRPose originalPose,
                                                                                          ::GlobalNamespace::OVRPose targetPose) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8361 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field root, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> root;

  /// @brief Field originalPose, offset: 0x8, size: 0x1c, def value: None
  ::GlobalNamespace::OVRPose originalPose;

  /// @brief Field targetPose, offset: 0x24, size: 0x1c, def value: None
  ::GlobalNamespace::OVRPose targetPose;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData, root) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData, originalPose) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData, targetPose) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRVirtualKeyboard/InteractorRootTransformOverride/<RevertInteractorOverrides>d__6
class CORDL_TYPE InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride* __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x4027c0c, size 0x98, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x4027ca4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x4027cac, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x4027ce4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x4027c08, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride*& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride* value);

  /// @brief Method .ctor, addr 0x4027be0, size 0x28, virtual false, abstract: false, final false
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
  constexpr InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6(InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6(InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8362 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRVirtualKeyboard/InteractorRootTransformOverride
class CORDL_TYPE OVRVirtualKeyboard_InteractorRootTransformOverride : public ::System::Object {
public:
  // Declarations
  using InteractorRootOverrideData = ::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData;

  using _RevertInteractorOverrides_d__6 = ::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6;

  /// @brief Field applyQueue, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get_applyQueue,
      put = __cordl_internal_set_applyQueue)) ::System::Collections::Generic::Queue_1<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData>* applyQueue;

  /// @brief Field revertQueue, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get_revertQueue,
      put = __cordl_internal_set_revertQueue)) ::System::Collections::Generic::Queue_1<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData>* revertQueue;

  /// @brief Method ApplyOverride, addr 0x4027a0c, size 0xdc, virtual false, abstract: false, final false
  static inline bool ApplyOverride(::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData interactorOverride);

  /// @brief Method Enqueue, addr 0x4026d90, size 0x198, virtual false, abstract: false, final false
  inline void Enqueue(::UnityEngine::Transform* interactorRootTransform, ::GlobalNamespace::OVRPlugin_Posef interactorRootPose);

  /// @brief Method LateApply, addr 0x4026b70, size 0x220, virtual false, abstract: false, final false
  inline void LateApply(::UnityEngine::MonoBehaviour* coroutineRunner);

  static inline ::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride* New_ctor();

  /// @brief Method Reset, addr 0x4027b48, size 0x98, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method RevertInteractorOverrides, addr 0x4027ae8, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* RevertInteractorOverrides();

  constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData>* const& __cordl_internal_get_applyQueue() const;

  constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData>*& __cordl_internal_get_applyQueue();

  constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData>* const& __cordl_internal_get_revertQueue() const;

  constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData>*& __cordl_internal_get_revertQueue();

  constexpr void __cordl_internal_set_applyQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData>* value);

  constexpr void __cordl_internal_set_revertQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData>* value);

  /// @brief Method .ctor, addr 0x4027750, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRVirtualKeyboard_InteractorRootTransformOverride();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard_InteractorRootTransformOverride", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRVirtualKeyboard_InteractorRootTransformOverride(OVRVirtualKeyboard_InteractorRootTransformOverride&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard_InteractorRootTransformOverride", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRVirtualKeyboard_InteractorRootTransformOverride(OVRVirtualKeyboard_InteractorRootTransformOverride const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8363 };

  /// @brief Field applyQueue, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData>* ___applyQueue;

  /// @brief Field revertQueue, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData>* ___revertQueue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride, ___applyQueue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride, ___revertQueue) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRVirtualKeyboard/InputSource
struct CORDL_TYPE OVRVirtualKeyboard_InputSource {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRVirtualKeyboard_InputSource_Unwrapped
  enum struct __OVRVirtualKeyboard_InputSource_Unwrapped : int32_t {
    __E_ControllerLeft = static_cast<int32_t>(0x0),
    __E_ControllerRight = static_cast<int32_t>(0x1),
    __E_HandLeft = static_cast<int32_t>(0x2),
    __E_HandRight = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRVirtualKeyboard_InputSource_Unwrapped() const noexcept {
    return static_cast<__OVRVirtualKeyboard_InputSource_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRVirtualKeyboard_InputSource();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRVirtualKeyboard_InputSource(int32_t value__) noexcept;

  /// @brief Field ControllerLeft value: I32(0)
  static ::GlobalNamespace::OVRVirtualKeyboard_InputSource const ControllerLeft;

  /// @brief Field ControllerRight value: I32(1)
  static ::GlobalNamespace::OVRVirtualKeyboard_InputSource const ControllerRight;

  /// @brief Field HandLeft value: I32(2)
  static ::GlobalNamespace::OVRVirtualKeyboard_InputSource const HandLeft;

  /// @brief Field HandRight value: I32(3)
  static ::GlobalNamespace::OVRVirtualKeyboard_InputSource const HandRight;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8364 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_InputSource, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRVirtualKeyboard_InputSource, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRVirtualKeyboard/IInputSource
class CORDL_TYPE OVRVirtualKeyboard_IInputSource {
public:
  // Declarations
  /// @brief Method Update, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Update();

  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard_IInputSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRVirtualKeyboard_IInputSource(OVRVirtualKeyboard_IInputSource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8365 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies OVRVirtualKeyboard::IInputSource, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRVirtualKeyboard/BaseInputSource
class CORDL_TYPE OVRVirtualKeyboard_BaseInputSource : public ::System::Object {
public:
  // Declarations
  /// @brief Field _operatingWithoutOVRCameraRig, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__operatingWithoutOVRCameraRig, put = __cordl_internal_set__operatingWithoutOVRCameraRig)) bool _operatingWithoutOVRCameraRig;

  /// @brief Field _rig, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__rig, put = __cordl_internal_set__rig)) ::UnityW<::GlobalNamespace::OVRCameraRig> _rig;

  /// @brief Convert operator to "::GlobalNamespace::OVRVirtualKeyboard_IInputSource"
  constexpr operator ::GlobalNamespace::OVRVirtualKeyboard_IInputSource*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x4027e00, size 0xd0, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource* New_ctor();

  /// @brief Method OnUpdatedAnchors, addr 0x4027ddc, size 0xc, virtual false, abstract: false, final false
  inline void OnUpdatedAnchors(::GlobalNamespace::OVRCameraRig* obj);

  /// @brief Method Update, addr 0x4027de8, size 0x18, virtual true, abstract: false, final true
  inline void Update();

  /// @brief Method UpdateInput, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateInput();

  constexpr bool const& __cordl_internal_get__operatingWithoutOVRCameraRig() const;

  constexpr bool& __cordl_internal_get__operatingWithoutOVRCameraRig();

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& __cordl_internal_get__rig() const;

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& __cordl_internal_get__rig();

  constexpr void __cordl_internal_set__operatingWithoutOVRCameraRig(bool value);

  constexpr void __cordl_internal_set__rig(::UnityW<::GlobalNamespace::OVRCameraRig> value);

  /// @brief Method .ctor, addr 0x4027cec, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::OVRVirtualKeyboard_IInputSource"
  constexpr ::GlobalNamespace::OVRVirtualKeyboard_IInputSource* i___GlobalNamespace__OVRVirtualKeyboard_IInputSource() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRVirtualKeyboard_BaseInputSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard_BaseInputSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRVirtualKeyboard_BaseInputSource(OVRVirtualKeyboard_BaseInputSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard_BaseInputSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRVirtualKeyboard_BaseInputSource(OVRVirtualKeyboard_BaseInputSource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8366 };

  /// @brief Field _operatingWithoutOVRCameraRig, offset: 0x10, size: 0x1, def value: None
  bool ____operatingWithoutOVRCameraRig;

  /// @brief Field _rig, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRCameraRig> ____rig;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource, ____operatingWithoutOVRCameraRig) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource, ____rig) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRInput::Controller, OVRInput::RawButton, OVRVirtualKeyboard::BaseInputSource, OVRVirtualKeyboard::InputSource
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRVirtualKeyboard/ControllerInputSource
class CORDL_TYPE OVRVirtualKeyboard_ControllerInputSource : public ::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource {
public:
  // Declarations
  __declspec(property(get = get_TriggerIsPressed)) bool TriggerIsPressed;

  /// @brief Field _controllerType, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__controllerType, put = __cordl_internal_set__controllerType)) ::GlobalNamespace::OVRInput_Controller _controllerType;

  /// @brief Field _directTransform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__directTransform, put = __cordl_internal_set__directTransform)) ::UnityW<::UnityEngine::Transform> _directTransform;

  /// @brief Field _inputSource, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__inputSource, put = __cordl_internal_set__inputSource)) ::GlobalNamespace::OVRVirtualKeyboard_InputSource _inputSource;

  /// @brief Field _keyboard, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__keyboard, put = __cordl_internal_set__keyboard)) ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> _keyboard;

  /// @brief Field _lastFrameCount, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__lastFrameCount, put = __cordl_internal_set__lastFrameCount)) int32_t _lastFrameCount;

  /// @brief Field _rootTransform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__rootTransform, put = __cordl_internal_set__rootTransform)) ::UnityW<::UnityEngine::Transform> _rootTransform;

  /// @brief Field _triggerButton, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__triggerButton, put = __cordl_internal_set__triggerButton)) ::GlobalNamespace::OVRInput_RawButton _triggerButton;

  static inline ::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource* New_ctor(::GlobalNamespace::OVRVirtualKeyboard* keyboard, ::GlobalNamespace::OVRVirtualKeyboard_InputSource inputSource,
                                                                                      ::GlobalNamespace::OVRInput_Controller controllerType, ::UnityEngine::Transform* rootTransform,
                                                                                      ::UnityEngine::Transform* directTransform);

  /// @brief Method UpdateInput, addr 0x4027f30, size 0x18c, virtual true, abstract: false, final false
  inline void UpdateInput();

  constexpr ::GlobalNamespace::OVRInput_Controller const& __cordl_internal_get__controllerType() const;

  constexpr ::GlobalNamespace::OVRInput_Controller& __cordl_internal_get__controllerType();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__directTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__directTransform();

  constexpr ::GlobalNamespace::OVRVirtualKeyboard_InputSource const& __cordl_internal_get__inputSource() const;

  constexpr ::GlobalNamespace::OVRVirtualKeyboard_InputSource& __cordl_internal_get__inputSource();

  constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> const& __cordl_internal_get__keyboard() const;

  constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard>& __cordl_internal_get__keyboard();

  constexpr int32_t const& __cordl_internal_get__lastFrameCount() const;

  constexpr int32_t& __cordl_internal_get__lastFrameCount();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__rootTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__rootTransform();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get__triggerButton() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get__triggerButton();

  constexpr void __cordl_internal_set__controllerType(::GlobalNamespace::OVRInput_Controller value);

  constexpr void __cordl_internal_set__directTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__inputSource(::GlobalNamespace::OVRVirtualKeyboard_InputSource value);

  constexpr void __cordl_internal_set__keyboard(::UnityW<::GlobalNamespace::OVRVirtualKeyboard> value);

  constexpr void __cordl_internal_set__lastFrameCount(int32_t value);

  constexpr void __cordl_internal_set__rootTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__triggerButton(::GlobalNamespace::OVRInput_RawButton value);

  /// @brief Method .ctor, addr 0x4026f28, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRVirtualKeyboard* keyboard, ::GlobalNamespace::OVRVirtualKeyboard_InputSource inputSource, ::GlobalNamespace::OVRInput_Controller controllerType,
                    ::UnityEngine::Transform* rootTransform, ::UnityEngine::Transform* directTransform);

  /// @brief Method get_TriggerIsPressed, addr 0x4027ed0, size 0x60, virtual false, abstract: false, final false
  inline bool get_TriggerIsPressed();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRVirtualKeyboard_ControllerInputSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard_ControllerInputSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRVirtualKeyboard_ControllerInputSource(OVRVirtualKeyboard_ControllerInputSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard_ControllerInputSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRVirtualKeyboard_ControllerInputSource(OVRVirtualKeyboard_ControllerInputSource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8367 };

  /// @brief Field _rootTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____rootTransform;

  /// @brief Field _directTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____directTransform;

  /// @brief Field _inputSource, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::OVRVirtualKeyboard_InputSource ____inputSource;

  /// @brief Field _controllerType, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_Controller ____controllerType;

  /// @brief Field _keyboard, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> ____keyboard;

  /// @brief Field _lastFrameCount, offset: 0x40, size: 0x4, def value: None
  int32_t ____lastFrameCount;

  /// @brief Field _triggerButton, offset: 0x44, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ____triggerButton;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource, ____rootTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource, ____directTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource, ____inputSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource, ____controllerType) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource, ____keyboard) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource, ____lastFrameCount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource, ____triggerButton) == 0x44, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRVirtualKeyboard/HandInputSource/<>c
class CORDL_TYPE HandInputSource_OVRVirtualKeyboard___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0)) ::System::Func_2<::GlobalNamespace::OVRBone*, bool>* __9__6_0;

  /// @brief Field <>9__6_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_1, put = setStaticF___9__6_1)) ::System::Func_2<::GlobalNamespace::OVRBone*, bool>* __9__6_1;

  static inline ::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c* New_ctor();

  /// @brief Method <UpdateInput>b__6_0, addr 0x4028448, size 0x20, virtual false, abstract: false, final false
  inline bool _UpdateInput_b__6_0(::GlobalNamespace::OVRBone* b);

  /// @brief Method <UpdateInput>b__6_1, addr 0x4028468, size 0x20, virtual false, abstract: false, final false
  inline bool _UpdateInput_b__6_1(::GlobalNamespace::OVRBone* b);

  /// @brief Method .ctor, addr 0x4028440, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::OVRBone*, bool>* getStaticF___9__6_0();

  static inline ::System::Func_2<::GlobalNamespace::OVRBone*, bool>* getStaticF___9__6_1();

  static inline void setStaticF___9(::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c* value);

  static inline void setStaticF___9__6_0(::System::Func_2<::GlobalNamespace::OVRBone*, bool>* value);

  static inline void setStaticF___9__6_1(::System::Func_2<::GlobalNamespace::OVRBone*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HandInputSource_OVRVirtualKeyboard___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HandInputSource_OVRVirtualKeyboard___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HandInputSource_OVRVirtualKeyboard___c(HandInputSource_OVRVirtualKeyboard___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HandInputSource_OVRVirtualKeyboard___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HandInputSource_OVRVirtualKeyboard___c(HandInputSource_OVRVirtualKeyboard___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8368 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRVirtualKeyboard::BaseInputSource, OVRVirtualKeyboard::InputSource
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRVirtualKeyboard/HandInputSource
class CORDL_TYPE OVRVirtualKeyboard_HandInputSource : public ::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource {
public:
  // Declarations
  using __c = ::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c;

  /// @brief Field _hand, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__hand, put = __cordl_internal_set__hand)) ::UnityW<::GlobalNamespace::OVRHand> _hand;

  /// @brief Field _inputSource, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__inputSource, put = __cordl_internal_set__inputSource)) ::GlobalNamespace::OVRVirtualKeyboard_InputSource _inputSource;

  /// @brief Field _keyboard, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__keyboard, put = __cordl_internal_set__keyboard)) ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> _keyboard;

  /// @brief Field _lastFrameCount, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__lastFrameCount, put = __cordl_internal_set__lastFrameCount)) int32_t _lastFrameCount;

  /// @brief Field _skeleton, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__skeleton, put = __cordl_internal_set__skeleton)) ::UnityW<::GlobalNamespace::OVRSkeleton> _skeleton;

  static inline ::GlobalNamespace::OVRVirtualKeyboard_HandInputSource* New_ctor(::GlobalNamespace::OVRVirtualKeyboard* keyboard, ::GlobalNamespace::OVRVirtualKeyboard_InputSource inputSource,
                                                                                ::GlobalNamespace::OVRHand* hand);

  /// @brief Method UpdateInput, addr 0x40280bc, size 0x328, virtual true, abstract: false, final false
  inline void UpdateInput();

  constexpr ::UnityW<::GlobalNamespace::OVRHand> const& __cordl_internal_get__hand() const;

  constexpr ::UnityW<::GlobalNamespace::OVRHand>& __cordl_internal_get__hand();

  constexpr ::GlobalNamespace::OVRVirtualKeyboard_InputSource const& __cordl_internal_get__inputSource() const;

  constexpr ::GlobalNamespace::OVRVirtualKeyboard_InputSource& __cordl_internal_get__inputSource();

  constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> const& __cordl_internal_get__keyboard() const;

  constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard>& __cordl_internal_get__keyboard();

  constexpr int32_t const& __cordl_internal_get__lastFrameCount() const;

  constexpr int32_t& __cordl_internal_get__lastFrameCount();

  constexpr ::UnityW<::GlobalNamespace::OVRSkeleton> const& __cordl_internal_get__skeleton() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSkeleton>& __cordl_internal_get__skeleton();

  constexpr void __cordl_internal_set__hand(::UnityW<::GlobalNamespace::OVRHand> value);

  constexpr void __cordl_internal_set__inputSource(::GlobalNamespace::OVRVirtualKeyboard_InputSource value);

  constexpr void __cordl_internal_set__keyboard(::UnityW<::GlobalNamespace::OVRVirtualKeyboard> value);

  constexpr void __cordl_internal_set__lastFrameCount(int32_t value);

  constexpr void __cordl_internal_set__skeleton(::UnityW<::GlobalNamespace::OVRSkeleton> value);

  /// @brief Method .ctor, addr 0x4026f88, size 0x1bc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRVirtualKeyboard* keyboard, ::GlobalNamespace::OVRVirtualKeyboard_InputSource inputSource, ::GlobalNamespace::OVRHand* hand);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRVirtualKeyboard_HandInputSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard_HandInputSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRVirtualKeyboard_HandInputSource(OVRVirtualKeyboard_HandInputSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard_HandInputSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRVirtualKeyboard_HandInputSource(OVRVirtualKeyboard_HandInputSource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8369 };

  /// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRHand> ____hand;

  /// @brief Field _inputSource, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::OVRVirtualKeyboard_InputSource ____inputSource;

  /// @brief Field _keyboard, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> ____keyboard;

  /// @brief Field _skeleton, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSkeleton> ____skeleton;

  /// @brief Field _lastFrameCount, offset: 0x40, size: 0x4, def value: None
  int32_t ____lastFrameCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_HandInputSource, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_HandInputSource, ____inputSource) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_HandInputSource, ____keyboard) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_HandInputSource, ____skeleton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_HandInputSource, ____lastFrameCount) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRVirtualKeyboard_HandInputSource, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRVirtualKeyboard/<>c
class CORDL_TYPE OVRVirtualKeyboard___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::OVRVirtualKeyboard___c* __9;

  /// @brief Field <>9__68_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__68_0, put = setStaticF___9__68_0)) ::System::Func_2<::StringW, bool>* __9__68_0;

  /// @brief Field <>9__70_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__70_0, put = setStaticF___9__70_0)) ::System::Func_2<::UnityW<::UnityEngine::MeshFilter>, bool>* __9__70_0;

  static inline ::GlobalNamespace::OVRVirtualKeyboard___c* New_ctor();

  /// @brief Method <LoadRuntimeVirtualKeyboardMesh>b__68_0, addr 0x40284ec, size 0x8c, virtual false, abstract: false, final false
  inline bool _LoadRuntimeVirtualKeyboardMesh_b__68_0(::StringW p);

  /// @brief Method <PopulateCollision>b__70_0, addr 0x4028578, size 0x68, virtual false, abstract: false, final false
  inline bool _PopulateCollision_b__70_0(::UnityEngine::MeshFilter* mesh);

  /// @brief Method .ctor, addr 0x40284e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::OVRVirtualKeyboard___c* getStaticF___9();

  static inline ::System::Func_2<::StringW, bool>* getStaticF___9__68_0();

  static inline ::System::Func_2<::UnityW<::UnityEngine::MeshFilter>, bool>* getStaticF___9__70_0();

  static inline void setStaticF___9(::GlobalNamespace::OVRVirtualKeyboard___c* value);

  static inline void setStaticF___9__68_0(::System::Func_2<::StringW, bool>* value);

  static inline void setStaticF___9__70_0(::System::Func_2<::UnityW<::UnityEngine::MeshFilter>, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRVirtualKeyboard___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRVirtualKeyboard___c(OVRVirtualKeyboard___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRVirtualKeyboard___c(OVRVirtualKeyboard___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8370 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRVirtualKeyboard___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRGLTFScene, OVRManager::EventListener, OVRVirtualKeyboard::KeyboardPosition, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRVirtualKeyboard
class CORDL_TYPE OVRVirtualKeyboard : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using BaseInputSource = ::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource;

  using ControllerInputSource = ::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource;

  using HandInputSource = ::GlobalNamespace::OVRVirtualKeyboard_HandInputSource;

  using IInputSource = ::GlobalNamespace::OVRVirtualKeyboard_IInputSource;

  using InputSource = ::GlobalNamespace::OVRVirtualKeyboard_InputSource;

  using InteractorRootTransformOverride = ::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride;

  using KeyboardPosition = ::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition;

  using __c = ::GlobalNamespace::OVRVirtualKeyboard___c;

  /// @brief Field Backspace, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Backspace, put = __cordl_internal_set_Backspace)) ::System::Action* Backspace;

  __declspec(property(get = get_Collider, put = set_Collider)) ::UnityW<::UnityEngine::Collider> Collider;

  /// @brief Field CommitText, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_CommitText, put = __cordl_internal_set_CommitText)) ::System::Action_1<::StringW>* CommitText;

  /// @brief Field Enter, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_Enter, put = __cordl_internal_set_Enter)) ::System::Action* Enter;

  /// @brief Field InitialPosition, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_InitialPosition, put = __cordl_internal_set_InitialPosition)) ::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition InitialPosition;

  /// @brief Field InputEnabled, offset 0xc0, size 0x1
  __declspec(property(get = __cordl_internal_get_InputEnabled, put = __cordl_internal_set_InputEnabled)) bool InputEnabled;

  /// @brief Field KeyboardHidden, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_KeyboardHidden, put = __cordl_internal_set_KeyboardHidden)) ::System::Action* KeyboardHidden;

  /// @brief Field KeyboardShown, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_KeyboardShown, put = __cordl_internal_set_KeyboardShown)) ::System::Action* KeyboardShown;

  __declspec(property(get = get_TextCommitField, put = set_TextCommitField)) ::UnityW<::UnityEngine::UI::InputField> TextCommitField;

  /// @brief Field <Collider>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__Collider_k__BackingField, put = __cordl_internal_set__Collider_k__BackingField)) ::UnityW<::UnityEngine::Collider> _Collider_k__BackingField;

  /// @brief Field _inputSources, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__inputSources,
                      put = __cordl_internal_set__inputSources)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRVirtualKeyboard_IInputSource*>* _inputSources;

  /// @brief Field _interactorRootTransformOverride, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__interactorRootTransformOverride,
                      put = __cordl_internal_set__interactorRootTransformOverride)) ::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride* _interactorRootTransformOverride;

  /// @brief Field controllerDirectInteraction, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get_controllerDirectInteraction, put = __cordl_internal_set_controllerDirectInteraction)) bool controllerDirectInteraction;

  /// @brief Field controllerRayInteraction, offset 0x81, size 0x1
  __declspec(property(get = __cordl_internal_get_controllerRayInteraction, put = __cordl_internal_set_controllerRayInteraction)) bool controllerRayInteraction;

  /// @brief Field controllerRaycaster, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_controllerRaycaster, put = __cordl_internal_set_controllerRaycaster)) ::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster> controllerRaycaster;

  /// @brief Field handDirectInteraction, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get_handDirectInteraction, put = __cordl_internal_set_handDirectInteraction)) bool handDirectInteraction;

  /// @brief Field handLeft, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_handLeft, put = __cordl_internal_set_handLeft)) ::UnityW<::GlobalNamespace::OVRHand> handLeft;

  /// @brief Field handRayInteraction, offset 0xa1, size 0x1
  __declspec(property(get = __cordl_internal_get_handRayInteraction, put = __cordl_internal_set_handRayInteraction)) bool handRayInteraction;

  /// @brief Field handRaycaster, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_handRaycaster, put = __cordl_internal_set_handRaycaster)) ::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster> handRaycaster;

  /// @brief Field handRight, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_handRight, put = __cordl_internal_set_handRight)) ::UnityW<::GlobalNamespace::OVRHand> handRight;

  /// @brief Field ignoreTextCommmitFieldOnValueChanged_, offset 0x120, size 0x1
  __declspec(property(get = __cordl_internal_get_ignoreTextCommmitFieldOnValueChanged_, put = __cordl_internal_set_ignoreTextCommmitFieldOnValueChanged_)) bool ignoreTextCommmitFieldOnValueChanged_;

  /// @brief Field isKeyboardCreated_, offset 0xc1, size 0x1
  __declspec(property(get = __cordl_internal_get_isKeyboardCreated_, put = __cordl_internal_set_isKeyboardCreated_)) bool isKeyboardCreated_;

  /// @brief Field keyboardModelAlphaBlendShader, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_keyboardModelAlphaBlendShader, put = __cordl_internal_set_keyboardModelAlphaBlendShader)) ::UnityW<::UnityEngine::Shader>
      keyboardModelAlphaBlendShader;

  /// @brief Field keyboardModelShader, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_keyboardModelShader, put = __cordl_internal_set_keyboardModelShader)) ::UnityW<::UnityEngine::Shader> keyboardModelShader;

  /// @brief Field keyboardSpace_, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_keyboardSpace_, put = __cordl_internal_set_keyboardSpace_)) uint64_t keyboardSpace_;

  /// @brief Field keyboardVisible_, offset 0x10a, size 0x1
  __declspec(property(get = __cordl_internal_get_keyboardVisible_, put = __cordl_internal_set_keyboardVisible_)) bool keyboardVisible_;

  /// @brief Field leftControllerDirectTransform, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_leftControllerDirectTransform, put = __cordl_internal_set_leftControllerDirectTransform)) ::UnityW<::UnityEngine::Transform>
      leftControllerDirectTransform;

  /// @brief Field leftControllerRootTransform, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_leftControllerRootTransform, put = __cordl_internal_set_leftControllerRootTransform)) ::UnityW<::UnityEngine::Transform> leftControllerRootTransform;

  /// @brief Field modelAvailable_, offset 0x109, size 0x1
  __declspec(property(get = __cordl_internal_get_modelAvailable_, put = __cordl_internal_set_modelAvailable_)) bool modelAvailable_;

  /// @brief Field modelInitialized_, offset 0x108, size 0x1
  __declspec(property(get = __cordl_internal_get_modelInitialized_, put = __cordl_internal_set_modelInitialized_)) bool modelInitialized_;

  /// @brief Field rightControllerDirectTransform, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_rightControllerDirectTransform, put = __cordl_internal_set_rightControllerDirectTransform)) ::UnityW<::UnityEngine::Transform>
      rightControllerDirectTransform;

  /// @brief Field rightControllerRootTransform, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_rightControllerRootTransform, put = __cordl_internal_set_rightControllerRootTransform)) ::UnityW<::UnityEngine::Transform>
      rightControllerRootTransform;

  /// @brief Field runtimeInputField_, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_runtimeInputField_, put = __cordl_internal_set_runtimeInputField_)) ::UnityW<::UnityEngine::UI::InputField> runtimeInputField_;

  /// @brief Field singleton_, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_singleton_, put = setStaticF_singleton_)) ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> singleton_;

  /// @brief Field textCommitField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_textCommitField, put = __cordl_internal_set_textCommitField)) ::UnityW<::UnityEngine::UI::InputField> textCommitField;

  /// @brief Field virtualKeyboardModelKey_, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_virtualKeyboardModelKey_, put = __cordl_internal_set_virtualKeyboardModelKey_)) uint64_t virtualKeyboardModelKey_;

  /// @brief Field virtualKeyboardScene_, offset 0xd8, size 0x28
  __declspec(property(get = __cordl_internal_get_virtualKeyboardScene_, put = __cordl_internal_set_virtualKeyboardScene_)) ::GlobalNamespace::OVRGLTFScene virtualKeyboardScene_;

  /// @brief Field virtualKeyboardTextures_, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_virtualKeyboardTextures_, put = __cordl_internal_set_virtualKeyboardTextures_)) ::System::Collections::Generic::Dictionary_2<
      uint64_t, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>* virtualKeyboardTextures_;

  /// @brief Convert operator to "::GlobalNamespace::OVRManager_EventListener"
  constexpr operator ::GlobalNamespace::OVRManager_EventListener*() noexcept;

  /// @brief Method ApplyHideFlags, addr 0x4025a0c, size 0x7c, virtual false, abstract: false, final false
  static inline void ApplyHideFlags(::UnityEngine::Transform* t);

  /// @brief Method Awake, addr 0x4023b74, size 0x51c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method ChangeTextContext, addr 0x4025550, size 0xe0, virtual false, abstract: false, final false
  inline void ChangeTextContext(::StringW textContext);

  /// @brief Method ChangeTextContextInternal, addr 0x4023abc, size 0xb8, virtual false, abstract: false, final false
  inline void ChangeTextContextInternal(::StringW textContext);

  /// @brief Method ComputeLocation, addr 0x4024a2c, size 0xb8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPlugin_VirtualKeyboardLocationInfo ComputeLocation(::UnityEngine::Transform* transform);

  /// @brief Method DestroyKeyboard, addr 0x4024388, size 0x15c, virtual false, abstract: false, final false
  inline void DestroyKeyboard();

  /// @brief Method HideKeyboard, addr 0x40247f4, size 0x14, virtual false, abstract: false, final false
  inline void HideKeyboard();

  /// @brief Method LateUpdate, addr 0x4026b54, size 0x1c, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method LoadRuntimeVirtualKeyboardMesh, addr 0x4025630, size 0x3dc, virtual false, abstract: false, final false
  inline bool LoadRuntimeVirtualKeyboardMesh();

  /// @brief Method MaxElement, addr 0x4025e60, size 0x14, virtual false, abstract: false, final false
  inline float_t MaxElement(::UnityEngine::Vector3 vec);

  static inline ::GlobalNamespace::OVRVirtualKeyboard* New_ctor();

  /// @brief Method OnBackspace, addr 0x4027354, size 0x238, virtual false, abstract: false, final false
  inline void OnBackspace();

  /// @brief Method OnCommitText, addr 0x4027144, size 0x200, virtual false, abstract: false, final false
  inline void OnCommitText(::StringW text);

  /// @brief Method OnDestroy, addr 0x4024090, size 0x2f8, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x40247f0, size 0x4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x40244e4, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnEnter, addr 0x402758c, size 0xd8, virtual false, abstract: false, final false
  inline void OnEnter();

  /// @brief Method OnEvent, addr 0x4025420, size 0x130, virtual true, abstract: false, final true
  inline void OnEvent(::GlobalNamespace::OVRPlugin_EventDataBuffer eventDataBuffer);

  /// @brief Method OnKeyboardHidden, addr 0x402767c, size 0x14, virtual false, abstract: false, final false
  inline void OnKeyboardHidden();

  /// @brief Method OnKeyboardShown, addr 0x4027664, size 0x18, virtual false, abstract: false, final false
  inline void OnKeyboardShown();

  /// @brief Method OnTextCommitFieldChange, addr 0x4027344, size 0x10, virtual false, abstract: false, final false
  inline void OnTextCommitFieldChange(::StringW textContext);

  /// @brief Method PopulateCollision, addr 0x4025a88, size 0x22c, virtual false, abstract: false, final false
  inline void PopulateCollision();

  /// @brief Method SendVirtualKeyboardDirectInput, addr 0x4025358, size 0xc8, virtual false, abstract: false, final false
  inline void SendVirtualKeyboardDirectInput(::UnityEngine::Vector3 position, ::GlobalNamespace::OVRVirtualKeyboard_InputSource source, bool isPressed,
                                             ::UnityEngine::Transform* interactorRootTransform);

  /// @brief Method SendVirtualKeyboardInput, addr 0x4025160, size 0x1f8, virtual false, abstract: false, final false
  inline void SendVirtualKeyboardInput(::GlobalNamespace::OVRPlugin_VirtualKeyboardInputSource inputSource, ::GlobalNamespace::OVRPose pose, bool isPressed,
                                       ::UnityEngine::Transform* interactorRootTransform);

  /// @brief Method SendVirtualKeyboardRayInput, addr 0x4024da8, size 0x3b8, virtual false, abstract: false, final false
  inline void SendVirtualKeyboardRayInput(::UnityEngine::Transform* inputTransform, ::GlobalNamespace::OVRVirtualKeyboard_InputSource source, bool isPressed, bool useRaycastMask);

  /// @brief Method SetKeyboardVisibility, addr 0x4025d0c, size 0x154, virtual false, abstract: false, final false
  inline void SetKeyboardVisibility(bool visible);

  /// @brief Method ShowKeyboard, addr 0x40244e8, size 0x308, virtual false, abstract: false, final false
  inline void ShowKeyboard();

  /// @brief Method SyncKeyboardLocation, addr 0x4024ae4, size 0x2c4, virtual false, abstract: false, final false
  inline void SyncKeyboardLocation();

  /// @brief Method Update, addr 0x4025e74, size 0x30, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateAnimationState, addr 0x40263dc, size 0x778, virtual false, abstract: false, final false
  inline void UpdateAnimationState();

  /// @brief Method UpdateInputs, addr 0x4025ea4, size 0x538, virtual false, abstract: false, final false
  inline void UpdateInputs();

  /// @brief Method UpdateVisibleState, addr 0x4025cb4, size 0x58, virtual false, abstract: false, final false
  inline void UpdateVisibleState();

  /// @brief Method UseSuggestedLocation, addr 0x4024808, size 0x224, virtual false, abstract: false, final false
  inline void UseSuggestedLocation(::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition position);

  /// @brief Method <LoadRuntimeVirtualKeyboardMesh>b__68_1, addr 0x40277e4, size 0x228, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> _LoadRuntimeVirtualKeyboardMesh_b__68_1(::StringW rawUri, ::UnityEngine::Material* mat);

  constexpr ::System::Action* const& __cordl_internal_get_Backspace() const;

  constexpr ::System::Action*& __cordl_internal_get_Backspace();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_CommitText() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_CommitText();

  constexpr ::System::Action* const& __cordl_internal_get_Enter() const;

  constexpr ::System::Action*& __cordl_internal_get_Enter();

  constexpr ::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition const& __cordl_internal_get_InitialPosition() const;

  constexpr ::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition& __cordl_internal_get_InitialPosition();

  constexpr bool const& __cordl_internal_get_InputEnabled() const;

  constexpr bool& __cordl_internal_get_InputEnabled();

  constexpr ::System::Action* const& __cordl_internal_get_KeyboardHidden() const;

  constexpr ::System::Action*& __cordl_internal_get_KeyboardHidden();

  constexpr ::System::Action* const& __cordl_internal_get_KeyboardShown() const;

  constexpr ::System::Action*& __cordl_internal_get_KeyboardShown();

  constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get__Collider_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get__Collider_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRVirtualKeyboard_IInputSource*>* const& __cordl_internal_get__inputSources() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRVirtualKeyboard_IInputSource*>*& __cordl_internal_get__inputSources();

  constexpr ::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride* const& __cordl_internal_get__interactorRootTransformOverride() const;

  constexpr ::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride*& __cordl_internal_get__interactorRootTransformOverride();

  constexpr bool const& __cordl_internal_get_controllerDirectInteraction() const;

  constexpr bool& __cordl_internal_get_controllerDirectInteraction();

  constexpr bool const& __cordl_internal_get_controllerRayInteraction() const;

  constexpr bool& __cordl_internal_get_controllerRayInteraction();

  constexpr ::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster> const& __cordl_internal_get_controllerRaycaster() const;

  constexpr ::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster>& __cordl_internal_get_controllerRaycaster();

  constexpr bool const& __cordl_internal_get_handDirectInteraction() const;

  constexpr bool& __cordl_internal_get_handDirectInteraction();

  constexpr ::UnityW<::GlobalNamespace::OVRHand> const& __cordl_internal_get_handLeft() const;

  constexpr ::UnityW<::GlobalNamespace::OVRHand>& __cordl_internal_get_handLeft();

  constexpr bool const& __cordl_internal_get_handRayInteraction() const;

  constexpr bool& __cordl_internal_get_handRayInteraction();

  constexpr ::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster> const& __cordl_internal_get_handRaycaster() const;

  constexpr ::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster>& __cordl_internal_get_handRaycaster();

  constexpr ::UnityW<::GlobalNamespace::OVRHand> const& __cordl_internal_get_handRight() const;

  constexpr ::UnityW<::GlobalNamespace::OVRHand>& __cordl_internal_get_handRight();

  constexpr bool const& __cordl_internal_get_ignoreTextCommmitFieldOnValueChanged_() const;

  constexpr bool& __cordl_internal_get_ignoreTextCommmitFieldOnValueChanged_();

  constexpr bool const& __cordl_internal_get_isKeyboardCreated_() const;

  constexpr bool& __cordl_internal_get_isKeyboardCreated_();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_keyboardModelAlphaBlendShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_keyboardModelAlphaBlendShader();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_keyboardModelShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_keyboardModelShader();

  constexpr uint64_t const& __cordl_internal_get_keyboardSpace_() const;

  constexpr uint64_t& __cordl_internal_get_keyboardSpace_();

  constexpr bool const& __cordl_internal_get_keyboardVisible_() const;

  constexpr bool& __cordl_internal_get_keyboardVisible_();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftControllerDirectTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftControllerDirectTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftControllerRootTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftControllerRootTransform();

  constexpr bool const& __cordl_internal_get_modelAvailable_() const;

  constexpr bool& __cordl_internal_get_modelAvailable_();

  constexpr bool const& __cordl_internal_get_modelInitialized_() const;

  constexpr bool& __cordl_internal_get_modelInitialized_();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightControllerDirectTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightControllerDirectTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightControllerRootTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightControllerRootTransform();

  constexpr ::UnityW<::UnityEngine::UI::InputField> const& __cordl_internal_get_runtimeInputField_() const;

  constexpr ::UnityW<::UnityEngine::UI::InputField>& __cordl_internal_get_runtimeInputField_();

  constexpr ::UnityW<::UnityEngine::UI::InputField> const& __cordl_internal_get_textCommitField() const;

  constexpr ::UnityW<::UnityEngine::UI::InputField>& __cordl_internal_get_textCommitField();

  constexpr uint64_t const& __cordl_internal_get_virtualKeyboardModelKey_() const;

  constexpr uint64_t& __cordl_internal_get_virtualKeyboardModelKey_();

  constexpr ::GlobalNamespace::OVRGLTFScene const& __cordl_internal_get_virtualKeyboardScene_() const;

  constexpr ::GlobalNamespace::OVRGLTFScene& __cordl_internal_get_virtualKeyboardScene_();

  constexpr ::System::Collections::Generic::Dictionary_2<uint64_t, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>* const&
  __cordl_internal_get_virtualKeyboardTextures_() const;

  constexpr ::System::Collections::Generic::Dictionary_2<uint64_t, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>*& __cordl_internal_get_virtualKeyboardTextures_();

  constexpr void __cordl_internal_set_Backspace(::System::Action* value);

  constexpr void __cordl_internal_set_CommitText(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_Enter(::System::Action* value);

  constexpr void __cordl_internal_set_InitialPosition(::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition value);

  constexpr void __cordl_internal_set_InputEnabled(bool value);

  constexpr void __cordl_internal_set_KeyboardHidden(::System::Action* value);

  constexpr void __cordl_internal_set_KeyboardShown(::System::Action* value);

  constexpr void __cordl_internal_set__Collider_k__BackingField(::UnityW<::UnityEngine::Collider> value);

  constexpr void __cordl_internal_set__inputSources(::System::Collections::Generic::List_1<::GlobalNamespace::OVRVirtualKeyboard_IInputSource*>* value);

  constexpr void __cordl_internal_set__interactorRootTransformOverride(::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride* value);

  constexpr void __cordl_internal_set_controllerDirectInteraction(bool value);

  constexpr void __cordl_internal_set_controllerRayInteraction(bool value);

  constexpr void __cordl_internal_set_controllerRaycaster(::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster> value);

  constexpr void __cordl_internal_set_handDirectInteraction(bool value);

  constexpr void __cordl_internal_set_handLeft(::UnityW<::GlobalNamespace::OVRHand> value);

  constexpr void __cordl_internal_set_handRayInteraction(bool value);

  constexpr void __cordl_internal_set_handRaycaster(::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster> value);

  constexpr void __cordl_internal_set_handRight(::UnityW<::GlobalNamespace::OVRHand> value);

  constexpr void __cordl_internal_set_ignoreTextCommmitFieldOnValueChanged_(bool value);

  constexpr void __cordl_internal_set_isKeyboardCreated_(bool value);

  constexpr void __cordl_internal_set_keyboardModelAlphaBlendShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_keyboardModelShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_keyboardSpace_(uint64_t value);

  constexpr void __cordl_internal_set_keyboardVisible_(bool value);

  constexpr void __cordl_internal_set_leftControllerDirectTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_leftControllerRootTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_modelAvailable_(bool value);

  constexpr void __cordl_internal_set_modelInitialized_(bool value);

  constexpr void __cordl_internal_set_rightControllerDirectTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_rightControllerRootTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_runtimeInputField_(::UnityW<::UnityEngine::UI::InputField> value);

  constexpr void __cordl_internal_set_textCommitField(::UnityW<::UnityEngine::UI::InputField> value);

  constexpr void __cordl_internal_set_virtualKeyboardModelKey_(uint64_t value);

  constexpr void __cordl_internal_set_virtualKeyboardScene_(::GlobalNamespace::OVRGLTFScene value);

  constexpr void
  __cordl_internal_set_virtualKeyboardTextures_(::System::Collections::Generic::Dictionary_2<uint64_t, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>* value);

  /// @brief Method .ctor, addr 0x4027690, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_Backspace, addr 0x4023404, size 0x9c, virtual false, abstract: false, final false
  inline void add_Backspace(::System::Action* value);

  /// @brief Method add_CommitText, addr 0x40232a4, size 0xb0, virtual false, abstract: false, final false
  inline void add_CommitText(::System::Action_1<::StringW>* value);

  /// @brief Method add_Enter, addr 0x402353c, size 0x9c, virtual false, abstract: false, final false
  inline void add_Enter(::System::Action* value);

  /// @brief Method add_KeyboardHidden, addr 0x40237ac, size 0x9c, virtual false, abstract: false, final false
  inline void add_KeyboardHidden(::System::Action* value);

  /// @brief Method add_KeyboardShown, addr 0x4023674, size 0x9c, virtual false, abstract: false, final false
  inline void add_KeyboardShown(::System::Action* value);

  static inline ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> getStaticF_singleton_();

  /// @brief Method get_Collider, addr 0x40238e4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Collider> get_Collider();

  /// @brief Method get_TextCommitField, addr 0x40238f4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::InputField> get_TextCommitField();

  /// @brief Convert to "::GlobalNamespace::OVRManager_EventListener"
  constexpr ::GlobalNamespace::OVRManager_EventListener* i___GlobalNamespace__OVRManager_EventListener() noexcept;

  /// @brief Method remove_Backspace, addr 0x40234a0, size 0x9c, virtual false, abstract: false, final false
  inline void remove_Backspace(::System::Action* value);

  /// @brief Method remove_CommitText, addr 0x4023354, size 0xb0, virtual false, abstract: false, final false
  inline void remove_CommitText(::System::Action_1<::StringW>* value);

  /// @brief Method remove_Enter, addr 0x40235d8, size 0x9c, virtual false, abstract: false, final false
  inline void remove_Enter(::System::Action* value);

  /// @brief Method remove_KeyboardHidden, addr 0x4023848, size 0x9c, virtual false, abstract: false, final false
  inline void remove_KeyboardHidden(::System::Action* value);

  /// @brief Method remove_KeyboardShown, addr 0x4023710, size 0x9c, virtual false, abstract: false, final false
  inline void remove_KeyboardShown(::System::Action* value);

  static inline void setStaticF_singleton_(::UnityW<::GlobalNamespace::OVRVirtualKeyboard> value);

  /// @brief Method set_Collider, addr 0x40238ec, size 0x8, virtual false, abstract: false, final false
  inline void set_Collider(::UnityEngine::Collider* value);

  /// @brief Method set_TextCommitField, addr 0x40238fc, size 0x1c0, virtual false, abstract: false, final false
  inline void set_TextCommitField(::UnityEngine::UI::InputField* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRVirtualKeyboard();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRVirtualKeyboard(OVRVirtualKeyboard&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRVirtualKeyboard(OVRVirtualKeyboard const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8371 };

  /// @brief Field CommitText, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___CommitText;

  /// @brief Field Backspace, offset: 0x28, size: 0x8, def value: None
  ::System::Action* ___Backspace;

  /// @brief Field Enter, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___Enter;

  /// @brief Field KeyboardShown, offset: 0x38, size: 0x8, def value: None
  ::System::Action* ___KeyboardShown;

  /// @brief Field KeyboardHidden, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___KeyboardHidden;

  /// @brief Field <Collider>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Collider> ____Collider_k__BackingField;

  /// @brief Field InitialPosition, offset: 0x50, size: 0x4, def value: None
  ::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition ___InitialPosition;

  /// @brief Field textCommitField, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::InputField> ___textCommitField;

  /// @brief Field leftControllerRootTransform, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___leftControllerRootTransform;

  /// @brief Field leftControllerDirectTransform, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___leftControllerDirectTransform;

  /// @brief Field rightControllerRootTransform, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___rightControllerRootTransform;

  /// @brief Field rightControllerDirectTransform, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___rightControllerDirectTransform;

  /// @brief Field controllerDirectInteraction, offset: 0x80, size: 0x1, def value: None
  bool ___controllerDirectInteraction;

  /// @brief Field controllerRayInteraction, offset: 0x81, size: 0x1, def value: None
  bool ___controllerRayInteraction;

  /// @brief Field controllerRaycaster, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster> ___controllerRaycaster;

  /// @brief Field handLeft, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRHand> ___handLeft;

  /// @brief Field handRight, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRHand> ___handRight;

  /// @brief Field handDirectInteraction, offset: 0xa0, size: 0x1, def value: None
  bool ___handDirectInteraction;

  /// @brief Field handRayInteraction, offset: 0xa1, size: 0x1, def value: None
  bool ___handRayInteraction;

  /// @brief Field handRaycaster, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster> ___handRaycaster;

  /// @brief Field keyboardModelShader, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___keyboardModelShader;

  /// @brief Field keyboardModelAlphaBlendShader, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___keyboardModelAlphaBlendShader;

  /// @brief Field InputEnabled, offset: 0xc0, size: 0x1, def value: None
  bool ___InputEnabled;

  /// @brief Field isKeyboardCreated_, offset: 0xc1, size: 0x1, def value: None
  bool ___isKeyboardCreated_;

  /// @brief Field keyboardSpace_, offset: 0xc8, size: 0x8, def value: None
  uint64_t ___keyboardSpace_;

  /// @brief Field virtualKeyboardTextures_, offset: 0xd0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint64_t, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>* ___virtualKeyboardTextures_;

  /// @brief Field virtualKeyboardScene_, offset: 0xd8, size: 0x28, def value: None
  ::GlobalNamespace::OVRGLTFScene ___virtualKeyboardScene_;

  /// @brief Field virtualKeyboardModelKey_, offset: 0x100, size: 0x8, def value: None
  uint64_t ___virtualKeyboardModelKey_;

  /// @brief Field modelInitialized_, offset: 0x108, size: 0x1, def value: None
  bool ___modelInitialized_;

  /// @brief Field modelAvailable_, offset: 0x109, size: 0x1, def value: None
  bool ___modelAvailable_;

  /// @brief Field keyboardVisible_, offset: 0x10a, size: 0x1, def value: None
  bool ___keyboardVisible_;

  /// @brief Field _interactorRootTransformOverride, offset: 0x110, size: 0x8, def value: None
  ::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride* ____interactorRootTransformOverride;

  /// @brief Field _inputSources, offset: 0x118, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRVirtualKeyboard_IInputSource*>* ____inputSources;

  /// @brief Field ignoreTextCommmitFieldOnValueChanged_, offset: 0x120, size: 0x1, def value: None
  bool ___ignoreTextCommmitFieldOnValueChanged_;

  /// @brief Field runtimeInputField_, offset: 0x128, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::InputField> ___runtimeInputField_;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___CommitText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___Backspace) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___Enter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___KeyboardShown) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___KeyboardHidden) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ____Collider_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___InitialPosition) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___textCommitField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___leftControllerRootTransform) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___leftControllerDirectTransform) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___rightControllerRootTransform) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___rightControllerDirectTransform) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___controllerDirectInteraction) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___controllerRayInteraction) == 0x81, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___controllerRaycaster) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___handLeft) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___handRight) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___handDirectInteraction) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___handRayInteraction) == 0xa1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___handRaycaster) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___keyboardModelShader) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___keyboardModelAlphaBlendShader) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___InputEnabled) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___isKeyboardCreated_) == 0xc1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___keyboardSpace_) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___virtualKeyboardTextures_) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___virtualKeyboardScene_) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___virtualKeyboardModelKey_) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___modelInitialized_) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___modelAvailable_) == 0x109, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___keyboardVisible_) == 0x10a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ____interactorRootTransformOverride) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ____inputSources) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___ignoreTextCommmitFieldOnValueChanged_) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___runtimeInputField_) == 0x128, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRVirtualKeyboard, 0x130>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboard_InputSource, "", "OVRVirtualKeyboard/InputSource");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition, "", "OVRVirtualKeyboard/KeyboardPosition");
NEED_NO_BOX(::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c*, "", "OVRVirtualKeyboard/HandInputSource/<>c");
NEED_NO_BOX(::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6*, "",
                       "OVRVirtualKeyboard/InteractorRootTransformOverride/<RevertInteractorOverrides>d__6");
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboard);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboard*, "", "OVRVirtualKeyboard");
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource*, "", "OVRVirtualKeyboard/BaseInputSource");
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource*, "", "OVRVirtualKeyboard/ControllerInputSource");
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboard_HandInputSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboard_HandInputSource*, "", "OVRVirtualKeyboard/HandInputSource");
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboard_IInputSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboard_IInputSource*, "", "OVRVirtualKeyboard/IInputSource");
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride*, "", "OVRVirtualKeyboard/InteractorRootTransformOverride");
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboard___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboard___c*, "", "OVRVirtualKeyboard/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData, "",
                       "OVRVirtualKeyboard/InteractorRootTransformOverride/InteractorRootOverrideData");
