#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CombineMeshes)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __CombineMeshes____c;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine::ProBuilder {
class Vertex;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::ProBuilder {
class SharedVertex;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class CombineMeshes;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __CombineMeshes____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::CombineMeshes);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::__CombineMeshes____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12248))
// CS Name: ::CombineMeshes::<>c*
class CORDL_TYPE __CombineMeshes____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::ProBuilder::MeshOperations::__CombineMeshes____c* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0))::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* __9__5_0;

  static inline void setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::__CombineMeshes____c* value);

  static inline ::UnityEngine::ProBuilder::MeshOperations::__CombineMeshes____c* getStaticF___9();

  static inline void setStaticF___9__5_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* value);

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* getStaticF___9__5_0();

  static inline ::UnityEngine::ProBuilder::MeshOperations::__CombineMeshes____c* New_ctor();

  /// @brief Method .ctor, addr 0x2ba43c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <SplitByMaxVertexCount>b__5_0, addr 0x2ba43c8, size 0x18, virtual false, abstract: false, final false
  inline int32_t _SplitByMaxVertexCount_b__5_0(::UnityEngine::ProBuilder::Face* x);

  // Ctor Parameters [CppParam { name: "", ty: "__CombineMeshes____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CombineMeshes____c(__CombineMeshes____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CombineMeshes____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CombineMeshes____c(__CombineMeshes____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CombineMeshes____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::__CombineMeshes____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Type: UnityEngine.ProBuilder.MeshOperations::CombineMeshes
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12249))
// CS Name: ::UnityEngine.ProBuilder.MeshOperations::CombineMeshes*
class CORDL_TYPE CombineMeshes : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::ProBuilder::MeshOperations::__CombineMeshes____c;

  /// @brief Method Combine, addr 0x2ba1374, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*
  Combine(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* meshes);

  /// @brief Method Combine, addr 0x2ba181c, size 0xbb8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*
  Combine(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* meshes, ::UnityEngine::ProBuilder::ProBuilderMesh* meshTarget);

  /// @brief Method CombineToNewMeshes, addr 0x2ba1378, size 0x4a4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*
  CombineToNewMeshes(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* meshes);

  /// @brief Method AccumulateMeshesInfo, addr 0x2ba23d4, size 0xd74, virtual false, abstract: false, final false
  /// @param targetTransform: ::UnityEngine::Transform* (default: nullptr)
  static inline void AccumulateMeshesInfo(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* meshes, int32_t offset,
                                          ByRef<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*> vertices,
                                          ByRef<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*> faces,
                                          ByRef<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*> autoUvFaces,
                                          ByRef<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SharedVertex*>*> sharedVertices,
                                          ByRef<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SharedVertex*>*> sharedTextures,
                                          ByRef<::System::Collections::Generic::List_1<::UnityEngine::Material*>*> materialMap, ::UnityEngine::Transform* targetTransform = nullptr);

  /// @brief Method CreateMeshFromSplit, addr 0x2ba3e50, size 0x50c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::ProBuilderMesh*
  CreateMeshFromSplit(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* faces,
                      ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* sharedVertexLookup, ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* sharedTextureLookup,
                      ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* remap, ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> materials);

  /// @brief Method SplitByMaxVertexCount, addr 0x2ba3148, size 0xd08, virtual false, abstract: false, final false
  /// @param maxVertexCount: uint32_t (default: static_cast<uint32_t>(0xffff00c0u))
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*
  SplitByMaxVertexCount(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* faces,
                        ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* sharedVertices,
                        ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* sharedTextures, uint32_t maxVertexCount = static_cast<uint32_t>(0xffff00c0u));

  // Ctor Parameters [CppParam { name: "", ty: "CombineMeshes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CombineMeshes(CombineMeshes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CombineMeshes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CombineMeshes(CombineMeshes const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CombineMeshes();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::CombineMeshes);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::CombineMeshes*, "UnityEngine.ProBuilder.MeshOperations", "CombineMeshes");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::__CombineMeshes____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::__CombineMeshes____c*, "UnityEngine.ProBuilder.MeshOperations", "CombineMeshes/<>c");
