#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/MeshGizmo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshGizmo)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering {
struct CompareFunction;
}
namespace UnityEngine::Rendering {
struct MeshGizmo___c__DisplayClass10_0;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct MeshTopology;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class MeshGizmo;
}
namespace UnityEngine::Rendering {
struct MeshGizmo___c__DisplayClass10_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::MeshGizmo);
MARK_VAL_T(::UnityEngine::Rendering::MeshGizmo___c__DisplayClass10_0);
// Dependencies UnityEngine.Color
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.MeshGizmo/<>c__DisplayClass10_0
struct CORDL_TYPE MeshGizmo___c__DisplayClass10_0 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshGizmo___c__DisplayClass10_0();

  // Ctor Parameters [CppParam { name: "__4__this", ty: "::UnityEngine::Rendering::MeshGizmo*", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "",
  // def_value: None }]
  constexpr MeshGizmo___c__DisplayClass10_0(::UnityEngine::Rendering::MeshGizmo* __4__this, ::UnityEngine::Color color) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12282 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field <>4__this, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::MeshGizmo* __4__this;

  /// @brief Field color, offset: 0x8, size: 0x10, def value: None
  ::UnityEngine::Color color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::MeshGizmo___c__DisplayClass10_0, __4__this) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::MeshGizmo___c__DisplayClass10_0, color) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::MeshGizmo___c__DisplayClass10_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.MeshGizmo
class CORDL_TYPE MeshGizmo : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass10_0 = ::UnityEngine::Rendering::MeshGizmo___c__DisplayClass10_0;

  /// @brief Field colors, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_colors, put = __cordl_internal_set_colors)) ::System::Collections::Generic::List_1<::UnityEngine::Color>* colors;

  /// @brief Field dottedWireMaterial, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_dottedWireMaterial, put = __cordl_internal_set_dottedWireMaterial)) ::UnityW<::UnityEngine::Material> dottedWireMaterial;

  /// @brief Field indices, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_indices, put = __cordl_internal_set_indices)) ::System::Collections::Generic::List_1<int32_t>* indices;

  /// @brief Field mesh, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mesh, put = __cordl_internal_set_mesh)) ::UnityW<::UnityEngine::Mesh> mesh;

  /// @brief Field solidMaterial, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_solidMaterial, put = __cordl_internal_set_solidMaterial)) ::UnityW<::UnityEngine::Material> solidMaterial;

  /// @brief Field vertexCountPerCube, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_vertexCountPerCube, put = setStaticF_vertexCountPerCube)) int32_t vertexCountPerCube;

  /// @brief Field vertices, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_vertices, put = __cordl_internal_set_vertices)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* vertices;

  /// @brief Field wireMaterial, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_wireMaterial, put = __cordl_internal_set_wireMaterial)) ::UnityW<::UnityEngine::Material> wireMaterial;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AddWireCube, addr 0x65a8c60, size 0x220, virtual false, abstract: false, final false
  inline void AddWireCube(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 size, ::UnityEngine::Color color);

  /// @brief Method Clear, addr 0x65a8bb8, size 0xa8, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Dispose, addr 0x65a939c, size 0x60, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method DrawMesh, addr 0x65a91a4, size 0x1bc, virtual false, abstract: false, final false
  inline void DrawMesh(::UnityEngine::Matrix4x4 trs, ::UnityEngine::Material* mat, ::UnityEngine::MeshTopology topology, ::UnityEngine::Rendering::CompareFunction depthTest, ::StringW gizmoName);

  static inline ::UnityEngine::Rendering::MeshGizmo* New_ctor(int32_t capacity);

  /// @brief Method RenderWireframe, addr 0x65a9360, size 0x3c, virtual false, abstract: false, final false
  inline void RenderWireframe(::UnityEngine::Matrix4x4 trs, ::UnityEngine::Rendering::CompareFunction depthTest, ::StringW gizmoName);

  /// @brief Method <AddWireCube>g__AddEdge|10_0, addr 0x65a8e80, size 0x324, virtual false, abstract: false, final false
  inline void _AddWireCube_g__AddEdge_10_0(::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, ::ByRef<::UnityEngine::Rendering::MeshGizmo___c__DisplayClass10_0> _cordl_fixed_empty_name_whitespace);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>* const& __cordl_internal_get_colors() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>*& __cordl_internal_get_colors();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_dottedWireMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_dottedWireMaterial();

  constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_indices() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_indices();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_mesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_mesh();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_solidMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_solidMaterial();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_vertices() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_vertices();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_wireMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_wireMaterial();

  constexpr void __cordl_internal_set_colors(::System::Collections::Generic::List_1<::UnityEngine::Color>* value);

  constexpr void __cordl_internal_set_dottedWireMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_indices(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_mesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_solidMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_vertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value);

  constexpr void __cordl_internal_set_wireMaterial(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x65a8a44, size 0x174, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

  static inline int32_t getStaticF_vertexCountPerCube();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_vertexCountPerCube(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshGizmo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MeshGizmo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshGizmo(MeshGizmo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshGizmo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshGizmo(MeshGizmo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12283 };

  /// @brief Field mesh, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___mesh;

  /// @brief Field vertices, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* ___vertices;

  /// @brief Field indices, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___indices;

  /// @brief Field colors, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Color>* ___colors;

  /// @brief Field wireMaterial, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___wireMaterial;

  /// @brief Field dottedWireMaterial, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___dottedWireMaterial;

  /// @brief Field solidMaterial, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___solidMaterial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::MeshGizmo, ___mesh) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::MeshGizmo, ___vertices) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::MeshGizmo, ___indices) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::MeshGizmo, ___colors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::MeshGizmo, ___wireMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::MeshGizmo, ___dottedWireMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::MeshGizmo, ___solidMaterial) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::MeshGizmo, 0x48>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::MeshGizmo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::MeshGizmo*, "UnityEngine.Rendering", "MeshGizmo");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::MeshGizmo___c__DisplayClass10_0, "UnityEngine.Rendering", "MeshGizmo/<>c__DisplayClass10_0");
