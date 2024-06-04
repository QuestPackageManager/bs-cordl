#pragma once
// IWYU pragma private; include "UnityEngine/Transform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
class Object;
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
struct Vector3;
}
namespace UnityEngine {
class __Transform__Enumerator;
}
// Forward declare root types
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class __Transform__Enumerator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Transform);
MARK_REF_PTR_T(::UnityEngine::__Transform__Enumerator);
// Type: ::Enumerator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::Transform::Enumerator*
class CORDL_TYPE __Transform__Enumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current))::System::Object* Current;

  /// @brief Field currentIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_currentIndex, put = __cordl_internal_set_currentIndex)) int32_t currentIndex;

  /// @brief Field outer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_outer, put = __cordl_internal_set_outer))::UnityW<::UnityEngine::Transform> outer;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method MoveNext, addr 0x344a834, size 0x60, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::__Transform__Enumerator* New_ctor(::UnityEngine::Transform* outer);

  /// @brief Method Reset, addr 0x344a894, size 0xc, virtual true, abstract: false, final true
  inline void Reset();

  constexpr int32_t const& __cordl_internal_get_currentIndex() const;

  constexpr int32_t& __cordl_internal_get_currentIndex();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_outer() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_outer();

  constexpr void __cordl_internal_set_currentIndex(int32_t value);

  constexpr void __cordl_internal_set_outer(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x344a314, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Transform* outer);

  /// @brief Method get_Current, addr 0x344a7e8, size 0x4c, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Transform__Enumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Transform__Enumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Transform__Enumerator(__Transform__Enumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Transform__Enumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Transform__Enumerator(__Transform__Enumerator const&) = delete;

  /// @brief Field outer, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___outer;

  /// @brief Field currentIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___currentIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__Transform__Enumerator, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__Transform__Enumerator, ___outer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__Transform__Enumerator, ___currentIndex) == 0x18, "Offset mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::Transform
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Transform*
class CORDL_TYPE Transform : public ::UnityEngine::Component {
public:
  // Declarations
  using Enumerator = ::UnityEngine::__Transform__Enumerator;

  __declspec(property(get = get_childCount)) int32_t childCount;

  __declspec(property(get = get_constrainProportionsScale, put = set_constrainProportionsScale)) bool constrainProportionsScale;

  __declspec(property(get = get_eulerAngles, put = set_eulerAngles))::UnityEngine::Vector3 eulerAngles;

  __declspec(property(get = get_forward, put = set_forward))::UnityEngine::Vector3 forward;

  __declspec(property(get = get_hasChanged, put = set_hasChanged)) bool hasChanged;

  __declspec(property(get = get_hierarchyCapacity, put = set_hierarchyCapacity)) int32_t hierarchyCapacity;

  __declspec(property(get = get_hierarchyCount)) int32_t hierarchyCount;

  __declspec(property(get = get_localEulerAngles, put = set_localEulerAngles))::UnityEngine::Vector3 localEulerAngles;

  __declspec(property(get = get_localPosition, put = set_localPosition))::UnityEngine::Vector3 localPosition;

  __declspec(property(get = get_localRotation, put = set_localRotation))::UnityEngine::Quaternion localRotation;

  __declspec(property(get = get_localScale, put = set_localScale))::UnityEngine::Vector3 localScale;

  __declspec(property(get = get_localToWorldMatrix))::UnityEngine::Matrix4x4 localToWorldMatrix;

  __declspec(property(get = get_lossyScale))::UnityEngine::Vector3 lossyScale;

  __declspec(property(get = get_parent, put = set_parent))::UnityW<::UnityEngine::Transform> parent;

  __declspec(property(get = get_parentInternal, put = set_parentInternal))::UnityW<::UnityEngine::Transform> parentInternal;

  __declspec(property(get = get_position, put = set_position))::UnityEngine::Vector3 position;

  __declspec(property(get = get_right, put = set_right))::UnityEngine::Vector3 right;

  __declspec(property(get = get_root))::UnityW<::UnityEngine::Transform> root;

  __declspec(property(get = get_rotation, put = set_rotation))::UnityEngine::Quaternion rotation;

  __declspec(property(get = get_rotationOrder, put = set_rotationOrder))::UnityEngine::RotationOrder rotationOrder;

  __declspec(property(get = get_up, put = set_up))::UnityEngine::Vector3 up;

  __declspec(property(get = get_worldToLocalMatrix))::UnityEngine::Matrix4x4 worldToLocalMatrix;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method DetachChildren, addr 0x3449e90, size 0x3c, virtual false, abstract: false, final false
  inline void DetachChildren();

  /// @brief Method Find, addr 0x344a06c, size 0x98, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> Find(::StringW n);

  /// @brief Method FindChild, addr 0x344a2a4, size 0x4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> FindChild(::StringW n);

  /// @brief Method FindRelativeTransformWithPath, addr 0x344a018, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Transform> FindRelativeTransformWithPath(::UnityEngine::Transform* transform, ::StringW path, bool isActiveOnly);

  /// @brief Method GetChild, addr 0x344a4b4, size 0x44, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetChild(int32_t index);

  /// @brief Method GetChildCount, addr 0x344a4f8, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetChildCount();

  /// @brief Method GetEnumerator, addr 0x344a2a8, size 0x6c, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method GetLocalEulerAngles, addr 0x344815c, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetLocalEulerAngles(::UnityEngine::RotationOrder order);

  /// @brief Method GetLocalEulerAngles_Injected, addr 0x34481c0, size 0x54, virtual false, abstract: false, final false
  inline void GetLocalEulerAngles_Injected(::UnityEngine::RotationOrder order, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetParent, addr 0x3448cb0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetParent();

  /// @brief Method GetRoot, addr 0x3449e18, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetRoot();

  /// @brief Method GetRotationOrderInternal, addr 0x3448928, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetRotationOrderInternal();

  /// @brief Method GetSiblingIndex, addr 0x3449fdc, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetSiblingIndex();

  /// @brief Method Internal_LookAt, addr 0x3449894, size 0x60, virtual false, abstract: false, final false
  inline void Internal_LookAt(::UnityEngine::Vector3 worldPosition, ::UnityEngine::Vector3 worldUp);

  /// @brief Method Internal_LookAt_Injected, addr 0x3449970, size 0x54, virtual false, abstract: false, final false
  inline void Internal_LookAt_Injected(ByRef<::UnityEngine::Vector3> worldPosition, ByRef<::UnityEngine::Vector3> worldUp);

  /// @brief Method InverseTransformDirection, addr 0x3449a1c, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 InverseTransformDirection(::UnityEngine::Vector3 direction);

  /// @brief Method InverseTransformDirection, addr 0x3449ad8, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 InverseTransformDirection(float_t x, float_t y, float_t z);

  /// @brief Method InverseTransformDirection_Injected, addr 0x3449a84, size 0x54, virtual false, abstract: false, final false
  inline void InverseTransformDirection_Injected(ByRef<::UnityEngine::Vector3> direction, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method InverseTransformPoint, addr 0x3449d1c, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 InverseTransformPoint(::UnityEngine::Vector3 position);

  /// @brief Method InverseTransformPoint, addr 0x3449dd8, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 InverseTransformPoint(float_t x, float_t y, float_t z);

  /// @brief Method InverseTransformPoint_Injected, addr 0x3449d84, size 0x54, virtual false, abstract: false, final false
  inline void InverseTransformPoint_Injected(ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method InverseTransformVector, addr 0x3449b9c, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 InverseTransformVector(::UnityEngine::Vector3 vector);

  /// @brief Method InverseTransformVector, addr 0x3449c58, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 InverseTransformVector(float_t x, float_t y, float_t z);

  /// @brief Method InverseTransformVector_Injected, addr 0x3449c04, size 0x54, virtual false, abstract: false, final false
  inline void InverseTransformVector_Injected(ByRef<::UnityEngine::Vector3> vector, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method IsChildOf, addr 0x344a1e0, size 0x44, virtual false, abstract: false, final false
  inline bool IsChildOf(::UnityEngine::Transform* parent);

  /// @brief Method IsConstrainProportionsScale, addr 0x344a724, size 0x3c, virtual false, abstract: false, final false
  inline bool IsConstrainProportionsScale();

  /// @brief Method IsNonUniformScaleTransform, addr 0x344a6ac, size 0x3c, virtual false, abstract: false, final false
  inline bool IsNonUniformScaleTransform();

  /// @brief Method LookAt, addr 0x344979c, size 0xf8, virtual false, abstract: false, final false
  inline void LookAt(::UnityEngine::Transform* target);

  /// @brief Method LookAt, addr 0x34496d8, size 0xc0, virtual false, abstract: false, final false
  inline void LookAt(::UnityEngine::Transform* target, ::UnityEngine::Vector3 worldUp);

  /// @brief Method LookAt, addr 0x34498f4, size 0x7c, virtual false, abstract: false, final false
  inline void LookAt(::UnityEngine::Vector3 worldPosition);

  /// @brief Method LookAt, addr 0x3449798, size 0x4, virtual false, abstract: false, final false
  inline void LookAt(::UnityEngine::Vector3 worldPosition, ::UnityEngine::Vector3 worldUp);

  /// @brief Method MoveAfterSibling, addr 0x3449f88, size 0x54, virtual false, abstract: false, final false
  inline void MoveAfterSibling(::UnityEngine::Transform* transform, bool notifyEditorAndMarkDirty);

  static inline ::UnityEngine::Transform* New_ctor();

  /// @brief Method Rotate, addr 0x3449614, size 0x8, virtual false, abstract: false, final false
  inline void Rotate(::UnityEngine::Vector3 axis, float_t angle);

  /// @brief Method Rotate, addr 0x3449588, size 0x8c, virtual false, abstract: false, final false
  inline void Rotate(::UnityEngine::Vector3 axis, float_t angle, ::UnityEngine::Space relativeTo);

  /// @brief Method Rotate, addr 0x34494bc, size 0x8, virtual false, abstract: false, final false
  inline void Rotate(::UnityEngine::Vector3 eulers);

  /// @brief Method Rotate, addr 0x344923c, size 0x280, virtual false, abstract: false, final false
  inline void Rotate(::UnityEngine::Vector3 eulers, ::UnityEngine::Space relativeTo);

  /// @brief Method Rotate, addr 0x34494c8, size 0x8, virtual false, abstract: false, final false
  inline void Rotate(float_t xAngle, float_t yAngle, float_t zAngle);

  /// @brief Method Rotate, addr 0x34494c4, size 0x4, virtual false, abstract: false, final false
  inline void Rotate(float_t xAngle, float_t yAngle, float_t zAngle, ::UnityEngine::Space relativeTo);

  /// @brief Method RotateAround, addr 0x344a344, size 0x64, virtual false, abstract: false, final false
  inline void RotateAround(::UnityEngine::Vector3 axis, float_t angle);

  /// @brief Method RotateAround, addr 0x344961c, size 0xbc, virtual false, abstract: false, final false
  inline void RotateAround(::UnityEngine::Vector3 point, ::UnityEngine::Vector3 axis, float_t angle);

  /// @brief Method RotateAroundInternal, addr 0x34494d0, size 0x64, virtual false, abstract: false, final false
  inline void RotateAroundInternal(::UnityEngine::Vector3 axis, float_t angle);

  /// @brief Method RotateAroundInternal_Injected, addr 0x3449534, size 0x54, virtual false, abstract: false, final false
  inline void RotateAroundInternal_Injected(ByRef<::UnityEngine::Vector3> axis, float_t angle);

  /// @brief Method RotateAroundLocal, addr 0x344a3fc, size 0x64, virtual false, abstract: false, final false
  inline void RotateAroundLocal(::UnityEngine::Vector3 axis, float_t angle);

  /// @brief Method RotateAroundLocal_Injected, addr 0x344a460, size 0x54, virtual false, abstract: false, final false
  inline void RotateAroundLocal_Injected(ByRef<::UnityEngine::Vector3> axis, float_t angle);

  /// @brief Method RotateAround_Injected, addr 0x344a3a8, size 0x54, virtual false, abstract: false, final false
  inline void RotateAround_Injected(ByRef<::UnityEngine::Vector3> axis, float_t angle);

  /// @brief Method SendTransformChangedScale, addr 0x344a104, size 0x3c, virtual false, abstract: false, final false
  inline void SendTransformChangedScale();

  /// @brief Method SetAsFirstSibling, addr 0x3449ecc, size 0x3c, virtual false, abstract: false, final false
  inline void SetAsFirstSibling();

  /// @brief Method SetAsLastSibling, addr 0x3449f08, size 0x3c, virtual false, abstract: false, final false
  inline void SetAsLastSibling();

  /// @brief Method SetConstrainProportionsScale, addr 0x344a7a4, size 0x44, virtual false, abstract: false, final false
  inline void SetConstrainProportionsScale(bool isLinked);

  /// @brief Method SetLocalEulerAngles, addr 0x3448214, size 0x5c, virtual false, abstract: false, final false
  inline void SetLocalEulerAngles(::UnityEngine::Vector3 euler, ::UnityEngine::RotationOrder order);

  /// @brief Method SetLocalEulerAngles_Injected, addr 0x3448270, size 0x54, virtual false, abstract: false, final false
  inline void SetLocalEulerAngles_Injected(ByRef<::UnityEngine::Vector3> euler, ::UnityEngine::RotationOrder order);

  /// @brief Method SetLocalEulerHint, addr 0x34482c4, size 0x54, virtual false, abstract: false, final false
  inline void SetLocalEulerHint(::UnityEngine::Vector3 euler);

  /// @brief Method SetLocalEulerHint_Injected, addr 0x3448318, size 0x44, virtual false, abstract: false, final false
  inline void SetLocalEulerHint_Injected(ByRef<::UnityEngine::Vector3> euler);

  /// @brief Method SetLocalPositionAndRotation, addr 0x3448f9c, size 0x60, virtual false, abstract: false, final false
  inline void SetLocalPositionAndRotation(::UnityEngine::Vector3 localPosition, ::UnityEngine::Quaternion localRotation);

  /// @brief Method SetLocalPositionAndRotation_Injected, addr 0x3448ffc, size 0x54, virtual false, abstract: false, final false
  inline void SetLocalPositionAndRotation_Injected(ByRef<::UnityEngine::Vector3> localPosition, ByRef<::UnityEngine::Quaternion> localRotation);

  /// @brief Method SetParent, addr 0x3448cec, size 0x48, virtual false, abstract: false, final false
  inline void SetParent(::UnityEngine::Transform* p);

  /// @brief Method SetParent, addr 0x3448d34, size 0x54, virtual false, abstract: false, final false
  inline void SetParent(::UnityEngine::Transform* parent, bool worldPositionStays);

  /// @brief Method SetPositionAndRotation, addr 0x3448ee8, size 0x60, virtual false, abstract: false, final false
  inline void SetPositionAndRotation(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method SetPositionAndRotation_Injected, addr 0x3448f48, size 0x54, virtual false, abstract: false, final false
  inline void SetPositionAndRotation_Injected(ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Quaternion> rotation);

  /// @brief Method SetRotationOrderInternal, addr 0x34489a8, size 0x44, virtual false, abstract: false, final false
  inline void SetRotationOrderInternal(::UnityEngine::RotationOrder rotationOrder);

  /// @brief Method SetSiblingIndex, addr 0x3449f44, size 0x44, virtual false, abstract: false, final false
  inline void SetSiblingIndex(int32_t index);

  /// @brief Method TransformDirection, addr 0x34490d8, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 TransformDirection(::UnityEngine::Vector3 direction);

  /// @brief Method TransformDirection, addr 0x3449a18, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 TransformDirection(float_t x, float_t y, float_t z);

  /// @brief Method TransformDirection_Injected, addr 0x34499c4, size 0x54, virtual false, abstract: false, final false
  inline void TransformDirection_Injected(ByRef<::UnityEngine::Vector3> direction, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method TransformPoint, addr 0x3449c5c, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 TransformPoint(::UnityEngine::Vector3 position);

  /// @brief Method TransformPoint, addr 0x3449d18, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 TransformPoint(float_t x, float_t y, float_t z);

  /// @brief Method TransformPoint_Injected, addr 0x3449cc4, size 0x54, virtual false, abstract: false, final false
  inline void TransformPoint_Injected(ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method TransformVector, addr 0x3449adc, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 TransformVector(::UnityEngine::Vector3 vector);

  /// @brief Method TransformVector, addr 0x3449b98, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 TransformVector(float_t x, float_t y, float_t z);

  /// @brief Method TransformVector_Injected, addr 0x3449b44, size 0x54, virtual false, abstract: false, final false
  inline void TransformVector_Injected(ByRef<::UnityEngine::Vector3> vector, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method Translate, addr 0x3449140, size 0x8, virtual false, abstract: false, final false
  inline void Translate(::UnityEngine::Vector3 translation);

  /// @brief Method Translate, addr 0x3449050, size 0x88, virtual false, abstract: false, final false
  inline void Translate(::UnityEngine::Vector3 translation, ::UnityEngine::Space relativeTo);

  /// @brief Method Translate, addr 0x3449154, size 0xe4, virtual false, abstract: false, final false
  inline void Translate(::UnityEngine::Vector3 translation, ::UnityEngine::Transform* relativeTo);

  /// @brief Method Translate, addr 0x344914c, size 0x8, virtual false, abstract: false, final false
  inline void Translate(float_t x, float_t y, float_t z);

  /// @brief Method Translate, addr 0x3449148, size 0x4, virtual false, abstract: false, final false
  inline void Translate(float_t x, float_t y, float_t z, ::UnityEngine::Space relativeTo);

  /// @brief Method Translate, addr 0x3449238, size 0x4, virtual false, abstract: false, final false
  inline void Translate(float_t x, float_t y, float_t z, ::UnityEngine::Transform* relativeTo);

  /// @brief Method .ctor, addr 0x3447ee4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_childCount, addr 0x3449e54, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_childCount();

  /// @brief Method get_constrainProportionsScale, addr 0x344a6e8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_constrainProportionsScale();

  /// @brief Method get_eulerAngles, addr 0x344835c, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_eulerAngles();

  /// @brief Method get_forward, addr 0x344874c, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_forward();

  /// @brief Method get_hasChanged, addr 0x344a224, size 0x3c, virtual false, abstract: false, final false
  inline bool get_hasChanged();

  /// @brief Method get_hierarchyCapacity, addr 0x344a534, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_hierarchyCapacity();

  /// @brief Method get_hierarchyCount, addr 0x344a634, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_hierarchyCount();

  /// @brief Method get_localEulerAngles, addr 0x344845c, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_localEulerAngles();

  /// @brief Method get_localPosition, addr 0x3448024, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_localPosition();

  /// @brief Method get_localPosition_Injected, addr 0x3448080, size 0x44, virtual false, abstract: false, final false
  inline void get_localPosition_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_localRotation, addr 0x3448484, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_localRotation();

  /// @brief Method get_localRotation_Injected, addr 0x3448864, size 0x44, virtual false, abstract: false, final false
  inline void get_localRotation_Injected(ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method get_localScale, addr 0x34489ec, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_localScale();

  /// @brief Method get_localScale_Injected, addr 0x3448a48, size 0x44, virtual false, abstract: false, final false
  inline void get_localScale_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_localToWorldMatrix, addr 0x3448e38, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_localToWorldMatrix();

  /// @brief Method get_localToWorldMatrix_Injected, addr 0x3448ea4, size 0x44, virtual false, abstract: false, final false
  inline void get_localToWorldMatrix_Injected(ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method get_lossyScale, addr 0x344a140, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_lossyScale();

  /// @brief Method get_lossyScale_Injected, addr 0x344a19c, size 0x44, virtual false, abstract: false, final false
  inline void get_lossyScale_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_parent, addr 0x3448b24, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_parent();

  /// @brief Method get_parentInternal, addr 0x3448b60, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_parentInternal();

  /// @brief Method get_position, addr 0x3447eec, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method get_position_Injected, addr 0x3447f48, size 0x44, virtual false, abstract: false, final false
  inline void get_position_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_right, addr 0x344855c, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_right();

  /// @brief Method get_root, addr 0x3449ddc, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_root();

  /// @brief Method get_rotation, addr 0x3448384, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rotation();

  /// @brief Method get_rotationOrder, addr 0x34488ec, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::RotationOrder get_rotationOrder();

  /// @brief Method get_rotation_Injected, addr 0x34487dc, size 0x44, virtual false, abstract: false, final false
  inline void get_rotation_Injected(ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method get_up, addr 0x3448654, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_up();

  /// @brief Method get_worldToLocalMatrix, addr 0x3448d88, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_worldToLocalMatrix();

  /// @brief Method get_worldToLocalMatrix_Injected, addr 0x3448df4, size 0x44, virtual false, abstract: false, final false
  inline void get_worldToLocalMatrix_Injected(ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method internal_getHierarchyCapacity, addr 0x344a570, size 0x3c, virtual false, abstract: false, final false
  inline int32_t internal_getHierarchyCapacity();

  /// @brief Method internal_getHierarchyCount, addr 0x344a670, size 0x3c, virtual false, abstract: false, final false
  inline int32_t internal_getHierarchyCount();

  /// @brief Method internal_setHierarchyCapacity, addr 0x344a5f0, size 0x44, virtual false, abstract: false, final false
  inline void internal_setHierarchyCapacity(int32_t value);

  /// @brief Method set_constrainProportionsScale, addr 0x344a760, size 0x44, virtual false, abstract: false, final false
  inline void set_constrainProportionsScale(bool value);

  /// @brief Method set_eulerAngles, addr 0x34483dc, size 0x2c, virtual false, abstract: false, final false
  inline void set_eulerAngles(::UnityEngine::Vector3 value);

  /// @brief Method set_forward, addr 0x34487c4, size 0x18, virtual false, abstract: false, final false
  inline void set_forward(::UnityEngine::Vector3 value);

  /// @brief Method set_hasChanged, addr 0x344a260, size 0x44, virtual false, abstract: false, final false
  inline void set_hasChanged(bool value);

  /// @brief Method set_hierarchyCapacity, addr 0x344a5ac, size 0x44, virtual false, abstract: false, final false
  inline void set_hierarchyCapacity(int32_t value);

  /// @brief Method set_localEulerAngles, addr 0x34484dc, size 0x2c, virtual false, abstract: false, final false
  inline void set_localEulerAngles(::UnityEngine::Vector3 value);

  /// @brief Method set_localPosition, addr 0x34480c4, size 0x54, virtual false, abstract: false, final false
  inline void set_localPosition(::UnityEngine::Vector3 value);

  /// @brief Method set_localPosition_Injected, addr 0x3448118, size 0x44, virtual false, abstract: false, final false
  inline void set_localPosition_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_localRotation, addr 0x3448508, size 0x54, virtual false, abstract: false, final false
  inline void set_localRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_localRotation_Injected, addr 0x34488a8, size 0x44, virtual false, abstract: false, final false
  inline void set_localRotation_Injected(ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method set_localScale, addr 0x3448a8c, size 0x54, virtual false, abstract: false, final false
  inline void set_localScale(::UnityEngine::Vector3 value);

  /// @brief Method set_localScale_Injected, addr 0x3448ae0, size 0x44, virtual false, abstract: false, final false
  inline void set_localScale_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_parent, addr 0x3448b9c, size 0xcc, virtual false, abstract: false, final false
  inline void set_parent(::UnityEngine::Transform* value);

  /// @brief Method set_parentInternal, addr 0x3448c68, size 0x48, virtual false, abstract: false, final false
  inline void set_parentInternal(::UnityEngine::Transform* value);

  /// @brief Method set_position, addr 0x3447f8c, size 0x54, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector3 value);

  /// @brief Method set_position_Injected, addr 0x3447fe0, size 0x44, virtual false, abstract: false, final false
  inline void set_position_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_right, addr 0x34485d4, size 0x80, virtual false, abstract: false, final false
  inline void set_right(::UnityEngine::Vector3 value);

  /// @brief Method set_rotation, addr 0x3448408, size 0x54, virtual false, abstract: false, final false
  inline void set_rotation(::UnityEngine::Quaternion value);

  /// @brief Method set_rotationOrder, addr 0x3448964, size 0x44, virtual false, abstract: false, final false
  inline void set_rotationOrder(::UnityEngine::RotationOrder value);

  /// @brief Method set_rotation_Injected, addr 0x3448820, size 0x44, virtual false, abstract: false, final false
  inline void set_rotation_Injected(ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method set_up, addr 0x34486cc, size 0x80, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Transform, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Transform);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Transform*, "UnityEngine", "Transform");
NEED_NO_BOX(::UnityEngine::__Transform__Enumerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Transform__Enumerator*, "UnityEngine", "Transform/Enumerator");
