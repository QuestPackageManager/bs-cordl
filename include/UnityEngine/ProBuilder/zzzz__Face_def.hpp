#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__AutoUnwrapSettings_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Face)
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace UnityEngine::ProBuilder {
struct AutoUnwrapSettings;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
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
// Type: UnityEngine.ProBuilder::Face
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(12100))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12124))
// CS Name: ::UnityEngine.ProBuilder::Face*
class CORDL_TYPE Face : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Indexes, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Indexes, put = __set_m_Indexes))::ArrayW<int32_t, ::Array<int32_t>*> m_Indexes;

  /// @brief Field m_SmoothingGroup, offset 0x18, size 0x4
  __declspec(property(get = __get_m_SmoothingGroup, put = __set_m_SmoothingGroup)) int32_t m_SmoothingGroup;

  /// @brief Field m_Uv, offset 0x1c, size 0x20
  __declspec(property(get = __get_m_Uv, put = __set_m_Uv))::UnityEngine::ProBuilder::AutoUnwrapSettings m_Uv;

  /// @brief Field m_Material, offset 0x40, size 0x8
  __declspec(property(get = __get_m_Material, put = __set_m_Material))::UnityEngine::Material* m_Material;

  /// @brief Field m_SubmeshIndex, offset 0x48, size 0x4
  __declspec(property(get = __get_m_SubmeshIndex, put = __set_m_SubmeshIndex)) int32_t m_SubmeshIndex;

  /// @brief Field m_ManualUV, offset 0x4c, size 0x1
  __declspec(property(get = __get_m_ManualUV, put = __set_m_ManualUV)) bool m_ManualUV;

  /// @brief Field elementGroup, offset 0x50, size 0x4
  __declspec(property(get = __get_elementGroup, put = __set_elementGroup)) int32_t elementGroup;

  /// @brief Field m_TextureGroup, offset 0x54, size 0x4
  __declspec(property(get = __get_m_TextureGroup, put = __set_m_TextureGroup)) int32_t m_TextureGroup;

  /// @brief Field m_DistinctIndexes, offset 0x58, size 0x8
  __declspec(property(get = __get_m_DistinctIndexes, put = __set_m_DistinctIndexes))::ArrayW<int32_t, ::Array<int32_t>*> m_DistinctIndexes;

  /// @brief Field m_Edges, offset 0x60, size 0x8
  __declspec(property(get = __get_m_Edges, put = __set_m_Edges))::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> m_Edges;

  __declspec(property(get = get_manualUV, put = set_manualUV)) bool manualUV;

  __declspec(property(get = get_textureGroup, put = set_textureGroup)) int32_t textureGroup;

  __declspec(property(get = get_indexesInternal, put = set_indexesInternal))::ArrayW<int32_t, ::Array<int32_t>*> indexesInternal;

  __declspec(property(get = get_indexes))::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>* indexes;

  __declspec(property(get = get_distinctIndexesInternal))::ArrayW<int32_t, ::Array<int32_t>*> distinctIndexesInternal;

  __declspec(property(get = get_distinctIndexes))::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>* distinctIndexes;

  __declspec(property(get = get_edgesInternal))::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> edgesInternal;

  __declspec(property(get = get_edges))::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::Edge>* edges;

  __declspec(property(get = get_smoothingGroup, put = set_smoothingGroup)) int32_t smoothingGroup;

  __declspec(property(get = get_material, put = set_material))::UnityEngine::Material* material;

  __declspec(property(get = get_submeshIndex, put = set_submeshIndex)) int32_t submeshIndex;

  __declspec(property(get = get_uv, put = set_uv))::UnityEngine::ProBuilder::AutoUnwrapSettings uv;

  __declspec(property(get = get_Item)) int32_t Item[];

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_m_Indexes();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_m_Indexes() const;

  constexpr void __set_m_Indexes(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr int32_t& __get_m_SmoothingGroup();

  constexpr int32_t const& __get_m_SmoothingGroup() const;

  constexpr void __set_m_SmoothingGroup(int32_t value);

  constexpr ::UnityEngine::ProBuilder::AutoUnwrapSettings& __get_m_Uv();

  constexpr ::UnityEngine::ProBuilder::AutoUnwrapSettings const& __get_m_Uv() const;

  constexpr void __set_m_Uv(::UnityEngine::ProBuilder::AutoUnwrapSettings value);

  constexpr ::UnityEngine::Material*& __get_m_Material();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get_m_Material() const;

  constexpr void __set_m_Material(::UnityEngine::Material* value);

  constexpr int32_t& __get_m_SubmeshIndex();

  constexpr int32_t const& __get_m_SubmeshIndex() const;

  constexpr void __set_m_SubmeshIndex(int32_t value);

  constexpr bool& __get_m_ManualUV();

  constexpr bool const& __get_m_ManualUV() const;

  constexpr void __set_m_ManualUV(bool value);

  constexpr int32_t& __get_elementGroup();

  constexpr int32_t const& __get_elementGroup() const;

  constexpr void __set_elementGroup(int32_t value);

  constexpr int32_t& __get_m_TextureGroup();

  constexpr int32_t const& __get_m_TextureGroup() const;

  constexpr void __set_m_TextureGroup(int32_t value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_m_DistinctIndexes();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_m_DistinctIndexes() const;

  constexpr void __set_m_DistinctIndexes(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>& __get_m_Edges();

  constexpr ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> const& __get_m_Edges() const;

  constexpr void __set_m_Edges(::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> value);

  /// @brief Method get_manualUV addr 0x2b40098 size 0x8 virtual false final false
  inline bool get_manualUV();

  /// @brief Method set_manualUV addr 0x2b400a0 size 0xc virtual false final false
  inline void set_manualUV(bool value);

  /// @brief Method get_textureGroup addr 0x2b400ac size 0x8 virtual false final false
  inline int32_t get_textureGroup();

  /// @brief Method set_textureGroup addr 0x2b400b4 size 0x8 virtual false final false
  inline void set_textureGroup(int32_t value);

  /// @brief Method get_indexesInternal addr 0x2b400bc size 0x8 virtual false final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_indexesInternal();

  /// @brief Method set_indexesInternal addr 0x2b400c4 size 0xc8 virtual false final false
  inline void set_indexesInternal(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method get_indexes addr 0x2b40194 size 0x7c virtual false final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>* get_indexes();

  /// @brief Method SetIndexes addr 0x2b40210 size 0x110 virtual false final false
  inline void SetIndexes(::System::Collections::Generic::IEnumerable_1<int32_t>* indices);

  /// @brief Method get_distinctIndexesInternal addr 0x2b3fb40 size 0x14 virtual false final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_distinctIndexesInternal();

  /// @brief Method get_distinctIndexes addr 0x2b40394 size 0x8c virtual false final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>* get_distinctIndexes();

  /// @brief Method get_edgesInternal addr 0x2b3ff9c size 0x14 virtual false final false
  inline ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> get_edgesInternal();

  /// @brief Method get_edges addr 0x2b40720 size 0x8c virtual false final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::Edge>* get_edges();

  /// @brief Method get_smoothingGroup addr 0x2b407ac size 0x8 virtual false final false
  inline int32_t get_smoothingGroup();

  /// @brief Method set_smoothingGroup addr 0x2b407b4 size 0x8 virtual false final false
  inline void set_smoothingGroup(int32_t value);

  /// @brief Method get_material addr 0x2b407bc size 0x8 virtual false final false
  inline ::UnityEngine::Material* get_material();

  /// @brief Method set_material addr 0x2b407c4 size 0x8 virtual false final false
  inline void set_material(::UnityEngine::Material* value);

  /// @brief Method get_submeshIndex addr 0x2b407cc size 0x8 virtual false final false
  inline int32_t get_submeshIndex();

  /// @brief Method set_submeshIndex addr 0x2b407d4 size 0x8 virtual false final false
  inline void set_submeshIndex(int32_t value);

  /// @brief Method get_uv addr 0x2b407dc size 0x10 virtual false final false
  inline ::UnityEngine::ProBuilder::AutoUnwrapSettings get_uv();

  /// @brief Method set_uv addr 0x2b407ec size 0x10 virtual false final false
  inline void set_uv(::UnityEngine::ProBuilder::AutoUnwrapSettings value);

  /// @brief Method get_Item addr 0x2b407fc size 0x30 virtual false final false
  inline int32_t get_Item(int32_t i);

  static inline ::UnityEngine::ProBuilder::Face* New_ctor();

  /// @brief Method .ctor addr 0x2b4082c size 0x1c virtual false final false
  inline void _ctor();

  static inline ::UnityEngine::ProBuilder::Face* New_ctor(::System::Collections::Generic::IEnumerable_1<int32_t>* indices);

  /// @brief Method .ctor addr 0x2b40848 size 0xa4 virtual false final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<int32_t>* indices);

  static inline ::UnityEngine::ProBuilder::Face* New_ctor(::ArrayW<int32_t, ::Array<int32_t>*> triangles, ::UnityEngine::Material* m, ::UnityEngine::ProBuilder::AutoUnwrapSettings u,
                                                          int32_t smoothing, int32_t texture, int32_t element, bool manualUVs);

  /// @brief Method .ctor addr 0x2b408ec size 0xc0 virtual false final false
  inline void _ctor(::ArrayW<int32_t, ::Array<int32_t>*> triangles, ::UnityEngine::Material* m, ::UnityEngine::ProBuilder::AutoUnwrapSettings u, int32_t smoothing, int32_t texture, int32_t element,
                    bool manualUVs);

  static inline ::UnityEngine::ProBuilder::Face* New_ctor(::System::Collections::Generic::IEnumerable_1<int32_t>* triangles, int32_t submeshIndex, ::UnityEngine::ProBuilder::AutoUnwrapSettings u,
                                                          int32_t smoothing, int32_t texture, int32_t element, bool manualUVs);

  /// @brief Method .ctor addr 0x2b409ac size 0xbc virtual false final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<int32_t>* triangles, int32_t submeshIndex, ::UnityEngine::ProBuilder::AutoUnwrapSettings u, int32_t smoothing, int32_t texture,
                    int32_t element, bool manualUVs);

  static inline ::UnityEngine::ProBuilder::Face* New_ctor(::UnityEngine::ProBuilder::Face* other);

  /// @brief Method .ctor addr 0x2b40a68 size 0x2c virtual false final false
  inline void _ctor(::UnityEngine::ProBuilder::Face* other);

  /// @brief Method CopyFrom addr 0x2b40a94 size 0x13c virtual false final false
  inline void CopyFrom(::UnityEngine::ProBuilder::Face* other);

  /// @brief Method InvalidateCache addr 0x2b4018c size 0x8 virtual false final false
  inline void InvalidateCache();

  /// @brief Method CacheEdges addr 0x2b40420 size 0x300 virtual false final false
  inline ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> CacheEdges();

  /// @brief Method CacheDistinctIndexes addr 0x2b40320 size 0x74 virtual false final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> CacheDistinctIndexes();

  /// @brief Method Contains addr 0x2b40bd0 size 0x94 virtual false final false
  inline bool Contains(int32_t a, int32_t b, int32_t c);

  /// @brief Method IsQuad addr 0x2b40c64 size 0x48 virtual false final false
  inline bool IsQuad();

  /// @brief Method ToQuad addr 0x2b40cac size 0x384 virtual false final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> ToQuad();

  /// @brief Method ToString addr 0x2b41030 size 0x1cc virtual true final false
  inline ::StringW ToString();

  /// @brief Method ShiftIndexes addr 0x2b411fc size 0x44 virtual false final false
  inline void ShiftIndexes(int32_t offset);

  /// @brief Method SmallestIndexValue addr 0x2b41240 size 0x50 virtual false final false
  inline int32_t SmallestIndexValue();

  /// @brief Method ShiftIndexesToZero addr 0x2b41290 size 0x64 virtual false final false
  inline void ShiftIndexesToZero();

  /// @brief Method Reverse addr 0x2b412f4 size 0x50 virtual false final false
  inline void Reverse();

  /// @brief Method GetIndices addr 0x2b41344 size 0x3c4 virtual false final false
  static inline void GetIndices(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, ::System::Collections::Generic::List_1<int32_t>* indices);

  /// @brief Method GetDistinctIndices addr 0x2b41708 size 0x3ec virtual false final false
  static inline void GetDistinctIndices(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, ::System::Collections::Generic::List_1<int32_t>* indices);

  /// @brief Method TryGetNextEdge addr 0x2b41af4 size 0x16c virtual false final false
  inline bool TryGetNextEdge(::UnityEngine::ProBuilder::Edge source, int32_t index, ByRef<::UnityEngine::ProBuilder::Edge> nextEdge, ByRef<int32_t> nextIndex);

  // Ctor Parameters [CppParam { name: "", ty: "Face", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Face(Face&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Face", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Face(Face const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Face();

public:
  /// @brief Field m_Indexes, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_Indexes;

  /// @brief Field m_SmoothingGroup, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_SmoothingGroup;

  /// @brief Field m_Uv, offset: 0x1c, size: 0x20, def value: None
  ::UnityEngine::ProBuilder::AutoUnwrapSettings ___m_Uv;

  /// @brief Field m_Material, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Material* ___m_Material;

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
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Face, 0x68>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::Face);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Face*, "UnityEngine.ProBuilder", "Face");
