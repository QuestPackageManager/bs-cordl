#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/MeshOperations/ElementSelection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class __ElementSelection____c;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __ElementSelection____c__DisplayClass25_0;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __ElementSelection____c__DisplayClass27_0;
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
class __ElementSelection____c;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __ElementSelection____c__DisplayClass25_0;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __ElementSelection____c__DisplayClass27_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::ElementSelection);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::__ElementSelection____c);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::__ElementSelection____c__DisplayClass25_0);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::__ElementSelection____c__DisplayClass27_0);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: ::ElementSelection::<>c*
class CORDL_TYPE __ElementSelection____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::ProBuilder::MeshOperations::__ElementSelection____c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__10_0, put = setStaticF___9__10_0))::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* __9__10_0;

  /// @brief Field <>9__11_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__11_0, put = setStaticF___9__11_0))::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* __9__11_0;

  /// @brief Field <>9__12_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_0, put = setStaticF___9__12_0))::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* __9__12_0;

  /// @brief Field <>9__13_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__13_0, put = setStaticF___9__13_0))::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* __9__13_0;

  /// @brief Field <>9__14_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__14_0, put = setStaticF___9__14_0))::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* __9__14_0;

  /// @brief Field <>9__15_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__15_0, put = setStaticF___9__15_0))::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* __9__15_0;

  /// @brief Field <>9__15_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__15_1, put = setStaticF___9__15_1))::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* __9__15_1;

  /// @brief Field <>9__26_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__26_0, put = setStaticF___9__26_0))::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* __9__26_0;

  /// @brief Field <>9__27_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__27_0, put = setStaticF___9__27_0))::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<int32_t, int32_t>>* __9__27_0;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__5_0,
                             put = setStaticF___9__5_0))::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>* __9__5_0;

  /// @brief Field <>9__5_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__5_1, put = setStaticF___9__5_1))::System::Func_2<
      ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>, bool>* __9__5_1;

  /// @brief Field <>9__5_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__5_2, put = setStaticF___9__5_2))::System::Func_2<
      ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>,
      ::UnityEngine::ProBuilder::Edge>* __9__5_2;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0))::System::Func_2<
      ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>, bool>* __9__7_0;

  /// @brief Field <>9__7_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__7_1, put = setStaticF___9__7_1))::System::Func_2<
      ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>,
      ::UnityEngine::ProBuilder::Face*>* __9__7_1;

  static inline ::UnityEngine::ProBuilder::MeshOperations::__ElementSelection____c* New_ctor();

  /// @brief Method <FindHoles>b__26_0, addr 0x331f284, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Edge _FindHoles_b__26_0(::UnityEngine::ProBuilder::WingedEdge* x);

  /// @brief Method <FindHoles>b__27_0, addr 0x331f29c, size 0x58, virtual false, abstract: false, final false
  inline int32_t _FindHoles_b__27_0(::UnityEngine::ProBuilder::SimpleTuple_2<int32_t, int32_t> x, ::UnityEngine::ProBuilder::SimpleTuple_2<int32_t, int32_t> y);

  /// @brief Method <GetEdgeLoopInternalIterative>b__15_0, addr 0x331f254, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Edge _GetEdgeLoopInternalIterative_b__15_0(::UnityEngine::ProBuilder::WingedEdge* x);

  /// @brief Method <GetEdgeLoopInternalIterative>b__15_1, addr 0x331f26c, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Edge _GetEdgeLoopInternalIterative_b__15_1(::UnityEngine::ProBuilder::WingedEdge* x);

  /// @brief Method <GetEdgeLoopInternal>b__14_0, addr 0x331f23c, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Edge _GetEdgeLoopInternal_b__14_0(::UnityEngine::ProBuilder::WingedEdge* x);

  /// @brief Method <GetEdgeLoopIterative>b__13_0, addr 0x331f234, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Edge _GetEdgeLoopIterative_b__13_0(::UnityEngine::ProBuilder::EdgeLookup x);

  /// @brief Method <GetEdgeLoop>b__12_0, addr 0x331f22c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Edge _GetEdgeLoop_b__12_0(::UnityEngine::ProBuilder::EdgeLookup x);

  /// @brief Method <GetEdgeRingIterative>b__11_0, addr 0x331f224, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Edge _GetEdgeRingIterative_b__11_0(::UnityEngine::ProBuilder::EdgeLookup x);

  /// @brief Method <GetEdgeRing>b__10_0, addr 0x331f21c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Edge _GetEdgeRing_b__10_0(::UnityEngine::ProBuilder::EdgeLookup x);

  /// @brief Method <GetPerimeterEdges>b__5_0, addr 0x331f094, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* _GetPerimeterEdges_b__5_0(::UnityEngine::ProBuilder::Face* x);

  /// @brief Method <GetPerimeterEdges>b__5_1, addr 0x331f0ac, size 0x58, virtual false, abstract: false, final false
  inline bool _GetPerimeterEdges_b__5_1(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*> x);

  /// @brief Method <GetPerimeterEdges>b__5_2, addr 0x331f104, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Edge
  _GetPerimeterEdges_b__5_2(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*> x);

  /// @brief Method <GetPerimeterFaces>b__7_0, addr 0x331f164, size 0x58, virtual false, abstract: false, final false
  inline bool _GetPerimeterFaces_b__7_0(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*> x);

  /// @brief Method <GetPerimeterFaces>b__7_1, addr 0x331f1bc, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Face*
  _GetPerimeterFaces_b__7_1(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*> x);

  /// @brief Method .ctor, addr 0x331f08c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::ProBuilder::MeshOperations::__ElementSelection____c* getStaticF___9();

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

  static inline void setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::__ElementSelection____c* value);

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
  constexpr __ElementSelection____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ElementSelection____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ElementSelection____c(__ElementSelection____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ElementSelection____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ElementSelection____c(__ElementSelection____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::__ElementSelection____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Type: ::<>c__DisplayClass25_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: ::ElementSelection::<>c__DisplayClass25_0*
class CORDL_TYPE __ElementSelection____c__DisplayClass25_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field face, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_face, put = __cordl_internal_set_face))::UnityEngine::ProBuilder::Face* face;

  static inline ::UnityEngine::ProBuilder::MeshOperations::__ElementSelection____c__DisplayClass25_0* New_ctor();

  /// @brief Method <GetFaceLoop>b__0, addr 0x331f2fc, size 0x24, virtual false, abstract: false, final false
  inline bool _GetFaceLoop_b__0(::UnityEngine::ProBuilder::WingedEdge* x);

  constexpr ::UnityEngine::ProBuilder::Face*& __cordl_internal_get_face();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Face*> const& __cordl_internal_get_face() const;

  constexpr void __cordl_internal_set_face(::UnityEngine::ProBuilder::Face* value);

  /// @brief Method .ctor, addr 0x331f2f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ElementSelection____c__DisplayClass25_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ElementSelection____c__DisplayClass25_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ElementSelection____c__DisplayClass25_0(__ElementSelection____c__DisplayClass25_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ElementSelection____c__DisplayClass25_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ElementSelection____c__DisplayClass25_0(__ElementSelection____c__DisplayClass25_0 const&) = delete;

  /// @brief Field face, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Face* ___face;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::__ElementSelection____c__DisplayClass25_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::__ElementSelection____c__DisplayClass25_0, ___face) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Type: ::<>c__DisplayClass27_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: ::ElementSelection::<>c__DisplayClass27_0*
class CORDL_TYPE __ElementSelection____c__DisplayClass27_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9__1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___9__1, put = __cordl_internal_set___9__1))::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, bool>* __9__1;

  /// @brief Field <>9__2, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___9__2, put = __cordl_internal_set___9__2))::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, bool>* __9__2;

  /// @brief Field common, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_common, put = __cordl_internal_set_common))::System::Collections::Generic::HashSet_1<int32_t>* common;

  static inline ::UnityEngine::ProBuilder::MeshOperations::__ElementSelection____c__DisplayClass27_0* New_ctor();

  /// @brief Method <FindHoles>b__1, addr 0x331f328, size 0x5c, virtual false, abstract: false, final false
  inline bool _FindHoles_b__1(::UnityEngine::ProBuilder::WingedEdge* w);

  /// @brief Method <FindHoles>b__2, addr 0x331f384, size 0x5c, virtual false, abstract: false, final false
  inline bool _FindHoles_b__2(::UnityEngine::ProBuilder::WingedEdge* w);

  constexpr ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, bool>*& __cordl_internal_get___9__1();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, bool>*> const& __cordl_internal_get___9__1() const;

  constexpr ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, bool>*& __cordl_internal_get___9__2();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, bool>*> const& __cordl_internal_get___9__2() const;

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_common();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> const& __cordl_internal_get_common() const;

  constexpr void __cordl_internal_set___9__1(::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, bool>* value);

  constexpr void __cordl_internal_set___9__2(::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, bool>* value);

  constexpr void __cordl_internal_set_common(::System::Collections::Generic::HashSet_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x331f320, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ElementSelection____c__DisplayClass27_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ElementSelection____c__DisplayClass27_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ElementSelection____c__DisplayClass27_0(__ElementSelection____c__DisplayClass27_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ElementSelection____c__DisplayClass27_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ElementSelection____c__DisplayClass27_0(__ElementSelection____c__DisplayClass27_0 const&) = delete;

  /// @brief Field common, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<int32_t>* ___common;

  /// @brief Field <>9__1, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, bool>* _____9__1;

  /// @brief Field <>9__2, offset: 0x20, size: 0x8, def value: None
  ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, bool>* _____9__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::__ElementSelection____c__DisplayClass27_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::__ElementSelection____c__DisplayClass27_0, ___common) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::__ElementSelection____c__DisplayClass27_0, _____9__1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::__ElementSelection____c__DisplayClass27_0, _____9__2) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Type: UnityEngine.ProBuilder.MeshOperations::ElementSelection
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder.MeshOperations::ElementSelection*
class CORDL_TYPE ElementSelection : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::ProBuilder::MeshOperations::__ElementSelection____c;

  using __c__DisplayClass25_0 = ::UnityEngine::ProBuilder::MeshOperations::__ElementSelection____c__DisplayClass25_0;

  using __c__DisplayClass27_0 = ::UnityEngine::ProBuilder::MeshOperations::__ElementSelection____c__DisplayClass27_0;

  /// @brief Field Vector3_Zero, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_Vector3_Zero, put = setStaticF_Vector3_Zero))::UnityEngine::Vector3 Vector3_Zero;

  /// @brief Method EdgeRingNext, addr 0x331b924, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::WingedEdge* EdgeRingNext(::UnityEngine::ProBuilder::WingedEdge* edge);

  /// @brief Method FindHoles, addr 0x331e36c, size 0x3ac, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>*
  FindHoles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<int32_t>* indexes);

  /// @brief Method FindHoles, addr 0x331e718, size 0x844, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>*
  FindHoles(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* wings, ::System::Collections::Generic::HashSet_1<int32_t>* common);

  /// @brief Method FindNextEdgeInHole, addr 0x331ef5c, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::WingedEdge* FindNextEdgeInHole(::UnityEngine::ProBuilder::WingedEdge* wing, int32_t common);

  /// @brief Method Flood, addr 0x331d838, size 0x280, virtual false, abstract: false, final false
  static inline void Flood(::UnityEngine::ProBuilder::ProBuilderMesh* pb, ::UnityEngine::ProBuilder::WingedEdge* wing, ::UnityEngine::Vector3 wingNrm, float_t maxAngle,
                           ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* selection);

  /// @brief Method Flood, addr 0x331d7bc, size 0x7c, virtual false, abstract: false, final false
  static inline void Flood(::UnityEngine::ProBuilder::WingedEdge* wing, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* selection);

  /// @brief Method FloodSelection, addr 0x331dab8, size 0x2ac, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*
  FloodSelection(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* faces, float_t maxAngleDiff);

  /// @brief Method GetConnectedEdges, addr 0x3319ebc, size 0x610, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> GetConnectedEdges(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                                       ::ArrayW<int32_t, ::Array<int32_t>*> indexes);

  /// @brief Method GetEdgeLoop, addr 0x331c2cc, size 0x374, virtual false, abstract: false, final false
  static inline bool GetEdgeLoop(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges,
                                 ByRef<::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>> loop);

  /// @brief Method GetEdgeLoopInternal, addr 0x331c640, size 0x230, virtual false, abstract: false, final false
  static inline bool GetEdgeLoopInternal(::UnityEngine::ProBuilder::WingedEdge* start, int32_t startIndex, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>* used);

  /// @brief Method GetEdgeLoopInternalIterative, addr 0x331cb68, size 0x388, virtual false, abstract: false, final false
  static inline void GetEdgeLoopInternalIterative(::UnityEngine::ProBuilder::WingedEdge* start, ::UnityEngine::ProBuilder::Edge edge,
                                                  ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>* used);

  /// @brief Method GetEdgeLoopIterative, addr 0x331c870, size 0x2f8, virtual false, abstract: false, final false
  static inline bool GetEdgeLoopIterative(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges,
                                          ByRef<::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>> loop);

  /// @brief Method GetEdgeRing, addr 0x331b9a8, size 0x484, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* GetEdgeRing(::UnityEngine::ProBuilder::ProBuilderMesh* pb,
                                                                                                            ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges);

  /// @brief Method GetEdgeRingIterative, addr 0x331be2c, size 0x4a0, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*
  GetEdgeRingIterative(::UnityEngine::ProBuilder::ProBuilderMesh* pb, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges);

  /// @brief Method GetFaceLoop, addr 0x331dd64, size 0x20c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*
  GetFaceLoop(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> faces, bool ring);

  /// @brief Method GetFaceLoop, addr 0x331df70, size 0x1d8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* GetFaceLoop(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* wings,
                                                                                                         ::UnityEngine::ProBuilder::Face* face, bool ring);

  /// @brief Method GetFaceRingAndLoop, addr 0x331e148, size 0x224, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*
  GetFaceRingAndLoop(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> faces);

  /// @brief Method GetNeighborFaces, addr 0x3319c08, size 0x2b4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* GetNeighborFaces(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                           ::ArrayW<int32_t, ::Array<int32_t>*> indexes);

  /// @brief Method GetNeighborFaces, addr 0x330765c, size 0x2d4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Edge>>*
  GetNeighborFaces(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge);

  /// @brief Method GetNeighborFaces, addr 0x33199ac, size 0x25c, virtual false, abstract: false, final false
  static inline void GetNeighborFaces(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge,
                                      ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* neighborFaces);

  /// @brief Method GetPerimeterEdges, addr 0x331aabc, size 0x394, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> GetPerimeterEdges(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                       ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>* edges);

  /// @brief Method GetPerimeterEdges, addr 0x331a4cc, size 0x5f0, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*
  GetPerimeterEdges(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces);

  /// @brief Method GetPerimeterFaces, addr 0x331ae50, size 0x780, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*
  GetPerimeterFaces(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces);

  /// @brief Method GetPerimeterVertices, addr 0x331b5d0, size 0x354, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> GetPerimeterVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<int32_t, ::Array<int32_t>*> indexes,
                                                                          ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> universal_edges_all);

  /// @brief Method GetSpokes, addr 0x331cef0, size 0x2c0, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* GetSpokes(::UnityEngine::ProBuilder::WingedEdge* wing, int32_t sharedIndex, bool allowHoles);

  /// @brief Method GrowSelection, addr 0x331d244, size 0x578, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*
  GrowSelection(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, float_t maxAngleDiff);

  /// @brief Method NextSpoke, addr 0x331d1b0, size 0x94, virtual false, abstract: false, final false
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

  /// @brief Field k_MaxHoleIterations offset 0xffffffff size 0x4
  static constexpr int32_t k_MaxHoleIterations{ static_cast<int32_t>(0x800) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::ElementSelection, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::ElementSelection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::ElementSelection*, "UnityEngine.ProBuilder.MeshOperations", "ElementSelection");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::__ElementSelection____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::__ElementSelection____c*, "UnityEngine.ProBuilder.MeshOperations", "ElementSelection/<>c");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::__ElementSelection____c__DisplayClass25_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::__ElementSelection____c__DisplayClass25_0*, "UnityEngine.ProBuilder.MeshOperations", "ElementSelection/<>c__DisplayClass25_0");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::__ElementSelection____c__DisplayClass27_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::__ElementSelection____c__DisplayClass27_0*, "UnityEngine.ProBuilder.MeshOperations", "ElementSelection/<>c__DisplayClass27_0");
