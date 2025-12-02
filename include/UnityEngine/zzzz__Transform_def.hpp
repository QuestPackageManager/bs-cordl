#pragma once
// IWYU pragma private; include "UnityEngine/Transform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Transform)
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct RotationOrder;
}
namespace UnityEngine {
struct Space;
}
namespace UnityEngine {
class Transform_Enumerator;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class Transform_Enumerator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Transform);
MARK_REF_PTR_T(::UnityEngine::Transform_Enumerator);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Transform/Enumerator
class CORDL_TYPE Transform_Enumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::System::Object* Current;

  /// @brief Field currentIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_currentIndex, put = __cordl_internal_set_currentIndex)) int32_t currentIndex;

  /// @brief Field outer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_outer, put = __cordl_internal_set_outer)) ::UnityW<::UnityEngine::Transform> outer;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method MoveNext, addr 0x68c7178, size 0x34, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::Transform_Enumerator* New_ctor(::UnityEngine::Transform* outer);

  /// @brief Method Reset, addr 0x68c71ac, size 0xc, virtual true, abstract: false, final true
  inline void Reset();

  constexpr int32_t const& __cordl_internal_get_currentIndex() const;

  constexpr int32_t& __cordl_internal_get_currentIndex();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_outer() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_outer();

  constexpr void __cordl_internal_set_currentIndex(int32_t value);

  constexpr void __cordl_internal_set_outer(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x68c68a0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Transform* outer);

  /// @brief Method get_Current, addr 0x68c715c, size 0x1c, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Transform_Enumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Transform_Enumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Transform_Enumerator(Transform_Enumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Transform_Enumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Transform_Enumerator(Transform_Enumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10398 };

  /// @brief Field outer, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___outer;

  /// @brief Field currentIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___currentIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Transform_Enumerator, ___outer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Transform_Enumerator, ___currentIndex) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Transform_Enumerator, 0x20>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Transform
class CORDL_TYPE Transform : public ::UnityEngine::Component {
public:
  // Declarations
  using Enumerator = ::UnityEngine::Transform_Enumerator;

  __declspec(property(get = get_childCount)) int32_t childCount;

  __declspec(property(get = get_constrainProportionsScale, put = set_constrainProportionsScale)) bool constrainProportionsScale;

  __declspec(property(get = get_eulerAngles, put = set_eulerAngles)) ::UnityEngine::Vector3 eulerAngles;

  __declspec(property(get = get_forward, put = set_forward)) ::UnityEngine::Vector3 forward;

  __declspec(property(get = get_hasChanged, put = set_hasChanged)) bool hasChanged;

  __declspec(property(get = get_hierarchyCapacity, put = set_hierarchyCapacity)) int32_t hierarchyCapacity;

  __declspec(property(get = get_hierarchyCount)) int32_t hierarchyCount;

  __declspec(property(get = get_localEulerAngles, put = set_localEulerAngles)) ::UnityEngine::Vector3 localEulerAngles;

  __declspec(property(get = get_localPosition, put = set_localPosition)) ::UnityEngine::Vector3 localPosition;

  __declspec(property(get = get_localRotation, put = set_localRotation)) ::UnityEngine::Quaternion localRotation;

  __declspec(property(get = get_localScale, put = set_localScale)) ::UnityEngine::Vector3 localScale;

  __declspec(property(get = get_localToWorldMatrix)) ::UnityEngine::Matrix4x4 localToWorldMatrix;

  __declspec(property(get = get_lossyScale)) ::UnityEngine::Vector3 lossyScale;

  __declspec(property(get = get_parent, put = set_parent)) ::UnityW<::UnityEngine::Transform> parent;

  __declspec(property(get = get_parentInternal, put = set_parentInternal)) ::UnityW<::UnityEngine::Transform> parentInternal;

  __declspec(property(get = get_position, put = set_position)) ::UnityEngine::Vector3 position;

  __declspec(property(get = get_right, put = set_right)) ::UnityEngine::Vector3 right;

  __declspec(property(get = get_root)) ::UnityW<::UnityEngine::Transform> root;

  __declspec(property(get = get_rotation, put = set_rotation)) ::UnityEngine::Quaternion rotation;

  __declspec(property(get = get_rotationOrder, put = set_rotationOrder)) ::UnityEngine::RotationOrder rotationOrder;

  __declspec(property(get = get_up, put = set_up)) ::UnityEngine::Vector3 up;

  __declspec(property(get = get_worldToLocalMatrix)) ::UnityEngine::Matrix4x4 worldToLocalMatrix;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method DetachChildren, addr 0x68c5bf8, size 0x78, virtual false, abstract: false, final false
  inline void DetachChildren();

  /// @brief Method DetachChildren_Injected, addr 0x68c5c70, size 0x3c, virtual false, abstract: false, final false
  static inline void DetachChildren_Injected(::System::IntPtr _unity_self);

  /// @brief Method Find, addr 0x68c6394, size 0x58, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> Find(::StringW n);

  /// @brief Method FindChild, addr 0x68c6844, size 0x4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> FindChild(::StringW n);

  /// @brief Method FindRelativeTransformWithPath, addr 0x68c60a8, size 0x298, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> FindRelativeTransformWithPath(::StringW path, bool isActiveOnly);

  /// @brief Method FindRelativeTransformWithPath_Injected, addr 0x68c6340, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr FindRelativeTransformWithPath_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> path, bool isActiveOnly);

  /// @brief Method GetChild, addr 0x68c6a98, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetChild(int32_t index);

  /// @brief Method GetChildCount, addr 0x68c6c2c, size 0x78, virtual false, abstract: false, final false
  inline int32_t GetChildCount();

  /// @brief Method GetChildCount_Injected, addr 0x68c6ca4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetChildCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetChild_Injected, addr 0x68c6be8, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetChild_Injected(::System::IntPtr _unity_self, int32_t index);

  /// @brief Method GetEnumerator, addr 0x68c6848, size 0x58, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method GetLocalEulerAngles, addr 0x68c2428, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetLocalEulerAngles(::UnityEngine::RotationOrder order);

  /// @brief Method GetLocalEulerAngles_Injected, addr 0x68c24d0, size 0x54, virtual false, abstract: false, final false
  static inline void GetLocalEulerAngles_Injected(::System::IntPtr _unity_self, ::UnityEngine::RotationOrder order, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetLocalPositionAndRotation, addr 0x68c3868, size 0x90, virtual false, abstract: false, final false
  inline void GetLocalPositionAndRotation(::ByRef<::UnityEngine::Vector3> localPosition, ::ByRef<::UnityEngine::Quaternion> localRotation);

  /// @brief Method GetLocalPositionAndRotation_Injected, addr 0x68c38f8, size 0x54, virtual false, abstract: false, final false
  static inline void GetLocalPositionAndRotation_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> localPosition, ::ByRef<::UnityEngine::Quaternion> localRotation);

  /// @brief Method GetParent, addr 0x68c31cc, size 0x148, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetParent();

  /// @brief Method GetParent_Injected, addr 0x68c331c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetParent_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetPositionAndRotation, addr 0x68c3784, size 0x90, virtual false, abstract: false, final false
  inline void GetPositionAndRotation(::ByRef<::UnityEngine::Vector3> position, ::ByRef<::UnityEngine::Quaternion> rotation);

  /// @brief Method GetPositionAndRotation_Injected, addr 0x68c3814, size 0x54, virtual false, abstract: false, final false
  static inline void GetPositionAndRotation_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> position, ::ByRef<::UnityEngine::Quaternion> rotation);

  /// @brief Method GetRoot, addr 0x68c59c0, size 0x148, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetRoot();

  /// @brief Method GetRoot_Injected, addr 0x68c5b08, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetRoot_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetRotationOrderInternal, addr 0x68c2dcc, size 0x78, virtual false, abstract: false, final false
  inline int32_t GetRotationOrderInternal();

  /// @brief Method GetRotationOrderInternal_Injected, addr 0x68c2ed0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetRotationOrderInternal_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetSiblingIndex, addr 0x68c5ff4, size 0x78, virtual false, abstract: false, final false
  inline int32_t GetSiblingIndex();

  /// @brief Method GetSiblingIndex_Injected, addr 0x68c606c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetSiblingIndex_Injected(::System::IntPtr _unity_self);

  /// @brief Method Internal_LookAt, addr 0x68c4228, size 0x9c, virtual false, abstract: false, final false
  inline void Internal_LookAt(::UnityEngine::Vector3 worldPosition, ::UnityEngine::Vector3 worldUp);

  /// @brief Method Internal_LookAt_Injected, addr 0x68c4344, size 0x54, virtual false, abstract: false, final false
  static inline void Internal_LookAt_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> worldPosition, ::ByRef<::UnityEngine::Vector3> worldUp);

  /// @brief Method InverseTransformDirection, addr 0x68c46c0, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 InverseTransformDirection(::UnityEngine::Vector3 direction);

  /// @brief Method InverseTransformDirection, addr 0x68c47b8, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 InverseTransformDirection(float_t x, float_t y, float_t z);

  /// @brief Method InverseTransformDirection_Injected, addr 0x68c4764, size 0x54, virtual false, abstract: false, final false
  static inline void InverseTransformDirection_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> direction, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method InverseTransformDirections, addr 0x68c4934, size 0xd8, virtual false, abstract: false, final false
  inline void InverseTransformDirections(::System::ReadOnlySpan_1<::UnityEngine::Vector3> directions, ::System::Span_1<::UnityEngine::Vector3> transformedDirections);

  /// @brief Method InverseTransformDirections, addr 0x68c4a0c, size 0x80, virtual false, abstract: false, final false
  inline void InverseTransformDirections(::System::Span_1<::UnityEngine::Vector3> directions);

  /// @brief Method InverseTransformDirectionsInternal, addr 0x68c47bc, size 0x124, virtual false, abstract: false, final false
  inline void InverseTransformDirectionsInternal(::System::ReadOnlySpan_1<::UnityEngine::Vector3> directions, ::System::Span_1<::UnityEngine::Vector3> transformedDirections);

  /// @brief Method InverseTransformDirectionsInternal_Injected, addr 0x68c48e0, size 0x54, virtual false, abstract: false, final false
  static inline void InverseTransformDirectionsInternal_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> directions,
                                                                 ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> transformedDirections);

  /// @brief Method InverseTransformPoint, addr 0x68c55f0, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 InverseTransformPoint(::UnityEngine::Vector3 position);

  /// @brief Method InverseTransformPoint, addr 0x68c56e8, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 InverseTransformPoint(float_t x, float_t y, float_t z);

  /// @brief Method InverseTransformPoint_Injected, addr 0x68c5694, size 0x54, virtual false, abstract: false, final false
  static inline void InverseTransformPoint_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> position, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method InverseTransformPoints, addr 0x68c5864, size 0xd8, virtual false, abstract: false, final false
  inline void InverseTransformPoints(::System::ReadOnlySpan_1<::UnityEngine::Vector3> positions, ::System::Span_1<::UnityEngine::Vector3> transformedPositions);

  /// @brief Method InverseTransformPoints, addr 0x68c593c, size 0x80, virtual false, abstract: false, final false
  inline void InverseTransformPoints(::System::Span_1<::UnityEngine::Vector3> positions);

  /// @brief Method InverseTransformPointsInternal, addr 0x68c56ec, size 0x124, virtual false, abstract: false, final false
  inline void InverseTransformPointsInternal(::System::ReadOnlySpan_1<::UnityEngine::Vector3> positions, ::System::Span_1<::UnityEngine::Vector3> transformedPositions);

  /// @brief Method InverseTransformPointsInternal_Injected, addr 0x68c5810, size 0x54, virtual false, abstract: false, final false
  static inline void InverseTransformPointsInternal_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> positions,
                                                             ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> transformedPositions);

  /// @brief Method InverseTransformVector, addr 0x68c4e58, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 InverseTransformVector(::UnityEngine::Vector3 vector);

  /// @brief Method InverseTransformVector, addr 0x68c4f50, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 InverseTransformVector(float_t x, float_t y, float_t z);

  /// @brief Method InverseTransformVector_Injected, addr 0x68c4efc, size 0x54, virtual false, abstract: false, final false
  static inline void InverseTransformVector_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> vector, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method InverseTransformVectors, addr 0x68c50cc, size 0xd8, virtual false, abstract: false, final false
  inline void InverseTransformVectors(::System::ReadOnlySpan_1<::UnityEngine::Vector3> vectors, ::System::Span_1<::UnityEngine::Vector3> transformedVectors);

  /// @brief Method InverseTransformVectors, addr 0x68c51a4, size 0x80, virtual false, abstract: false, final false
  inline void InverseTransformVectors(::System::Span_1<::UnityEngine::Vector3> vectors);

  /// @brief Method InverseTransformVectorsInternal, addr 0x68c4f54, size 0x124, virtual false, abstract: false, final false
  inline void InverseTransformVectorsInternal(::System::ReadOnlySpan_1<::UnityEngine::Vector3> vectors, ::System::Span_1<::UnityEngine::Vector3> transformedVectors);

  /// @brief Method InverseTransformVectorsInternal_Injected, addr 0x68c5078, size 0x54, virtual false, abstract: false, final false
  static inline void InverseTransformVectorsInternal_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> vectors,
                                                              ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> transformedVectors);

  /// @brief Method IsChildOf, addr 0x68c657c, size 0xb4, virtual false, abstract: false, final false
  inline bool IsChildOf(::UnityEngine::Transform* parent);

  /// @brief Method IsChildOf_Injected, addr 0x68c6680, size 0x44, virtual false, abstract: false, final false
  static inline bool IsChildOf_Injected(::System::IntPtr _unity_self, ::System::IntPtr parent);

  /// @brief Method IsConstrainProportionsScale, addr 0x68c6fd8, size 0x78, virtual false, abstract: false, final false
  inline bool IsConstrainProportionsScale();

  /// @brief Method IsConstrainProportionsScale_Injected, addr 0x68c7120, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsConstrainProportionsScale_Injected(::System::IntPtr _unity_self);

  /// @brief Method IsNonUniformScaleTransform, addr 0x68c6f20, size 0x78, virtual false, abstract: false, final false
  inline bool IsNonUniformScaleTransform();

  /// @brief Method IsNonUniformScaleTransform_Injected, addr 0x68c6f98, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsNonUniformScaleTransform_Injected(::System::IntPtr _unity_self);

  /// @brief Method LookAt, addr 0x68c4128, size 0x100, virtual false, abstract: false, final false
  inline void LookAt(::UnityEngine::Transform* target);

  /// @brief Method LookAt, addr 0x68c4060, size 0xc4, virtual false, abstract: false, final false
  inline void LookAt(::UnityEngine::Transform* target, ::UnityEngine::Vector3 worldUp);

  /// @brief Method LookAt, addr 0x68c42c4, size 0x80, virtual false, abstract: false, final false
  inline void LookAt(::UnityEngine::Vector3 worldPosition);

  /// @brief Method LookAt, addr 0x68c4124, size 0x4, virtual false, abstract: false, final false
  inline void LookAt(::UnityEngine::Vector3 worldPosition, ::UnityEngine::Vector3 worldUp);

  /// @brief Method MoveAfterSibling, addr 0x68c5ee0, size 0xc0, virtual false, abstract: false, final false
  inline void MoveAfterSibling(::UnityEngine::Transform* transform, bool notifyEditorAndMarkDirty);

  /// @brief Method MoveAfterSibling_Injected, addr 0x68c5fa0, size 0x54, virtual false, abstract: false, final false
  static inline void MoveAfterSibling_Injected(::System::IntPtr _unity_self, ::System::IntPtr transform, bool notifyEditorAndMarkDirty);

  static inline ::UnityEngine::Transform* New_ctor();

  /// @brief Method Rotate, addr 0x68c3f94, size 0x8, virtual false, abstract: false, final false
  inline void Rotate(::UnityEngine::Vector3 axis, float_t angle);

  /// @brief Method Rotate, addr 0x68c3f08, size 0x8c, virtual false, abstract: false, final false
  inline void Rotate(::UnityEngine::Vector3 axis, float_t angle, ::UnityEngine::Space relativeTo);

  /// @brief Method Rotate, addr 0x68c3e00, size 0x8, virtual false, abstract: false, final false
  inline void Rotate(::UnityEngine::Vector3 eulers);

  /// @brief Method Rotate, addr 0x68c3b78, size 0x288, virtual false, abstract: false, final false
  inline void Rotate(::UnityEngine::Vector3 eulers, ::UnityEngine::Space relativeTo);

  /// @brief Method Rotate, addr 0x68c3e0c, size 0x8, virtual false, abstract: false, final false
  inline void Rotate(float_t xAngle, float_t yAngle, float_t zAngle);

  /// @brief Method Rotate, addr 0x68c3e08, size 0x4, virtual false, abstract: false, final false
  inline void Rotate(float_t xAngle, float_t yAngle, float_t zAngle, ::UnityEngine::Space relativeTo);

  /// @brief Method RotateAround, addr 0x68c68b0, size 0xa0, virtual false, abstract: false, final false
  inline void RotateAround(::UnityEngine::Vector3 axis, float_t angle);

  /// @brief Method RotateAround, addr 0x68c3f9c, size 0xc4, virtual false, abstract: false, final false
  inline void RotateAround(::UnityEngine::Vector3 point, ::UnityEngine::Vector3 axis, float_t angle);

  /// @brief Method RotateAroundInternal, addr 0x68c3e14, size 0xa0, virtual false, abstract: false, final false
  inline void RotateAroundInternal(::UnityEngine::Vector3 axis, float_t angle);

  /// @brief Method RotateAroundInternal_Injected, addr 0x68c3eb4, size 0x54, virtual false, abstract: false, final false
  static inline void RotateAroundInternal_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> axis, float_t angle);

  /// @brief Method RotateAroundLocal, addr 0x68c69a4, size 0xa0, virtual false, abstract: false, final false
  inline void RotateAroundLocal(::UnityEngine::Vector3 axis, float_t angle);

  /// @brief Method RotateAroundLocal_Injected, addr 0x68c6a44, size 0x54, virtual false, abstract: false, final false
  static inline void RotateAroundLocal_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> axis, float_t angle);

  /// @brief Method RotateAround_Injected, addr 0x68c6950, size 0x54, virtual false, abstract: false, final false
  static inline void RotateAround_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> axis, float_t angle);

  /// @brief Method SendTransformChangedScale, addr 0x68c63ec, size 0x78, virtual false, abstract: false, final false
  inline void SendTransformChangedScale();

  /// @brief Method SendTransformChangedScale_Injected, addr 0x68c6464, size 0x3c, virtual false, abstract: false, final false
  static inline void SendTransformChangedScale_Injected(::System::IntPtr _unity_self);

  /// @brief Method SetAsFirstSibling, addr 0x68c5cac, size 0x78, virtual false, abstract: false, final false
  inline void SetAsFirstSibling();

  /// @brief Method SetAsFirstSibling_Injected, addr 0x68c5d24, size 0x3c, virtual false, abstract: false, final false
  static inline void SetAsFirstSibling_Injected(::System::IntPtr _unity_self);

  /// @brief Method SetAsLastSibling, addr 0x68c5d60, size 0x78, virtual false, abstract: false, final false
  inline void SetAsLastSibling();

  /// @brief Method SetAsLastSibling_Injected, addr 0x68c5dd8, size 0x3c, virtual false, abstract: false, final false
  static inline void SetAsLastSibling_Injected(::System::IntPtr _unity_self);

  /// @brief Method SetConstrainProportionsScale, addr 0x68c7054, size 0x88, virtual false, abstract: false, final false
  inline void SetConstrainProportionsScale(bool isLinked);

  /// @brief Method SetConstrainProportionsScale_Injected, addr 0x68c70dc, size 0x44, virtual false, abstract: false, final false
  static inline void SetConstrainProportionsScale_Injected(::System::IntPtr _unity_self, bool isLinked);

  /// @brief Method SetLocalEulerAngles, addr 0x68c2524, size 0xa0, virtual false, abstract: false, final false
  inline void SetLocalEulerAngles(::UnityEngine::Vector3 euler, ::UnityEngine::RotationOrder order);

  /// @brief Method SetLocalEulerAngles_Injected, addr 0x68c25c4, size 0x54, virtual false, abstract: false, final false
  static inline void SetLocalEulerAngles_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> euler, ::UnityEngine::RotationOrder order);

  /// @brief Method SetLocalEulerHint, addr 0x68c2618, size 0x90, virtual false, abstract: false, final false
  inline void SetLocalEulerHint(::UnityEngine::Vector3 euler);

  /// @brief Method SetLocalEulerHint_Injected, addr 0x68c26a8, size 0x44, virtual false, abstract: false, final false
  static inline void SetLocalEulerHint_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> euler);

  /// @brief Method SetLocalPositionAndRotation, addr 0x68c3694, size 0x9c, virtual false, abstract: false, final false
  inline void SetLocalPositionAndRotation(::UnityEngine::Vector3 localPosition, ::UnityEngine::Quaternion localRotation);

  /// @brief Method SetLocalPositionAndRotation_Injected, addr 0x68c3730, size 0x54, virtual false, abstract: false, final false
  static inline void SetLocalPositionAndRotation_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> localPosition, ::ByRef<::UnityEngine::Quaternion> localRotation);

  /// @brief Method SetParent, addr 0x68c3314, size 0x8, virtual false, abstract: false, final false
  inline void SetParent(::UnityEngine::Transform* p);

  /// @brief Method SetParent, addr 0x68c3358, size 0xc0, virtual false, abstract: false, final false
  inline void SetParent(::UnityEngine::Transform* parent, bool worldPositionStays);

  /// @brief Method SetParent_Injected, addr 0x68c3418, size 0x54, virtual false, abstract: false, final false
  static inline void SetParent_Injected(::System::IntPtr _unity_self, ::System::IntPtr parent, bool worldPositionStays);

  /// @brief Method SetPositionAndRotation, addr 0x68c35a4, size 0x9c, virtual false, abstract: false, final false
  inline void SetPositionAndRotation(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method SetPositionAndRotation_Injected, addr 0x68c3640, size 0x54, virtual false, abstract: false, final false
  static inline void SetPositionAndRotation_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> position, ::ByRef<::UnityEngine::Quaternion> rotation);

  /// @brief Method SetRotationOrderInternal, addr 0x68c2e48, size 0x88, virtual false, abstract: false, final false
  inline void SetRotationOrderInternal(::UnityEngine::RotationOrder rotationOrder);

  /// @brief Method SetRotationOrderInternal_Injected, addr 0x68c2f0c, size 0x44, virtual false, abstract: false, final false
  static inline void SetRotationOrderInternal_Injected(::System::IntPtr _unity_self, ::UnityEngine::RotationOrder rotationOrder);

  /// @brief Method SetSiblingIndex, addr 0x68c5e14, size 0x88, virtual false, abstract: false, final false
  inline void SetSiblingIndex(int32_t index);

  /// @brief Method SetSiblingIndex_Injected, addr 0x68c5e9c, size 0x44, virtual false, abstract: false, final false
  static inline void SetSiblingIndex_Injected(::System::IntPtr _unity_self, int32_t index);

  /// @brief Method TransformDirection, addr 0x68c39d4, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 TransformDirection(::UnityEngine::Vector3 direction);

  /// @brief Method TransformDirection, addr 0x68c43ec, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 TransformDirection(float_t x, float_t y, float_t z);

  /// @brief Method TransformDirection_Injected, addr 0x68c4398, size 0x54, virtual false, abstract: false, final false
  static inline void TransformDirection_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> direction, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method TransformDirections, addr 0x68c4568, size 0xd8, virtual false, abstract: false, final false
  inline void TransformDirections(::System::ReadOnlySpan_1<::UnityEngine::Vector3> directions, ::System::Span_1<::UnityEngine::Vector3> transformedDirections);

  /// @brief Method TransformDirections, addr 0x68c4640, size 0x80, virtual false, abstract: false, final false
  inline void TransformDirections(::System::Span_1<::UnityEngine::Vector3> directions);

  /// @brief Method TransformDirectionsInternal, addr 0x68c43f0, size 0x124, virtual false, abstract: false, final false
  inline void TransformDirectionsInternal(::System::ReadOnlySpan_1<::UnityEngine::Vector3> directions, ::System::Span_1<::UnityEngine::Vector3> transformedDirections);

  /// @brief Method TransformDirectionsInternal_Injected, addr 0x68c4514, size 0x54, virtual false, abstract: false, final false
  static inline void TransformDirectionsInternal_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> directions,
                                                          ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> transformedDirections);

  /// @brief Method TransformPoint, addr 0x68c5224, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 TransformPoint(::UnityEngine::Vector3 position);

  /// @brief Method TransformPoint, addr 0x68c531c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 TransformPoint(float_t x, float_t y, float_t z);

  /// @brief Method TransformPoint_Injected, addr 0x68c52c8, size 0x54, virtual false, abstract: false, final false
  static inline void TransformPoint_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> position, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method TransformPoints, addr 0x68c5498, size 0xd8, virtual false, abstract: false, final false
  inline void TransformPoints(::System::ReadOnlySpan_1<::UnityEngine::Vector3> positions, ::System::Span_1<::UnityEngine::Vector3> transformedPositions);

  /// @brief Method TransformPoints, addr 0x68c5570, size 0x80, virtual false, abstract: false, final false
  inline void TransformPoints(::System::Span_1<::UnityEngine::Vector3> positions);

  /// @brief Method TransformPointsInternal, addr 0x68c5320, size 0x124, virtual false, abstract: false, final false
  inline void TransformPointsInternal(::System::ReadOnlySpan_1<::UnityEngine::Vector3> positions, ::System::Span_1<::UnityEngine::Vector3> transformedPositions);

  /// @brief Method TransformPointsInternal_Injected, addr 0x68c5444, size 0x54, virtual false, abstract: false, final false
  static inline void TransformPointsInternal_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> positions,
                                                      ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> transformedPositions);

  /// @brief Method TransformVector, addr 0x68c4a8c, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 TransformVector(::UnityEngine::Vector3 vector);

  /// @brief Method TransformVector, addr 0x68c4b84, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 TransformVector(float_t x, float_t y, float_t z);

  /// @brief Method TransformVector_Injected, addr 0x68c4b30, size 0x54, virtual false, abstract: false, final false
  static inline void TransformVector_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> vector, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method TransformVectors, addr 0x68c4d00, size 0xd8, virtual false, abstract: false, final false
  inline void TransformVectors(::System::ReadOnlySpan_1<::UnityEngine::Vector3> vectors, ::System::Span_1<::UnityEngine::Vector3> transformedVectors);

  /// @brief Method TransformVectors, addr 0x68c4dd8, size 0x80, virtual false, abstract: false, final false
  inline void TransformVectors(::System::Span_1<::UnityEngine::Vector3> vectors);

  /// @brief Method TransformVectorsInternal, addr 0x68c4b88, size 0x124, virtual false, abstract: false, final false
  inline void TransformVectorsInternal(::System::ReadOnlySpan_1<::UnityEngine::Vector3> vectors, ::System::Span_1<::UnityEngine::Vector3> transformedVectors);

  /// @brief Method TransformVectorsInternal_Injected, addr 0x68c4cac, size 0x54, virtual false, abstract: false, final false
  static inline void TransformVectorsInternal_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> vectors,
                                                       ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> transformedVectors);

  /// @brief Method Translate, addr 0x68c3a78, size 0x8, virtual false, abstract: false, final false
  inline void Translate(::UnityEngine::Vector3 translation);

  /// @brief Method Translate, addr 0x68c394c, size 0x88, virtual false, abstract: false, final false
  inline void Translate(::UnityEngine::Vector3 translation, ::UnityEngine::Space relativeTo);

  /// @brief Method Translate, addr 0x68c3a8c, size 0xe8, virtual false, abstract: false, final false
  inline void Translate(::UnityEngine::Vector3 translation, ::UnityEngine::Transform* relativeTo);

  /// @brief Method Translate, addr 0x68c3a84, size 0x8, virtual false, abstract: false, final false
  inline void Translate(float_t x, float_t y, float_t z);

  /// @brief Method Translate, addr 0x68c3a80, size 0x4, virtual false, abstract: false, final false
  inline void Translate(float_t x, float_t y, float_t z, ::UnityEngine::Space relativeTo);

  /// @brief Method Translate, addr 0x68c3b74, size 0x4, virtual false, abstract: false, final false
  inline void Translate(float_t x, float_t y, float_t z, ::UnityEngine::Transform* relativeTo);

  /// @brief Method .ctor, addr 0x68c2158, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_childCount, addr 0x68c5b44, size 0x78, virtual false, abstract: false, final false
  inline int32_t get_childCount();

  /// @brief Method get_childCount_Injected, addr 0x68c5bbc, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_childCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_constrainProportionsScale, addr 0x68c6fd4, size 0x4, virtual false, abstract: false, final false
  inline bool get_constrainProportionsScale();

  /// @brief Method get_eulerAngles, addr 0x68c26ec, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_eulerAngles();

  /// @brief Method get_forward, addr 0x68c2c14, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_forward();

  /// @brief Method get_hasChanged, addr 0x68c66c4, size 0x78, virtual false, abstract: false, final false
  inline bool get_hasChanged();

  /// @brief Method get_hasChanged_Injected, addr 0x68c673c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_hasChanged_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_hierarchyCapacity, addr 0x68c6ce0, size 0x4, virtual false, abstract: false, final false
  inline int32_t get_hierarchyCapacity();

  /// @brief Method get_hierarchyCount, addr 0x68c6e68, size 0x4, virtual false, abstract: false, final false
  inline int32_t get_hierarchyCount();

  /// @brief Method get_localEulerAngles, addr 0x68c2870, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_localEulerAngles();

  /// @brief Method get_localPosition, addr 0x68c10a4, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_localPosition();

  /// @brief Method get_localPosition_Injected, addr 0x68c23a0, size 0x44, virtual false, abstract: false, final false
  static inline void get_localPosition_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_localRotation, addr 0x68c28a0, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_localRotation();

  /// @brief Method get_localRotation_Injected, addr 0x68c2d40, size 0x44, virtual false, abstract: false, final false
  static inline void get_localRotation_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method get_localScale, addr 0x68c2f50, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_localScale();

  /// @brief Method get_localScale_Injected, addr 0x68c2fe8, size 0x44, virtual false, abstract: false, final false
  static inline void get_localScale_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_localToWorldMatrix, addr 0x68c1bb4, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_localToWorldMatrix();

  /// @brief Method get_localToWorldMatrix_Injected, addr 0x68c3560, size 0x44, virtual false, abstract: false, final false
  static inline void get_localToWorldMatrix_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method get_lossyScale, addr 0x68c64a0, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_lossyScale();

  /// @brief Method get_lossyScale_Injected, addr 0x68c6538, size 0x44, virtual false, abstract: false, final false
  static inline void get_lossyScale_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_parent, addr 0x68c214c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_parent();

  /// @brief Method get_parentInternal, addr 0x68c3100, size 0x4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_parentInternal();

  /// @brief Method get_position, addr 0x68c21f0, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method get_position_Injected, addr 0x68c2288, size 0x44, virtual false, abstract: false, final false
  static inline void get_position_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_right, addr 0x68c29f4, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_right();

  /// @brief Method get_root, addr 0x68c59bc, size 0x4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_root();

  /// @brief Method get_rotation, addr 0x68c271c, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rotation();

  /// @brief Method get_rotationOrder, addr 0x68c2dc8, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::RotationOrder get_rotationOrder();

  /// @brief Method get_rotation_Injected, addr 0x68c2cb8, size 0x44, virtual false, abstract: false, final false
  static inline void get_rotation_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method get_up, addr 0x68c2b04, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_up();

  /// @brief Method get_worldToLocalMatrix, addr 0x68c346c, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_worldToLocalMatrix();

  /// @brief Method get_worldToLocalMatrix_Injected, addr 0x68c351c, size 0x44, virtual false, abstract: false, final false
  static inline void get_worldToLocalMatrix_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method internal_getHierarchyCapacity, addr 0x68c6ce4, size 0x78, virtual false, abstract: false, final false
  inline int32_t internal_getHierarchyCapacity();

  /// @brief Method internal_getHierarchyCapacity_Injected, addr 0x68c6de8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t internal_getHierarchyCapacity_Injected(::System::IntPtr _unity_self);

  /// @brief Method internal_getHierarchyCount, addr 0x68c6e6c, size 0x78, virtual false, abstract: false, final false
  inline int32_t internal_getHierarchyCount();

  /// @brief Method internal_getHierarchyCount_Injected, addr 0x68c6ee4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t internal_getHierarchyCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method internal_setHierarchyCapacity, addr 0x68c6d60, size 0x88, virtual false, abstract: false, final false
  inline void internal_setHierarchyCapacity(int32_t value);

  /// @brief Method internal_setHierarchyCapacity_Injected, addr 0x68c6e24, size 0x44, virtual false, abstract: false, final false
  static inline void internal_setHierarchyCapacity_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_constrainProportionsScale, addr 0x68c7050, size 0x4, virtual false, abstract: false, final false
  inline void set_constrainProportionsScale(bool value);

  /// @brief Method set_eulerAngles, addr 0x68c27b0, size 0x30, virtual false, abstract: false, final false
  inline void set_eulerAngles(::UnityEngine::Vector3 value);

  /// @brief Method set_forward, addr 0x68c2c9c, size 0x1c, virtual false, abstract: false, final false
  inline void set_forward(::UnityEngine::Vector3 value);

  /// @brief Method set_hasChanged, addr 0x68c6778, size 0x88, virtual false, abstract: false, final false
  inline void set_hasChanged(bool value);

  /// @brief Method set_hasChanged_Injected, addr 0x68c6800, size 0x44, virtual false, abstract: false, final false
  static inline void set_hasChanged_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_hierarchyCapacity, addr 0x68c6d5c, size 0x4, virtual false, abstract: false, final false
  inline void set_hierarchyCapacity(int32_t value);

  /// @brief Method set_localEulerAngles, addr 0x68c2934, size 0x30, virtual false, abstract: false, final false
  inline void set_localEulerAngles(::UnityEngine::Vector3 value);

  /// @brief Method set_localPosition, addr 0x68c116c, size 0x90, virtual false, abstract: false, final false
  inline void set_localPosition(::UnityEngine::Vector3 value);

  /// @brief Method set_localPosition_Injected, addr 0x68c23e4, size 0x44, virtual false, abstract: false, final false
  static inline void set_localPosition_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_localRotation, addr 0x68c2964, size 0x90, virtual false, abstract: false, final false
  inline void set_localRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_localRotation_Injected, addr 0x68c2d84, size 0x44, virtual false, abstract: false, final false
  static inline void set_localRotation_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method set_localScale, addr 0x68c302c, size 0x90, virtual false, abstract: false, final false
  inline void set_localScale(::UnityEngine::Vector3 value);

  /// @brief Method set_localScale_Injected, addr 0x68c30bc, size 0x44, virtual false, abstract: false, final false
  static inline void set_localScale_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_parent, addr 0x68c3104, size 0xc0, virtual false, abstract: false, final false
  inline void set_parent(::UnityEngine::Transform* value);

  /// @brief Method set_parentInternal, addr 0x68c31c4, size 0x8, virtual false, abstract: false, final false
  inline void set_parentInternal(::UnityEngine::Transform* value);

  /// @brief Method set_position, addr 0x68c22cc, size 0x90, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector3 value);

  /// @brief Method set_position_Injected, addr 0x68c235c, size 0x44, virtual false, abstract: false, final false
  static inline void set_position_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_right, addr 0x68c2a7c, size 0x88, virtual false, abstract: false, final false
  inline void set_right(::UnityEngine::Vector3 value);

  /// @brief Method set_rotation, addr 0x68c27e0, size 0x90, virtual false, abstract: false, final false
  inline void set_rotation(::UnityEngine::Quaternion value);

  /// @brief Method set_rotationOrder, addr 0x68c2e44, size 0x4, virtual false, abstract: false, final false
  inline void set_rotationOrder(::UnityEngine::RotationOrder value);

  /// @brief Method set_rotation_Injected, addr 0x68c2cfc, size 0x44, virtual false, abstract: false, final false
  static inline void set_rotation_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method set_up, addr 0x68c2b8c, size 0x88, virtual false, abstract: false, final false
  inline void set_up(::UnityEngine::Vector3 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Transform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Transform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Transform(Transform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Transform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Transform(Transform const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10399 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Transform, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Transform);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Transform*, "UnityEngine", "Transform");
NEED_NO_BOX(::UnityEngine::Transform_Enumerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Transform_Enumerator*, "UnityEngine", "Transform/Enumerator");
