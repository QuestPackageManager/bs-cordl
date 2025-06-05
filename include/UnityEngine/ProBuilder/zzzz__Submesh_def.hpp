#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Submesh.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MeshTopology_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Submesh)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
struct MeshTopology;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class Submesh;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Submesh);
// Dependencies System.Object, UnityEngine.MeshTopology
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.Submesh
class CORDL_TYPE Submesh : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_indexes, put = set_indexes)) ::System::Collections::Generic::IEnumerable_1<int32_t>* indexes;

  /// @brief Field m_Indexes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Indexes, put = __cordl_internal_set_m_Indexes)) ::ArrayW<int32_t, ::Array<int32_t>*> m_Indexes;

  /// @brief Field m_SubmeshIndex, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SubmeshIndex, put = __cordl_internal_set_m_SubmeshIndex)) int32_t m_SubmeshIndex;

  /// @brief Field m_Topology, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Topology, put = __cordl_internal_set_m_Topology)) ::UnityEngine::MeshTopology m_Topology;

  __declspec(property(get = get_submeshIndex, put = set_submeshIndex)) int32_t submeshIndex;

  __declspec(property(get = get_topology, put = set_topology)) ::UnityEngine::MeshTopology topology;

  /// @brief Method GetSubmeshCount, addr 0x47422b8, size 0x6c, virtual false, abstract: false, final false
  static inline int32_t GetSubmeshCount(::UnityEngine::ProBuilder::ProBuilderMesh* mesh);

  /// @brief Method GetSubmeshes, addr 0x4742324, size 0x940, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::ProBuilder::Submesh*, ::Array<::UnityEngine::ProBuilder::Submesh*>*>
  GetSubmeshes(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, int32_t submeshCount, ::UnityEngine::MeshTopology preferredTopology);

  /// @brief Method MapFaceMaterialsToSubmeshIndex, addr 0x4742c64, size 0x12c, virtual false, abstract: false, final false
  static inline void MapFaceMaterialsToSubmeshIndex(::UnityEngine::ProBuilder::ProBuilderMesh* mesh);

  static inline ::UnityEngine::ProBuilder::Submesh* New_ctor(::UnityEngine::Mesh* mesh, int32_t subMeshIndex);

  static inline ::UnityEngine::ProBuilder::Submesh* New_ctor(int32_t submeshIndex, ::UnityEngine::MeshTopology topology, ::System::Collections::Generic::IEnumerable_1<int32_t>* indexes);

  /// @brief Method ToString, addr 0x47421b0, size 0x108, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_Indexes() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_Indexes();

  constexpr int32_t const& __cordl_internal_get_m_SubmeshIndex() const;

  constexpr int32_t& __cordl_internal_get_m_SubmeshIndex();

  constexpr ::UnityEngine::MeshTopology const& __cordl_internal_get_m_Topology() const;

  constexpr ::UnityEngine::MeshTopology& __cordl_internal_get_m_Topology();

  constexpr void __cordl_internal_set_m_Indexes(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_SubmeshIndex(int32_t value);

  constexpr void __cordl_internal_set_m_Topology(::UnityEngine::MeshTopology value);

  /// @brief Method .ctor, addr 0x47420b8, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Mesh* mesh, int32_t subMeshIndex);

  /// @brief Method .ctor, addr 0x4741ff8, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(int32_t submeshIndex, ::UnityEngine::MeshTopology topology, ::System::Collections::Generic::IEnumerable_1<int32_t>* indexes);

  /// @brief Method get_indexes, addr 0x4741f00, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* get_indexes();

  /// @brief Method get_submeshIndex, addr 0x4741fe8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_submeshIndex();

  /// @brief Method get_topology, addr 0x4741fd8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::MeshTopology get_topology();

  /// @brief Method set_indexes, addr 0x4741f7c, size 0x5c, virtual false, abstract: false, final false
  inline void set_indexes(::System::Collections::Generic::IEnumerable_1<int32_t>* value);

  /// @brief Method set_submeshIndex, addr 0x4741ff0, size 0x8, virtual false, abstract: false, final false
  inline void set_submeshIndex(int32_t value);

  /// @brief Method set_topology, addr 0x4741fe0, size 0x8, virtual false, abstract: false, final false
  inline void set_topology(::UnityEngine::MeshTopology value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Submesh();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Submesh", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Submesh(Submesh&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Submesh", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Submesh(Submesh const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14324 };

  /// @brief Field m_Indexes, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_Indexes;

  /// @brief Field m_Topology, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::MeshTopology ___m_Topology;

  /// @brief Field m_SubmeshIndex, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_SubmeshIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::Submesh, ___m_Indexes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Submesh, ___m_Topology) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Submesh, ___m_SubmeshIndex) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Submesh, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::Submesh);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Submesh*, "UnityEngine.ProBuilder", "Submesh");
