#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/MeshHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MeshHandle)
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class MeshHandle;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshHandle);
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshHandle
class CORDL_TYPE MeshHandle : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Mesh, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Mesh, put = __cordl_internal_set_m_Mesh)) ::UnityW<::UnityEngine::Mesh> m_Mesh;

  /// @brief Field m_Transform, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Transform, put = __cordl_internal_set_m_Transform)) ::UnityW<::UnityEngine::Transform> m_Transform;

  __declspec(property(get = get_mesh)) ::UnityW<::UnityEngine::Mesh> mesh;

  /// @brief Method DrawMeshNow, addr 0x4718f58, size 0x118, virtual false, abstract: false, final false
  inline void DrawMeshNow(int32_t submeshIndex);

  static inline ::UnityEngine::ProBuilder::MeshHandle* New_ctor(::UnityEngine::Transform* transform, ::UnityEngine::Mesh* mesh);

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_Mesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_Mesh();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_Transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_Transform();

  constexpr void __cordl_internal_set_m_Mesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_m_Transform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x4718f2c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Transform* transform, ::UnityEngine::Mesh* mesh);

  /// @brief Method get_mesh, addr 0x4718f24, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_mesh();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshHandle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MeshHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshHandle(MeshHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshHandle(MeshHandle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14257 };

  /// @brief Field m_Transform, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___m_Transform;

  /// @brief Field m_Mesh, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___m_Mesh;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::MeshHandle, ___m_Transform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshHandle, ___m_Mesh) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshHandle, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshHandle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshHandle*, "UnityEngine.ProBuilder", "MeshHandle");
