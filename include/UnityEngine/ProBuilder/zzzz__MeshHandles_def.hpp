#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MeshHandles)
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
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
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
class __MeshHandles____c;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class MeshHandles;
}
namespace UnityEngine::ProBuilder {
class __MeshHandles____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshHandles);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::__MeshHandles____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: ::MeshHandles::<>c*
class CORDL_TYPE __MeshHandles____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::ProBuilder::__MeshHandles____c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__10_0,
                             put = setStaticF___9__10_0))::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* __9__10_0;

  /// @brief Field <>9__9_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__9_0,
                             put = setStaticF___9__9_0))::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* __9__9_0;

  static inline ::UnityEngine::ProBuilder::__MeshHandles____c* New_ctor();

  /// @brief Method <CreateFaceMeshFromFaces>b__10_0, addr 0x3081308, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* _CreateFaceMeshFromFaces_b__10_0(::UnityEngine::ProBuilder::Face* x);

  /// @brief Method <CreateFaceMesh>b__9_0, addr 0x30812f0, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* _CreateFaceMesh_b__9_0(::UnityEngine::ProBuilder::Face* x);

  /// @brief Method .ctor, addr 0x30812e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::ProBuilder::__MeshHandles____c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* getStaticF___9__10_0();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* getStaticF___9__9_0();

  static inline void setStaticF___9(::UnityEngine::ProBuilder::__MeshHandles____c* value);

  static inline void setStaticF___9__10_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  static inline void setStaticF___9__9_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MeshHandles____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MeshHandles____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MeshHandles____c(__MeshHandles____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MeshHandles____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MeshHandles____c(__MeshHandles____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::__MeshHandles____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::MeshHandles
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder::MeshHandles*
class CORDL_TYPE MeshHandles : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::ProBuilder::__MeshHandles____c;

  /// @brief Field k_Billboard0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_Billboard0, put = setStaticF_k_Billboard0))::UnityEngine::Vector2 k_Billboard0;

  /// @brief Field k_Billboard1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_Billboard1, put = setStaticF_k_Billboard1))::UnityEngine::Vector2 k_Billboard1;

  /// @brief Field k_Billboard2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_Billboard2, put = setStaticF_k_Billboard2))::UnityEngine::Vector2 k_Billboard2;

  /// @brief Field k_Billboard3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_Billboard3, put = setStaticF_k_Billboard3))::UnityEngine::Vector2 k_Billboard3;

  /// @brief Field s_IndexList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_IndexList, put = setStaticF_s_IndexList))::System::Collections::Generic::List_1<int32_t>* s_IndexList;

  /// @brief Field s_SharedVertexIndexList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_SharedVertexIndexList, put = setStaticF_s_SharedVertexIndexList))::System::Collections::Generic::List_1<int32_t>* s_SharedVertexIndexList;

  /// @brief Field s_Vector2List, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Vector2List, put = setStaticF_s_Vector2List))::System::Collections::Generic::List_1<::UnityEngine::Vector3>* s_Vector2List;

  /// @brief Field s_Vector3List, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Vector3List, put = setStaticF_s_Vector3List))::System::Collections::Generic::List_1<::UnityEngine::Vector3>* s_Vector3List;

  /// @brief Field s_Vector4List, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Vector4List, put = setStaticF_s_Vector4List))::System::Collections::Generic::List_1<::UnityEngine::Vector4>* s_Vector4List;

  /// @brief Method CreateEdgeBillboardMesh, addr 0x307fbd4, size 0x8c0, virtual false, abstract: false, final false
  static inline void CreateEdgeBillboardMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Mesh* target);

  /// @brief Method CreateEdgeBillboardMesh, addr 0x3080494, size 0xc48, virtual false, abstract: false, final false
  static inline void CreateEdgeBillboardMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Mesh* target,
                                             ::System::Collections::Generic::ICollection_1<::UnityEngine::ProBuilder::Edge>* edges);

  /// @brief Method CreateEdgeMesh, addr 0x307de38, size 0x3fc, virtual false, abstract: false, final false
  static inline void CreateEdgeMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Mesh* target);

  /// @brief Method CreateEdgeMesh, addr 0x307e234, size 0x2d4, virtual false, abstract: false, final false
  static inline void CreateEdgeMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Mesh* target,
                                    ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> edges);

  /// @brief Method CreateFaceMesh, addr 0x307db84, size 0x164, virtual false, abstract: false, final false
  static inline void CreateFaceMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Mesh* target);

  /// @brief Method CreateFaceMeshFromFaces, addr 0x307dce8, size 0x150, virtual false, abstract: false, final false
  static inline void CreateFaceMeshFromFaces(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* faces,
                                             ::UnityEngine::Mesh* target);

  /// @brief Method CreatePointBillboardMesh, addr 0x307e914, size 0x9ac, virtual false, abstract: false, final false
  static inline void CreatePointBillboardMesh(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* positions, ::System::Collections::Generic::IList_1<int32_t>* indexes,
                                              ::UnityEngine::Mesh* target);

  /// @brief Method CreatePointBillboardMesh, addr 0x307f2c0, size 0x914, virtual false, abstract: false, final false
  static inline void CreatePointBillboardMesh(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* positions, ::UnityEngine::Mesh* target);

  /// @brief Method CreatePointMesh, addr 0x307e75c, size 0x1b8, virtual false, abstract: false, final false
  static inline void CreatePointMesh(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions, ::System::Collections::Generic::IList_1<int32_t>* indexes,
                                     ::UnityEngine::Mesh* target);

  /// @brief Method CreateVertexMesh, addr 0x307e508, size 0x19c, virtual false, abstract: false, final false
  static inline void CreateVertexMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Mesh* target);

  /// @brief Method CreateVertexMesh, addr 0x307e6a4, size 0xb8, virtual false, abstract: false, final false
  static inline void CreateVertexMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Mesh* target, ::System::Collections::Generic::IList_1<int32_t>* indexes);

  static inline ::UnityEngine::Vector2 getStaticF_k_Billboard0();

  static inline ::UnityEngine::Vector2 getStaticF_k_Billboard1();

  static inline ::UnityEngine::Vector2 getStaticF_k_Billboard2();

  static inline ::UnityEngine::Vector2 getStaticF_k_Billboard3();

  static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_s_IndexList();

  static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_s_SharedVertexIndexList();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* getStaticF_s_Vector2List();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* getStaticF_s_Vector3List();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* getStaticF_s_Vector4List();

  static inline void setStaticF_k_Billboard0(::UnityEngine::Vector2 value);

  static inline void setStaticF_k_Billboard1(::UnityEngine::Vector2 value);

  static inline void setStaticF_k_Billboard2(::UnityEngine::Vector2 value);

  static inline void setStaticF_k_Billboard3(::UnityEngine::Vector2 value);

  static inline void setStaticF_s_IndexList(::System::Collections::Generic::List_1<int32_t>* value);

  static inline void setStaticF_s_SharedVertexIndexList(::System::Collections::Generic::List_1<int32_t>* value);

  static inline void setStaticF_s_Vector2List(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value);

  static inline void setStaticF_s_Vector3List(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value);

  static inline void setStaticF_s_Vector4List(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshHandles();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MeshHandles", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshHandles(MeshHandles&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshHandles", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshHandles(MeshHandles const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshHandles, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshHandles);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshHandles*, "UnityEngine.ProBuilder", "MeshHandles");
NEED_NO_BOX(::UnityEngine::ProBuilder::__MeshHandles____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::__MeshHandles____c*, "UnityEngine.ProBuilder", "MeshHandles/<>c");
