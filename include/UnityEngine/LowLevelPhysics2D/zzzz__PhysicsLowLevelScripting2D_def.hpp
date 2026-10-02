#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsLowLevelScripting2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhysicsLowLevelScripting2D)
namespace System {
class IDisposable;
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
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsAABB;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsBodyDefinition;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsBody_BodyType;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsBody_TransformWriteTween;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsBody;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsCallbacks_BodyUpdateCallbackTargets;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsCallbacks_ContactCallbackTargets;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsCallbacks_JointThresholdCallbackTargets;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsCallbacks_TriggerCallbackTargets;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsChainDefinition;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsDistanceJointDefinition;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsFixedJointDefinition;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsHingeJointDefinition;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsJoint_JointType;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsJoint;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsLowLevelScripting2D_PhysicsBuffer;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsRelativeJointDefinition;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsRotate;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsShapeDefinition;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsShape_ContactId;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsShape_ShapeType;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsShape_SurfaceMaterial;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsShape;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsSliderJointDefinition;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsWheelJointDefinition;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsWorldDefinition;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsWorld;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::LowLevelPhysics2D {
class PhysicsLowLevelScripting2D;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsLowLevelScripting2D_PhysicsBuffer;
}
// Write type traits
MARK_REF_T(::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer);
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*, "UnityEngine.LowLevelPhysics2D", "PhysicsLowLevelScripting2D");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer, "UnityEngine.LowLevelPhysics2D", "PhysicsLowLevelScripting2D/PhysicsBuffer");
// Dependencies System.IntPtr, Unity.Collections.Allocator
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsLowLevelScripting2D/PhysicsBuffer
struct CORDL_TYPE PhysicsLowLevelScripting2D_PhysicsBuffer {
public:
  // Declarations
  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x6fd37e4, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// [IsReadOnly]
  /// @brief Method ToNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline ::Unity::Collections::NativeArray_1<T> ToNativeArray();

  /// [IsReadOnly]
  /// @brief Method ToReadOnlySpan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline ::System::ReadOnlySpan_1<T> ToReadOnlySpan();

  /// [IsReadOnly]
  /// @brief Method ToSpan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline ::System::Span_1<T> ToSpan();

  /// [IsReadOnly]
  /// @brief Method ToString, addr 0x6fd3860, size 0xcc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// [IsReadOnly]
  /// @brief Method get_IsEmpty, addr 0x6fd3850, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsLowLevelScripting2D_PhysicsBuffer();

  // Ctor Parameters [CppParam { name: "m_Buffer", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Size", ty: "int32_t", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "m_Allocator", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None, comment: None }]
  constexpr PhysicsLowLevelScripting2D_PhysicsBuffer(::System::IntPtr m_Buffer, int32_t m_Size, ::Unity::Collections::Allocator m_Allocator) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21507 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Buffer, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr m_Buffer;

  /// @brief Field m_Size, offset: 0x8, size: 0x4, def value: None
  int32_t m_Size;

  /// @brief Field m_Allocator, offset: 0xc, size: 0x4, def value: None
  ::Unity::Collections::Allocator m_Allocator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer, m_Buffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer, m_Size) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer, m_Allocator) == 0xc, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer) == 0x10, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// [StaticAccessor("PhysicsLowLevel2D", (UnityEngine.Bindings.StaticAccessorType)2)]
// [NativeHeader("Modules/Physics2D/LowLevel/PhysicsWorldManager2D.h")]
// [NativeHeader("Modules/Physics2D/LowLevel/PhysicsLowLevel2D.h")]
// Dependencies System.Object
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: false
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsLowLevelScripting2D
class CORDL_TYPE PhysicsLowLevelScripting2D : public ::System::Object {
public:
  // Declarations
  using PhysicsBuffer = ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer;

  /// [NativeMethod(Name = "PhysicsDistanceJoint::GetDefaultDefinition", IsThreadSafe = true)]
  /// @brief Method DistanceJoint_GetDefaultDefinition, addr 0x6fd23e8, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition DistanceJoint_GetDefaultDefinition(bool useSettings);

  /// @brief Method DistanceJoint_GetDefaultDefinition_Injected, addr 0x6fd2460, size 0x44, virtual false, abstract: false, final false
  static inline void DistanceJoint_GetDefaultDefinition_Injected(bool useSettings, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition> ret);

  /// [NativeMethod(Name = "PhysicsFixedJoint::GetDefaultDefinition", IsThreadSafe = true)]
  /// @brief Method FixedJoint_GetDefaultDefinition, addr 0x6fd26d0, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition FixedJoint_GetDefaultDefinition(bool useSettings);

  /// @brief Method FixedJoint_GetDefaultDefinition_Injected, addr 0x6fd2744, size 0x44, virtual false, abstract: false, final false
  static inline void FixedJoint_GetDefaultDefinition_Injected(bool useSettings, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition> ret);

  /// [NativeMethod(Name = "PhysicsHingeJoint::GetDefaultDefinition", IsThreadSafe = true)]
  /// @brief Method HingeJoint_GetDefaultDefinition, addr 0x6fd2618, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsHingeJointDefinition HingeJoint_GetDefaultDefinition(bool useSettings);

  /// @brief Method HingeJoint_GetDefaultDefinition_Injected, addr 0x6fd268c, size 0x44, virtual false, abstract: false, final false
  static inline void HingeJoint_GetDefaultDefinition_Injected(bool useSettings, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsHingeJointDefinition> ret);

  /// [NativeMethod(Name = "PhysicsAABB::IsValid", IsThreadSafe = true)]
  /// @brief Method PhysicsAABB_IsValid, addr 0x6fd29d4, size 0x48, virtual false, abstract: false, final false
  static inline bool PhysicsAABB_IsValid(::UnityEngine::LowLevelPhysics2D::PhysicsAABB aabb);

  /// @brief Method PhysicsAABB_IsValid_Injected, addr 0x6fd2a1c, size 0x3c, virtual false, abstract: false, final false
  static inline bool PhysicsAABB_IsValid_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsAABB> aabb);

  /// [NativeMethod(Name = "PhysicsBody::GetBodyType", IsThreadSafe = true)]
  /// @brief Method PhysicsBody_GetBodyType, addr 0x6fd20c8, size 0x40, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyType PhysicsBody_GetBodyType(::UnityEngine::LowLevelPhysics2D::PhysicsBody body);

  /// @brief Method PhysicsBody_GetBodyType_Injected, addr 0x6fd2108, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyType PhysicsBody_GetBodyType_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsBody> body);

  /// [NativeMethod(Name = "PhysicsBody::GetCallbackTarget", IsThreadSafe = true)]
  /// @brief Method PhysicsBody_GetCallbackTarget, addr 0x6fd2144, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Object* PhysicsBody_GetCallbackTarget(::UnityEngine::LowLevelPhysics2D::PhysicsBody body);

  /// @brief Method PhysicsBody_GetCallbackTarget_Injected, addr 0x6fd2184, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::Object* PhysicsBody_GetCallbackTarget_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsBody> body);

  /// [NativeMethod(Name = "PhysicsBody::GetDefaultDefinition", IsThreadSafe = true)]
  /// @brief Method PhysicsBody_GetDefaultDefinition, addr 0x6fd1f94, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition PhysicsBody_GetDefaultDefinition(bool useSettings);

  /// @brief Method PhysicsBody_GetDefaultDefinition_Injected, addr 0x6fd2004, size 0x44, virtual false, abstract: false, final false
  static inline void PhysicsBody_GetDefaultDefinition_Injected(bool useSettings, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition> ret);

  /// [NativeMethod(Name = "PhysicsBody::IsValid", IsThreadSafe = true)]
  /// @brief Method PhysicsBody_IsValid, addr 0x6fd2048, size 0x44, virtual false, abstract: false, final false
  static inline bool PhysicsBody_IsValid(::UnityEngine::LowLevelPhysics2D::PhysicsBody body);

  /// @brief Method PhysicsBody_IsValid_Injected, addr 0x6fd208c, size 0x3c, virtual false, abstract: false, final false
  static inline bool PhysicsBody_IsValid_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsBody> body);

  /// [NativeMethod(Name = "PhysicsChain::GetDefaultDefinition", IsThreadSafe = true)]
  /// @brief Method PhysicsChain_GetDefaultDefinition, addr 0x6fd21c0, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition PhysicsChain_GetDefaultDefinition(bool useSettings);

  /// @brief Method PhysicsChain_GetDefaultDefinition_Injected, addr 0x6fd222c, size 0x44, virtual false, abstract: false, final false
  static inline void PhysicsChain_GetDefaultDefinition_Injected(bool useSettings, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition> ret);

  /// [NativeMethod(Name = "PhysicsLowLevel2D::PhysicsContactId::IsValid", IsThreadSafe = true)]
  /// @brief Method PhysicsContactId_IsValid, addr 0x6fd2eac, size 0x48, virtual false, abstract: false, final false
  static inline bool PhysicsContactId_IsValid(::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId contactId);

  /// @brief Method PhysicsContactId_IsValid_Injected, addr 0x6fd2ef4, size 0x3c, virtual false, abstract: false, final false
  static inline bool PhysicsContactId_IsValid_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId> contactId);

  /// [NativeMethod(Name = "PhysicsLowLevel2D::GetBypassLowLevel")]
  /// [StaticAccessor("GetPhysicsLowLevel2D()", (UnityEngine.Bindings.StaticAccessorType)1)]
  /// @brief Method PhysicsGlobal_GetBypassLowLevel, addr 0x6fd2a98, size 0x28, virtual false, abstract: false, final false
  static inline bool PhysicsGlobal_GetBypassLowLevel();

  /// [NativeMethod(Name = "PhysicsLowLevel2D::IsRenderingAllowed")]
  /// [StaticAccessor("GetPhysicsLowLevel2D()", (UnityEngine.Bindings.StaticAccessorType)1)]
  /// @brief Method PhysicsGlobal_IsRenderingAllowed, addr 0x6fd2ac0, size 0x28, virtual false, abstract: false, final false
  static inline bool PhysicsGlobal_IsRenderingAllowed();

  /// [StaticAccessor("GetPhysicsLowLevel2D()->GetWorldManager2D()", (UnityEngine.Bindings.StaticAccessorType)1)]
  /// [NativeMethod(Name = "PhysicsWorldManager2D::PopulateWorldTransformWrite")]
  /// @brief Method PhysicsGlobal_PopulateWorldTransformWrite, addr 0x6fd2ae8, size 0xb0, virtual false, abstract: false, final false
  static inline int32_t PhysicsGlobal_PopulateWorldTransformWrite(::UnityEngine::LowLevelPhysics2D::PhysicsWorld world, ::System::IntPtr transformAccessArrayIntPtr,
                                                                  ::System::Span_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween> transformWriteTweensArray);

  /// @brief Method PhysicsGlobal_PopulateWorldTransformWrite_Injected, addr 0x6fd2b98, size 0x54, virtual false, abstract: false, final false
  static inline int32_t PhysicsGlobal_PopulateWorldTransformWrite_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld> world, ::System::IntPtr transformAccessArrayIntPtr,
                                                                           ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> transformWriteTweensArray);

  /// [NativeMethod(Name = "PhysicsJoint::GetCallbackTarget", IsThreadSafe = true)]
  /// @brief Method PhysicsJoint_GetCallbackTarget, addr 0x6fd236c, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Object* PhysicsJoint_GetCallbackTarget(::UnityEngine::LowLevelPhysics2D::PhysicsJoint joint);

  /// @brief Method PhysicsJoint_GetCallbackTarget_Injected, addr 0x6fd23ac, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::Object* PhysicsJoint_GetCallbackTarget_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsJoint> joint);

  /// [NativeMethod(Name = "PhysicsJoint::GetJointType", IsThreadSafe = true)]
  /// @brief Method PhysicsJoint_GetJointType, addr 0x6fd22f0, size 0x40, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType PhysicsJoint_GetJointType(::UnityEngine::LowLevelPhysics2D::PhysicsJoint joint);

  /// @brief Method PhysicsJoint_GetJointType_Injected, addr 0x6fd2330, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType PhysicsJoint_GetJointType_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsJoint> joint);

  /// [NativeMethod(Name = "PhysicsJoint::IsValid", IsThreadSafe = true)]
  /// @brief Method PhysicsJoint_IsValid, addr 0x6fd2270, size 0x44, virtual false, abstract: false, final false
  static inline bool PhysicsJoint_IsValid(::UnityEngine::LowLevelPhysics2D::PhysicsJoint joint);

  /// @brief Method PhysicsJoint_IsValid_Injected, addr 0x6fd22b4, size 0x3c, virtual false, abstract: false, final false
  static inline bool PhysicsJoint_IsValid_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsJoint> joint);

  /// [NativeMethod(Name = "PhysicsMath::Atan2", IsThreadSafe = true)]
  /// @brief Method PhysicsMath_Atan2, addr 0x6fd2a58, size 0x40, virtual false, abstract: false, final false
  static inline float_t PhysicsMath_Atan2(float_t y, float_t x);

  /// [NativeMethod(Name = "PhysicsRotate::Create", IsThreadSafe = true)]
  /// @brief Method PhysicsRotate_CreateAngle, addr 0x6fd2840, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsRotate PhysicsRotate_CreateAngle(float_t angle);

  /// @brief Method PhysicsRotate_CreateAngle_Injected, addr 0x6fd288c, size 0x4c, virtual false, abstract: false, final false
  static inline void PhysicsRotate_CreateAngle_Injected(float_t angle, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsRotate> ret);

  /// [NativeMethod(Name = "PhysicsRotate::GetAngle", IsThreadSafe = true)]
  /// @brief Method PhysicsRotate_GetAngle, addr 0x6fd2958, size 0x40, virtual false, abstract: false, final false
  static inline float_t PhysicsRotate_GetAngle(::UnityEngine::LowLevelPhysics2D::PhysicsRotate rotate);

  /// @brief Method PhysicsRotate_GetAngle_Injected, addr 0x6fd2998, size 0x3c, virtual false, abstract: false, final false
  static inline float_t PhysicsRotate_GetAngle_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsRotate> rotate);

  /// [NativeMethod(Name = "PhysicsRotate::IsValid", IsThreadSafe = true)]
  /// @brief Method PhysicsRotate_IsValid, addr 0x6fd28d8, size 0x44, virtual false, abstract: false, final false
  static inline bool PhysicsRotate_IsValid(::UnityEngine::LowLevelPhysics2D::PhysicsRotate rotation);

  /// @brief Method PhysicsRotate_IsValid_Injected, addr 0x6fd291c, size 0x3c, virtual false, abstract: false, final false
  static inline bool PhysicsRotate_IsValid_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsRotate> rotation);

  /// [NativeMethod(Name = "PhysicsShape::GetCallbackTarget", IsThreadSafe = true)]
  /// @brief Method PhysicsShape_GetCallbackTarget, addr 0x6fd2e30, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Object* PhysicsShape_GetCallbackTarget(::UnityEngine::LowLevelPhysics2D::PhysicsShape shape);

  /// @brief Method PhysicsShape_GetCallbackTarget_Injected, addr 0x6fd2e70, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::Object* PhysicsShape_GetCallbackTarget_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsShape> shape);

  /// [NativeMethod(Name = "PhysicsShape::GetDefaultDefinition", IsThreadSafe = true)]
  /// @brief Method PhysicsShape_GetDefaultDefinition, addr 0x6fd2bec, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition PhysicsShape_GetDefaultDefinition(bool useSettings);

  /// @brief Method PhysicsShape_GetDefaultDefinition_Injected, addr 0x6fd2c5c, size 0x44, virtual false, abstract: false, final false
  static inline void PhysicsShape_GetDefaultDefinition_Injected(bool useSettings, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition> ret);

  /// [NativeMethod(Name = "PhysicsShape::GetDefaultSurfaceMaterial", IsThreadSafe = true)]
  /// @brief Method PhysicsShape_GetDefaultSurfaceMaterial, addr 0x6fd2ca0, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial PhysicsShape_GetDefaultSurfaceMaterial();

  /// @brief Method PhysicsShape_GetDefaultSurfaceMaterial_Injected, addr 0x6fd2cf8, size 0x3c, virtual false, abstract: false, final false
  static inline void PhysicsShape_GetDefaultSurfaceMaterial_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial> ret);

  /// [NativeMethod(Name = "PhysicsShape::GetShapeType", IsThreadSafe = true)]
  /// @brief Method PhysicsShape_GetShapeType, addr 0x6fd2db4, size 0x40, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ShapeType PhysicsShape_GetShapeType(::UnityEngine::LowLevelPhysics2D::PhysicsShape shape);

  /// @brief Method PhysicsShape_GetShapeType_Injected, addr 0x6fd2df4, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ShapeType PhysicsShape_GetShapeType_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsShape> shape);

  /// [NativeMethod(Name = "PhysicsShape::IsValid", IsThreadSafe = true)]
  /// @brief Method PhysicsShape_IsValid, addr 0x6fd2d34, size 0x44, virtual false, abstract: false, final false
  static inline bool PhysicsShape_IsValid(::UnityEngine::LowLevelPhysics2D::PhysicsShape shape);

  /// @brief Method PhysicsShape_IsValid_Injected, addr 0x6fd2d78, size 0x3c, virtual false, abstract: false, final false
  static inline bool PhysicsShape_IsValid_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsShape> shape);

  /// [NativeMethod(Name = "PhysicsWorld::DrawAllWorlds")]
  /// @brief Method PhysicsWorld_DrawAllWorlds, addr 0x6fd3764, size 0x44, virtual false, abstract: false, final false
  static inline void PhysicsWorld_DrawAllWorlds(::UnityEngine::LowLevelPhysics2D::PhysicsAABB drawAABB);

  /// @brief Method PhysicsWorld_DrawAllWorlds_Injected, addr 0x6fd37a8, size 0x3c, virtual false, abstract: false, final false
  static inline void PhysicsWorld_DrawAllWorlds_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsAABB> drawAABB);

  /// [NativeMethod(Name = "PhysicsWorld::GetBodyUpdateCallbackTargets", IsThreadSafe = true)]
  /// @brief Method PhysicsWorld_GetBodyUpdateCallbackTargets, addr 0x6fd3158, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_BodyUpdateCallbackTargets PhysicsWorld_GetBodyUpdateCallbackTargets(::UnityEngine::LowLevelPhysics2D::PhysicsWorld world,
                                                                                                                                       ::Unity::Collections::Allocator allocator);

  /// @brief Method PhysicsWorld_GetBodyUpdateCallbackTargets_Injected, addr 0x6fd31b4, size 0x54, virtual false, abstract: false, final false
  static inline void PhysicsWorld_GetBodyUpdateCallbackTargets_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld> world, ::Unity::Collections::Allocator allocator,
                                                                        ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_BodyUpdateCallbackTargets> ret);

  /// [NativeMethod(Name = "PhysicsWorld::GetContactCallbackTargets", IsThreadSafe = true)]
  /// @brief Method PhysicsWorld_GetContactCallbackTargets, addr 0x6fd32c4, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ContactCallbackTargets PhysicsWorld_GetContactCallbackTargets(::UnityEngine::LowLevelPhysics2D::PhysicsWorld world,
                                                                                                                                 ::Unity::Collections::Allocator allocator);

  /// @brief Method PhysicsWorld_GetContactCallbackTargets_Injected, addr 0x6fd332c, size 0x54, virtual false, abstract: false, final false
  static inline void PhysicsWorld_GetContactCallbackTargets_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld> world, ::Unity::Collections::Allocator allocator,
                                                                     ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ContactCallbackTargets> ret);

  /// [NativeMethod(Name = "PhysicsWorld::GetDefaultDefinition", IsThreadSafe = true)]
  /// @brief Method PhysicsWorld_GetDefaultDefinition, addr 0x6fd2f30, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition PhysicsWorld_GetDefaultDefinition(bool useSettings);

  /// @brief Method PhysicsWorld_GetDefaultDefinition_Injected, addr 0x6fd2fa8, size 0x44, virtual false, abstract: false, final false
  static inline void PhysicsWorld_GetDefaultDefinition_Injected(bool useSettings, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition> ret);

  /// [NativeMethod(Name = "PhysicsWorld::GetJointThresholdCallbackTargets", IsThreadSafe = true)]
  /// @brief Method PhysicsWorld_GetJointThresholdCallbackTargets, addr 0x6fd3380, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_JointThresholdCallbackTargets PhysicsWorld_GetJointThresholdCallbackTargets(::UnityEngine::LowLevelPhysics2D::PhysicsWorld world,
                                                                                                                                               ::Unity::Collections::Allocator allocator);

  /// @brief Method PhysicsWorld_GetJointThresholdCallbackTargets_Injected, addr 0x6fd33dc, size 0x54, virtual false, abstract: false, final false
  static inline void PhysicsWorld_GetJointThresholdCallbackTargets_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld> world, ::Unity::Collections::Allocator allocator,
                                                                            ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_JointThresholdCallbackTargets> ret);

  /// [NativeMethod(Name = "PhysicsWorld::GetRenderMaterial", IsThreadSafe = true)]
  /// @brief Method PhysicsWorld_GetRenderMaterial, addr 0x6fd3430, size 0x2f0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> PhysicsWorld_GetRenderMaterial(::StringW editorResourceName, ::StringW playerResourceName);

  /// @brief Method PhysicsWorld_GetRenderMaterial_Injected, addr 0x6fd3720, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr PhysicsWorld_GetRenderMaterial_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> editorResourceName,
                                                                         ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> playerResourceName);

  /// [NativeMethod(Name = "PhysicsWorld::GetTriggerCallbackTargets", IsThreadSafe = true)]
  /// @brief Method PhysicsWorld_GetTriggerCallbackTargets, addr 0x6fd3208, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_TriggerCallbackTargets PhysicsWorld_GetTriggerCallbackTargets(::UnityEngine::LowLevelPhysics2D::PhysicsWorld world,
                                                                                                                                 ::Unity::Collections::Allocator allocator);

  /// @brief Method PhysicsWorld_GetTriggerCallbackTargets_Injected, addr 0x6fd3270, size 0x54, virtual false, abstract: false, final false
  static inline void PhysicsWorld_GetTriggerCallbackTargets_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld> world, ::Unity::Collections::Allocator allocator,
                                                                     ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_TriggerCallbackTargets> ret);

  /// [NativeMethod(Name = "PhysicsWorld::IsValid", IsThreadSafe = true)]
  /// @brief Method PhysicsWorld_IsValid, addr 0x6fd2fec, size 0x44, virtual false, abstract: false, final false
  static inline bool PhysicsWorld_IsValid(::UnityEngine::LowLevelPhysics2D::PhysicsWorld world);

  /// @brief Method PhysicsWorld_IsValid_Injected, addr 0x6fd3030, size 0x3c, virtual false, abstract: false, final false
  static inline bool PhysicsWorld_IsValid_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld> world);

  /// [NativeMethod(Name = "PhysicsWorld::SetTransformWriteTweens", IsThreadSafe = true)]
  /// @brief Method PhysicsWorld_SetTransformWriteTweens, addr 0x6fd306c, size 0xa8, virtual false, abstract: false, final false
  static inline void PhysicsWorld_SetTransformWriteTweens(::UnityEngine::LowLevelPhysics2D::PhysicsWorld world,
                                                          ::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween> transformWriteTweens);

  /// @brief Method PhysicsWorld_SetTransformWriteTweens_Injected, addr 0x6fd3114, size 0x44, virtual false, abstract: false, final false
  static inline void PhysicsWorld_SetTransformWriteTweens_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld> world,
                                                                   ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> transformWriteTweens);

  /// [NativeMethod(Name = "PhysicsRelativeJoint::GetDefaultDefinition", IsThreadSafe = true)]
  /// @brief Method RelativeJoint_GetDefaultDefinition, addr 0x6fd24a4, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition RelativeJoint_GetDefaultDefinition(bool useSettings);

  /// @brief Method RelativeJoint_GetDefaultDefinition_Injected, addr 0x6fd251c, size 0x44, virtual false, abstract: false, final false
  static inline void RelativeJoint_GetDefaultDefinition_Injected(bool useSettings, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition> ret);

  /// [NativeMethod(Name = "PhysicsSliderJoint::GetDefaultDefinition", IsThreadSafe = true)]
  /// @brief Method SliderJoint_GetDefaultDefinition, addr 0x6fd2560, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsSliderJointDefinition SliderJoint_GetDefaultDefinition(bool useSettings);

  /// @brief Method SliderJoint_GetDefaultDefinition_Injected, addr 0x6fd25d4, size 0x44, virtual false, abstract: false, final false
  static inline void SliderJoint_GetDefaultDefinition_Injected(bool useSettings, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsSliderJointDefinition> ret);

  /// [NativeMethod(Name = "PhysicsWheelJoint::GetDefaultDefinition", IsThreadSafe = true)]
  /// @brief Method WheelJoint_GetDefaultDefinition, addr 0x6fd2788, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsWheelJointDefinition WheelJoint_GetDefaultDefinition(bool useSettings);

  /// @brief Method WheelJoint_GetDefaultDefinition_Injected, addr 0x6fd27fc, size 0x44, virtual false, abstract: false, final false
  static inline void WheelJoint_GetDefaultDefinition_Injected(bool useSettings, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWheelJointDefinition> ret);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsLowLevelScripting2D();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PhysicsLowLevelScripting2D", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhysicsLowLevelScripting2D(PhysicsLowLevelScripting2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhysicsLowLevelScripting2D", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhysicsLowLevelScripting2D(PhysicsLowLevelScripting2D const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21508 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D) == 0x10, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
