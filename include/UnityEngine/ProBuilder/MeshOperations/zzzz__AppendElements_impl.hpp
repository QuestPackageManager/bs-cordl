#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__AppendElements_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__PolyShape_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__AppendElements_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ActionResult_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Vertex_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__FaceRebuildData_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__EdgeLookup_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b9d964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c._CreateShapeFromPolygon_b__8_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c::*)(
    ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>)>(&::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c::_CreateShapeFromPolygon_b__8_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2b9d96c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c*>::get(), "<CreateShapeFromPolygon>b__8_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c._FaceWithVerticesAndHole_b__10_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c::*)(
    ::UnityEngine::ProBuilder::Vertex*)>(&::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c::_FaceWithVerticesAndHole_b__10_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2b9d984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c*>::get(), "<FaceWithVerticesAndHole>b__10_0",
                                   std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Vertex*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c._FaceWithVerticesAndHole_b__10_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c::*)(
    ::UnityEngine::ProBuilder::Vertex*)>(&::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c::_FaceWithVerticesAndHole_b__10_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2b9d9a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c*>::get(), "<FaceWithVerticesAndHole>b__10_1",
                                   std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Vertex*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c._InsertVertexInFace_b__18_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ProBuilder::Face* (::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c::*)(::UnityEngine::ProBuilder::FaceRebuildData*)>(
        &::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c::_InsertVertexInFace_b__18_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2b9d9bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c*>::get(), "<InsertVertexInFace>b__18_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::FaceRebuildData*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::MeshOperations::__AppendElements____c::setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c*>::get>(
      std::forward<::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c*>(value));
}
inline ::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c* UnityEngine::ProBuilder::MeshOperations::__AppendElements____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::__AppendElements____c::setStaticF___9__8_0(::System::Func_2<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, int32_t>*, "<>9__8_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c*>::get>(
      std::forward<::System::Func_2<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, int32_t>*>(value));
}
inline ::System::Func_2<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, int32_t>* UnityEngine::ProBuilder::MeshOperations::__AppendElements____c::getStaticF___9__8_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, int32_t>*, "<>9__8_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::__AppendElements____c::setStaticF___9__10_0(::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>*, "<>9__10_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>* UnityEngine::ProBuilder::MeshOperations::__AppendElements____c::getStaticF___9__10_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>*, "<>9__10_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::__AppendElements____c::setStaticF___9__10_1(::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>*, "<>9__10_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>* UnityEngine::ProBuilder::MeshOperations::__AppendElements____c::getStaticF___9__10_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>*, "<>9__10_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c*>::get>();
}
inline void
UnityEngine::ProBuilder::MeshOperations::__AppendElements____c::setStaticF___9__18_0(::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>*, "<>9__18_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* UnityEngine::ProBuilder::MeshOperations::__AppendElements____c::getStaticF___9__18_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>*, "<>9__18_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c*>::get>();
}
inline ::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c* UnityEngine::ProBuilder::MeshOperations::__AppendElements____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c*>());
}
inline void UnityEngine::ProBuilder::MeshOperations::__AppendElements____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::MeshOperations::__AppendElements____c::_CreateShapeFromPolygon_b__8_0(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> arr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c*>::get(), "<CreateShapeFromPolygon>b__8_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, arr);
}
inline ::UnityEngine::Vector3 UnityEngine::ProBuilder::MeshOperations::__AppendElements____c::_FaceWithVerticesAndHole_b__10_0(::UnityEngine::ProBuilder::Vertex* v) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c*>::get(), "<FaceWithVerticesAndHole>b__10_0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Vertex*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, v);
}
inline ::UnityEngine::Vector3 UnityEngine::ProBuilder::MeshOperations::__AppendElements____c::_FaceWithVerticesAndHole_b__10_1(::UnityEngine::ProBuilder::Vertex* v) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c*>::get(), "<FaceWithVerticesAndHole>b__10_1",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Vertex*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, v);
}
inline ::UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::MeshOperations::__AppendElements____c::_InsertVertexInFace_b__18_0(::UnityEngine::ProBuilder::FaceRebuildData* f) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c*>::get(), "<InsertVertexInFace>b__18_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::FaceRebuildData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face*, false>(this, ___internal_method, f);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c::__AppendElements____c() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c__DisplayClass17_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c__DisplayClass17_0::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c__DisplayClass17_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b9ae24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c__DisplayClass17_0*>::get(),
                                                 ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c__DisplayClass17_0._AppendVerticesToEdge_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ProBuilder::Edge (::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c__DisplayClass17_0::*)(::UnityEngine::ProBuilder::EdgeLookup)>(
        &::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c__DisplayClass17_0::_AppendVerticesToEdge_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b9d9d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c__DisplayClass17_0*>::get(), "<AppendVerticesToEdge>b__0",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::EdgeLookup>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::ProBuilder::MeshOperations::__AppendElements____c__DisplayClass17_0::__get_delCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delCount;
}
constexpr int32_t const& UnityEngine::ProBuilder::MeshOperations::__AppendElements____c__DisplayClass17_0::__get_delCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delCount;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::__AppendElements____c__DisplayClass17_0::__set_delCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___delCount = value;
}
inline ::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c__DisplayClass17_0* UnityEngine::ProBuilder::MeshOperations::__AppendElements____c__DisplayClass17_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c__DisplayClass17_0*>());
}
inline void UnityEngine::ProBuilder::MeshOperations::__AppendElements____c__DisplayClass17_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c__DisplayClass17_0*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::__AppendElements____c__DisplayClass17_0::_AppendVerticesToEdge_b__0(::UnityEngine::ProBuilder::EdgeLookup x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c__DisplayClass17_0*>::get(), "<AppendVerticesToEdge>b__0",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::EdgeLookup>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::__AppendElements____c__DisplayClass17_0::__AppendElements____c__DisplayClass17_0() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.AppendFace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ProBuilder::Face* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>,
                                                     ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>, ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>,
                                                     ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>,
                                                     ::UnityEngine::ProBuilder::Face*, ::ArrayW<int32_t, ::Array<int32_t>*>)>(&::UnityEngine::ProBuilder::MeshOperations::AppendElements::AppendFace)> {
  constexpr static std::size_t size = 0x830;
  constexpr static std::size_t addrs = 0x2b93598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "AppendFace", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.AppendFaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> (*)(
    ::UnityEngine::ProBuilder::ProBuilderMesh*,
    ::ArrayW<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, ::Array<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>*>,
    ::ArrayW<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>, ::Array<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>*>,
    ::ArrayW<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>, ::Array<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>>*>,
    ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>, ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*>)>(
    &::UnityEngine::ProBuilder::MeshOperations::AppendElements::AppendFaces)> {
  constexpr static std::size_t size = 0x5d4;
  constexpr static std::size_t addrs = 0x2b93dc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "AppendFaces", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, ::Array<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>, ::Array<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>, ::Array<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.CreatePolygon
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ProBuilder::Face* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<int32_t>*, bool)>(
        &::UnityEngine::ProBuilder::MeshOperations::AppendElements::CreatePolygon)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0x2b9439c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "CreatePolygon", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<int32_t>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.CreatePolygonWithHole
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ProBuilder::Face* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<int32_t>*,
                                                     ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<int32_t>*>*)>(
        &::UnityEngine::ProBuilder::MeshOperations::AppendElements::CreatePolygonWithHole)> {
  constexpr static std::size_t size = 0x994;
  constexpr static std::size_t addrs = 0x2b949cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "CreatePolygonWithHole", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<int32_t>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<int32_t>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.CreateShapeFromPolygon
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::ActionResult* (*)(::UnityEngine::ProBuilder::PolyShape*)>(
    &::UnityEngine::ProBuilder::MeshOperations::AppendElements::CreateShapeFromPolygon)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2b957e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "CreateShapeFromPolygon", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::PolyShape*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.ClearAndRefreshMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(
    &::UnityEngine::ProBuilder::MeshOperations::AppendElements::ClearAndRefreshMesh)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b9581c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "ClearAndRefreshMesh", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.CreateShapeFromPolygon
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ProBuilder::ActionResult* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, float_t, bool)>(
        &::UnityEngine::ProBuilder::MeshOperations::AppendElements::CreateShapeFromPolygon)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b95810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "CreateShapeFromPolygon", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.CreateShapeFromPolygon
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ProBuilder::ActionResult* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, float_t, bool,
                                                             ::UnityEngine::Vector3, ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>*)>(
        &::UnityEngine::ProBuilder::MeshOperations::AppendElements::CreateShapeFromPolygon)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b96420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "CreateShapeFromPolygon", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.CreateShapeFromPolygon
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ProBuilder::ActionResult* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, float_t, bool,
                                                             ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>*)>(
        &::UnityEngine::ProBuilder::MeshOperations::AppendElements::CreateShapeFromPolygon)> {
  constexpr static std::size_t size = 0xbc8;
  constexpr static std::size_t addrs = 0x2b95858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "CreateShapeFromPolygon", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.FaceWithVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ProBuilder::FaceRebuildData* (*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*, bool)>(
        &::UnityEngine::ProBuilder::MeshOperations::AppendElements::FaceWithVertices)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2b94900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "FaceWithVertices", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.FaceWithVerticesAndHole
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ProBuilder::FaceRebuildData* (*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*,
                                                                ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>*)>(
        &::UnityEngine::ProBuilder::MeshOperations::AppendElements::FaceWithVerticesAndHole)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x2b95360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "FaceWithVerticesAndHole", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.TentCapWithVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::FaceRebuildData*>* (*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*)>(
        &::UnityEngine::ProBuilder::MeshOperations::AppendElements::TentCapWithVertices)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x2b96aac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "TentCapWithVertices", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.DuplicateAndFlip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>)>(
        &::UnityEngine::ProBuilder::MeshOperations::AppendElements::DuplicateAndFlip)> {
  constexpr static std::size_t size = 0x680;
  constexpr static std::size_t addrs = 0x2b9642c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "DuplicateAndFlip", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.Bridge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ProBuilder::Face* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::Edge, bool)>(
        &::UnityEngine::ProBuilder::MeshOperations::AppendElements::Bridge)> {
  constexpr static std::size_t size = 0x1298;
  constexpr static std::size_t addrs = 0x2b96e40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "Bridge", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Edge>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Edge>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.AppendVerticesToFace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ProBuilder::Face* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>)>(
        &::UnityEngine::ProBuilder::MeshOperations::AppendElements::AppendVerticesToFace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b983ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "AppendVerticesToFace", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.AppendVerticesToFace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Face* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*,
                                                                                                                       ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, bool)>(
    &::UnityEngine::ProBuilder::MeshOperations::AppendElements::AppendVerticesToFace)> {
  constexpr static std::size_t size = 0xbac;
  constexpr static std::size_t addrs = 0x2b983b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "AppendVerticesToFace", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.AppendVerticesToEdge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge, int32_t)>(
        &::UnityEngine::ProBuilder::MeshOperations::AppendElements::AppendVerticesToEdge)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2b99000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "AppendVerticesToEdge", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Edge>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.AppendVerticesToEdge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>*,
                                                                                 int32_t)>(&::UnityEngine::ProBuilder::MeshOperations::AppendElements::AppendVerticesToEdge)> {
  constexpr static std::size_t size = 0x1da4;
  constexpr static std::size_t addrs = 0x2b99080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "AppendVerticesToEdge", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.InsertVertexInFace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> (*)(
    ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*, ::UnityEngine::Vector3)>(&::UnityEngine::ProBuilder::MeshOperations::AppendElements::InsertVertexInFace)> {
  constexpr static std::size_t size = 0xe88;
  constexpr static std::size_t addrs = 0x2b9b300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "InsertVertexInFace", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.InsertVertexOnEdge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ProBuilder::Vertex* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge, ::UnityEngine::Vector3)>(
        &::UnityEngine::ProBuilder::MeshOperations::AppendElements::InsertVertexOnEdge)> {
  constexpr static std::size_t size = 0x13d8;
  constexpr static std::size_t addrs = 0x2b9c188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "InsertVertexOnEdge", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Edge>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.InsertVertexInMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ProBuilder::Vertex* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
        &::UnityEngine::ProBuilder::MeshOperations::AppendElements::InsertVertexInMesh)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x2b9d560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "InsertVertexInMesh", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::MeshOperations::AppendElements::AppendFace(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                            ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions,
                                                                                                            ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors,
                                                                                                            ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uv0s,
                                                                                                            ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> uv2s,
                                                                                                            ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> uv3s,
                                                                                                            ::UnityEngine::ProBuilder::Face* face, ::ArrayW<int32_t, ::Array<int32_t>*> common) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "AppendFace", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face*, false>(nullptr, ___internal_method, mesh, positions, colors, uv0s, uv2s, uv3s, face, common);
}
inline ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> UnityEngine::ProBuilder::MeshOperations::AppendElements::AppendFaces(
    ::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
    ::ArrayW<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, ::Array<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>*> positions,
    ::ArrayW<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>, ::Array<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>*> colors,
    ::ArrayW<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>, ::Array<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>>*> uvs,
    ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> faces,
    ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> shared) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "AppendFaces", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, ::Array<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>, ::Array<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>, ::Array<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>, false>(nullptr, ___internal_method, mesh, positions, colors, uvs,
                                                                                                                                            faces, shared);
}
inline ::UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::MeshOperations::AppendElements::CreatePolygon(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                               ::System::Collections::Generic::IList_1<int32_t>* indexes, bool unordered) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "CreatePolygon", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<int32_t>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face*, false>(nullptr, ___internal_method, mesh, indexes, unordered);
}
inline ::UnityEngine::ProBuilder::Face*
UnityEngine::ProBuilder::MeshOperations::AppendElements::CreatePolygonWithHole(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<int32_t>* indexes,
                                                                               ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<int32_t>*>* holes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "CreatePolygonWithHole", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<int32_t>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<int32_t>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face*, false>(nullptr, ___internal_method, mesh, indexes, holes);
}
inline ::UnityEngine::ProBuilder::ActionResult* UnityEngine::ProBuilder::MeshOperations::AppendElements::CreateShapeFromPolygon(::UnityEngine::ProBuilder::PolyShape* poly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "CreateShapeFromPolygon", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::PolyShape*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ActionResult*, false>(nullptr, ___internal_method, poly);
}
inline void UnityEngine::ProBuilder::MeshOperations::AppendElements::ClearAndRefreshMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "ClearAndRefreshMesh", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh);
}
inline ::UnityEngine::ProBuilder::ActionResult* UnityEngine::ProBuilder::MeshOperations::AppendElements::CreateShapeFromPolygon(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                                                ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points,
                                                                                                                                float_t extrude, bool flipNormals) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "CreateShapeFromPolygon", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ActionResult*, false>(nullptr, ___internal_method, mesh, points, extrude, flipNormals);
}
/// @param holePoints: ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>* (default: nullptr)
inline ::UnityEngine::ProBuilder::ActionResult* UnityEngine::ProBuilder::MeshOperations::AppendElements::CreateShapeFromPolygon(
    ::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points, float_t extrude, bool flipNormals, ::UnityEngine::Vector3 cameraLookAt,
    ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>* holePoints) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "CreateShapeFromPolygon", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ActionResult*, false>(nullptr, ___internal_method, mesh, points, extrude, flipNormals, cameraLookAt, holePoints);
}
inline ::UnityEngine::ProBuilder::ActionResult*
UnityEngine::ProBuilder::MeshOperations::AppendElements::CreateShapeFromPolygon(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points, float_t extrude, bool flipNormals,
                                                                                ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>* holePoints) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "CreateShapeFromPolygon", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ActionResult*, false>(nullptr, ___internal_method, mesh, points, extrude, flipNormals, holePoints);
}
/// @param unordered: bool (default: true)
inline ::UnityEngine::ProBuilder::FaceRebuildData*
UnityEngine::ProBuilder::MeshOperations::AppendElements::FaceWithVertices(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices, bool unordered) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "FaceWithVertices", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::FaceRebuildData*, false>(nullptr, ___internal_method, vertices, unordered);
}
inline ::UnityEngine::ProBuilder::FaceRebuildData* UnityEngine::ProBuilder::MeshOperations::AppendElements::FaceWithVerticesAndHole(
    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* borderVertices,
    ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>* holes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "FaceWithVerticesAndHole", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::FaceRebuildData*, false>(nullptr, ___internal_method, borderVertices, holes);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::FaceRebuildData*>*
UnityEngine::ProBuilder::MeshOperations::AppendElements::TentCapWithVertices(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* path) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "TentCapWithVertices", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::FaceRebuildData*>*, false>(nullptr, ___internal_method, path);
}
inline void UnityEngine::ProBuilder::MeshOperations::AppendElements::DuplicateAndFlip(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                      ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> faces) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "DuplicateAndFlip", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh, faces);
}
/// @param allowNonManifoldGeometry: bool (default: false)
inline ::UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::MeshOperations::AppendElements::Bridge(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge a,
                                                                                                        ::UnityEngine::ProBuilder::Edge b, bool allowNonManifoldGeometry) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "Bridge", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Edge>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Edge>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face*, false>(nullptr, ___internal_method, mesh, a, b, allowNonManifoldGeometry);
}
inline ::UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::MeshOperations::AppendElements::AppendVerticesToFace(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                                      ::UnityEngine::ProBuilder::Face* face,
                                                                                                                      ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> points) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "AppendVerticesToFace", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face*, false>(nullptr, ___internal_method, mesh, face, points);
}
inline ::UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::MeshOperations::AppendElements::AppendVerticesToFace(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                                      ::UnityEngine::ProBuilder::Face* face,
                                                                                                                      ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> points,
                                                                                                                      bool insertOnEdge) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "AppendVerticesToFace", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face*, false>(nullptr, ___internal_method, mesh, face, points, insertOnEdge);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*
UnityEngine::ProBuilder::MeshOperations::AppendElements::AppendVerticesToEdge(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "AppendVerticesToEdge", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Edge>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*, false>(nullptr, ___internal_method, mesh, edge, count);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*
UnityEngine::ProBuilder::MeshOperations::AppendElements::AppendVerticesToEdge(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                              ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>* edges, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "AppendVerticesToEdge", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*, false>(nullptr, ___internal_method, mesh, edges, count);
}
inline ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>
UnityEngine::ProBuilder::MeshOperations::AppendElements::InsertVertexInFace(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face, ::UnityEngine::Vector3 point) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "InsertVertexInFace", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>, false>(nullptr, ___internal_method, mesh, face, point);
}
inline ::UnityEngine::ProBuilder::Vertex* UnityEngine::ProBuilder::MeshOperations::AppendElements::InsertVertexOnEdge(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                                      ::UnityEngine::ProBuilder::Edge originalEdge, ::UnityEngine::Vector3 point) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "InsertVertexOnEdge", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Edge>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Vertex*, false>(nullptr, ___internal_method, mesh, originalEdge, point);
}
inline ::UnityEngine::ProBuilder::Vertex* UnityEngine::ProBuilder::MeshOperations::AppendElements::InsertVertexInMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 point,
                                                                                                                      ::UnityEngine::Vector3 normal) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>::get(), "InsertVertexInMesh", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Vertex*, false>(nullptr, ___internal_method, mesh, point, normal);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::AppendElements::AppendElements() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
