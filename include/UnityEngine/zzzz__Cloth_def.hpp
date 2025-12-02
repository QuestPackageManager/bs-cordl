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
template <typename T> class List_1;
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
  __declspec(property(get = __cordl_internal_get__selfCollision_k__BackingField, put = __cordl_internal_set__selfCollision_k__BackingField)) bool _selfCollision_k__BackingField;

  /// @brief Field <useContinuousCollision>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__useContinuousCollision_k__BackingField,
                      put = __cordl_internal_set__useContinuousCollision_k__BackingField)) float_t _useContinuousCollision_k__BackingField;

  __declspec(property(get = get_bendingStiffness, put = set_bendingStiffness)) float_t bendingStiffness;

  __declspec(property(get = get_capsuleColliders, put = set_capsuleColliders)) ::ArrayW<::UnityW<::UnityEngine::CapsuleCollider>, ::Array<::UnityW<::UnityEngine::CapsuleCollider>>*> capsuleColliders;

  __declspec(property(get = get_clothSolverFrequency, put = set_clothSolverFrequency)) float_t clothSolverFrequency;

  __declspec(property(get = get_coefficients, put = set_coefficients)) ::ArrayW<::UnityEngine::ClothSkinningCoefficient, ::Array<::UnityEngine::ClothSkinningCoefficient>*> coefficients;

  __declspec(property(get = get_collisionMassScale, put = set_collisionMassScale)) float_t collisionMassScale;

  __declspec(property(get = get_damping, put = set_damping)) float_t damping;

  __declspec(property(get = get_enableContinuousCollision, put = set_enableContinuousCollision)) bool enableContinuousCollision;

  __declspec(property(get = get_enabled, put = set_enabled)) bool enabled;

  __declspec(property(get = get_externalAcceleration, put = set_externalAcceleration)) ::UnityEngine::Vector3 externalAcceleration;

  __declspec(property(get = get_friction, put = set_friction)) float_t friction;

  __declspec(property(get = get_normals)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> normals;

  __declspec(property(get = get_randomAcceleration, put = set_randomAcceleration)) ::UnityEngine::Vector3 randomAcceleration;

  __declspec(property(get = get_selfCollision)) bool selfCollision;

  __declspec(property(get = get_selfCollisionDistance, put = set_selfCollisionDistance)) float_t selfCollisionDistance;

  __declspec(property(get = get_selfCollisionStiffness, put = set_selfCollisionStiffness)) float_t selfCollisionStiffness;

  __declspec(property(get = get_sleepThreshold, put = set_sleepThreshold)) float_t sleepThreshold;

  __declspec(property(get = get_solverFrequency, put = set_solverFrequency)) bool solverFrequency;

  __declspec(property(get = get_sphereColliders, put = set_sphereColliders)) ::ArrayW<::UnityEngine::ClothSphereColliderPair, ::Array<::UnityEngine::ClothSphereColliderPair>*> sphereColliders;

  __declspec(property(get = get_stiffnessFrequency, put = set_stiffnessFrequency)) float_t stiffnessFrequency;

  __declspec(property(get = get_stretchingStiffness, put = set_stretchingStiffness)) float_t stretchingStiffness;

  __declspec(property(get = get_useContinuousCollision, put = set_useContinuousCollision)) float_t useContinuousCollision;

  __declspec(property(get = get_useGravity, put = set_useGravity)) bool useGravity;

  __declspec(property(get = get_useTethers, put = set_useTethers)) bool useTethers;

  __declspec(property(get = get_useVirtualParticles, put = set_useVirtualParticles)) float_t useVirtualParticles;

  __declspec(property(get = get_vertices)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> vertices;

  __declspec(property(get = get_worldAccelerationScale, put = set_worldAccelerationScale)) float_t worldAccelerationScale;

  __declspec(property(get = get_worldVelocityScale, put = set_worldVelocityScale)) float_t worldVelocityScale;

  /// @brief Method ClearTransformMotion, addr 0x6825b08, size 0x80, virtual false, abstract: false, final false
  inline void ClearTransformMotion();

  /// @brief Method ClearTransformMotion_Injected, addr 0x6825b88, size 0x3c, virtual false, abstract: false, final false
  static inline void ClearTransformMotion_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetSelfAndInterCollisionIndices, addr 0x6825bc4, size 0x200, virtual false, abstract: false, final false
  inline void GetSelfAndInterCollisionIndices(::System::Collections::Generic::List_1<uint32_t>* indices);

  /// @brief Method GetSelfAndInterCollisionIndices_Injected, addr 0x6825dc4, size 0x44, virtual false, abstract: false, final false
  static inline void GetSelfAndInterCollisionIndices_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableListWrapper> indices);

  /// @brief Method GetVirtualParticleIndices, addr 0x682604c, size 0x200, virtual false, abstract: false, final false
  inline void GetVirtualParticleIndices(::System::Collections::Generic::List_1<uint32_t>* indicesOutList);

  /// @brief Method GetVirtualParticleIndices_Injected, addr 0x682624c, size 0x44, virtual false, abstract: false, final false
  static inline void GetVirtualParticleIndices_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableListWrapper> indicesOutList);

  /// @brief Method GetVirtualParticleWeights, addr 0x68264d4, size 0x200, virtual false, abstract: false, final false
  inline void GetVirtualParticleWeights(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* weightsOutList);

  /// @brief Method GetVirtualParticleWeights_Injected, addr 0x68266d4, size 0x44, virtual false, abstract: false, final false
  static inline void GetVirtualParticleWeights_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableListWrapper> weightsOutList);

  static inline ::UnityEngine::Cloth* New_ctor();

  /// @brief Method Raycast, addr 0x6826a70, size 0xe0, virtual false, abstract: false, final false
  inline ::UnityEngine::RaycastHit Raycast(::UnityEngine::Ray ray, float_t maxDistance, ::ByRef<bool> hasHit);

  /// @brief Method Raycast_Injected, addr 0x6826b50, size 0x6c, virtual false, abstract: false, final false
  static inline void Raycast_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Ray> ray, float_t maxDistance, ::ByRef<bool> hasHit, ::ByRef<::UnityEngine::RaycastHit> ret);

  /// @brief Method SetEnabledFading, addr 0x6826a68, size 0x8, virtual false, abstract: false, final false
  inline void SetEnabledFading(bool enabled);

  /// @brief Method SetEnabledFading, addr 0x6826974, size 0xa0, virtual false, abstract: false, final false
  inline void SetEnabledFading(bool enabled, float_t interpolationTime);

  /// @brief Method SetEnabledFading_Injected, addr 0x6826a14, size 0x54, virtual false, abstract: false, final false
  static inline void SetEnabledFading_Injected(::System::IntPtr _unity_self, bool enabled, float_t interpolationTime);

  /// @brief Method SetSelfAndInterCollisionIndices, addr 0x6825e08, size 0x200, virtual false, abstract: false, final false
  inline void SetSelfAndInterCollisionIndices(::System::Collections::Generic::List_1<uint32_t>* indices);

  /// @brief Method SetSelfAndInterCollisionIndices_Injected, addr 0x6826008, size 0x44, virtual false, abstract: false, final false
  static inline void SetSelfAndInterCollisionIndices_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableListWrapper> indices);

  /// @brief Method SetVirtualParticleIndices, addr 0x6826290, size 0x200, virtual false, abstract: false, final false
  inline void SetVirtualParticleIndices(::System::Collections::Generic::List_1<uint32_t>* indicesIn);

  /// @brief Method SetVirtualParticleIndices_Injected, addr 0x6826490, size 0x44, virtual false, abstract: false, final false
  static inline void SetVirtualParticleIndices_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableListWrapper> indicesIn);

  /// @brief Method SetVirtualParticleWeights, addr 0x6826718, size 0x200, virtual false, abstract: false, final false
  inline void SetVirtualParticleWeights(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* weights);

  /// @brief Method SetVirtualParticleWeights_Injected, addr 0x6826918, size 0x44, virtual false, abstract: false, final false
  static inline void SetVirtualParticleWeights_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableListWrapper> weights);

  constexpr bool const& __cordl_internal_get__selfCollision_k__BackingField() const;

  constexpr bool& __cordl_internal_get__selfCollision_k__BackingField();

  constexpr float_t const& __cordl_internal_get__useContinuousCollision_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__useContinuousCollision_k__BackingField();

  constexpr void __cordl_internal_set__selfCollision_k__BackingField(bool value);

  constexpr void __cordl_internal_set__useContinuousCollision_k__BackingField(float_t value);

  /// @brief Method .ctor, addr 0x6826bbc, size 0x688, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bendingStiffness, addr 0x6823dec, size 0x80, virtual false, abstract: false, final false
  inline float_t get_bendingStiffness();

  /// @brief Method get_bendingStiffness_Injected, addr 0x6823e6c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_bendingStiffness_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_capsuleColliders, addr 0x6823934, size 0x80, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::CapsuleCollider>, ::Array<::UnityW<::UnityEngine::CapsuleCollider>>*> get_capsuleColliders();

  /// @brief Method get_capsuleColliders_Injected, addr 0x68239b4, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::CapsuleCollider>, ::Array<::UnityW<::UnityEngine::CapsuleCollider>>*> get_capsuleColliders_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_clothSolverFrequency, addr 0x68252dc, size 0x80, virtual false, abstract: false, final false
  inline float_t get_clothSolverFrequency();

  /// @brief Method get_clothSolverFrequency_Injected, addr 0x682535c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_clothSolverFrequency_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_coefficients, addr 0x6823648, size 0x160, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::ClothSkinningCoefficient, ::Array<::UnityEngine::ClothSkinningCoefficient>*> get_coefficients();

  /// @brief Method get_coefficients_Injected, addr 0x68237a8, size 0x44, virtual false, abstract: false, final false
  static inline void get_coefficients_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method get_collisionMassScale, addr 0x6824aec, size 0x80, virtual false, abstract: false, final false
  inline float_t get_collisionMassScale();

  /// @brief Method get_collisionMassScale_Injected, addr 0x6824b6c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_collisionMassScale_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_damping, addr 0x682411c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_damping();

  /// @brief Method get_damping_Injected, addr 0x682419c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_damping_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_enableContinuousCollision, addr 0x6824c84, size 0x80, virtual false, abstract: false, final false
  inline bool get_enableContinuousCollision();

  /// @brief Method get_enableContinuousCollision_Injected, addr 0x6824d04, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_enableContinuousCollision_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_enabled, addr 0x68247c4, size 0x80, virtual false, abstract: false, final false
  inline bool get_enabled();

  /// @brief Method get_enabled_Injected, addr 0x6824844, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_enabled_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_externalAcceleration, addr 0x68242b4, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_externalAcceleration();

  /// @brief Method get_externalAcceleration_Injected, addr 0x6824354, size 0x44, virtual false, abstract: false, final false
  static inline void get_externalAcceleration_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_friction, addr 0x6824954, size 0x80, virtual false, abstract: false, final false
  inline float_t get_friction();

  /// @brief Method get_friction_Injected, addr 0x68249d4, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_friction_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_normals, addr 0x68234a4, size 0x160, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> get_normals();

  /// @brief Method get_normals_Injected, addr 0x6823604, size 0x44, virtual false, abstract: false, final false
  static inline void get_normals_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method get_randomAcceleration, addr 0x6824474, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_randomAcceleration();

  /// @brief Method get_randomAcceleration_Injected, addr 0x6824514, size 0x44, virtual false, abstract: false, final false
  static inline void get_randomAcceleration_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_selfCollision, addr 0x682696c, size 0x8, virtual false, abstract: false, final false
  inline bool get_selfCollision();

  /// @brief Method get_selfCollisionDistance, addr 0x68257d8, size 0x80, virtual false, abstract: false, final false
  inline float_t get_selfCollisionDistance();

  /// @brief Method get_selfCollisionDistance_Injected, addr 0x6825858, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_selfCollisionDistance_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_selfCollisionStiffness, addr 0x6825970, size 0x80, virtual false, abstract: false, final false
  inline float_t get_selfCollisionStiffness();

  /// @brief Method get_selfCollisionStiffness_Injected, addr 0x68259f0, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_selfCollisionStiffness_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sleepThreshold, addr 0x6823c54, size 0x80, virtual false, abstract: false, final false
  inline float_t get_sleepThreshold();

  /// @brief Method get_sleepThreshold_Injected, addr 0x6823cd4, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_sleepThreshold_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_solverFrequency, addr 0x6825474, size 0x18, virtual false, abstract: false, final false
  inline bool get_solverFrequency();

  /// @brief Method get_sphereColliders, addr 0x6823ac4, size 0x80, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::ClothSphereColliderPair, ::Array<::UnityEngine::ClothSphereColliderPair>*> get_sphereColliders();

  /// @brief Method get_sphereColliders_Injected, addr 0x6823b44, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::ClothSphereColliderPair, ::Array<::UnityEngine::ClothSphereColliderPair>*> get_sphereColliders_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_stiffnessFrequency, addr 0x6825640, size 0x80, virtual false, abstract: false, final false
  inline float_t get_stiffnessFrequency();

  /// @brief Method get_stiffnessFrequency_Injected, addr 0x68256c0, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_stiffnessFrequency_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_stretchingStiffness, addr 0x6823f84, size 0x80, virtual false, abstract: false, final false
  inline float_t get_stretchingStiffness();

  /// @brief Method get_stretchingStiffness_Injected, addr 0x6824004, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_stretchingStiffness_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_useContinuousCollision, addr 0x682695c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_useContinuousCollision();

  /// @brief Method get_useGravity, addr 0x6824634, size 0x80, virtual false, abstract: false, final false
  inline bool get_useGravity();

  /// @brief Method get_useGravity_Injected, addr 0x68246b4, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_useGravity_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_useTethers, addr 0x68254b0, size 0x80, virtual false, abstract: false, final false
  inline bool get_useTethers();

  /// @brief Method get_useTethers_Injected, addr 0x6825530, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_useTethers_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_useVirtualParticles, addr 0x6824e14, size 0x80, virtual false, abstract: false, final false
  inline float_t get_useVirtualParticles();

  /// @brief Method get_useVirtualParticles_Injected, addr 0x6824e94, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_useVirtualParticles_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_vertices, addr 0x6823300, size 0x160, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> get_vertices();

  /// @brief Method get_vertices_Injected, addr 0x6823460, size 0x44, virtual false, abstract: false, final false
  static inline void get_vertices_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method get_worldAccelerationScale, addr 0x6825144, size 0x80, virtual false, abstract: false, final false
  inline float_t get_worldAccelerationScale();

  /// @brief Method get_worldAccelerationScale_Injected, addr 0x68251c4, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_worldAccelerationScale_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_worldVelocityScale, addr 0x6824fac, size 0x80, virtual false, abstract: false, final false
  inline float_t get_worldVelocityScale();

  /// @brief Method get_worldVelocityScale_Injected, addr 0x682502c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_worldVelocityScale_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_bendingStiffness, addr 0x6823ea8, size 0x90, virtual false, abstract: false, final false
  inline void set_bendingStiffness(float_t value);

  /// @brief Method set_bendingStiffness_Injected, addr 0x6823f38, size 0x4c, virtual false, abstract: false, final false
  static inline void set_bendingStiffness_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_capsuleColliders, addr 0x68239f0, size 0x90, virtual false, abstract: false, final false
  inline void set_capsuleColliders(::ArrayW<::UnityEngine::CapsuleCollider*, ::Array<::UnityEngine::CapsuleCollider*>*> value);

  /// @brief Method set_capsuleColliders_Injected, addr 0x6823a80, size 0x44, virtual false, abstract: false, final false
  static inline void set_capsuleColliders_Injected(::System::IntPtr _unity_self, ::ArrayW<::UnityEngine::CapsuleCollider*, ::Array<::UnityEngine::CapsuleCollider*>*> value);

  /// @brief Method set_clothSolverFrequency, addr 0x6825398, size 0x90, virtual false, abstract: false, final false
  inline void set_clothSolverFrequency(float_t value);

  /// @brief Method set_clothSolverFrequency_Injected, addr 0x6825428, size 0x4c, virtual false, abstract: false, final false
  static inline void set_clothSolverFrequency_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_coefficients, addr 0x68237ec, size 0x104, virtual false, abstract: false, final false
  inline void set_coefficients(::ArrayW<::UnityEngine::ClothSkinningCoefficient, ::Array<::UnityEngine::ClothSkinningCoefficient>*> value);

  /// @brief Method set_coefficients_Injected, addr 0x68238f0, size 0x44, virtual false, abstract: false, final false
  static inline void set_coefficients_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> value);

  /// @brief Method set_collisionMassScale, addr 0x6824ba8, size 0x90, virtual false, abstract: false, final false
  inline void set_collisionMassScale(float_t value);

  /// @brief Method set_collisionMassScale_Injected, addr 0x6824c38, size 0x4c, virtual false, abstract: false, final false
  static inline void set_collisionMassScale_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_damping, addr 0x68241d8, size 0x90, virtual false, abstract: false, final false
  inline void set_damping(float_t value);

  /// @brief Method set_damping_Injected, addr 0x6824268, size 0x4c, virtual false, abstract: false, final false
  static inline void set_damping_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_enableContinuousCollision, addr 0x6824d40, size 0x90, virtual false, abstract: false, final false
  inline void set_enableContinuousCollision(bool value);

  /// @brief Method set_enableContinuousCollision_Injected, addr 0x6824dd0, size 0x44, virtual false, abstract: false, final false
  static inline void set_enableContinuousCollision_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_enabled, addr 0x6824880, size 0x90, virtual false, abstract: false, final false
  inline void set_enabled(bool value);

  /// @brief Method set_enabled_Injected, addr 0x6824910, size 0x44, virtual false, abstract: false, final false
  static inline void set_enabled_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_externalAcceleration, addr 0x6824398, size 0x98, virtual false, abstract: false, final false
  inline void set_externalAcceleration(::UnityEngine::Vector3 value);

  /// @brief Method set_externalAcceleration_Injected, addr 0x6824430, size 0x44, virtual false, abstract: false, final false
  static inline void set_externalAcceleration_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_friction, addr 0x6824a10, size 0x90, virtual false, abstract: false, final false
  inline void set_friction(float_t value);

  /// @brief Method set_friction_Injected, addr 0x6824aa0, size 0x4c, virtual false, abstract: false, final false
  static inline void set_friction_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_randomAcceleration, addr 0x6824558, size 0x98, virtual false, abstract: false, final false
  inline void set_randomAcceleration(::UnityEngine::Vector3 value);

  /// @brief Method set_randomAcceleration_Injected, addr 0x68245f0, size 0x44, virtual false, abstract: false, final false
  static inline void set_randomAcceleration_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_selfCollisionDistance, addr 0x6825894, size 0x90, virtual false, abstract: false, final false
  inline void set_selfCollisionDistance(float_t value);

  /// @brief Method set_selfCollisionDistance_Injected, addr 0x6825924, size 0x4c, virtual false, abstract: false, final false
  static inline void set_selfCollisionDistance_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_selfCollisionStiffness, addr 0x6825a2c, size 0x90, virtual false, abstract: false, final false
  inline void set_selfCollisionStiffness(float_t value);

  /// @brief Method set_selfCollisionStiffness_Injected, addr 0x6825abc, size 0x4c, virtual false, abstract: false, final false
  static inline void set_selfCollisionStiffness_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_sleepThreshold, addr 0x6823d10, size 0x90, virtual false, abstract: false, final false
  inline void set_sleepThreshold(float_t value);

  /// @brief Method set_sleepThreshold_Injected, addr 0x6823da0, size 0x4c, virtual false, abstract: false, final false
  static inline void set_sleepThreshold_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_solverFrequency, addr 0x682548c, size 0x24, virtual false, abstract: false, final false
  inline void set_solverFrequency(bool value);

  /// @brief Method set_sphereColliders, addr 0x6823b80, size 0x90, virtual false, abstract: false, final false
  inline void set_sphereColliders(::ArrayW<::UnityEngine::ClothSphereColliderPair, ::Array<::UnityEngine::ClothSphereColliderPair>*> value);

  /// @brief Method set_sphereColliders_Injected, addr 0x6823c10, size 0x44, virtual false, abstract: false, final false
  static inline void set_sphereColliders_Injected(::System::IntPtr _unity_self, ::ArrayW<::UnityEngine::ClothSphereColliderPair, ::Array<::UnityEngine::ClothSphereColliderPair>*> value);

  /// @brief Method set_stiffnessFrequency, addr 0x68256fc, size 0x90, virtual false, abstract: false, final false
  inline void set_stiffnessFrequency(float_t value);

  /// @brief Method set_stiffnessFrequency_Injected, addr 0x682578c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_stiffnessFrequency_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_stretchingStiffness, addr 0x6824040, size 0x90, virtual false, abstract: false, final false
  inline void set_stretchingStiffness(float_t value);

  /// @brief Method set_stretchingStiffness_Injected, addr 0x68240d0, size 0x4c, virtual false, abstract: false, final false
  static inline void set_stretchingStiffness_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_useContinuousCollision, addr 0x6826964, size 0x8, virtual false, abstract: false, final false
  inline void set_useContinuousCollision(float_t value);

  /// @brief Method set_useGravity, addr 0x68246f0, size 0x90, virtual false, abstract: false, final false
  inline void set_useGravity(bool value);

  /// @brief Method set_useGravity_Injected, addr 0x6824780, size 0x44, virtual false, abstract: false, final false
  static inline void set_useGravity_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_useTethers, addr 0x682556c, size 0x90, virtual false, abstract: false, final false
  inline void set_useTethers(bool value);

  /// @brief Method set_useTethers_Injected, addr 0x68255fc, size 0x44, virtual false, abstract: false, final false
  static inline void set_useTethers_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_useVirtualParticles, addr 0x6824ed0, size 0x90, virtual false, abstract: false, final false
  inline void set_useVirtualParticles(float_t value);

  /// @brief Method set_useVirtualParticles_Injected, addr 0x6824f60, size 0x4c, virtual false, abstract: false, final false
  static inline void set_useVirtualParticles_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_worldAccelerationScale, addr 0x6825200, size 0x90, virtual false, abstract: false, final false
  inline void set_worldAccelerationScale(float_t value);

  /// @brief Method set_worldAccelerationScale_Injected, addr 0x6825290, size 0x4c, virtual false, abstract: false, final false
  static inline void set_worldAccelerationScale_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_worldVelocityScale, addr 0x6825068, size 0x90, virtual false, abstract: false, final false
  inline void set_worldVelocityScale(float_t value);

  /// @brief Method set_worldVelocityScale_Injected, addr 0x68250f8, size 0x4c, virtual false, abstract: false, final false
  static inline void set_worldVelocityScale_Injected(::System::IntPtr _unity_self, float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Cloth();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Cloth", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Cloth(Cloth&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Cloth", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Cloth(Cloth const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22319 };

  /// @brief Field <useContinuousCollision>k__BackingField, offset: 0x18, size: 0x4, def value: None
  float_t ____useContinuousCollision_k__BackingField;

  /// @brief Field <selfCollision>k__BackingField, offset: 0x1c, size: 0x1, def value: None
  bool ____selfCollision_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Cloth, ____useContinuousCollision_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Cloth, ____selfCollision_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Cloth, 0x20>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Cloth);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Cloth*, "UnityEngine", "Cloth");
