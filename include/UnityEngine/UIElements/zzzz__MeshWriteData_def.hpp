#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MeshWriteData)
namespace Unity::Collections {
template <typename T> struct NativeSlice_1;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MeshWriteData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MeshWriteData);
// Type: UnityEngine.UIElements::MeshWriteData
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6589)), TypeDefinitionIndex(TypeDefinitionIndex(8725)),
// TypeDefinitionIndex(TypeDefinitionIndex(8909)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8725), inst: 751 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(8725), inst: 755 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(6590)) CS Name: ::UnityEngine.UIElements::MeshWriteData*
class CORDL_TYPE MeshWriteData : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Vertices, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Vertices, put = __cordl_internal_set_m_Vertices))::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> m_Vertices;

  /// @brief Field m_Indices, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Indices, put = __cordl_internal_set_m_Indices))::Unity::Collections::NativeSlice_1<uint16_t> m_Indices;

  /// @brief Field m_UVRegion, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_m_UVRegion, put = __cordl_internal_set_m_UVRegion))::UnityEngine::Rect m_UVRegion;

  /// @brief Field currentIndex, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_currentIndex, put = __cordl_internal_set_currentIndex)) int32_t currentIndex;

  /// @brief Field currentVertex, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_currentVertex, put = __cordl_internal_set_currentVertex)) int32_t currentVertex;

  __declspec(property(get = get_vertexCount)) int32_t vertexCount;

  __declspec(property(get = get_indexCount)) int32_t indexCount;

  __declspec(property(get = get_uvRegion))::UnityEngine::Rect uvRegion;

  constexpr ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>& __cordl_internal_get_m_Vertices();

  constexpr ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> const& __cordl_internal_get_m_Vertices() const;

  constexpr void __cordl_internal_set_m_Vertices(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> value);

  constexpr ::Unity::Collections::NativeSlice_1<uint16_t>& __cordl_internal_get_m_Indices();

  constexpr ::Unity::Collections::NativeSlice_1<uint16_t> const& __cordl_internal_get_m_Indices() const;

  constexpr void __cordl_internal_set_m_Indices(::Unity::Collections::NativeSlice_1<uint16_t> value);

  constexpr ::UnityEngine::Rect& __cordl_internal_get_m_UVRegion();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_UVRegion() const;

  constexpr void __cordl_internal_set_m_UVRegion(::UnityEngine::Rect value);

  constexpr int32_t& __cordl_internal_get_currentIndex();

  constexpr int32_t const& __cordl_internal_get_currentIndex() const;

  constexpr void __cordl_internal_set_currentIndex(int32_t value);

  constexpr int32_t& __cordl_internal_get_currentVertex();

  constexpr int32_t const& __cordl_internal_get_currentVertex() const;

  constexpr void __cordl_internal_set_currentVertex(int32_t value);

  static inline ::UnityEngine::UIElements::MeshWriteData* New_ctor();

  /// @brief Method .ctor, addr 0x2e93aa8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_vertexCount, addr 0x2e93ab0, size 0x48, virtual false, abstract: false, final false
  inline int32_t get_vertexCount();

  /// @brief Method get_indexCount, addr 0x2e93af8, size 0x48, virtual false, abstract: false, final false
  inline int32_t get_indexCount();

  /// @brief Method get_uvRegion, addr 0x2e93b40, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_uvRegion();

  /// @brief Method SetNextVertex, addr 0x2e93b4c, size 0x9c, virtual false, abstract: false, final false
  inline void SetNextVertex(::UnityEngine::UIElements::Vertex vertex);

  /// @brief Method SetNextIndex, addr 0x2e93be8, size 0x64, virtual false, abstract: false, final false
  inline void SetNextIndex(uint16_t index);

  /// @brief Method SetAllVertices, addr 0x2e93c4c, size 0xd8, virtual false, abstract: false, final false
  inline void SetAllVertices(::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*> vertices);

  /// @brief Method SetAllIndices, addr 0x2e93d24, size 0xd8, virtual false, abstract: false, final false
  inline void SetAllIndices(::ArrayW<uint16_t, ::Array<uint16_t>*> indices);

  /// @brief Method Reset, addr 0x2e93dfc, size 0x4c, virtual false, abstract: false, final false
  inline void Reset(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices, ::Unity::Collections::NativeSlice_1<uint16_t> indices);

  /// @brief Method Reset, addr 0x2e93e48, size 0x18, virtual false, abstract: false, final false
  inline void Reset(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices, ::Unity::Collections::NativeSlice_1<uint16_t> indices, ::UnityEngine::Rect uvRegion);

  // Ctor Parameters [CppParam { name: "", ty: "MeshWriteData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshWriteData(MeshWriteData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshWriteData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshWriteData(MeshWriteData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshWriteData();

public:
  /// @brief Field m_Vertices, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> ___m_Vertices;

  /// @brief Field m_Indices, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeSlice_1<uint16_t> ___m_Indices;

  /// @brief Field m_UVRegion, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_UVRegion;

  /// @brief Field currentIndex, offset: 0x40, size: 0x4, def value: None
  int32_t ___currentIndex;

  /// @brief Field currentVertex, offset: 0x44, size: 0x4, def value: None
  int32_t ___currentVertex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MeshWriteData, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshWriteData, ___m_Vertices) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshWriteData, ___m_Indices) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshWriteData, ___m_UVRegion) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshWriteData, ___currentIndex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshWriteData, ___currentVertex) == 0x44, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MeshWriteData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MeshWriteData*, "UnityEngine.UIElements", "MeshWriteData");
