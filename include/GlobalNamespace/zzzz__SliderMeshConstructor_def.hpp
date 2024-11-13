#pragma once
// IWYU pragma private; include "GlobalNamespace/SliderMeshConstructor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SliderMeshConstructor)
namespace GlobalNamespace {
class VertexPath;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderMeshConstructor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SliderMeshConstructor);
// Type: ::SliderMeshConstructor
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SliderMeshConstructor*
class CORDL_TYPE SliderMeshConstructor : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _mesh, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__mesh, put = __cordl_internal_set__mesh)) ::UnityW<::UnityEngine::Mesh> _mesh;

  /// @brief Field _meshFilter, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__meshFilter, put = __cordl_internal_set__meshFilter)) ::UnityW<::UnityEngine::MeshFilter> _meshFilter;

  __declspec(property(get = get_mesh)) ::UnityW<::UnityEngine::Mesh> mesh;

  /// @brief Field reusableNormals, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_reusableNormals, put = __cordl_internal_set_reusableNormals)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> reusableNormals;

  /// @brief Field reusableTriangles, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_reusableTriangles, put = __cordl_internal_set_reusableTriangles)) ::ArrayW<int32_t, ::Array<int32_t>*> reusableTriangles;

  /// @brief Field reusableUvs, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_reusableUvs, put = __cordl_internal_set_reusableUvs)) ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> reusableUvs;

  /// @brief Field reusableVerts, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_reusableVerts, put = __cordl_internal_set_reusableVerts)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> reusableVerts;

  /// @brief Method CreateMeshIfNonExisting, addr 0x3b15584, size 0xb4, virtual false, abstract: false, final false
  inline void CreateMeshIfNonExisting();

  /// @brief Method CreateSliderMesh, addr 0x3b15638, size 0x190, virtual false, abstract: false, final false
  inline void CreateSliderMesh(::GlobalNamespace::VertexPath* path);

  /// @brief Method CreateSliderMeshInternal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CreateSliderMeshInternal(::GlobalNamespace::VertexPath* path);

  /// @brief Method GetTrianglesCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetTrianglesCount(::GlobalNamespace::VertexPath* path);

  /// @brief Method GetVertexCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetVertexCount(::GlobalNamespace::VertexPath* path);

  static inline ::GlobalNamespace::SliderMeshConstructor* New_ctor();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__mesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__mesh();

  constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get__meshFilter() const;

  constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get__meshFilter();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_reusableNormals() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_reusableNormals();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_reusableTriangles() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_reusableTriangles();

  constexpr ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> const& __cordl_internal_get_reusableUvs() const;

  constexpr ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>& __cordl_internal_get_reusableUvs();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_reusableVerts() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_reusableVerts();

  constexpr void __cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set__meshFilter(::UnityW<::UnityEngine::MeshFilter> value);

  constexpr void __cordl_internal_set_reusableNormals(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_reusableTriangles(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_reusableUvs(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  constexpr void __cordl_internal_set_reusableVerts(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  /// @brief Method .ctor, addr 0x3b157c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_mesh, addr 0x3b1557c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_mesh();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SliderMeshConstructor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SliderMeshConstructor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SliderMeshConstructor(SliderMeshConstructor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SliderMeshConstructor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SliderMeshConstructor(SliderMeshConstructor const&) = delete;

  /// @brief Field _meshFilter, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshFilter> ____meshFilter;

  /// @brief Field reusableVerts, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___reusableVerts;

  /// @brief Field reusableUvs, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> ___reusableUvs;

  /// @brief Field reusableNormals, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___reusableNormals;

  /// @brief Field reusableTriangles, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___reusableTriangles;

  /// @brief Field _mesh, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ____mesh;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4161 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderMeshConstructor, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMeshConstructor, ____meshFilter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMeshConstructor, ___reusableVerts) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMeshConstructor, ___reusableUvs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMeshConstructor, ___reusableNormals) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMeshConstructor, ___reusableTriangles) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMeshConstructor, ____mesh) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SliderMeshConstructor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderMeshConstructor*, "", "SliderMeshConstructor");
