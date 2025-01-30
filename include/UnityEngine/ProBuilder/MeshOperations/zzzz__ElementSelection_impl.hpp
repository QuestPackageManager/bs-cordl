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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4775ba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c._GetPerimeterEdges_b__5_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::*)(::UnityEngine::ProBuilder::Face*)>(
        &::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetPerimeterEdges_b__5_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x4775bac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get(), "<GetPerimeterEdges>b__5_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c._GetPerimeterEdges_b__5_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::*)(
    ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetPerimeterEdges_b__5_1)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x4775bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get(), "<GetPerimeterEdges>b__5_1",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c._GetPerimeterEdges_b__5_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Edge (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::*)(
    ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetPerimeterEdges_b__5_2)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x4775c1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get(), "<GetPerimeterEdges>b__5_2",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c._GetPerimeterFaces_b__7_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::*)(
    ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetPerimeterFaces_b__7_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x4775c7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get(), "<GetPerimeterFaces>b__7_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c._GetPerimeterFaces_b__7_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Face* (
    ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::*)(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge,
                                                                                                                       ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetPerimeterFaces_b__7_1)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x4775cd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get(), "<GetPerimeterFaces>b__7_1",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c._GetEdgeRing_b__10_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Edge (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::*)(
    ::UnityEngine::ProBuilder::EdgeLookup)>(&::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetEdgeRing_b__10_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4775d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get(), "<GetEdgeRing>b__10_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::EdgeLookup>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c._GetEdgeRingIterative_b__11_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Edge (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::*)(
    ::UnityEngine::ProBuilder::EdgeLookup)>(&::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetEdgeRingIterative_b__11_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4775d3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get(), "<GetEdgeRingIterative>b__11_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::EdgeLookup>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c._GetEdgeLoop_b__12_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Edge (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::*)(
    ::UnityEngine::ProBuilder::EdgeLookup)>(&::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetEdgeLoop_b__12_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4775d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get(), "<GetEdgeLoop>b__12_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::EdgeLookup>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c._GetEdgeLoopIterative_b__13_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Edge (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::*)(
    ::UnityEngine::ProBuilder::EdgeLookup)>(&::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetEdgeLoopIterative_b__13_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4775d4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get(), "<GetEdgeLoopIterative>b__13_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::EdgeLookup>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c._GetEdgeLoopInternal_b__14_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Edge (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::*)(
    ::UnityEngine::ProBuilder::WingedEdge*)>(&::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetEdgeLoopInternal_b__14_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x4775d54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get(), "<GetEdgeLoopInternal>b__14_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c._GetEdgeLoopInternalIterative_b__15_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Edge (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::*)(
    ::UnityEngine::ProBuilder::WingedEdge*)>(&::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetEdgeLoopInternalIterative_b__15_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x4775d6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get(), "<GetEdgeLoopInternalIterative>b__15_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c._GetEdgeLoopInternalIterative_b__15_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Edge (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::*)(
    ::UnityEngine::ProBuilder::WingedEdge*)>(&::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetEdgeLoopInternalIterative_b__15_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x4775d84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get(), "<GetEdgeLoopInternalIterative>b__15_1",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c._FindHoles_b__26_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Edge (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::*)(
    ::UnityEngine::ProBuilder::WingedEdge*)>(&::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_FindHoles_b__26_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x4775d9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get(), "<FindHoles>b__26_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c._FindHoles_b__27_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::*)(
    ::UnityEngine::ProBuilder::SimpleTuple_2<int32_t, int32_t>, ::UnityEngine::ProBuilder::SimpleTuple_2<int32_t, int32_t>)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_FindHoles_b__27_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x4775db4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get(), "<FindHoles>b__27_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::SimpleTuple_2<int32_t, int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::SimpleTuple_2<int32_t, int32_t>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get>(
      std::forward<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>(value));
}
inline ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c* UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::setStaticF___9__5_0(
    ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>*, "<>9__5_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::getStaticF___9__5_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>*, "<>9__5_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::setStaticF___9__5_1(
    ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>, bool>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>, bool>*, "<>9__5_1",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get>(
      std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>, bool>*>(
          value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>, bool>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::getStaticF___9__5_1() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>, bool>*, "<>9__5_1",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::setStaticF___9__5_2(
    ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>,
                     ::UnityEngine::ProBuilder::Edge>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>,
                       ::UnityEngine::ProBuilder::Edge>*,
      "<>9__5_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get>(
      std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>,
                                    ::UnityEngine::ProBuilder::Edge>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>,
                        ::UnityEngine::ProBuilder::Edge>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::getStaticF___9__5_2() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>,
                       ::UnityEngine::ProBuilder::Edge>*,
      "<>9__5_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::setStaticF___9__7_0(
    ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>, bool>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>, bool>*, "<>9__7_0",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get>(
      std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>, bool>*>(
          value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>, bool>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::getStaticF___9__7_0() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>, bool>*, "<>9__7_0",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::setStaticF___9__7_1(
    ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>,
                     ::UnityEngine::ProBuilder::Face*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>,
                       ::UnityEngine::ProBuilder::Face*>*,
      "<>9__7_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get>(
      std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>,
                                    ::UnityEngine::ProBuilder::Face*>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>,
                        ::UnityEngine::ProBuilder::Face*>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::getStaticF___9__7_1() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>,
                       ::UnityEngine::ProBuilder::Face*>*,
      "<>9__7_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::setStaticF___9__10_0(::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>*, "<>9__10_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::getStaticF___9__10_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>*, "<>9__10_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::setStaticF___9__11_0(::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>*, "<>9__11_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::getStaticF___9__11_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>*, "<>9__11_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::setStaticF___9__12_0(::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>*, "<>9__12_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::getStaticF___9__12_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>*, "<>9__12_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::setStaticF___9__13_0(::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>*, "<>9__13_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::getStaticF___9__13_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>*, "<>9__13_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::setStaticF___9__14_0(::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*, "<>9__14_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::getStaticF___9__14_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*, "<>9__14_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::setStaticF___9__15_0(::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*, "<>9__15_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::getStaticF___9__15_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*, "<>9__15_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::setStaticF___9__15_1(::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*, "<>9__15_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::getStaticF___9__15_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*, "<>9__15_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::setStaticF___9__26_0(::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*, "<>9__26_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::getStaticF___9__26_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*, "<>9__26_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::setStaticF___9__27_0(::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<int32_t, int32_t>>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<int32_t, int32_t>>*, "<>9__27_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get>(
      std::forward<::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<int32_t, int32_t>>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<int32_t, int32_t>>* UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::getStaticF___9__27_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<int32_t, int32_t>>*, "<>9__27_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetPerimeterEdges_b__5_0(::UnityEngine::ProBuilder::Face* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get(), "<GetPerimeterEdges>b__5_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, false>(this, ___internal_method, x);
}
inline bool UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetPerimeterEdges_b__5_1(
    ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*> x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get(), "<GetPerimeterEdges>b__5_1",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetPerimeterEdges_b__5_2(
    ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*> x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get(), "<GetPerimeterEdges>b__5_2",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge, false>(this, ___internal_method, x);
}
inline bool UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetPerimeterFaces_b__7_0(
    ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*> x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get(), "<GetPerimeterFaces>b__7_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetPerimeterFaces_b__7_1(
    ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*> x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get(), "<GetPerimeterFaces>b__7_1",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face*, false>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetEdgeRing_b__10_0(::UnityEngine::ProBuilder::EdgeLookup x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get(), "<GetEdgeRing>b__10_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::EdgeLookup>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge, false>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetEdgeRingIterative_b__11_0(::UnityEngine::ProBuilder::EdgeLookup x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get(), "<GetEdgeRingIterative>b__11_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::EdgeLookup>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge, false>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetEdgeLoop_b__12_0(::UnityEngine::ProBuilder::EdgeLookup x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get(), "<GetEdgeLoop>b__12_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::EdgeLookup>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge, false>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetEdgeLoopIterative_b__13_0(::UnityEngine::ProBuilder::EdgeLookup x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get(), "<GetEdgeLoopIterative>b__13_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::EdgeLookup>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge, false>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetEdgeLoopInternal_b__14_0(::UnityEngine::ProBuilder::WingedEdge* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get(), "<GetEdgeLoopInternal>b__14_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge, false>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetEdgeLoopInternalIterative_b__15_0(::UnityEngine::ProBuilder::WingedEdge* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get(), "<GetEdgeLoopInternalIterative>b__15_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge, false>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_GetEdgeLoopInternalIterative_b__15_1(::UnityEngine::ProBuilder::WingedEdge* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get(), "<GetEdgeLoopInternalIterative>b__15_1",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge, false>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_FindHoles_b__26_0(::UnityEngine::ProBuilder::WingedEdge* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get(), "<FindHoles>b__26_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge, false>(this, ___internal_method, x);
}
inline int32_t UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::_FindHoles_b__27_0(::UnityEngine::ProBuilder::SimpleTuple_2<int32_t, int32_t> x,
                                                                                                 ::UnityEngine::ProBuilder::SimpleTuple_2<int32_t, int32_t> y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>::get(), "<FindHoles>b__27_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::SimpleTuple_2<int32_t, int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::SimpleTuple_2<int32_t, int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x, y);
}
inline ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c* UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c::ElementSelection___c() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4775e0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0._GetFaceLoop_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0::*)(
    ::UnityEngine::ProBuilder::WingedEdge*)>(&::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0::_GetFaceLoop_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4775e14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0*>::get(), "<GetFaceLoop>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___face)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0::_GetFaceLoop_b__0(::UnityEngine::ProBuilder::WingedEdge* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0*>::get(), "<GetFaceLoop>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0* UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass25_0::ElementSelection___c__DisplayClass25_0() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4775e38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0._FindHoles_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0::*)(
    ::UnityEngine::ProBuilder::WingedEdge*)>(&::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0::_FindHoles_b__1)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4775e40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0*>::get(), "<FindHoles>b__1",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0._FindHoles_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0::*)(
    ::UnityEngine::ProBuilder::WingedEdge*)>(&::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0::_FindHoles_b__2)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4775e9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0*>::get(), "<FindHoles>b__2",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___common)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0::_FindHoles_b__1(::UnityEngine::ProBuilder::WingedEdge* w) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0*>::get(), "<FindHoles>b__1",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, w);
}
inline bool UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0::_FindHoles_b__2(::UnityEngine::ProBuilder::WingedEdge* w) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0*>::get(), "<FindHoles>b__2",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, w);
}
inline ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0* UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::ElementSelection___c__DisplayClass27_0::ElementSelection___c__DisplayClass27_0() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetNeighborFaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*)>(
        &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetNeighborFaces)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x4770374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GetNeighborFaces", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Edge>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetNeighborFaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<
    ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Edge>>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetNeighborFaces)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x475e1d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GetNeighborFaces", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Edge>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetNeighborFaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<int32_t, ::Array<int32_t>*>)>(
        &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetNeighborFaces)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x47705f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GetNeighborFaces", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetConnectedEdges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> (*)(
    ::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<int32_t, ::Array<int32_t>*>)>(&::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetConnectedEdges)> {
  constexpr static std::size_t size = 0x680;
  constexpr static std::size_t addrs = 0x47708ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GetConnectedEdges", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetPerimeterEdges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<
    ::UnityEngine::ProBuilder::Edge>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetPerimeterEdges)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0x4770f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GetPerimeterEdges", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetPerimeterEdges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>*)>(
        &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetPerimeterEdges)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x477152c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GetPerimeterEdges", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetPerimeterFaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<
    ::UnityEngine::ProBuilder::Face*>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetPerimeterFaces)> {
  constexpr static std::size_t size = 0x79c;
  constexpr static std::size_t addrs = 0x47718b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GetPerimeterFaces", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetPerimeterVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (*)(
    ::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<int32_t, ::Array<int32_t>*>, ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetPerimeterVertices)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x477204c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GetPerimeterVertices", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.EdgeRingNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::WingedEdge* (*)(::UnityEngine::ProBuilder::WingedEdge*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::EdgeRingNext)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4772398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "EdgeRingNext", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetEdgeRing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<
    ::UnityEngine::ProBuilder::Edge>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetEdgeRing)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x477241c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GetEdgeRing", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetEdgeRingIterative
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<
    ::UnityEngine::ProBuilder::Edge>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetEdgeRingIterative)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x47728a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GetEdgeRingIterative", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetEdgeLoop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*,
                         ::ByRef<::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>>)>(&::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetEdgeLoop)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x4772d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GetEdgeLoop", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetEdgeLoopIterative
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*,
    ::ByRef<::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>>)>(&::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetEdgeLoopIterative)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x47732dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GetEdgeLoopIterative", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetEdgeLoopInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::ProBuilder::WingedEdge*, int32_t, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>*)>(
        &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetEdgeLoopInternal)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x47730b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GetEdgeLoopInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetEdgeLoopInternalIterative
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>*)>(
        &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetEdgeLoopInternalIterative)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x47735cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GetEdgeLoopInternalIterative",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Edge>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.NextSpoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::WingedEdge* (*)(::UnityEngine::ProBuilder::WingedEdge*, int32_t, bool)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::NextSpoke)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x4773c58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "NextSpoke", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetSpokes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* (*)(::UnityEngine::ProBuilder::WingedEdge*, int32_t, bool)>(
        &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetSpokes)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x477394c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GetSpokes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GrowSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<
    ::UnityEngine::ProBuilder::Face*>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, float_t)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GrowSelection)> {
  constexpr static std::size_t size = 0x5a4;
  constexpr static std::size_t addrs = 0x4773d38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GrowSelection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.Flood
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::ProBuilder::WingedEdge*, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*)>(&::UnityEngine::ProBuilder::MeshOperations::ElementSelection::Flood)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x47742dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "Flood", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.Flood
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::Vector3,
                                                                                           float_t, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::Flood)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x4774358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "Flood", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.FloodSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<
    ::UnityEngine::ProBuilder::Face*>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*, float_t)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::FloodSelection)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x4774600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "FloodSelection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetFaceLoop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<
    ::UnityEngine::ProBuilder::Face*>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>, bool)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetFaceLoop)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x47748ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GetFaceLoop", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetFaceRingAndLoop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<
    ::UnityEngine::ProBuilder::Face*>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetFaceRingAndLoop)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x4774c84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GetFaceRingAndLoop", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetFaceLoop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* (*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*, ::UnityEngine::ProBuilder::Face*,
                                                                                     bool)>(&::UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetFaceLoop)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x4774ab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GetFaceLoop", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.FindHoles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<
    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::FindHoles)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x4774ea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "FindHoles", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.FindHoles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<
    ::UnityEngine::ProBuilder::WingedEdge*>*>* (*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*, ::System::Collections::Generic::HashSet_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::FindHoles)> {
  constexpr static std::size_t size = 0x840;
  constexpr static std::size_t addrs = 0x477523c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "FindHoles", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ElementSelection.FindNextEdgeInHole
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::WingedEdge* (*)(::UnityEngine::ProBuilder::WingedEdge*, int32_t)>(
    &::UnityEngine::ProBuilder::MeshOperations::ElementSelection::FindNextEdgeInHole)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x4775a7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "FindNextEdgeInHole", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection::setStaticF_Vector3_Zero(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "Vector3_Zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get>(
      std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 UnityEngine::ProBuilder::MeshOperations::ElementSelection::getStaticF_Vector3_Zero() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "Vector3_Zero",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetNeighborFaces(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge,
                                                                                        ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* neighborFaces) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GetNeighborFaces", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Edge>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh, edge, neighborFaces);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Edge>>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetNeighborFaces(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GetNeighborFaces", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Edge>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Edge>>*,
                                             false>(nullptr, ___internal_method, mesh, edge);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetNeighborFaces(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<int32_t, ::Array<int32_t>*> indexes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GetNeighborFaces", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*, false>(nullptr, ___internal_method, mesh, indexes);
}
inline ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>
UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetConnectedEdges(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<int32_t, ::Array<int32_t>*> indexes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GetConnectedEdges", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>, false>(nullptr, ___internal_method, mesh, indexes);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetPerimeterEdges(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                             ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GetPerimeterEdges", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, false>(nullptr, ___internal_method, mesh, faces);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*>
UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetPerimeterEdges(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                             ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>* edges) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GetPerimeterEdges", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(nullptr, ___internal_method, mesh, edges);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetPerimeterFaces(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                             ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GetPerimeterFaces", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, false>(nullptr, ___internal_method, mesh, faces);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*>
UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetPerimeterVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<int32_t, ::Array<int32_t>*> indexes,
                                                                                ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> universal_edges_all) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GetPerimeterVertices", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(nullptr, ___internal_method, mesh, indexes, universal_edges_all);
}
inline ::UnityEngine::ProBuilder::WingedEdge* UnityEngine::ProBuilder::MeshOperations::ElementSelection::EdgeRingNext(::UnityEngine::ProBuilder::WingedEdge* edge) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "EdgeRingNext", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::WingedEdge*, false>(nullptr, ___internal_method, edge);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetEdgeRing(::UnityEngine::ProBuilder::ProBuilderMesh* pb,
                                                                       ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GetEdgeRing", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, false>(nullptr, ___internal_method, pb, edges);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetEdgeRingIterative(::UnityEngine::ProBuilder::ProBuilderMesh* pb,
                                                                                ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GetEdgeRingIterative", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, false>(nullptr, ___internal_method, pb, edges);
}
inline bool UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetEdgeLoop(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                   ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges,
                                                                                   ::ByRef<::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>> loop) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GetEdgeLoop", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mesh, edges, loop);
}
inline bool UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetEdgeLoopIterative(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                            ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges,
                                                                                            ::ByRef<::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>> loop) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GetEdgeLoopIterative", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mesh, edges, loop);
}
inline bool UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetEdgeLoopInternal(::UnityEngine::ProBuilder::WingedEdge* start, int32_t startIndex,
                                                                                           ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>* used) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GetEdgeLoopInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, start, startIndex, used);
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetEdgeLoopInternalIterative(::UnityEngine::ProBuilder::WingedEdge* start, ::UnityEngine::ProBuilder::Edge edge,
                                                                                                    ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>* used) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GetEdgeLoopInternalIterative",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Edge>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, start, edge, used);
}
inline ::UnityEngine::ProBuilder::WingedEdge* UnityEngine::ProBuilder::MeshOperations::ElementSelection::NextSpoke(::UnityEngine::ProBuilder::WingedEdge* wing, int32_t pivot, bool opp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "NextSpoke", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::WingedEdge*, false>(nullptr, ___internal_method, wing, pivot, opp);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetSpokes(::UnityEngine::ProBuilder::WingedEdge* wing,
                                                                                                                                                            int32_t sharedIndex, bool allowHoles) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GetSpokes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*, false>(nullptr, ___internal_method, wing, sharedIndex, allowHoles);
}
inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection::GrowSelection(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                         ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, float_t maxAngleDiff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GrowSelection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*, false>(nullptr, ___internal_method, mesh, faces, maxAngleDiff);
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection::Flood(::UnityEngine::ProBuilder::WingedEdge* wing,
                                                                             ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* selection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "Flood", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, wing, selection);
}
inline void UnityEngine::ProBuilder::MeshOperations::ElementSelection::Flood(::UnityEngine::ProBuilder::ProBuilderMesh* pb, ::UnityEngine::ProBuilder::WingedEdge* wing, ::UnityEngine::Vector3 wingNrm,
                                                                             float_t maxAngle, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* selection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "Flood", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pb, wing, wingNrm, maxAngle, selection);
}
inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection::FloodSelection(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                          ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* faces, float_t maxAngleDiff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "FloodSelection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*, false>(nullptr, ___internal_method, mesh, faces, maxAngleDiff);
}
inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetFaceLoop(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                       ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> faces, bool ring) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GetFaceLoop", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*, false>(nullptr, ___internal_method, mesh, faces, ring);
}
inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetFaceRingAndLoop(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                              ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> faces) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GetFaceRingAndLoop", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*, false>(nullptr, ___internal_method, mesh, faces);
}
inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetFaceLoop(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* wings, ::UnityEngine::ProBuilder::Face* face,
                                                                       bool ring) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "GetFaceLoop", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*, false>(nullptr, ___internal_method, wings, face, ring);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection::FindHoles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<int32_t>* indexes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "FindHoles", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>*, false>(nullptr, ___internal_method,
                                                                                                                                                                       mesh, indexes);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>*
UnityEngine::ProBuilder::MeshOperations::ElementSelection::FindHoles(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* wings,
                                                                     ::System::Collections::Generic::HashSet_1<int32_t>* common) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "FindHoles", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>*, false>(
      nullptr, ___internal_method, wings, common);
}
inline ::UnityEngine::ProBuilder::WingedEdge* UnityEngine::ProBuilder::MeshOperations::ElementSelection::FindNextEdgeInHole(::UnityEngine::ProBuilder::WingedEdge* wing, int32_t common) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ElementSelection*>::get(), "FindNextEdgeInHole", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::WingedEdge*, false>(nullptr, ___internal_method, wing, common);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::ElementSelection::ElementSelection() {}
