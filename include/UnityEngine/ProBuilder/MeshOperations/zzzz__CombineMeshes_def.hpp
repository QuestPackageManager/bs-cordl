#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/MeshOperations/CombineMeshes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CombineMeshes)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
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
class CombineMeshes___c;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
class SharedVertex;
}
namespace UnityEngine::ProBuilder {
class Vertex;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class CombineMeshes;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class CombineMeshes___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::CombineMeshes);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c);
// Dependencies System.Object
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.CombineMeshes/<>c
class CORDL_TYPE CombineMeshes___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0)) ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* __9__5_0;

  static inline ::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c* New_ctor();

  /// @brief Method <SplitByMaxVertexCount>b__5_0, addr 0x64ff664, size 0x14, virtual false, abstract: false, final false
  inline int32_t _SplitByMaxVertexCount_b__5_0(::UnityEngine::ProBuilder::Face* x);

  /// @brief Method .ctor, addr 0x64ff660, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* getStaticF___9__5_0();

  static inline void setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c* value);

  static inline void setStaticF___9__5_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CombineMeshes___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CombineMeshes___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CombineMeshes___c(CombineMeshes___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CombineMeshes___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CombineMeshes___c(CombineMeshes___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16813 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Dependencies System.Object
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.CombineMeshes
class CORDL_TYPE CombineMeshes : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c;

  /// @brief Method AccumulateMeshesInfo, addr 0x64fd704, size 0xcd4, virtual false, abstract: false, final false
  static inline void AccumulateMeshesInfo(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* meshes, int32_t offset,
                                          ::ByRef<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*> vertices,
                                          ::ByRef<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*> faces,
                                          ::ByRef<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*> autoUvFaces,
                                          ::ByRef<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SharedVertex*>*> sharedVertices,
                                          ::ByRef<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SharedVertex*>*> sharedTextures,
                                          ::ByRef<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*> materialMap, ::UnityEngine::Transform* targetTransform);

  /// @brief Method Combine, addr 0x64fc728, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*
  Combine(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* meshes);

  /// @brief Method Combine, addr 0x64fcba0, size 0xb64, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*
  Combine(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* meshes, ::UnityEngine::ProBuilder::ProBuilderMesh* meshTarget);

  /// @brief Method CombineToNewMeshes, addr 0x64fc72c, size 0x474, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*
  CombineToNewMeshes(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* meshes);

  /// @brief Method CreateMeshFromSplit, addr 0x64ff138, size 0x4d4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>
  CreateMeshFromSplit(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* faces,
                      ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* sharedVertexLookup, ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* sharedTextureLookup,
                      ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* remap, ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> materials);

  /// @brief Method SplitByMaxVertexCount, addr 0x64fe3d8, size 0xd60, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*
  SplitByMaxVertexCount(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* faces,
                        ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* sharedVertices,
                        ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* sharedTextures, uint32_t maxVertexCount);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CombineMeshes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CombineMeshes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CombineMeshes(CombineMeshes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CombineMeshes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CombineMeshes(CombineMeshes const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16814 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::CombineMeshes);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::CombineMeshes*, "UnityEngine.ProBuilder.MeshOperations", "CombineMeshes");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c*, "UnityEngine.ProBuilder.MeshOperations", "CombineMeshes/<>c");
