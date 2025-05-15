#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/MeshOperations/ExtrudeElements.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ExtrudeElements)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class ExtrudeElements___c;
}
namespace UnityEngine::ProBuilder {
struct EdgeLookup;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine::ProBuilder {
struct ExtrudeMethod;
}
namespace UnityEngine::ProBuilder {
class FaceRebuildData;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
class WingedEdge;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class ExtrudeElements;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class ExtrudeElements___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c);
// Dependencies System.Object
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.ExtrudeElements/<>c
class CORDL_TYPE ExtrudeElements___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0)) ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* __9__3_0;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_0, put = setStaticF___9__4_0)) ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* __9__4_0;

  static inline ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c* New_ctor();

  /// @brief Method <DetachFaces>b__3_0, addr 0x47792f0, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Face* _DetachFaces_b__3_0(::UnityEngine::ProBuilder::FaceRebuildData* x);

  /// @brief Method <ExtrudePerFace>b__4_0, addr 0x4779308, size 0x5c, virtual false, abstract: false, final false
  inline int32_t _ExtrudePerFace_b__4_0(::UnityEngine::ProBuilder::Face* x);

  /// @brief Method .ctor, addr 0x47792e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* getStaticF___9__3_0();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* getStaticF___9__4_0();

  static inline void setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c* value);

  static inline void setStaticF___9__3_0(::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* value);

  static inline void setStaticF___9__4_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExtrudeElements___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExtrudeElements___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExtrudeElements___c(ExtrudeElements___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExtrudeElements___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExtrudeElements___c(ExtrudeElements___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14381 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Dependencies System.Object
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.ExtrudeElements
class CORDL_TYPE ExtrudeElements : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c;

  /// @brief Method DetachFaces, addr 0x4777ff0, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* DetachFaces(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                      ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces);

  /// @brief Method DetachFaces, addr 0x4777ff8, size 0xabc, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*
  DetachFaces(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, bool deleteSourceFaces);

  /// @brief Method Extrude, addr 0x4776d80, size 0x10dc, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> Extrude(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                             ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges,
                                                                                                             float_t distance, bool extrudeAsGroup, bool enableManifoldExtrude);

  /// @brief Method Extrude, addr 0x47746d4, size 0x14, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> Extrude(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                               ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces,
                                                                                                               ::UnityEngine::ProBuilder::ExtrudeMethod method, float_t distance);

  /// @brief Method ExtrudeAsGroups, addr 0x4775258, size 0x1b28, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>
  ExtrudeAsGroups(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, bool compensateAngleVertexDistance,
                  float_t distance);

  /// @brief Method ExtrudePerFace, addr 0x47746e8, size 0xb70, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>
  ExtrudePerFace(::UnityEngine::ProBuilder::ProBuilderMesh* pb, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, float_t distance);

  /// @brief Method GetFaceGroups, addr 0x4778ab4, size 0x448, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>*
  GetFaceGroups(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* wings);

  /// @brief Method GetPerimeterEdges, addr 0x4778efc, size 0x390, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Face*>*
  GetPerimeterEdges(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* faces, ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* lookup);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExtrudeElements();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExtrudeElements", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExtrudeElements(ExtrudeElements&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExtrudeElements", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExtrudeElements(ExtrudeElements const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14382 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements*, "UnityEngine.ProBuilder.MeshOperations", "ExtrudeElements");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c*, "UnityEngine.ProBuilder.MeshOperations", "ExtrudeElements/<>c");
