#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalUpdateCullingGroupSystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DecalUpdateCullingGroupSystem)
namespace UnityEngine::Rendering::Universal {
class DecalCachedChunk;
}
namespace UnityEngine::Rendering::Universal {
class DecalCulledChunk;
}
namespace UnityEngine::Rendering::Universal {
class DecalEntityManager;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DecalUpdateCullingGroupSystem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DecalUpdateCullingGroupSystem
class CORDL_TYPE DecalUpdateCullingGroupSystem : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_boundingDistance, put = set_boundingDistance)) float_t boundingDistance;

  /// @brief Field m_BoundingDistance, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BoundingDistance, put = __cordl_internal_set_m_BoundingDistance)) ::ArrayW<float_t, ::Array<float_t>*> m_BoundingDistance;

  /// @brief Field m_Camera, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Camera, put = __cordl_internal_set_m_Camera)) ::UnityW<::UnityEngine::Camera> m_Camera;

  /// @brief Field m_EntityManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EntityManager, put = __cordl_internal_set_m_EntityManager)) ::UnityEngine::Rendering::Universal::DecalEntityManager* m_EntityManager;

  /// @brief Field m_Sampler, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Sampler, put = __cordl_internal_set_m_Sampler)) ::UnityEngine::Rendering::ProfilingSampler* m_Sampler;

  /// @brief Method Execute, addr 0x66a8698, size 0x160, virtual false, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::Universal::DecalCachedChunk* cachedChunk, ::UnityEngine::Rendering::Universal::DecalCulledChunk* culledChunk, int32_t count);

  /// @brief Method Execute, addr 0x66a851c, size 0x17c, virtual false, abstract: false, final false
  inline void Execute(::UnityEngine::Camera* camera);

  /// @brief Method GetSceneCullingMaskFromCamera, addr 0x66a87f8, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t GetSceneCullingMaskFromCamera(::UnityEngine::Camera* camera);

  static inline ::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem* New_ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager, float_t drawDistance);

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_m_BoundingDistance() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_m_BoundingDistance();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_m_Camera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_m_Camera();

  constexpr ::UnityEngine::Rendering::Universal::DecalEntityManager* const& __cordl_internal_get_m_EntityManager() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalEntityManager*& __cordl_internal_get_m_EntityManager();

  constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get_m_Sampler() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_Sampler();

  constexpr void __cordl_internal_set_m_BoundingDistance(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_m_Camera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_m_EntityManager(::UnityEngine::Rendering::Universal::DecalEntityManager* value);

  constexpr void __cordl_internal_set_m_Sampler(::UnityEngine::Rendering::ProfilingSampler* value);

  /// @brief Method .ctor, addr 0x66a8444, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager, float_t drawDistance);

  /// @brief Method get_boundingDistance, addr 0x66a83f4, size 0x28, virtual false, abstract: false, final false
  inline float_t get_boundingDistance();

  /// @brief Method set_boundingDistance, addr 0x66a841c, size 0x28, virtual false, abstract: false, final false
  inline void set_boundingDistance(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalUpdateCullingGroupSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalUpdateCullingGroupSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalUpdateCullingGroupSystem(DecalUpdateCullingGroupSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalUpdateCullingGroupSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalUpdateCullingGroupSystem(DecalUpdateCullingGroupSystem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12681 };

  /// @brief Field m_BoundingDistance, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___m_BoundingDistance;

  /// @brief Field m_Camera, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___m_Camera;

  /// @brief Field m_EntityManager, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalEntityManager* ___m_EntityManager;

  /// @brief Field m_Sampler, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_Sampler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem, ___m_BoundingDistance) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem, ___m_Camera) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem, ___m_EntityManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem, ___m_Sampler) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem*, "UnityEngine.Rendering.Universal", "DecalUpdateCullingGroupSystem");
