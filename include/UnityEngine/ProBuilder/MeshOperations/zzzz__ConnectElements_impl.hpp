#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/MeshOperations/ConnectElements.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__ConnectElements_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__ConnectElements_def.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__ConnectFaceRebuildData_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ActionResult_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__EdgeLookup_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__FaceRebuildData_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__SimpleTuple_2_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Vertex_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__WingedEdge_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x671e30c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c._Connect_b__0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* (
    ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::*)(::UnityEngine::ProBuilder::Face*)>(&::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::_Connect_b__0_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x671e310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(),
                                                                                           { "<Connect>b__0_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c._Connect_b__2_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::*)(::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::_Connect_b__2_1)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x671e330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(),
                                                                                           { "<Connect>b__2_1", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c._Connect_b__2_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ProBuilder::FaceRebuildData* (::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::*)(::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*)>(
        &::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::_Connect_b__2_2)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x671e344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(),
                                                             { "<Connect>b__2_2", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c._Connect_b__3_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::*)(::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::_Connect_b__3_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x671e358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(),
                                                                                           { "<Connect>b__3_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c._Connect_b__3_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ProBuilder::FaceRebuildData* (::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::*)(::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*)>(
        &::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::_Connect_b__3_1)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x671e36c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(),
                                                             { "<Connect>b__3_1", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c._Connect_b__3_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* (
    ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::*)(::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::_Connect_b__3_2)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x671e380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(),
                                                             { "<Connect>b__3_2", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c._Connect_b__3_4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Edge (::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::*)(::UnityEngine::ProBuilder::EdgeLookup)>(
    &::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::_Connect_b__3_4)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x671e3b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(),
                                                                                           { "<Connect>b__3_4", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::EdgeLookup>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c._ConnectEdgesInFace_b__5_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* (
    ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::*)(int32_t)>(&::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::_ConnectEdgesInFace_b__5_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x671e3c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(), { "<ConnectEdgesInFace>b__5_0", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c._ConnectEdgesInFace_b__5_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<int32_t>* (::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::*)(int32_t)>(
    &::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::_ConnectEdgesInFace_b__5_1)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x671e430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(), { "<ConnectEdgesInFace>b__5_1", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c._ConnectEdgesInFace_b__5_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Edge (::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::*)(::UnityEngine::ProBuilder::WingedEdge*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::_ConnectEdgesInFace_b__5_2)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x671e4a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(),
                                                                                           { "<ConnectEdgesInFace>b__5_2", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c._InsertVertices_b__6_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Edge (::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::*)(::UnityEngine::ProBuilder::WingedEdge*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::_InsertVertices_b__6_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x671e4b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(),
                                                                                           { "<InsertVertices>b__6_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c._ConnectIndexesPerFace_b__8_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* (
    ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::*)(int32_t)>(&::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::_ConnectIndexesPerFace_b__8_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x671e4c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(), { "<ConnectIndexesPerFace>b__8_0", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c._ConnectIndexesPerFace_b__8_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<int32_t>* (::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::*)(int32_t)>(
    &::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::_ConnectIndexesPerFace_b__8_1)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x671e538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(), { "<ConnectIndexesPerFace>b__8_1", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c._ConnectIndexesPerFace_b__8_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<int32_t>* (::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::*)(int32_t)>(
    &::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::_ConnectIndexesPerFace_b__8_2)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x671e5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(), { "<ConnectIndexesPerFace>b__8_2", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*, "<>9", ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(
      std::forward<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(value));
}
inline ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c* UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*, "<>9", ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::setStaticF___9__0_0(
    ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>*, "<>9__0_0",
                                    ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>*
UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::getStaticF___9__0_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>*, "<>9__0_0",
                                           ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::setStaticF___9__2_1(::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*, "<>9__2_1", ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::getStaticF___9__2_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*, "<>9__2_1", ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::setStaticF___9__2_2(
    ::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::UnityEngine::ProBuilder::FaceRebuildData*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::UnityEngine::ProBuilder::FaceRebuildData*>*, "<>9__2_2",
                                    ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::UnityEngine::ProBuilder::FaceRebuildData*>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::UnityEngine::ProBuilder::FaceRebuildData*>*
UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::getStaticF___9__2_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::UnityEngine::ProBuilder::FaceRebuildData*>*, "<>9__2_2",
                                           ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::setStaticF___9__3_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*, "<>9__3_0", ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*, "<>9__3_0", ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::setStaticF___9__3_1(
    ::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::UnityEngine::ProBuilder::FaceRebuildData*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::UnityEngine::ProBuilder::FaceRebuildData*>*, "<>9__3_1",
                                    ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::UnityEngine::ProBuilder::FaceRebuildData*>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::UnityEngine::ProBuilder::FaceRebuildData*>*
UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::getStaticF___9__3_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::UnityEngine::ProBuilder::FaceRebuildData*>*, "<>9__3_1",
                                           ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::setStaticF___9__3_2(
    ::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>*, "<>9__3_2",
      ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>*
UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::getStaticF___9__3_2() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>*, "<>9__3_2",
      ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::setStaticF___9__3_4(::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>*, "<>9__3_4",
                                    ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::getStaticF___9__3_4() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>*, "<>9__3_4",
                                           ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>();
}
inline void
UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::setStaticF___9__5_0(::System::Func_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>*, "<>9__5_0",
                                    ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(
      std::forward<::System::Func_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>*>(value));
}
inline ::System::Func_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>* UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::getStaticF___9__5_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>*, "<>9__5_0",
                                           ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::setStaticF___9__5_1(::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>*, "<>9__5_1", ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(
      std::forward<::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>*>(value));
}
inline ::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>* UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::getStaticF___9__5_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>*, "<>9__5_1", ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::setStaticF___9__5_2(::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*, "<>9__5_2",
                                    ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::getStaticF___9__5_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*, "<>9__5_2",
                                           ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::setStaticF___9__6_0(::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*, "<>9__6_0",
                                    ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::getStaticF___9__6_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*, "<>9__6_0",
                                           ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>();
}
inline void
UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::setStaticF___9__8_0(::System::Func_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>*, "<>9__8_0",
                                    ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(
      std::forward<::System::Func_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>*>(value));
}
inline ::System::Func_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>* UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::getStaticF___9__8_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>*, "<>9__8_0",
                                           ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::setStaticF___9__8_1(::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>*, "<>9__8_1", ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(
      std::forward<::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>*>(value));
}
inline ::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>* UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::getStaticF___9__8_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>*, "<>9__8_1", ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::setStaticF___9__8_2(::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>*, "<>9__8_2", ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(
      std::forward<::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>*>(value));
}
inline ::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>* UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::getStaticF___9__8_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>*, "<>9__8_2", ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*
UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::_Connect_b__0_0(::UnityEngine::ProBuilder::Face* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(),
                                                                                         { "<Connect>b__0_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>(this, ___internal_method, x);
}
inline int32_t UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::_Connect_b__2_1(::UnityEngine::ProBuilder::Face* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(),
                                                                                         { "<Connect>b__2_1", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::FaceRebuildData* UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::_Connect_b__2_2(::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(),
                                                           { "<Connect>b__2_2", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::FaceRebuildData*>(this, ___internal_method, x);
}
inline int32_t UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::_Connect_b__3_0(::UnityEngine::ProBuilder::Face* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(),
                                                                                         { "<Connect>b__3_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::FaceRebuildData* UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::_Connect_b__3_1(::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(),
                                                           { "<Connect>b__3_1", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::FaceRebuildData*>(this, ___internal_method, x);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*
UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::_Connect_b__3_2(::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(),
                                                           { "<Connect>b__3_2", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::_Connect_b__3_4(::UnityEngine::ProBuilder::EdgeLookup x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(),
                                                                                         { "<Connect>b__3_4", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::EdgeLookup>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge>(this, ___internal_method, x);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::_ConnectEdgesInFace_b__5_0(int32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(), { "<ConnectEdgesInFace>b__5_0", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>(this, ___internal_method, x);
}
inline ::System::Collections::Generic::List_1<int32_t>* UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::_ConnectEdgesInFace_b__5_1(int32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(), { "<ConnectEdgesInFace>b__5_1", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>*>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::_ConnectEdgesInFace_b__5_2(::UnityEngine::ProBuilder::WingedEdge* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(),
                                                                                         { "<ConnectEdgesInFace>b__5_2", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::_InsertVertices_b__6_0(::UnityEngine::ProBuilder::WingedEdge* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(),
                                                                                         { "<InsertVertices>b__6_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge>(this, ___internal_method, x);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::_ConnectIndexesPerFace_b__8_0(int32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(), { "<ConnectIndexesPerFace>b__8_0", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>(this, ___internal_method, x);
}
inline ::System::Collections::Generic::List_1<int32_t>* UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::_ConnectIndexesPerFace_b__8_1(int32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(), { "<ConnectIndexesPerFace>b__8_1", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>*>(this, ___internal_method, x);
}
inline ::System::Collections::Generic::List_1<int32_t>* UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::_ConnectIndexesPerFace_b__8_2(int32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>(), { "<ConnectIndexesPerFace>b__8_2", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>*>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c* UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c::ConnectElements___c() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass2_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass2_0::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x671b7dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass2_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass2_0._Connect_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass2_0::*)(int32_t)>(
    &::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass2_0::_Connect_b__0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x671e618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass2_0*>(), { "<Connect>b__0", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass2_0._Connect_b__3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass2_0::*)(int32_t)>(
    &::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass2_0::_Connect_b__3)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x671e67c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass2_0*>(), { "<Connect>b__3", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass2_0::__cordl_internal_get_lookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* const& UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass2_0::__cordl_internal_get_lookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookup;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass2_0::__cordl_internal_set_lookup(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lookup = value;
}
constexpr ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>& UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass2_0::__cordl_internal_get_mesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mesh;
}
constexpr ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> const& UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass2_0::__cordl_internal_get_mesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mesh;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass2_0::__cordl_internal_set_mesh(::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mesh = value;
}
inline void UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass2_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass2_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass2_0::_Connect_b__0(int32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass2_0*>(), { "<Connect>b__0", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline int32_t UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass2_0::_Connect_b__3(int32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass2_0*>(), { "<Connect>b__3", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass2_0* UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass2_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass2_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass2_0::ConnectElements___c__DisplayClass2_0() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass3_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass3_0::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x671e2b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass3_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass3_0._Connect_b__3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass3_0::*)(::UnityEngine::ProBuilder::Edge)>(
    &::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass3_0::_Connect_b__3)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x671e6c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass3_0*>(),
                                                                                           { "<Connect>b__3", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Edge>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass3_0::__cordl_internal_get_appended() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___appended;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass3_0::__cordl_internal_get_appended() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___appended;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass3_0::__cordl_internal_set_appended(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___appended = value;
}
inline void UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass3_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass3_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass3_0::_Connect_b__3(::UnityEngine::ProBuilder::Edge x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass3_0*>(),
                                                                                         { "<Connect>b__3", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Edge>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass3_0* UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass3_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::ConnectElements___c__DisplayClass3_0::ConnectElements___c__DisplayClass3_0() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements.Connect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::ArrayW<::UnityEngine::ProBuilder::Face*> (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*)>(
        &::UnityEngine::ProBuilder::MeshOperations::ConnectElements::Connect)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x6718b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements*>(),
            { "Connect", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements.Connect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::SimpleTuple_2<::ArrayW<::UnityEngine::ProBuilder::Face*>, ::ArrayW<::UnityEngine::ProBuilder::Edge>> (*)(
    ::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ConnectElements::Connect)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x671a6b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements*>(),
            { "Connect", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements.Connect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ConnectElements::Connect)> {
  constexpr static std::size_t size = 0x10a8;
  constexpr static std::size_t addrs = 0x671a734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements*>(),
                                         { "Connect", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements.Connect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::UnityEngine::ProBuilder::ActionResult* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*,
                                                 ::by_ref<::ArrayW<::UnityEngine::ProBuilder::Face*>>, ::by_ref<::ArrayW<::UnityEngine::ProBuilder::Edge>>, bool, bool,
                                                 ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*)>(&::UnityEngine::ProBuilder::MeshOperations::ConnectElements::Connect)> {
  constexpr static std::size_t size = 0x1880;
  constexpr static std::size_t addrs = 0x6718e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements*>(),
                            { "Connect",
                              {},
                              { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>(),
                                ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::ProBuilder::Face*>>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::ProBuilder::Edge>>>(), ::i2c::type_of<bool>(),
                                ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements.ConnectEdgesInFace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<
    ::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>* (*)(::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::WingedEdge*,
                                                                             ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectEdgesInFace)> {
  constexpr static std::size_t size = 0x7ec;
  constexpr static std::size_t addrs = 0x671dac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements*>(),
                            { "ConnectEdgesInFace",
                              {},
                              { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(), ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>(), ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>(),
                                ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements.ConnectEdgesInFace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<
    ::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>* (*)(::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*,
                                                                             ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectEdgesInFace)> {
  constexpr static std::size_t size = 0xa0c;
  constexpr static std::size_t addrs = 0x671d0bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements*>(),
                                         { "ConnectEdgesInFace",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>(),
                                             ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements.InsertVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(
    ::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*,
    ::by_ref<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>)>(&::UnityEngine::ProBuilder::MeshOperations::ConnectElements::InsertVertices)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x671cb1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements*>(),
                                         { "InsertVertices",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>(),
                                             ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements.ConnectIndexesPerFace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>* (*)(::UnityEngine::ProBuilder::Face*, int32_t, int32_t,
                                                                                                                    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*,
                                                                                                                    ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectIndexesPerFace)> {
  constexpr static std::size_t size = 0x8e0;
  constexpr static std::size_t addrs = 0x671c23c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements*>(),
                                                                                           { "ConnectIndexesPerFace",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>(),
                                                                                               ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements.ConnectIndexesPerFace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>* (*)(::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::List_1<int32_t>*,
                                                                                                                    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*,
                                                                                                                    ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*, int32_t)>(
    &::UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectIndexesPerFace)> {
  constexpr static std::size_t size = 0xa5c;
  constexpr static std::size_t addrs = 0x671b7e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements*>(),
                                                             { "ConnectIndexesPerFace",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline ::ArrayW<::UnityEngine::ProBuilder::Face*>
UnityEngine::ProBuilder::MeshOperations::ConnectElements::Connect(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements*>(),
          { "Connect", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Face*>>(nullptr, ___internal_method, mesh, faces);
}
inline ::UnityEngine::ProBuilder::SimpleTuple_2<::ArrayW<::UnityEngine::ProBuilder::Face*>, ::ArrayW<::UnityEngine::ProBuilder::Edge>>
UnityEngine::ProBuilder::MeshOperations::ConnectElements::Connect(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements*>(),
          { "Connect", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::SimpleTuple_2<::ArrayW<::UnityEngine::ProBuilder::Face*>, ::ArrayW<::UnityEngine::ProBuilder::Edge>>>(
      nullptr, ___internal_method, mesh, edges);
}
inline ::ArrayW<int32_t> UnityEngine::ProBuilder::MeshOperations::ConnectElements::Connect(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<int32_t>* indexes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements*>(),
                                       { "Connect", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(nullptr, ___internal_method, mesh, indexes);
}
inline ::UnityEngine::ProBuilder::ActionResult*
UnityEngine::ProBuilder::MeshOperations::ConnectElements::Connect(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges,
                                                                  ::by_ref<::ArrayW<::UnityEngine::ProBuilder::Face*>> addedFaces, ::by_ref<::ArrayW<::UnityEngine::ProBuilder::Edge>> connections,
                                                                  bool returnFaces, bool returnEdges, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* faceMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements*>(),
                          { "Connect",
                            {},
                            { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>(),
                              ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::ProBuilder::Face*>>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::ProBuilder::Edge>>>(), ::i2c::type_of<bool>(),
                              ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ActionResult*>(nullptr, ___internal_method, mesh, edges, addedFaces, connections, returnFaces, returnEdges, faceMask);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>*
UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectEdgesInFace(::UnityEngine::ProBuilder::Face* face, ::UnityEngine::ProBuilder::WingedEdge* a, ::UnityEngine::ProBuilder::WingedEdge* b,
                                                                             ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements*>(),
                          { "ConnectEdgesInFace",
                            {},
                            { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(), ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>(), ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>(),
                              ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>*>(nullptr, ___internal_method, face, a, b,
                                                                                                                                                          vertices);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>*
UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectEdgesInFace(::UnityEngine::ProBuilder::Face* face,
                                                                             ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* edges,
                                                                             ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements*>(),
                                              { "ConnectEdgesInFace",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>(),
                                                  ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>*>(nullptr, ___internal_method, face, edges,
                                                                                                                                                          vertices);
}
inline bool UnityEngine::ProBuilder::MeshOperations::ConnectElements::InsertVertices(::UnityEngine::ProBuilder::Face* face,
                                                                                     ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* edges,
                                                                                     ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices,
                                                                                     ::by_ref<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements*>(),
                                              { "InsertVertices",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>(),
                                                  ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, face, edges, vertices, data);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>*
UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectIndexesPerFace(::UnityEngine::ProBuilder::Face* face, int32_t a, int32_t b,
                                                                                ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices,
                                                                                ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* lookup) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements*>(),
                                                                                         { "ConnectIndexesPerFace",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>*>(nullptr, ___internal_method, face, a, b,
                                                                                                                                                          vertices, lookup);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>*
UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectIndexesPerFace(::UnityEngine::ProBuilder::Face* face, ::System::Collections::Generic::List_1<int32_t>* indexes,
                                                                                ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices,
                                                                                ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* lookup, int32_t sharedIndexOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectElements*>(),
                                                           { "ConnectIndexesPerFace",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>*>(nullptr, ___internal_method, face, indexes,
                                                                                                                                                          vertices, lookup, sharedIndexOffset);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectElements() {}
