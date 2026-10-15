#pragma once
// IWYU pragma private; include "UnityEngine/Transform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::UnityEngine::Transform*);
MARK_REF_T(::UnityEngine::Transform_Enumerator*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Transform*, "UnityEngine", "Transform");
DEFINE_IL2CPP_CLASS(::UnityEngine::Transform_Enumerator*, "UnityEngine", "Transform/Enumerator");
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

  /// @brief Method MoveNext, addr 0x6f92d4c, size 0x34, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::Transform_Enumerator* New_ctor(::UnityEngine::Transform* outer);

  /// @brief Method Reset, addr 0x6f92d80, size 0xc, virtual true, abstract: false, final true
  inline void Reset();

  constexpr int32_t const& __cordl_internal_get_currentIndex() const;

  constexpr int32_t& __cordl_internal_get_currentIndex();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_outer() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_outer();

  constexpr void __cordl_internal_set_currentIndex(int32_t value);

  constexpr void __cordl_internal_set_outer(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x6f92474, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Transform* outer);

  /// @brief Method get_Current, addr 0x6f92d30, size 0x1c, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Transform_Enumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Transform_Enumerator", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Transform_Enumerator(Transform_Enumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Transform_Enumerator", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Transform_Enumerator(Transform_Enumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10020 };

  /// @brief Field outer, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___outer;

  /// @brief Field currentIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___currentIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Transform_Enumerator, ___outer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Transform_Enumerator, ___currentIndex) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Transform_Enumerator) == 0x20, "Size mismatch!");

} // namespace UnityEngine
// [RequiredByNativeCode]
// [NativeHeader("Runtime/Transform/ScriptBindings/TransformScriptBindings.h")]
// [NativeHeader("Runtime/Transform/Transform.h")]
// [NativeHeader("Configuration/UnityConfigure.h")]
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Transform
class CORDL_TYPE Transform : public ::UnityEngine::Component {
public:
  // Declarations
  using Enumerator = ::UnityEngine::Transform_Enumerator;

  __declspec(property(get = get_childCount)) int32_t childCount;

  /// @brief [NativeConditional("UNITY_EDITOR")]
  __declspec(property(get = get_constrainProportionsScale, put = set_constrainProportionsScale)) bool constrainProportionsScale;

  __declspec(property(get = get_eulerAngles, put = set_eulerAngles)) ::UnityEngine::Vector3 eulerAngles;

  __declspec(property(get = get_forward, put = set_forward)) ::UnityEngine::Vector3 forward;

  /// @brief [NativeProperty("HasChangedDeprecated")]
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

  /// @brief [NativeConditional("UNITY_EDITOR")]
  __declspec(property(get = get_rotationOrder, put = set_rotationOrder)) ::UnityEngine::RotationOrder rotationOrder;

  __declspec(property(get = get_up, put = set_up)) ::UnityEngine::Vector3 up;

  __declspec(property(get = get_worldToLocalMatrix)) ::UnityEngine::Matrix4x4 worldToLocalMatrix;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// [FreeFunction("DetachChildren", HasExplicitThis = true)]
  /// @brief Method DetachChildren, addr 0x6f9181c, size 0x78, virtual false, abstract: false, final false
  inline void DetachChildren();

  /// @brief Method DetachChildren_Injected, addr 0x6f91894, size 0x3c, virtual false, abstract: false, final false
  static inline void DetachChildren_Injected(::System::IntPtr _unity_self);

  /// @brief Method Find, addr 0x6f91fb8, size 0x58, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> Find(::StringW n);

  /// [Obsolete("FindChild has been deprecated. Use Find instead (UnityUpgradable) -> Find([mscorlib] System.String)", false)]
  /// @brief Method FindChild, addr 0x6f92418, size 0x4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> FindChild(::StringW n);

  /// [FreeFunction(HasExplicitThis = true)]
  /// @brief Method FindRelativeTransformWithPath, addr 0x6f91ccc, size 0x298, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> FindRelativeTransformWithPath(::StringW path, /* [DefaultValue("false")] */ bool isActiveOnly);

  /// @brief Method FindRelativeTransformWithPath_Injected, addr 0x6f91f64, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr FindRelativeTransformWithPath_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> path,
                                                                        /* [DefaultValue("false")] */ bool isActiveOnly);

  /// [FreeFunction("GetChild", HasExplicitThis = true)]
  /// [NativeThrows]
  /// @brief Method GetChild, addr 0x6f9266c, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetChild(int32_t index);

  /// [Obsolete("warning use Transform.childCount instead (UnityUpgradable) -> Transform.childCount", false)]
  /// [NativeMethod("GetChildrenCount")]
  /// @brief Method GetChildCount, addr 0x6f92800, size 0x78, virtual false, abstract: false, final false
  inline int32_t GetChildCount();

  /// @brief Method GetChildCount_Injected, addr 0x6f92878, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetChildCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetChild_Injected, addr 0x6f927bc, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetChild_Injected(::System::IntPtr _unity_self, int32_t index);

  /// @brief Method GetEnumerator, addr 0x6f9241c, size 0x58, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method GetLocalEulerAngles, addr 0x6f8df1c, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetLocalEulerAngles(::UnityEngine::RotationOrder order);

  /// @brief Method GetLocalEulerAngles_Injected, addr 0x6f8dfc4, size 0x54, virtual false, abstract: false, final false
  static inline void GetLocalEulerAngles_Injected(::System::IntPtr _unity_self, ::UnityEngine::RotationOrder order, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method GetLocalPositionAndRotation, addr 0x6f8f474, size 0x90, virtual false, abstract: false, final false
  inline void GetLocalPositionAndRotation(::by_ref<::UnityEngine::Vector3> localPosition, ::by_ref<::UnityEngine::Quaternion> localRotation);

  /// @brief Method GetLocalPositionAndRotation_Injected, addr 0x6f8f504, size 0x54, virtual false, abstract: false, final false
  static inline void GetLocalPositionAndRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> localPosition, ::by_ref<::UnityEngine::Quaternion> localRotation);

  /// @brief Method GetParent, addr 0x6f8edd8, size 0x148, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetParent();

  /// @brief Method GetParent_Injected, addr 0x6f8ef28, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetParent_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetPositionAndRotation, addr 0x6f8f390, size 0x90, virtual false, abstract: false, final false
  inline void GetPositionAndRotation(::by_ref<::UnityEngine::Vector3> position, ::by_ref<::UnityEngine::Quaternion> rotation);

  /// @brief Method GetPositionAndRotation_Injected, addr 0x6f8f420, size 0x54, virtual false, abstract: false, final false
  static inline void GetPositionAndRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> position, ::by_ref<::UnityEngine::Quaternion> rotation);

  /// @brief Method GetRoot, addr 0x6f915e4, size 0x148, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetRoot();

  /// @brief Method GetRoot_Injected, addr 0x6f9172c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetRoot_Injected(::System::IntPtr _unity_self);

  /// [NativeConditional("UNITY_EDITOR")]
  /// [NativeMethod("GetRotationOrder")]
  /// @brief Method GetRotationOrderInternal, addr 0x6f8e9d8, size 0x78, virtual false, abstract: false, final false
  inline int32_t GetRotationOrderInternal();

  /// @brief Method GetRotationOrderInternal_Injected, addr 0x6f8eadc, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetRotationOrderInternal_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetSiblingIndex, addr 0x6f91c18, size 0x78, virtual false, abstract: false, final false
  inline int32_t GetSiblingIndex();

  /// @brief Method GetSiblingIndex_Injected, addr 0x6f91c90, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetSiblingIndex_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("Internal_LookAt", HasExplicitThis = true)]
  /// @brief Method Internal_LookAt, addr 0x6f8fe4c, size 0x9c, virtual false, abstract: false, final false
  inline void Internal_LookAt(::UnityEngine::Vector3 worldPosition, ::UnityEngine::Vector3 worldUp);

  /// @brief Method Internal_LookAt_Injected, addr 0x6f8ff68, size 0x54, virtual false, abstract: false, final false
  static inline void Internal_LookAt_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> worldPosition, ::by_ref<::UnityEngine::Vector3 const> worldUp);

  /// @brief Method InverseTransformDirection, addr 0x6f902e4, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 InverseTransformDirection(::UnityEngine::Vector3 direction);

  /// @brief Method InverseTransformDirection, addr 0x6f903dc, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 InverseTransformDirection(float_t x, float_t y, float_t z);

  /// @brief Method InverseTransformDirection_Injected, addr 0x6f90388, size 0x54, virtual false, abstract: false, final false
  static inline void InverseTransformDirection_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> direction, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method InverseTransformDirections, addr 0x6f90558, size 0xd8, virtual false, abstract: false, final false
  inline void InverseTransformDirections(::System::ReadOnlySpan_1<::UnityEngine::Vector3> directions, ::System::Span_1<::UnityEngine::Vector3> transformedDirections);

  /// @brief Method InverseTransformDirections, addr 0x6f90630, size 0x80, virtual false, abstract: false, final false
  inline void InverseTransformDirections(::System::Span_1<::UnityEngine::Vector3> directions);

  /// [NativeMethod(Name = "InverseTransformDirections")]
  /// @brief Method InverseTransformDirectionsInternal, addr 0x6f903e0, size 0x124, virtual false, abstract: false, final false
  inline void InverseTransformDirectionsInternal(::System::ReadOnlySpan_1<::UnityEngine::Vector3> directions, ::System::Span_1<::UnityEngine::Vector3> transformedDirections);

  /// @brief Method InverseTransformDirectionsInternal_Injected, addr 0x6f90504, size 0x54, virtual false, abstract: false, final false
  static inline void InverseTransformDirectionsInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> directions,
                                                                 ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> transformedDirections);

  /// @brief Method InverseTransformPoint, addr 0x6f91214, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 InverseTransformPoint(::UnityEngine::Vector3 position);

  /// @brief Method InverseTransformPoint, addr 0x6f9130c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 InverseTransformPoint(float_t x, float_t y, float_t z);

  /// @brief Method InverseTransformPoint_Injected, addr 0x6f912b8, size 0x54, virtual false, abstract: false, final false
  static inline void InverseTransformPoint_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> position, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method InverseTransformPoints, addr 0x6f91488, size 0xd8, virtual false, abstract: false, final false
  inline void InverseTransformPoints(::System::ReadOnlySpan_1<::UnityEngine::Vector3> positions, ::System::Span_1<::UnityEngine::Vector3> transformedPositions);

  /// @brief Method InverseTransformPoints, addr 0x6f91560, size 0x80, virtual false, abstract: false, final false
  inline void InverseTransformPoints(::System::Span_1<::UnityEngine::Vector3> positions);

  /// [NativeMethod(Name = "InverseTransformPoints")]
  /// @brief Method InverseTransformPointsInternal, addr 0x6f91310, size 0x124, virtual false, abstract: false, final false
  inline void InverseTransformPointsInternal(::System::ReadOnlySpan_1<::UnityEngine::Vector3> positions, ::System::Span_1<::UnityEngine::Vector3> transformedPositions);

  /// @brief Method InverseTransformPointsInternal_Injected, addr 0x6f91434, size 0x54, virtual false, abstract: false, final false
  static inline void InverseTransformPointsInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> positions,
                                                             ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> transformedPositions);

  /// @brief Method InverseTransformVector, addr 0x6f90a7c, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 InverseTransformVector(::UnityEngine::Vector3 vector);

  /// @brief Method InverseTransformVector, addr 0x6f90b74, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 InverseTransformVector(float_t x, float_t y, float_t z);

  /// @brief Method InverseTransformVector_Injected, addr 0x6f90b20, size 0x54, virtual false, abstract: false, final false
  static inline void InverseTransformVector_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> vector, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method InverseTransformVectors, addr 0x6f90cf0, size 0xd8, virtual false, abstract: false, final false
  inline void InverseTransformVectors(::System::ReadOnlySpan_1<::UnityEngine::Vector3> vectors, ::System::Span_1<::UnityEngine::Vector3> transformedVectors);

  /// @brief Method InverseTransformVectors, addr 0x6f90dc8, size 0x80, virtual false, abstract: false, final false
  inline void InverseTransformVectors(::System::Span_1<::UnityEngine::Vector3> vectors);

  /// [NativeMethod(Name = "InverseTransformVectors")]
  /// @brief Method InverseTransformVectorsInternal, addr 0x6f90b78, size 0x124, virtual false, abstract: false, final false
  inline void InverseTransformVectorsInternal(::System::ReadOnlySpan_1<::UnityEngine::Vector3> vectors, ::System::Span_1<::UnityEngine::Vector3> transformedVectors);

  /// @brief Method InverseTransformVectorsInternal_Injected, addr 0x6f90c9c, size 0x54, virtual false, abstract: false, final false
  static inline void InverseTransformVectorsInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> vectors,
                                                              ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> transformedVectors);

  /// [FreeFunction("Internal_IsChildOrSameAsOtherTransform", HasExplicitThis = true)]
  /// @brief Method IsChildOf, addr 0x6f921a0, size 0xb4, virtual false, abstract: false, final false
  inline bool IsChildOf(/* [NotNull] */ ::UnityEngine::Transform* parent);

  /// @brief Method IsChildOf_Injected, addr 0x6f92254, size 0x44, virtual false, abstract: false, final false
  static inline bool IsChildOf_Injected(::System::IntPtr _unity_self, ::System::IntPtr parent);

  /// [NativeConditional("UNITY_EDITOR")]
  /// @brief Method IsConstrainProportionsScale, addr 0x6f92bac, size 0x78, virtual false, abstract: false, final false
  inline bool IsConstrainProportionsScale();

  /// @brief Method IsConstrainProportionsScale_Injected, addr 0x6f92cf4, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsConstrainProportionsScale_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("IsNonUniformScaleTransform", HasExplicitThis = true)]
  /// [NativeConditional("UNITY_EDITOR")]
  /// @brief Method IsNonUniformScaleTransform, addr 0x6f92af4, size 0x78, virtual false, abstract: false, final false
  inline bool IsNonUniformScaleTransform();

  /// @brief Method IsNonUniformScaleTransform_Injected, addr 0x6f92b6c, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsNonUniformScaleTransform_Injected(::System::IntPtr _unity_self);

  /// @brief Method LookAt, addr 0x6f8fd50, size 0xfc, virtual false, abstract: false, final false
  inline void LookAt(::UnityEngine::Transform* target);

  /// @brief Method LookAt, addr 0x6f8fc8c, size 0xc0, virtual false, abstract: false, final false
  inline void LookAt(::UnityEngine::Transform* target, /* [DefaultValue("Vector3.up")] */ ::UnityEngine::Vector3 worldUp);

  /// @brief Method LookAt, addr 0x6f8fee8, size 0x80, virtual false, abstract: false, final false
  inline void LookAt(::UnityEngine::Vector3 worldPosition);

  /// @brief Method LookAt, addr 0x6f8fd4c, size 0x4, virtual false, abstract: false, final false
  inline void LookAt(::UnityEngine::Vector3 worldPosition, /* [DefaultValue("Vector3.up")] */ ::UnityEngine::Vector3 worldUp);

  /// [NativeMethod("MoveAfterSiblingInternal")]
  /// @brief Method MoveAfterSibling, addr 0x6f91b04, size 0xc0, virtual false, abstract: false, final false
  inline void MoveAfterSibling(::UnityEngine::Transform* transform, bool notifyEditorAndMarkDirty);

  /// @brief Method MoveAfterSibling_Injected, addr 0x6f91bc4, size 0x54, virtual false, abstract: false, final false
  static inline void MoveAfterSibling_Injected(::System::IntPtr _unity_self, ::System::IntPtr transform, bool notifyEditorAndMarkDirty);

  static inline ::UnityEngine::Transform* New_ctor();

  /// @brief Method Rotate, addr 0x6f8fbb8, size 0x8, virtual false, abstract: false, final false
  inline void Rotate(::UnityEngine::Vector3 axis, float_t angle);

  /// @brief Method Rotate, addr 0x6f8fb2c, size 0x8c, virtual false, abstract: false, final false
  inline void Rotate(::UnityEngine::Vector3 axis, float_t angle, /* [DefaultValue("Space.Self")] */ ::UnityEngine::Space relativeTo);

  /// @brief Method Rotate, addr 0x6f8fa24, size 0x8, virtual false, abstract: false, final false
  inline void Rotate(::UnityEngine::Vector3 eulers);

  /// @brief Method Rotate, addr 0x6f8f780, size 0x2a4, virtual false, abstract: false, final false
  inline void Rotate(::UnityEngine::Vector3 eulers, /* [DefaultValue("Space.Self")] */ ::UnityEngine::Space relativeTo);

  /// @brief Method Rotate, addr 0x6f8fa30, size 0x8, virtual false, abstract: false, final false
  inline void Rotate(float_t xAngle, float_t yAngle, float_t zAngle);

  /// @brief Method Rotate, addr 0x6f8fa2c, size 0x4, virtual false, abstract: false, final false
  inline void Rotate(float_t xAngle, float_t yAngle, float_t zAngle, /* [DefaultValue("Space.Self")] */ ::UnityEngine::Space relativeTo);

  /// [Obsolete("warning use Transform.Rotate instead.")]
  /// @brief Method RotateAround, addr 0x6f92484, size 0xa0, virtual false, abstract: false, final false
  inline void RotateAround(::UnityEngine::Vector3 axis, float_t angle);

  /// @brief Method RotateAround, addr 0x6f8fbc0, size 0xcc, virtual false, abstract: false, final false
  inline void RotateAround(::UnityEngine::Vector3 point, ::UnityEngine::Vector3 axis, float_t angle);

  /// [NativeMethod("RotateAround")]
  /// @brief Method RotateAroundInternal, addr 0x6f8fa38, size 0xa0, virtual false, abstract: false, final false
  inline void RotateAroundInternal(::UnityEngine::Vector3 axis, float_t angle);

  /// @brief Method RotateAroundInternal_Injected, addr 0x6f8fad8, size 0x54, virtual false, abstract: false, final false
  static inline void RotateAroundInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> axis, float_t angle);

  /// [Obsolete("warning use Transform.Rotate instead.")]
  /// @brief Method RotateAroundLocal, addr 0x6f92578, size 0xa0, virtual false, abstract: false, final false
  inline void RotateAroundLocal(::UnityEngine::Vector3 axis, float_t angle);

  /// @brief Method RotateAroundLocal_Injected, addr 0x6f92618, size 0x54, virtual false, abstract: false, final false
  static inline void RotateAroundLocal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> axis, float_t angle);

  /// @brief Method RotateAround_Injected, addr 0x6f92524, size 0x54, virtual false, abstract: false, final false
  static inline void RotateAround_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> axis, float_t angle);

  /// [NativeConditional("UNITY_EDITOR")]
  /// @brief Method SendTransformChangedScale, addr 0x6f92010, size 0x78, virtual false, abstract: false, final false
  inline void SendTransformChangedScale();

  /// @brief Method SendTransformChangedScale_Injected, addr 0x6f92088, size 0x3c, virtual false, abstract: false, final false
  static inline void SendTransformChangedScale_Injected(::System::IntPtr _unity_self);

  /// @brief Method SetAsFirstSibling, addr 0x6f918d0, size 0x78, virtual false, abstract: false, final false
  inline void SetAsFirstSibling();

  /// @brief Method SetAsFirstSibling_Injected, addr 0x6f91948, size 0x3c, virtual false, abstract: false, final false
  static inline void SetAsFirstSibling_Injected(::System::IntPtr _unity_self);

  /// @brief Method SetAsLastSibling, addr 0x6f91984, size 0x78, virtual false, abstract: false, final false
  inline void SetAsLastSibling();

  /// @brief Method SetAsLastSibling_Injected, addr 0x6f919fc, size 0x3c, virtual false, abstract: false, final false
  static inline void SetAsLastSibling_Injected(::System::IntPtr _unity_self);

  /// [NativeConditional("UNITY_EDITOR")]
  /// @brief Method SetConstrainProportionsScale, addr 0x6f92c28, size 0x88, virtual false, abstract: false, final false
  inline void SetConstrainProportionsScale(bool isLinked);

  /// @brief Method SetConstrainProportionsScale_Injected, addr 0x6f92cb0, size 0x44, virtual false, abstract: false, final false
  static inline void SetConstrainProportionsScale_Injected(::System::IntPtr _unity_self, bool isLinked);

  /// @brief Method SetLocalEulerAngles, addr 0x6f8e018, size 0xa0, virtual false, abstract: false, final false
  inline void SetLocalEulerAngles(::UnityEngine::Vector3 euler, ::UnityEngine::RotationOrder order);

  /// @brief Method SetLocalEulerAngles_Injected, addr 0x6f8e0b8, size 0x54, virtual false, abstract: false, final false
  static inline void SetLocalEulerAngles_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> euler, ::UnityEngine::RotationOrder order);

  /// [NativeConditional("UNITY_EDITOR")]
  /// @brief Method SetLocalEulerHint, addr 0x6f8e10c, size 0x90, virtual false, abstract: false, final false
  inline void SetLocalEulerHint(::UnityEngine::Vector3 euler);

  /// @brief Method SetLocalEulerHint_Injected, addr 0x6f8e19c, size 0x44, virtual false, abstract: false, final false
  static inline void SetLocalEulerHint_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> euler);

  /// @brief Method SetLocalPositionAndRotation, addr 0x6f8f2a0, size 0x9c, virtual false, abstract: false, final false
  inline void SetLocalPositionAndRotation(::UnityEngine::Vector3 localPosition, ::UnityEngine::Quaternion localRotation);

  /// @brief Method SetLocalPositionAndRotation_Injected, addr 0x6f8f33c, size 0x54, virtual false, abstract: false, final false
  static inline void SetLocalPositionAndRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> localPosition, ::by_ref<::UnityEngine::Quaternion const> localRotation);

  /// @brief Method SetParent, addr 0x6f8ef20, size 0x8, virtual false, abstract: false, final false
  inline void SetParent(::UnityEngine::Transform* p);

  /// [FreeFunction("SetParent", HasExplicitThis = true)]
  /// @brief Method SetParent, addr 0x6f8ef64, size 0xc0, virtual false, abstract: false, final false
  inline void SetParent(::UnityEngine::Transform* parent, bool worldPositionStays);

  /// @brief Method SetParent_Injected, addr 0x6f8f024, size 0x54, virtual false, abstract: false, final false
  static inline void SetParent_Injected(::System::IntPtr _unity_self, ::System::IntPtr parent, bool worldPositionStays);

  /// @brief Method SetPositionAndRotation, addr 0x6f8f1b0, size 0x9c, virtual false, abstract: false, final false
  inline void SetPositionAndRotation(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method SetPositionAndRotation_Injected, addr 0x6f8f24c, size 0x54, virtual false, abstract: false, final false
  static inline void SetPositionAndRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> position, ::by_ref<::UnityEngine::Quaternion const> rotation);

  /// [NativeMethod("SetRotationOrder")]
  /// [NativeConditional("UNITY_EDITOR")]
  /// @brief Method SetRotationOrderInternal, addr 0x6f8ea54, size 0x88, virtual false, abstract: false, final false
  inline void SetRotationOrderInternal(::UnityEngine::RotationOrder rotationOrder);

  /// @brief Method SetRotationOrderInternal_Injected, addr 0x6f8eb18, size 0x44, virtual false, abstract: false, final false
  static inline void SetRotationOrderInternal_Injected(::System::IntPtr _unity_self, ::UnityEngine::RotationOrder rotationOrder);

  /// @brief Method SetSiblingIndex, addr 0x6f91a38, size 0x88, virtual false, abstract: false, final false
  inline void SetSiblingIndex(int32_t index);

  /// @brief Method SetSiblingIndex_Injected, addr 0x6f91ac0, size 0x44, virtual false, abstract: false, final false
  static inline void SetSiblingIndex_Injected(::System::IntPtr _unity_self, int32_t index);

  /// @brief Method TransformDirection, addr 0x6f8f5e0, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 TransformDirection(::UnityEngine::Vector3 direction);

  /// @brief Method TransformDirection, addr 0x6f90010, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 TransformDirection(float_t x, float_t y, float_t z);

  /// @brief Method TransformDirection_Injected, addr 0x6f8ffbc, size 0x54, virtual false, abstract: false, final false
  static inline void TransformDirection_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> direction, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method TransformDirections, addr 0x6f9018c, size 0xd8, virtual false, abstract: false, final false
  inline void TransformDirections(::System::ReadOnlySpan_1<::UnityEngine::Vector3> directions, ::System::Span_1<::UnityEngine::Vector3> transformedDirections);

  /// @brief Method TransformDirections, addr 0x6f90264, size 0x80, virtual false, abstract: false, final false
  inline void TransformDirections(::System::Span_1<::UnityEngine::Vector3> directions);

  /// [NativeMethod(Name = "TransformDirections")]
  /// @brief Method TransformDirectionsInternal, addr 0x6f90014, size 0x124, virtual false, abstract: false, final false
  inline void TransformDirectionsInternal(::System::ReadOnlySpan_1<::UnityEngine::Vector3> directions, ::System::Span_1<::UnityEngine::Vector3> transformedDirections);

  /// @brief Method TransformDirectionsInternal_Injected, addr 0x6f90138, size 0x54, virtual false, abstract: false, final false
  static inline void TransformDirectionsInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> directions,
                                                          ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> transformedDirections);

  /// @brief Method TransformPoint, addr 0x6f90e48, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 TransformPoint(::UnityEngine::Vector3 position);

  /// @brief Method TransformPoint, addr 0x6f90f40, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 TransformPoint(float_t x, float_t y, float_t z);

  /// @brief Method TransformPoint_Injected, addr 0x6f90eec, size 0x54, virtual false, abstract: false, final false
  static inline void TransformPoint_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> position, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method TransformPoints, addr 0x6f910bc, size 0xd8, virtual false, abstract: false, final false
  inline void TransformPoints(::System::ReadOnlySpan_1<::UnityEngine::Vector3> positions, ::System::Span_1<::UnityEngine::Vector3> transformedPositions);

  /// @brief Method TransformPoints, addr 0x6f91194, size 0x80, virtual false, abstract: false, final false
  inline void TransformPoints(::System::Span_1<::UnityEngine::Vector3> positions);

  /// [NativeMethod(Name = "TransformPoints")]
  /// @brief Method TransformPointsInternal, addr 0x6f90f44, size 0x124, virtual false, abstract: false, final false
  inline void TransformPointsInternal(::System::ReadOnlySpan_1<::UnityEngine::Vector3> positions, ::System::Span_1<::UnityEngine::Vector3> transformedPositions);

  /// @brief Method TransformPointsInternal_Injected, addr 0x6f91068, size 0x54, virtual false, abstract: false, final false
  static inline void TransformPointsInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> positions,
                                                      ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> transformedPositions);

  /// @brief Method TransformVector, addr 0x6f906b0, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 TransformVector(::UnityEngine::Vector3 vector);

  /// @brief Method TransformVector, addr 0x6f907a8, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 TransformVector(float_t x, float_t y, float_t z);

  /// @brief Method TransformVector_Injected, addr 0x6f90754, size 0x54, virtual false, abstract: false, final false
  static inline void TransformVector_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> vector, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method TransformVectors, addr 0x6f90924, size 0xd8, virtual false, abstract: false, final false
  inline void TransformVectors(::System::ReadOnlySpan_1<::UnityEngine::Vector3> vectors, ::System::Span_1<::UnityEngine::Vector3> transformedVectors);

  /// @brief Method TransformVectors, addr 0x6f909fc, size 0x80, virtual false, abstract: false, final false
  inline void TransformVectors(::System::Span_1<::UnityEngine::Vector3> vectors);

  /// [NativeMethod(Name = "TransformVectors")]
  /// @brief Method TransformVectorsInternal, addr 0x6f907ac, size 0x124, virtual false, abstract: false, final false
  inline void TransformVectorsInternal(::System::ReadOnlySpan_1<::UnityEngine::Vector3> vectors, ::System::Span_1<::UnityEngine::Vector3> transformedVectors);

  /// @brief Method TransformVectorsInternal_Injected, addr 0x6f908d0, size 0x54, virtual false, abstract: false, final false
  static inline void TransformVectorsInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> vectors,
                                                       ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> transformedVectors);

  /// @brief Method Translate, addr 0x6f8f684, size 0x8, virtual false, abstract: false, final false
  inline void Translate(::UnityEngine::Vector3 translation);

  /// @brief Method Translate, addr 0x6f8f558, size 0x88, virtual false, abstract: false, final false
  inline void Translate(::UnityEngine::Vector3 translation, /* [DefaultValue("Space.Self")] */ ::UnityEngine::Space relativeTo);

  /// @brief Method Translate, addr 0x6f8f698, size 0xe4, virtual false, abstract: false, final false
  inline void Translate(::UnityEngine::Vector3 translation, ::UnityEngine::Transform* relativeTo);

  /// @brief Method Translate, addr 0x6f8f690, size 0x8, virtual false, abstract: false, final false
  inline void Translate(float_t x, float_t y, float_t z);

  /// @brief Method Translate, addr 0x6f8f68c, size 0x4, virtual false, abstract: false, final false
  inline void Translate(float_t x, float_t y, float_t z, /* [DefaultValue("Space.Self")] */ ::UnityEngine::Space relativeTo);

  /// @brief Method Translate, addr 0x6f8f77c, size 0x4, virtual false, abstract: false, final false
  inline void Translate(float_t x, float_t y, float_t z, ::UnityEngine::Transform* relativeTo);

  /// @brief Method .ctor, addr 0x6f8dc4c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// [NativeMethod("GetChildrenCount")]
  /// @brief Method get_childCount, addr 0x6f91768, size 0x78, virtual false, abstract: false, final false
  inline int32_t get_childCount();

  /// @brief Method get_childCount_Injected, addr 0x6f917e0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_childCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_constrainProportionsScale, addr 0x6f92ba8, size 0x4, virtual false, abstract: false, final false
  inline bool get_constrainProportionsScale();

  /// @brief Method get_eulerAngles, addr 0x6f8e1e0, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_eulerAngles();

  /// @brief Method get_forward, addr 0x6f8e7b0, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_forward();

  /// @brief Method get_hasChanged, addr 0x6f92298, size 0x78, virtual false, abstract: false, final false
  inline bool get_hasChanged();

  /// @brief Method get_hasChanged_Injected, addr 0x6f92310, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_hasChanged_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_hierarchyCapacity, addr 0x6f928b4, size 0x4, virtual false, abstract: false, final false
  inline int32_t get_hierarchyCapacity();

  /// @brief Method get_hierarchyCount, addr 0x6f92a3c, size 0x4, virtual false, abstract: false, final false
  inline int32_t get_hierarchyCount();

  /// @brief Method get_localEulerAngles, addr 0x6f8e3a0, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_localEulerAngles();

  /// @brief Method get_localPosition, addr 0x6f8c904, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_localPosition();

  /// @brief Method get_localPosition_Injected, addr 0x6f8de94, size 0x44, virtual false, abstract: false, final false
  static inline void get_localPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_localRotation, addr 0x6f8e3e8, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_localRotation();

  /// @brief Method get_localRotation_Injected, addr 0x6f8e94c, size 0x44, virtual false, abstract: false, final false
  static inline void get_localRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> ret);

  /// @brief Method get_localScale, addr 0x6f8eb5c, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_localScale();

  /// @brief Method get_localScale_Injected, addr 0x6f8ebf4, size 0x44, virtual false, abstract: false, final false
  static inline void get_localScale_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_localToWorldMatrix, addr 0x6f8d63c, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_localToWorldMatrix();

  /// @brief Method get_localToWorldMatrix_Injected, addr 0x6f8f16c, size 0x44, virtual false, abstract: false, final false
  static inline void get_localToWorldMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// [NativeMethod("GetWorldScaleLossy")]
  /// @brief Method get_lossyScale, addr 0x6f920c4, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_lossyScale();

  /// @brief Method get_lossyScale_Injected, addr 0x6f9215c, size 0x44, virtual false, abstract: false, final false
  static inline void get_lossyScale_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_parent, addr 0x6f8dc40, size 0x4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_parent();

  /// @brief Method get_parentInternal, addr 0x6f8ed0c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_parentInternal();

  /// @brief Method get_position, addr 0x6f8dce4, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method get_position_Injected, addr 0x6f8dd7c, size 0x44, virtual false, abstract: false, final false
  static inline void get_position_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_right, addr 0x6f8e560, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_right();

  /// @brief Method get_root, addr 0x6f915e0, size 0x4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_root();

  /// @brief Method get_rotation, addr 0x6f8e228, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rotation();

  /// @brief Method get_rotationOrder, addr 0x6f8e9d4, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::RotationOrder get_rotationOrder();

  /// @brief Method get_rotation_Injected, addr 0x6f8e8c4, size 0x44, virtual false, abstract: false, final false
  static inline void get_rotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> ret);

  /// @brief Method get_up, addr 0x6f8e688, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_up();

  /// @brief Method get_worldToLocalMatrix, addr 0x6f8f078, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_worldToLocalMatrix();

  /// @brief Method get_worldToLocalMatrix_Injected, addr 0x6f8f128, size 0x44, virtual false, abstract: false, final false
  static inline void get_worldToLocalMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// [FreeFunction("GetHierarchyCapacity", HasExplicitThis = true)]
  /// @brief Method internal_getHierarchyCapacity, addr 0x6f928b8, size 0x78, virtual false, abstract: false, final false
  inline int32_t internal_getHierarchyCapacity();

  /// @brief Method internal_getHierarchyCapacity_Injected, addr 0x6f929bc, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t internal_getHierarchyCapacity_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("GetHierarchyCount", HasExplicitThis = true)]
  /// @brief Method internal_getHierarchyCount, addr 0x6f92a40, size 0x78, virtual false, abstract: false, final false
  inline int32_t internal_getHierarchyCount();

  /// @brief Method internal_getHierarchyCount_Injected, addr 0x6f92ab8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t internal_getHierarchyCount_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("SetHierarchyCapacity", HasExplicitThis = true)]
  /// @brief Method internal_setHierarchyCapacity, addr 0x6f92934, size 0x88, virtual false, abstract: false, final false
  inline void internal_setHierarchyCapacity(int32_t value);

  /// @brief Method internal_setHierarchyCapacity_Injected, addr 0x6f929f8, size 0x44, virtual false, abstract: false, final false
  static inline void internal_setHierarchyCapacity_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_constrainProportionsScale, addr 0x6f92c24, size 0x4, virtual false, abstract: false, final false
  inline void set_constrainProportionsScale(bool value);

  /// @brief Method set_eulerAngles, addr 0x6f8e2bc, size 0x54, virtual false, abstract: false, final false
  inline void set_eulerAngles(::UnityEngine::Vector3 value);

  /// @brief Method set_forward, addr 0x6f8e838, size 0x8c, virtual false, abstract: false, final false
  inline void set_forward(::UnityEngine::Vector3 value);

  /// @brief Method set_hasChanged, addr 0x6f9234c, size 0x88, virtual false, abstract: false, final false
  inline void set_hasChanged(bool value);

  /// @brief Method set_hasChanged_Injected, addr 0x6f923d4, size 0x44, virtual false, abstract: false, final false
  static inline void set_hasChanged_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_hierarchyCapacity, addr 0x6f92930, size 0x4, virtual false, abstract: false, final false
  inline void set_hierarchyCapacity(int32_t value);

  /// @brief Method set_localEulerAngles, addr 0x6f8e47c, size 0x54, virtual false, abstract: false, final false
  inline void set_localEulerAngles(::UnityEngine::Vector3 value);

  /// @brief Method set_localPosition, addr 0x6f8c9cc, size 0x90, virtual false, abstract: false, final false
  inline void set_localPosition(::UnityEngine::Vector3 value);

  /// @brief Method set_localPosition_Injected, addr 0x6f8ded8, size 0x44, virtual false, abstract: false, final false
  static inline void set_localPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> value);

  /// @brief Method set_localRotation, addr 0x6f8e4d0, size 0x90, virtual false, abstract: false, final false
  inline void set_localRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_localRotation_Injected, addr 0x6f8e990, size 0x44, virtual false, abstract: false, final false
  static inline void set_localRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion const> value);

  /// @brief Method set_localScale, addr 0x6f8ec38, size 0x90, virtual false, abstract: false, final false
  inline void set_localScale(::UnityEngine::Vector3 value);

  /// @brief Method set_localScale_Injected, addr 0x6f8ecc8, size 0x44, virtual false, abstract: false, final false
  static inline void set_localScale_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> value);

  /// @brief Method set_parent, addr 0x6f8ed10, size 0xc0, virtual false, abstract: false, final false
  inline void set_parent(::UnityEngine::Transform* value);

  /// @brief Method set_parentInternal, addr 0x6f8edd0, size 0x8, virtual false, abstract: false, final false
  inline void set_parentInternal(::UnityEngine::Transform* value);

  /// @brief Method set_position, addr 0x6f8ddc0, size 0x90, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector3 value);

  /// @brief Method set_position_Injected, addr 0x6f8de50, size 0x44, virtual false, abstract: false, final false
  static inline void set_position_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> value);

  /// @brief Method set_right, addr 0x6f8e5e8, size 0xa0, virtual false, abstract: false, final false
  inline void set_right(::UnityEngine::Vector3 value);

  /// @brief Method set_rotation, addr 0x6f8e310, size 0x90, virtual false, abstract: false, final false
  inline void set_rotation(::UnityEngine::Quaternion value);

  /// @brief Method set_rotationOrder, addr 0x6f8ea50, size 0x4, virtual false, abstract: false, final false
  inline void set_rotationOrder(::UnityEngine::RotationOrder value);

  /// @brief Method set_rotation_Injected, addr 0x6f8e908, size 0x44, virtual false, abstract: false, final false
  static inline void set_rotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion const> value);

  /// @brief Method set_up, addr 0x6f8e710, size 0xa0, virtual false, abstract: false, final false
  inline void set_up(::UnityEngine::Vector3 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Transform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Transform", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Transform(Transform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Transform", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Transform(Transform const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10021 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Transform) == 0x18, "Size mismatch!");

} // namespace UnityEngine
