#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/MeshOperations/CombineMeshes.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__CombineMeshes_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__CombineMeshes_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__SharedVertex_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Vertex_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x476a390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c._SplitByMaxVertexCount_b__5_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c::*)(::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c::_SplitByMaxVertexCount_b__5_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x476a398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c*>::get(), "<SplitByMaxVertexCount>b__5_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c::setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c*>::get>(
      std::forward<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c*>(value));
}
inline ::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c* UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c::setStaticF___9__5_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*, "<>9__5_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c::getStaticF___9__5_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*, "<>9__5_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c::_SplitByMaxVertexCount_b__5_0(::UnityEngine::ProBuilder::Face* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c*>::get(), "<SplitByMaxVertexCount>b__5_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c* UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c::CombineMeshes___c() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::CombineMeshes.Combine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<
    ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* (*)(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::CombineMeshes::Combine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x476733c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes*>::get(), "Combine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::CombineMeshes.Combine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<
    ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* (*)(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*,
                                                              ::UnityEngine::ProBuilder::ProBuilderMesh*)>(&::UnityEngine::ProBuilder::MeshOperations::CombineMeshes::Combine)> {
  constexpr static std::size_t size = 0xbbc;
  constexpr static std::size_t addrs = 0x47677d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes*>::get(), "Combine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::CombineMeshes.CombineToNewMeshes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<
    ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* (*)(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::CombineMeshes::CombineToNewMeshes)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x4767340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes*>::get(), "CombineToNewMeshes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::CombineMeshes.AccumulateMeshesInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, int32_t, ::ByRef<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>,
    ::ByRef<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>, ::ByRef<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>,
    ::ByRef<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SharedVertex*>*>, ::ByRef<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SharedVertex*>*>,
    ::ByRef<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>, ::UnityEngine::Transform*)>(&::UnityEngine::ProBuilder::MeshOperations::CombineMeshes::AccumulateMeshesInfo)> {
  constexpr static std::size_t size = 0xd6c;
  constexpr static std::size_t addrs = 0x4768394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes*>::get(), "AccumulateMeshesInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SharedVertex*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SharedVertex*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::CombineMeshes.CreateMeshFromSplit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> (*)(
    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*,
    ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*, ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*, ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*,
    ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>)>(&::UnityEngine::ProBuilder::MeshOperations::CombineMeshes::CreateMeshFromSplit)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x4769e24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes*>::get(), "CreateMeshFromSplit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::CombineMeshes.SplitByMaxVertexCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* (*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*,
                                                                                                     ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*,
                                                                                                     ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*,
                                                                                                     ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*, uint32_t)>(
    &::UnityEngine::ProBuilder::MeshOperations::CombineMeshes::SplitByMaxVertexCount)> {
  constexpr static std::size_t size = 0xd24;
  constexpr static std::size_t addrs = 0x4769100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes*>::get(), "SplitByMaxVertexCount", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*
UnityEngine::ProBuilder::MeshOperations::CombineMeshes::Combine(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* meshes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes*>::get(), "Combine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, false>(nullptr, ___internal_method, meshes);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*
UnityEngine::ProBuilder::MeshOperations::CombineMeshes::Combine(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* meshes,
                                                                ::UnityEngine::ProBuilder::ProBuilderMesh* meshTarget) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes*>::get(), "Combine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, false>(nullptr, ___internal_method, meshes, meshTarget);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*
UnityEngine::ProBuilder::MeshOperations::CombineMeshes::CombineToNewMeshes(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* meshes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes*>::get(), "CombineToNewMeshes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, false>(nullptr, ___internal_method, meshes);
}
inline void UnityEngine::ProBuilder::MeshOperations::CombineMeshes::AccumulateMeshesInfo(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* meshes,
                                                                                         int32_t offset, ::ByRef<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*> vertices,
                                                                                         ::ByRef<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*> faces,
                                                                                         ::ByRef<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*> autoUvFaces,
                                                                                         ::ByRef<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SharedVertex*>*> sharedVertices,
                                                                                         ::ByRef<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SharedVertex*>*> sharedTextures,
                                                                                         ::ByRef<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*> materialMap,
                                                                                         ::UnityEngine::Transform* targetTransform) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes*>::get(), "AccumulateMeshesInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SharedVertex*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SharedVertex*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, meshes, offset, vertices, faces, autoUvFaces, sharedVertices, sharedTextures, materialMap, targetTransform);
}
inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> UnityEngine::ProBuilder::MeshOperations::CombineMeshes::CreateMeshFromSplit(
    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* faces,
    ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* sharedVertexLookup, ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* sharedTextureLookup,
    ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* remap, ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> materials) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes*>::get(), "CreateMeshFromSplit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, false>(nullptr, ___internal_method, vertices, faces, sharedVertexLookup, sharedTextureLookup, remap,
                                                                                                         materials);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* UnityEngine::ProBuilder::MeshOperations::CombineMeshes::SplitByMaxVertexCount(
    ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* faces,
    ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* sharedVertices,
    ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* sharedTextures, uint32_t maxVertexCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes*>::get(), "SplitByMaxVertexCount", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, false>(nullptr, ___internal_method, vertices, faces,
                                                                                                                                                  sharedVertices, sharedTextures, maxVertexCount);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::CombineMeshes::CombineMeshes() {}
