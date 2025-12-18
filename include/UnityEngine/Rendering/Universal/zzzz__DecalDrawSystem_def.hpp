#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalDrawSystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DecalDrawSystem)
namespace UnityEngine::Rendering::Universal {
struct CameraData;
}
namespace UnityEngine::Rendering::Universal {
class DecalCachedChunk;
}
namespace UnityEngine::Rendering::Universal {
class DecalDrawCallChunk;
}
namespace UnityEngine::Rendering::Universal {
class DecalEntityChunk;
}
namespace UnityEngine::Rendering::Universal {
class DecalEntityManager;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DecalDrawSystem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalDrawSystem);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DecalDrawSystem
class CORDL_TYPE DecalDrawSystem : public ::System::Object {
public:
  // Declarations
  /// @brief Field MaxBatchSize, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_MaxBatchSize, put = setStaticF_MaxBatchSize)) uint32_t MaxBatchSize;

  /// @brief Field <overrideMaterial>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__overrideMaterial_k__BackingField, put = __cordl_internal_set__overrideMaterial_k__BackingField)) ::UnityW<::UnityEngine::Material>
      _overrideMaterial_k__BackingField;

  /// @brief Field m_DecalLayerMasks, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DecalLayerMasks, put = __cordl_internal_set_m_DecalLayerMasks)) ::ArrayW<float_t, ::Array<float_t>*> m_DecalLayerMasks;

  /// @brief Field m_EntityManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EntityManager, put = __cordl_internal_set_m_EntityManager)) ::UnityEngine::Rendering::Universal::DecalEntityManager* m_EntityManager;

  /// @brief Field m_NormalToDecals, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NormalToDecals, put = __cordl_internal_set_m_NormalToDecals)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>
      m_NormalToDecals;

  /// @brief Field m_Sampler, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Sampler, put = __cordl_internal_set_m_Sampler)) ::UnityEngine::Rendering::ProfilingSampler* m_Sampler;

  /// @brief Field m_WorldToDecals, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_WorldToDecals, put = __cordl_internal_set_m_WorldToDecals)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> m_WorldToDecals;

  __declspec(property(get = get_overrideMaterial, put = set_overrideMaterial)) ::UnityW<::UnityEngine::Material> overrideMaterial;

  /// @brief Method Draw, addr 0x66a3234, size 0x250, virtual false, abstract: false, final false
  inline void Draw(::ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData, ::UnityEngine::Rendering::Universal::DecalEntityChunk* decalEntityChunk,
                   ::UnityEngine::Rendering::Universal::DecalCachedChunk* decalCachedChunk, ::UnityEngine::Rendering::Universal::DecalDrawCallChunk* decalDrawCallChunk);

  /// @brief Method Draw, addr 0x66a2914, size 0x220, virtual false, abstract: false, final false
  inline void Draw(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::DecalEntityChunk* decalEntityChunk,
                   ::UnityEngine::Rendering::Universal::DecalCachedChunk* decalCachedChunk, ::UnityEngine::Rendering::Universal::DecalDrawCallChunk* decalDrawCallChunk, int32_t passIndex);

  /// @brief Method DrawInstanced, addr 0x66a2f80, size 0x2b4, virtual false, abstract: false, final false
  inline void DrawInstanced(::ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData, ::UnityEngine::Rendering::Universal::DecalEntityChunk* decalEntityChunk,
                            ::UnityEngine::Rendering::Universal::DecalCachedChunk* decalCachedChunk, ::UnityEngine::Rendering::Universal::DecalDrawCallChunk* decalDrawCallChunk);

  /// @brief Method DrawInstanced, addr 0x66a26a4, size 0x270, virtual false, abstract: false, final false
  inline void DrawInstanced(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::DecalEntityChunk* decalEntityChunk,
                            ::UnityEngine::Rendering::Universal::DecalCachedChunk* decalCachedChunk, ::UnityEngine::Rendering::Universal::DecalDrawCallChunk* decalDrawCallChunk, int32_t passIndex);

  /// @brief Method Execute, addr 0x66a2bf4, size 0x1d4, virtual false, abstract: false, final false
  inline void Execute(::ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method Execute, addr 0x66a2dc8, size 0x1b8, virtual false, abstract: false, final false
  inline void Execute(::ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData, ::UnityEngine::Rendering::Universal::DecalEntityChunk* decalEntityChunk,
                      ::UnityEngine::Rendering::Universal::DecalCachedChunk* decalCachedChunk, ::UnityEngine::Rendering::Universal::DecalDrawCallChunk* decalDrawCallChunk, int32_t count);

  /// @brief Method Execute, addr 0x66a2458, size 0x74, virtual false, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method Execute, addr 0x669cc00, size 0x1d4, virtual false, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::RasterCommandBuffer* cmd);

  /// @brief Method Execute, addr 0x66a24cc, size 0x1c4, virtual false, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::DecalEntityChunk* decalEntityChunk,
                      ::UnityEngine::Rendering::Universal::DecalCachedChunk* decalCachedChunk, ::UnityEngine::Rendering::Universal::DecalDrawCallChunk* decalDrawCallChunk, int32_t count);

  /// @brief Method GetMaterial, addr 0x66a2690, size 0x14, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetMaterial(::UnityEngine::Rendering::Universal::DecalEntityChunk* decalEntityChunk);

  /// @brief Method GetPassIndex, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetPassIndex(::UnityEngine::Rendering::Universal::DecalCachedChunk* decalCachedChunk);

  static inline ::UnityEngine::Rendering::Universal::DecalDrawSystem* New_ctor(::StringW sampler, ::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager);

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__overrideMaterial_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__overrideMaterial_k__BackingField();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_m_DecalLayerMasks() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_m_DecalLayerMasks();

  constexpr ::UnityEngine::Rendering::Universal::DecalEntityManager* const& __cordl_internal_get_m_EntityManager() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalEntityManager*& __cordl_internal_get_m_EntityManager();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_m_NormalToDecals() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_m_NormalToDecals();

  constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get_m_Sampler() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_Sampler();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_m_WorldToDecals() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_m_WorldToDecals();

  constexpr void __cordl_internal_set__overrideMaterial_k__BackingField(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_DecalLayerMasks(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_m_EntityManager(::UnityEngine::Rendering::Universal::DecalEntityManager* value);

  constexpr void __cordl_internal_set_m_NormalToDecals(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  constexpr void __cordl_internal_set_m_Sampler(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set_m_WorldToDecals(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  /// @brief Method .ctor, addr 0x669b300, size 0x120, virtual false, abstract: false, final false
  inline void _ctor(::StringW sampler, ::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager);

  static inline uint32_t getStaticF_MaxBatchSize();

  /// @brief Method get_overrideMaterial, addr 0x66a2448, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_overrideMaterial();

  static inline void setStaticF_MaxBatchSize(uint32_t value);

  /// @brief Method set_overrideMaterial, addr 0x66a2450, size 0x8, virtual false, abstract: false, final false
  inline void set_overrideMaterial(::UnityEngine::Material* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalDrawSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalDrawSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalDrawSystem(DecalDrawSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalDrawSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalDrawSystem(DecalDrawSystem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12667 };

  /// @brief Field m_EntityManager, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalEntityManager* ___m_EntityManager;

  /// @brief Field m_WorldToDecals, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___m_WorldToDecals;

  /// @brief Field m_NormalToDecals, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___m_NormalToDecals;

  /// @brief Field m_DecalLayerMasks, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___m_DecalLayerMasks;

  /// @brief Field m_Sampler, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_Sampler;

  /// @brief Field <overrideMaterial>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____overrideMaterial_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalDrawSystem, ___m_EntityManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalDrawSystem, ___m_WorldToDecals) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalDrawSystem, ___m_NormalToDecals) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalDrawSystem, ___m_DecalLayerMasks) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalDrawSystem, ___m_Sampler) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalDrawSystem, ____overrideMaterial_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalDrawSystem, 0x40>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalDrawSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalDrawSystem*, "UnityEngine.Rendering.Universal", "DecalDrawSystem");
