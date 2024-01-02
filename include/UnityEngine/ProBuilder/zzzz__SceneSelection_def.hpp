#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SceneSelection)
namespace UnityEngine {
class GameObject;
}
namespace System {
class Object;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class SceneSelection;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::SceneSelection);
// Type: UnityEngine.ProBuilder::SceneSelection
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(12117))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12191))
// CS Name: ::UnityEngine.ProBuilder::SceneSelection*
class CORDL_TYPE SceneSelection : public ::System::Object {
public:
  // Declarations
  /// @brief Field gameObject, offset 0x10, size 0x8
  __declspec(property(get = __get_gameObject, put = __set_gameObject))::UnityEngine::GameObject* gameObject;

  /// @brief Field mesh, offset 0x18, size 0x8
  __declspec(property(get = __get_mesh, put = __set_mesh))::UnityEngine::ProBuilder::ProBuilderMesh* mesh;

  /// @brief Field m_Vertices, offset 0x20, size 0x8
  __declspec(property(get = __get_m_Vertices, put = __set_m_Vertices))::System::Collections::Generic::List_1<int32_t>* m_Vertices;

  /// @brief Field m_Edges, offset 0x28, size 0x8
  __declspec(property(get = __get_m_Edges, put = __set_m_Edges))::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* m_Edges;

  /// @brief Field m_Faces, offset 0x30, size 0x8
  __declspec(property(get = __get_m_Faces, put = __set_m_Faces))::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* m_Faces;

  /// @brief Field vertex, offset 0x38, size 0x4
  __declspec(property(get = __get_vertex, put = __set_vertex)) int32_t vertex;

  /// @brief Field edge, offset 0x3c, size 0x8
  __declspec(property(get = __get_edge, put = __set_edge))::UnityEngine::ProBuilder::Edge edge;

  /// @brief Field face, offset 0x48, size 0x8
  __declspec(property(get = __get_face, put = __set_face))::UnityEngine::ProBuilder::Face* face;

  __declspec(property(get = get_vertexes, put = set_vertexes))::System::Collections::Generic::List_1<int32_t>* vertexes;

  __declspec(property(get = get_edges, put = set_edges))::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* edges;

  __declspec(property(get = get_faces, put = set_faces))::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* faces;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ProBuilder::SceneSelection*>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::ProBuilder::SceneSelection*>*() noexcept;

  constexpr ::UnityEngine::GameObject*& __get_gameObject();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_gameObject() const;

  constexpr void __set_gameObject(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::ProBuilder::ProBuilderMesh*& __get_mesh();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::ProBuilderMesh*> const& __get_mesh() const;

  constexpr void __set_mesh(::UnityEngine::ProBuilder::ProBuilderMesh* value);

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __get_m_Vertices();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __get_m_Vertices() const;

  constexpr void __set_m_Vertices(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*& __get_m_Edges();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*> const& __get_m_Edges() const;

  constexpr void __set_m_Edges(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*& __get_m_Faces();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*> const& __get_m_Faces() const;

  constexpr void __set_m_Faces(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* value);

  constexpr int32_t& __get_vertex();

  constexpr int32_t const& __get_vertex() const;

  constexpr void __set_vertex(int32_t value);

  constexpr ::UnityEngine::ProBuilder::Edge& __get_edge();

  constexpr ::UnityEngine::ProBuilder::Edge const& __get_edge() const;

  constexpr void __set_edge(::UnityEngine::ProBuilder::Edge value);

  constexpr ::UnityEngine::ProBuilder::Face*& __get_face();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Face*> const& __get_face() const;

  constexpr void __set_face(::UnityEngine::ProBuilder::Face* value);

  /// @brief Method get_vertexes, addr 0x2b69f1c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<int32_t>* get_vertexes();

  /// @brief Method set_vertexes, addr 0x2b69f24, size 0x8, virtual false, abstract: false, final false
  inline void set_vertexes(::System::Collections::Generic::List_1<int32_t>* value);

  /// @brief Method get_edges, addr 0x2b69f2c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* get_edges();

  /// @brief Method set_edges, addr 0x2b69f34, size 0x8, virtual false, abstract: false, final false
  inline void set_edges(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* value);

  /// @brief Method get_faces, addr 0x2b69f3c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* get_faces();

  /// @brief Method set_faces, addr 0x2b69f44, size 0x8, virtual false, abstract: false, final false
  inline void set_faces(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* value);

  static inline ::UnityEngine::ProBuilder::SceneSelection* New_ctor(::UnityEngine::GameObject* gameObject);

  /// @brief Method .ctor, addr 0x2b69f4c, size 0x118, virtual false, abstract: false, final false
  /// @param gameObject: ::UnityEngine::GameObject* (default: nullptr)
  inline void _ctor(::UnityEngine::GameObject* gameObject = nullptr);

  static inline ::UnityEngine::ProBuilder::SceneSelection* New_ctor(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, int32_t vertex);

  /// @brief Method .ctor, addr 0x2b6a064, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, int32_t vertex);

  static inline ::UnityEngine::ProBuilder::SceneSelection* New_ctor(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge);

  /// @brief Method .ctor, addr 0x2b6a280, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge);

  static inline ::UnityEngine::ProBuilder::SceneSelection* New_ctor(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face);

  /// @brief Method .ctor, addr 0x2b6a49c, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face);

  static inline ::UnityEngine::ProBuilder::SceneSelection* New_ctor(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::List_1<int32_t>* vertexes);

  /// @brief Method .ctor, addr 0x2b6a15c, size 0x124, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::List_1<int32_t>* vertexes);

  static inline ::UnityEngine::ProBuilder::SceneSelection* New_ctor(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* edges);

  /// @brief Method .ctor, addr 0x2b6a378, size 0x124, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* edges);

  static inline ::UnityEngine::ProBuilder::SceneSelection* New_ctor(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* faces);

  /// @brief Method .ctor, addr 0x2b6a594, size 0x124, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* faces);

  /// @brief Method SetSingleFace, addr 0x2b6a6b8, size 0xe0, virtual false, abstract: false, final false
  inline void SetSingleFace(::UnityEngine::ProBuilder::Face* face);

  /// @brief Method SetSingleVertex, addr 0x2b6a798, size 0xa8, virtual false, abstract: false, final false
  inline void SetSingleVertex(int32_t vertex);

  /// @brief Method SetSingleEdge, addr 0x2b6a840, size 0xa8, virtual false, abstract: false, final false
  inline void SetSingleEdge(::UnityEngine::ProBuilder::Edge edge);

  /// @brief Method Clear, addr 0x2b6a8e8, size 0xac, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method CopyTo, addr 0x2b6a994, size 0x540, virtual false, abstract: false, final false
  inline void CopyTo(::UnityEngine::ProBuilder::SceneSelection* dst);

  /// @brief Method ToString, addr 0x2b6aed4, size 0x260, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method Equals, addr 0x2b6b134, size 0xec, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::ProBuilder::SceneSelection* other);

  /// @brief Method Equals, addr 0x2b6b220, size 0x10c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2b6b32c, size 0x158, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method op_Equality, addr 0x2b6b484, size 0x8, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::ProBuilder::SceneSelection* left, ::UnityEngine::ProBuilder::SceneSelection* right);

  /// @brief Method op_Inequality, addr 0x2b6b48c, size 0x1c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::ProBuilder::SceneSelection* left, ::UnityEngine::ProBuilder::SceneSelection* right);

  // Ctor Parameters [CppParam { name: "", ty: "SceneSelection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneSelection(SceneSelection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneSelection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneSelection(SceneSelection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneSelection();

public:
  /// @brief Field gameObject, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___gameObject;

  /// @brief Field mesh, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::ProBuilderMesh* ___mesh;

  /// @brief Field m_Vertices, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___m_Vertices;

  /// @brief Field m_Edges, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* ___m_Edges;

  /// @brief Field m_Faces, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* ___m_Faces;

  /// @brief Field vertex, offset: 0x38, size: 0x4, def value: None
  int32_t ___vertex;

  /// @brief Field edge, offset: 0x3c, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Edge ___edge;

  /// @brief Field face, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Face* ___face;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::SceneSelection, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::SceneSelection, ___gameObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::SceneSelection, ___mesh) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::SceneSelection, ___m_Vertices) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::SceneSelection, ___m_Edges) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::SceneSelection, ___m_Faces) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::SceneSelection, ___vertex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::SceneSelection, ___edge) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::SceneSelection, ___face) == 0x48, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::SceneSelection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::SceneSelection*, "UnityEngine.ProBuilder", "SceneSelection");
