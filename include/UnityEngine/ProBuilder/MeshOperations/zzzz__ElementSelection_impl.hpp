#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/MeshOperations/ElementSelection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__ElementSelection_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__ElementSelection_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__EdgeLookup_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__SimpleTuple_2_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__WingedEdge_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6724fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c._GetPerimeterEdges_b__5_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::*)(::UnityEngine::ProBuilder::Face*)>(
        &::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetPerimeterEdges_b__5_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6724fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(),
                                                                                           { "<GetPerimeterEdges>b__5_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c._GetPerimeterEdges_b__5_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::*)(
    ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetPerimeterEdges_b__5_1)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6724fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(),
            { "<GetPerimeterEdges>b__5_1",
              {},
              { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c._GetPerimeterEdges_b__5_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Edge (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::*)(
    ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetPerimeterEdges_b__5_2)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x672503c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(),
            { "<GetPerimeterEdges>b__5_2",
              {},
              { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c._GetPerimeterFaces_b__7_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::*)(
    ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetPerimeterFaces_b__7_0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x67250a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(),
            { "<GetPerimeterFaces>b__7_0",
              {},
              { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c._GetPerimeterFaces_b__7_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Face* (
    ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::*)(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge,
                                                                                                                       ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetPerimeterFaces_b__7_1)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6725110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(),
            { "<GetPerimeterFaces>b__7_1",
              {},
              { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c._GetEdgeRing_b__10_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Edge (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::*)(::UnityEngine::ProBuilder::EdgeLookup)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetEdgeRing_b__10_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x672517c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(),
                                                                                           { "<GetEdgeRing>b__10_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::EdgeLookup>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c._GetEdgeRingIterative_b__11_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Edge (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::*)(::UnityEngine::ProBuilder::EdgeLookup)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetEdgeRingIterative_b__11_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6725184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(),
                                                                                           { "<GetEdgeRingIterative>b__11_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::EdgeLookup>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c._GetEdgeLoop_b__12_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Edge (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::*)(::UnityEngine::ProBuilder::EdgeLookup)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetEdgeLoop_b__12_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x672518c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(),
                                                                                           { "<GetEdgeLoop>b__12_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::EdgeLookup>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c._GetEdgeLoopIterative_b__13_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Edge (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::*)(::UnityEngine::ProBuilder::EdgeLookup)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetEdgeLoopIterative_b__13_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6725194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(),
                                                                                           { "<GetEdgeLoopIterative>b__13_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::EdgeLookup>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c._GetEdgeLoopInternal_b__14_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Edge (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::*)(::UnityEngine::ProBuilder::WingedEdge*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetEdgeLoopInternal_b__14_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x672519c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(),
                                                                                           { "<GetEdgeLoopInternal>b__14_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c._GetEdgeLoopInternalIterative_b__15_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Edge (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::*)(::UnityEngine::ProBuilder::WingedEdge*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetEdgeLoopInternalIterative_b__15_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67251b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(),
                                                             { "<GetEdgeLoopInternalIterative>b__15_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c._GetEdgeLoopInternalIterative_b__15_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Edge (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::*)(::UnityEngine::ProBuilder::WingedEdge*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetEdgeLoopInternalIterative_b__15_1)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67251c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(),
                                                             { "<GetEdgeLoopInternalIterative>b__15_1", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c._FindHoles_b__26_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Edge (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::*)(::UnityEngine::ProBuilder::WingedEdge*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_FindHoles_b__26_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67251d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(),
                                                                                           { "<FindHoles>b__26_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c._FindHoles_b__27_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::*)(::UnityEngine::ProBuilder::SimpleTuple_2<int32_t, int32_t>,
                                                                                                                                    ::UnityEngine::ProBuilder::SimpleTuple_2<int32_t, int32_t>)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_FindHoles_b__27_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x67251ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(),
                            { "<FindHoles>b__27_0",
                              {},
                              { ::i2c::type_of<::UnityEngine::ProBuilder::SimpleTuple_2<int32_t, int32_t>>(), ::i2c::type_of<::UnityEngine::ProBuilder::SimpleTuple_2<int32_t, int32_t>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*, "<>9", ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(
      std::forward<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(value));
}
inline ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c* UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*, "<>9", ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::setStaticF___9__5_0(
    ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>*, "<>9__5_0",
                                    ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::getStaticF___9__5_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>*, "<>9__5_0",
                                           ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::setStaticF___9__5_1(
    ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>, bool>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>, bool>*, "<>9__5_1",
      ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(
      std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>, bool>*>(
          value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>, bool>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::getStaticF___9__5_1() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>, bool>*, "<>9__5_1",
      ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::setStaticF___9__5_2(
    ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>,
                     ::UnityEngine::ProBuilder::Edge>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>,
                       ::UnityEngine::ProBuilder::Edge>*,
      "<>9__5_2", ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(
      std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>,
                                    ::UnityEngine::ProBuilder::Edge>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>,
                        ::UnityEngine::ProBuilder::Edge>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::getStaticF___9__5_2() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>,
                       ::UnityEngine::ProBuilder::Edge>*,
      "<>9__5_2", ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::setStaticF___9__7_0(
    ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>, bool>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>, bool>*, "<>9__7_0",
      ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(
      std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>, bool>*>(
          value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>, bool>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::getStaticF___9__7_0() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>, bool>*, "<>9__7_0",
      ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::setStaticF___9__7_1(
    ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>,
                     ::UnityEngine::ProBuilder::Face*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>,
                       ::UnityEngine::ProBuilder::Face*>*,
      "<>9__7_1", ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(
      std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>,
                                    ::UnityEngine::ProBuilder::Face*>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>,
                        ::UnityEngine::ProBuilder::Face*>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::getStaticF___9__7_1() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>,
                       ::UnityEngine::ProBuilder::Face*>*,
      "<>9__7_1", ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::setStaticF___9__10_0(::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>*, "<>9__10_0",
                                    ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::getStaticF___9__10_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>*, "<>9__10_0",
                                           ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::setStaticF___9__11_0(::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>*, "<>9__11_0",
                                    ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::getStaticF___9__11_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>*, "<>9__11_0",
                                           ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::setStaticF___9__12_0(::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>*, "<>9__12_0",
                                    ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::getStaticF___9__12_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>*, "<>9__12_0",
                                           ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::setStaticF___9__13_0(::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>*, "<>9__13_0",
                                    ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::getStaticF___9__13_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>*, "<>9__13_0",
                                           ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::setStaticF___9__14_0(::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*, "<>9__14_0",
                                    ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::getStaticF___9__14_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*, "<>9__14_0",
                                           ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::setStaticF___9__15_0(::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*, "<>9__15_0",
                                    ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::getStaticF___9__15_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*, "<>9__15_0",
                                           ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::setStaticF___9__15_1(::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*, "<>9__15_1",
                                    ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::getStaticF___9__15_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*, "<>9__15_1",
                                           ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::setStaticF___9__26_0(::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*, "<>9__26_0",
                                    ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::getStaticF___9__26_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*, "<>9__26_0",
                                           ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::setStaticF___9__27_0(::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<int32_t, int32_t>>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<int32_t, int32_t>>*, "<>9__27_0", ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(
      std::forward<::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<int32_t, int32_t>>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<int32_t, int32_t>>* UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::getStaticF___9__27_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<int32_t, int32_t>>*, "<>9__27_0",
                                           ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetPerimeterEdges_b__5_0(::UnityEngine::ProBuilder::Face* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(),
                                                                                         { "<GetPerimeterEdges>b__5_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>(this, ___internal_method, x);
}
inline bool UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetPerimeterEdges_b__5_1(
    ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*> x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(),
          { "<GetPerimeterEdges>b__5_1",
            {},
            { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetPerimeterEdges_b__5_2(
    ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*> x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(),
          { "<GetPerimeterEdges>b__5_2",
            {},
            { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge>(this, ___internal_method, x);
}
inline bool UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetPerimeterFaces_b__7_0(
    ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*> x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(),
          { "<GetPerimeterFaces>b__7_0",
            {},
            { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetPerimeterFaces_b__7_1(
    ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*> x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(),
          { "<GetPerimeterFaces>b__7_1",
            {},
            { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face*>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetEdgeRing_b__10_0(::UnityEngine::ProBuilder::EdgeLookup x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(),
                                                                                         { "<GetEdgeRing>b__10_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::EdgeLookup>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetEdgeRingIterative_b__11_0(::UnityEngine::ProBuilder::EdgeLookup x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(),
                                                                                         { "<GetEdgeRingIterative>b__11_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::EdgeLookup>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetEdgeLoop_b__12_0(::UnityEngine::ProBuilder::EdgeLookup x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(),
                                                                                         { "<GetEdgeLoop>b__12_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::EdgeLookup>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetEdgeLoopIterative_b__13_0(::UnityEngine::ProBuilder::EdgeLookup x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(),
                                                                                         { "<GetEdgeLoopIterative>b__13_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::EdgeLookup>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetEdgeLoopInternal_b__14_0(::UnityEngine::ProBuilder::WingedEdge* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(),
                                                                                         { "<GetEdgeLoopInternal>b__14_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetEdgeLoopInternalIterative_b__15_0(::UnityEngine::ProBuilder::WingedEdge* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(),
                                                           { "<GetEdgeLoopInternalIterative>b__15_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetEdgeLoopInternalIterative_b__15_1(::UnityEngine::ProBuilder::WingedEdge* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(),
                                                           { "<GetEdgeLoopInternalIterative>b__15_1", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_FindHoles_b__26_0(::UnityEngine::ProBuilder::WingedEdge* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(),
                                                                                         { "<FindHoles>b__26_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge>(this, ___internal_method, x);
}
inline int32_t UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_FindHoles_b__27_0(::UnityEngine::ProBuilder::SimpleTuple_2<int32_t, int32_t> x,
                                                                                                 ::UnityEngine::ProBuilder::SimpleTuple_2<int32_t, int32_t> y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(),
                          { "<FindHoles>b__27_0",
                            {},
                            { ::i2c::type_of<::UnityEngine::ProBuilder::SimpleTuple_2<int32_t, int32_t>>(), ::i2c::type_of<::UnityEngine::ProBuilder::SimpleTuple_2<int32_t, int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c* UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::ElementSelection___c() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6725244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0._GetFaceLoop_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0::*)(::UnityEngine::ProBuilder::WingedEdge*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0::_GetFaceLoop_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6725248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0*>(),
                                                                                           { "<GetFaceLoop>b__0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ProBuilder::Face*& UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0::__cordl_internal_get_face() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___face;
}
constexpr ::UnityEngine::ProBuilder::Face* const& UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0::__cordl_internal_get_face() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___face;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0::__cordl_internal_set_face(::UnityEngine::ProBuilder::Face* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___face = value;
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0::_GetFaceLoop_b__0(::UnityEngine::ProBuilder::WingedEdge* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0*>(),
                                                                                         { "<GetFaceLoop>b__0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0* UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0::ElementSelection___c__DisplayClass25_0() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6725268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0._FindHoles_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0::*)(::UnityEngine::ProBuilder::WingedEdge*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0::_FindHoles_b__1)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x672526c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0*>(),
                                                                                           { "<FindHoles>b__1", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0._FindHoles_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0::*)(::UnityEngine::ProBuilder::WingedEdge*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0::_FindHoles_b__2)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x67252d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0*>(),
                                                                                           { "<FindHoles>b__2", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0::__cordl_internal_get_common() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___common;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0::__cordl_internal_get_common() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___common;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0::__cordl_internal_set_common(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___common = value;
}
constexpr ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, bool>*& UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0::__cordl_internal_get___9__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
constexpr ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, bool>* const& UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0::__cordl_internal_get___9__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0::__cordl_internal_set___9__1(::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____9__1 = value;
}
constexpr ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, bool>*& UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0::__cordl_internal_get___9__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__2;
}
constexpr ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, bool>* const& UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0::__cordl_internal_get___9__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__2;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0::__cordl_internal_set___9__2(::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____9__2 = value;
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0::_FindHoles_b__1(::UnityEngine::ProBuilder::WingedEdge* w) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0*>(),
                                                                                         { "<FindHoles>b__1", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, w);
}
inline bool UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0::_FindHoles_b__2(::UnityEngine::ProBuilder::WingedEdge* w) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0*>(),
                                                                                         { "<FindHoles>b__2", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, w);
}
inline ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0* UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0::ElementSelection___c__DisplayClass27_0() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetNeighborFaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*)>(
        &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetNeighborFaces)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x671f264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                                                             { "GetNeighborFaces",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Edge>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetNeighborFaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<
    ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Edge>>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetNeighborFaces)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x670c740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                                                { "GetNeighborFaces", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Edge>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetNeighborFaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<int32_t>)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetNeighborFaces)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x671f4d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                                                             { "GetNeighborFaces", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetConnectedEdges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Edge> (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<int32_t>)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetConnectedEdges)> {
  constexpr static std::size_t size = 0x670;
  constexpr static std::size_t addrs = 0x671f7b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                                                             { "GetConnectedEdges", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetPerimeterEdges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<
    ::UnityEngine::ProBuilder::Edge>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetPerimeterEdges)> {
  constexpr static std::size_t size = 0x67c;
  constexpr static std::size_t addrs = 0x671fe24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                            { "GetPerimeterEdges",
                              {},
                              { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetPerimeterEdges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetPerimeterEdges)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x67204a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                            { "GetPerimeterEdges",
                              {},
                              { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetPerimeterFaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<
    ::UnityEngine::ProBuilder::Face*>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetPerimeterFaces)> {
  constexpr static std::size_t size = 0x7bc;
  constexpr static std::size_t addrs = 0x672083c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                            { "GetPerimeterFaces",
                              {},
                              { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetPerimeterVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<int32_t>, ::ArrayW<::UnityEngine::ProBuilder::Edge>)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetPerimeterVertices)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x6720ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                            { "GetPerimeterVertices",
                              {},
                              { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::Edge>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.EdgeRingNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::WingedEdge* (*)(::UnityEngine::ProBuilder::WingedEdge*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::EdgeRingNext)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x672136c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                                                                                           { "EdgeRingNext", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetEdgeRing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<
    ::UnityEngine::ProBuilder::Edge>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetEdgeRing)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x67213ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                            { "GetEdgeRing",
                              {},
                              { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetEdgeRingIterative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<
    ::UnityEngine::ProBuilder::Edge>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetEdgeRingIterative)> {
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0x6721934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                            { "GetEdgeRingIterative",
                              {},
                              { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetEdgeLoop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*,
                                                                ::by_ref<::ArrayW<::UnityEngine::ProBuilder::Edge>>)>(&::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetEdgeLoop)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x6721e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                                                                                           { "GetEdgeLoop",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                                               ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>(),
                                                                                               ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::ProBuilder::Edge>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetEdgeLoopIterative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*,
                                                                ::by_ref<::ArrayW<::UnityEngine::ProBuilder::Edge>>)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetEdgeLoopIterative)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x67224f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                                                                                           { "GetEdgeLoopIterative",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                                               ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>(),
                                                                                               ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::ProBuilder::Edge>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetEdgeLoopInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ProBuilder::WingedEdge*, int32_t, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetEdgeLoopInternal)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x6722258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                                                             { "GetEdgeLoopInternal",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetEdgeLoopInternalIterative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>*)>(
        &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetEdgeLoopInternalIterative)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x6722840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                                                             { "GetEdgeLoopInternalIterative",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Edge>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.NextSpoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::WingedEdge* (*)(::UnityEngine::ProBuilder::WingedEdge*, int32_t, bool)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::NextSpoke)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6722f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                                                             { "NextSpoke", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetSpokes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* (*)(::UnityEngine::ProBuilder::WingedEdge*, int32_t, bool)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetSpokes)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x6722c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                                                             { "GetSpokes", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GrowSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<
    ::UnityEngine::ProBuilder::Face*>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, float_t)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GrowSelection)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x6723050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                                                             { "GrowSelection",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.Flood
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::WingedEdge*, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::Flood)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6723610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
            { "Flood", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.Flood
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::Vector3, float_t,
                                                                ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::Flood)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x6723690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                            { "Flood",
                              {},
                              { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.FloodSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<
    ::UnityEngine::ProBuilder::Face*>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*, float_t)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::FloodSelection)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x6723944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                                                             { "FloodSelection",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetFaceLoop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<::UnityEngine::ProBuilder::Face*>, bool)>(
        &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetFaceLoop)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x6723c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
            { "GetFaceLoop", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::Face*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetFaceRingAndLoop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<::UnityEngine::ProBuilder::Face*>)>(
        &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetFaceRingAndLoop)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x672405c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                            { "GetFaceRingAndLoop", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::Face*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetFaceLoop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* (*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*, ::UnityEngine::ProBuilder::Face*,
                                                                                     bool)>(&::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetFaceLoop)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x6723e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                                                                                           { "GetFaceLoop",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>(),
                                                                                               ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.FindHoles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<
    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::FindHoles)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x6724290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                            { "FindHoles", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.FindHoles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<
    ::UnityEngine::ProBuilder::WingedEdge*>*>* (*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*, ::System::Collections::Generic::HashSet_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::FindHoles)> {
  constexpr static std::size_t size = 0x898;
  constexpr static std::size_t addrs = 0x67245f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                                                                                           { "FindHoles",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>(),
                                                                                               ::i2c::type_of<::System::Collections::Generic::HashSet_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.FindNextEdgeInHole
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::WingedEdge* (*)(::UnityEngine::ProBuilder::WingedEdge*, int32_t)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::FindNextEdgeInHole)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6724e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                                                             { "FindNextEdgeInHole", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection::setStaticF_Vector3_Zero(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "Vector3_Zero", ::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 UnityEngine::ProBuilder::MeshOperations::ElementSelection::getStaticF_Vector3_Zero() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "Vector3_Zero", ::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetNeighborFaces(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge,
                                                                                        ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* neighborFaces) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                                                           { "GetNeighborFaces",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Edge>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, edge, neighborFaces);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Edge>>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetNeighborFaces(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                                              { "GetNeighborFaces", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Edge>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Edge>>*>(
      nullptr, ___internal_method, mesh, edge);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetNeighborFaces(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<int32_t> indexes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                                                           { "GetNeighborFaces", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>(nullptr, ___internal_method, mesh, indexes);
}
inline ::ArrayW<::UnityEngine::ProBuilder::Edge> UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetConnectedEdges(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                                              ::ArrayW<int32_t> indexes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                                                           { "GetConnectedEdges", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Edge>>(nullptr, ___internal_method, mesh, indexes);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetPerimeterEdges(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                             ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                          { "GetPerimeterEdges",
                            {},
                            { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>(nullptr, ___internal_method, mesh, faces);
}
inline ::ArrayW<int32_t> UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetPerimeterEdges(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                      ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>* edges) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
          { "GetPerimeterEdges", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(nullptr, ___internal_method, mesh, edges);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetPerimeterFaces(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                             ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                          { "GetPerimeterFaces",
                            {},
                            { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>(nullptr, ___internal_method, mesh, faces);
}
inline ::ArrayW<int32_t> UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetPerimeterVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<int32_t> indexes,
                                                                                                         ::ArrayW<::UnityEngine::ProBuilder::Edge> universal_edges_all) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                          { "GetPerimeterVertices",
                            {},
                            { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::Edge>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(nullptr, ___internal_method, mesh, indexes, universal_edges_all);
}
inline ::UnityEngine::ProBuilder::WingedEdge* UnityEngine::ProBuilder::MeshOperations::ElementSelection::EdgeRingNext(::UnityEngine::ProBuilder::WingedEdge* edge) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                                                                                         { "EdgeRingNext", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::WingedEdge*>(nullptr, ___internal_method, edge);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetEdgeRing(::UnityEngine::ProBuilder::ProBuilderMesh* pb,
                                                                       ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
          { "GetEdgeRing", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>(nullptr, ___internal_method, pb, edges);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetEdgeRingIterative(::UnityEngine::ProBuilder::ProBuilderMesh* pb,
                                                                                ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                          { "GetEdgeRingIterative",
                            {},
                            { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>(nullptr, ___internal_method, pb, edges);
}
inline bool UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetEdgeLoop(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                   ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges,
                                                                                   ::by_ref<::ArrayW<::UnityEngine::ProBuilder::Edge>> loop) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                                                                                         { "GetEdgeLoop",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>(),
                                                                                             ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::ProBuilder::Edge>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mesh, edges, loop);
}
inline bool UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetEdgeLoopIterative(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                            ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges,
                                                                                            ::by_ref<::ArrayW<::UnityEngine::ProBuilder::Edge>> loop) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                                                                                         { "GetEdgeLoopIterative",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>(),
                                                                                             ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::ProBuilder::Edge>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mesh, edges, loop);
}
inline bool UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetEdgeLoopInternal(::UnityEngine::ProBuilder::WingedEdge* start, int32_t startIndex,
                                                                                           ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>* used) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                                                                                         { "GetEdgeLoopInternal",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, start, startIndex, used);
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetEdgeLoopInternalIterative(::UnityEngine::ProBuilder::WingedEdge* start, ::UnityEngine::ProBuilder::Edge edge,
                                                                                                    ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>* used) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                                                           { "GetEdgeLoopInternalIterative",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Edge>(),
                                                               ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, start, edge, used);
}
inline ::UnityEngine::ProBuilder::WingedEdge* UnityEngine::ProBuilder::MeshOperations::ElementSelection::NextSpoke(::UnityEngine::ProBuilder::WingedEdge* wing, int32_t pivot, bool opp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                                                           { "NextSpoke", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::WingedEdge*>(nullptr, ___internal_method, wing, pivot, opp);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetSpokes(::UnityEngine::ProBuilder::WingedEdge* wing,
                                                                                                                                                            int32_t sharedIndex, bool allowHoles) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                                                           { "GetSpokes", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>(nullptr, ___internal_method, wing, sharedIndex, allowHoles);
}
inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection::GrowSelection(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                         ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, float_t maxAngleDiff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                                                           { "GrowSelection",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>(nullptr, ___internal_method, mesh, faces, maxAngleDiff);
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection::Flood(::UnityEngine::ProBuilder::WingedEdge* wing,
                                                                             ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* selection) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                       { "Flood", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, wing, selection);
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection::Flood(::UnityEngine::ProBuilder::ProBuilderMesh* pb, ::UnityEngine::ProBuilder::WingedEdge* wing, ::UnityEngine::Vector3 wingNrm,
                                                                             float_t maxAngle, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* selection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                          { "Flood",
                            {},
                            { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                              ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pb, wing, wingNrm, maxAngle, selection);
}
inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection::FloodSelection(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                          ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* faces, float_t maxAngleDiff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                                                           { "FloodSelection",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>(nullptr, ___internal_method, mesh, faces, maxAngleDiff);
}
inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetFaceLoop(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<::UnityEngine::ProBuilder::Face*> faces, bool ring) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                       { "GetFaceLoop", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::Face*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>(nullptr, ___internal_method, mesh, faces, ring);
}
inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetFaceRingAndLoop(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<::UnityEngine::ProBuilder::Face*> faces) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                                       { "GetFaceRingAndLoop", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::Face*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>(nullptr, ___internal_method, mesh, faces);
}
inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetFaceLoop(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* wings, ::UnityEngine::ProBuilder::Face* face,
                                                                       bool ring) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                                                                                         { "GetFaceLoop",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>(),
                                                                                             ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>(nullptr, ___internal_method, wings, face, ring);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection::FindHoles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<int32_t>* indexes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                          { "FindHoles", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>*>(nullptr, ___internal_method, mesh,
                                                                                                                                                                indexes);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection::FindHoles(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* wings,
                                                                     ::System::Collections::Generic::HashSet_1<int32_t>* common) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                                                                                         { "FindHoles",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::HashSet_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>*>(nullptr, ___internal_method,
                                                                                                                                                                       wings, common);
}
inline ::UnityEngine::ProBuilder::WingedEdge* UnityEngine::ProBuilder::MeshOperations::ElementSelection::FindNextEdgeInHole(::UnityEngine::ProBuilder::WingedEdge* wing, int32_t common) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>(),
                                                           { "FindNextEdgeInHole", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::WingedEdge*>(nullptr, ___internal_method, wing, common);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::ElementSelection::ElementSelection() {}
