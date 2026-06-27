#pragma once
// IWYU pragma private; include "UnityEngine/PhysicsScene.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhysicsScene)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct QueryTriggerInteraction;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
struct SimulationOption;
}
namespace UnityEngine {
struct SimulationStage;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct PhysicsScene;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PhysicsScene);
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.PhysicsScene
struct CORDL_TYPE PhysicsScene {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::PhysicsScene>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::PhysicsScene>*() ;

/// @brief Method BoxCast, addr 0x6a3e6f0, size 0xf4, virtual false, abstract: false, final false
inline bool BoxCast(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::ByRef<::UnityEngine::RaycastHit>  hitInfo) ;

/// @brief Method BoxCast, addr 0x6a30408, size 0x30, virtual false, abstract: false, final false
inline bool BoxCast(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, ::UnityEngine::Quaternion  orientation, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method BoxCast, addr 0x6a3eb90, size 0xf4, virtual false, abstract: false, final false
inline int32_t BoxCast(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results) ;

/// @brief Method BoxCast, addr 0x6a364b0, size 0x148, virtual false, abstract: false, final false
inline int32_t BoxCast(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, ::UnityEngine::Quaternion  orientation, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CapsuleCast, addr 0x6a2f31c, size 0x20, virtual false, abstract: false, final false
inline bool CapsuleCast(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CapsuleCast, addr 0x6a346e8, size 0x144, virtual false, abstract: false, final false
inline int32_t CapsuleCast(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Equals, addr 0x6a3cdd0, size 0x7c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method Equals, addr 0x6a3ce4c, size 0x10, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::PhysicsScene  other) ;

/// @brief Method GetHashCode, addr 0x6a3cdc8, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Internal_BoxCast, addr 0x6a3e590, size 0x160, virtual false, abstract: false, final false
static inline bool Internal_BoxCast(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Quaternion  orientation, ::UnityEngine::Vector3  direction, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_BoxCastNonAlloc, addr 0x6a3e9c8, size 0x12c, virtual false, abstract: false, final false
static inline int32_t Internal_BoxCastNonAlloc(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  raycastHits, ::UnityEngine::Quaternion  orientation, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_BoxCastNonAlloc_Injected, addr 0x6a3eaf4, size 0x9c, virtual false, abstract: false, final false
static inline int32_t Internal_BoxCastNonAlloc_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene, ::ByRef<::UnityEngine::Vector3>  center, ::ByRef<::UnityEngine::Vector3>  halfExtents, ::ByRef<::UnityEngine::Vector3>  direction, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  raycastHits, ::ByRef<::UnityEngine::Quaternion>  orientation, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_CapsuleCast, addr 0x6a3db08, size 0x15c, virtual false, abstract: false, final false
static inline bool Internal_CapsuleCast(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_CapsuleCastNonAlloc, addr 0x6a3dc64, size 0x128, virtual false, abstract: false, final false
static inline int32_t Internal_CapsuleCastNonAlloc(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  raycastHits, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_CapsuleCastNonAlloc_Injected, addr 0x6a3dd8c, size 0x9c, virtual false, abstract: false, final false
static inline int32_t Internal_CapsuleCastNonAlloc_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene, ::ByRef<::UnityEngine::Vector3>  p0, ::ByRef<::UnityEngine::Vector3>  p1, float_t  radius, ::ByRef<::UnityEngine::Vector3>  direction, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  raycastHits, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_Raycast, addr 0x6a3d744, size 0x7c, virtual false, abstract: false, final false
static inline bool Internal_Raycast(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Ray  ray, float_t  maxDistance, ::ByRef<::UnityEngine::RaycastHit>  hit, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_RaycastNonAlloc, addr 0x6a3d83c, size 0x104, virtual false, abstract: false, final false
static inline int32_t Internal_RaycastNonAlloc(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  raycastHits, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_RaycastNonAlloc_Injected, addr 0x6a3d940, size 0x7c, virtual false, abstract: false, final false
static inline int32_t Internal_RaycastNonAlloc_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene, ::ByRef<::UnityEngine::Ray>  ray, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  raycastHits, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_RaycastTest, addr 0x6a3d65c, size 0x7c, virtual false, abstract: false, final false
static inline bool Internal_RaycastTest(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_RaycastTest_Injected, addr 0x6a3d6d8, size 0x6c, virtual false, abstract: false, final false
static inline bool Internal_RaycastTest_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene, ::ByRef<::UnityEngine::Ray>  ray, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_Raycast_Injected, addr 0x6a3d7c0, size 0x7c, virtual false, abstract: false, final false
static inline bool Internal_Raycast_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene, ::ByRef<::UnityEngine::Ray>  ray, float_t  maxDistance, ::ByRef<::UnityEngine::RaycastHit>  hit, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_SphereCast, addr 0x6a3e064, size 0x13c, virtual false, abstract: false, final false
static inline bool Internal_SphereCast(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_SphereCastNonAlloc, addr 0x6a3e1a0, size 0x114, virtual false, abstract: false, final false
static inline int32_t Internal_SphereCastNonAlloc(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  raycastHits, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_SphereCastNonAlloc_Injected, addr 0x6a3e2b4, size 0x8c, virtual false, abstract: false, final false
static inline int32_t Internal_SphereCastNonAlloc_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene, ::ByRef<::UnityEngine::Vector3>  origin, float_t  radius, ::ByRef<::UnityEngine::Vector3>  direction, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  raycastHits, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method InterpolateBodies, addr 0x6a3d3b4, size 0x154, virtual false, abstract: false, final false
inline void InterpolateBodies() ;

/// @brief Method IsEmpty, addr 0x6a3cf24, size 0xc8, virtual false, abstract: false, final false
inline bool IsEmpty() ;

/// @brief Method IsEmpty_Internal, addr 0x6a3cfec, size 0x44, virtual false, abstract: false, final false
static inline bool IsEmpty_Internal(::UnityEngine::PhysicsScene  physicsScene) ;

/// @brief Method IsEmpty_Internal_Injected, addr 0x6a3d030, size 0x3c, virtual false, abstract: false, final false
static inline bool IsEmpty_Internal_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene) ;

/// @brief Method IsValid, addr 0x6a3ce5c, size 0x48, virtual false, abstract: false, final false
inline bool IsValid() ;

/// @brief Method IsValid_Internal, addr 0x6a3cea4, size 0x44, virtual false, abstract: false, final false
static inline bool IsValid_Internal(::UnityEngine::PhysicsScene  physicsScene) ;

/// @brief Method IsValid_Internal_Injected, addr 0x6a3cee8, size 0x3c, virtual false, abstract: false, final false
static inline bool IsValid_Internal_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene) ;

/// @brief Method OverlapBox, addr 0x6a3e8f4, size 0xd4, virtual false, abstract: false, final false
inline int32_t OverlapBox(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results) ;

/// @brief Method OverlapBox, addr 0x6a360a0, size 0x1c, virtual false, abstract: false, final false
inline int32_t OverlapBox(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results, ::UnityEngine::Quaternion  orientation, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapBoxNonAlloc_Internal, addr 0x6a3e7e4, size 0x8c, virtual false, abstract: false, final false
static inline int32_t OverlapBoxNonAlloc_Internal(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results, ::UnityEngine::Quaternion  orientation, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapBoxNonAlloc_Internal_Injected, addr 0x6a3e870, size 0x84, virtual false, abstract: false, final false
static inline int32_t OverlapBoxNonAlloc_Internal_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene, ::ByRef<::UnityEngine::Vector3>  center, ::ByRef<::UnityEngine::Vector3>  halfExtents, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results, ::ByRef<::UnityEngine::Quaternion>  orientation, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapCapsule, addr 0x6a373b8, size 0x8, virtual false, abstract: false, final false
inline int32_t OverlapCapsule(::UnityEngine::Vector3  point0, ::UnityEngine::Vector3  point1, float_t  radius, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapCapsuleNonAlloc_Internal, addr 0x6a3de28, size 0x90, virtual false, abstract: false, final false
static inline int32_t OverlapCapsuleNonAlloc_Internal(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  point0, ::UnityEngine::Vector3  point1, float_t  radius, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapCapsuleNonAlloc_Internal_Injected, addr 0x6a3deb8, size 0x84, virtual false, abstract: false, final false
static inline int32_t OverlapCapsuleNonAlloc_Internal_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene, ::ByRef<::UnityEngine::Vector3>  point0, ::ByRef<::UnityEngine::Vector3>  point1, float_t  radius, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapSphere, addr 0x6a341e8, size 0x8, virtual false, abstract: false, final false
inline int32_t OverlapSphere(::UnityEngine::Vector3  position, float_t  radius, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapSphereNonAlloc_Internal, addr 0x6a3e340, size 0x84, virtual false, abstract: false, final false
static inline int32_t OverlapSphereNonAlloc_Internal(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  position, float_t  radius, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapSphereNonAlloc_Internal_Injected, addr 0x6a3e3c4, size 0x7c, virtual false, abstract: false, final false
static inline int32_t OverlapSphereNonAlloc_Internal_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene, ::ByRef<::UnityEngine::Vector3>  position, float_t  radius, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Query_BoxCast, addr 0x6a3e440, size 0xb4, virtual false, abstract: false, final false
static inline bool Query_BoxCast(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::UnityEngine::Quaternion  orientation, float_t  maxDistance, ::ByRef<::UnityEngine::RaycastHit>  outHit, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Query_BoxCast_Injected, addr 0x6a3e4f4, size 0x9c, virtual false, abstract: false, final false
static inline bool Query_BoxCast_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene, ::ByRef<::UnityEngine::Vector3>  center, ::ByRef<::UnityEngine::Vector3>  halfExtents, ::ByRef<::UnityEngine::Vector3>  direction, ::ByRef<::UnityEngine::Quaternion>  orientation, float_t  maxDistance, ::ByRef<::UnityEngine::RaycastHit>  outHit, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Query_CapsuleCast, addr 0x6a3d9bc, size 0xb0, virtual false, abstract: false, final false
static inline bool Query_CapsuleCast(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, float_t  maxDistance, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Query_CapsuleCast_Injected, addr 0x6a3da6c, size 0x9c, virtual false, abstract: false, final false
static inline bool Query_CapsuleCast_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene, ::ByRef<::UnityEngine::Vector3>  point1, ::ByRef<::UnityEngine::Vector3>  point2, float_t  radius, ::ByRef<::UnityEngine::Vector3>  direction, float_t  maxDistance, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Query_SphereCast, addr 0x6a3df3c, size 0x9c, virtual false, abstract: false, final false
static inline bool Query_SphereCast(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, float_t  maxDistance, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Query_SphereCast_Injected, addr 0x6a3dfd8, size 0x8c, virtual false, abstract: false, final false
static inline bool Query_SphereCast_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene, ::ByRef<::UnityEngine::Vector3>  origin, float_t  radius, ::ByRef<::UnityEngine::Vector3>  direction, float_t  maxDistance, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Raycast, addr 0x6a2e3d4, size 0x1fc, virtual false, abstract: false, final false
inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Raycast, addr 0x6a2dec0, size 0x1e8, virtual false, abstract: false, final false
inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Raycast, addr 0x6a317bc, size 0x258, virtual false, abstract: false, final false
inline int32_t Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  raycastHits, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method ResetInterpolationPoses, addr 0x6a3d508, size 0x154, virtual false, abstract: false, final false
inline void ResetInterpolationPoses() ;

/// @brief Method RunSimulationStages, addr 0x6a3d208, size 0x1ac, virtual false, abstract: false, final false
inline void RunSimulationStages(float_t  step, ::UnityEngine::SimulationStage  stages, ::UnityEngine::SimulationOption  options) ;

/// @brief Method Simulate, addr 0x6a3d06c, size 0x19c, virtual false, abstract: false, final false
inline void Simulate(float_t  step) ;

/// @brief Method SphereCast, addr 0x6a2fb44, size 0x8, virtual false, abstract: false, final false
inline bool SphereCast(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method SphereCast, addr 0x6a34c44, size 0x130, virtual false, abstract: false, final false
inline int32_t SphereCast(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method ToString, addr 0x6a3ccd8, size 0xd8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::PhysicsScene>"
constexpr ::System::IEquatable_1<::UnityEngine::PhysicsScene>* i___System__IEquatable_1___UnityEngine__PhysicsScene_() ;

/// @brief Method op_Equality, addr 0x6a3cdb0, size 0xc, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::PhysicsScene  lhs, ::UnityEngine::PhysicsScene  rhs) ;

/// @brief Method op_Inequality, addr 0x6a3cdbc, size 0xc, virtual false, abstract: false, final false
static inline bool op_Inequality(::UnityEngine::PhysicsScene  lhs, ::UnityEngine::PhysicsScene  rhs) ;

// Ctor Parameters []
// @brief default ctor
constexpr PhysicsScene() ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PhysicsScene(int32_t  m_Handle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18657};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field m_Handle, offset: 0x0, size: 0x4, def value: None
 int32_t  m_Handle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::PhysicsScene, m_Handle) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::PhysicsScene, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PhysicsScene, "UnityEngine", "PhysicsScene");
