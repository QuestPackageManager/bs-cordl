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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8046))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRVirtualKeyboard__KeyboardPosition(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRVirtualKeyboard__KeyboardPosition();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Far value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition const Far;

  /// @brief Field Near value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition const Near;

  /// @brief Field Direct value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition const Direct;

  /// @brief Field Custom value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition const Custom;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7535))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8047))
// CS Name: ::OVRVirtualKeyboard::InteractorRootTransformOverride::InteractorRootOverrideData
struct CORDL_TYPE __OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "root", ty: "::UnityEngine::Transform*", modifiers: "", def_value: None }, CppParam { name: "originalPose", ty: "::GlobalNamespace::OVRPose", modifiers: "",
  // def_value: None }, CppParam { name: "targetPose", ty: "::GlobalNamespace::OVRPose", modifiers: "", def_value: None }]
  constexpr __OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData(::UnityEngine::Transform* root, ::GlobalNamespace::OVRPose originalPose,
                                                                                              ::GlobalNamespace::OVRPose targetPose) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData();

  /// @brief Field root, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Transform* root;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8048))
// CS Name: ::OVRVirtualKeyboard::InteractorRootTransformOverride::<RevertInteractorOverrides>d__6*
class CORDL_TYPE __OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride* __4__this;

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

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride* value);

  static inline ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x279e4f0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x279e518, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x279e51c, size 0x9c, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x279e5b8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x279e5c0, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x279e600, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6(__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6(__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6();

public:
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8049))
// CS Name: ::OVRVirtualKeyboard::InteractorRootTransformOverride*
class CORDL_TYPE __OVRVirtualKeyboard__InteractorRootTransformOverride : public ::System::Object {
public:
  // Declarations
  using _RevertInteractorOverrides_d__6 = ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6;

  using InteractorRootOverrideData = ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData;

  /// @brief Field applyQueue, offset 0x10, size 0x8
  __declspec(property(get = __get_applyQueue,
                      put = __set_applyQueue))::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>* applyQueue;

  /// @brief Field revertQueue, offset 0x18, size 0x8
  __declspec(
      property(get = __get_revertQueue,
               put = __set_revertQueue))::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>* revertQueue;

  constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>*& __get_applyQueue();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>*> const&
  __get_applyQueue() const;

  constexpr void __set_applyQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>* value);

  constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>*& __get_revertQueue();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>*> const&
  __get_revertQueue() const;

  constexpr void __set_revertQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>* value);

  /// @brief Method Enqueue, addr 0x279d634, size 0x1cc, virtual false, abstract: false, final false
  inline void Enqueue(::UnityEngine::Transform* interactorRootTransform, ::GlobalNamespace::__OVRPlugin__Posef interactorRootPose);

  /// @brief Method LateApply, addr 0x279d3f8, size 0x23c, virtual false, abstract: false, final false
  inline void LateApply(::UnityEngine::MonoBehaviour* coroutineRunner);

  /// @brief Method Reset, addr 0x279e450, size 0xa0, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method RevertInteractorOverrides, addr 0x279e3e8, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* RevertInteractorOverrides();

  /// @brief Method ApplyOverride, addr 0x279e30c, size 0xdc, virtual false, abstract: false, final false
  static inline bool ApplyOverride(::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData interactorOverride);

  static inline ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride* New_ctor();

  /// @brief Method .ctor, addr 0x279e03c, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRVirtualKeyboard__InteractorRootTransformOverride", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRVirtualKeyboard__InteractorRootTransformOverride(__OVRVirtualKeyboard__InteractorRootTransformOverride&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRVirtualKeyboard__InteractorRootTransformOverride", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRVirtualKeyboard__InteractorRootTransformOverride(__OVRVirtualKeyboard__InteractorRootTransformOverride const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRVirtualKeyboard__InteractorRootTransformOverride();

public:
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8050))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRVirtualKeyboard__InputSource(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRVirtualKeyboard__InputSource();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field ControllerLeft value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRVirtualKeyboard__InputSource const ControllerLeft;

  /// @brief Field ControllerRight value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRVirtualKeyboard__InputSource const ControllerRight;

  /// @brief Field HandLeft value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRVirtualKeyboard__InputSource const HandLeft;

  /// @brief Field HandRight value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRVirtualKeyboard__InputSource const HandRight;

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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8051))
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8052))
// CS Name: ::OVRVirtualKeyboard::BaseInputSource*
class CORDL_TYPE __OVRVirtualKeyboard__BaseInputSource : public ::System::Object {
public:
  // Declarations
  /// @brief Field _operatingWithoutOVRCameraRig, offset 0x10, size 0x1
  __declspec(property(get = __get__operatingWithoutOVRCameraRig, put = __set__operatingWithoutOVRCameraRig)) bool _operatingWithoutOVRCameraRig;

  /// @brief Field _rig, offset 0x18, size 0x8
  __declspec(property(get = __get__rig, put = __set__rig))::GlobalNamespace::OVRCameraRig* _rig;

  /// @brief Convert operator to "::GlobalNamespace::__OVRVirtualKeyboard__IInputSource"
  constexpr operator ::GlobalNamespace::__OVRVirtualKeyboard__IInputSource*() noexcept;

  /// @brief Convert to "::GlobalNamespace::__OVRVirtualKeyboard__IInputSource"
  constexpr ::GlobalNamespace::__OVRVirtualKeyboard__IInputSource* i___GlobalNamespace____OVRVirtualKeyboard__IInputSource() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr bool& __get__operatingWithoutOVRCameraRig();

  constexpr bool const& __get__operatingWithoutOVRCameraRig() const;

  constexpr void __set__operatingWithoutOVRCameraRig(bool value);

  constexpr ::GlobalNamespace::OVRCameraRig*& __get__rig();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRCameraRig*> const& __get__rig() const;

  constexpr void __set__rig(::GlobalNamespace::OVRCameraRig* value);

  static inline ::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource* New_ctor();

  /// @brief Method .ctor, addr 0x279e608, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method OnUpdatedAnchors, addr 0x279e6fc, size 0xc, virtual false, abstract: false, final false
  inline void OnUpdatedAnchors(::GlobalNamespace::OVRCameraRig* obj);

  /// @brief Method Update, addr 0x279e708, size 0x18, virtual true, abstract: false, final true
  inline void Update();

  /// @brief Method UpdateInput, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UpdateInput();

  /// @brief Method Dispose, addr 0x279e720, size 0xd4, virtual true, abstract: false, final true
  inline void Dispose();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRVirtualKeyboard__BaseInputSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRVirtualKeyboard__BaseInputSource(__OVRVirtualKeyboard__BaseInputSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRVirtualKeyboard__BaseInputSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRVirtualKeyboard__BaseInputSource(__OVRVirtualKeyboard__BaseInputSource const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRVirtualKeyboard__BaseInputSource();

public:
  /// @brief Field _operatingWithoutOVRCameraRig, offset: 0x10, size: 0x1, def value: None
  bool ____operatingWithoutOVRCameraRig;

  /// @brief Field _rig, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::OVRCameraRig* ____rig;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8050)), TypeDefinitionIndex(TypeDefinitionIndex(8052)), TypeDefinitionIndex(TypeDefinitionIndex(7598)),
// TypeDefinitionIndex(TypeDefinitionIndex(7588))} Self: TypeDefinitionIndex(TypeDefinitionIndex(8053)) CS Name: ::OVRVirtualKeyboard::ControllerInputSource*
class CORDL_TYPE __OVRVirtualKeyboard__ControllerInputSource : public ::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource {
public:
  // Declarations
  /// @brief Field _rootTransform, offset 0x20, size 0x8
  __declspec(property(get = __get__rootTransform, put = __set__rootTransform))::UnityEngine::Transform* _rootTransform;

  /// @brief Field _directTransform, offset 0x28, size 0x8
  __declspec(property(get = __get__directTransform, put = __set__directTransform))::UnityEngine::Transform* _directTransform;

  /// @brief Field _inputSource, offset 0x30, size 0x4
  __declspec(property(get = __get__inputSource, put = __set__inputSource))::GlobalNamespace::__OVRVirtualKeyboard__InputSource _inputSource;

  /// @brief Field _controllerType, offset 0x34, size 0x4
  __declspec(property(get = __get__controllerType, put = __set__controllerType))::GlobalNamespace::__OVRInput__Controller _controllerType;

  /// @brief Field _keyboard, offset 0x38, size 0x8
  __declspec(property(get = __get__keyboard, put = __set__keyboard))::GlobalNamespace::OVRVirtualKeyboard* _keyboard;

  /// @brief Field _lastFrameCount, offset 0x40, size 0x4
  __declspec(property(get = __get__lastFrameCount, put = __set__lastFrameCount)) int32_t _lastFrameCount;

  /// @brief Field _triggerButton, offset 0x44, size 0x4
  __declspec(property(get = __get__triggerButton, put = __set__triggerButton))::GlobalNamespace::__OVRInput__RawButton _triggerButton;

  __declspec(property(get = get_TriggerIsPressed)) bool TriggerIsPressed;

  constexpr ::UnityEngine::Transform*& __get__rootTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__rootTransform() const;

  constexpr void __set__rootTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__directTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__directTransform() const;

  constexpr void __set__directTransform(::UnityEngine::Transform* value);

  constexpr ::GlobalNamespace::__OVRVirtualKeyboard__InputSource& __get__inputSource();

  constexpr ::GlobalNamespace::__OVRVirtualKeyboard__InputSource const& __get__inputSource() const;

  constexpr void __set__inputSource(::GlobalNamespace::__OVRVirtualKeyboard__InputSource value);

  constexpr ::GlobalNamespace::__OVRInput__Controller& __get__controllerType();

  constexpr ::GlobalNamespace::__OVRInput__Controller const& __get__controllerType() const;

  constexpr void __set__controllerType(::GlobalNamespace::__OVRInput__Controller value);

  constexpr ::GlobalNamespace::OVRVirtualKeyboard*& __get__keyboard();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRVirtualKeyboard*> const& __get__keyboard() const;

  constexpr void __set__keyboard(::GlobalNamespace::OVRVirtualKeyboard* value);

  constexpr int32_t& __get__lastFrameCount();

  constexpr int32_t const& __get__lastFrameCount() const;

  constexpr void __set__lastFrameCount(int32_t value);

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __get__triggerButton();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get__triggerButton() const;

  constexpr void __set__triggerButton(::GlobalNamespace::__OVRInput__RawButton value);

  /// @brief Method get_TriggerIsPressed, addr 0x279e7f4, size 0x60, virtual false, abstract: false, final false
  inline bool get_TriggerIsPressed();

  static inline ::GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource* New_ctor(::GlobalNamespace::OVRVirtualKeyboard* keyboard,
                                                                                         ::GlobalNamespace::__OVRVirtualKeyboard__InputSource inputSource,
                                                                                         ::GlobalNamespace::__OVRInput__Controller controllerType, ::UnityEngine::Transform* rootTransform,
                                                                                         ::UnityEngine::Transform* directTransform);

  /// @brief Method .ctor, addr 0x279d800, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRVirtualKeyboard* keyboard, ::GlobalNamespace::__OVRVirtualKeyboard__InputSource inputSource, ::GlobalNamespace::__OVRInput__Controller controllerType,
                    ::UnityEngine::Transform* rootTransform, ::UnityEngine::Transform* directTransform);

  /// @brief Method UpdateInput, addr 0x279e854, size 0x18c, virtual true, abstract: false, final false
  inline void UpdateInput();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRVirtualKeyboard__ControllerInputSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRVirtualKeyboard__ControllerInputSource(__OVRVirtualKeyboard__ControllerInputSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRVirtualKeyboard__ControllerInputSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRVirtualKeyboard__ControllerInputSource(__OVRVirtualKeyboard__ControllerInputSource const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRVirtualKeyboard__ControllerInputSource();

public:
  /// @brief Field _rootTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Transform* ____rootTransform;

  /// @brief Field _directTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Transform* ____directTransform;

  /// @brief Field _inputSource, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::__OVRVirtualKeyboard__InputSource ____inputSource;

  /// @brief Field _controllerType, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__Controller ____controllerType;

  /// @brief Field _keyboard, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::OVRVirtualKeyboard* ____keyboard;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8054))
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

  static inline void setStaticF___9(::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c* value);

  static inline ::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c* getStaticF___9();

  static inline void setStaticF___9__6_0(::System::Func_2<::GlobalNamespace::OVRBone*, bool>* value);

  static inline ::System::Func_2<::GlobalNamespace::OVRBone*, bool>* getStaticF___9__6_0();

  static inline void setStaticF___9__6_1(::System::Func_2<::GlobalNamespace::OVRBone*, bool>* value);

  static inline ::System::Func_2<::GlobalNamespace::OVRBone*, bool>* getStaticF___9__6_1();

  static inline ::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c* New_ctor();

  /// @brief Method .ctor, addr 0x279ed78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <UpdateInput>b__6_0, addr 0x279ed80, size 0x20, virtual false, abstract: false, final false
  inline bool _UpdateInput_b__6_0(::GlobalNamespace::OVRBone* b);

  /// @brief Method <UpdateInput>b__6_1, addr 0x279eda0, size 0x20, virtual false, abstract: false, final false
  inline bool _UpdateInput_b__6_1(::GlobalNamespace::OVRBone* b);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRVirtualKeyboard__HandInputSource____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRVirtualKeyboard__HandInputSource____c(__OVRVirtualKeyboard__HandInputSource____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRVirtualKeyboard__HandInputSource____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRVirtualKeyboard__HandInputSource____c(__OVRVirtualKeyboard__HandInputSource____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRVirtualKeyboard__HandInputSource____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::HandInputSource
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8050)), TypeDefinitionIndex(TypeDefinitionIndex(8052))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8055))
// CS Name: ::OVRVirtualKeyboard::HandInputSource*
class CORDL_TYPE __OVRVirtualKeyboard__HandInputSource : public ::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource {
public:
  // Declarations
  using __c = ::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c;

  /// @brief Field _hand, offset 0x20, size 0x8
  __declspec(property(get = __get__hand, put = __set__hand))::GlobalNamespace::OVRHand* _hand;

  /// @brief Field _inputSource, offset 0x28, size 0x4
  __declspec(property(get = __get__inputSource, put = __set__inputSource))::GlobalNamespace::__OVRVirtualKeyboard__InputSource _inputSource;

  /// @brief Field _keyboard, offset 0x30, size 0x8
  __declspec(property(get = __get__keyboard, put = __set__keyboard))::GlobalNamespace::OVRVirtualKeyboard* _keyboard;

  /// @brief Field _skeleton, offset 0x38, size 0x8
  __declspec(property(get = __get__skeleton, put = __set__skeleton))::GlobalNamespace::OVRSkeleton* _skeleton;

  /// @brief Field _lastFrameCount, offset 0x40, size 0x4
  __declspec(property(get = __get__lastFrameCount, put = __set__lastFrameCount)) int32_t _lastFrameCount;

  constexpr ::GlobalNamespace::OVRHand*& __get__hand();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRHand*> const& __get__hand() const;

  constexpr void __set__hand(::GlobalNamespace::OVRHand* value);

  constexpr ::GlobalNamespace::__OVRVirtualKeyboard__InputSource& __get__inputSource();

  constexpr ::GlobalNamespace::__OVRVirtualKeyboard__InputSource const& __get__inputSource() const;

  constexpr void __set__inputSource(::GlobalNamespace::__OVRVirtualKeyboard__InputSource value);

  constexpr ::GlobalNamespace::OVRVirtualKeyboard*& __get__keyboard();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRVirtualKeyboard*> const& __get__keyboard() const;

  constexpr void __set__keyboard(::GlobalNamespace::OVRVirtualKeyboard* value);

  constexpr ::GlobalNamespace::OVRSkeleton*& __get__skeleton();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRSkeleton*> const& __get__skeleton() const;

  constexpr void __set__skeleton(::GlobalNamespace::OVRSkeleton* value);

  constexpr int32_t& __get__lastFrameCount();

  constexpr int32_t const& __get__lastFrameCount() const;

  constexpr void __set__lastFrameCount(int32_t value);

  static inline ::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource* New_ctor(::GlobalNamespace::OVRVirtualKeyboard* keyboard, ::GlobalNamespace::__OVRVirtualKeyboard__InputSource inputSource,
                                                                                   ::GlobalNamespace::OVRHand* hand);

  /// @brief Method .ctor, addr 0x279d868, size 0x1c4, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRVirtualKeyboard* keyboard, ::GlobalNamespace::__OVRVirtualKeyboard__InputSource inputSource, ::GlobalNamespace::OVRHand* hand);

  /// @brief Method UpdateInput, addr 0x279e9e0, size 0x334, virtual true, abstract: false, final false
  inline void UpdateInput();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRVirtualKeyboard__HandInputSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRVirtualKeyboard__HandInputSource(__OVRVirtualKeyboard__HandInputSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRVirtualKeyboard__HandInputSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRVirtualKeyboard__HandInputSource(__OVRVirtualKeyboard__HandInputSource const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRVirtualKeyboard__HandInputSource();

public:
  /// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OVRHand* ____hand;

  /// @brief Field _inputSource, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::__OVRVirtualKeyboard__InputSource ____inputSource;

  /// @brief Field _keyboard, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::OVRVirtualKeyboard* ____keyboard;

  /// @brief Field _skeleton, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::OVRSkeleton* ____skeleton;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8056))
// CS Name: ::OVRVirtualKeyboard::<>c*
class CORDL_TYPE __OVRVirtualKeyboard____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__OVRVirtualKeyboard____c* __9;

  /// @brief Field <>9__68_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__68_0, put = setStaticF___9__68_0))::System::Func_2<::StringW, bool>* __9__68_0;

  /// @brief Field <>9__70_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__70_0, put = setStaticF___9__70_0))::System::Func_2<::UnityEngine::MeshFilter*, bool>* __9__70_0;

  static inline void setStaticF___9(::GlobalNamespace::__OVRVirtualKeyboard____c* value);

  static inline ::GlobalNamespace::__OVRVirtualKeyboard____c* getStaticF___9();

  static inline void setStaticF___9__68_0(::System::Func_2<::StringW, bool>* value);

  static inline ::System::Func_2<::StringW, bool>* getStaticF___9__68_0();

  static inline void setStaticF___9__70_0(::System::Func_2<::UnityEngine::MeshFilter*, bool>* value);

  static inline ::System::Func_2<::UnityEngine::MeshFilter*, bool>* getStaticF___9__70_0();

  static inline ::GlobalNamespace::__OVRVirtualKeyboard____c* New_ctor();

  /// @brief Method .ctor, addr 0x279ee24, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <LoadRuntimeVirtualKeyboardMesh>b__68_0, addr 0x279ee2c, size 0x8c, virtual false, abstract: false, final false
  inline bool _LoadRuntimeVirtualKeyboardMesh_b__68_0(::StringW p);

  /// @brief Method <PopulateCollision>b__70_0, addr 0x279eeb8, size 0x68, virtual false, abstract: false, final false
  inline bool _PopulateCollision_b__70_0(::UnityEngine::MeshFilter* mesh);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRVirtualKeyboard____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRVirtualKeyboard____c(__OVRVirtualKeyboard____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRVirtualKeyboard____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRVirtualKeyboard____c(__OVRVirtualKeyboard____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRVirtualKeyboard____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRVirtualKeyboard____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRVirtualKeyboard
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8046)), TypeDefinitionIndex(TypeDefinitionIndex(7567)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8057))
// CS Name: ::OVRVirtualKeyboard*
class CORDL_TYPE OVRVirtualKeyboard : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::GlobalNamespace::__OVRVirtualKeyboard____c;

  using HandInputSource = ::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource;

  using ControllerInputSource = ::GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource;

  using BaseInputSource = ::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource;

  using IInputSource = ::GlobalNamespace::__OVRVirtualKeyboard__IInputSource;

  using InputSource = ::GlobalNamespace::__OVRVirtualKeyboard__InputSource;

  using InteractorRootTransformOverride = ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride;

  using KeyboardPosition = ::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition;

  /// @brief Field CommitText, offset 0x18, size 0x8
  __declspec(property(get = __get_CommitText, put = __set_CommitText))::System::Action_1<::StringW>* CommitText;

  /// @brief Field Backspace, offset 0x20, size 0x8
  __declspec(property(get = __get_Backspace, put = __set_Backspace))::System::Action* Backspace;

  /// @brief Field Enter, offset 0x28, size 0x8
  __declspec(property(get = __get_Enter, put = __set_Enter))::System::Action* Enter;

  /// @brief Field KeyboardShown, offset 0x30, size 0x8
  __declspec(property(get = __get_KeyboardShown, put = __set_KeyboardShown))::System::Action* KeyboardShown;

  /// @brief Field KeyboardHidden, offset 0x38, size 0x8
  __declspec(property(get = __get_KeyboardHidden, put = __set_KeyboardHidden))::System::Action* KeyboardHidden;

  /// @brief Field <Collider>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __get__Collider_k__BackingField, put = __set__Collider_k__BackingField))::UnityEngine::Collider* _Collider_k__BackingField;

  /// @brief Field InitialPosition, offset 0x48, size 0x4
  __declspec(property(get = __get_InitialPosition, put = __set_InitialPosition))::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition InitialPosition;

  /// @brief Field textCommitField, offset 0x50, size 0x8
  __declspec(property(get = __get_textCommitField, put = __set_textCommitField))::UnityEngine::UI::InputField* textCommitField;

  /// @brief Field leftControllerRootTransform, offset 0x58, size 0x8
  __declspec(property(get = __get_leftControllerRootTransform, put = __set_leftControllerRootTransform))::UnityEngine::Transform* leftControllerRootTransform;

  /// @brief Field leftControllerDirectTransform, offset 0x60, size 0x8
  __declspec(property(get = __get_leftControllerDirectTransform, put = __set_leftControllerDirectTransform))::UnityEngine::Transform* leftControllerDirectTransform;

  /// @brief Field rightControllerRootTransform, offset 0x68, size 0x8
  __declspec(property(get = __get_rightControllerRootTransform, put = __set_rightControllerRootTransform))::UnityEngine::Transform* rightControllerRootTransform;

  /// @brief Field rightControllerDirectTransform, offset 0x70, size 0x8
  __declspec(property(get = __get_rightControllerDirectTransform, put = __set_rightControllerDirectTransform))::UnityEngine::Transform* rightControllerDirectTransform;

  /// @brief Field controllerDirectInteraction, offset 0x78, size 0x1
  __declspec(property(get = __get_controllerDirectInteraction, put = __set_controllerDirectInteraction)) bool controllerDirectInteraction;

  /// @brief Field controllerRayInteraction, offset 0x79, size 0x1
  __declspec(property(get = __get_controllerRayInteraction, put = __set_controllerRayInteraction)) bool controllerRayInteraction;

  /// @brief Field controllerRaycaster, offset 0x80, size 0x8
  __declspec(property(get = __get_controllerRaycaster, put = __set_controllerRaycaster))::UnityEngine::EventSystems::OVRPhysicsRaycaster* controllerRaycaster;

  /// @brief Field handLeft, offset 0x88, size 0x8
  __declspec(property(get = __get_handLeft, put = __set_handLeft))::GlobalNamespace::OVRHand* handLeft;

  /// @brief Field handRight, offset 0x90, size 0x8
  __declspec(property(get = __get_handRight, put = __set_handRight))::GlobalNamespace::OVRHand* handRight;

  /// @brief Field handDirectInteraction, offset 0x98, size 0x1
  __declspec(property(get = __get_handDirectInteraction, put = __set_handDirectInteraction)) bool handDirectInteraction;

  /// @brief Field handRayInteraction, offset 0x99, size 0x1
  __declspec(property(get = __get_handRayInteraction, put = __set_handRayInteraction)) bool handRayInteraction;

  /// @brief Field handRaycaster, offset 0xa0, size 0x8
  __declspec(property(get = __get_handRaycaster, put = __set_handRaycaster))::UnityEngine::EventSystems::OVRPhysicsRaycaster* handRaycaster;

  /// @brief Field keyboardModelShader, offset 0xa8, size 0x8
  __declspec(property(get = __get_keyboardModelShader, put = __set_keyboardModelShader))::UnityEngine::Shader* keyboardModelShader;

  /// @brief Field keyboardModelAlphaBlendShader, offset 0xb0, size 0x8
  __declspec(property(get = __get_keyboardModelAlphaBlendShader, put = __set_keyboardModelAlphaBlendShader))::UnityEngine::Shader* keyboardModelAlphaBlendShader;

  /// @brief Field InputEnabled, offset 0xb8, size 0x1
  __declspec(property(get = __get_InputEnabled, put = __set_InputEnabled)) bool InputEnabled;

  /// @brief Field isKeyboardCreated_, offset 0xb9, size 0x1
  __declspec(property(get = __get_isKeyboardCreated_, put = __set_isKeyboardCreated_)) bool isKeyboardCreated_;

  /// @brief Field keyboardSpace_, offset 0xc0, size 0x8
  __declspec(property(get = __get_keyboardSpace_, put = __set_keyboardSpace_)) uint64_t keyboardSpace_;

  /// @brief Field virtualKeyboardTextures_, offset 0xc8, size 0x8
  __declspec(property(
      get = __get_virtualKeyboardTextures_,
      put = __set_virtualKeyboardTextures_))::System::Collections::Generic::Dictionary_2<uint64_t, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*>* virtualKeyboardTextures_;

  /// @brief Field virtualKeyboardScene_, offset 0xd0, size 0x28
  __declspec(property(get = __get_virtualKeyboardScene_, put = __set_virtualKeyboardScene_))::GlobalNamespace::OVRGLTFScene virtualKeyboardScene_;

  /// @brief Field virtualKeyboardModelKey_, offset 0xf8, size 0x8
  __declspec(property(get = __get_virtualKeyboardModelKey_, put = __set_virtualKeyboardModelKey_)) uint64_t virtualKeyboardModelKey_;

  /// @brief Field modelInitialized_, offset 0x100, size 0x1
  __declspec(property(get = __get_modelInitialized_, put = __set_modelInitialized_)) bool modelInitialized_;

  /// @brief Field modelAvailable_, offset 0x101, size 0x1
  __declspec(property(get = __get_modelAvailable_, put = __set_modelAvailable_)) bool modelAvailable_;

  /// @brief Field keyboardVisible_, offset 0x102, size 0x1
  __declspec(property(get = __get_keyboardVisible_, put = __set_keyboardVisible_)) bool keyboardVisible_;

  /// @brief Field _interactorRootTransformOverride, offset 0x108, size 0x8
  __declspec(property(get = __get__interactorRootTransformOverride,
                      put = __set__interactorRootTransformOverride))::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride* _interactorRootTransformOverride;

  /// @brief Field _inputSources, offset 0x110, size 0x8
  __declspec(property(get = __get__inputSources, put = __set__inputSources))::System::Collections::Generic::List_1<::GlobalNamespace::__OVRVirtualKeyboard__IInputSource*>* _inputSources;

  /// @brief Field ignoreTextCommmitFieldOnValueChanged_, offset 0x118, size 0x1
  __declspec(property(get = __get_ignoreTextCommmitFieldOnValueChanged_, put = __set_ignoreTextCommmitFieldOnValueChanged_)) bool ignoreTextCommmitFieldOnValueChanged_;

  /// @brief Field runtimeInputField_, offset 0x120, size 0x8
  __declspec(property(get = __get_runtimeInputField_, put = __set_runtimeInputField_))::UnityEngine::UI::InputField* runtimeInputField_;

  /// @brief Field singleton_, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_singleton_, put = setStaticF_singleton_))::GlobalNamespace::OVRVirtualKeyboard* singleton_;

  __declspec(property(get = get_Collider, put = set_Collider))::UnityEngine::Collider* Collider;

  __declspec(property(get = get_TextCommitField, put = set_TextCommitField))::UnityEngine::UI::InputField* TextCommitField;

  /// @brief Convert operator to "::GlobalNamespace::__OVRManager__EventListener"
  constexpr operator ::GlobalNamespace::__OVRManager__EventListener*() noexcept;

  /// @brief Convert to "::GlobalNamespace::__OVRManager__EventListener"
  constexpr ::GlobalNamespace::__OVRManager__EventListener* i___GlobalNamespace____OVRManager__EventListener() noexcept;

  constexpr ::System::Action_1<::StringW>*& __get_CommitText();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __get_CommitText() const;

  constexpr void __set_CommitText(::System::Action_1<::StringW>* value);

  constexpr ::System::Action*& __get_Backspace();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_Backspace() const;

  constexpr void __set_Backspace(::System::Action* value);

  constexpr ::System::Action*& __get_Enter();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_Enter() const;

  constexpr void __set_Enter(::System::Action* value);

  constexpr ::System::Action*& __get_KeyboardShown();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_KeyboardShown() const;

  constexpr void __set_KeyboardShown(::System::Action* value);

  constexpr ::System::Action*& __get_KeyboardHidden();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_KeyboardHidden() const;

  constexpr void __set_KeyboardHidden(::System::Action* value);

  constexpr ::UnityEngine::Collider*& __get__Collider_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Collider*> const& __get__Collider_k__BackingField() const;

  constexpr void __set__Collider_k__BackingField(::UnityEngine::Collider* value);

  constexpr ::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition& __get_InitialPosition();

  constexpr ::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition const& __get_InitialPosition() const;

  constexpr void __set_InitialPosition(::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition value);

  constexpr ::UnityEngine::UI::InputField*& __get_textCommitField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::InputField*> const& __get_textCommitField() const;

  constexpr void __set_textCommitField(::UnityEngine::UI::InputField* value);

  constexpr ::UnityEngine::Transform*& __get_leftControllerRootTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_leftControllerRootTransform() const;

  constexpr void __set_leftControllerRootTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_leftControllerDirectTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_leftControllerDirectTransform() const;

  constexpr void __set_leftControllerDirectTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_rightControllerRootTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_rightControllerRootTransform() const;

  constexpr void __set_rightControllerRootTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_rightControllerDirectTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_rightControllerDirectTransform() const;

  constexpr void __set_rightControllerDirectTransform(::UnityEngine::Transform* value);

  constexpr bool& __get_controllerDirectInteraction();

  constexpr bool const& __get_controllerDirectInteraction() const;

  constexpr void __set_controllerDirectInteraction(bool value);

  constexpr bool& __get_controllerRayInteraction();

  constexpr bool const& __get_controllerRayInteraction() const;

  constexpr void __set_controllerRayInteraction(bool value);

  constexpr ::UnityEngine::EventSystems::OVRPhysicsRaycaster*& __get_controllerRaycaster();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::OVRPhysicsRaycaster*> const& __get_controllerRaycaster() const;

  constexpr void __set_controllerRaycaster(::UnityEngine::EventSystems::OVRPhysicsRaycaster* value);

  constexpr ::GlobalNamespace::OVRHand*& __get_handLeft();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRHand*> const& __get_handLeft() const;

  constexpr void __set_handLeft(::GlobalNamespace::OVRHand* value);

  constexpr ::GlobalNamespace::OVRHand*& __get_handRight();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRHand*> const& __get_handRight() const;

  constexpr void __set_handRight(::GlobalNamespace::OVRHand* value);

  constexpr bool& __get_handDirectInteraction();

  constexpr bool const& __get_handDirectInteraction() const;

  constexpr void __set_handDirectInteraction(bool value);

  constexpr bool& __get_handRayInteraction();

  constexpr bool const& __get_handRayInteraction() const;

  constexpr void __set_handRayInteraction(bool value);

  constexpr ::UnityEngine::EventSystems::OVRPhysicsRaycaster*& __get_handRaycaster();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::OVRPhysicsRaycaster*> const& __get_handRaycaster() const;

  constexpr void __set_handRaycaster(::UnityEngine::EventSystems::OVRPhysicsRaycaster* value);

  constexpr ::UnityEngine::Shader*& __get_keyboardModelShader();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> const& __get_keyboardModelShader() const;

  constexpr void __set_keyboardModelShader(::UnityEngine::Shader* value);

  constexpr ::UnityEngine::Shader*& __get_keyboardModelAlphaBlendShader();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> const& __get_keyboardModelAlphaBlendShader() const;

  constexpr void __set_keyboardModelAlphaBlendShader(::UnityEngine::Shader* value);

  constexpr bool& __get_InputEnabled();

  constexpr bool const& __get_InputEnabled() const;

  constexpr void __set_InputEnabled(bool value);

  constexpr bool& __get_isKeyboardCreated_();

  constexpr bool const& __get_isKeyboardCreated_() const;

  constexpr void __set_isKeyboardCreated_(bool value);

  constexpr uint64_t& __get_keyboardSpace_();

  constexpr uint64_t const& __get_keyboardSpace_() const;

  constexpr void __set_keyboardSpace_(uint64_t value);

  constexpr ::System::Collections::Generic::Dictionary_2<uint64_t, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*>*& __get_virtualKeyboardTextures_();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint64_t, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*>*> const&
  __get_virtualKeyboardTextures_() const;

  constexpr void __set_virtualKeyboardTextures_(::System::Collections::Generic::Dictionary_2<uint64_t, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*>* value);

  constexpr ::GlobalNamespace::OVRGLTFScene& __get_virtualKeyboardScene_();

  constexpr ::GlobalNamespace::OVRGLTFScene const& __get_virtualKeyboardScene_() const;

  constexpr void __set_virtualKeyboardScene_(::GlobalNamespace::OVRGLTFScene value);

  constexpr uint64_t& __get_virtualKeyboardModelKey_();

  constexpr uint64_t const& __get_virtualKeyboardModelKey_() const;

  constexpr void __set_virtualKeyboardModelKey_(uint64_t value);

  constexpr bool& __get_modelInitialized_();

  constexpr bool const& __get_modelInitialized_() const;

  constexpr void __set_modelInitialized_(bool value);

  constexpr bool& __get_modelAvailable_();

  constexpr bool const& __get_modelAvailable_() const;

  constexpr void __set_modelAvailable_(bool value);

  constexpr bool& __get_keyboardVisible_();

  constexpr bool const& __get_keyboardVisible_() const;

  constexpr void __set_keyboardVisible_(bool value);

  constexpr ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride*& __get__interactorRootTransformOverride();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride*> const& __get__interactorRootTransformOverride() const;

  constexpr void __set__interactorRootTransformOverride(::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRVirtualKeyboard__IInputSource*>*& __get__inputSources();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRVirtualKeyboard__IInputSource*>*> const& __get__inputSources() const;

  constexpr void __set__inputSources(::System::Collections::Generic::List_1<::GlobalNamespace::__OVRVirtualKeyboard__IInputSource*>* value);

  constexpr bool& __get_ignoreTextCommmitFieldOnValueChanged_();

  constexpr bool const& __get_ignoreTextCommmitFieldOnValueChanged_() const;

  constexpr void __set_ignoreTextCommmitFieldOnValueChanged_(bool value);

  constexpr ::UnityEngine::UI::InputField*& __get_runtimeInputField_();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::InputField*> const& __get_runtimeInputField_() const;

  constexpr void __set_runtimeInputField_(::UnityEngine::UI::InputField* value);

  static inline void setStaticF_singleton_(::GlobalNamespace::OVRVirtualKeyboard* value);

  static inline ::GlobalNamespace::OVRVirtualKeyboard* getStaticF_singleton_();

  /// @brief Method add_CommitText, addr 0x2799bc4, size 0xb0, virtual false, abstract: false, final false
  inline void add_CommitText(::System::Action_1<::StringW>* value);

  /// @brief Method remove_CommitText, addr 0x2799c74, size 0xb0, virtual false, abstract: false, final false
  inline void remove_CommitText(::System::Action_1<::StringW>* value);

  /// @brief Method add_Backspace, addr 0x2799d24, size 0x9c, virtual false, abstract: false, final false
  inline void add_Backspace(::System::Action* value);

  /// @brief Method remove_Backspace, addr 0x2799dc0, size 0x9c, virtual false, abstract: false, final false
  inline void remove_Backspace(::System::Action* value);

  /// @brief Method add_Enter, addr 0x2799e5c, size 0x9c, virtual false, abstract: false, final false
  inline void add_Enter(::System::Action* value);

  /// @brief Method remove_Enter, addr 0x2799ef8, size 0x9c, virtual false, abstract: false, final false
  inline void remove_Enter(::System::Action* value);

  /// @brief Method add_KeyboardShown, addr 0x2799f94, size 0x9c, virtual false, abstract: false, final false
  inline void add_KeyboardShown(::System::Action* value);

  /// @brief Method remove_KeyboardShown, addr 0x279a030, size 0x9c, virtual false, abstract: false, final false
  inline void remove_KeyboardShown(::System::Action* value);

  /// @brief Method add_KeyboardHidden, addr 0x279a0cc, size 0x9c, virtual false, abstract: false, final false
  inline void add_KeyboardHidden(::System::Action* value);

  /// @brief Method remove_KeyboardHidden, addr 0x279a168, size 0x9c, virtual false, abstract: false, final false
  inline void remove_KeyboardHidden(::System::Action* value);

  /// @brief Method get_Collider, addr 0x279a204, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Collider* get_Collider();

  /// @brief Method set_Collider, addr 0x279a20c, size 0x8, virtual false, abstract: false, final false
  inline void set_Collider(::UnityEngine::Collider* value);

  /// @brief Method get_TextCommitField, addr 0x279a214, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::InputField* get_TextCommitField();

  /// @brief Method set_TextCommitField, addr 0x279a21c, size 0x1c4, virtual false, abstract: false, final false
  inline void set_TextCommitField(::UnityEngine::UI::InputField* value);

  /// @brief Method Awake, addr 0x279a498, size 0x524, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method OnDestroy, addr 0x279a9bc, size 0x2fc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnEnable, addr 0x279ae14, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x279b12c, size 0x4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method UseSuggestedLocation, addr 0x279b144, size 0x224, virtual false, abstract: false, final false
  inline void UseSuggestedLocation(::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition position);

  /// @brief Method SendVirtualKeyboardRayInput, addr 0x279b6dc, size 0x328, virtual false, abstract: false, final false
  inline void SendVirtualKeyboardRayInput(::UnityEngine::Transform* inputTransform, ::GlobalNamespace::__OVRVirtualKeyboard__InputSource source, bool isPressed, bool useRaycastMask);

  /// @brief Method SendVirtualKeyboardDirectInput, addr 0x279bc1c, size 0xd0, virtual false, abstract: false, final false
  inline void SendVirtualKeyboardDirectInput(::UnityEngine::Vector3 position, ::GlobalNamespace::__OVRVirtualKeyboard__InputSource source, bool isPressed,
                                             ::UnityEngine::Transform* interactorRootTransform);

  /// @brief Method OnEvent, addr 0x279bcec, size 0x130, virtual true, abstract: false, final true
  inline void OnEvent(::GlobalNamespace::__OVRPlugin__EventDataBuffer eventDataBuffer);

  /// @brief Method ChangeTextContext, addr 0x279be1c, size 0xe0, virtual false, abstract: false, final false
  inline void ChangeTextContext(::StringW textContext);

  /// @brief Method LoadRuntimeVirtualKeyboardMesh, addr 0x279befc, size 0x3d8, virtual false, abstract: false, final false
  inline bool LoadRuntimeVirtualKeyboardMesh();

  /// @brief Method ApplyHideFlags, addr 0x279c2d4, size 0x7c, virtual false, abstract: false, final false
  static inline void ApplyHideFlags(::UnityEngine::Transform* t);

  /// @brief Method PopulateCollision, addr 0x279c350, size 0x224, virtual false, abstract: false, final false
  inline void PopulateCollision();

  /// @brief Method ShowKeyboard, addr 0x279ae18, size 0x314, virtual false, abstract: false, final false
  inline void ShowKeyboard();

  /// @brief Method SetKeyboardVisibility, addr 0x279c5cc, size 0x150, virtual false, abstract: false, final false
  inline void SetKeyboardVisibility(bool visible);

  /// @brief Method HideKeyboard, addr 0x279b130, size 0x14, virtual false, abstract: false, final false
  inline void HideKeyboard();

  /// @brief Method DestroyKeyboard, addr 0x279acb8, size 0x15c, virtual false, abstract: false, final false
  inline void DestroyKeyboard();

  /// @brief Method MaxElement, addr 0x279c71c, size 0x14, virtual false, abstract: false, final false
  inline float_t MaxElement(::UnityEngine::Vector3 vec);

  /// @brief Method ComputeLocation, addr 0x279b368, size 0xb8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRPlugin__VirtualKeyboardLocationInfo ComputeLocation(::UnityEngine::Transform* transform);

  /// @brief Method Update, addr 0x279c730, size 0x30, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method LateUpdate, addr 0x279d3dc, size 0x1c, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method SendVirtualKeyboardInput, addr 0x279ba04, size 0x218, virtual false, abstract: false, final false
  inline void SendVirtualKeyboardInput(::GlobalNamespace::__OVRPlugin__VirtualKeyboardInputSource inputSource, ::GlobalNamespace::OVRPose pose, bool isPressed,
                                       ::UnityEngine::Transform* interactorRootTransform);

  /// @brief Method UpdateInputs, addr 0x279c760, size 0x524, virtual false, abstract: false, final false
  inline void UpdateInputs();

  /// @brief Method SyncKeyboardLocation, addr 0x279b420, size 0x2bc, virtual false, abstract: false, final false
  inline void SyncKeyboardLocation();

  /// @brief Method UpdateAnimationState, addr 0x279cc84, size 0x758, virtual false, abstract: false, final false
  inline void UpdateAnimationState();

  /// @brief Method OnCommitText, addr 0x279da2c, size 0x200, virtual false, abstract: false, final false
  inline void OnCommitText(::StringW text);

  /// @brief Method OnTextCommitFieldChange, addr 0x279dc2c, size 0x10, virtual false, abstract: false, final false
  inline void OnTextCommitFieldChange(::StringW textContext);

  /// @brief Method ChangeTextContextInternal, addr 0x279a3e0, size 0xb8, virtual false, abstract: false, final false
  inline void ChangeTextContextInternal(::StringW textContext);

  /// @brief Method OnBackspace, addr 0x279dc3c, size 0x238, virtual false, abstract: false, final false
  inline void OnBackspace();

  /// @brief Method OnEnter, addr 0x279de74, size 0xd8, virtual false, abstract: false, final false
  inline void OnEnter();

  /// @brief Method OnKeyboardShown, addr 0x279df4c, size 0x18, virtual false, abstract: false, final false
  inline void OnKeyboardShown();

  /// @brief Method OnKeyboardHidden, addr 0x279df64, size 0x14, virtual false, abstract: false, final false
  inline void OnKeyboardHidden();

  /// @brief Method UpdateVisibleState, addr 0x279c574, size 0x58, virtual false, abstract: false, final false
  inline void UpdateVisibleState();

  static inline ::GlobalNamespace::OVRVirtualKeyboard* New_ctor();

  /// @brief Method .ctor, addr 0x279df78, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <LoadRuntimeVirtualKeyboardMesh>b__68_1, addr 0x279e0dc, size 0x230, virtual false, abstract: false, final false
  inline ::UnityEngine::Texture2D* _LoadRuntimeVirtualKeyboardMesh_b__68_1(::StringW rawUri, ::UnityEngine::Material* mat);

  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRVirtualKeyboard(OVRVirtualKeyboard&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRVirtualKeyboard(OVRVirtualKeyboard const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRVirtualKeyboard();

public:
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
  ::UnityEngine::Collider* ____Collider_k__BackingField;

  /// @brief Field InitialPosition, offset: 0x48, size: 0x4, def value: None
  ::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition ___InitialPosition;

  /// @brief Field textCommitField, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UI::InputField* ___textCommitField;

  /// @brief Field leftControllerRootTransform, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Transform* ___leftControllerRootTransform;

  /// @brief Field leftControllerDirectTransform, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Transform* ___leftControllerDirectTransform;

  /// @brief Field rightControllerRootTransform, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Transform* ___rightControllerRootTransform;

  /// @brief Field rightControllerDirectTransform, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Transform* ___rightControllerDirectTransform;

  /// @brief Field controllerDirectInteraction, offset: 0x78, size: 0x1, def value: None
  bool ___controllerDirectInteraction;

  /// @brief Field controllerRayInteraction, offset: 0x79, size: 0x1, def value: None
  bool ___controllerRayInteraction;

  /// @brief Field controllerRaycaster, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::EventSystems::OVRPhysicsRaycaster* ___controllerRaycaster;

  /// @brief Field handLeft, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::OVRHand* ___handLeft;

  /// @brief Field handRight, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::OVRHand* ___handRight;

  /// @brief Field handDirectInteraction, offset: 0x98, size: 0x1, def value: None
  bool ___handDirectInteraction;

  /// @brief Field handRayInteraction, offset: 0x99, size: 0x1, def value: None
  bool ___handRayInteraction;

  /// @brief Field handRaycaster, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::EventSystems::OVRPhysicsRaycaster* ___handRaycaster;

  /// @brief Field keyboardModelShader, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::Shader* ___keyboardModelShader;

  /// @brief Field keyboardModelAlphaBlendShader, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::Shader* ___keyboardModelAlphaBlendShader;

  /// @brief Field InputEnabled, offset: 0xb8, size: 0x1, def value: None
  bool ___InputEnabled;

  /// @brief Field isKeyboardCreated_, offset: 0xb9, size: 0x1, def value: None
  bool ___isKeyboardCreated_;

  /// @brief Field keyboardSpace_, offset: 0xc0, size: 0x8, def value: None
  uint64_t ___keyboardSpace_;

  /// @brief Field virtualKeyboardTextures_, offset: 0xc8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint64_t, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*>* ___virtualKeyboardTextures_;

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
  ::UnityEngine::UI::InputField* ___runtimeInputField_;

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
