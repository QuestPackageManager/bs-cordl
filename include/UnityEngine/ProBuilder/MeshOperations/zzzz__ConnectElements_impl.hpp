#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__ConnectElements_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__WingedEdge_def.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__ConnectElements_def.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__ConnectFaceRebuildData_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__SimpleTuple_2_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ActionResult_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Vertex_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__FaceRebuildData_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__EdgeLookup_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ba95a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c._Connect_b__0_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* (
    ::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::*)(::UnityEngine::ProBuilder::Face*)>(&::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::_Connect_b__0_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ba95b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get(), "<Connect>b__0_0",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c._Connect_b__2_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::*)(::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::_Connect_b__2_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ba95c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get(), "<Connect>b__2_1",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c._Connect_b__2_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ProBuilder::FaceRebuildData* (::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::*)(::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*)>(
        &::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::_Connect_b__2_2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ba95e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get(), "<Connect>b__2_2", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c._Connect_b__3_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::*)(::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::_Connect_b__3_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ba95f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get(), "<Connect>b__3_0",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c._Connect_b__3_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ProBuilder::FaceRebuildData* (::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::*)(::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*)>(
        &::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::_Connect_b__3_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ba9610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get(), "<Connect>b__3_1", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c._Connect_b__3_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* (
    ::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::*)(::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*)>(
    &::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::_Connect_b__3_2)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ba9628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get(), "<Connect>b__3_2", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c._Connect_b__3_4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Edge (::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::*)(
    ::UnityEngine::ProBuilder::EdgeLookup)>(&::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::_Connect_b__3_4)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ba9650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get(), "<Connect>b__3_4", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::EdgeLookup>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c._ConnectEdgesInFace_b__5_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* (
    ::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::*)(int32_t)>(&::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::_ConnectEdgesInFace_b__5_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2ba9658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get(), "<ConnectEdgesInFace>b__5_0",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c._ConnectEdgesInFace_b__5_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<int32_t>* (
    ::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::*)(int32_t)>(&::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::_ConnectEdgesInFace_b__5_1)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2ba96c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get(), "<ConnectEdgesInFace>b__5_1",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c._ConnectEdgesInFace_b__5_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Edge (::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::*)(
    ::UnityEngine::ProBuilder::WingedEdge*)>(&::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::_ConnectEdgesInFace_b__5_2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ba9738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get(), "<ConnectEdgesInFace>b__5_2", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c._InsertVertices_b__6_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Edge (::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::*)(
    ::UnityEngine::ProBuilder::WingedEdge*)>(&::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::_InsertVertices_b__6_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ba9750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get(), "<InsertVertices>b__6_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c._ConnectIndexesPerFace_b__8_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* (
    ::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::*)(int32_t)>(&::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::_ConnectIndexesPerFace_b__8_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2ba9768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get(), "<ConnectIndexesPerFace>b__8_0",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c._ConnectIndexesPerFace_b__8_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<int32_t>* (
    ::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::*)(int32_t)>(&::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::_ConnectIndexesPerFace_b__8_1)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2ba97d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get(), "<ConnectIndexesPerFace>b__8_1",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c._ConnectIndexesPerFace_b__8_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<int32_t>* (
    ::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::*)(int32_t)>(&::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::_ConnectIndexesPerFace_b__8_2)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2ba9848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get(), "<ConnectIndexesPerFace>b__8_2",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get>(
      std::forward<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>(value));
}
inline ::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c* UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::setStaticF___9__0_0(
    ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>*, "<>9__0_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>*
UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::getStaticF___9__0_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>*, "<>9__0_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::setStaticF___9__2_1(::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*, "<>9__2_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::getStaticF___9__2_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*, "<>9__2_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::setStaticF___9__2_2(
    ::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::UnityEngine::ProBuilder::FaceRebuildData*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::UnityEngine::ProBuilder::FaceRebuildData*>*, "<>9__2_2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::UnityEngine::ProBuilder::FaceRebuildData*>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::UnityEngine::ProBuilder::FaceRebuildData*>*
UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::getStaticF___9__2_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::UnityEngine::ProBuilder::FaceRebuildData*>*, "<>9__2_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::setStaticF___9__3_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*, "<>9__3_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*, "<>9__3_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::setStaticF___9__3_1(
    ::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::UnityEngine::ProBuilder::FaceRebuildData*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::UnityEngine::ProBuilder::FaceRebuildData*>*, "<>9__3_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::UnityEngine::ProBuilder::FaceRebuildData*>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::UnityEngine::ProBuilder::FaceRebuildData*>*
UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::getStaticF___9__3_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::UnityEngine::ProBuilder::FaceRebuildData*>*, "<>9__3_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::setStaticF___9__3_2(
    ::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>*, "<>9__3_2",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>*
UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::getStaticF___9__3_2() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>*, "<>9__3_2",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::setStaticF___9__3_4(::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>*, "<>9__3_4",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>* UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::getStaticF___9__3_4() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>*, "<>9__3_4",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get>();
}
inline void
UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::setStaticF___9__5_0(::System::Func_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>*, "<>9__5_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get>(
      std::forward<::System::Func_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>*>(value));
}
inline ::System::Func_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>* UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::getStaticF___9__5_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>*, "<>9__5_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::setStaticF___9__5_1(::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>*, "<>9__5_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get>(
      std::forward<::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>*>(value));
}
inline ::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>* UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::getStaticF___9__5_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>*, "<>9__5_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::setStaticF___9__5_2(::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*, "<>9__5_2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::getStaticF___9__5_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*, "<>9__5_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::setStaticF___9__6_0(::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*, "<>9__6_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::getStaticF___9__6_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*, "<>9__6_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get>();
}
inline void
UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::setStaticF___9__8_0(::System::Func_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>*, "<>9__8_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get>(
      std::forward<::System::Func_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>*>(value));
}
inline ::System::Func_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>* UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::getStaticF___9__8_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>*, "<>9__8_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::setStaticF___9__8_1(::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>*, "<>9__8_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get>(
      std::forward<::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>*>(value));
}
inline ::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>* UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::getStaticF___9__8_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>*, "<>9__8_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::setStaticF___9__8_2(::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>*, "<>9__8_2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get>(
      std::forward<::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>*>(value));
}
inline ::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>* UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::getStaticF___9__8_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>*, "<>9__8_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get>();
}
inline ::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c* UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>());
}
inline void UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*
UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::_Connect_b__0_0(::UnityEngine::ProBuilder::Face* x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get(), "<Connect>b__0_0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, false>(this, ___internal_method, x);
}
inline int32_t UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::_Connect_b__2_1(::UnityEngine::ProBuilder::Face* x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get(), "<Connect>b__2_1",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::FaceRebuildData*
UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::_Connect_b__2_2(::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get(), "<Connect>b__2_2", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::FaceRebuildData*, false>(this, ___internal_method, x);
}
inline int32_t UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::_Connect_b__3_0(::UnityEngine::ProBuilder::Face* x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get(), "<Connect>b__3_0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::FaceRebuildData*
UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::_Connect_b__3_1(::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get(), "<Connect>b__3_1", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::FaceRebuildData*, false>(this, ___internal_method, x);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*
UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::_Connect_b__3_2(::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get(), "<Connect>b__3_2", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, false>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::_Connect_b__3_4(::UnityEngine::ProBuilder::EdgeLookup x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get(), "<Connect>b__3_4", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::EdgeLookup>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge, false>(this, ___internal_method, x);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::_ConnectEdgesInFace_b__5_0(int32_t x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get(), "<ConnectEdgesInFace>b__5_0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*, false>(this, ___internal_method, x);
}
inline ::System::Collections::Generic::List_1<int32_t>* UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::_ConnectEdgesInFace_b__5_1(int32_t x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get(), "<ConnectEdgesInFace>b__5_1",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>*, false>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::_ConnectEdgesInFace_b__5_2(::UnityEngine::ProBuilder::WingedEdge* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get(), "<ConnectEdgesInFace>b__5_2", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge, false>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::_InsertVertices_b__6_0(::UnityEngine::ProBuilder::WingedEdge* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get(), "<InsertVertices>b__6_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge, false>(this, ___internal_method, x);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::_ConnectIndexesPerFace_b__8_0(int32_t x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get(), "<ConnectIndexesPerFace>b__8_0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*, false>(this, ___internal_method, x);
}
inline ::System::Collections::Generic::List_1<int32_t>* UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::_ConnectIndexesPerFace_b__8_1(int32_t x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get(), "<ConnectIndexesPerFace>b__8_1",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>*, false>(this, ___internal_method, x);
}
inline ::System::Collections::Generic::List_1<int32_t>* UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::_ConnectIndexesPerFace_b__8_2(int32_t x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c*>::get(), "<ConnectIndexesPerFace>b__8_2",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>*, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c::__ConnectElements____c() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass2_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass2_0::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ba6b78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass2_0*>::get(),
                                                 ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass2_0._Connect_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass2_0::*)(int32_t)>(
    &::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass2_0::_Connect_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2ba98b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass2_0*>::get(), "<Connect>b__0",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass2_0._Connect_b__3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass2_0::*)(int32_t)>(
    &::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass2_0::_Connect_b__3)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ba9910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass2_0*>::get(), "<Connect>b__3",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass2_0::__get_lookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookup;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*> const&
UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass2_0::__get_lookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookup;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass2_0::__set_lookup(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lookup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ProBuilder::ProBuilderMesh*& UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass2_0::__get_mesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mesh;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::ProBuilderMesh*> const& UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass2_0::__get_mesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mesh;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass2_0::__set_mesh(::UnityEngine::ProBuilder::ProBuilderMesh* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass2_0* UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass2_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass2_0*>());
}
inline void UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass2_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass2_0*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass2_0::_Connect_b__0(int32_t x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass2_0*>::get(), "<Connect>b__0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x);
}
inline int32_t UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass2_0::_Connect_b__3(int32_t x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass2_0*>::get(), "<Connect>b__3",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass2_0::__ConnectElements____c__DisplayClass2_0() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass3_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass3_0::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ba953c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass3_0*>::get(),
                                                 ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass3_0._Connect_b__3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass3_0::*)(
    ::UnityEngine::ProBuilder::Edge)>(&::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass3_0::_Connect_b__3)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2ba9954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass3_0*>::get(), "<Connect>b__3",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Edge>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass3_0::__get_appended() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___appended;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> const&
UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass3_0::__get_appended() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___appended;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass3_0::__set_appended(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___appended)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass3_0* UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass3_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass3_0*>());
}
inline void UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass3_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass3_0*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass3_0::_Connect_b__3(::UnityEngine::ProBuilder::Edge x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass3_0*>::get(), "<Connect>b__3",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Edge>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::__ConnectElements____c__DisplayClass3_0::__ConnectElements____c__DisplayClass3_0() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements.Connect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> (*)(
    ::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ConnectElements::Connect)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x2ba440c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ConnectElements*>::get(), "Connect", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements.Connect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::SimpleTuple_2<
    ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>, ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>> (*)(
    ::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ConnectElements::Connect)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2ba5c5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ConnectElements*>::get(), "Connect", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements.Connect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (*)(
    ::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<int32_t>*)>(&::UnityEngine::ProBuilder::MeshOperations::ConnectElements::Connect)> {
  constexpr static std::size_t size = 0xe84;
  constexpr static std::size_t addrs = 0x2ba5cf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ConnectElements*>::get(), "Connect", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements.Connect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::UnityEngine::ProBuilder::ActionResult* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*,
                                                 ByRef<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>>,
                                                 ByRef<::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>>, bool, bool,
                                                 ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*)>(&::UnityEngine::ProBuilder::MeshOperations::ConnectElements::Connect)> {
  constexpr static std::size_t size = 0x1590;
  constexpr static std::size_t addrs = 0x2ba46cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ConnectElements*>::get(), "Connect", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements.ConnectEdgesInFace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<
    ::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>* (*)(::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::WingedEdge*,
                                                                             ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectEdgesInFace)> {
  constexpr static std::size_t size = 0x7c0;
  constexpr static std::size_t addrs = 0x2ba8d7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ConnectElements*>::get(), "ConnectEdgesInFace", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements.ConnectEdgesInFace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<
    ::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>* (*)(::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*,
                                                                             ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectEdgesInFace)> {
  constexpr static std::size_t size = 0x99c;
  constexpr static std::size_t addrs = 0x2ba83e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ConnectElements*>::get(), "ConnectEdgesInFace", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements.InsertVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*,
    ByRef<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>)>(&::UnityEngine::ProBuilder::MeshOperations::ConnectElements::InsertVertices)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x2ba7e98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ConnectElements*>::get(), "InsertVertices", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements.ConnectIndexesPerFace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>* (*)(::UnityEngine::ProBuilder::Face*, int32_t, int32_t,
                                                                                                                    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*,
                                                                                                                    ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectIndexesPerFace)> {
  constexpr static std::size_t size = 0x8b0;
  constexpr static std::size_t addrs = 0x2ba75e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ConnectElements*>::get(), "ConnectIndexesPerFace", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectElements.ConnectIndexesPerFace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>* (*)(::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::List_1<int32_t>*,
                                                                                                                    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*,
                                                                                                                    ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*, int32_t)>(
    &::UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectIndexesPerFace)> {
  constexpr static std::size_t size = 0xa68;
  constexpr static std::size_t addrs = 0x2ba6b80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ConnectElements*>::get(), "ConnectIndexesPerFace", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>
UnityEngine::ProBuilder::MeshOperations::ConnectElements::Connect(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ConnectElements*>::get(), "Connect", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>, false>(nullptr, ___internal_method, mesh, faces);
}
inline ::UnityEngine::ProBuilder::SimpleTuple_2<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>,
                                                ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>>
UnityEngine::ProBuilder::MeshOperations::ConnectElements::Connect(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ConnectElements*>::get(), "Connect", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::SimpleTuple_2<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>,
                                                                                      ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>>,
                                             false>(nullptr, ___internal_method, mesh, edges);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> UnityEngine::ProBuilder::MeshOperations::ConnectElements::Connect(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                              ::System::Collections::Generic::IList_1<int32_t>* indexes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ConnectElements*>::get(), "Connect", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(nullptr, ___internal_method, mesh, indexes);
}
/// @param returnFaces: bool (default: false)
/// @param returnEdges: bool (default: false)
/// @param faceMask: ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* (default: nullptr)
inline ::UnityEngine::ProBuilder::ActionResult*
UnityEngine::ProBuilder::MeshOperations::ConnectElements::Connect(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges,
                                                                  ByRef<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>> addedFaces,
                                                                  ByRef<::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>> connections, bool returnFaces,
                                                                  bool returnEdges, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* faceMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ConnectElements*>::get(), "Connect", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ActionResult*, false>(nullptr, ___internal_method, mesh, edges, addedFaces, connections, returnFaces, returnEdges, faceMask);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>*
UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectEdgesInFace(::UnityEngine::ProBuilder::Face* face, ::UnityEngine::ProBuilder::WingedEdge* a, ::UnityEngine::ProBuilder::WingedEdge* b,
                                                                             ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ConnectElements*>::get(), "ConnectEdgesInFace", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>*, false>(nullptr, ___internal_method, face, a,
                                                                                                                                                                 b, vertices);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>*
UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectEdgesInFace(::UnityEngine::ProBuilder::Face* face,
                                                                             ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* edges,
                                                                             ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ConnectElements*>::get(), "ConnectEdgesInFace", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>*, false>(nullptr, ___internal_method, face,
                                                                                                                                                                 edges, vertices);
}
inline bool UnityEngine::ProBuilder::MeshOperations::ConnectElements::InsertVertices(::UnityEngine::ProBuilder::Face* face,
                                                                                     ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* edges,
                                                                                     ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices,
                                                                                     ByRef<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ConnectElements*>::get(), "InsertVertices", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, face, edges, vertices, data);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>*
UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectIndexesPerFace(::UnityEngine::ProBuilder::Face* face, int32_t a, int32_t b,
                                                                                ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices,
                                                                                ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* lookup) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ConnectElements*>::get(), "ConnectIndexesPerFace", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>*, false>(nullptr, ___internal_method, face, a,
                                                                                                                                                                 b, vertices, lookup);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>*
UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectIndexesPerFace(::UnityEngine::ProBuilder::Face* face, ::System::Collections::Generic::List_1<int32_t>* indexes,
                                                                                ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices,
                                                                                ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* lookup, int32_t sharedIndexOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ConnectElements*>::get(), "ConnectIndexesPerFace", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>*, false>(
      nullptr, ___internal_method, face, indexes, vertices, lookup, sharedIndexOffset);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectElements() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
