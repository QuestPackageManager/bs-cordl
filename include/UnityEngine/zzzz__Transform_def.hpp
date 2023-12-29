#pragma once
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
namespace UnityEngine {
struct RotationOrder;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class __Transform__Enumerator;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Quaternion;
}
namespace System::Collections {
class IEnumerable;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Space;
}
namespace System {
class Object;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10202))
// CS Name: ::Transform::Enumerator*
class CORDL_TYPE __Transform__Enumerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field outer, offset 0x10, size 0x8
  __declspec(property(get = __get_outer, put = __set_outer))::UnityEngine::Transform* outer;

  /// @brief Field currentIndex, offset 0x18, size 0x4
  __declspec(property(get = __get_currentIndex, put = __set_currentIndex)) int32_t currentIndex;

  __declspec(property(get = get_Current))::System::Object* Current;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  constexpr ::UnityEngine::Transform*& __get_outer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_outer() const;

  constexpr void __set_outer(::UnityEngine::Transform* value);

  constexpr int32_t& __get_currentIndex();

  constexpr int32_t const& __get_currentIndex() const;

  constexpr void __set_currentIndex(int32_t value);

  static inline ::UnityEngine::__Transform__Enumerator* New_ctor(::UnityEngine::Transform* outer);

  /// @brief Method .ctor addr 0x2b7c9b0 size 0x30 virtual false final false
  inline void _ctor(::UnityEngine::Transform* outer);

  /// @brief Method get_Current addr 0x2b7ce84 size 0x4c virtual true final true
  inline ::System::Object* get_Current();

  /// @brief Method MoveNext addr 0x2b7ced0 size 0x60 virtual true final true
  inline bool MoveNext();

  /// @brief Method Reset addr 0x2b7cf30 size 0xc virtual true final true
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "__Transform__Enumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Transform__Enumerator(__Transform__Enumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Transform__Enumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Transform__Enumerator(__Transform__Enumerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Transform__Enumerator();

public:
  /// @brief Field outer, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Transform* ___outer;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10165))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10203))
// CS Name: ::UnityEngine::Transform*
class CORDL_TYPE Transform : public ::UnityEngine::Component {
public:
  // Declarations
  using Enumerator = ::UnityEngine::__Transform__Enumerator;

  __declspec(property(get = get_position, put = set_position))::UnityEngine::Vector3 position;

  __declspec(property(get = get_localPosition, put = set_localPosition))::UnityEngine::Vector3 localPosition;

  __declspec(property(get = get_eulerAngles, put = set_eulerAngles))::UnityEngine::Vector3 eulerAngles;

  __declspec(property(get = get_localEulerAngles, put = set_localEulerAngles))::UnityEngine::Vector3 localEulerAngles;

  __declspec(property(get = get_right, put = set_right))::UnityEngine::Vector3 right;

  __declspec(property(get = get_up, put = set_up))::UnityEngine::Vector3 up;

  __declspec(property(get = get_forward, put = set_forward))::UnityEngine::Vector3 forward;

  __declspec(property(get = get_rotation, put = set_rotation))::UnityEngine::Quaternion rotation;

  __declspec(property(get = get_localRotation, put = set_localRotation))::UnityEngine::Quaternion localRotation;

  __declspec(property(get = get_rotationOrder, put = set_rotationOrder))::UnityEngine::RotationOrder rotationOrder;

  __declspec(property(get = get_localScale, put = set_localScale))::UnityEngine::Vector3 localScale;

  __declspec(property(get = get_parent, put = set_parent))::UnityEngine::Transform* parent;

  __declspec(property(get = get_parentInternal, put = set_parentInternal))::UnityEngine::Transform* parentInternal;

  __declspec(property(get = get_worldToLocalMatrix))::UnityEngine::Matrix4x4 worldToLocalMatrix;

  __declspec(property(get = get_localToWorldMatrix))::UnityEngine::Matrix4x4 localToWorldMatrix;

  __declspec(property(get = get_root))::UnityEngine::Transform* root;

  __declspec(property(get = get_childCount)) int32_t childCount;

  __declspec(property(get = get_lossyScale))::UnityEngine::Vector3 lossyScale;

  __declspec(property(get = get_hasChanged, put = set_hasChanged)) bool hasChanged;

  __declspec(property(get = get_hierarchyCapacity, put = set_hierarchyCapacity)) int32_t hierarchyCapacity;

  __declspec(property(get = get_hierarchyCount)) int32_t hierarchyCount;

  __declspec(property(get = get_constrainProportionsScale, put = set_constrainProportionsScale)) bool constrainProportionsScale;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  static inline ::UnityEngine::Transform* New_ctor();

  /// @brief Method .ctor addr 0x2b7a580 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method get_position addr 0x2b7a588 size 0x5c virtual false final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method set_position addr 0x2b7a628 size 0x54 virtual false final false
  inline void set_position(::UnityEngine::Vector3 value);

  /// @brief Method get_localPosition addr 0x2b7a6c0 size 0x5c virtual false final false
  inline ::UnityEngine::Vector3 get_localPosition();

  /// @brief Method set_localPosition addr 0x2b7a760 size 0x54 virtual false final false
  inline void set_localPosition(::UnityEngine::Vector3 value);

  /// @brief Method GetLocalEulerAngles addr 0x2b7a7f8 size 0x64 virtual false final false
  inline ::UnityEngine::Vector3 GetLocalEulerAngles(::UnityEngine::RotationOrder order);

  /// @brief Method SetLocalEulerAngles addr 0x2b7a8b0 size 0x5c virtual false final false
  inline void SetLocalEulerAngles(::UnityEngine::Vector3 euler, ::UnityEngine::RotationOrder order);

  /// @brief Method SetLocalEulerHint addr 0x2b7a960 size 0x54 virtual false final false
  inline void SetLocalEulerHint(::UnityEngine::Vector3 euler);

  /// @brief Method get_eulerAngles addr 0x2b7a9f8 size 0x28 virtual false final false
  inline ::UnityEngine::Vector3 get_eulerAngles();

  /// @brief Method set_eulerAngles addr 0x2b7aa78 size 0x2c virtual false final false
  inline void set_eulerAngles(::UnityEngine::Vector3 value);

  /// @brief Method get_localEulerAngles addr 0x2b7aaf8 size 0x28 virtual false final false
  inline ::UnityEngine::Vector3 get_localEulerAngles();

  /// @brief Method set_localEulerAngles addr 0x2b7ab78 size 0x2c virtual false final false
  inline void set_localEulerAngles(::UnityEngine::Vector3 value);

  /// @brief Method get_right addr 0x2b7abf8 size 0x78 virtual false final false
  inline ::UnityEngine::Vector3 get_right();

  /// @brief Method set_right addr 0x2b7ac70 size 0x80 virtual false final false
  inline void set_right(::UnityEngine::Vector3 value);

  /// @brief Method get_up addr 0x2b7acf0 size 0x78 virtual false final false
  inline ::UnityEngine::Vector3 get_up();

  /// @brief Method set_up addr 0x2b7ad68 size 0x80 virtual false final false
  inline void set_up(::UnityEngine::Vector3 value);

  /// @brief Method get_forward addr 0x2b7ade8 size 0x78 virtual false final false
  inline ::UnityEngine::Vector3 get_forward();

  /// @brief Method set_forward addr 0x2b7ae60 size 0x18 virtual false final false
  inline void set_forward(::UnityEngine::Vector3 value);

  /// @brief Method get_rotation addr 0x2b7aa20 size 0x58 virtual false final false
  inline ::UnityEngine::Quaternion get_rotation();

  /// @brief Method set_rotation addr 0x2b7aaa4 size 0x54 virtual false final false
  inline void set_rotation(::UnityEngine::Quaternion value);

  /// @brief Method get_localRotation addr 0x2b7ab20 size 0x58 virtual false final false
  inline ::UnityEngine::Quaternion get_localRotation();

  /// @brief Method set_localRotation addr 0x2b7aba4 size 0x54 virtual false final false
  inline void set_localRotation(::UnityEngine::Quaternion value);

  /// @brief Method get_rotationOrder addr 0x2b7af88 size 0x3c virtual false final false
  inline ::UnityEngine::RotationOrder get_rotationOrder();

  /// @brief Method set_rotationOrder addr 0x2b7b000 size 0x44 virtual false final false
  inline void set_rotationOrder(::UnityEngine::RotationOrder value);

  /// @brief Method GetRotationOrderInternal addr 0x2b7afc4 size 0x3c virtual false final false
  inline int32_t GetRotationOrderInternal();

  /// @brief Method SetRotationOrderInternal addr 0x2b7b044 size 0x44 virtual false final false
  inline void SetRotationOrderInternal(::UnityEngine::RotationOrder rotationOrder);

  /// @brief Method get_localScale addr 0x2b7b088 size 0x5c virtual false final false
  inline ::UnityEngine::Vector3 get_localScale();

  /// @brief Method set_localScale addr 0x2b7b128 size 0x54 virtual false final false
  inline void set_localScale(::UnityEngine::Vector3 value);

  /// @brief Method get_parent addr 0x2b7b1c0 size 0x3c virtual false final false
  inline ::UnityEngine::Transform* get_parent();

  /// @brief Method set_parent addr 0x2b7b238 size 0xcc virtual false final false
  inline void set_parent(::UnityEngine::Transform* value);

  /// @brief Method get_parentInternal addr 0x2b7b1fc size 0x3c virtual false final false
  inline ::UnityEngine::Transform* get_parentInternal();

  /// @brief Method set_parentInternal addr 0x2b7b304 size 0x48 virtual false final false
  inline void set_parentInternal(::UnityEngine::Transform* value);

  /// @brief Method GetParent addr 0x2b7b34c size 0x3c virtual false final false
  inline ::UnityEngine::Transform* GetParent();

  /// @brief Method SetParent addr 0x2b7b388 size 0x48 virtual false final false
  inline void SetParent(::UnityEngine::Transform* p);

  /// @brief Method SetParent addr 0x2b7b3d0 size 0x54 virtual false final false
  inline void SetParent(::UnityEngine::Transform* parent, bool worldPositionStays);

  /// @brief Method get_worldToLocalMatrix addr 0x2b7b424 size 0x6c virtual false final false
  inline ::UnityEngine::Matrix4x4 get_worldToLocalMatrix();

  /// @brief Method get_localToWorldMatrix addr 0x2b7b4d4 size 0x6c virtual false final false
  inline ::UnityEngine::Matrix4x4 get_localToWorldMatrix();

  /// @brief Method SetPositionAndRotation addr 0x2b7b584 size 0x60 virtual false final false
  inline void SetPositionAndRotation(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method SetLocalPositionAndRotation addr 0x2b7b638 size 0x60 virtual false final false
  inline void SetLocalPositionAndRotation(::UnityEngine::Vector3 localPosition, ::UnityEngine::Quaternion localRotation);

  /// @brief Method Translate addr 0x2b7b6ec size 0x88 virtual false final false
  inline void Translate(::UnityEngine::Vector3 translation, ::UnityEngine::Space relativeTo);

  /// @brief Method Translate addr 0x2b7b7dc size 0x8 virtual false final false
  inline void Translate(::UnityEngine::Vector3 translation);

  /// @brief Method Translate addr 0x2b7b7e4 size 0x4 virtual false final false
  inline void Translate(float_t x, float_t y, float_t z, ::UnityEngine::Space relativeTo);

  /// @brief Method Translate addr 0x2b7b7e8 size 0x8 virtual false final false
  inline void Translate(float_t x, float_t y, float_t z);

  /// @brief Method Translate addr 0x2b7b7f0 size 0xe4 virtual false final false
  inline void Translate(::UnityEngine::Vector3 translation, ::UnityEngine::Transform* relativeTo);

  /// @brief Method Translate addr 0x2b7b8d4 size 0x4 virtual false final false
  inline void Translate(float_t x, float_t y, float_t z, ::UnityEngine::Transform* relativeTo);

  /// @brief Method Rotate addr 0x2b7b8d8 size 0x280 virtual false final false
  inline void Rotate(::UnityEngine::Vector3 eulers, ::UnityEngine::Space relativeTo);

  /// @brief Method Rotate addr 0x2b7bb58 size 0x8 virtual false final false
  inline void Rotate(::UnityEngine::Vector3 eulers);

  /// @brief Method Rotate addr 0x2b7bb60 size 0x4 virtual false final false
  inline void Rotate(float_t xAngle, float_t yAngle, float_t zAngle, ::UnityEngine::Space relativeTo);

  /// @brief Method Rotate addr 0x2b7bb64 size 0x8 virtual false final false
  inline void Rotate(float_t xAngle, float_t yAngle, float_t zAngle);

  /// @brief Method RotateAroundInternal addr 0x2b7bb6c size 0x64 virtual false final false
  inline void RotateAroundInternal(::UnityEngine::Vector3 axis, float_t angle);

  /// @brief Method Rotate addr 0x2b7bc24 size 0x8c virtual false final false
  inline void Rotate(::UnityEngine::Vector3 axis, float_t angle, ::UnityEngine::Space relativeTo);

  /// @brief Method Rotate addr 0x2b7bcb0 size 0x8 virtual false final false
  inline void Rotate(::UnityEngine::Vector3 axis, float_t angle);

  /// @brief Method RotateAround addr 0x2b7bcb8 size 0xbc virtual false final false
  inline void RotateAround(::UnityEngine::Vector3 point, ::UnityEngine::Vector3 axis, float_t angle);

  /// @brief Method LookAt addr 0x2b7bd74 size 0xc0 virtual false final false
  inline void LookAt(::UnityEngine::Transform* target, ::UnityEngine::Vector3 worldUp);

  /// @brief Method LookAt addr 0x2b7be38 size 0xf8 virtual false final false
  inline void LookAt(::UnityEngine::Transform* target);

  /// @brief Method LookAt addr 0x2b7be34 size 0x4 virtual false final false
  inline void LookAt(::UnityEngine::Vector3 worldPosition, ::UnityEngine::Vector3 worldUp);

  /// @brief Method LookAt addr 0x2b7bf90 size 0x7c virtual false final false
  inline void LookAt(::UnityEngine::Vector3 worldPosition);

  /// @brief Method Internal_LookAt addr 0x2b7bf30 size 0x60 virtual false final false
  inline void Internal_LookAt(::UnityEngine::Vector3 worldPosition, ::UnityEngine::Vector3 worldUp);

  /// @brief Method TransformDirection addr 0x2b7b774 size 0x68 virtual false final false
  inline ::UnityEngine::Vector3 TransformDirection(::UnityEngine::Vector3 direction);

  /// @brief Method TransformDirection addr 0x2b7c0b4 size 0x4 virtual false final false
  inline ::UnityEngine::Vector3 TransformDirection(float_t x, float_t y, float_t z);

  /// @brief Method InverseTransformDirection addr 0x2b7c0b8 size 0x68 virtual false final false
  inline ::UnityEngine::Vector3 InverseTransformDirection(::UnityEngine::Vector3 direction);

  /// @brief Method InverseTransformDirection addr 0x2b7c174 size 0x4 virtual false final false
  inline ::UnityEngine::Vector3 InverseTransformDirection(float_t x, float_t y, float_t z);

  /// @brief Method TransformVector addr 0x2b7c178 size 0x68 virtual false final false
  inline ::UnityEngine::Vector3 TransformVector(::UnityEngine::Vector3 vector);

  /// @brief Method TransformVector addr 0x2b7c234 size 0x4 virtual false final false
  inline ::UnityEngine::Vector3 TransformVector(float_t x, float_t y, float_t z);

  /// @brief Method InverseTransformVector addr 0x2b7c238 size 0x68 virtual false final false
  inline ::UnityEngine::Vector3 InverseTransformVector(::UnityEngine::Vector3 vector);

  /// @brief Method InverseTransformVector addr 0x2b7c2f4 size 0x4 virtual false final false
  inline ::UnityEngine::Vector3 InverseTransformVector(float_t x, float_t y, float_t z);

  /// @brief Method TransformPoint addr 0x2b7c2f8 size 0x68 virtual false final false
  inline ::UnityEngine::Vector3 TransformPoint(::UnityEngine::Vector3 position);

  /// @brief Method TransformPoint addr 0x2b7c3b4 size 0x4 virtual false final false
  inline ::UnityEngine::Vector3 TransformPoint(float_t x, float_t y, float_t z);

  /// @brief Method InverseTransformPoint addr 0x2b7c3b8 size 0x68 virtual false final false
  inline ::UnityEngine::Vector3 InverseTransformPoint(::UnityEngine::Vector3 position);

  /// @brief Method InverseTransformPoint addr 0x2b7c474 size 0x4 virtual false final false
  inline ::UnityEngine::Vector3 InverseTransformPoint(float_t x, float_t y, float_t z);

  /// @brief Method get_root addr 0x2b7c478 size 0x3c virtual false final false
  inline ::UnityEngine::Transform* get_root();

  /// @brief Method GetRoot addr 0x2b7c4b4 size 0x3c virtual false final false
  inline ::UnityEngine::Transform* GetRoot();

  /// @brief Method get_childCount addr 0x2b7c4f0 size 0x3c virtual false final false
  inline int32_t get_childCount();

  /// @brief Method DetachChildren addr 0x2b7c52c size 0x3c virtual false final false
  inline void DetachChildren();

  /// @brief Method SetAsFirstSibling addr 0x2b7c568 size 0x3c virtual false final false
  inline void SetAsFirstSibling();

  /// @brief Method SetAsLastSibling addr 0x2b7c5a4 size 0x3c virtual false final false
  inline void SetAsLastSibling();

  /// @brief Method SetSiblingIndex addr 0x2b7c5e0 size 0x44 virtual false final false
  inline void SetSiblingIndex(int32_t index);

  /// @brief Method MoveAfterSibling addr 0x2b7c624 size 0x54 virtual false final false
  inline void MoveAfterSibling(::UnityEngine::Transform* transform, bool notifyEditorAndMarkDirty);

  /// @brief Method GetSiblingIndex addr 0x2b7c678 size 0x3c virtual false final false
  inline int32_t GetSiblingIndex();

  /// @brief Method FindRelativeTransformWithPath addr 0x2b7c6b4 size 0x54 virtual false final false
  static inline ::UnityEngine::Transform* FindRelativeTransformWithPath(::UnityEngine::Transform* transform, ::StringW path, bool isActiveOnly);

  /// @brief Method Find addr 0x2b7c708 size 0x98 virtual false final false
  inline ::UnityEngine::Transform* Find(::StringW n);

  /// @brief Method SendTransformChangedScale addr 0x2b7c7a0 size 0x3c virtual false final false
  inline void SendTransformChangedScale();

  /// @brief Method get_lossyScale addr 0x2b7c7dc size 0x5c virtual false final false
  inline ::UnityEngine::Vector3 get_lossyScale();

  /// @brief Method IsChildOf addr 0x2b7c87c size 0x44 virtual false final false
  inline bool IsChildOf(::UnityEngine::Transform* parent);

  /// @brief Method get_hasChanged addr 0x2b7c8c0 size 0x3c virtual false final false
  inline bool get_hasChanged();

  /// @brief Method set_hasChanged addr 0x2b7c8fc size 0x44 virtual false final false
  inline void set_hasChanged(bool value);

  /// @brief Method FindChild addr 0x2b7c940 size 0x4 virtual false final false
  inline ::UnityEngine::Transform* FindChild(::StringW n);

  /// @brief Method GetEnumerator addr 0x2b7c944 size 0x6c virtual true final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method RotateAround addr 0x2b7c9e0 size 0x64 virtual false final false
  inline void RotateAround(::UnityEngine::Vector3 axis, float_t angle);

  /// @brief Method RotateAroundLocal addr 0x2b7ca98 size 0x64 virtual false final false
  inline void RotateAroundLocal(::UnityEngine::Vector3 axis, float_t angle);

  /// @brief Method GetChild addr 0x2b7cb50 size 0x44 virtual false final false
  inline ::UnityEngine::Transform* GetChild(int32_t index);

  /// @brief Method GetChildCount addr 0x2b7cb94 size 0x3c virtual false final false
  inline int32_t GetChildCount();

  /// @brief Method get_hierarchyCapacity addr 0x2b7cbd0 size 0x3c virtual false final false
  inline int32_t get_hierarchyCapacity();

  /// @brief Method set_hierarchyCapacity addr 0x2b7cc48 size 0x44 virtual false final false
  inline void set_hierarchyCapacity(int32_t value);

  /// @brief Method internal_getHierarchyCapacity addr 0x2b7cc0c size 0x3c virtual false final false
  inline int32_t internal_getHierarchyCapacity();

  /// @brief Method internal_setHierarchyCapacity addr 0x2b7cc8c size 0x44 virtual false final false
  inline void internal_setHierarchyCapacity(int32_t value);

  /// @brief Method get_hierarchyCount addr 0x2b7ccd0 size 0x3c virtual false final false
  inline int32_t get_hierarchyCount();

  /// @brief Method internal_getHierarchyCount addr 0x2b7cd0c size 0x3c virtual false final false
  inline int32_t internal_getHierarchyCount();

  /// @brief Method IsNonUniformScaleTransform addr 0x2b7cd48 size 0x3c virtual false final false
  inline bool IsNonUniformScaleTransform();

  /// @brief Method get_constrainProportionsScale addr 0x2b7cd84 size 0x3c virtual false final false
  inline bool get_constrainProportionsScale();

  /// @brief Method set_constrainProportionsScale addr 0x2b7cdfc size 0x44 virtual false final false
  inline void set_constrainProportionsScale(bool value);

  /// @brief Method SetConstrainProportionsScale addr 0x2b7ce40 size 0x44 virtual false final false
  inline void SetConstrainProportionsScale(bool isLinked);

  /// @brief Method IsConstrainProportionsScale addr 0x2b7cdc0 size 0x3c virtual false final false
  inline bool IsConstrainProportionsScale();

  /// @brief Method get_position_Injected addr 0x2b7a5e4 size 0x44 virtual false final false
  inline void get_position_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_position_Injected addr 0x2b7a67c size 0x44 virtual false final false
  inline void set_position_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method get_localPosition_Injected addr 0x2b7a71c size 0x44 virtual false final false
  inline void get_localPosition_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_localPosition_Injected addr 0x2b7a7b4 size 0x44 virtual false final false
  inline void set_localPosition_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method GetLocalEulerAngles_Injected addr 0x2b7a85c size 0x54 virtual false final false
  inline void GetLocalEulerAngles_Injected(::UnityEngine::RotationOrder order, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method SetLocalEulerAngles_Injected addr 0x2b7a90c size 0x54 virtual false final false
  inline void SetLocalEulerAngles_Injected(ByRef<::UnityEngine::Vector3> euler, ::UnityEngine::RotationOrder order);

  /// @brief Method SetLocalEulerHint_Injected addr 0x2b7a9b4 size 0x44 virtual false final false
  inline void SetLocalEulerHint_Injected(ByRef<::UnityEngine::Vector3> euler);

  /// @brief Method get_rotation_Injected addr 0x2b7ae78 size 0x44 virtual false final false
  inline void get_rotation_Injected(ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method set_rotation_Injected addr 0x2b7aebc size 0x44 virtual false final false
  inline void set_rotation_Injected(ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method get_localRotation_Injected addr 0x2b7af00 size 0x44 virtual false final false
  inline void get_localRotation_Injected(ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method set_localRotation_Injected addr 0x2b7af44 size 0x44 virtual false final false
  inline void set_localRotation_Injected(ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method get_localScale_Injected addr 0x2b7b0e4 size 0x44 virtual false final false
  inline void get_localScale_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_localScale_Injected addr 0x2b7b17c size 0x44 virtual false final false
  inline void set_localScale_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method get_worldToLocalMatrix_Injected addr 0x2b7b490 size 0x44 virtual false final false
  inline void get_worldToLocalMatrix_Injected(ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method get_localToWorldMatrix_Injected addr 0x2b7b540 size 0x44 virtual false final false
  inline void get_localToWorldMatrix_Injected(ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method SetPositionAndRotation_Injected addr 0x2b7b5e4 size 0x54 virtual false final false
  inline void SetPositionAndRotation_Injected(ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Quaternion> rotation);

  /// @brief Method SetLocalPositionAndRotation_Injected addr 0x2b7b698 size 0x54 virtual false final false
  inline void SetLocalPositionAndRotation_Injected(ByRef<::UnityEngine::Vector3> localPosition, ByRef<::UnityEngine::Quaternion> localRotation);

  /// @brief Method RotateAroundInternal_Injected addr 0x2b7bbd0 size 0x54 virtual false final false
  inline void RotateAroundInternal_Injected(ByRef<::UnityEngine::Vector3> axis, float_t angle);

  /// @brief Method Internal_LookAt_Injected addr 0x2b7c00c size 0x54 virtual false final false
  inline void Internal_LookAt_Injected(ByRef<::UnityEngine::Vector3> worldPosition, ByRef<::UnityEngine::Vector3> worldUp);

  /// @brief Method TransformDirection_Injected addr 0x2b7c060 size 0x54 virtual false final false
  inline void TransformDirection_Injected(ByRef<::UnityEngine::Vector3> direction, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method InverseTransformDirection_Injected addr 0x2b7c120 size 0x54 virtual false final false
  inline void InverseTransformDirection_Injected(ByRef<::UnityEngine::Vector3> direction, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method TransformVector_Injected addr 0x2b7c1e0 size 0x54 virtual false final false
  inline void TransformVector_Injected(ByRef<::UnityEngine::Vector3> vector, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method InverseTransformVector_Injected addr 0x2b7c2a0 size 0x54 virtual false final false
  inline void InverseTransformVector_Injected(ByRef<::UnityEngine::Vector3> vector, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method TransformPoint_Injected addr 0x2b7c360 size 0x54 virtual false final false
  inline void TransformPoint_Injected(ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method InverseTransformPoint_Injected addr 0x2b7c420 size 0x54 virtual false final false
  inline void InverseTransformPoint_Injected(ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_lossyScale_Injected addr 0x2b7c838 size 0x44 virtual false final false
  inline void get_lossyScale_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method RotateAround_Injected addr 0x2b7ca44 size 0x54 virtual false final false
  inline void RotateAround_Injected(ByRef<::UnityEngine::Vector3> axis, float_t angle);

  /// @brief Method RotateAroundLocal_Injected addr 0x2b7cafc size 0x54 virtual false final false
  inline void RotateAroundLocal_Injected(ByRef<::UnityEngine::Vector3> axis, float_t angle);

  // Ctor Parameters [CppParam { name: "", ty: "Transform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Transform(Transform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Transform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Transform(Transform const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Transform();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Transform, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Transform);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Transform*, "UnityEngine", "Transform");
NEED_NO_BOX(::UnityEngine::__Transform__Enumerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Transform__Enumerator*, "UnityEngine", "Transform/Enumerator");
