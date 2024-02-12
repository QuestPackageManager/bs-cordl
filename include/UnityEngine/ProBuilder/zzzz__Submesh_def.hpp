#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MeshTopology_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: UnityEngine.ProBuilder::Submesh
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(8845))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12104))
// CS Name: ::UnityEngine.ProBuilder::Submesh*
class CORDL_TYPE Submesh : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Indexes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Indexes, put = __cordl_internal_set_m_Indexes))::ArrayW<int32_t, ::Array<int32_t>*> m_Indexes;

  /// @brief Field m_Topology, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Topology, put = __cordl_internal_set_m_Topology))::UnityEngine::MeshTopology m_Topology;

  /// @brief Field m_SubmeshIndex, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SubmeshIndex, put = __cordl_internal_set_m_SubmeshIndex)) int32_t m_SubmeshIndex;

  __declspec(property(get = get_indexes, put = set_indexes))::System::Collections::Generic::IEnumerable_1<int32_t>* indexes;

  __declspec(property(get = get_topology, put = set_topology))::UnityEngine::MeshTopology topology;

  __declspec(property(get = get_submeshIndex, put = set_submeshIndex)) int32_t submeshIndex;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_Indexes();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_Indexes() const;

  constexpr void __cordl_internal_set_m_Indexes(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::UnityEngine::MeshTopology& __cordl_internal_get_m_Topology();

  constexpr ::UnityEngine::MeshTopology const& __cordl_internal_get_m_Topology() const;

  constexpr void __cordl_internal_set_m_Topology(::UnityEngine::MeshTopology value);

  constexpr int32_t& __cordl_internal_get_m_SubmeshIndex();

  constexpr int32_t const& __cordl_internal_get_m_SubmeshIndex() const;

  constexpr void __cordl_internal_set_m_SubmeshIndex(int32_t value);

  /// @brief Method get_indexes, addr 0x2b79cf0, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* get_indexes();

  /// @brief Method set_indexes, addr 0x2b79d6c, size 0x5c, virtual false, abstract: false, final false
  inline void set_indexes(::System::Collections::Generic::IEnumerable_1<int32_t>* value);

  /// @brief Method get_topology, addr 0x2b79dc8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::MeshTopology get_topology();

  /// @brief Method set_topology, addr 0x2b79dd0, size 0x8, virtual false, abstract: false, final false
  inline void set_topology(::UnityEngine::MeshTopology value);

  /// @brief Method get_submeshIndex, addr 0x2b79dd8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_submeshIndex();

  /// @brief Method set_submeshIndex, addr 0x2b79de0, size 0x8, virtual false, abstract: false, final false
  inline void set_submeshIndex(int32_t value);

  static inline ::UnityEngine::ProBuilder::Submesh* New_ctor(int32_t submeshIndex, ::UnityEngine::MeshTopology topology, ::System::Collections::Generic::IEnumerable_1<int32_t>* indexes);

  /// @brief Method .ctor, addr 0x2b79de8, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(int32_t submeshIndex, ::UnityEngine::MeshTopology topology, ::System::Collections::Generic::IEnumerable_1<int32_t>* indexes);

  static inline ::UnityEngine::ProBuilder::Submesh* New_ctor(::UnityEngine::Mesh* mesh, int32_t subMeshIndex);

  /// @brief Method .ctor, addr 0x2b79eac, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Mesh* mesh, int32_t subMeshIndex);

  /// @brief Method ToString, addr 0x2b79fa8, size 0x108, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method GetSubmeshCount, addr 0x2b7a0b0, size 0x60, virtual false, abstract: false, final false
  static inline int32_t GetSubmeshCount(::UnityEngine::ProBuilder::ProBuilderMesh* mesh);

  /// @brief Method GetSubmeshes, addr 0x2b7a110, size 0x96c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::ProBuilder::Submesh*, ::Array<::UnityEngine::ProBuilder::Submesh*>*>
  GetSubmeshes(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, int32_t submeshCount, ::UnityEngine::MeshTopology preferredTopology);

  /// @brief Method MapFaceMaterialsToSubmeshIndex, addr 0x2b7aa7c, size 0x12c, virtual false, abstract: false, final false
  static inline void MapFaceMaterialsToSubmeshIndex(::UnityEngine::ProBuilder::ProBuilderMesh* mesh);

  // Ctor Parameters [CppParam { name: "", ty: "Submesh", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Submesh(Submesh&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Submesh", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Submesh(Submesh const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Submesh();

public:
  /// @brief Field m_Indexes, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_Indexes;

  /// @brief Field m_Topology, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::MeshTopology ___m_Topology;

  /// @brief Field m_SubmeshIndex, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_SubmeshIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Submesh, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Submesh, ___m_Indexes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Submesh, ___m_Topology) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Submesh, ___m_SubmeshIndex) == 0x1c, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::Submesh);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Submesh*, "UnityEngine.ProBuilder", "Submesh");
