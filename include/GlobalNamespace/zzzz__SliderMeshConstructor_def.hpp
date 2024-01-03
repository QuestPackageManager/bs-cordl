#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SliderMeshConstructor)
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class VertexPath;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderMeshConstructor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SliderMeshConstructor);
// Type: ::SliderMeshConstructor
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4821))
// CS Name: ::SliderMeshConstructor*
class CORDL_TYPE SliderMeshConstructor : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _meshFilter, offset 0x18, size 0x8
  __declspec(property(get = __get__meshFilter, put = __set__meshFilter))::UnityEngine::MeshFilter* _meshFilter;

  /// @brief Field reusableVerts, offset 0x20, size 0x8
  __declspec(property(get = __get_reusableVerts, put = __set_reusableVerts))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> reusableVerts;

  /// @brief Field reusableUvs, offset 0x28, size 0x8
  __declspec(property(get = __get_reusableUvs, put = __set_reusableUvs))::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> reusableUvs;

  /// @brief Field reusableNormals, offset 0x30, size 0x8
  __declspec(property(get = __get_reusableNormals, put = __set_reusableNormals))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> reusableNormals;

  /// @brief Field reusableTriangles, offset 0x38, size 0x8
  __declspec(property(get = __get_reusableTriangles, put = __set_reusableTriangles))::ArrayW<int32_t, ::Array<int32_t>*> reusableTriangles;

  /// @brief Field _mesh, offset 0x40, size 0x8
  __declspec(property(get = __get__mesh, put = __set__mesh))::UnityEngine::Mesh* _mesh;

  __declspec(property(get = get_mesh))::UnityEngine::Mesh* mesh;

  constexpr ::UnityEngine::MeshFilter*& __get__meshFilter();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshFilter*> const& __get__meshFilter() const;

  constexpr void __set__meshFilter(::UnityEngine::MeshFilter* value);

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __get_reusableVerts();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __get_reusableVerts() const;

  constexpr void __set_reusableVerts(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>& __get_reusableUvs();

  constexpr ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> const& __get_reusableUvs() const;

  constexpr void __set_reusableUvs(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __get_reusableNormals();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __get_reusableNormals() const;

  constexpr void __set_reusableNormals(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_reusableTriangles();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_reusableTriangles() const;

  constexpr void __set_reusableTriangles(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::UnityEngine::Mesh*& __get__mesh();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> const& __get__mesh() const;

  constexpr void __set__mesh(::UnityEngine::Mesh* value);

  /// @brief Method get_mesh, addr 0x23944f8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Mesh* get_mesh();

  /// @brief Method CreateMeshIfNonExisting, addr 0x2394500, size 0xb8, virtual false, abstract: false, final false
  inline void CreateMeshIfNonExisting();

  /// @brief Method CreateSliderMesh, addr 0x23945b8, size 0x190, virtual false, abstract: false, final false
  inline void CreateSliderMesh(::GlobalNamespace::VertexPath* path);

  /// @brief Method CreateSliderMeshInternal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CreateSliderMeshInternal(::GlobalNamespace::VertexPath* path);

  /// @brief Method GetVertexCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetVertexCount(::GlobalNamespace::VertexPath* path);

  /// @brief Method GetTrianglesCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetTrianglesCount(::GlobalNamespace::VertexPath* path);

  static inline ::GlobalNamespace::SliderMeshConstructor* New_ctor();

  /// @brief Method .ctor, addr 0x2394748, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SliderMeshConstructor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SliderMeshConstructor(SliderMeshConstructor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SliderMeshConstructor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SliderMeshConstructor(SliderMeshConstructor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SliderMeshConstructor();

public:
  /// @brief Field _meshFilter, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::MeshFilter* ____meshFilter;

  /// @brief Field reusableVerts, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___reusableVerts;

  /// @brief Field reusableUvs, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> ___reusableUvs;

  /// @brief Field reusableNormals, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___reusableNormals;

  /// @brief Field reusableTriangles, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___reusableTriangles;

  /// @brief Field _mesh, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Mesh* ____mesh;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderMeshConstructor, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMeshConstructor, ____meshFilter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMeshConstructor, ___reusableVerts) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMeshConstructor, ___reusableUvs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMeshConstructor, ___reusableNormals) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMeshConstructor, ___reusableTriangles) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMeshConstructor, ____mesh) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SliderMeshConstructor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderMeshConstructor*, "", "SliderMeshConstructor");
