#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CombineInstance)
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine {
struct CombineInstance;
}
// Write type traits
MARK_VAL_T(::UnityEngine::CombineInstance);
// Type: UnityEngine::CombineInstance
// SizeInfo { instance_size: 104, native_size: 104, calculated_instance_size: 104, calculated_native_size: 120, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10172)), TypeDefinitionIndex(TypeDefinitionIndex(10173))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10064))
// CS Name: ::UnityEngine::CombineInstance
struct CORDL_TYPE CombineInstance {
public:
  // Declarations
  __declspec(property(get = get_mesh, put = set_mesh))::UnityEngine::Mesh* mesh;

  __declspec(property(put = set_subMeshIndex)) int32_t subMeshIndex;

  __declspec(property(put = set_transform))::UnityEngine::Matrix4x4 transform;

  /// @brief Method get_mesh addr 0x2b5e258 size 0xc virtual false final false
  inline ::UnityEngine::Mesh* get_mesh();

  /// @brief Method set_mesh addr 0x2b5e264 size 0x88 virtual false final false
  inline void set_mesh(::UnityEngine::Mesh* value);

  /// @brief Method set_subMeshIndex addr 0x2b5e490 size 0x8 virtual false final false
  inline void set_subMeshIndex(int32_t value);

  /// @brief Method set_transform addr 0x2b5e498 size 0x1c virtual false final false
  inline void set_transform(::UnityEngine::Matrix4x4 value);

  // Ctor Parameters [CppParam { name: "m_MeshInstanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_SubMeshIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam
  // { name: "m_Transform", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "m_LightmapScaleOffset", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None },
  // CppParam { name: "m_RealtimeLightmapScaleOffset", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }]
  constexpr CombineInstance(int32_t m_MeshInstanceID, int32_t m_SubMeshIndex, ::UnityEngine::Matrix4x4 m_Transform, ::UnityEngine::Vector4 m_LightmapScaleOffset,
                            ::UnityEngine::Vector4 m_RealtimeLightmapScaleOffset) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr CombineInstance();

  /// @brief Field m_MeshInstanceID, offset: 0x0, size: 0x4, def value: None
  int32_t m_MeshInstanceID;

  /// @brief Field m_SubMeshIndex, offset: 0x4, size: 0x4, def value: None
  int32_t m_SubMeshIndex;

  /// @brief Field m_Transform, offset: 0x8, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 m_Transform;

  /// @brief Field m_LightmapScaleOffset, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Vector4 m_LightmapScaleOffset;

  /// @brief Field m_RealtimeLightmapScaleOffset, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Vector4 m_RealtimeLightmapScaleOffset;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CombineInstance, 0x68>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::CombineInstance, m_MeshInstanceID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::CombineInstance, m_SubMeshIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::CombineInstance, m_Transform) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::CombineInstance, m_LightmapScaleOffset) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::CombineInstance, m_RealtimeLightmapScaleOffset) == 0x58, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CombineInstance, "UnityEngine", "CombineInstance");
