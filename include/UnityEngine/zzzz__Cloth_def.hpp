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

  /// @brief Method ClearTransformMotion, addr 0x485f63c, size 0x3c, virtual false, abstract: false, final false
  inline void ClearTransformMotion();

  /// @brief Method GetSelfAndInterCollisionIndices, addr 0x485f678, size 0x44, virtual false, abstract: false, final false
  inline void GetSelfAndInterCollisionIndices(::System::Collections::Generic::List_1<uint32_t>* indices);

  /// @brief Method GetVirtualParticleIndices, addr 0x485f700, size 0x44, virtual false, abstract: false, final false
  inline void GetVirtualParticleIndices(::System::Collections::Generic::List_1<uint32_t>* indicesOutList);

  /// @brief Method GetVirtualParticleWeights, addr 0x485f788, size 0x44, virtual false, abstract: false, final false
  inline void GetVirtualParticleWeights(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* weightsOutList);

  static inline ::UnityEngine::Cloth* New_ctor();

  /// @brief Method Raycast, addr 0x485f8c4, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::RaycastHit Raycast(::UnityEngine::Ray ray, float_t maxDistance, ::ByRef<bool> hasHit);

  /// @brief Method Raycast_Injected, addr 0x485f958, size 0x6c, virtual false, abstract: false, final false
  inline void Raycast_Injected(::ByRef<::UnityEngine::Ray> ray, float_t maxDistance, ::ByRef<bool> hasHit, ::ByRef<::UnityEngine::RaycastHit> ret);

  /// @brief Method SetEnabledFading, addr 0x485f87c, size 0x48, virtual false, abstract: false, final false
  inline void SetEnabledFading(bool enabled);

  /// @brief Method SetEnabledFading, addr 0x485f828, size 0x54, virtual false, abstract: false, final false
  inline void SetEnabledFading(bool enabled, float_t interpolationTime);

  /// @brief Method SetSelfAndInterCollisionIndices, addr 0x485f6bc, size 0x44, virtual false, abstract: false, final false
  inline void SetSelfAndInterCollisionIndices(::System::Collections::Generic::List_1<uint32_t>* indices);

  /// @brief Method SetVirtualParticleIndices, addr 0x485f744, size 0x44, virtual false, abstract: false, final false
  inline void SetVirtualParticleIndices(::System::Collections::Generic::List_1<uint32_t>* indicesIn);

  /// @brief Method SetVirtualParticleWeights, addr 0x485f7cc, size 0x44, virtual false, abstract: false, final false
  inline void SetVirtualParticleWeights(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* weights);

  constexpr bool const& __cordl_internal_get__selfCollision_k__BackingField() const;

  constexpr bool& __cordl_internal_get__selfCollision_k__BackingField();

  constexpr float_t const& __cordl_internal_get__useContinuousCollision_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__useContinuousCollision_k__BackingField();

  constexpr void __cordl_internal_set__selfCollision_k__BackingField(bool value);

  constexpr void __cordl_internal_set__useContinuousCollision_k__BackingField(float_t value);

  /// @brief Method .ctor, addr 0x485f9c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bendingStiffness, addr 0x485eac8, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_bendingStiffness();

  /// @brief Method get_capsuleColliders, addr 0x485e940, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::CapsuleCollider>, ::Array<::UnityW<::UnityEngine::CapsuleCollider>>*> get_capsuleColliders();

  /// @brief Method get_clothSolverFrequency, addr 0x485f2f8, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_clothSolverFrequency();

  /// @brief Method get_coefficients, addr 0x485e8c0, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::ClothSkinningCoefficient, ::Array<::UnityEngine::ClothSkinningCoefficient>*> get_coefficients();

  /// @brief Method get_collisionMassScale, addr 0x485f058, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_collisionMassScale();

  /// @brief Method get_damping, addr 0x485ebd8, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_damping();

  /// @brief Method get_enableContinuousCollision, addr 0x485f0e0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_enableContinuousCollision();

  /// @brief Method get_enabled, addr 0x485ef50, size 0x3c, virtual false, abstract: false, final false
  inline bool get_enabled();

  /// @brief Method get_externalAcceleration, addr 0x485ec60, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_externalAcceleration();

  /// @brief Method get_externalAcceleration_Injected, addr 0x485ecbc, size 0x44, virtual false, abstract: false, final false
  inline void get_externalAcceleration_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_friction, addr 0x485efd0, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_friction();

  /// @brief Method get_normals, addr 0x485e884, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> get_normals();

  /// @brief Method get_randomAcceleration, addr 0x485ed98, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_randomAcceleration();

  /// @brief Method get_randomAcceleration_Injected, addr 0x485edf4, size 0x44, virtual false, abstract: false, final false
  inline void get_randomAcceleration_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_selfCollision, addr 0x485f820, size 0x8, virtual false, abstract: false, final false
  inline bool get_selfCollision();

  /// @brief Method get_selfCollisionDistance, addr 0x485f52c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_selfCollisionDistance();

  /// @brief Method get_selfCollisionStiffness, addr 0x485f5b4, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_selfCollisionStiffness();

  /// @brief Method get_sleepThreshold, addr 0x485ea40, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_sleepThreshold();

  /// @brief Method get_solverFrequency, addr 0x485f380, size 0x48, virtual false, abstract: false, final false
  inline bool get_solverFrequency();

  /// @brief Method get_sphereColliders, addr 0x485e9c0, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::ClothSphereColliderPair, ::Array<::UnityEngine::ClothSphereColliderPair>*> get_sphereColliders();

  /// @brief Method get_stiffnessFrequency, addr 0x485f4a4, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_stiffnessFrequency();

  /// @brief Method get_stretchingStiffness, addr 0x485eb50, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_stretchingStiffness();

  /// @brief Method get_useContinuousCollision, addr 0x485f810, size 0x8, virtual false, abstract: false, final false
  inline float_t get_useContinuousCollision();

  /// @brief Method get_useGravity, addr 0x485eed0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_useGravity();

  /// @brief Method get_useTethers, addr 0x485f424, size 0x3c, virtual false, abstract: false, final false
  inline bool get_useTethers();

  /// @brief Method get_useVirtualParticles, addr 0x485f160, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_useVirtualParticles();

  /// @brief Method get_vertices, addr 0x485e848, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> get_vertices();

  /// @brief Method get_worldAccelerationScale, addr 0x485f270, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_worldAccelerationScale();

  /// @brief Method get_worldVelocityScale, addr 0x485f1e8, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_worldVelocityScale();

  /// @brief Method set_bendingStiffness, addr 0x485eb04, size 0x4c, virtual false, abstract: false, final false
  inline void set_bendingStiffness(float_t value);

  /// @brief Method set_capsuleColliders, addr 0x485e97c, size 0x44, virtual false, abstract: false, final false
  inline void set_capsuleColliders(::ArrayW<::UnityEngine::CapsuleCollider*, ::Array<::UnityEngine::CapsuleCollider*>*> value);

  /// @brief Method set_clothSolverFrequency, addr 0x485f334, size 0x4c, virtual false, abstract: false, final false
  inline void set_clothSolverFrequency(float_t value);

  /// @brief Method set_coefficients, addr 0x485e8fc, size 0x44, virtual false, abstract: false, final false
  inline void set_coefficients(::ArrayW<::UnityEngine::ClothSkinningCoefficient, ::Array<::UnityEngine::ClothSkinningCoefficient>*> value);

  /// @brief Method set_collisionMassScale, addr 0x485f094, size 0x4c, virtual false, abstract: false, final false
  inline void set_collisionMassScale(float_t value);

  /// @brief Method set_damping, addr 0x485ec14, size 0x4c, virtual false, abstract: false, final false
  inline void set_damping(float_t value);

  /// @brief Method set_enableContinuousCollision, addr 0x485f11c, size 0x44, virtual false, abstract: false, final false
  inline void set_enableContinuousCollision(bool value);

  /// @brief Method set_enabled, addr 0x485ef8c, size 0x44, virtual false, abstract: false, final false
  inline void set_enabled(bool value);

  /// @brief Method set_externalAcceleration, addr 0x485ed00, size 0x54, virtual false, abstract: false, final false
  inline void set_externalAcceleration(::UnityEngine::Vector3 value);

  /// @brief Method set_externalAcceleration_Injected, addr 0x485ed54, size 0x44, virtual false, abstract: false, final false
  inline void set_externalAcceleration_Injected(::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_friction, addr 0x485f00c, size 0x4c, virtual false, abstract: false, final false
  inline void set_friction(float_t value);

  /// @brief Method set_randomAcceleration, addr 0x485ee38, size 0x54, virtual false, abstract: false, final false
  inline void set_randomAcceleration(::UnityEngine::Vector3 value);

  /// @brief Method set_randomAcceleration_Injected, addr 0x485ee8c, size 0x44, virtual false, abstract: false, final false
  inline void set_randomAcceleration_Injected(::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_selfCollisionDistance, addr 0x485f568, size 0x4c, virtual false, abstract: false, final false
  inline void set_selfCollisionDistance(float_t value);

  /// @brief Method set_selfCollisionStiffness, addr 0x485f5f0, size 0x4c, virtual false, abstract: false, final false
  inline void set_selfCollisionStiffness(float_t value);

  /// @brief Method set_sleepThreshold, addr 0x485ea7c, size 0x4c, virtual false, abstract: false, final false
  inline void set_sleepThreshold(float_t value);

  /// @brief Method set_solverFrequency, addr 0x485f3c8, size 0x5c, virtual false, abstract: false, final false
  inline void set_solverFrequency(bool value);

  /// @brief Method set_sphereColliders, addr 0x485e9fc, size 0x44, virtual false, abstract: false, final false
  inline void set_sphereColliders(::ArrayW<::UnityEngine::ClothSphereColliderPair, ::Array<::UnityEngine::ClothSphereColliderPair>*> value);

  /// @brief Method set_stiffnessFrequency, addr 0x485f4e0, size 0x4c, virtual false, abstract: false, final false
  inline void set_stiffnessFrequency(float_t value);

  /// @brief Method set_stretchingStiffness, addr 0x485eb8c, size 0x4c, virtual false, abstract: false, final false
  inline void set_stretchingStiffness(float_t value);

  /// @brief Method set_useContinuousCollision, addr 0x485f818, size 0x8, virtual false, abstract: false, final false
  inline void set_useContinuousCollision(float_t value);

  /// @brief Method set_useGravity, addr 0x485ef0c, size 0x44, virtual false, abstract: false, final false
  inline void set_useGravity(bool value);

  /// @brief Method set_useTethers, addr 0x485f460, size 0x44, virtual false, abstract: false, final false
  inline void set_useTethers(bool value);

  /// @brief Method set_useVirtualParticles, addr 0x485f19c, size 0x4c, virtual false, abstract: false, final false
  inline void set_useVirtualParticles(float_t value);

  /// @brief Method set_worldAccelerationScale, addr 0x485f2ac, size 0x4c, virtual false, abstract: false, final false
  inline void set_worldAccelerationScale(float_t value);

  /// @brief Method set_worldVelocityScale, addr 0x485f224, size 0x4c, virtual false, abstract: false, final false
  inline void set_worldVelocityScale(float_t value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18814 };

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
