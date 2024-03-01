#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRGLTFScene_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "GlobalNamespace/zzzz__OVRPose_def.hpp"
#include "GlobalNamespace/zzzz__OVRVirtualKeyboard_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRVirtualKeyboard)
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
struct OVRPose;
}
namespace GlobalNamespace {
class OVRSkeleton;
}
namespace GlobalNamespace {
struct __OVRInput__Controller;
}
namespace GlobalNamespace {
class __OVRManager__EventListener;
}
namespace GlobalNamespace {
struct __OVRPlugin__EventDataBuffer;
}
namespace GlobalNamespace {
struct __OVRPlugin__Posef;
}
namespace GlobalNamespace {
struct __OVRPlugin__VirtualKeyboardInputSource;
}
namespace GlobalNamespace {
struct __OVRPlugin__VirtualKeyboardLocationInfo;
}
namespace GlobalNamespace {
class __OVRVirtualKeyboard__BaseInputSource;
}
namespace GlobalNamespace {
class __OVRVirtualKeyboard__ControllerInputSource;
}
namespace GlobalNamespace {
class __OVRVirtualKeyboard__HandInputSource;
}
namespace GlobalNamespace {
class __OVRVirtualKeyboard__HandInputSource____c;
}
namespace GlobalNamespace {
class __OVRVirtualKeyboard__IInputSource;
}
namespace GlobalNamespace {
struct __OVRVirtualKeyboard__InputSource;
}
namespace GlobalNamespace {
class __OVRVirtualKeyboard__InteractorRootTransformOverride;
}
namespace GlobalNamespace {
struct __OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData;
}
namespace GlobalNamespace {
class __OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6;
}
namespace GlobalNamespace {
struct __OVRVirtualKeyboard__KeyboardPosition;
}
namespace GlobalNamespace {
class __OVRVirtualKeyboard____c;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
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
class IDisposable;
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
struct __OVRVirtualKeyboard__InputSource;
}
namespace GlobalNamespace {
struct __OVRVirtualKeyboard__KeyboardPosition;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard;
}
namespace GlobalNamespace {
class __OVRVirtualKeyboard__BaseInputSource;
}
namespace GlobalNamespace {
class __OVRVirtualKeyboard__ControllerInputSource;
}
namespace GlobalNamespace {
class __OVRVirtualKeyboard__HandInputSource;
}
namespace GlobalNamespace {
class __OVRVirtualKeyboard__HandInputSource____c;
}
namespace GlobalNamespace {
class __OVRVirtualKeyboard__IInputSource;
}
namespace GlobalNamespace {
class __OVRVirtualKeyboard__InteractorRootTransformOverride;
}
namespace GlobalNamespace {
class __OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6;
}
namespace GlobalNamespace {
class __OVRVirtualKeyboard____c;
}
namespace GlobalNamespace {
struct __OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRVirtualKeyboard__InputSource);
MARK_VAL_T(::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition);
MARK_REF_PTR_T(::GlobalNamespace::OVRVirtualKeyboard);
MARK_REF_PTR_T(::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource);
MARK_REF_PTR_T(::GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource);
MARK_REF_PTR_T(::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource);
MARK_REF_PTR_T(::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c);
MARK_REF_PTR_T(::GlobalNamespace::__OVRVirtualKeyboard__IInputSource);
MARK_REF_PTR_T(::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride);
MARK_REF_PTR_T(::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6);
MARK_REF_PTR_T(::GlobalNamespace::__OVRVirtualKeyboard____c);
MARK_VAL_T(::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData);
// Type: ::KeyboardPosition
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRVirtualKeyboard::KeyboardPosition
struct CORDL_TYPE __OVRVirtualKeyboard__KeyboardPosition {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRVirtualKeyboard__KeyboardPosition_Unwrapped
  enum struct ____OVRVirtualKeyboard__KeyboardPosition_Unwrapped : int32_t {
    __E_Far = static_cast<int32_t>(0x0),
    __E_Near = static_cast<int32_t>(0x1),
    __E_Direct = static_cast<int32_t>(0x1),
    __E_Custom = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRVirtualKeyboard__KeyboardPosition_Unwrapped() const noexcept {
    return static_cast<____OVRVirtualKeyboard__KeyboardPosition_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<____OVRVirtualKeyboard__KeyboardPosition_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRVirtualKeyboard__KeyboardPosition();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRVirtualKeyboard__KeyboardPosition(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Custom value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition const Custom;

  /// @brief Field Direct value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition const Direct;

  /// @brief Field Far value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition const Far;

  /// @brief Field Near value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition const Near;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::InteractorRootOverrideData
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRVirtualKeyboard::InteractorRootTransformOverride::InteractorRootOverrideData
struct CORDL_TYPE __OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData();

  // Ctor Parameters [CppParam { name: "root", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None }, CppParam { name: "originalPose", ty: "::GlobalNamespace::OVRPose", modifiers:
  // "", def_value: None }, CppParam { name: "targetPose", ty: "::GlobalNamespace::OVRPose", modifiers: "", def_value: None }]
  constexpr __OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData(::UnityW<::UnityEngine::Transform> root, ::GlobalNamespace::OVRPose originalPose,
                                                                                              ::GlobalNamespace::OVRPose targetPose) noexcept;

  /// @brief Field root, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> root;

  /// @brief Field originalPose, offset: 0x8, size: 0x1c, def value: None
  ::GlobalNamespace::OVRPose originalPose;

  /// @brief Field targetPose, offset: 0x24, size: 0x1c, def value: None
  ::GlobalNamespace::OVRPose targetPose;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData, root) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData, originalPose) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData, targetPose) == 0x24, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<RevertInteractorOverrides>d__6
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRVirtualKeyboard::InteractorRootTransformOverride::<RevertInteractorOverrides>d__6*
class CORDL_TYPE __OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride* __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2890e24, size 0x9c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2890ec0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2890ec8, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2890f08, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2890e20, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride* value);

  /// @brief Method .ctor, addr 0x2890df8, size 0x28, virtual false, abstract: false, final false
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
  constexpr __OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6(__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6(__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::InteractorRootTransformOverride
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRVirtualKeyboard::InteractorRootTransformOverride*
class CORDL_TYPE __OVRVirtualKeyboard__InteractorRootTransformOverride : public ::System::Object {
public:
  // Declarations
  using InteractorRootOverrideData = ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData;

  using _RevertInteractorOverrides_d__6 = ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6;

  /// @brief Field applyQueue, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get_applyQueue,
      put = __cordl_internal_set_applyQueue))::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>* applyQueue;

  /// @brief Field revertQueue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_revertQueue, put = __cordl_internal_set_revertQueue))::System::Collections::Generic::Queue_1<
      ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>* revertQueue;

  /// @brief Method ApplyOverride, addr 0x2890c14, size 0xdc, virtual false, abstract: false, final false
  static inline bool ApplyOverride(::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData interactorOverride);

  /// @brief Method Enqueue, addr 0x288ff3c, size 0x1cc, virtual false, abstract: false, final false
  inline void Enqueue(::UnityEngine::Transform* interactorRootTransform, ::GlobalNamespace::__OVRPlugin__Posef interactorRootPose);

  /// @brief Method LateApply, addr 0x288fd00, size 0x23c, virtual false, abstract: false, final false
  inline void LateApply(::UnityEngine::MonoBehaviour* coroutineRunner);

  static inline ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride* New_ctor();

  /// @brief Method Reset, addr 0x2890d58, size 0xa0, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method RevertInteractorOverrides, addr 0x2890cf0, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* RevertInteractorOverrides();

  constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>*& __cordl_internal_get_applyQueue();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>*> const&
  __cordl_internal_get_applyQueue() const;

  constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>*& __cordl_internal_get_revertQueue();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>*> const&
  __cordl_internal_get_revertQueue() const;

  constexpr void __cordl_internal_set_applyQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>* value);

  constexpr void __cordl_internal_set_revertQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>* value);

  /// @brief Method .ctor, addr 0x2890944, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRVirtualKeyboard__InteractorRootTransformOverride();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRVirtualKeyboard__InteractorRootTransformOverride", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRVirtualKeyboard__InteractorRootTransformOverride(__OVRVirtualKeyboard__InteractorRootTransformOverride&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRVirtualKeyboard__InteractorRootTransformOverride", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRVirtualKeyboard__InteractorRootTransformOverride(__OVRVirtualKeyboard__InteractorRootTransformOverride const&) = delete;

  /// @brief Field applyQueue, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>* ___applyQueue;

  /// @brief Field revertQueue, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>* ___revertQueue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride, ___applyQueue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride, ___revertQueue) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::InputSource
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRVirtualKeyboard::InputSource
struct CORDL_TYPE __OVRVirtualKeyboard__InputSource {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRVirtualKeyboard__InputSource_Unwrapped
  enum struct ____OVRVirtualKeyboard__InputSource_Unwrapped : int32_t {
    __E_ControllerLeft = static_cast<int32_t>(0x0),
    __E_ControllerRight = static_cast<int32_t>(0x1),
    __E_HandLeft = static_cast<int32_t>(0x2),
    __E_HandRight = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRVirtualKeyboard__InputSource_Unwrapped() const noexcept {
    return static_cast<____OVRVirtualKeyboard__InputSource_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<____OVRVirtualKeyboard__InputSource_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRVirtualKeyboard__InputSource();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRVirtualKeyboard__InputSource(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ControllerLeft value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRVirtualKeyboard__InputSource const ControllerLeft;

  /// @brief Field ControllerRight value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRVirtualKeyboard__InputSource const ControllerRight;

  /// @brief Field HandLeft value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRVirtualKeyboard__InputSource const HandLeft;

  /// @brief Field HandRight value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRVirtualKeyboard__InputSource const HandRight;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRVirtualKeyboard__InputSource, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboard__InputSource, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::IInputSource
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRVirtualKeyboard::IInputSource*
class CORDL_TYPE __OVRVirtualKeyboard__IInputSource {
public:
  // Declarations
  /// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Update();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRVirtualKeyboard__IInputSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRVirtualKeyboard__IInputSource(__OVRVirtualKeyboard__IInputSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRVirtualKeyboard__IInputSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRVirtualKeyboard__IInputSource(__OVRVirtualKeyboard__IInputSource const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::BaseInputSource
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRVirtualKeyboard::BaseInputSource*
class CORDL_TYPE __OVRVirtualKeyboard__BaseInputSource : public ::System::Object {
public:
  // Declarations
  /// @brief Field _operatingWithoutOVRCameraRig, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__operatingWithoutOVRCameraRig, put = __cordl_internal_set__operatingWithoutOVRCameraRig)) bool _operatingWithoutOVRCameraRig;

  /// @brief Field _rig, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__rig, put = __cordl_internal_set__rig))::UnityW<::GlobalNamespace::OVRCameraRig> _rig;

  /// @brief Convert operator to "::GlobalNamespace::__OVRVirtualKeyboard__IInputSource"
  constexpr operator ::GlobalNamespace::__OVRVirtualKeyboard__IInputSource*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x2891028, size 0xd4, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource* New_ctor();

  /// @brief Method OnUpdatedAnchors, addr 0x2891004, size 0xc, virtual false, abstract: false, final false
  inline void OnUpdatedAnchors(::GlobalNamespace::OVRCameraRig* obj);

  /// @brief Method Update, addr 0x2891010, size 0x18, virtual true, abstract: false, final true
  inline void Update();

  /// @brief Method UpdateInput, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UpdateInput();

  constexpr bool const& __cordl_internal_get__operatingWithoutOVRCameraRig() const;

  constexpr bool& __cordl_internal_get__operatingWithoutOVRCameraRig();

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& __cordl_internal_get__rig() const;

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& __cordl_internal_get__rig();

  constexpr void __cordl_internal_set__operatingWithoutOVRCameraRig(bool value);

  constexpr void __cordl_internal_set__rig(::UnityW<::GlobalNamespace::OVRCameraRig> value);

  /// @brief Method .ctor, addr 0x2890f10, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::__OVRVirtualKeyboard__IInputSource"
  constexpr ::GlobalNamespace::__OVRVirtualKeyboard__IInputSource* i___GlobalNamespace____OVRVirtualKeyboard__IInputSource() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRVirtualKeyboard__BaseInputSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRVirtualKeyboard__BaseInputSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRVirtualKeyboard__BaseInputSource(__OVRVirtualKeyboard__BaseInputSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRVirtualKeyboard__BaseInputSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRVirtualKeyboard__BaseInputSource(__OVRVirtualKeyboard__BaseInputSource const&) = delete;

  /// @brief Field _operatingWithoutOVRCameraRig, offset: 0x10, size: 0x1, def value: None
  bool ____operatingWithoutOVRCameraRig;

  /// @brief Field _rig, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRCameraRig> ____rig;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource, ____operatingWithoutOVRCameraRig) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource, ____rig) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ControllerInputSource
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRVirtualKeyboard::ControllerInputSource*
class CORDL_TYPE __OVRVirtualKeyboard__ControllerInputSource : public ::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource {
public:
  // Declarations
  __declspec(property(get = get_TriggerIsPressed)) bool TriggerIsPressed;

  /// @brief Field _controllerType, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__controllerType, put = __cordl_internal_set__controllerType))::GlobalNamespace::__OVRInput__Controller _controllerType;

  /// @brief Field _directTransform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__directTransform, put = __cordl_internal_set__directTransform))::UnityW<::UnityEngine::Transform> _directTransform;

  /// @brief Field _inputSource, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__inputSource, put = __cordl_internal_set__inputSource))::GlobalNamespace::__OVRVirtualKeyboard__InputSource _inputSource;

  /// @brief Field _keyboard, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__keyboard, put = __cordl_internal_set__keyboard))::UnityW<::GlobalNamespace::OVRVirtualKeyboard> _keyboard;

  /// @brief Field _lastFrameCount, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__lastFrameCount, put = __cordl_internal_set__lastFrameCount)) int32_t _lastFrameCount;

  /// @brief Field _rootTransform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__rootTransform, put = __cordl_internal_set__rootTransform))::UnityW<::UnityEngine::Transform> _rootTransform;

  /// @brief Field _triggerButton, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__triggerButton, put = __cordl_internal_set__triggerButton))::GlobalNamespace::__OVRInput__RawButton _triggerButton;

  static inline ::GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource* New_ctor(::GlobalNamespace::OVRVirtualKeyboard* keyboard,
                                                                                         ::GlobalNamespace::__OVRVirtualKeyboard__InputSource inputSource,
                                                                                         ::GlobalNamespace::__OVRInput__Controller controllerType, ::UnityEngine::Transform* rootTransform,
                                                                                         ::UnityEngine::Transform* directTransform);

  /// @brief Method UpdateInput, addr 0x289115c, size 0x18c, virtual true, abstract: false, final false
  inline void UpdateInput();

  constexpr ::GlobalNamespace::__OVRInput__Controller const& __cordl_internal_get__controllerType() const;

  constexpr ::GlobalNamespace::__OVRInput__Controller& __cordl_internal_get__controllerType();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__directTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__directTransform();

  constexpr ::GlobalNamespace::__OVRVirtualKeyboard__InputSource const& __cordl_internal_get__inputSource() const;

  constexpr ::GlobalNamespace::__OVRVirtualKeyboard__InputSource& __cordl_internal_get__inputSource();

  constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> const& __cordl_internal_get__keyboard() const;

  constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard>& __cordl_internal_get__keyboard();

  constexpr int32_t const& __cordl_internal_get__lastFrameCount() const;

  constexpr int32_t& __cordl_internal_get__lastFrameCount();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__rootTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__rootTransform();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get__triggerButton() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get__triggerButton();

  constexpr void __cordl_internal_set__controllerType(::GlobalNamespace::__OVRInput__Controller value);

  constexpr void __cordl_internal_set__directTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__inputSource(::GlobalNamespace::__OVRVirtualKeyboard__InputSource value);

  constexpr void __cordl_internal_set__keyboard(::UnityW<::GlobalNamespace::OVRVirtualKeyboard> value);

  constexpr void __cordl_internal_set__lastFrameCount(int32_t value);

  constexpr void __cordl_internal_set__rootTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__triggerButton(::GlobalNamespace::__OVRInput__RawButton value);

  /// @brief Method .ctor, addr 0x2890108, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRVirtualKeyboard* keyboard, ::GlobalNamespace::__OVRVirtualKeyboard__InputSource inputSource, ::GlobalNamespace::__OVRInput__Controller controllerType,
                    ::UnityEngine::Transform* rootTransform, ::UnityEngine::Transform* directTransform);

  /// @brief Method get_TriggerIsPressed, addr 0x28910fc, size 0x60, virtual false, abstract: false, final false
  inline bool get_TriggerIsPressed();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRVirtualKeyboard__ControllerInputSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRVirtualKeyboard__ControllerInputSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRVirtualKeyboard__ControllerInputSource(__OVRVirtualKeyboard__ControllerInputSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRVirtualKeyboard__ControllerInputSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRVirtualKeyboard__ControllerInputSource(__OVRVirtualKeyboard__ControllerInputSource const&) = delete;

  /// @brief Field _rootTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____rootTransform;

  /// @brief Field _directTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____directTransform;

  /// @brief Field _inputSource, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::__OVRVirtualKeyboard__InputSource ____inputSource;

  /// @brief Field _controllerType, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__Controller ____controllerType;

  /// @brief Field _keyboard, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> ____keyboard;

  /// @brief Field _lastFrameCount, offset: 0x40, size: 0x4, def value: None
  int32_t ____lastFrameCount;

  /// @brief Field _triggerButton, offset: 0x44, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ____triggerButton;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource, ____rootTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource, ____directTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource, ____inputSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource, ____controllerType) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource, ____keyboard) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource, ____lastFrameCount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource, ____triggerButton) == 0x44, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRVirtualKeyboard::HandInputSource::<>c*
class CORDL_TYPE __OVRVirtualKeyboard__HandInputSource____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0))::System::Func_2<::GlobalNamespace::OVRBone*, bool>* __9__6_0;

  /// @brief Field <>9__6_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__6_1, put = setStaticF___9__6_1))::System::Func_2<::GlobalNamespace::OVRBone*, bool>* __9__6_1;

  static inline ::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c* New_ctor();

  /// @brief Method <UpdateInput>b__6_0, addr 0x2891688, size 0x20, virtual false, abstract: false, final false
  inline bool _UpdateInput_b__6_0(::GlobalNamespace::OVRBone* b);

  /// @brief Method <UpdateInput>b__6_1, addr 0x28916a8, size 0x20, virtual false, abstract: false, final false
  inline bool _UpdateInput_b__6_1(::GlobalNamespace::OVRBone* b);

  /// @brief Method .ctor, addr 0x2891680, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::OVRBone*, bool>* getStaticF___9__6_0();

  static inline ::System::Func_2<::GlobalNamespace::OVRBone*, bool>* getStaticF___9__6_1();

  static inline void setStaticF___9(::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c* value);

  static inline void setStaticF___9__6_0(::System::Func_2<::GlobalNamespace::OVRBone*, bool>* value);

  static inline void setStaticF___9__6_1(::System::Func_2<::GlobalNamespace::OVRBone*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRVirtualKeyboard__HandInputSource____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRVirtualKeyboard__HandInputSource____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRVirtualKeyboard__HandInputSource____c(__OVRVirtualKeyboard__HandInputSource____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRVirtualKeyboard__HandInputSource____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRVirtualKeyboard__HandInputSource____c(__OVRVirtualKeyboard__HandInputSource____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::HandInputSource
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRVirtualKeyboard::HandInputSource*
class CORDL_TYPE __OVRVirtualKeyboard__HandInputSource : public ::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource {
public:
  // Declarations
  using __c = ::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c;

  /// @brief Field _hand, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__hand, put = __cordl_internal_set__hand))::UnityW<::GlobalNamespace::OVRHand> _hand;

  /// @brief Field _inputSource, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__inputSource, put = __cordl_internal_set__inputSource))::GlobalNamespace::__OVRVirtualKeyboard__InputSource _inputSource;

  /// @brief Field _keyboard, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__keyboard, put = __cordl_internal_set__keyboard))::UnityW<::GlobalNamespace::OVRVirtualKeyboard> _keyboard;

  /// @brief Field _lastFrameCount, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__lastFrameCount, put = __cordl_internal_set__lastFrameCount)) int32_t _lastFrameCount;

  /// @brief Field _skeleton, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__skeleton, put = __cordl_internal_set__skeleton))::UnityW<::GlobalNamespace::OVRSkeleton> _skeleton;

  static inline ::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource* New_ctor(::GlobalNamespace::OVRVirtualKeyboard* keyboard, ::GlobalNamespace::__OVRVirtualKeyboard__InputSource inputSource,
                                                                                   ::GlobalNamespace::OVRHand* hand);

  /// @brief Method UpdateInput, addr 0x28912e8, size 0x334, virtual true, abstract: false, final false
  inline void UpdateInput();

  constexpr ::UnityW<::GlobalNamespace::OVRHand> const& __cordl_internal_get__hand() const;

  constexpr ::UnityW<::GlobalNamespace::OVRHand>& __cordl_internal_get__hand();

  constexpr ::GlobalNamespace::__OVRVirtualKeyboard__InputSource const& __cordl_internal_get__inputSource() const;

  constexpr ::GlobalNamespace::__OVRVirtualKeyboard__InputSource& __cordl_internal_get__inputSource();

  constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> const& __cordl_internal_get__keyboard() const;

  constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard>& __cordl_internal_get__keyboard();

  constexpr int32_t const& __cordl_internal_get__lastFrameCount() const;

  constexpr int32_t& __cordl_internal_get__lastFrameCount();

  constexpr ::UnityW<::GlobalNamespace::OVRSkeleton> const& __cordl_internal_get__skeleton() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSkeleton>& __cordl_internal_get__skeleton();

  constexpr void __cordl_internal_set__hand(::UnityW<::GlobalNamespace::OVRHand> value);

  constexpr void __cordl_internal_set__inputSource(::GlobalNamespace::__OVRVirtualKeyboard__InputSource value);

  constexpr void __cordl_internal_set__keyboard(::UnityW<::GlobalNamespace::OVRVirtualKeyboard> value);

  constexpr void __cordl_internal_set__lastFrameCount(int32_t value);

  constexpr void __cordl_internal_set__skeleton(::UnityW<::GlobalNamespace::OVRSkeleton> value);

  /// @brief Method .ctor, addr 0x2890170, size 0x1c4, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRVirtualKeyboard* keyboard, ::GlobalNamespace::__OVRVirtualKeyboard__InputSource inputSource, ::GlobalNamespace::OVRHand* hand);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRVirtualKeyboard__HandInputSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRVirtualKeyboard__HandInputSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRVirtualKeyboard__HandInputSource(__OVRVirtualKeyboard__HandInputSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRVirtualKeyboard__HandInputSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRVirtualKeyboard__HandInputSource(__OVRVirtualKeyboard__HandInputSource const&) = delete;

  /// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRHand> ____hand;

  /// @brief Field _inputSource, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::__OVRVirtualKeyboard__InputSource ____inputSource;

  /// @brief Field _keyboard, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> ____keyboard;

  /// @brief Field _skeleton, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSkeleton> ____skeleton;

  /// @brief Field _lastFrameCount, offset: 0x40, size: 0x4, def value: None
  int32_t ____lastFrameCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource, ____inputSource) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource, ____keyboard) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource, ____skeleton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource, ____lastFrameCount) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRVirtualKeyboard::<>c*
class CORDL_TYPE __OVRVirtualKeyboard____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__OVRVirtualKeyboard____c* __9;

  /// @brief Field <>9__68_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__68_0, put = setStaticF___9__68_0))::System::Func_2<::StringW, bool>* __9__68_0;

  /// @brief Field <>9__70_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__70_0, put = setStaticF___9__70_0))::System::Func_2<::UnityW<::UnityEngine::MeshFilter>, bool>* __9__70_0;

  static inline ::GlobalNamespace::__OVRVirtualKeyboard____c* New_ctor();

  /// @brief Method <LoadRuntimeVirtualKeyboardMesh>b__68_0, addr 0x2891734, size 0x8c, virtual false, abstract: false, final false
  inline bool _LoadRuntimeVirtualKeyboardMesh_b__68_0(::StringW p);

  /// @brief Method <PopulateCollision>b__70_0, addr 0x28917c0, size 0x68, virtual false, abstract: false, final false
  inline bool _PopulateCollision_b__70_0(::UnityEngine::MeshFilter* mesh);

  /// @brief Method .ctor, addr 0x289172c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__OVRVirtualKeyboard____c* getStaticF___9();

  static inline ::System::Func_2<::StringW, bool>* getStaticF___9__68_0();

  static inline ::System::Func_2<::UnityW<::UnityEngine::MeshFilter>, bool>* getStaticF___9__70_0();

  static inline void setStaticF___9(::GlobalNamespace::__OVRVirtualKeyboard____c* value);

  static inline void setStaticF___9__68_0(::System::Func_2<::StringW, bool>* value);

  static inline void setStaticF___9__70_0(::System::Func_2<::UnityW<::UnityEngine::MeshFilter>, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRVirtualKeyboard____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRVirtualKeyboard____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRVirtualKeyboard____c(__OVRVirtualKeyboard____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRVirtualKeyboard____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRVirtualKeyboard____c(__OVRVirtualKeyboard____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRVirtualKeyboard____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRVirtualKeyboard
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRVirtualKeyboard*
class CORDL_TYPE OVRVirtualKeyboard : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using BaseInputSource = ::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource;

  using ControllerInputSource = ::GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource;

  using HandInputSource = ::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource;

  using IInputSource = ::GlobalNamespace::__OVRVirtualKeyboard__IInputSource;

  using InputSource = ::GlobalNamespace::__OVRVirtualKeyboard__InputSource;

  using InteractorRootTransformOverride = ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride;

  using KeyboardPosition = ::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition;

  using __c = ::GlobalNamespace::__OVRVirtualKeyboard____c;

  /// @brief Field Backspace, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Backspace, put = __cordl_internal_set_Backspace))::System::Action* Backspace;

  __declspec(property(get = get_Collider, put = set_Collider))::UnityW<::UnityEngine::Collider> Collider;

  /// @brief Field CommitText, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CommitText, put = __cordl_internal_set_CommitText))::System::Action_1<::StringW>* CommitText;

  /// @brief Field Enter, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Enter, put = __cordl_internal_set_Enter))::System::Action* Enter;

  /// @brief Field InitialPosition, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_InitialPosition, put = __cordl_internal_set_InitialPosition))::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition InitialPosition;

  /// @brief Field InputEnabled, offset 0xb8, size 0x1
  __declspec(property(get = __cordl_internal_get_InputEnabled, put = __cordl_internal_set_InputEnabled)) bool InputEnabled;

  /// @brief Field KeyboardHidden, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_KeyboardHidden, put = __cordl_internal_set_KeyboardHidden))::System::Action* KeyboardHidden;

  /// @brief Field KeyboardShown, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_KeyboardShown, put = __cordl_internal_set_KeyboardShown))::System::Action* KeyboardShown;

  __declspec(property(get = get_TextCommitField, put = set_TextCommitField))::UnityW<::UnityEngine::UI::InputField> TextCommitField;

  /// @brief Field <Collider>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__Collider_k__BackingField, put = __cordl_internal_set__Collider_k__BackingField))::UnityW<::UnityEngine::Collider> _Collider_k__BackingField;

  /// @brief Field _inputSources, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__inputSources,
                      put = __cordl_internal_set__inputSources))::System::Collections::Generic::List_1<::GlobalNamespace::__OVRVirtualKeyboard__IInputSource*>* _inputSources;

  /// @brief Field _interactorRootTransformOverride, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__interactorRootTransformOverride,
                      put = __cordl_internal_set__interactorRootTransformOverride))::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride* _interactorRootTransformOverride;

  /// @brief Field controllerDirectInteraction, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get_controllerDirectInteraction, put = __cordl_internal_set_controllerDirectInteraction)) bool controllerDirectInteraction;

  /// @brief Field controllerRayInteraction, offset 0x79, size 0x1
  __declspec(property(get = __cordl_internal_get_controllerRayInteraction, put = __cordl_internal_set_controllerRayInteraction)) bool controllerRayInteraction;

  /// @brief Field controllerRaycaster, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_controllerRaycaster, put = __cordl_internal_set_controllerRaycaster))::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster> controllerRaycaster;

  /// @brief Field handDirectInteraction, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get_handDirectInteraction, put = __cordl_internal_set_handDirectInteraction)) bool handDirectInteraction;

  /// @brief Field handLeft, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_handLeft, put = __cordl_internal_set_handLeft))::UnityW<::GlobalNamespace::OVRHand> handLeft;

  /// @brief Field handRayInteraction, offset 0x99, size 0x1
  __declspec(property(get = __cordl_internal_get_handRayInteraction, put = __cordl_internal_set_handRayInteraction)) bool handRayInteraction;

  /// @brief Field handRaycaster, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_handRaycaster, put = __cordl_internal_set_handRaycaster))::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster> handRaycaster;

  /// @brief Field handRight, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_handRight, put = __cordl_internal_set_handRight))::UnityW<::GlobalNamespace::OVRHand> handRight;

  /// @brief Field ignoreTextCommmitFieldOnValueChanged_, offset 0x118, size 0x1
  __declspec(property(get = __cordl_internal_get_ignoreTextCommmitFieldOnValueChanged_, put = __cordl_internal_set_ignoreTextCommmitFieldOnValueChanged_)) bool ignoreTextCommmitFieldOnValueChanged_;

  /// @brief Field isKeyboardCreated_, offset 0xb9, size 0x1
  __declspec(property(get = __cordl_internal_get_isKeyboardCreated_, put = __cordl_internal_set_isKeyboardCreated_)) bool isKeyboardCreated_;

  /// @brief Field keyboardModelAlphaBlendShader, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_keyboardModelAlphaBlendShader, put = __cordl_internal_set_keyboardModelAlphaBlendShader))::UnityW<::UnityEngine::Shader> keyboardModelAlphaBlendShader;

  /// @brief Field keyboardModelShader, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_keyboardModelShader, put = __cordl_internal_set_keyboardModelShader))::UnityW<::UnityEngine::Shader> keyboardModelShader;

  /// @brief Field keyboardSpace_, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_keyboardSpace_, put = __cordl_internal_set_keyboardSpace_)) uint64_t keyboardSpace_;

  /// @brief Field keyboardVisible_, offset 0x102, size 0x1
  __declspec(property(get = __cordl_internal_get_keyboardVisible_, put = __cordl_internal_set_keyboardVisible_)) bool keyboardVisible_;

  /// @brief Field leftControllerDirectTransform, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_leftControllerDirectTransform,
                      put = __cordl_internal_set_leftControllerDirectTransform))::UnityW<::UnityEngine::Transform> leftControllerDirectTransform;

  /// @brief Field leftControllerRootTransform, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_leftControllerRootTransform, put = __cordl_internal_set_leftControllerRootTransform))::UnityW<::UnityEngine::Transform> leftControllerRootTransform;

  /// @brief Field modelAvailable_, offset 0x101, size 0x1
  __declspec(property(get = __cordl_internal_get_modelAvailable_, put = __cordl_internal_set_modelAvailable_)) bool modelAvailable_;

  /// @brief Field modelInitialized_, offset 0x100, size 0x1
  __declspec(property(get = __cordl_internal_get_modelInitialized_, put = __cordl_internal_set_modelInitialized_)) bool modelInitialized_;

  /// @brief Field rightControllerDirectTransform, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_rightControllerDirectTransform,
                      put = __cordl_internal_set_rightControllerDirectTransform))::UnityW<::UnityEngine::Transform> rightControllerDirectTransform;

  /// @brief Field rightControllerRootTransform, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_rightControllerRootTransform, put = __cordl_internal_set_rightControllerRootTransform))::UnityW<::UnityEngine::Transform> rightControllerRootTransform;

  /// @brief Field runtimeInputField_, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_runtimeInputField_, put = __cordl_internal_set_runtimeInputField_))::UnityW<::UnityEngine::UI::InputField> runtimeInputField_;

  /// @brief Field singleton_, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_singleton_, put = setStaticF_singleton_))::UnityW<::GlobalNamespace::OVRVirtualKeyboard> singleton_;

  /// @brief Field textCommitField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_textCommitField, put = __cordl_internal_set_textCommitField))::UnityW<::UnityEngine::UI::InputField> textCommitField;

  /// @brief Field virtualKeyboardModelKey_, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_virtualKeyboardModelKey_, put = __cordl_internal_set_virtualKeyboardModelKey_)) uint64_t virtualKeyboardModelKey_;

  /// @brief Field virtualKeyboardScene_, offset 0xd0, size 0x28
  __declspec(property(get = __cordl_internal_get_virtualKeyboardScene_, put = __cordl_internal_set_virtualKeyboardScene_))::GlobalNamespace::OVRGLTFScene virtualKeyboardScene_;

  /// @brief Field virtualKeyboardTextures_, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_virtualKeyboardTextures_, put = __cordl_internal_set_virtualKeyboardTextures_))::System::Collections::Generic::Dictionary_2<
      uint64_t, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>* virtualKeyboardTextures_;

  /// @brief Convert operator to "::GlobalNamespace::__OVRManager__EventListener"
  constexpr operator ::GlobalNamespace::__OVRManager__EventListener*() noexcept;

  /// @brief Method ApplyHideFlags, addr 0x288ebdc, size 0x7c, virtual false, abstract: false, final false
  static inline void ApplyHideFlags(::UnityEngine::Transform* t);

  /// @brief Method Awake, addr 0x288cda0, size 0x524, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method ChangeTextContext, addr 0x288e724, size 0xe0, virtual false, abstract: false, final false
  inline void ChangeTextContext(::StringW textContext);

  /// @brief Method ChangeTextContextInternal, addr 0x288cce8, size 0xb8, virtual false, abstract: false, final false
  inline void ChangeTextContextInternal(::StringW textContext);

  /// @brief Method ComputeLocation, addr 0x288dc70, size 0xb8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRPlugin__VirtualKeyboardLocationInfo ComputeLocation(::UnityEngine::Transform* transform);

  /// @brief Method DestroyKeyboard, addr 0x288d5c0, size 0x15c, virtual false, abstract: false, final false
  inline void DestroyKeyboard();

  /// @brief Method HideKeyboard, addr 0x288da38, size 0x14, virtual false, abstract: false, final false
  inline void HideKeyboard();

  /// @brief Method LateUpdate, addr 0x288fce4, size 0x1c, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method LoadRuntimeVirtualKeyboardMesh, addr 0x288e804, size 0x3d8, virtual false, abstract: false, final false
  inline bool LoadRuntimeVirtualKeyboardMesh();

  /// @brief Method MaxElement, addr 0x288f024, size 0x14, virtual false, abstract: false, final false
  inline float_t MaxElement(::UnityEngine::Vector3 vec);

  static inline ::GlobalNamespace::OVRVirtualKeyboard* New_ctor();

  /// @brief Method OnBackspace, addr 0x2890544, size 0x238, virtual false, abstract: false, final false
  inline void OnBackspace();

  /// @brief Method OnCommitText, addr 0x2890334, size 0x200, virtual false, abstract: false, final false
  inline void OnCommitText(::StringW text);

  /// @brief Method OnDestroy, addr 0x288d2c4, size 0x2fc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x288da34, size 0x4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x288d71c, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnEnter, addr 0x289077c, size 0xd8, virtual false, abstract: false, final false
  inline void OnEnter();

  /// @brief Method OnEvent, addr 0x288e5f4, size 0x130, virtual true, abstract: false, final true
  inline void OnEvent(::GlobalNamespace::__OVRPlugin__EventDataBuffer eventDataBuffer);

  /// @brief Method OnKeyboardHidden, addr 0x289086c, size 0x14, virtual false, abstract: false, final false
  inline void OnKeyboardHidden();

  /// @brief Method OnKeyboardShown, addr 0x2890854, size 0x18, virtual false, abstract: false, final false
  inline void OnKeyboardShown();

  /// @brief Method OnTextCommitFieldChange, addr 0x2890534, size 0x10, virtual false, abstract: false, final false
  inline void OnTextCommitFieldChange(::StringW textContext);

  /// @brief Method PopulateCollision, addr 0x288ec58, size 0x224, virtual false, abstract: false, final false
  inline void PopulateCollision();

  /// @brief Method SendVirtualKeyboardDirectInput, addr 0x288e524, size 0xd0, virtual false, abstract: false, final false
  inline void SendVirtualKeyboardDirectInput(::UnityEngine::Vector3 position, ::GlobalNamespace::__OVRVirtualKeyboard__InputSource source, bool isPressed,
                                             ::UnityEngine::Transform* interactorRootTransform);

  /// @brief Method SendVirtualKeyboardInput, addr 0x288e30c, size 0x218, virtual false, abstract: false, final false
  inline void SendVirtualKeyboardInput(::GlobalNamespace::__OVRPlugin__VirtualKeyboardInputSource inputSource, ::GlobalNamespace::OVRPose pose, bool isPressed,
                                       ::UnityEngine::Transform* interactorRootTransform);

  /// @brief Method SendVirtualKeyboardRayInput, addr 0x288dfe4, size 0x328, virtual false, abstract: false, final false
  inline void SendVirtualKeyboardRayInput(::UnityEngine::Transform* inputTransform, ::GlobalNamespace::__OVRVirtualKeyboard__InputSource source, bool isPressed, bool useRaycastMask);

  /// @brief Method SetKeyboardVisibility, addr 0x288eed4, size 0x150, virtual false, abstract: false, final false
  inline void SetKeyboardVisibility(bool visible);

  /// @brief Method ShowKeyboard, addr 0x288d720, size 0x314, virtual false, abstract: false, final false
  inline void ShowKeyboard();

  /// @brief Method SyncKeyboardLocation, addr 0x288dd28, size 0x2bc, virtual false, abstract: false, final false
  inline void SyncKeyboardLocation();

  /// @brief Method Update, addr 0x288f038, size 0x30, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateAnimationState, addr 0x288f58c, size 0x758, virtual false, abstract: false, final false
  inline void UpdateAnimationState();

  /// @brief Method UpdateInputs, addr 0x288f068, size 0x524, virtual false, abstract: false, final false
  inline void UpdateInputs();

  /// @brief Method UpdateVisibleState, addr 0x288ee7c, size 0x58, virtual false, abstract: false, final false
  inline void UpdateVisibleState();

  /// @brief Method UseSuggestedLocation, addr 0x288da4c, size 0x224, virtual false, abstract: false, final false
  inline void UseSuggestedLocation(::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition position);

  /// @brief Method <LoadRuntimeVirtualKeyboardMesh>b__68_1, addr 0x28909e4, size 0x230, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> _LoadRuntimeVirtualKeyboardMesh_b__68_1(::StringW rawUri, ::UnityEngine::Material* mat);

  constexpr ::System::Action*& __cordl_internal_get_Backspace();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_Backspace() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_CommitText();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get_CommitText() const;

  constexpr ::System::Action*& __cordl_internal_get_Enter();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_Enter() const;

  constexpr ::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition const& __cordl_internal_get_InitialPosition() const;

  constexpr ::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition& __cordl_internal_get_InitialPosition();

  constexpr bool const& __cordl_internal_get_InputEnabled() const;

  constexpr bool& __cordl_internal_get_InputEnabled();

  constexpr ::System::Action*& __cordl_internal_get_KeyboardHidden();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_KeyboardHidden() const;

  constexpr ::System::Action*& __cordl_internal_get_KeyboardShown();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_KeyboardShown() const;

  constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get__Collider_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get__Collider_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRVirtualKeyboard__IInputSource*>*& __cordl_internal_get__inputSources();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRVirtualKeyboard__IInputSource*>*> const& __cordl_internal_get__inputSources() const;

  constexpr ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride*& __cordl_internal_get__interactorRootTransformOverride();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride*> const& __cordl_internal_get__interactorRootTransformOverride() const;

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

  constexpr ::System::Collections::Generic::Dictionary_2<uint64_t, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>*& __cordl_internal_get_virtualKeyboardTextures_();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint64_t, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>*> const&
  __cordl_internal_get_virtualKeyboardTextures_() const;

  constexpr void __cordl_internal_set_Backspace(::System::Action* value);

  constexpr void __cordl_internal_set_CommitText(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_Enter(::System::Action* value);

  constexpr void __cordl_internal_set_InitialPosition(::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition value);

  constexpr void __cordl_internal_set_InputEnabled(bool value);

  constexpr void __cordl_internal_set_KeyboardHidden(::System::Action* value);

  constexpr void __cordl_internal_set_KeyboardShown(::System::Action* value);

  constexpr void __cordl_internal_set__Collider_k__BackingField(::UnityW<::UnityEngine::Collider> value);

  constexpr void __cordl_internal_set__inputSources(::System::Collections::Generic::List_1<::GlobalNamespace::__OVRVirtualKeyboard__IInputSource*>* value);

  constexpr void __cordl_internal_set__interactorRootTransformOverride(::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride* value);

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

  /// @brief Method .ctor, addr 0x2890880, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_Backspace, addr 0x288c62c, size 0x9c, virtual false, abstract: false, final false
  inline void add_Backspace(::System::Action* value);

  /// @brief Method add_CommitText, addr 0x288c4cc, size 0xb0, virtual false, abstract: false, final false
  inline void add_CommitText(::System::Action_1<::StringW>* value);

  /// @brief Method add_Enter, addr 0x288c764, size 0x9c, virtual false, abstract: false, final false
  inline void add_Enter(::System::Action* value);

  /// @brief Method add_KeyboardHidden, addr 0x288c9d4, size 0x9c, virtual false, abstract: false, final false
  inline void add_KeyboardHidden(::System::Action* value);

  /// @brief Method add_KeyboardShown, addr 0x288c89c, size 0x9c, virtual false, abstract: false, final false
  inline void add_KeyboardShown(::System::Action* value);

  static inline ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> getStaticF_singleton_();

  /// @brief Method get_Collider, addr 0x288cb0c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Collider> get_Collider();

  /// @brief Method get_TextCommitField, addr 0x288cb1c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::InputField> get_TextCommitField();

  /// @brief Convert to "::GlobalNamespace::__OVRManager__EventListener"
  constexpr ::GlobalNamespace::__OVRManager__EventListener* i___GlobalNamespace____OVRManager__EventListener() noexcept;

  /// @brief Method remove_Backspace, addr 0x288c6c8, size 0x9c, virtual false, abstract: false, final false
  inline void remove_Backspace(::System::Action* value);

  /// @brief Method remove_CommitText, addr 0x288c57c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_CommitText(::System::Action_1<::StringW>* value);

  /// @brief Method remove_Enter, addr 0x288c800, size 0x9c, virtual false, abstract: false, final false
  inline void remove_Enter(::System::Action* value);

  /// @brief Method remove_KeyboardHidden, addr 0x288ca70, size 0x9c, virtual false, abstract: false, final false
  inline void remove_KeyboardHidden(::System::Action* value);

  /// @brief Method remove_KeyboardShown, addr 0x288c938, size 0x9c, virtual false, abstract: false, final false
  inline void remove_KeyboardShown(::System::Action* value);

  static inline void setStaticF_singleton_(::UnityW<::GlobalNamespace::OVRVirtualKeyboard> value);

  /// @brief Method set_Collider, addr 0x288cb14, size 0x8, virtual false, abstract: false, final false
  inline void set_Collider(::UnityEngine::Collider* value);

  /// @brief Method set_TextCommitField, addr 0x288cb24, size 0x1c4, virtual false, abstract: false, final false
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

  /// @brief Field CommitText, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___CommitText;

  /// @brief Field Backspace, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___Backspace;

  /// @brief Field Enter, offset: 0x28, size: 0x8, def value: None
  ::System::Action* ___Enter;

  /// @brief Field KeyboardShown, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___KeyboardShown;

  /// @brief Field KeyboardHidden, offset: 0x38, size: 0x8, def value: None
  ::System::Action* ___KeyboardHidden;

  /// @brief Field <Collider>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Collider> ____Collider_k__BackingField;

  /// @brief Field InitialPosition, offset: 0x48, size: 0x4, def value: None
  ::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition ___InitialPosition;

  /// @brief Field textCommitField, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::InputField> ___textCommitField;

  /// @brief Field leftControllerRootTransform, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___leftControllerRootTransform;

  /// @brief Field leftControllerDirectTransform, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___leftControllerDirectTransform;

  /// @brief Field rightControllerRootTransform, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___rightControllerRootTransform;

  /// @brief Field rightControllerDirectTransform, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___rightControllerDirectTransform;

  /// @brief Field controllerDirectInteraction, offset: 0x78, size: 0x1, def value: None
  bool ___controllerDirectInteraction;

  /// @brief Field controllerRayInteraction, offset: 0x79, size: 0x1, def value: None
  bool ___controllerRayInteraction;

  /// @brief Field controllerRaycaster, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster> ___controllerRaycaster;

  /// @brief Field handLeft, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRHand> ___handLeft;

  /// @brief Field handRight, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRHand> ___handRight;

  /// @brief Field handDirectInteraction, offset: 0x98, size: 0x1, def value: None
  bool ___handDirectInteraction;

  /// @brief Field handRayInteraction, offset: 0x99, size: 0x1, def value: None
  bool ___handRayInteraction;

  /// @brief Field handRaycaster, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster> ___handRaycaster;

  /// @brief Field keyboardModelShader, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___keyboardModelShader;

  /// @brief Field keyboardModelAlphaBlendShader, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___keyboardModelAlphaBlendShader;

  /// @brief Field InputEnabled, offset: 0xb8, size: 0x1, def value: None
  bool ___InputEnabled;

  /// @brief Field isKeyboardCreated_, offset: 0xb9, size: 0x1, def value: None
  bool ___isKeyboardCreated_;

  /// @brief Field keyboardSpace_, offset: 0xc0, size: 0x8, def value: None
  uint64_t ___keyboardSpace_;

  /// @brief Field virtualKeyboardTextures_, offset: 0xc8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint64_t, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>* ___virtualKeyboardTextures_;

  /// @brief Field virtualKeyboardScene_, offset: 0xd0, size: 0x28, def value: None
  ::GlobalNamespace::OVRGLTFScene ___virtualKeyboardScene_;

  /// @brief Field virtualKeyboardModelKey_, offset: 0xf8, size: 0x8, def value: None
  uint64_t ___virtualKeyboardModelKey_;

  /// @brief Field modelInitialized_, offset: 0x100, size: 0x1, def value: None
  bool ___modelInitialized_;

  /// @brief Field modelAvailable_, offset: 0x101, size: 0x1, def value: None
  bool ___modelAvailable_;

  /// @brief Field keyboardVisible_, offset: 0x102, size: 0x1, def value: None
  bool ___keyboardVisible_;

  /// @brief Field _interactorRootTransformOverride, offset: 0x108, size: 0x8, def value: None
  ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride* ____interactorRootTransformOverride;

  /// @brief Field _inputSources, offset: 0x110, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRVirtualKeyboard__IInputSource*>* ____inputSources;

  /// @brief Field ignoreTextCommmitFieldOnValueChanged_, offset: 0x118, size: 0x1, def value: None
  bool ___ignoreTextCommmitFieldOnValueChanged_;

  /// @brief Field runtimeInputField_, offset: 0x120, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::InputField> ___runtimeInputField_;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRVirtualKeyboard, 0x128>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___CommitText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___Backspace) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___Enter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___KeyboardShown) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___KeyboardHidden) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ____Collider_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___InitialPosition) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___textCommitField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___leftControllerRootTransform) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___leftControllerDirectTransform) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___rightControllerRootTransform) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___rightControllerDirectTransform) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___controllerDirectInteraction) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___controllerRayInteraction) == 0x79, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___controllerRaycaster) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___handLeft) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___handRight) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___handDirectInteraction) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___handRayInteraction) == 0x99, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___handRaycaster) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___keyboardModelShader) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___keyboardModelAlphaBlendShader) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___InputEnabled) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___isKeyboardCreated_) == 0xb9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___keyboardSpace_) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___virtualKeyboardTextures_) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___virtualKeyboardScene_) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___virtualKeyboardModelKey_) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___modelInitialized_) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___modelAvailable_) == 0x101, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___keyboardVisible_) == 0x102, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ____interactorRootTransformOverride) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ____inputSources) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___ignoreTextCommmitFieldOnValueChanged_) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___runtimeInputField_) == 0x120, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRVirtualKeyboard__InputSource, "", "OVRVirtualKeyboard/InputSource");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition, "", "OVRVirtualKeyboard/KeyboardPosition");
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboard);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboard*, "", "OVRVirtualKeyboard");
NEED_NO_BOX(::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource*, "", "OVRVirtualKeyboard/BaseInputSource");
NEED_NO_BOX(::GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource*, "", "OVRVirtualKeyboard/ControllerInputSource");
NEED_NO_BOX(::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource*, "", "OVRVirtualKeyboard/HandInputSource");
NEED_NO_BOX(::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c*, "", "OVRVirtualKeyboard/HandInputSource/<>c");
NEED_NO_BOX(::GlobalNamespace::__OVRVirtualKeyboard__IInputSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRVirtualKeyboard__IInputSource*, "", "OVRVirtualKeyboard/IInputSource");
NEED_NO_BOX(::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride*, "", "OVRVirtualKeyboard/InteractorRootTransformOverride");
NEED_NO_BOX(::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6*, "",
                       "OVRVirtualKeyboard/InteractorRootTransformOverride/<RevertInteractorOverrides>d__6");
NEED_NO_BOX(::GlobalNamespace::__OVRVirtualKeyboard____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRVirtualKeyboard____c*, "", "OVRVirtualKeyboard/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData, "",
                       "OVRVirtualKeyboard/InteractorRootTransformOverride/InteractorRootOverrideData");
