#pragma once
// IWYU pragma private; include "UnityEngine/BlendShape.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BlendShape)
// Forward declare root types
namespace UnityEngine {
struct BlendShape;
}
// Write type traits
MARK_VAL_T(::UnityEngine::BlendShape);
// Type: UnityEngine::BlendShape
// SizeInfo { instance_size: 12, native_size: 16, calculated_instance_size: 12, calculated_native_size: 26, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::BlendShape
struct CORDL_TYPE BlendShape {
public:
  // Declarations
  __declspec(property(get = get_firstVertex)) uint32_t firstVertex;

  __declspec(property(get = get_vertexCount)) uint32_t vertexCount;

  /// @brief Method get_firstVertex, addr 0x4815304, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_firstVertex();

  /// @brief Method get_vertexCount, addr 0x4815314, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_vertexCount();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BlendShape();

  // Ctor Parameters [CppParam { name: "m_FirstVertex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_VertexCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_HasNormals", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_HasTangents", ty: "bool", modifiers: "", def_value: None }]
  constexpr BlendShape(uint32_t m_FirstVertex, uint32_t m_VertexCount, bool m_HasNormals, bool m_HasTangents) noexcept;

  /// @brief Field m_FirstVertex, offset: 0x0, size: 0x4, def value: None
  uint32_t m_FirstVertex;

  /// @brief Field m_VertexCount, offset: 0x4, size: 0x4, def value: None
  uint32_t m_VertexCount;

  /// @brief Field m_HasNormals, offset: 0x8, size: 0x1, def value: None
  bool m_HasNormals;

  /// @brief Field m_HasTangents, offset: 0x9, size: 0x1, def value: None
  bool m_HasTangents;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10743 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::BlendShape, 0xc>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::BlendShape, m_FirstVertex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::BlendShape, m_VertexCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::BlendShape, m_HasNormals) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::BlendShape, m_HasTangents) == 0x9, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::BlendShape, "UnityEngine", "BlendShape");
