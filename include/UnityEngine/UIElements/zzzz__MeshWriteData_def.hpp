#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MeshWriteData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MeshWriteData)
// Forward declare root types
namespace UnityEngine::UIElements {
class MeshWriteData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MeshWriteData);
// Dependencies System.Object, Unity.Collections.NativeSlice`1<T>, UnityEngine.UIElements.Vertex
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MeshWriteData
class CORDL_TYPE MeshWriteData : public ::System::Object {
public:
  // Declarations
  /// @brief Field currentIndex, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_currentIndex, put = __cordl_internal_set_currentIndex)) int32_t currentIndex;

  /// @brief Field currentVertex, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_currentVertex, put = __cordl_internal_set_currentVertex)) int32_t currentVertex;

  /// @brief Field m_Indices, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Indices, put = __cordl_internal_set_m_Indices)) ::Unity::Collections::NativeSlice_1<uint16_t> m_Indices;

  /// @brief Field m_Vertices, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Vertices, put = __cordl_internal_set_m_Vertices)) ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> m_Vertices;

  static inline ::UnityEngine::UIElements::MeshWriteData* New_ctor();

  constexpr int32_t const& __cordl_internal_get_currentIndex() const;

  constexpr int32_t& __cordl_internal_get_currentIndex();

  constexpr int32_t const& __cordl_internal_get_currentVertex() const;

  constexpr int32_t& __cordl_internal_get_currentVertex();

  constexpr ::Unity::Collections::NativeSlice_1<uint16_t> const& __cordl_internal_get_m_Indices() const;

  constexpr ::Unity::Collections::NativeSlice_1<uint16_t>& __cordl_internal_get_m_Indices();

  constexpr ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> const& __cordl_internal_get_m_Vertices() const;

  constexpr ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>& __cordl_internal_get_m_Vertices();

  constexpr void __cordl_internal_set_currentIndex(int32_t value);

  constexpr void __cordl_internal_set_currentVertex(int32_t value);

  constexpr void __cordl_internal_set_m_Indices(::Unity::Collections::NativeSlice_1<uint16_t> value);

  constexpr void __cordl_internal_set_m_Vertices(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> value);

  /// @brief Method .ctor, addr 0x6ba07b0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshWriteData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MeshWriteData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshWriteData(MeshWriteData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshWriteData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshWriteData(MeshWriteData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4668 };

  /// @brief Field m_Vertices, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> ___m_Vertices;

  /// @brief Field m_Indices, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeSlice_1<uint16_t> ___m_Indices;

  /// @brief Field currentIndex, offset: 0x30, size: 0x4, def value: None
  int32_t ___currentIndex;

  /// @brief Field currentVertex, offset: 0x34, size: 0x4, def value: None
  int32_t ___currentVertex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::MeshWriteData, ___m_Vertices) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshWriteData, ___m_Indices) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshWriteData, ___currentIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshWriteData, ___currentVertex) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MeshWriteData, 0x38>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MeshWriteData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MeshWriteData*, "UnityEngine.UIElements", "MeshWriteData");
