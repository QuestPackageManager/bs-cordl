#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/MeshOperations/AppendElements.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AppendElements)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class AppendElements___c;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class AppendElements___c__DisplayClass17_0;
}
namespace UnityEngine::ProBuilder {
class ActionResult;
}
namespace UnityEngine::ProBuilder {
struct EdgeLookup;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine::ProBuilder {
class FaceRebuildData;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
class PolyShape;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
class Vertex;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class AppendElements;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class AppendElements___c;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class AppendElements___c__DisplayClass17_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::AppendElements);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::AppendElements___c);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::AppendElements___c__DisplayClass17_0);
// Dependencies System.Object
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.AppendElements/<>c
class CORDL_TYPE AppendElements___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::ProBuilder::MeshOperations::AppendElements___c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_0, put = setStaticF___9__10_0)) ::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>* __9__10_0;

  /// @brief Field <>9__10_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_1, put = setStaticF___9__10_1)) ::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>* __9__10_1;

  /// @brief Field <>9__18_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__18_0, put = setStaticF___9__18_0)) ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* __9__18_0;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_0, put = setStaticF___9__8_0)) ::System::Func_2<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, int32_t>* __9__8_0;

  static inline ::UnityEngine::ProBuilder::MeshOperations::AppendElements___c* New_ctor();

  /// @brief Method <CreateShapeFromPolygon>b__8_0, addr 0x6560714, size 0x14, virtual false, abstract: false, final false
  inline int32_t _CreateShapeFromPolygon_b__8_0(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> arr);

  /// @brief Method <FaceWithVerticesAndHole>b__10_0, addr 0x6560728, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 _FaceWithVerticesAndHole_b__10_0(::UnityEngine::ProBuilder::Vertex* v);

  /// @brief Method <FaceWithVerticesAndHole>b__10_1, addr 0x6560740, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 _FaceWithVerticesAndHole_b__10_1(::UnityEngine::ProBuilder::Vertex* v);

  /// @brief Method <InsertVertexInFace>b__18_0, addr 0x6560758, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Face* _InsertVertexInFace_b__18_0(::UnityEngine::ProBuilder::FaceRebuildData* f);

  /// @brief Method .ctor, addr 0x6560710, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::ProBuilder::MeshOperations::AppendElements___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>* getStaticF___9__10_0();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>* getStaticF___9__10_1();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* getStaticF___9__18_0();

  static inline ::System::Func_2<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, int32_t>* getStaticF___9__8_0();

  static inline void setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::AppendElements___c* value);

  static inline void setStaticF___9__10_0(::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>* value);

  static inline void setStaticF___9__10_1(::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>* value);

  static inline void setStaticF___9__18_0(::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* value);

  static inline void setStaticF___9__8_0(::System::Func_2<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppendElements___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AppendElements___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppendElements___c(AppendElements___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppendElements___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppendElements___c(AppendElements___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16819 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::AppendElements___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Dependencies System.Object
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.AppendElements/<>c__DisplayClass17_0
class CORDL_TYPE AppendElements___c__DisplayClass17_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field delCount, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_delCount, put = __cordl_internal_set_delCount)) int32_t delCount;

  static inline ::UnityEngine::ProBuilder::MeshOperations::AppendElements___c__DisplayClass17_0* New_ctor();

  /// @brief Method <AppendVerticesToEdge>b__0, addr 0x656076c, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Edge _AppendVerticesToEdge_b__0(::UnityEngine::ProBuilder::EdgeLookup x);

  constexpr int32_t const& __cordl_internal_get_delCount() const;

  constexpr int32_t& __cordl_internal_get_delCount();

  constexpr void __cordl_internal_set_delCount(int32_t value);

  /// @brief Method .ctor, addr 0x655da8c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppendElements___c__DisplayClass17_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AppendElements___c__DisplayClass17_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppendElements___c__DisplayClass17_0(AppendElements___c__DisplayClass17_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppendElements___c__DisplayClass17_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppendElements___c__DisplayClass17_0(AppendElements___c__DisplayClass17_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16820 };

  /// @brief Field delCount, offset: 0x10, size: 0x4, def value: None
  int32_t ___delCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::AppendElements___c__DisplayClass17_0, ___delCount) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::AppendElements___c__DisplayClass17_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Dependencies System.Object
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.AppendElements
class CORDL_TYPE AppendElements : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::ProBuilder::MeshOperations::AppendElements___c;

  using __c__DisplayClass17_0 = ::UnityEngine::ProBuilder::MeshOperations::AppendElements___c__DisplayClass17_0;

  /// @brief Method AppendFace, addr 0x6556134, size 0x8b0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Face* AppendFace(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions,
                                                            ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors,
                                                            ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uv0s,
                                                            ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> uv2s,
                                                            ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> uv3s, ::UnityEngine::ProBuilder::Face* face,
                                                            ::ArrayW<int32_t, ::Array<int32_t>*> common);

  /// @brief Method AppendFaces, addr 0x65569e4, size 0x65c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>
  AppendFaces(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
              ::ArrayW<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, ::Array<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>*> positions,
              ::ArrayW<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>, ::Array<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>*> colors,
              ::ArrayW<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>, ::Array<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>>*> uvs,
              ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> faces,
              ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> shared);

  /// @brief Method AppendVerticesToEdge, addr 0x655bd98, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* AppendVerticesToEdge(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge,
                                                                                                              int32_t count);

  /// @brief Method AppendVerticesToEdge, addr 0x655be1c, size 0x1c70, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*
  AppendVerticesToEdge(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>* edges, int32_t count);

  /// @brief Method AppendVerticesToFace, addr 0x655b0c0, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Face* AppendVerticesToFace(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face,
                                                                      ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> points);

  /// @brief Method AppendVerticesToFace, addr 0x655b0c8, size 0xc54, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Face* AppendVerticesToFace(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face,
                                                                      ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> points, bool insertOnEdge);

  /// @brief Method Bridge, addr 0x6559a30, size 0x13c0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Face* Bridge(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge a, ::UnityEngine::ProBuilder::Edge b,
                                                        bool allowNonManifoldGeometry);

  /// @brief Method ClearAndRefreshMesh, addr 0x65583ac, size 0x3c, virtual false, abstract: false, final false
  static inline void ClearAndRefreshMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh);

  /// @brief Method CreatePolygon, addr 0x6557040, size 0x518, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Face* CreatePolygon(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<int32_t>* indexes, bool unordered);

  /// @brief Method CreatePolygonWithHole, addr 0x6557620, size 0x8e8, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Face* CreatePolygonWithHole(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<int32_t>* indexes,
                                                                       ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<int32_t>*>* holes);

  /// @brief Method CreateShapeFromPolygon, addr 0x65583a4, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::ActionResult* CreateShapeFromPolygon(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points, float_t extrude, bool flipNormals);

  /// @brief Method CreateShapeFromPolygon, addr 0x6558f8c, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::ActionResult* CreateShapeFromPolygon(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points, float_t extrude, bool flipNormals,
                                                                                ::UnityEngine::Vector3 cameraLookAt,
                                                                                ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>* holePoints);

  /// @brief Method CreateShapeFromPolygon, addr 0x65583e8, size 0xba4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::ActionResult* CreateShapeFromPolygon(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points, float_t extrude, bool flipNormals,
                                                                                ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>* holePoints);

  /// @brief Method CreateShapeFromPolygon, addr 0x6558374, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::ActionResult* CreateShapeFromPolygon(::UnityEngine::ProBuilder::PolyShape* poly);

  /// @brief Method DuplicateAndFlip, addr 0x6558f94, size 0x6f4, virtual false, abstract: false, final false
  static inline void DuplicateAndFlip(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> faces);

  /// @brief Method FaceWithVertices, addr 0x6557558, size 0xc8, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::FaceRebuildData* FaceWithVertices(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices, bool unordered);

  /// @brief Method FaceWithVerticesAndHole, addr 0x6557f08, size 0x46c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::FaceRebuildData*
  FaceWithVerticesAndHole(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* borderVertices,
                          ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>* holes);

  /// @brief Method InsertVertexInFace, addr 0x655e078, size 0xe74, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> InsertVertexInFace(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                                          ::UnityEngine::ProBuilder::Face* face, ::UnityEngine::Vector3 point);

  /// @brief Method InsertVertexInMesh, addr 0x65602ac, size 0x410, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Vertex* InsertVertexInMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 point, ::UnityEngine::Vector3 normal);

  /// @brief Method InsertVertexOnEdge, addr 0x655eeec, size 0x13c0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Vertex* InsertVertexOnEdge(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge originalEdge, ::UnityEngine::Vector3 point);

  /// @brief Method TentCapWithVertices, addr 0x6559688, size 0x3a8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::FaceRebuildData*>*
  TentCapWithVertices(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* path);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppendElements();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AppendElements", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppendElements(AppendElements&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppendElements", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppendElements(AppendElements const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16821 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::AppendElements, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::AppendElements);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::AppendElements*, "UnityEngine.ProBuilder.MeshOperations", "AppendElements");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::AppendElements___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::AppendElements___c*, "UnityEngine.ProBuilder.MeshOperations", "AppendElements/<>c");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::AppendElements___c__DisplayClass17_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::AppendElements___c__DisplayClass17_0*, "UnityEngine.ProBuilder.MeshOperations", "AppendElements/<>c__DisplayClass17_0");
