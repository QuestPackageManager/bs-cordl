#pragma once
// IWYU pragma private; include "UnityEngine/Transform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Transform)
namespace System::Collections {
class IEnumerator;
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
// Dependencies System.Collections.IEnumerator, System.Object
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

  /// @brief Method MoveNext, addr 0x48ba9c4, size 0x60, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::Transform_Enumerator* New_ctor(::UnityEngine::Transform* outer);

  /// @brief Method Reset, addr 0x48baa24, size 0xc, virtual true, abstract: false, final true
  inline void Reset();

  constexpr int32_t const& __cordl_internal_get_currentIndex() const;

  constexpr int32_t& __cordl_internal_get_currentIndex();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_outer() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_outer();

  constexpr void __cordl_internal_set_currentIndex(int32_t value);

  constexpr void __cordl_internal_set_outer(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x48ba4a4, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Transform* outer);

  /// @brief Method get_Current, addr 0x48ba978, size 0x4c, virtual true, abstract: false, final true
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10957 };

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
// Dependencies System.Collections.IEnumerable, UnityEngine.Component
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

  /// @brief Method DetachChildren, addr 0x48ba02c, size 0x3c, virtual false, abstract: false, final false
  inline void DetachChildren();

  /// @brief Method Find, addr 0x48ba208, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> Find(::StringW n);

  /// @brief Method FindChild, addr 0x48ba43c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> FindChild(::StringW n);

  /// @brief Method FindRelativeTransformWithPath, addr 0x48ba1b4, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Transform> FindRelativeTransformWithPath(::UnityEngine::Transform* transform, ::StringW path, bool isActiveOnly);

  /// @brief Method GetChild, addr 0x48ba644, size 0x44, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetChild(int32_t index);

  /// @brief Method GetChildCount, addr 0x48ba688, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetChildCount();

  /// @brief Method GetEnumerator, addr 0x48ba440, size 0x64, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method GetLocalEulerAngles, addr 0x48b75bc, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetLocalEulerAngles(::UnityEngine::RotationOrder order);

  /// @brief Method GetLocalEulerAngles_Injected, addr 0x48b7620, size 0x54, virtual false, abstract: false, final false
  inline void GetLocalEulerAngles_Injected(::UnityEngine::RotationOrder order, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetLocalPositionAndRotation, addr 0x48b848c, size 0x54, virtual false, abstract: false, final false
  inline void GetLocalPositionAndRotation(::ByRef<::UnityEngine::Vector3> localPosition, ::ByRef<::UnityEngine::Quaternion> localRotation);

  /// @brief Method GetParent, addr 0x48b8104, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetParent();

  /// @brief Method GetPositionAndRotation, addr 0x48b8438, size 0x54, virtual false, abstract: false, final false
  inline void GetPositionAndRotation(::ByRef<::UnityEngine::Vector3> position, ::ByRef<::UnityEngine::Quaternion> rotation);

  /// @brief Method GetRoot, addr 0x48b9fb4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetRoot();

  /// @brief Method GetRotationOrderInternal, addr 0x48b7db8, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetRotationOrderInternal();

  /// @brief Method GetSiblingIndex, addr 0x48ba178, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetSiblingIndex();

  /// @brief Method Internal_LookAt, addr 0x48b8d28, size 0x60, virtual false, abstract: false, final false
  inline void Internal_LookAt(::UnityEngine::Vector3 worldPosition, ::UnityEngine::Vector3 worldUp);

  /// @brief Method Internal_LookAt_Injected, addr 0x48b8e04, size 0x54, virtual false, abstract: false, final false
  inline void Internal_LookAt_Injected(::ByRef<::UnityEngine::Vector3> worldPosition, ::ByRef<::UnityEngine::Vector3> worldUp);

  /// @brief Method InverseTransformDirection, addr 0x48b90dc, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 InverseTransformDirection(::UnityEngine::Vector3 direction);

  /// @brief Method InverseTransformDirection, addr 0x48b9198, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 InverseTransformDirection(float_t x, float_t y, float_t z);

  /// @brief Method InverseTransformDirection_Injected, addr 0x48b9144, size 0x54, virtual false, abstract: false, final false
  inline void InverseTransformDirection_Injected(::ByRef<::UnityEngine::Vector3> direction, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method InverseTransformDirections, addr 0x48b9208, size 0x144, virtual false, abstract: false, final false
  inline void InverseTransformDirections(::System::ReadOnlySpan_1<::UnityEngine::Vector3> directions, ::System::Span_1<::UnityEngine::Vector3> transformedDirections);

  /// @brief Method InverseTransformDirections, addr 0x48b934c, size 0x7c, virtual false, abstract: false, final false
  inline void InverseTransformDirections(::System::Span_1<::UnityEngine::Vector3> directions);

  /// @brief Method InverseTransformDirections, addr 0x48b919c, size 0x6c, virtual false, abstract: false, final false
  inline void InverseTransformDirections(::cordl_internals::Ptr<::UnityEngine::Vector3> directions, int32_t count, ::cordl_internals::Ptr<::UnityEngine::Vector3> transformedDirections,
                                         int32_t transformedCount);

  /// @brief Method InverseTransformPoint, addr 0x48b9c8c, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 InverseTransformPoint(::UnityEngine::Vector3 position);

  /// @brief Method InverseTransformPoint, addr 0x48b9d48, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 InverseTransformPoint(float_t x, float_t y, float_t z);

  /// @brief Method InverseTransformPoint_Injected, addr 0x48b9cf4, size 0x54, virtual false, abstract: false, final false
  inline void InverseTransformPoint_Injected(::ByRef<::UnityEngine::Vector3> position, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method InverseTransformPoints, addr 0x48b9db8, size 0x144, virtual false, abstract: false, final false
  inline void InverseTransformPoints(::System::ReadOnlySpan_1<::UnityEngine::Vector3> positions, ::System::Span_1<::UnityEngine::Vector3> transformedPositions);

  /// @brief Method InverseTransformPoints, addr 0x48b9efc, size 0x7c, virtual false, abstract: false, final false
  inline void InverseTransformPoints(::System::Span_1<::UnityEngine::Vector3> positions);

  /// @brief Method InverseTransformPoints, addr 0x48b9d4c, size 0x6c, virtual false, abstract: false, final false
  inline void InverseTransformPoints(::cordl_internals::Ptr<::UnityEngine::Vector3> positions, int32_t count, ::cordl_internals::Ptr<::UnityEngine::Vector3> transformedPositions,
                                     int32_t transformedCount);

  /// @brief Method InverseTransformVector, addr 0x48b96b4, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 InverseTransformVector(::UnityEngine::Vector3 vector);

  /// @brief Method InverseTransformVector, addr 0x48b9770, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 InverseTransformVector(float_t x, float_t y, float_t z);

  /// @brief Method InverseTransformVector_Injected, addr 0x48b971c, size 0x54, virtual false, abstract: false, final false
  inline void InverseTransformVector_Injected(::ByRef<::UnityEngine::Vector3> vector, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method InverseTransformVectors, addr 0x48b97e0, size 0x144, virtual false, abstract: false, final false
  inline void InverseTransformVectors(::System::ReadOnlySpan_1<::UnityEngine::Vector3> vectors, ::System::Span_1<::UnityEngine::Vector3> transformedVectors);

  /// @brief Method InverseTransformVectors, addr 0x48b9924, size 0x7c, virtual false, abstract: false, final false
  inline void InverseTransformVectors(::System::Span_1<::UnityEngine::Vector3> vectors);

  /// @brief Method InverseTransformVectors, addr 0x48b9774, size 0x6c, virtual false, abstract: false, final false
  inline void InverseTransformVectors(::cordl_internals::Ptr<::UnityEngine::Vector3> vectors, int32_t count, ::cordl_internals::Ptr<::UnityEngine::Vector3> transformedVectors,
                                      int32_t transformedCount);

  /// @brief Method IsChildOf, addr 0x48ba378, size 0x44, virtual false, abstract: false, final false
  inline bool IsChildOf(::UnityEngine::Transform* parent);

  /// @brief Method IsConstrainProportionsScale, addr 0x48ba8b4, size 0x3c, virtual false, abstract: false, final false
  inline bool IsConstrainProportionsScale();

  /// @brief Method IsNonUniformScaleTransform, addr 0x48ba83c, size 0x3c, virtual false, abstract: false, final false
  inline bool IsNonUniformScaleTransform();

  /// @brief Method LookAt, addr 0x48b8c34, size 0xf4, virtual false, abstract: false, final false
  inline void LookAt(::UnityEngine::Transform* target);

  /// @brief Method LookAt, addr 0x48b8b74, size 0xbc, virtual false, abstract: false, final false
  inline void LookAt(::UnityEngine::Transform* target, ::UnityEngine::Vector3 worldUp);

  /// @brief Method LookAt, addr 0x48b8d88, size 0x7c, virtual false, abstract: false, final false
  inline void LookAt(::UnityEngine::Vector3 worldPosition);

  /// @brief Method LookAt, addr 0x48b8c30, size 0x4, virtual false, abstract: false, final false
  inline void LookAt(::UnityEngine::Vector3 worldPosition, ::UnityEngine::Vector3 worldUp);

  /// @brief Method MoveAfterSibling, addr 0x48ba124, size 0x54, virtual false, abstract: false, final false
  inline void MoveAfterSibling(::UnityEngine::Transform* transform, bool notifyEditorAndMarkDirty);

  static inline ::UnityEngine::Transform* New_ctor();

  /// @brief Method Rotate, addr 0x48b8aa8, size 0x8, virtual false, abstract: false, final false
  inline void Rotate(::UnityEngine::Vector3 axis, float_t angle);

  /// @brief Method Rotate, addr 0x48b8a1c, size 0x8c, virtual false, abstract: false, final false
  inline void Rotate(::UnityEngine::Vector3 axis, float_t angle, ::UnityEngine::Space relativeTo);

  /// @brief Method Rotate, addr 0x48b8950, size 0x8, virtual false, abstract: false, final false
  inline void Rotate(::UnityEngine::Vector3 eulers);

  /// @brief Method Rotate, addr 0x48b86c8, size 0x288, virtual false, abstract: false, final false
  inline void Rotate(::UnityEngine::Vector3 eulers, ::UnityEngine::Space relativeTo);

  /// @brief Method Rotate, addr 0x48b895c, size 0x8, virtual false, abstract: false, final false
  inline void Rotate(float_t xAngle, float_t yAngle, float_t zAngle);

  /// @brief Method Rotate, addr 0x48b8958, size 0x4, virtual false, abstract: false, final false
  inline void Rotate(float_t xAngle, float_t yAngle, float_t zAngle, ::UnityEngine::Space relativeTo);

  /// @brief Method RotateAround, addr 0x48ba4d4, size 0x64, virtual false, abstract: false, final false
  inline void RotateAround(::UnityEngine::Vector3 axis, float_t angle);

  /// @brief Method RotateAround, addr 0x48b8ab0, size 0xc4, virtual false, abstract: false, final false
  inline void RotateAround(::UnityEngine::Vector3 point, ::UnityEngine::Vector3 axis, float_t angle);

  /// @brief Method RotateAroundInternal, addr 0x48b8964, size 0x64, virtual false, abstract: false, final false
  inline void RotateAroundInternal(::UnityEngine::Vector3 axis, float_t angle);

  /// @brief Method RotateAroundInternal_Injected, addr 0x48b89c8, size 0x54, virtual false, abstract: false, final false
  inline void RotateAroundInternal_Injected(::ByRef<::UnityEngine::Vector3> axis, float_t angle);

  /// @brief Method RotateAroundLocal, addr 0x48ba58c, size 0x64, virtual false, abstract: false, final false
  inline void RotateAroundLocal(::UnityEngine::Vector3 axis, float_t angle);

  /// @brief Method RotateAroundLocal_Injected, addr 0x48ba5f0, size 0x54, virtual false, abstract: false, final false
  inline void RotateAroundLocal_Injected(::ByRef<::UnityEngine::Vector3> axis, float_t angle);

  /// @brief Method RotateAround_Injected, addr 0x48ba538, size 0x54, virtual false, abstract: false, final false
  inline void RotateAround_Injected(::ByRef<::UnityEngine::Vector3> axis, float_t angle);

  /// @brief Method SendTransformChangedScale, addr 0x48ba29c, size 0x3c, virtual false, abstract: false, final false
  inline void SendTransformChangedScale();

  /// @brief Method SetAsFirstSibling, addr 0x48ba068, size 0x3c, virtual false, abstract: false, final false
  inline void SetAsFirstSibling();

  /// @brief Method SetAsLastSibling, addr 0x48ba0a4, size 0x3c, virtual false, abstract: false, final false
  inline void SetAsLastSibling();

  /// @brief Method SetConstrainProportionsScale, addr 0x48ba934, size 0x44, virtual false, abstract: false, final false
  inline void SetConstrainProportionsScale(bool isLinked);

  /// @brief Method SetLocalEulerAngles, addr 0x48b7674, size 0x5c, virtual false, abstract: false, final false
  inline void SetLocalEulerAngles(::UnityEngine::Vector3 euler, ::UnityEngine::RotationOrder order);

  /// @brief Method SetLocalEulerAngles_Injected, addr 0x48b76d0, size 0x54, virtual false, abstract: false, final false
  inline void SetLocalEulerAngles_Injected(::ByRef<::UnityEngine::Vector3> euler, ::UnityEngine::RotationOrder order);

  /// @brief Method SetLocalEulerHint, addr 0x48b7724, size 0x54, virtual false, abstract: false, final false
  inline void SetLocalEulerHint(::UnityEngine::Vector3 euler);

  /// @brief Method SetLocalEulerHint_Injected, addr 0x48b7778, size 0x44, virtual false, abstract: false, final false
  inline void SetLocalEulerHint_Injected(::ByRef<::UnityEngine::Vector3> euler);

  /// @brief Method SetLocalPositionAndRotation, addr 0x48b8384, size 0x60, virtual false, abstract: false, final false
  inline void SetLocalPositionAndRotation(::UnityEngine::Vector3 localPosition, ::UnityEngine::Quaternion localRotation);

  /// @brief Method SetLocalPositionAndRotation_Injected, addr 0x48b83e4, size 0x54, virtual false, abstract: false, final false
  inline void SetLocalPositionAndRotation_Injected(::ByRef<::UnityEngine::Vector3> localPosition, ::ByRef<::UnityEngine::Quaternion> localRotation);

  /// @brief Method SetParent, addr 0x48b8140, size 0x48, virtual false, abstract: false, final false
  inline void SetParent(::UnityEngine::Transform* p);

  /// @brief Method SetParent, addr 0x48b8188, size 0x54, virtual false, abstract: false, final false
  inline void SetParent(::UnityEngine::Transform* parent, bool worldPositionStays);

  /// @brief Method SetPositionAndRotation, addr 0x48b82d0, size 0x60, virtual false, abstract: false, final false
  inline void SetPositionAndRotation(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method SetPositionAndRotation_Injected, addr 0x48b8330, size 0x54, virtual false, abstract: false, final false
  inline void SetPositionAndRotation_Injected(::ByRef<::UnityEngine::Vector3> position, ::ByRef<::UnityEngine::Quaternion> rotation);

  /// @brief Method SetRotationOrderInternal, addr 0x48b7e38, size 0x44, virtual false, abstract: false, final false
  inline void SetRotationOrderInternal(::UnityEngine::RotationOrder rotationOrder);

  /// @brief Method SetSiblingIndex, addr 0x48ba0e0, size 0x44, virtual false, abstract: false, final false
  inline void SetSiblingIndex(int32_t index);

  /// @brief Method TransformDirection, addr 0x48b8568, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 TransformDirection(::UnityEngine::Vector3 direction);

  /// @brief Method TransformDirection, addr 0x48b8eac, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 TransformDirection(float_t x, float_t y, float_t z);

  /// @brief Method TransformDirection_Injected, addr 0x48b8e58, size 0x54, virtual false, abstract: false, final false
  inline void TransformDirection_Injected(::ByRef<::UnityEngine::Vector3> direction, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method TransformDirections, addr 0x48b8f1c, size 0x144, virtual false, abstract: false, final false
  inline void TransformDirections(::System::ReadOnlySpan_1<::UnityEngine::Vector3> directions, ::System::Span_1<::UnityEngine::Vector3> transformedDirections);

  /// @brief Method TransformDirections, addr 0x48b9060, size 0x7c, virtual false, abstract: false, final false
  inline void TransformDirections(::System::Span_1<::UnityEngine::Vector3> directions);

  /// @brief Method TransformDirections, addr 0x48b8eb0, size 0x6c, virtual false, abstract: false, final false
  inline void TransformDirections(::cordl_internals::Ptr<::UnityEngine::Vector3> directions, int32_t count, ::cordl_internals::Ptr<::UnityEngine::Vector3> transformedDirections,
                                  int32_t transformedCount);

  /// @brief Method TransformPoint, addr 0x48b99a0, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 TransformPoint(::UnityEngine::Vector3 position);

  /// @brief Method TransformPoint, addr 0x48b9a5c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 TransformPoint(float_t x, float_t y, float_t z);

  /// @brief Method TransformPoint_Injected, addr 0x48b9a08, size 0x54, virtual false, abstract: false, final false
  inline void TransformPoint_Injected(::ByRef<::UnityEngine::Vector3> position, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method TransformPoints, addr 0x48b9acc, size 0x144, virtual false, abstract: false, final false
  inline void TransformPoints(::System::ReadOnlySpan_1<::UnityEngine::Vector3> positions, ::System::Span_1<::UnityEngine::Vector3> transformedPositions);

  /// @brief Method TransformPoints, addr 0x48b9c10, size 0x7c, virtual false, abstract: false, final false
  inline void TransformPoints(::System::Span_1<::UnityEngine::Vector3> positions);

  /// @brief Method TransformPoints, addr 0x48b9a60, size 0x6c, virtual false, abstract: false, final false
  inline void TransformPoints(::cordl_internals::Ptr<::UnityEngine::Vector3> positions, int32_t count, ::cordl_internals::Ptr<::UnityEngine::Vector3> transformedPositions, int32_t transformedCount);

  /// @brief Method TransformVector, addr 0x48b93c8, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 TransformVector(::UnityEngine::Vector3 vector);

  /// @brief Method TransformVector, addr 0x48b9484, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 TransformVector(float_t x, float_t y, float_t z);

  /// @brief Method TransformVector_Injected, addr 0x48b9430, size 0x54, virtual false, abstract: false, final false
  inline void TransformVector_Injected(::ByRef<::UnityEngine::Vector3> vector, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method TransformVectors, addr 0x48b94f4, size 0x144, virtual false, abstract: false, final false
  inline void TransformVectors(::System::ReadOnlySpan_1<::UnityEngine::Vector3> vectors, ::System::Span_1<::UnityEngine::Vector3> transformedVectors);

  /// @brief Method TransformVectors, addr 0x48b9638, size 0x7c, virtual false, abstract: false, final false
  inline void TransformVectors(::System::Span_1<::UnityEngine::Vector3> vectors);

  /// @brief Method TransformVectors, addr 0x48b9488, size 0x6c, virtual false, abstract: false, final false
  inline void TransformVectors(::cordl_internals::Ptr<::UnityEngine::Vector3> vectors, int32_t count, ::cordl_internals::Ptr<::UnityEngine::Vector3> transformedVectors, int32_t transformedCount);

  /// @brief Method Translate, addr 0x48b85d0, size 0x8, virtual false, abstract: false, final false
  inline void Translate(::UnityEngine::Vector3 translation);

  /// @brief Method Translate, addr 0x48b84e0, size 0x88, virtual false, abstract: false, final false
  inline void Translate(::UnityEngine::Vector3 translation, ::UnityEngine::Space relativeTo);

  /// @brief Method Translate, addr 0x48b85e4, size 0xe0, virtual false, abstract: false, final false
  inline void Translate(::UnityEngine::Vector3 translation, ::UnityEngine::Transform* relativeTo);

  /// @brief Method Translate, addr 0x48b85dc, size 0x8, virtual false, abstract: false, final false
  inline void Translate(float_t x, float_t y, float_t z);

  /// @brief Method Translate, addr 0x48b85d8, size 0x4, virtual false, abstract: false, final false
  inline void Translate(float_t x, float_t y, float_t z, ::UnityEngine::Space relativeTo);

  /// @brief Method Translate, addr 0x48b86c4, size 0x4, virtual false, abstract: false, final false
  inline void Translate(float_t x, float_t y, float_t z, ::UnityEngine::Transform* relativeTo);

  /// @brief Method .ctor, addr 0x48b7344, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_childCount, addr 0x48b9ff0, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_childCount();

  /// @brief Method get_constrainProportionsScale, addr 0x48ba878, size 0x3c, virtual false, abstract: false, final false
  inline bool get_constrainProportionsScale();

  /// @brief Method get_eulerAngles, addr 0x48b77bc, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_eulerAngles();

  /// @brief Method get_forward, addr 0x48b7bd4, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_forward();

  /// @brief Method get_hasChanged, addr 0x48ba3bc, size 0x3c, virtual false, abstract: false, final false
  inline bool get_hasChanged();

  /// @brief Method get_hierarchyCapacity, addr 0x48ba6c4, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_hierarchyCapacity();

  /// @brief Method get_hierarchyCount, addr 0x48ba7c4, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_hierarchyCount();

  /// @brief Method get_localEulerAngles, addr 0x48b78c8, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_localEulerAngles();

  /// @brief Method get_localPosition, addr 0x48b661c, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_localPosition();

  /// @brief Method get_localPosition_Injected, addr 0x48b7534, size 0x44, virtual false, abstract: false, final false
  inline void get_localPosition_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_localRotation, addr 0x48b78f8, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_localRotation();

  /// @brief Method get_localRotation_Injected, addr 0x48b7cf4, size 0x44, virtual false, abstract: false, final false
  inline void get_localRotation_Injected(::ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method get_localScale, addr 0x48b7e7c, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_localScale();

  /// @brief Method get_localScale_Injected, addr 0x48b7ed8, size 0x44, virtual false, abstract: false, final false
  inline void get_localScale_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_localToWorldMatrix, addr 0x48b6d50, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_localToWorldMatrix();

  /// @brief Method get_localToWorldMatrix_Injected, addr 0x48b828c, size 0x44, virtual false, abstract: false, final false
  inline void get_localToWorldMatrix_Injected(::ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method get_lossyScale, addr 0x48ba2d8, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_lossyScale();

  /// @brief Method get_lossyScale_Injected, addr 0x48ba334, size 0x44, virtual false, abstract: false, final false
  inline void get_lossyScale_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_parent, addr 0x48b7300, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_parent();

  /// @brief Method get_parentInternal, addr 0x48b7fb4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_parentInternal();

  /// @brief Method get_position, addr 0x48b73fc, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method get_position_Injected, addr 0x48b7458, size 0x44, virtual false, abstract: false, final false
  inline void get_position_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_right, addr 0x48b79d4, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_right();

  /// @brief Method get_root, addr 0x48b9f78, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_root();

  /// @brief Method get_rotation, addr 0x48b77ec, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rotation();

  /// @brief Method get_rotationOrder, addr 0x48b7d7c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::RotationOrder get_rotationOrder();

  /// @brief Method get_rotation_Injected, addr 0x48b7c6c, size 0x44, virtual false, abstract: false, final false
  inline void get_rotation_Injected(::ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method get_up, addr 0x48b7ad4, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_up();

  /// @brief Method get_worldToLocalMatrix, addr 0x48b81dc, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_worldToLocalMatrix();

  /// @brief Method get_worldToLocalMatrix_Injected, addr 0x48b8248, size 0x44, virtual false, abstract: false, final false
  inline void get_worldToLocalMatrix_Injected(::ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method internal_getHierarchyCapacity, addr 0x48ba700, size 0x3c, virtual false, abstract: false, final false
  inline int32_t internal_getHierarchyCapacity();

  /// @brief Method internal_getHierarchyCount, addr 0x48ba800, size 0x3c, virtual false, abstract: false, final false
  inline int32_t internal_getHierarchyCount();

  /// @brief Method internal_setHierarchyCapacity, addr 0x48ba780, size 0x44, virtual false, abstract: false, final false
  inline void internal_setHierarchyCapacity(int32_t value);

  /// @brief Method set_constrainProportionsScale, addr 0x48ba8f0, size 0x44, virtual false, abstract: false, final false
  inline void set_constrainProportionsScale(bool value);

  /// @brief Method set_eulerAngles, addr 0x48b7844, size 0x30, virtual false, abstract: false, final false
  inline void set_eulerAngles(::UnityEngine::Vector3 value);

  /// @brief Method set_forward, addr 0x48b7c50, size 0x1c, virtual false, abstract: false, final false
  inline void set_forward(::UnityEngine::Vector3 value);

  /// @brief Method set_hasChanged, addr 0x48ba3f8, size 0x44, virtual false, abstract: false, final false
  inline void set_hasChanged(bool value);

  /// @brief Method set_hierarchyCapacity, addr 0x48ba73c, size 0x44, virtual false, abstract: false, final false
  inline void set_hierarchyCapacity(int32_t value);

  /// @brief Method set_localEulerAngles, addr 0x48b7950, size 0x30, virtual false, abstract: false, final false
  inline void set_localEulerAngles(::UnityEngine::Vector3 value);

  /// @brief Method set_localPosition, addr 0x48b66a8, size 0x54, virtual false, abstract: false, final false
  inline void set_localPosition(::UnityEngine::Vector3 value);

  /// @brief Method set_localPosition_Injected, addr 0x48b7578, size 0x44, virtual false, abstract: false, final false
  inline void set_localPosition_Injected(::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_localRotation, addr 0x48b7980, size 0x54, virtual false, abstract: false, final false
  inline void set_localRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_localRotation_Injected, addr 0x48b7d38, size 0x44, virtual false, abstract: false, final false
  inline void set_localRotation_Injected(::ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method set_localScale, addr 0x48b7f1c, size 0x54, virtual false, abstract: false, final false
  inline void set_localScale(::UnityEngine::Vector3 value);

  /// @brief Method set_localScale_Injected, addr 0x48b7f70, size 0x44, virtual false, abstract: false, final false
  inline void set_localScale_Injected(::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_parent, addr 0x48b7ff0, size 0xcc, virtual false, abstract: false, final false
  inline void set_parent(::UnityEngine::Transform* value);

  /// @brief Method set_parentInternal, addr 0x48b80bc, size 0x48, virtual false, abstract: false, final false
  inline void set_parentInternal(::UnityEngine::Transform* value);

  /// @brief Method set_position, addr 0x48b749c, size 0x54, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector3 value);

  /// @brief Method set_position_Injected, addr 0x48b74f0, size 0x44, virtual false, abstract: false, final false
  inline void set_position_Injected(::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_right, addr 0x48b7a50, size 0x84, virtual false, abstract: false, final false
  inline void set_right(::UnityEngine::Vector3 value);

  /// @brief Method set_rotation, addr 0x48b7874, size 0x54, virtual false, abstract: false, final false
  inline void set_rotation(::UnityEngine::Quaternion value);

  /// @brief Method set_rotationOrder, addr 0x48b7df4, size 0x44, virtual false, abstract: false, final false
  inline void set_rotationOrder(::UnityEngine::RotationOrder value);

  /// @brief Method set_rotation_Injected, addr 0x48b7cb0, size 0x44, virtual false, abstract: false, final false
  inline void set_rotation_Injected(::ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method set_up, addr 0x48b7b50, size 0x84, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10958 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Transform, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Transform);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Transform*, "UnityEngine", "Transform");
NEED_NO_BOX(::UnityEngine::Transform_Enumerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Transform_Enumerator*, "UnityEngine", "Transform/Enumerator");
