#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/MeshOperations/ConnectElements.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectElements)
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
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class ConnectElements___c;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class ConnectElements___c__DisplayClass2_0;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class ConnectElements___c__DisplayClass3_0;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class ConnectFaceRebuildData;
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
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
template <typename T1, typename T2> struct SimpleTuple_2;
}
namespace UnityEngine::ProBuilder {
class Vertex;
}
namespace UnityEngine::ProBuilder {
class WingedEdge;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class ConnectElements;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class ConnectElements___c;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class ConnectElements___c__DisplayClass2_0;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class ConnectElements___c__DisplayClass3_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::ConnectElements);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass2_0);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass3_0);
// Dependencies System.Object
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.ConnectElements/<>c
class CORDL_TYPE ConnectElements___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c* __9;

  /// @brief Field <>9__0_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__0_0,
                      put = setStaticF___9__0_0)) ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>* __9__0_0;

  /// @brief Field <>9__2_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_1, put = setStaticF___9__2_1)) ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* __9__2_1;

  /// @brief Field <>9__2_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_2,
                      put = setStaticF___9__2_2)) ::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::UnityEngine::ProBuilder::FaceRebuildData*>* __9__2_2;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0)) ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* __9__3_0;

  /// @brief Field <>9__3_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_1,
                      put = setStaticF___9__3_1)) ::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::UnityEngine::ProBuilder::FaceRebuildData*>* __9__3_1;

  /// @brief Field <>9__3_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_2, put = setStaticF___9__3_2)) ::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*,
                                                                                              ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>* __9__3_2;

  /// @brief Field <>9__3_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_4, put = setStaticF___9__3_4)) ::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* __9__3_4;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0)) ::System::Func_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>* __9__5_0;

  /// @brief Field <>9__5_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_1, put = setStaticF___9__5_1)) ::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>* __9__5_1;

  /// @brief Field <>9__5_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_2, put = setStaticF___9__5_2)) ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* __9__5_2;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0)) ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* __9__6_0;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_0, put = setStaticF___9__8_0)) ::System::Func_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>* __9__8_0;

  /// @brief Field <>9__8_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_1, put = setStaticF___9__8_1)) ::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>* __9__8_1;

  /// @brief Field <>9__8_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_2, put = setStaticF___9__8_2)) ::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>* __9__8_2;

  static inline ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c* New_ctor();

  /// @brief Method <ConnectEdgesInFace>b__5_0, addr 0x4768e58, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* _ConnectEdgesInFace_b__5_0(int32_t x);

  /// @brief Method <ConnectEdgesInFace>b__5_1, addr 0x4768ec0, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<int32_t>* _ConnectEdgesInFace_b__5_1(int32_t x);

  /// @brief Method <ConnectEdgesInFace>b__5_2, addr 0x4768f28, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Edge _ConnectEdgesInFace_b__5_2(::UnityEngine::ProBuilder::WingedEdge* x);

  /// @brief Method <ConnectIndexesPerFace>b__8_0, addr 0x4768f58, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* _ConnectIndexesPerFace_b__8_0(int32_t x);

  /// @brief Method <ConnectIndexesPerFace>b__8_1, addr 0x4768fc0, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<int32_t>* _ConnectIndexesPerFace_b__8_1(int32_t x);

  /// @brief Method <ConnectIndexesPerFace>b__8_2, addr 0x4769028, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<int32_t>* _ConnectIndexesPerFace_b__8_2(int32_t x);

  /// @brief Method <Connect>b__0_0, addr 0x4768db0, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* _Connect_b__0_0(::UnityEngine::ProBuilder::Face* x);

  /// @brief Method <Connect>b__2_1, addr 0x4768dc8, size 0x18, virtual false, abstract: false, final false
  inline int32_t _Connect_b__2_1(::UnityEngine::ProBuilder::Face* x);

  /// @brief Method <Connect>b__2_2, addr 0x4768de0, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::FaceRebuildData* _Connect_b__2_2(::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData* x);

  /// @brief Method <Connect>b__3_0, addr 0x4768df8, size 0x18, virtual false, abstract: false, final false
  inline int32_t _Connect_b__3_0(::UnityEngine::ProBuilder::Face* x);

  /// @brief Method <Connect>b__3_1, addr 0x4768e10, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::FaceRebuildData* _Connect_b__3_1(::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData* x);

  /// @brief Method <Connect>b__3_2, addr 0x4768e28, size 0x28, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* _Connect_b__3_2(::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData* x);

  /// @brief Method <Connect>b__3_4, addr 0x4768e50, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Edge _Connect_b__3_4(::UnityEngine::ProBuilder::EdgeLookup x);

  /// @brief Method <InsertVertices>b__6_0, addr 0x4768f40, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Edge _InsertVertices_b__6_0(::UnityEngine::ProBuilder::WingedEdge* x);

  /// @brief Method .ctor, addr 0x4768da8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>* getStaticF___9__0_0();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* getStaticF___9__2_1();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::UnityEngine::ProBuilder::FaceRebuildData*>* getStaticF___9__2_2();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* getStaticF___9__3_0();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::UnityEngine::ProBuilder::FaceRebuildData*>* getStaticF___9__3_1();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>*
  getStaticF___9__3_2();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* getStaticF___9__3_4();

  static inline ::System::Func_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>* getStaticF___9__5_0();

  static inline ::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>* getStaticF___9__5_1();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* getStaticF___9__5_2();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* getStaticF___9__6_0();

  static inline ::System::Func_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>* getStaticF___9__8_0();

  static inline ::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>* getStaticF___9__8_1();

  static inline ::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>* getStaticF___9__8_2();

  static inline void setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c* value);

  static inline void setStaticF___9__0_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>* value);

  static inline void setStaticF___9__2_1(::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* value);

  static inline void setStaticF___9__2_2(::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::UnityEngine::ProBuilder::FaceRebuildData*>* value);

  static inline void setStaticF___9__3_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* value);

  static inline void setStaticF___9__3_1(::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::UnityEngine::ProBuilder::FaceRebuildData*>* value);

  static inline void
  setStaticF___9__3_2(::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>* value);

  static inline void setStaticF___9__3_4(::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* value);

  static inline void setStaticF___9__5_0(::System::Func_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>* value);

  static inline void setStaticF___9__5_1(::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>* value);

  static inline void setStaticF___9__5_2(::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* value);

  static inline void setStaticF___9__6_0(::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* value);

  static inline void setStaticF___9__8_0(::System::Func_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>* value);

  static inline void setStaticF___9__8_1(::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>* value);

  static inline void setStaticF___9__8_2(::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectElements___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConnectElements___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectElements___c(ConnectElements___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectElements___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectElements___c(ConnectElements___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14367 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Dependencies System.Object
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.ConnectElements/<>c__DisplayClass2_0
class CORDL_TYPE ConnectElements___c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field lookup, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_lookup, put = __cordl_internal_set_lookup)) ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* lookup;

  /// @brief Field mesh, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mesh, put = __cordl_internal_set_mesh)) ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> mesh;

  static inline ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass2_0* New_ctor();

  /// @brief Method <Connect>b__0, addr 0x4769090, size 0x58, virtual false, abstract: false, final false
  inline int32_t _Connect_b__0(int32_t x);

  /// @brief Method <Connect>b__3, addr 0x47690e8, size 0x44, virtual false, abstract: false, final false
  inline int32_t _Connect_b__3(int32_t x);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* const& __cordl_internal_get_lookup() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& __cordl_internal_get_lookup();

  constexpr ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> const& __cordl_internal_get_mesh() const;

  constexpr ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>& __cordl_internal_get_mesh();

  constexpr void __cordl_internal_set_lookup(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value);

  constexpr void __cordl_internal_set_mesh(::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> value);

  /// @brief Method .ctor, addr 0x47663bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectElements___c__DisplayClass2_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConnectElements___c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectElements___c__DisplayClass2_0(ConnectElements___c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectElements___c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectElements___c__DisplayClass2_0(ConnectElements___c__DisplayClass2_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14368 };

  /// @brief Field lookup, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* ___lookup;

  /// @brief Field mesh, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> ___mesh;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass2_0, ___lookup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass2_0, ___mesh) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass2_0, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Dependencies System.Object
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.ConnectElements/<>c__DisplayClass3_0
class CORDL_TYPE ConnectElements___c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field appended, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_appended, put = __cordl_internal_set_appended)) ::System::Collections::Generic::HashSet_1<int32_t>* appended;

  static inline ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass3_0* New_ctor();

  /// @brief Method <Connect>b__3, addr 0x476912c, size 0x80, virtual false, abstract: false, final false
  inline bool _Connect_b__3(::UnityEngine::ProBuilder::Edge x);

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_appended() const;

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_appended();

  constexpr void __cordl_internal_set_appended(::System::Collections::Generic::HashSet_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x4768d44, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectElements___c__DisplayClass3_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConnectElements___c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectElements___c__DisplayClass3_0(ConnectElements___c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectElements___c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectElements___c__DisplayClass3_0(ConnectElements___c__DisplayClass3_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14369 };

  /// @brief Field appended, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<int32_t>* ___appended;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass3_0, ___appended) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass3_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Dependencies System.Object
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.ConnectElements
class CORDL_TYPE ConnectElements : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c;

  using __c__DisplayClass2_0 = ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass2_0;

  using __c__DisplayClass3_0 = ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass3_0;

  /// @brief Method Connect, addr 0x4763c44, size 0x2bc, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> Connect(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                               ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces);

  /// @brief Method Connect, addr 0x476553c, size 0xe80, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> Connect(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method Connect, addr 0x4763f00, size 0x15a4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::ActionResult* Connect(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges,
                                                                 ::ByRef<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>> addedFaces,
                                                                 ::ByRef<::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>> connections, bool returnFaces,
                                                                 bool returnEdges, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* faceMask);

  /// @brief Method Connect, addr 0x47654a4, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::SimpleTuple_2<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>,
                                                         ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>>
  Connect(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges);

  /// @brief Method ConnectEdgesInFace, addr 0x4768550, size 0x7f4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>*
  ConnectEdgesInFace(::UnityEngine::ProBuilder::Face* face, ::UnityEngine::ProBuilder::WingedEdge* a, ::UnityEngine::ProBuilder::WingedEdge* b,
                     ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices);

  /// @brief Method ConnectEdgesInFace, addr 0x4767bec, size 0x964, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>*
  ConnectEdgesInFace(::UnityEngine::ProBuilder::Face* face, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* edges,
                     ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices);

  /// @brief Method ConnectIndexesPerFace, addr 0x4766dec, size 0x8d4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>*
  ConnectIndexesPerFace(::UnityEngine::ProBuilder::Face* face, int32_t a, int32_t b, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices,
                        ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* lookup);

  /// @brief Method ConnectIndexesPerFace, addr 0x47663c4, size 0xa28, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>*
  ConnectIndexesPerFace(::UnityEngine::ProBuilder::Face* face, ::System::Collections::Generic::List_1<int32_t>* indexes,
                        ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* lookup,
                        int32_t sharedIndexOffset);

  /// @brief Method InsertVertices, addr 0x47676c0, size 0x52c, virtual false, abstract: false, final false
  static inline bool InsertVertices(::UnityEngine::ProBuilder::Face* face, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* edges,
                                    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices,
                                    ::ByRef<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*> data);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectElements();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConnectElements", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectElements(ConnectElements&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectElements", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectElements(ConnectElements const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14370 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::ConnectElements, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::ConnectElements);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::ConnectElements*, "UnityEngine.ProBuilder.MeshOperations", "ConnectElements");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*, "UnityEngine.ProBuilder.MeshOperations", "ConnectElements/<>c");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass2_0*, "UnityEngine.ProBuilder.MeshOperations", "ConnectElements/<>c__DisplayClass2_0");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass3_0*, "UnityEngine.ProBuilder.MeshOperations", "ConnectElements/<>c__DisplayClass3_0");
