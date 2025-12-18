#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalEntityManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DecalEntityManager)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering::Universal {
class DecalCachedChunk;
}
namespace UnityEngine::Rendering::Universal {
class DecalCulledChunk;
}
namespace UnityEngine::Rendering::Universal {
class DecalDrawCallChunk;
}
namespace UnityEngine::Rendering::Universal {
class DecalEntityChunk;
}
namespace UnityEngine::Rendering::Universal {
class DecalEntityIndexer;
}
namespace UnityEngine::Rendering::Universal {
struct DecalEntityManager_CombinedChunks;
}
namespace UnityEngine::Rendering::Universal {
class DecalEntityManager___c;
}
namespace UnityEngine::Rendering::Universal {
struct DecalEntity;
}
namespace UnityEngine::Rendering::Universal {
class DecalProjector;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DecalEntityManager;
}
namespace UnityEngine::Rendering::Universal {
class DecalEntityManager___c;
}
namespace UnityEngine::Rendering::Universal {
struct DecalEntityManager_CombinedChunks;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalEntityManager);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalEntityManager___c);
MARK_VAL_T(::UnityEngine::Rendering::Universal::DecalEntityManager_CombinedChunks);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.DecalEntityManager/CombinedChunks
struct CORDL_TYPE DecalEntityManager_CombinedChunks {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalEntityManager_CombinedChunks();

  // Ctor Parameters [CppParam { name: "entityChunk", ty: "::UnityEngine::Rendering::Universal::DecalEntityChunk*", modifiers: "", def_value: None }, CppParam { name: "cachedChunk", ty:
  // "::UnityEngine::Rendering::Universal::DecalCachedChunk*", modifiers: "", def_value: None }, CppParam { name: "culledChunk", ty: "::UnityEngine::Rendering::Universal::DecalCulledChunk*",
  // modifiers: "", def_value: None }, CppParam { name: "drawCallChunk", ty: "::UnityEngine::Rendering::Universal::DecalDrawCallChunk*", modifiers: "", def_value: None }, CppParam { name:
  // "previousChunkIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "valid", ty: "bool", modifiers: "", def_value: None }]
  constexpr DecalEntityManager_CombinedChunks(::UnityEngine::Rendering::Universal::DecalEntityChunk* entityChunk, ::UnityEngine::Rendering::Universal::DecalCachedChunk* cachedChunk,
                                              ::UnityEngine::Rendering::Universal::DecalCulledChunk* culledChunk, ::UnityEngine::Rendering::Universal::DecalDrawCallChunk* drawCallChunk,
                                              int32_t previousChunkIndex, bool valid) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12672 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field entityChunk, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalEntityChunk* entityChunk;

  /// @brief Field cachedChunk, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalCachedChunk* cachedChunk;

  /// @brief Field culledChunk, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalCulledChunk* culledChunk;

  /// @brief Field drawCallChunk, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalDrawCallChunk* drawCallChunk;

  /// @brief Field previousChunkIndex, offset: 0x20, size: 0x4, def value: None
  int32_t previousChunkIndex;

  /// @brief Field valid, offset: 0x24, size: 0x1, def value: None
  bool valid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalEntityManager_CombinedChunks, entityChunk) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalEntityManager_CombinedChunks, cachedChunk) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalEntityManager_CombinedChunks, culledChunk) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalEntityManager_CombinedChunks, drawCallChunk) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalEntityManager_CombinedChunks, previousChunkIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalEntityManager_CombinedChunks, valid) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalEntityManager_CombinedChunks, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DecalEntityManager/<>c
class CORDL_TYPE DecalEntityManager___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::DecalEntityManager___c* __9;

  /// @brief Field <>9__26_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__26_0, put = setStaticF___9__26_0)) ::System::Comparison_1<::UnityEngine::Rendering::Universal::DecalEntityManager_CombinedChunks>* __9__26_0;

  static inline ::UnityEngine::Rendering::Universal::DecalEntityManager___c* New_ctor();

  /// @brief Method <Update>b__26_0, addr 0x66a6440, size 0xa8, virtual false, abstract: false, final false
  inline int32_t _Update_b__26_0(::UnityEngine::Rendering::Universal::DecalEntityManager_CombinedChunks a, ::UnityEngine::Rendering::Universal::DecalEntityManager_CombinedChunks b);

  /// @brief Method .ctor, addr 0x66a643c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::DecalEntityManager___c* getStaticF___9();

  static inline ::System::Comparison_1<::UnityEngine::Rendering::Universal::DecalEntityManager_CombinedChunks>* getStaticF___9__26_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::DecalEntityManager___c* value);

  static inline void setStaticF___9__26_0(::System::Comparison_1<::UnityEngine::Rendering::Universal::DecalEntityManager_CombinedChunks>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalEntityManager___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalEntityManager___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalEntityManager___c(DecalEntityManager___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalEntityManager___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalEntityManager___c(DecalEntityManager___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12673 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalEntityManager___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DecalEntityManager
class CORDL_TYPE DecalEntityManager : public ::System::Object {
public:
  // Declarations
  using CombinedChunks = ::UnityEngine::Rendering::Universal::DecalEntityManager_CombinedChunks;

  using __c = ::UnityEngine::Rendering::Universal::DecalEntityManager___c;

  /// @brief Field cachedChunks, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_cachedChunks,
                      put = __cordl_internal_set_cachedChunks)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalCachedChunk*>* cachedChunks;

  /// @brief Field chunkCount, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_chunkCount, put = __cordl_internal_set_chunkCount)) int32_t chunkCount;

  /// @brief Field culledChunks, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_culledChunks,
                      put = __cordl_internal_set_culledChunks)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalCulledChunk*>* culledChunks;

  __declspec(property(get = get_decalProjectorMesh)) ::UnityW<::UnityEngine::Mesh> decalProjectorMesh;

  /// @brief Field drawCallChunks, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_drawCallChunks,
                      put = __cordl_internal_set_drawCallChunks)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>* drawCallChunks;

  /// @brief Field entityChunks, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_entityChunks,
                      put = __cordl_internal_set_entityChunks)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalEntityChunk*>* entityChunks;

  __declspec(property(get = get_errorMaterial)) ::UnityW<::UnityEngine::Material> errorMaterial;

  /// @brief Field m_AddDecalSampler, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AddDecalSampler, put = __cordl_internal_set_m_AddDecalSampler)) ::UnityEngine::Rendering::ProfilingSampler* m_AddDecalSampler;

  /// @brief Field m_CombinedChunkRemmap, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CombinedChunkRemmap, put = __cordl_internal_set_m_CombinedChunkRemmap)) ::System::Collections::Generic::List_1<int32_t>* m_CombinedChunkRemmap;

  /// @brief Field m_CombinedChunks, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CombinedChunks,
                      put = __cordl_internal_set_m_CombinedChunks)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalEntityManager_CombinedChunks>* m_CombinedChunks;

  /// @brief Field m_DecalEntityIndexer, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DecalEntityIndexer, put = __cordl_internal_set_m_DecalEntityIndexer)) ::UnityEngine::Rendering::Universal::DecalEntityIndexer* m_DecalEntityIndexer;

  /// @brief Field m_DecalProjectorMesh, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DecalProjectorMesh, put = __cordl_internal_set_m_DecalProjectorMesh)) ::UnityW<::UnityEngine::Mesh> m_DecalProjectorMesh;

  /// @brief Field m_ErrorMaterial, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ErrorMaterial, put = __cordl_internal_set_m_ErrorMaterial)) ::UnityW<::UnityEngine::Material> m_ErrorMaterial;

  /// @brief Field m_MaterialToChunkIndex, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MaterialToChunkIndex,
                      put = __cordl_internal_set_m_MaterialToChunkIndex)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>, int32_t>* m_MaterialToChunkIndex;

  /// @brief Field m_ResizeChunks, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ResizeChunks, put = __cordl_internal_set_m_ResizeChunks)) ::UnityEngine::Rendering::ProfilingSampler* m_ResizeChunks;

  /// @brief Field m_SortChunks, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SortChunks, put = __cordl_internal_set_m_SortChunks)) ::UnityEngine::Rendering::ProfilingSampler* m_SortChunks;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CreateChunkIndex, addr 0x66a4540, size 0x594, virtual false, abstract: false, final false
  inline int32_t CreateChunkIndex(::UnityEngine::Material* material);

  /// @brief Method CreateDecalEntity, addr 0x66a4080, size 0x4c0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DecalEntity CreateDecalEntity(::UnityEngine::Rendering::Universal::DecalProjector* decalProjector);

  /// @brief Method DestroyDecalEntity, addr 0x66a5060, size 0x1e8, virtual false, abstract: false, final false
  inline void DestroyDecalEntity(::UnityEngine::Rendering::Universal::DecalEntity decalEntity);

  /// @brief Method Dispose, addr 0x66a5c50, size 0x798, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method IsValid, addr 0x66a406c, size 0x14, virtual false, abstract: false, final false
  inline bool IsValid(::UnityEngine::Rendering::Universal::DecalEntity decalEntity);

  static inline ::UnityEngine::Rendering::Universal::DecalEntityManager* New_ctor();

  /// @brief Method Update, addr 0x66a5248, size 0xa08, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateAllDecalEntitiesData, addr 0x66a4e88, size 0x1d8, virtual false, abstract: false, final false
  inline void UpdateAllDecalEntitiesData();

  /// @brief Method UpdateDecalEntityData, addr 0x66a4ad4, size 0x3ac, virtual false, abstract: false, final false
  inline void UpdateDecalEntityData(::UnityEngine::Rendering::Universal::DecalEntity decalEntity, ::UnityEngine::Rendering::Universal::DecalProjector* decalProjector);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalCachedChunk*>* const& __cordl_internal_get_cachedChunks() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalCachedChunk*>*& __cordl_internal_get_cachedChunks();

  constexpr int32_t const& __cordl_internal_get_chunkCount() const;

  constexpr int32_t& __cordl_internal_get_chunkCount();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalCulledChunk*>* const& __cordl_internal_get_culledChunks() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalCulledChunk*>*& __cordl_internal_get_culledChunks();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>* const& __cordl_internal_get_drawCallChunks() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>*& __cordl_internal_get_drawCallChunks();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalEntityChunk*>* const& __cordl_internal_get_entityChunks() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalEntityChunk*>*& __cordl_internal_get_entityChunks();

  constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get_m_AddDecalSampler() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_AddDecalSampler();

  constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_m_CombinedChunkRemmap() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_CombinedChunkRemmap();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalEntityManager_CombinedChunks>* const& __cordl_internal_get_m_CombinedChunks() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalEntityManager_CombinedChunks>*& __cordl_internal_get_m_CombinedChunks();

  constexpr ::UnityEngine::Rendering::Universal::DecalEntityIndexer* const& __cordl_internal_get_m_DecalEntityIndexer() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalEntityIndexer*& __cordl_internal_get_m_DecalEntityIndexer();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_DecalProjectorMesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_DecalProjectorMesh();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_ErrorMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_ErrorMaterial();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>, int32_t>* const& __cordl_internal_get_m_MaterialToChunkIndex() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>, int32_t>*& __cordl_internal_get_m_MaterialToChunkIndex();

  constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get_m_ResizeChunks() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_ResizeChunks();

  constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get_m_SortChunks() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_SortChunks();

  constexpr void __cordl_internal_set_cachedChunks(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalCachedChunk*>* value);

  constexpr void __cordl_internal_set_chunkCount(int32_t value);

  constexpr void __cordl_internal_set_culledChunks(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalCulledChunk*>* value);

  constexpr void __cordl_internal_set_drawCallChunks(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>* value);

  constexpr void __cordl_internal_set_entityChunks(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalEntityChunk*>* value);

  constexpr void __cordl_internal_set_m_AddDecalSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set_m_CombinedChunkRemmap(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_m_CombinedChunks(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalEntityManager_CombinedChunks>* value);

  constexpr void __cordl_internal_set_m_DecalEntityIndexer(::UnityEngine::Rendering::Universal::DecalEntityIndexer* value);

  constexpr void __cordl_internal_set_m_DecalProjectorMesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_m_ErrorMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_MaterialToChunkIndex(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>, int32_t>* value);

  constexpr void __cordl_internal_set_m_ResizeChunks(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set_m_SortChunks(::UnityEngine::Rendering::ProfilingSampler* value);

  /// @brief Method .ctor, addr 0x66a3d44, size 0x328, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_decalProjectorMesh, addr 0x66a2b34, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_decalProjectorMesh();

  /// @brief Method get_errorMaterial, addr 0x669f8dc, size 0xd8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_errorMaterial();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalEntityManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalEntityManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalEntityManager(DecalEntityManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalEntityManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalEntityManager(DecalEntityManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12674 };

  /// @brief Field entityChunks, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalEntityChunk*>* ___entityChunks;

  /// @brief Field cachedChunks, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalCachedChunk*>* ___cachedChunks;

  /// @brief Field culledChunks, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalCulledChunk*>* ___culledChunks;

  /// @brief Field drawCallChunks, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>* ___drawCallChunks;

  /// @brief Field chunkCount, offset: 0x30, size: 0x4, def value: None
  int32_t ___chunkCount;

  /// @brief Field m_AddDecalSampler, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_AddDecalSampler;

  /// @brief Field m_ResizeChunks, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_ResizeChunks;

  /// @brief Field m_SortChunks, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_SortChunks;

  /// @brief Field m_DecalEntityIndexer, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalEntityIndexer* ___m_DecalEntityIndexer;

  /// @brief Field m_MaterialToChunkIndex, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>, int32_t>* ___m_MaterialToChunkIndex;

  /// @brief Field m_CombinedChunks, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalEntityManager_CombinedChunks>* ___m_CombinedChunks;

  /// @brief Field m_CombinedChunkRemmap, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___m_CombinedChunkRemmap;

  /// @brief Field m_ErrorMaterial, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_ErrorMaterial;

  /// @brief Field m_DecalProjectorMesh, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___m_DecalProjectorMesh;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalEntityManager, ___entityChunks) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalEntityManager, ___cachedChunks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalEntityManager, ___culledChunks) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalEntityManager, ___drawCallChunks) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalEntityManager, ___chunkCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalEntityManager, ___m_AddDecalSampler) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalEntityManager, ___m_ResizeChunks) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalEntityManager, ___m_SortChunks) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalEntityManager, ___m_DecalEntityIndexer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalEntityManager, ___m_MaterialToChunkIndex) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalEntityManager, ___m_CombinedChunks) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalEntityManager, ___m_CombinedChunkRemmap) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalEntityManager, ___m_ErrorMaterial) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalEntityManager, ___m_DecalProjectorMesh) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalEntityManager, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalEntityManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalEntityManager*, "UnityEngine.Rendering.Universal", "DecalEntityManager");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalEntityManager___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalEntityManager___c*, "UnityEngine.Rendering.Universal", "DecalEntityManager/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalEntityManager_CombinedChunks, "UnityEngine.Rendering.Universal", "DecalEntityManager/CombinedChunks");
