#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Face.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__AutoUnwrapSettings_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Face)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace UnityEngine::ProBuilder {
struct AutoUnwrapSettings;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class Face;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Face);
// Dependencies System.Object, UnityEngine.ProBuilder.AutoUnwrapSettings
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.Face
class CORDL_TYPE Face : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Item)) int32_t Item[];

  __declspec(property(get = get_distinctIndexes)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>* distinctIndexes;

  __declspec(property(get = get_distinctIndexesInternal)) ::ArrayW<int32_t, ::Array<int32_t>*> distinctIndexesInternal;

  __declspec(property(get = get_edges)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::Edge>* edges;

  __declspec(property(get = get_edgesInternal)) ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> edgesInternal;

  /// @brief Field elementGroup, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_elementGroup, put = __cordl_internal_set_elementGroup)) int32_t elementGroup;

  __declspec(property(get = get_indexes)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>* indexes;

  __declspec(property(get = get_indexesInternal, put = set_indexesInternal)) ::ArrayW<int32_t, ::Array<int32_t>*> indexesInternal;

  /// @brief Field m_DistinctIndexes, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DistinctIndexes, put = __cordl_internal_set_m_DistinctIndexes)) ::ArrayW<int32_t, ::Array<int32_t>*> m_DistinctIndexes;

  /// @brief Field m_Edges, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Edges, put = __cordl_internal_set_m_Edges)) ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> m_Edges;

  /// @brief Field m_Indexes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Indexes, put = __cordl_internal_set_m_Indexes)) ::ArrayW<int32_t, ::Array<int32_t>*> m_Indexes;

  /// @brief Field m_ManualUV, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ManualUV, put = __cordl_internal_set_m_ManualUV)) bool m_ManualUV;

  /// @brief Field m_Material, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Material, put = __cordl_internal_set_m_Material)) ::UnityW<::UnityEngine::Material> m_Material;

  /// @brief Field m_SmoothingGroup, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SmoothingGroup, put = __cordl_internal_set_m_SmoothingGroup)) int32_t m_SmoothingGroup;

  /// @brief Field m_SubmeshIndex, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SubmeshIndex, put = __cordl_internal_set_m_SubmeshIndex)) int32_t m_SubmeshIndex;

  /// @brief Field m_TextureGroup, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TextureGroup, put = __cordl_internal_set_m_TextureGroup)) int32_t m_TextureGroup;

  /// @brief Field m_Uv, offset 0x1c, size 0x20
  __declspec(property(get = __cordl_internal_get_m_Uv, put = __cordl_internal_set_m_Uv)) ::UnityEngine::ProBuilder::AutoUnwrapSettings m_Uv;

  __declspec(property(get = get_manualUV, put = set_manualUV)) bool manualUV;

  __declspec(property(get = get_material, put = set_material)) ::UnityW<::UnityEngine::Material> material;

  __declspec(property(get = get_smoothingGroup, put = set_smoothingGroup)) int32_t smoothingGroup;

  __declspec(property(get = get_submeshIndex, put = set_submeshIndex)) int32_t submeshIndex;

  __declspec(property(get = get_textureGroup, put = set_textureGroup)) int32_t textureGroup;

  __declspec(property(get = get_uv, put = set_uv)) ::UnityEngine::ProBuilder::AutoUnwrapSettings uv;

  /// @brief Method CacheDistinctIndexes, addr 0x470a8cc, size 0x74, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> CacheDistinctIndexes();

  /// @brief Method CacheEdges, addr 0x470a9cc, size 0x354, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> CacheEdges();

  /// @brief Method Contains, addr 0x470b1e4, size 0x94, virtual false, abstract: false, final false
  inline bool Contains(int32_t a, int32_t b, int32_t c);

  /// @brief Method CopyFrom, addr 0x470b0a4, size 0x140, virtual false, abstract: false, final false
  inline void CopyFrom(::UnityEngine::ProBuilder::Face* other);

  /// @brief Method GetDistinctIndices, addr 0x470bd10, size 0x3e0, virtual false, abstract: false, final false
  static inline void GetDistinctIndices(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, ::System::Collections::Generic::List_1<int32_t>* indices);

  /// @brief Method GetIndices, addr 0x470b954, size 0x3bc, virtual false, abstract: false, final false
  static inline void GetIndices(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, ::System::Collections::Generic::List_1<int32_t>* indices);

  /// @brief Method InvalidateCache, addr 0x470a744, size 0x8, virtual false, abstract: false, final false
  inline void InvalidateCache();

  /// @brief Method IsQuad, addr 0x470b278, size 0x48, virtual false, abstract: false, final false
  inline bool IsQuad();

  static inline ::UnityEngine::ProBuilder::Face* New_ctor();

  static inline ::UnityEngine::ProBuilder::Face* New_ctor(::System::Collections::Generic::IEnumerable_1<int32_t>* indices);

  static inline ::UnityEngine::ProBuilder::Face* New_ctor(::UnityEngine::ProBuilder::Face* other);

  static inline ::UnityEngine::ProBuilder::Face* New_ctor(::ArrayW<int32_t, ::Array<int32_t>*> triangles, ::UnityEngine::Material* m, ::UnityEngine::ProBuilder::AutoUnwrapSettings u,
                                                          int32_t smoothing, int32_t texture, int32_t element, bool manualUVs);

  static inline ::UnityEngine::ProBuilder::Face* New_ctor(::System::Collections::Generic::IEnumerable_1<int32_t>* triangles, int32_t submeshIndex, ::UnityEngine::ProBuilder::AutoUnwrapSettings u,
                                                          int32_t smoothing, int32_t texture, int32_t element, bool manualUVs);

  /// @brief Method Reverse, addr 0x470b904, size 0x50, virtual false, abstract: false, final false
  inline void Reverse();

  /// @brief Method SetIndexes, addr 0x470a7c8, size 0x104, virtual false, abstract: false, final false
  inline void SetIndexes(::System::Collections::Generic::IEnumerable_1<int32_t>* indices);

  /// @brief Method ShiftIndexes, addr 0x470b80c, size 0x44, virtual false, abstract: false, final false
  inline void ShiftIndexes(int32_t offset);

  /// @brief Method ShiftIndexesToZero, addr 0x470b8a0, size 0x64, virtual false, abstract: false, final false
  inline void ShiftIndexesToZero();

  /// @brief Method SmallestIndexValue, addr 0x470b850, size 0x50, virtual false, abstract: false, final false
  inline int32_t SmallestIndexValue();

  /// @brief Method ToQuad, addr 0x470b2c0, size 0x380, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> ToQuad();

  /// @brief Method ToString, addr 0x470b640, size 0x1cc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryGetNextEdge, addr 0x470c0f0, size 0x18c, virtual false, abstract: false, final false
  inline bool TryGetNextEdge(::UnityEngine::ProBuilder::Edge source, int32_t index, ::ByRef<::UnityEngine::ProBuilder::Edge> nextEdge, ::ByRef<int32_t> nextIndex);

  constexpr int32_t const& __cordl_internal_get_elementGroup() const;

  constexpr int32_t& __cordl_internal_get_elementGroup();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_DistinctIndexes() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_DistinctIndexes();

  constexpr ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> const& __cordl_internal_get_m_Edges() const;

  constexpr ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>& __cordl_internal_get_m_Edges();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_Indexes() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_Indexes();

  constexpr bool const& __cordl_internal_get_m_ManualUV() const;

  constexpr bool& __cordl_internal_get_m_ManualUV();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_Material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_Material();

  constexpr int32_t const& __cordl_internal_get_m_SmoothingGroup() const;

  constexpr int32_t& __cordl_internal_get_m_SmoothingGroup();

  constexpr int32_t const& __cordl_internal_get_m_SubmeshIndex() const;

  constexpr int32_t& __cordl_internal_get_m_SubmeshIndex();

  constexpr int32_t const& __cordl_internal_get_m_TextureGroup() const;

  constexpr int32_t& __cordl_internal_get_m_TextureGroup();

  constexpr ::UnityEngine::ProBuilder::AutoUnwrapSettings const& __cordl_internal_get_m_Uv() const;

  constexpr ::UnityEngine::ProBuilder::AutoUnwrapSettings& __cordl_internal_get_m_Uv();

  constexpr void __cordl_internal_set_elementGroup(int32_t value);

  constexpr void __cordl_internal_set_m_DistinctIndexes(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_Edges(::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> value);

  constexpr void __cordl_internal_set_m_Indexes(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_ManualUV(bool value);

  constexpr void __cordl_internal_set_m_Material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_SmoothingGroup(int32_t value);

  constexpr void __cordl_internal_set_m_SubmeshIndex(int32_t value);

  constexpr void __cordl_internal_set_m_TextureGroup(int32_t value);

  constexpr void __cordl_internal_set_m_Uv(::UnityEngine::ProBuilder::AutoUnwrapSettings value);

  /// @brief Method .ctor, addr 0x470ae2c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x470ae48, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<int32_t>* indices);

  /// @brief Method .ctor, addr 0x470b078, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ProBuilder::Face* other);

  /// @brief Method .ctor, addr 0x470aeec, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<int32_t, ::Array<int32_t>*> triangles, ::UnityEngine::Material* m, ::UnityEngine::ProBuilder::AutoUnwrapSettings u, int32_t smoothing, int32_t texture, int32_t element,
                    bool manualUVs);

  /// @brief Method .ctor, addr 0x470afb4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<int32_t>* triangles, int32_t submeshIndex, ::UnityEngine::ProBuilder::AutoUnwrapSettings u, int32_t smoothing, int32_t texture,
                    int32_t element, bool manualUVs);

  /// @brief Method get_Item, addr 0x470adfc, size 0x30, virtual false, abstract: false, final false
  inline int32_t get_Item(int32_t i);

  /// @brief Method get_distinctIndexes, addr 0x470a940, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>* get_distinctIndexes();

  /// @brief Method get_distinctIndexesInternal, addr 0x470a010, size 0x14, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_distinctIndexesInternal();

  /// @brief Method get_edges, addr 0x470ad20, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::Edge>* get_edges();

  /// @brief Method get_edgesInternal, addr 0x470a560, size 0x14, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> get_edgesInternal();

  /// @brief Method get_indexes, addr 0x470a74c, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>* get_indexes();

  /// @brief Method get_indexesInternal, addr 0x470a680, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_indexesInternal();

  /// @brief Method get_manualUV, addr 0x470a65c, size 0x8, virtual false, abstract: false, final false
  inline bool get_manualUV();

  /// @brief Method get_material, addr 0x470adbc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_material();

  /// @brief Method get_smoothingGroup, addr 0x470adac, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_smoothingGroup();

  /// @brief Method get_submeshIndex, addr 0x470adcc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_submeshIndex();

  /// @brief Method get_textureGroup, addr 0x470a670, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_textureGroup();

  /// @brief Method get_uv, addr 0x470addc, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::AutoUnwrapSettings get_uv();

  /// @brief Method set_indexesInternal, addr 0x470a688, size 0xbc, virtual false, abstract: false, final false
  inline void set_indexesInternal(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method set_manualUV, addr 0x470a664, size 0xc, virtual false, abstract: false, final false
  inline void set_manualUV(bool value);

  /// @brief Method set_material, addr 0x470adc4, size 0x8, virtual false, abstract: false, final false
  inline void set_material(::UnityEngine::Material* value);

  /// @brief Method set_smoothingGroup, addr 0x470adb4, size 0x8, virtual false, abstract: false, final false
  inline void set_smoothingGroup(int32_t value);

  /// @brief Method set_submeshIndex, addr 0x470add4, size 0x8, virtual false, abstract: false, final false
  inline void set_submeshIndex(int32_t value);

  /// @brief Method set_textureGroup, addr 0x470a678, size 0x8, virtual false, abstract: false, final false
  inline void set_textureGroup(int32_t value);

  /// @brief Method set_uv, addr 0x470adec, size 0x10, virtual false, abstract: false, final false
  inline void set_uv(::UnityEngine::ProBuilder::AutoUnwrapSettings value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Face();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Face", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Face(Face&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Face", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Face(Face const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14240 };

  /// @brief Field m_Indexes, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_Indexes;

  /// @brief Field m_SmoothingGroup, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_SmoothingGroup;

  /// @brief Field m_Uv, offset: 0x1c, size: 0x20, def value: None
  ::UnityEngine::ProBuilder::AutoUnwrapSettings ___m_Uv;

  /// @brief Field m_Material, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_Material;

  /// @brief Field m_SubmeshIndex, offset: 0x48, size: 0x4, def value: None
  int32_t ___m_SubmeshIndex;

  /// @brief Field m_ManualUV, offset: 0x4c, size: 0x1, def value: None
  bool ___m_ManualUV;

  /// @brief Field elementGroup, offset: 0x50, size: 0x4, def value: None
  int32_t ___elementGroup;

  /// @brief Field m_TextureGroup, offset: 0x54, size: 0x4, def value: None
  int32_t ___m_TextureGroup;

  /// @brief Field m_DistinctIndexes, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_DistinctIndexes;

  /// @brief Field m_Edges, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> ___m_Edges;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::Face, ___m_Indexes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Face, ___m_SmoothingGroup) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Face, ___m_Uv) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Face, ___m_Material) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Face, ___m_SubmeshIndex) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Face, ___m_ManualUV) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Face, ___elementGroup) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Face, ___m_TextureGroup) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Face, ___m_DistinctIndexes) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Face, ___m_Edges) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Face, 0x68>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::Face);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Face*, "UnityEngine.ProBuilder", "Face");
