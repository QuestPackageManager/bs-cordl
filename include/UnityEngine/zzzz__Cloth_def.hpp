#pragma once
// IWYU pragma private; include "UnityEngine/Cloth.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Cloth)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine::Bindings {
struct BlittableListWrapper;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class CapsuleCollider;
}
namespace UnityEngine {
struct ClothSkinningCoefficient;
}
namespace UnityEngine {
struct ClothSphereColliderPair;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Cloth;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Cloth);
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Cloth
class CORDL_TYPE Cloth : public ::UnityEngine::Component {
public:
// Declarations
/// @brief Field <selfCollision>k__BackingField, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get__selfCollision_k__BackingField, put=__cordl_internal_set__selfCollision_k__BackingField)) bool  _selfCollision_k__BackingField;

/// @brief Field <useContinuousCollision>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__useContinuousCollision_k__BackingField, put=__cordl_internal_set__useContinuousCollision_k__BackingField)) float_t  _useContinuousCollision_k__BackingField;

 __declspec(property(get=get_bendingStiffness, put=set_bendingStiffness)) float_t  bendingStiffness;

 __declspec(property(get=get_capsuleColliders, put=set_capsuleColliders)) ::ArrayW<::UnityW<::UnityEngine::CapsuleCollider>,::Array<::UnityW<::UnityEngine::CapsuleCollider>>*>  capsuleColliders;

 __declspec(property(get=get_clothSolverFrequency, put=set_clothSolverFrequency)) float_t  clothSolverFrequency;

 __declspec(property(get=get_coefficients, put=set_coefficients)) ::ArrayW<::UnityEngine::ClothSkinningCoefficient,::Array<::UnityEngine::ClothSkinningCoefficient>*>  coefficients;

 __declspec(property(get=get_collisionMassScale, put=set_collisionMassScale)) float_t  collisionMassScale;

 __declspec(property(get=get_damping, put=set_damping)) float_t  damping;

 __declspec(property(get=get_enableContinuousCollision, put=set_enableContinuousCollision)) bool  enableContinuousCollision;

 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

 __declspec(property(get=get_externalAcceleration, put=set_externalAcceleration)) ::UnityEngine::Vector3  externalAcceleration;

 __declspec(property(get=get_friction, put=set_friction)) float_t  friction;

 __declspec(property(get=get_normals)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  normals;

 __declspec(property(get=get_randomAcceleration, put=set_randomAcceleration)) ::UnityEngine::Vector3  randomAcceleration;

 __declspec(property(get=get_selfCollision)) bool  selfCollision;

 __declspec(property(get=get_selfCollisionDistance, put=set_selfCollisionDistance)) float_t  selfCollisionDistance;

 __declspec(property(get=get_selfCollisionStiffness, put=set_selfCollisionStiffness)) float_t  selfCollisionStiffness;

 __declspec(property(get=get_sleepThreshold, put=set_sleepThreshold)) float_t  sleepThreshold;

 __declspec(property(get=get_solverFrequency, put=set_solverFrequency)) bool  solverFrequency;

 __declspec(property(get=get_sphereColliders, put=set_sphereColliders)) ::ArrayW<::UnityEngine::ClothSphereColliderPair,::Array<::UnityEngine::ClothSphereColliderPair>*>  sphereColliders;

 __declspec(property(get=get_stiffnessFrequency, put=set_stiffnessFrequency)) float_t  stiffnessFrequency;

 __declspec(property(get=get_stretchingStiffness, put=set_stretchingStiffness)) float_t  stretchingStiffness;

 __declspec(property(get=get_useContinuousCollision, put=set_useContinuousCollision)) float_t  useContinuousCollision;

 __declspec(property(get=get_useGravity, put=set_useGravity)) bool  useGravity;

 __declspec(property(get=get_useTethers, put=set_useTethers)) bool  useTethers;

 __declspec(property(get=get_useVirtualParticles, put=set_useVirtualParticles)) float_t  useVirtualParticles;

 __declspec(property(get=get_vertices)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  vertices;

 __declspec(property(get=get_worldAccelerationScale, put=set_worldAccelerationScale)) float_t  worldAccelerationScale;

 __declspec(property(get=get_worldVelocityScale, put=set_worldVelocityScale)) float_t  worldVelocityScale;

/// @brief Method ClearTransformMotion, addr 0x69018c4, size 0x80, virtual false, abstract: false, final false
inline void ClearTransformMotion() ;

/// @brief Method ClearTransformMotion_Injected, addr 0x6901944, size 0x3c, virtual false, abstract: false, final false
static inline void ClearTransformMotion_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetSelfAndInterCollisionIndices, addr 0x6901980, size 0x200, virtual false, abstract: false, final false
inline void GetSelfAndInterCollisionIndices(::System::Collections::Generic::List_1<uint32_t>*  indices) ;

/// @brief Method GetSelfAndInterCollisionIndices_Injected, addr 0x6901b80, size 0x44, virtual false, abstract: false, final false
static inline void GetSelfAndInterCollisionIndices_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableListWrapper>  indices) ;

/// @brief Method GetVirtualParticleIndices, addr 0x6901e08, size 0x200, virtual false, abstract: false, final false
inline void GetVirtualParticleIndices(::System::Collections::Generic::List_1<uint32_t>*  indicesOutList) ;

/// @brief Method GetVirtualParticleIndices_Injected, addr 0x6902008, size 0x44, virtual false, abstract: false, final false
static inline void GetVirtualParticleIndices_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableListWrapper>  indicesOutList) ;

/// @brief Method GetVirtualParticleWeights, addr 0x6902290, size 0x200, virtual false, abstract: false, final false
inline void GetVirtualParticleWeights(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  weightsOutList) ;

/// @brief Method GetVirtualParticleWeights_Injected, addr 0x6902490, size 0x44, virtual false, abstract: false, final false
static inline void GetVirtualParticleWeights_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableListWrapper>  weightsOutList) ;

static inline ::UnityEngine::Cloth* New_ctor() ;

/// @brief Method Raycast, addr 0x690282c, size 0xe0, virtual false, abstract: false, final false
inline ::UnityEngine::RaycastHit Raycast(::UnityEngine::Ray  ray, float_t  maxDistance, ::ByRef<bool>  hasHit) ;

/// @brief Method Raycast_Injected, addr 0x690290c, size 0x6c, virtual false, abstract: false, final false
static inline void Raycast_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Ray>  ray, float_t  maxDistance, ::ByRef<bool>  hasHit, ::ByRef<::UnityEngine::RaycastHit>  ret) ;

/// @brief Method SetEnabledFading, addr 0x6902824, size 0x8, virtual false, abstract: false, final false
inline void SetEnabledFading(bool  enabled) ;

/// @brief Method SetEnabledFading, addr 0x6902730, size 0xa0, virtual false, abstract: false, final false
inline void SetEnabledFading(bool  enabled, float_t  interpolationTime) ;

/// @brief Method SetEnabledFading_Injected, addr 0x69027d0, size 0x54, virtual false, abstract: false, final false
static inline void SetEnabledFading_Injected(::System::IntPtr  _unity_self, bool  enabled, float_t  interpolationTime) ;

/// @brief Method SetSelfAndInterCollisionIndices, addr 0x6901bc4, size 0x200, virtual false, abstract: false, final false
inline void SetSelfAndInterCollisionIndices(::System::Collections::Generic::List_1<uint32_t>*  indices) ;

/// @brief Method SetSelfAndInterCollisionIndices_Injected, addr 0x6901dc4, size 0x44, virtual false, abstract: false, final false
static inline void SetSelfAndInterCollisionIndices_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableListWrapper>  indices) ;

/// @brief Method SetVirtualParticleIndices, addr 0x690204c, size 0x200, virtual false, abstract: false, final false
inline void SetVirtualParticleIndices(::System::Collections::Generic::List_1<uint32_t>*  indicesIn) ;

/// @brief Method SetVirtualParticleIndices_Injected, addr 0x690224c, size 0x44, virtual false, abstract: false, final false
static inline void SetVirtualParticleIndices_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableListWrapper>  indicesIn) ;

/// @brief Method SetVirtualParticleWeights, addr 0x69024d4, size 0x200, virtual false, abstract: false, final false
inline void SetVirtualParticleWeights(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  weights) ;

/// @brief Method SetVirtualParticleWeights_Injected, addr 0x69026d4, size 0x44, virtual false, abstract: false, final false
static inline void SetVirtualParticleWeights_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableListWrapper>  weights) ;

constexpr bool const& __cordl_internal_get__selfCollision_k__BackingField() const;

constexpr bool& __cordl_internal_get__selfCollision_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__useContinuousCollision_k__BackingField() const;

constexpr float_t& __cordl_internal_get__useContinuousCollision_k__BackingField() ;

constexpr void __cordl_internal_set__selfCollision_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__useContinuousCollision_k__BackingField(float_t  value) ;

/// @brief Method .ctor, addr 0x6902978, size 0x688, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_bendingStiffness, addr 0x68ffba8, size 0x80, virtual false, abstract: false, final false
inline float_t get_bendingStiffness() ;

/// @brief Method get_bendingStiffness_Injected, addr 0x68ffc28, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_bendingStiffness_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_capsuleColliders, addr 0x68ff6f0, size 0x80, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::CapsuleCollider>,::Array<::UnityW<::UnityEngine::CapsuleCollider>>*> get_capsuleColliders() ;

/// @brief Method get_capsuleColliders_Injected, addr 0x68ff770, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::CapsuleCollider>,::Array<::UnityW<::UnityEngine::CapsuleCollider>>*> get_capsuleColliders_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_clothSolverFrequency, addr 0x6901098, size 0x80, virtual false, abstract: false, final false
inline float_t get_clothSolverFrequency() ;

/// @brief Method get_clothSolverFrequency_Injected, addr 0x6901118, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_clothSolverFrequency_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_coefficients, addr 0x68ff404, size 0x160, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::ClothSkinningCoefficient,::Array<::UnityEngine::ClothSkinningCoefficient>*> get_coefficients() ;

/// @brief Method get_coefficients_Injected, addr 0x68ff564, size 0x44, virtual false, abstract: false, final false
static inline void get_coefficients_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// @brief Method get_collisionMassScale, addr 0x69008a8, size 0x80, virtual false, abstract: false, final false
inline float_t get_collisionMassScale() ;

/// @brief Method get_collisionMassScale_Injected, addr 0x6900928, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_collisionMassScale_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_damping, addr 0x68ffed8, size 0x80, virtual false, abstract: false, final false
inline float_t get_damping() ;

/// @brief Method get_damping_Injected, addr 0x68fff58, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_damping_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_enableContinuousCollision, addr 0x6900a40, size 0x80, virtual false, abstract: false, final false
inline bool get_enableContinuousCollision() ;

/// @brief Method get_enableContinuousCollision_Injected, addr 0x6900ac0, size 0x3c, virtual false, abstract: false, final false
static inline bool get_enableContinuousCollision_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_enabled, addr 0x6900580, size 0x80, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method get_enabled_Injected, addr 0x6900600, size 0x3c, virtual false, abstract: false, final false
static inline bool get_enabled_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_externalAcceleration, addr 0x6900070, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_externalAcceleration() ;

/// @brief Method get_externalAcceleration_Injected, addr 0x6900110, size 0x44, virtual false, abstract: false, final false
static inline void get_externalAcceleration_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_friction, addr 0x6900710, size 0x80, virtual false, abstract: false, final false
inline float_t get_friction() ;

/// @brief Method get_friction_Injected, addr 0x6900790, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_friction_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_normals, addr 0x68ff260, size 0x160, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> get_normals() ;

/// @brief Method get_normals_Injected, addr 0x68ff3c0, size 0x44, virtual false, abstract: false, final false
static inline void get_normals_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// @brief Method get_randomAcceleration, addr 0x6900230, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_randomAcceleration() ;

/// @brief Method get_randomAcceleration_Injected, addr 0x69002d0, size 0x44, virtual false, abstract: false, final false
static inline void get_randomAcceleration_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_selfCollision, addr 0x6902728, size 0x8, virtual false, abstract: false, final false
inline bool get_selfCollision() ;

/// @brief Method get_selfCollisionDistance, addr 0x6901594, size 0x80, virtual false, abstract: false, final false
inline float_t get_selfCollisionDistance() ;

/// @brief Method get_selfCollisionDistance_Injected, addr 0x6901614, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_selfCollisionDistance_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_selfCollisionStiffness, addr 0x690172c, size 0x80, virtual false, abstract: false, final false
inline float_t get_selfCollisionStiffness() ;

/// @brief Method get_selfCollisionStiffness_Injected, addr 0x69017ac, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_selfCollisionStiffness_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_sleepThreshold, addr 0x68ffa10, size 0x80, virtual false, abstract: false, final false
inline float_t get_sleepThreshold() ;

/// @brief Method get_sleepThreshold_Injected, addr 0x68ffa90, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_sleepThreshold_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_solverFrequency, addr 0x6901230, size 0x18, virtual false, abstract: false, final false
inline bool get_solverFrequency() ;

/// @brief Method get_sphereColliders, addr 0x68ff880, size 0x80, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::ClothSphereColliderPair,::Array<::UnityEngine::ClothSphereColliderPair>*> get_sphereColliders() ;

/// @brief Method get_sphereColliders_Injected, addr 0x68ff900, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::ClothSphereColliderPair,::Array<::UnityEngine::ClothSphereColliderPair>*> get_sphereColliders_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_stiffnessFrequency, addr 0x69013fc, size 0x80, virtual false, abstract: false, final false
inline float_t get_stiffnessFrequency() ;

/// @brief Method get_stiffnessFrequency_Injected, addr 0x690147c, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_stiffnessFrequency_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_stretchingStiffness, addr 0x68ffd40, size 0x80, virtual false, abstract: false, final false
inline float_t get_stretchingStiffness() ;

/// @brief Method get_stretchingStiffness_Injected, addr 0x68ffdc0, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_stretchingStiffness_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_useContinuousCollision, addr 0x6902718, size 0x8, virtual false, abstract: false, final false
inline float_t get_useContinuousCollision() ;

/// @brief Method get_useGravity, addr 0x69003f0, size 0x80, virtual false, abstract: false, final false
inline bool get_useGravity() ;

/// @brief Method get_useGravity_Injected, addr 0x6900470, size 0x3c, virtual false, abstract: false, final false
static inline bool get_useGravity_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_useTethers, addr 0x690126c, size 0x80, virtual false, abstract: false, final false
inline bool get_useTethers() ;

/// @brief Method get_useTethers_Injected, addr 0x69012ec, size 0x3c, virtual false, abstract: false, final false
static inline bool get_useTethers_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_useVirtualParticles, addr 0x6900bd0, size 0x80, virtual false, abstract: false, final false
inline float_t get_useVirtualParticles() ;

/// @brief Method get_useVirtualParticles_Injected, addr 0x6900c50, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_useVirtualParticles_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_vertices, addr 0x68ff0bc, size 0x160, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> get_vertices() ;

/// @brief Method get_vertices_Injected, addr 0x68ff21c, size 0x44, virtual false, abstract: false, final false
static inline void get_vertices_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// @brief Method get_worldAccelerationScale, addr 0x6900f00, size 0x80, virtual false, abstract: false, final false
inline float_t get_worldAccelerationScale() ;

/// @brief Method get_worldAccelerationScale_Injected, addr 0x6900f80, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_worldAccelerationScale_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_worldVelocityScale, addr 0x6900d68, size 0x80, virtual false, abstract: false, final false
inline float_t get_worldVelocityScale() ;

/// @brief Method get_worldVelocityScale_Injected, addr 0x6900de8, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_worldVelocityScale_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_bendingStiffness, addr 0x68ffc64, size 0x90, virtual false, abstract: false, final false
inline void set_bendingStiffness(float_t  value) ;

/// @brief Method set_bendingStiffness_Injected, addr 0x68ffcf4, size 0x4c, virtual false, abstract: false, final false
static inline void set_bendingStiffness_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_capsuleColliders, addr 0x68ff7ac, size 0x90, virtual false, abstract: false, final false
inline void set_capsuleColliders(::ArrayW<::UnityEngine::CapsuleCollider*,::Array<::UnityEngine::CapsuleCollider*>*>  value) ;

/// @brief Method set_capsuleColliders_Injected, addr 0x68ff83c, size 0x44, virtual false, abstract: false, final false
static inline void set_capsuleColliders_Injected(::System::IntPtr  _unity_self, ::ArrayW<::UnityEngine::CapsuleCollider*,::Array<::UnityEngine::CapsuleCollider*>*>  value) ;

/// @brief Method set_clothSolverFrequency, addr 0x6901154, size 0x90, virtual false, abstract: false, final false
inline void set_clothSolverFrequency(float_t  value) ;

/// @brief Method set_clothSolverFrequency_Injected, addr 0x69011e4, size 0x4c, virtual false, abstract: false, final false
static inline void set_clothSolverFrequency_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_coefficients, addr 0x68ff5a8, size 0x104, virtual false, abstract: false, final false
inline void set_coefficients(::ArrayW<::UnityEngine::ClothSkinningCoefficient,::Array<::UnityEngine::ClothSkinningCoefficient>*>  value) ;

/// @brief Method set_coefficients_Injected, addr 0x68ff6ac, size 0x44, virtual false, abstract: false, final false
static inline void set_coefficients_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  value) ;

/// @brief Method set_collisionMassScale, addr 0x6900964, size 0x90, virtual false, abstract: false, final false
inline void set_collisionMassScale(float_t  value) ;

/// @brief Method set_collisionMassScale_Injected, addr 0x69009f4, size 0x4c, virtual false, abstract: false, final false
static inline void set_collisionMassScale_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_damping, addr 0x68fff94, size 0x90, virtual false, abstract: false, final false
inline void set_damping(float_t  value) ;

/// @brief Method set_damping_Injected, addr 0x6900024, size 0x4c, virtual false, abstract: false, final false
static inline void set_damping_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_enableContinuousCollision, addr 0x6900afc, size 0x90, virtual false, abstract: false, final false
inline void set_enableContinuousCollision(bool  value) ;

/// @brief Method set_enableContinuousCollision_Injected, addr 0x6900b8c, size 0x44, virtual false, abstract: false, final false
static inline void set_enableContinuousCollision_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_enabled, addr 0x690063c, size 0x90, virtual false, abstract: false, final false
inline void set_enabled(bool  value) ;

/// @brief Method set_enabled_Injected, addr 0x69006cc, size 0x44, virtual false, abstract: false, final false
static inline void set_enabled_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_externalAcceleration, addr 0x6900154, size 0x98, virtual false, abstract: false, final false
inline void set_externalAcceleration(::UnityEngine::Vector3  value) ;

/// @brief Method set_externalAcceleration_Injected, addr 0x69001ec, size 0x44, virtual false, abstract: false, final false
static inline void set_externalAcceleration_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Vector3>  value) ;

/// @brief Method set_friction, addr 0x69007cc, size 0x90, virtual false, abstract: false, final false
inline void set_friction(float_t  value) ;

/// @brief Method set_friction_Injected, addr 0x690085c, size 0x4c, virtual false, abstract: false, final false
static inline void set_friction_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_randomAcceleration, addr 0x6900314, size 0x98, virtual false, abstract: false, final false
inline void set_randomAcceleration(::UnityEngine::Vector3  value) ;

/// @brief Method set_randomAcceleration_Injected, addr 0x69003ac, size 0x44, virtual false, abstract: false, final false
static inline void set_randomAcceleration_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Vector3>  value) ;

/// @brief Method set_selfCollisionDistance, addr 0x6901650, size 0x90, virtual false, abstract: false, final false
inline void set_selfCollisionDistance(float_t  value) ;

/// @brief Method set_selfCollisionDistance_Injected, addr 0x69016e0, size 0x4c, virtual false, abstract: false, final false
static inline void set_selfCollisionDistance_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_selfCollisionStiffness, addr 0x69017e8, size 0x90, virtual false, abstract: false, final false
inline void set_selfCollisionStiffness(float_t  value) ;

/// @brief Method set_selfCollisionStiffness_Injected, addr 0x6901878, size 0x4c, virtual false, abstract: false, final false
static inline void set_selfCollisionStiffness_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_sleepThreshold, addr 0x68ffacc, size 0x90, virtual false, abstract: false, final false
inline void set_sleepThreshold(float_t  value) ;

/// @brief Method set_sleepThreshold_Injected, addr 0x68ffb5c, size 0x4c, virtual false, abstract: false, final false
static inline void set_sleepThreshold_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_solverFrequency, addr 0x6901248, size 0x24, virtual false, abstract: false, final false
inline void set_solverFrequency(bool  value) ;

/// @brief Method set_sphereColliders, addr 0x68ff93c, size 0x90, virtual false, abstract: false, final false
inline void set_sphereColliders(::ArrayW<::UnityEngine::ClothSphereColliderPair,::Array<::UnityEngine::ClothSphereColliderPair>*>  value) ;

/// @brief Method set_sphereColliders_Injected, addr 0x68ff9cc, size 0x44, virtual false, abstract: false, final false
static inline void set_sphereColliders_Injected(::System::IntPtr  _unity_self, ::ArrayW<::UnityEngine::ClothSphereColliderPair,::Array<::UnityEngine::ClothSphereColliderPair>*>  value) ;

/// @brief Method set_stiffnessFrequency, addr 0x69014b8, size 0x90, virtual false, abstract: false, final false
inline void set_stiffnessFrequency(float_t  value) ;

/// @brief Method set_stiffnessFrequency_Injected, addr 0x6901548, size 0x4c, virtual false, abstract: false, final false
static inline void set_stiffnessFrequency_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_stretchingStiffness, addr 0x68ffdfc, size 0x90, virtual false, abstract: false, final false
inline void set_stretchingStiffness(float_t  value) ;

/// @brief Method set_stretchingStiffness_Injected, addr 0x68ffe8c, size 0x4c, virtual false, abstract: false, final false
static inline void set_stretchingStiffness_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_useContinuousCollision, addr 0x6902720, size 0x8, virtual false, abstract: false, final false
inline void set_useContinuousCollision(float_t  value) ;

/// @brief Method set_useGravity, addr 0x69004ac, size 0x90, virtual false, abstract: false, final false
inline void set_useGravity(bool  value) ;

/// @brief Method set_useGravity_Injected, addr 0x690053c, size 0x44, virtual false, abstract: false, final false
static inline void set_useGravity_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_useTethers, addr 0x6901328, size 0x90, virtual false, abstract: false, final false
inline void set_useTethers(bool  value) ;

/// @brief Method set_useTethers_Injected, addr 0x69013b8, size 0x44, virtual false, abstract: false, final false
static inline void set_useTethers_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_useVirtualParticles, addr 0x6900c8c, size 0x90, virtual false, abstract: false, final false
inline void set_useVirtualParticles(float_t  value) ;

/// @brief Method set_useVirtualParticles_Injected, addr 0x6900d1c, size 0x4c, virtual false, abstract: false, final false
static inline void set_useVirtualParticles_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_worldAccelerationScale, addr 0x6900fbc, size 0x90, virtual false, abstract: false, final false
inline void set_worldAccelerationScale(float_t  value) ;

/// @brief Method set_worldAccelerationScale_Injected, addr 0x690104c, size 0x4c, virtual false, abstract: false, final false
static inline void set_worldAccelerationScale_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_worldVelocityScale, addr 0x6900e24, size 0x90, virtual false, abstract: false, final false
inline void set_worldVelocityScale(float_t  value) ;

/// @brief Method set_worldVelocityScale_Injected, addr 0x6900eb4, size 0x4c, virtual false, abstract: false, final false
static inline void set_worldVelocityScale_Injected(::System::IntPtr  _unity_self, float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Cloth() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Cloth", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Cloth(Cloth && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Cloth", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Cloth(Cloth const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22432};

/// @brief Field <useContinuousCollision>k__BackingField, offset: 0x18, size: 0x4, def value: None
 float_t  ____useContinuousCollision_k__BackingField;

/// @brief Field <selfCollision>k__BackingField, offset: 0x1c, size: 0x1, def value: None
 bool  ____selfCollision_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Cloth, ____useContinuousCollision_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Cloth, ____selfCollision_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Cloth, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Cloth);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Cloth*, "UnityEngine", "Cloth");
