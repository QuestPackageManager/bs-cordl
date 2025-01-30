#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/MeshOperations/ElementSelection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ElementSelection)
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
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class ElementSelection___c;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class ElementSelection___c__DisplayClass25_0;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class ElementSelection___c__DisplayClass27_0;
}
namespace UnityEngine::ProBuilder {
struct EdgeLookup;
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
template <typename T1, typename T2> struct SimpleTuple_2;
}
namespace UnityEngine::ProBuilder {
class WingedEdge;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class ElementSelection;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class ElementSelection___c;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class ElementSelection___c__DisplayClass25_0;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class ElementSelection___c__DisplayClass27_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::ElementSelection);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0);
// Dependencies System.Object
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.ElementSelection/<>c
class CORDL_TYPE ElementSelection___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_0, put = setStaticF___9__10_0)) ::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* __9__10_0;

  /// @brief Field <>9__11_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__11_0, put = setStaticF___9__11_0)) ::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* __9__11_0;

  /// @brief Field <>9__12_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_0, put = setStaticF___9__12_0)) ::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* __9__12_0;

  /// @brief Field <>9__13_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__13_0, put = setStaticF___9__13_0)) ::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* __9__13_0;

  /// @brief Field <>9__14_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__14_0, put = setStaticF___9__14_0)) ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* __9__14_0;

  /// @brief Field <>9__15_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__15_0, put = setStaticF___9__15_0)) ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* __9__15_0;

  /// @brief Field <>9__15_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__15_1, put = setStaticF___9__15_1)) ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* __9__15_1;

  /// @brief Field <>9__26_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__26_0, put = setStaticF___9__26_0)) ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* __9__26_0;

  /// @brief Field <>9__27_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__27_0, put = setStaticF___9__27_0)) ::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<int32_t, int32_t>>* __9__27_0;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_0,
                      put = setStaticF___9__5_0)) ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>* __9__5_0;

  /// @brief Field <>9__5_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_1, put = setStaticF___9__5_1)) ::System::Func_2<
      ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>, bool>* __9__5_1;

  /// @brief Field <>9__5_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_2, put = setStaticF___9__5_2)) ::System::Func_2<
      ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>, ::UnityEngine::ProBuilder::Edge>*
      __9__5_2;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0)) ::System::Func_2<
      ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>, bool>* __9__7_0;

  /// @brief Field <>9__7_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_1, put = setStaticF___9__7_1)) ::System::Func_2<
      ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>, ::UnityEngine::ProBuilder::Face*>*
      __9__7_1;

  static inline ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c* New_ctor();

  /// @brief Method <FindHoles>b__26_0, addr 0x4775d9c, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Edge _FindHoles_b__26_0(::UnityEngine::ProBuilder::WingedEdge* x);

  /// @brief Method <FindHoles>b__27_0, addr 0x4775db4, size 0x58, virtual false, abstract: false, final false
  inline int32_t _FindHoles_b__27_0(::UnityEngine::ProBuilder::SimpleTuple_2<int32_t, int32_t> x, ::UnityEngine::ProBuilder::SimpleTuple_2<int32_t, int32_t> y);

  /// @brief Method <GetEdgeLoopInternalIterative>b__15_0, addr 0x4775d6c, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Edge _GetEdgeLoopInternalIterative_b__15_0(::UnityEngine::ProBuilder::WingedEdge* x);

  /// @brief Method <GetEdgeLoopInternalIterative>b__15_1, addr 0x4775d84, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Edge _GetEdgeLoopInternalIterative_b__15_1(::UnityEngine::ProBuilder::WingedEdge* x);

  /// @brief Method <GetEdgeLoopInternal>b__14_0, addr 0x4775d54, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Edge _GetEdgeLoopInternal_b__14_0(::UnityEngine::ProBuilder::WingedEdge* x);

  /// @brief Method <GetEdgeLoopIterative>b__13_0, addr 0x4775d4c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Edge _GetEdgeLoopIterative_b__13_0(::UnityEngine::ProBuilder::EdgeLookup x);

  /// @brief Method <GetEdgeLoop>b__12_0, addr 0x4775d44, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Edge _GetEdgeLoop_b__12_0(::UnityEngine::ProBuilder::EdgeLookup x);

  /// @brief Method <GetEdgeRingIterative>b__11_0, addr 0x4775d3c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Edge _GetEdgeRingIterative_b__11_0(::UnityEngine::ProBuilder::EdgeLookup x);

  /// @brief Method <GetEdgeRing>b__10_0, addr 0x4775d34, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Edge _GetEdgeRing_b__10_0(::UnityEngine::ProBuilder::EdgeLookup x);

  /// @brief Method <GetPerimeterEdges>b__5_0, addr 0x4775bac, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* _GetPerimeterEdges_b__5_0(::UnityEngine::ProBuilder::Face* x);

  /// @brief Method <GetPerimeterEdges>b__5_1, addr 0x4775bc4, size 0x58, virtual false, abstract: false, final false
  inline bool _GetPerimeterEdges_b__5_1(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*> x);

  /// @brief Method <GetPerimeterEdges>b__5_2, addr 0x4775c1c, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Edge
  _GetPerimeterEdges_b__5_2(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*> x);

  /// @brief Method <GetPerimeterFaces>b__7_0, addr 0x4775c7c, size 0x58, virtual false, abstract: false, final false
  inline bool _GetPerimeterFaces_b__7_0(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*> x);

  /// @brief Method <GetPerimeterFaces>b__7_1, addr 0x4775cd4, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Face*
  _GetPerimeterFaces_b__7_1(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*> x);

  /// @brief Method .ctor, addr 0x4775ba4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* getStaticF___9__10_0();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* getStaticF___9__11_0();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* getStaticF___9__12_0();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* getStaticF___9__13_0();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* getStaticF___9__14_0();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* getStaticF___9__15_0();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* getStaticF___9__15_1();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* getStaticF___9__26_0();

  static inline ::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<int32_t, int32_t>>* getStaticF___9__27_0();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>* getStaticF___9__5_0();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>, bool>*
  getStaticF___9__5_1();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>,
                                 ::UnityEngine::ProBuilder::Edge>*
  getStaticF___9__5_2();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>, bool>*
  getStaticF___9__7_0();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>,
                                 ::UnityEngine::ProBuilder::Face*>*
  getStaticF___9__7_1();

  static inline void setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c* value);

  static inline void setStaticF___9__10_0(::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* value);

  static inline void setStaticF___9__11_0(::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* value);

  static inline void setStaticF___9__12_0(::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* value);

  static inline void setStaticF___9__13_0(::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* value);

  static inline void setStaticF___9__14_0(::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* value);

  static inline void setStaticF___9__15_0(::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* value);

  static inline void setStaticF___9__15_1(::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* value);

  static inline void setStaticF___9__26_0(::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* value);

  static inline void setStaticF___9__27_0(::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<int32_t, int32_t>>* value);

  static inline void setStaticF___9__5_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>* value);

  static inline void setStaticF___9__5_1(
      ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>, bool>* value);

  static inline void
  setStaticF___9__5_2(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>,
                                       ::UnityEngine::ProBuilder::Edge>* value);

  static inline void setStaticF___9__7_0(
      ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>, bool>* value);

  static inline void
  setStaticF___9__7_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>,
                                       ::UnityEngine::ProBuilder::Face*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ElementSelection___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ElementSelection___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ElementSelection___c(ElementSelection___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ElementSelection___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ElementSelection___c(ElementSelection___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14375 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Dependencies System.Object
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.ElementSelection/<>c__DisplayClass25_0
class CORDL_TYPE ElementSelection___c__DisplayClass25_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field face, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_face, put = __cordl_internal_set_face)) ::UnityEngine::ProBuilder::Face* face;

  static inline ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0* New_ctor();

  /// @brief Method <GetFaceLoop>b__0, addr 0x4775e14, size 0x24, virtual false, abstract: false, final false
  inline bool _GetFaceLoop_b__0(::UnityEngine::ProBuilder::WingedEdge* x);

  constexpr ::UnityEngine::ProBuilder::Face* const& __cordl_internal_get_face() const;

  constexpr ::UnityEngine::ProBuilder::Face*& __cordl_internal_get_face();

  constexpr void __cordl_internal_set_face(::UnityEngine::ProBuilder::Face* value);

  /// @brief Method .ctor, addr 0x4775e0c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ElementSelection___c__DisplayClass25_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ElementSelection___c__DisplayClass25_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ElementSelection___c__DisplayClass25_0(ElementSelection___c__DisplayClass25_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ElementSelection___c__DisplayClass25_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ElementSelection___c__DisplayClass25_0(ElementSelection___c__DisplayClass25_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14376 };

  /// @brief Field face, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Face* ___face;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0, ___face) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Dependencies System.Object
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.ElementSelection/<>c__DisplayClass27_0
class CORDL_TYPE ElementSelection___c__DisplayClass27_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9__1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___9__1, put = __cordl_internal_set___9__1)) ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, bool>* __9__1;

  /// @brief Field <>9__2, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___9__2, put = __cordl_internal_set___9__2)) ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, bool>* __9__2;

  /// @brief Field common, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_common, put = __cordl_internal_set_common)) ::System::Collections::Generic::HashSet_1<int32_t>* common;

  static inline ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0* New_ctor();

  /// @brief Method <FindHoles>b__1, addr 0x4775e40, size 0x5c, virtual false, abstract: false, final false
  inline bool _FindHoles_b__1(::UnityEngine::ProBuilder::WingedEdge* w);

  /// @brief Method <FindHoles>b__2, addr 0x4775e9c, size 0x5c, virtual false, abstract: false, final false
  inline bool _FindHoles_b__2(::UnityEngine::ProBuilder::WingedEdge* w);

  constexpr ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, bool>* const& __cordl_internal_get___9__1() const;

  constexpr ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, bool>*& __cordl_internal_get___9__1();

  constexpr ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, bool>* const& __cordl_internal_get___9__2() const;

  constexpr ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, bool>*& __cordl_internal_get___9__2();

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_common() const;

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_common();

  constexpr void __cordl_internal_set___9__1(::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, bool>* value);

  constexpr void __cordl_internal_set___9__2(::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, bool>* value);

  constexpr void __cordl_internal_set_common(::System::Collections::Generic::HashSet_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x4775e38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ElementSelection___c__DisplayClass27_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ElementSelection___c__DisplayClass27_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ElementSelection___c__DisplayClass27_0(ElementSelection___c__DisplayClass27_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ElementSelection___c__DisplayClass27_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ElementSelection___c__DisplayClass27_0(ElementSelection___c__DisplayClass27_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14377 };

  /// @brief Field common, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<int32_t>* ___common;

  /// @brief Field <>9__1, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, bool>* _____9__1;

  /// @brief Field <>9__2, offset: 0x20, size: 0x8, def value: None
  ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, bool>* _____9__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0, ___common) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0, _____9__1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0, _____9__2) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0, 0x28>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Dependencies System.Object, UnityEngine.Vector3
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.ElementSelection
class CORDL_TYPE ElementSelection : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c;

  using __c__DisplayClass25_0 = ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0;

  using __c__DisplayClass27_0 = ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0;

  /// @brief Field Vector3_Zero, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_Vector3_Zero, put = setStaticF_Vector3_Zero)) ::UnityEngine::Vector3 Vector3_Zero;

  /// @brief Method EdgeRingNext, addr 0x4772398, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::WingedEdge* EdgeRingNext(::UnityEngine::ProBuilder::WingedEdge* edge);

  /// @brief Method FindHoles, addr 0x4774ea0, size 0x39c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>*
  FindHoles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<int32_t>* indexes);

  /// @brief Method FindHoles, addr 0x477523c, size 0x840, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>*
  FindHoles(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* wings, ::System::Collections::Generic::HashSet_1<int32_t>* common);

  /// @brief Method FindNextEdgeInHole, addr 0x4775a7c, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::WingedEdge* FindNextEdgeInHole(::UnityEngine::ProBuilder::WingedEdge* wing, int32_t common);

  /// @brief Method Flood, addr 0x4774358, size 0x2a8, virtual false, abstract: false, final false
  static inline void Flood(::UnityEngine::ProBuilder::ProBuilderMesh* pb, ::UnityEngine::ProBuilder::WingedEdge* wing, ::UnityEngine::Vector3 wingNrm, float_t maxAngle,
                           ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* selection);

  /// @brief Method Flood, addr 0x47742dc, size 0x7c, virtual false, abstract: false, final false
  static inline void Flood(::UnityEngine::ProBuilder::WingedEdge* wing, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* selection);

  /// @brief Method FloodSelection, addr 0x4774600, size 0x2ac, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*
  FloodSelection(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* faces, float_t maxAngleDiff);

  /// @brief Method GetConnectedEdges, addr 0x47708ac, size 0x680, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> GetConnectedEdges(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                                       ::ArrayW<int32_t, ::Array<int32_t>*> indexes);

  /// @brief Method GetEdgeLoop, addr 0x4772d44, size 0x370, virtual false, abstract: false, final false
  static inline bool GetEdgeLoop(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges,
                                 ::ByRef<::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>> loop);

  /// @brief Method GetEdgeLoopInternal, addr 0x47730b4, size 0x228, virtual false, abstract: false, final false
  static inline bool GetEdgeLoopInternal(::UnityEngine::ProBuilder::WingedEdge* start, int32_t startIndex, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>* used);

  /// @brief Method GetEdgeLoopInternalIterative, addr 0x47735cc, size 0x380, virtual false, abstract: false, final false
  static inline void GetEdgeLoopInternalIterative(::UnityEngine::ProBuilder::WingedEdge* start, ::UnityEngine::ProBuilder::Edge edge,
                                                  ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>* used);

  /// @brief Method GetEdgeLoopIterative, addr 0x47732dc, size 0x2f0, virtual false, abstract: false, final false
  static inline bool GetEdgeLoopIterative(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges,
                                          ::ByRef<::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>> loop);

  /// @brief Method GetEdgeRing, addr 0x477241c, size 0x488, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* GetEdgeRing(::UnityEngine::ProBuilder::ProBuilderMesh* pb,
                                                                                                            ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges);

  /// @brief Method GetEdgeRingIterative, addr 0x47728a4, size 0x4a0, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*
  GetEdgeRingIterative(::UnityEngine::ProBuilder::ProBuilderMesh* pb, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges);

  /// @brief Method GetFaceLoop, addr 0x47748ac, size 0x204, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*
  GetFaceLoop(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> faces, bool ring);

  /// @brief Method GetFaceLoop, addr 0x4774ab0, size 0x1d4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* GetFaceLoop(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* wings,
                                                                                                         ::UnityEngine::ProBuilder::Face* face, bool ring);

  /// @brief Method GetFaceRingAndLoop, addr 0x4774c84, size 0x21c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*
  GetFaceRingAndLoop(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> faces);

  /// @brief Method GetNeighborFaces, addr 0x47705f8, size 0x2b4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* GetNeighborFaces(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                           ::ArrayW<int32_t, ::Array<int32_t>*> indexes);

  /// @brief Method GetNeighborFaces, addr 0x475e1d0, size 0x2fc, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Edge>>*
  GetNeighborFaces(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge);

  /// @brief Method GetNeighborFaces, addr 0x4770374, size 0x284, virtual false, abstract: false, final false
  static inline void GetNeighborFaces(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge,
                                      ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* neighborFaces);

  /// @brief Method GetPerimeterEdges, addr 0x477152c, size 0x384, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> GetPerimeterEdges(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                       ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>* edges);

  /// @brief Method GetPerimeterEdges, addr 0x4770f2c, size 0x600, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*
  GetPerimeterEdges(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces);

  /// @brief Method GetPerimeterFaces, addr 0x47718b0, size 0x79c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*
  GetPerimeterFaces(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces);

  /// @brief Method GetPerimeterVertices, addr 0x477204c, size 0x34c, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> GetPerimeterVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<int32_t, ::Array<int32_t>*> indexes,
                                                                          ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> universal_edges_all);

  /// @brief Method GetSpokes, addr 0x477394c, size 0x30c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* GetSpokes(::UnityEngine::ProBuilder::WingedEdge* wing, int32_t sharedIndex, bool allowHoles);

  /// @brief Method GrowSelection, addr 0x4773d38, size 0x5a4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*
  GrowSelection(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, float_t maxAngleDiff);

  /// @brief Method NextSpoke, addr 0x4773c58, size 0xe0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::WingedEdge* NextSpoke(::UnityEngine::ProBuilder::WingedEdge* wing, int32_t pivot, bool opp);

  static inline ::UnityEngine::Vector3 getStaticF_Vector3_Zero();

  static inline void setStaticF_Vector3_Zero(::UnityEngine::Vector3 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ElementSelection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ElementSelection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ElementSelection(ElementSelection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ElementSelection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ElementSelection(ElementSelection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14378 };

  /// @brief Field k_MaxHoleIterations offset 0xffffffff size 0x4
  static constexpr int32_t k_MaxHoleIterations{ static_cast<int32_t>(0x800) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::ElementSelection, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::ElementSelection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::ElementSelection*, "UnityEngine.ProBuilder.MeshOperations", "ElementSelection");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*, "UnityEngine.ProBuilder.MeshOperations", "ElementSelection/<>c");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0*, "UnityEngine.ProBuilder.MeshOperations", "ElementSelection/<>c__DisplayClass25_0");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0*, "UnityEngine.ProBuilder.MeshOperations", "ElementSelection/<>c__DisplayClass27_0");
